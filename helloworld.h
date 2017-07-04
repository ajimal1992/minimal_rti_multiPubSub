

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from helloworld.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef helloworld_434910777_h
#define helloworld_434910777_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *GoodbyeWorldTYPENAME;

}

struct GoodbyeWorldSeq;
#ifndef NDDS_STANDALONE_TYPE
class GoodbyeWorldTypeSupport;
class GoodbyeWorldDataWriter;
class GoodbyeWorldDataReader;
#endif

class GoodbyeWorld 
{
  public:
    typedef struct GoodbyeWorldSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef GoodbyeWorldTypeSupport TypeSupport;
    typedef GoodbyeWorldDataWriter DataWriter;
    typedef GoodbyeWorldDataReader DataReader;
    #endif

    DDS_Char *   msg ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* GoodbyeWorld_get_typecode(void); /* Type code */

DDS_SEQUENCE(GoodbyeWorldSeq, GoodbyeWorld);                                        

NDDSUSERDllExport
RTIBool GoodbyeWorld_initialize(
    GoodbyeWorld* self);

NDDSUSERDllExport
RTIBool GoodbyeWorld_initialize_ex(
    GoodbyeWorld* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool GoodbyeWorld_initialize_w_params(
    GoodbyeWorld* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void GoodbyeWorld_finalize(
    GoodbyeWorld* self);

NDDSUSERDllExport
void GoodbyeWorld_finalize_ex(
    GoodbyeWorld* self,RTIBool deletePointers);

NDDSUSERDllExport
void GoodbyeWorld_finalize_w_params(
    GoodbyeWorld* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void GoodbyeWorld_finalize_optional_members(
    GoodbyeWorld* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool GoodbyeWorld_copy(
    GoodbyeWorld* dst,
    const GoodbyeWorld* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif
extern "C" {

    extern const char *HelloWorldTYPENAME;

}

struct HelloWorldSeq;
#ifndef NDDS_STANDALONE_TYPE
class HelloWorldTypeSupport;
class HelloWorldDataWriter;
class HelloWorldDataReader;
#endif

class HelloWorld 
{
  public:
    typedef struct HelloWorldSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef HelloWorldTypeSupport TypeSupport;
    typedef HelloWorldDataWriter DataWriter;
    typedef HelloWorldDataReader DataReader;
    #endif

    DDS_Char *   msg2 ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

NDDSUSERDllExport DDS_TypeCode* HelloWorld_get_typecode(void); /* Type code */

DDS_SEQUENCE(HelloWorldSeq, HelloWorld);                                        

NDDSUSERDllExport
RTIBool HelloWorld_initialize(
    HelloWorld* self);

NDDSUSERDllExport
RTIBool HelloWorld_initialize_ex(
    HelloWorld* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool HelloWorld_initialize_w_params(
    HelloWorld* self,
    const struct DDS_TypeAllocationParams_t * allocParams);        

NDDSUSERDllExport
void HelloWorld_finalize(
    HelloWorld* self);

NDDSUSERDllExport
void HelloWorld_finalize_ex(
    HelloWorld* self,RTIBool deletePointers);

NDDSUSERDllExport
void HelloWorld_finalize_w_params(
    HelloWorld* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void HelloWorld_finalize_optional_members(
    HelloWorld* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool HelloWorld_copy(
    HelloWorld* dst,
    const HelloWorld* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif /* helloworld */

