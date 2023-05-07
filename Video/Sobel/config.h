#pragma once
#ifndef CONFIG_H
#include <map>
#include <string>

std::map<std::string, MyRGB> G_color_map = {
	{"green", MyRGB(57, 255, 20)},
	{"red", MyRGB(255, 51, 51)},
	{"gold", MyRGB(255, 255, 51)},
	{"purple", MyRGB(204, 153, 255)}
};

std::string G_color_dict_key[] = { "green", "red", "gold", "purple" };

int G_color_rotation = 0;

#endif // !CONFIG_H
