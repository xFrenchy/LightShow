

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MusicType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MusicType_2006618433_hpp
#define MusicType_2006618433_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport MusicType {
  public:
    MusicType();

    MusicType(bool playing,const ::dds::core::optional< std::string >& name,const ::dds::core::optional< std::string >& genre);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    MusicType (MusicType&&) = default;
    MusicType& operator=(MusicType&&) = default;
    MusicType& operator=(const MusicType&) = default;
    MusicType(const MusicType&) = default;
    #else
    MusicType(MusicType&& other_) OMG_NOEXCEPT;  
    MusicType& operator=(MusicType&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    bool& playing() OMG_NOEXCEPT {
        return m_playing_;
    }

    const bool& playing() const OMG_NOEXCEPT {
        return m_playing_;
    }

    void playing(bool value) {
        m_playing_ = value;
    }

    ::dds::core::optional< std::string >& name() OMG_NOEXCEPT {
        return m_name_;
    }

    const ::dds::core::optional< std::string >& name() const OMG_NOEXCEPT {
        return m_name_;
    }

    void name(const ::dds::core::optional< std::string >& value) {
        m_name_ = value;
    }

    void name(::dds::core::optional< std::string >&& value) {
        m_name_ = std::move(value);
    }
    ::dds::core::optional< std::string >& genre() OMG_NOEXCEPT {
        return m_genre_;
    }

    const ::dds::core::optional< std::string >& genre() const OMG_NOEXCEPT {
        return m_genre_;
    }

    void genre(const ::dds::core::optional< std::string >& value) {
        m_genre_ = value;
    }

    void genre(::dds::core::optional< std::string >&& value) {
        m_genre_ = std::move(value);
    }

    bool operator == (const MusicType& other_) const;
    bool operator != (const MusicType& other_) const;

    void swap(MusicType& other_) OMG_NOEXCEPT ;

  private:

    bool m_playing_;
    ::dds::core::optional< std::string > m_name_;
    ::dds::core::optional< std::string > m_genre_;

};

inline void swap(MusicType& a, MusicType& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const MusicType& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< MusicType > {
            NDDSUSERDllExport static std::string value() {
                return "MusicType";
            }
        };

        template<>
        struct is_topic_type< MusicType > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< MusicType > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const MusicType& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(MusicType& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(MusicType& sample);

            NDDSUSERDllExport 
            static void allocate_sample(MusicType& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< MusicType > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< MusicType > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // MusicType_2006618433_hpp

