// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iOSapi.AlipaySDK.pas' rev: 31.00 (iOS)

#ifndef Iosapi_AlipaysdkHPP
#define Iosapi_AlipaysdkHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Macapi.CoreFoundation.hpp>
#include <Macapi.CoreServices.hpp>
#include <Macapi.Dispatch.hpp>
#include <Macapi.Mach.hpp>
#include <Macapi.ObjCRuntime.hpp>
#include <Macapi.ObjectiveC.hpp>
#include <iOSapi.CocoaTypes.hpp>
#include <iOSapi.Foundation.hpp>
#include <System.Rtti.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iosapi
{
namespace Alipaysdk
{
//-- forward type declarations -----------------------------------------------
__interface APayAuthInfoClass;
typedef System::DelphiInterface<APayAuthInfoClass> _di_APayAuthInfoClass;
__interface APayAuthInfo;
typedef System::DelphiInterface<APayAuthInfo> _di_APayAuthInfo;
class DELPHICLASS TAPayAuthInfo;
__interface AlipaySDKClass;
typedef System::DelphiInterface<AlipaySDKClass> _di_AlipaySDKClass;
__interface AlipaySDK;
typedef System::DelphiInterface<AlipaySDK> _di_AlipaySDK;
class DELPHICLASS TAlipaySDK;
//-- type declarations -------------------------------------------------------
typedef unsigned AlipayTidFactor;

typedef void __fastcall (__closure *CompletionBlock)(Iosapi::Foundation::_di_NSDictionary param1);

__interface  INTERFACE_UUID("{DD810EF9-4557-4255-9FD2-57A62D781DCA}") APayAuthInfoClass  : public Iosapi::Foundation::NSObjectClass 
{
	
};

__interface  INTERFACE_UUID("{526D4D8E-FCC2-4948-8DB7-C1DB4C5D1574}") APayAuthInfo  : public Iosapi::Foundation::NSObject 
{
	virtual void __cdecl setAppID(Iosapi::Foundation::_di_NSString appID) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl appID(void) = 0 ;
	virtual void __cdecl setPid(Iosapi::Foundation::_di_NSString pid) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl pid(void) = 0 ;
	virtual void __cdecl setRedirectUri(Iosapi::Foundation::_di_NSString redirectUri) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl redirectUri(void) = 0 ;
	virtual void * __cdecl initWithAppID(Iosapi::Foundation::_di_NSString appIDStr, Iosapi::Foundation::_di_NSString pid, Iosapi::Foundation::_di_NSString redirectUri) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl description(void) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl wapDescription(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAPayAuthInfo : public Macapi::Objectivec::TOCGenericImport__2<_di_APayAuthInfoClass,_di_APayAuthInfo> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_APayAuthInfoClass,_di_APayAuthInfo>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TAPayAuthInfo(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_APayAuthInfoClass,_di_APayAuthInfo> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TAPayAuthInfo(void) { }
	
};

#pragma pack(pop)

typedef void * PAPayAuthInfo;

__interface  INTERFACE_UUID("{4363EABB-9A7D-4BE5-AE7A-B068FB1510EB}") AlipaySDKClass  : public Iosapi::Foundation::NSObjectClass 
{
	virtual _di_AlipaySDK __cdecl defaultService(void) = 0 ;
};

__interface  INTERFACE_UUID("{68B0C3A5-A5BC-4514-95B0-9CDAD8B9243B}") AlipaySDK  : public Iosapi::Foundation::NSObject 
{
	virtual void __cdecl setTargetWindow(System::PInteger targetWindow) = 0 ;
	virtual System::PInteger __cdecl targetWindow(void) = 0 ;
	virtual void __cdecl payOrder(Iosapi::Foundation::_di_NSString orderStr, Iosapi::Foundation::_di_NSString fromScheme, CompletionBlock callback) = 0 ;
	virtual void __cdecl processOrderWithPaymentResult(Iosapi::Foundation::_di_NSURL resultUrl, CompletionBlock standbyCallback) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl fetchTradeToken(void) = 0 ;
	virtual bool __cdecl isLogined(void) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl currentVersion(void) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl queryTidFactor(unsigned factor) = 0 ;
	virtual void __cdecl setUrl(Iosapi::Foundation::_di_NSString url) = 0 ;
	virtual Iosapi::Foundation::_di_NSString __cdecl fetchOrderInfoFromH5PayUrl(Iosapi::Foundation::_di_NSString urlStr) = 0 ;
	virtual void __cdecl payUrlOrder(Iosapi::Foundation::_di_NSString orderStr, Iosapi::Foundation::_di_NSString fromScheme, CompletionBlock callback) = 0 ;
	virtual void __cdecl authWithInfo(_di_APayAuthInfo authInfo, CompletionBlock callback) = 0 ;
	virtual void __cdecl processAuthResult(Iosapi::Foundation::_di_NSURL resultUrl, CompletionBlock standbyCallback) = 0 ;
	virtual void __cdecl auth_V2WithInfo(Iosapi::Foundation::_di_NSString infoStr, Iosapi::Foundation::_di_NSString fromScheme, CompletionBlock callback) = 0 ;
	virtual void __cdecl processAuth_V2Result(Iosapi::Foundation::_di_NSURL resultUrl, CompletionBlock standbyCallback) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TAlipaySDK : public Macapi::Objectivec::TOCGenericImport__2<_di_AlipaySDKClass,_di_AlipaySDK> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_AlipaySDKClass,_di_AlipaySDK>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TAlipaySDK(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_AlipaySDKClass,_di_AlipaySDK> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TAlipaySDK(void) { }
	
};

#pragma pack(pop)

typedef void * PAlipaySDK;

//-- var, const, procedure ---------------------------------------------------
static constexpr System::Int8 ALIPAY_TIDFACTOR_IMEI = System::Int8(0x0);
static constexpr System::Int8 ALIPAY_TIDFACTOR_IMSI = System::Int8(0x1);
static constexpr System::Int8 ALIPAY_TIDFACTOR_TID = System::Int8(0x2);
static constexpr System::Int8 ALIPAY_TIDFACTOR_CLIENTKEY = System::Int8(0x3);
static constexpr System::Int8 ALIPAY_TIDFACTOR_VIMEI = System::Int8(0x4);
static constexpr System::Int8 ALIPAY_TIDFACTOR_VIMSI = System::Int8(0x5);
static constexpr System::Int8 ALIPAY_TIDFACTOR_CLIENTID = System::Int8(0x6);
static constexpr System::Int8 ALIPAY_TIDFACTOR_APDID = System::Int8(0x7);
static constexpr System::Int8 ALIPAY_TIDFACTOR_MAX = System::Int8(0x8);
#define libAlipaySDK u"/System/Library/Frameworks/AlipaySDK.framework/AlipaySDK"
}	/* namespace Alipaysdk */
}	/* namespace Iosapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IOSAPI_ALIPAYSDK)
using namespace Iosapi::Alipaysdk;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IOSAPI)
using namespace Iosapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Iosapi_AlipaysdkHPP
