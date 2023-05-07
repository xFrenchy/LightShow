

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MusicType.idl
using RTI Code Generator (rtiddsgen) version 3.1.2.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef MusicTypePlugin_2006618433_h
#define MusicTypePlugin_2006618433_h

#include "MusicType.hpp"

struct RTICdrStream;

#ifndef pres_typePlugin_h
#include "pres/pres_typePlugin.h"
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#define MusicTypePlugin_get_sample PRESTypePluginDefaultEndpointData_getSample

#define MusicTypePlugin_get_buffer PRESTypePluginDefaultEndpointData_getBuffer 
#define MusicTypePlugin_return_buffer PRESTypePluginDefaultEndpointData_returnBuffer

#define MusicTypePlugin_create_sample PRESTypePluginDefaultEndpointData_createSample 
#define MusicTypePlugin_destroy_sample PRESTypePluginDefaultEndpointData_deleteSample 

/* --------------------------------------------------------------------------------------
Support functions:
* -------------------------------------------------------------------------------------- */

NDDSUSERDllExport extern MusicType*
MusicTypePluginSupport_create_data_w_params(
    const struct DDS_TypeAllocationParams_t * alloc_params);

NDDSUSERDllExport extern MusicType*
MusicTypePluginSupport_create_data_ex(RTIBool allocate_pointers);

NDDSUSERDllExport extern MusicType*
MusicTypePluginSupport_create_data(void);

NDDSUSERDllExport extern RTIBool 
MusicTypePluginSupport_copy_data(
    MusicType *out,
    const MusicType *in);

NDDSUSERDllExport extern void 
MusicTypePluginSupport_destroy_data_w_params(
    MusicType *sample,
    const struct DDS_TypeDeallocationParams_t * dealloc_params);

NDDSUSERDllExport extern void 
MusicTypePluginSupport_destroy_data_ex(
    MusicType *sample,RTIBool deallocate_pointers);

NDDSUSERDllExport extern void 
MusicTypePluginSupport_destroy_data(
    MusicType *sample);

NDDSUSERDllExport extern void 
MusicTypePluginSupport_print_data(
    const MusicType *sample,
    const char *desc,
    unsigned int indent);

/* ----------------------------------------------------------------------------
Callback functions:
* ---------------------------------------------------------------------------- */

NDDSUSERDllExport extern PRESTypePluginParticipantData 
MusicTypePlugin_on_participant_attached(
    void *registration_data, 
    const struct PRESTypePluginParticipantInfo *participant_info,
    RTIBool top_level_registration, 
    void *container_plugin_context,
    RTICdrTypeCode *typeCode);

NDDSUSERDllExport extern void 
MusicTypePlugin_on_participant_detached(
    PRESTypePluginParticipantData participant_data);

NDDSUSERDllExport extern PRESTypePluginEndpointData 
MusicTypePlugin_on_endpoint_attached(
    PRESTypePluginParticipantData participant_data,
    const struct PRESTypePluginEndpointInfo *endpoint_info,
    RTIBool top_level_registration, 
    void *container_plugin_context);

NDDSUSERDllExport extern void 
MusicTypePlugin_on_endpoint_detached(
    PRESTypePluginEndpointData endpoint_data);

NDDSUSERDllExport extern void    
MusicTypePlugin_return_sample(
    PRESTypePluginEndpointData endpoint_data,
    MusicType *sample,
    void *handle);    

NDDSUSERDllExport extern RTIBool 
MusicTypePlugin_copy_sample(
    PRESTypePluginEndpointData endpoint_data,
    MusicType *out,
    const MusicType *in);

/* ----------------------------------------------------------------------------
(De)Serialize functions:
* ------------------------------------------------------------------------- */

NDDSUSERDllExport extern RTIBool
MusicTypePlugin_serialize_to_cdr_buffer(
    char * buffer,
    unsigned int * length,
    const MusicType *sample,
    ::dds::core::policy::DataRepresentationId representation
    = ::dds::core::policy::DataRepresentation::xcdr()); 

NDDSUSERDllExport extern RTIBool 
MusicTypePlugin_deserialize(
    PRESTypePluginEndpointData endpoint_data,
    MusicType **sample, 
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_sample, 
    void *endpoint_plugin_qos);

NDDSUSERDllExport extern RTIBool
MusicTypePlugin_deserialize_from_cdr_buffer(
    MusicType *sample,
    const char * buffer,
    unsigned int length);    

NDDSUSERDllExport extern unsigned int 
MusicTypePlugin_get_serialized_sample_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

/* --------------------------------------------------------------------------------------
Key Management functions:
* -------------------------------------------------------------------------------------- */
NDDSUSERDllExport extern PRESTypePluginKeyKind 
MusicTypePlugin_get_key_kind(void);

NDDSUSERDllExport extern unsigned int 
MusicTypePlugin_get_serialized_key_max_size(
    PRESTypePluginEndpointData endpoint_data,
    RTIBool include_encapsulation,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern unsigned int 
MusicTypePlugin_get_serialized_key_max_size_for_keyhash(
    PRESTypePluginEndpointData endpoint_data,
    RTIEncapsulationId encapsulation_id,
    unsigned int current_alignment);

NDDSUSERDllExport extern RTIBool 
MusicTypePlugin_deserialize_key(
    PRESTypePluginEndpointData endpoint_data,
    MusicType ** sample,
    RTIBool * drop_sample,
    struct RTICdrStream *stream,
    RTIBool deserialize_encapsulation,
    RTIBool deserialize_key,
    void *endpoint_plugin_qos);

/* Plugin Functions */
NDDSUSERDllExport extern struct PRESTypePlugin*
MusicTypePlugin_new(void);

NDDSUSERDllExport extern void
MusicTypePlugin_delete(struct PRESTypePlugin *);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* MusicTypePlugin_2006618433_h */

