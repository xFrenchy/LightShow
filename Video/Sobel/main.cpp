/*
-Anthony Dupont
-5/17/2021
-Sobel filter applied to a camera feed
*/

#include <opencv2/opencv.hpp>
#include <dds/pub/ddspub.hpp>
#include <dds/sub/ddssub.hpp>
#include <dds/core/ddscore.hpp>
#include <rti/util/util.hpp>      // for sleep()
#include <rti/config/Logger.hpp>  // for logging

#include <iostream>

#include "functions.h"
#include "../Type/MusicType.hpp"

using namespace std;

int process_data(dds::sub::DataReader<MusicType> reader, cv::Mat &frame, cv::Mat &image)
{
	// Take all samples
	int count = 0;
	dds::sub::LoanedSamples<MusicType> samples = reader.take();
	for (const auto& sample : samples) {
		if (sample.info().valid()) {
			count++;
			std::cout << sample.data() << std::endl;
			if (sample.data().playing()) {
				image = applySobel(frame, EFilter_Sobel::rotate_all_colors);
			}
		}
		else {
			std::cout << "Instance state changed to "
				<< sample.info().state().instance_state() << std::endl;
		}
	}

	return count;
} // The LoanedSamples destructor returns the loan

int main(int argc, char** argv)
{
	cv::VideoCapture cap(0);	//default video camera
	cv::Mat frame;
	cv::Mat image;

	if (!cap.isOpened()) {
		cout << "Could not open the video camera\n";
		cin.get();	//wait for any key press
		return -1;
	}

	string windowName = "Sobel Video Filter";
	cv::namedWindow(windowName); // Create a window
	EFilter_Sobel status = EFilter_Sobel::rainbow;

	dds::domain::DomainParticipant participant(0);
	dds::topic::Topic<MusicType> topic(participant, "Example MusicType");
	dds::sub::Subscriber subscriber(participant);
	dds::sub::DataReader<MusicType> reader(subscriber, topic);
	unsigned int samples_read = 0;
	dds::sub::cond::ReadCondition read_condition(
		reader,
		dds::sub::status::DataState::any(),
		[reader, &samples_read, &frame, &image]() { samples_read += process_data(reader, frame, image); });

	// WaitSet will be woken when the attached condition is triggered
	dds::core::cond::WaitSet waitset;
	waitset += read_condition;

	cap.read(frame);
	image = applySobel(frame, status);

	while (true) {
		//Mat frame;
		bool bSuccess = cap.read(frame); // read a new frame from video

		//Breaking the while loop if the frames cannot be captured
		if (!bSuccess)
		{
			cout << "Video camera is disconnected\n";
			cin.get();
			break;
		}
		
		//TODO: Put this in a separate thread
		waitset.dispatch(dds::core::Duration(0.01));
		//imshow requires either pollkey or waitkey to be called for GUI housekeeping
		//TODO: check for esq key
		cv::pollKey();
		/*EFilter_Sobel newStatus = userInput();
		if (newStatus != EFilter_Sobel::no_change) {
			status = newStatus;
		}*/


		//cv::Mat image = applySobel(frame, status);
		
		cv::imshow(windowName, image);
	}

	cv::waitKey(0); // Wait for any keystroke in the window

	cv::destroyWindow(windowName);

	return 0;
}