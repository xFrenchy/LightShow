

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MusicType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "MusicType.hpp"
#include "MusicTypePlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- MusicType: 

MusicType::MusicType() :
    m_playing_ (0)  {
}   

MusicType::MusicType (bool playing,const ::dds::core::optional< std::string >& name,const ::dds::core::optional< std::string >& genre):
    m_playing_( playing ),
    m_name_( name ),
    m_genre_( genre ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
MusicType::MusicType(MusicType&& other_) OMG_NOEXCEPT  :m_playing_ (std::move(other_.m_playing_))
,
m_name_ (std::move(other_.m_name_))
,
m_genre_ (std::move(other_.m_genre_))
{
} 

MusicType& MusicType::operator=(MusicType&&  other_) OMG_NOEXCEPT {
    MusicType tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void MusicType::swap(MusicType& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_playing_, other_.m_playing_);
    swap(m_name_, other_.m_name_);
    swap(m_genre_, other_.m_genre_);
}  

bool MusicType::operator == (const MusicType& other_) const {
    if (m_playing_ != other_.m_playing_) {
        return false;
    }
    if (m_name_ != other_.m_name_) {
        return false;
    }
    if (m_genre_ != other_.m_genre_) {
        return false;
    }
    return true;
}
bool MusicType::operator != (const MusicType& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const MusicType& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "playing: " << sample.playing()<<", ";
    o << "name: " << sample.name()<<", ";
    o << "genre: " << sample.genre() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< MusicType > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MusicType_g_tc_name_string;
                static DDS_TypeCode MusicType_g_tc_genre_string;

                static DDS_TypeCode_Member MusicType_g_tc_members[3]=
                {

                    {
                        (char *)"playing",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"name",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"genre",/* Member name */
                        {
                            2,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_NONKEY_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode MusicType_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"MusicType", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        MusicType_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for MusicType*/

                if (is_initialized) {
                    return &MusicType_g_tc;
                }

                MusicType_g_tc_name_string = initialize_string_typecode((64L));
                MusicType_g_tc_genre_string = initialize_string_typecode((32L));

                MusicType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                MusicType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&::rti::topic::interpreter::initialize_bool_typecode();
                MusicType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&MusicType_g_tc_name_string;
                MusicType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&MusicType_g_tc_genre_string;

                /* Initialize the values for member annotations. */
                MusicType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_BOOLEAN;
                MusicType_g_tc_members[0]._annotations._defaultValue._u.boolean_value = 0;

                MusicType_g_tc._data._sampleAccessInfo = sample_access_info();
                MusicType_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &MusicType_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                MusicType *sample;

                static RTIXCdrMemberAccessInfo MusicType_g_memberAccessInfos[3] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo MusicType_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &MusicType_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    MusicType);
                if (sample == NULL) {
                    return NULL;
                }

                MusicType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->playing() - (char *)sample);

                MusicType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->name() - (char *)sample);

                MusicType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->genre() - (char *)sample);

                MusicType_g_sampleAccessInfo.memberAccessInfos = 
                MusicType_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(MusicType);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        MusicType_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        MusicType_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                MusicType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                MusicType_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< MusicType >;

                MusicType_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &MusicType_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin MusicType_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &MusicType_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< MusicType >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< MusicType >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< MusicType >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                MusicTypePlugin_new,
                MusicTypePlugin_delete);
        }

        std::vector<char>& topic_type_support< MusicType >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const MusicType& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = MusicTypePlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = MusicTypePlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< MusicType >::from_cdr_buffer(MusicType& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = MusicTypePlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create MusicType from cdr buffer");
        }

        void topic_type_support< MusicType >::reset_sample(MusicType& sample) 
        {
            sample.playing(0);
            ::rti::topic::reset_sample(sample.name());
            ::rti::topic::reset_sample(sample.genre());
        }

        void topic_type_support< MusicType >::allocate_sample(MusicType& sample, int, int) 
        {
            RTIOsapiUtility_unusedParameter(sample);
        }

    }
}  

