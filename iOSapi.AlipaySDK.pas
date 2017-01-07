{ *********************************************************** }
{ }
{ CodeGear Delphi Runtime Library }
{ }
{ Copyright(c) 2012-2014 Embarcadero Technologies, Inc. }
{ }
{ *********************************************************** }

//
// Delphi-Objective-C Bridge
// Interfaces for Cocoa framework AlipaySDK
//

unit iOSapi.AlipaySDK;

interface

uses
  Macapi.CoreFoundation,
  Macapi.CoreServices,
  Macapi.Dispatch,
  //Macapi.Foundation,
  Macapi.Mach,
  Macapi.ObjCRuntime,
  Macapi.ObjectiveC,
  //Macapi.QuartzCore,
  iOSapi.CocoaTypes,
  iOSapi.Foundation;

const
  ALIPAY_TIDFACTOR_IMEI = 0;
  ALIPAY_TIDFACTOR_IMSI = 1;
  ALIPAY_TIDFACTOR_TID = 2;
  ALIPAY_TIDFACTOR_CLIENTKEY = 3;
  ALIPAY_TIDFACTOR_VIMEI = 4;
  ALIPAY_TIDFACTOR_VIMSI = 5;
  ALIPAY_TIDFACTOR_CLIENTID = 6;
  ALIPAY_TIDFACTOR_APDID = 7;
  ALIPAY_TIDFACTOR_MAX = 8;

type

  // ===== Forward declarations =====
{$M+}
  APayAuthInfo = interface;
  AlipaySDK = interface;

  // ===== Framework typedefs =====
{$M+}
  AlipayTidFactor = Cardinal;
  CompletionBlock = procedure(param1: NSDictionary) of object;
  // ===== Interface declarations =====

  APayAuthInfoClass = interface(NSObjectClass)
    ['{DD810EF9-4557-4255-9FD2-57A62D781DCA}']
  end;

  APayAuthInfo = interface(NSObject)
    ['{526D4D8E-FCC2-4948-8DB7-C1DB4C5D1574}']
    procedure setAppID(appID: NSString); cdecl;
    function appID: NSString; cdecl;
    procedure setPid(pid: NSString); cdecl;
    function pid: NSString; cdecl;
    procedure setRedirectUri(redirectUri: NSString); cdecl;
    function redirectUri: NSString; cdecl;
    function initWithAppID(appIDStr: NSString; pid: NSString;
      redirectUri: NSString): Pointer; cdecl;
    function description: NSString; cdecl;
    function wapDescription: NSString; cdecl;
  end;

  TAPayAuthInfo = class(TOCGenericImport<APayAuthInfoClass, APayAuthInfo>)
  end;

  PAPayAuthInfo = Pointer;

  AlipaySDKClass = interface(NSObjectClass)
    ['{4363EABB-9A7D-4BE5-AE7A-B068FB1510EB}']
    { class } function defaultService: AlipaySDK; cdecl;
  end;

  AlipaySDK = interface(NSObject)
    ['{68B0C3A5-A5BC-4514-95B0-9CDAD8B9243B}']
    procedure setTargetWindow(targetWindow: PInteger); cdecl;
    function targetWindow: PInteger; cdecl;
    procedure payOrder(orderStr: NSString; fromScheme: NSString;
      callback: CompletionBlock); cdecl;
    procedure processOrderWithPaymentResult(resultUrl: NSURL;
      standbyCallback: CompletionBlock); cdecl;
    function fetchTradeToken: NSString; cdecl;
    function isLogined: Boolean; cdecl;
    function currentVersion: NSString; cdecl;
    function queryTidFactor(factor: AlipayTidFactor): NSString; cdecl;
    procedure setUrl(url: NSString); cdecl;
    function fetchOrderInfoFromH5PayUrl(urlStr: NSString): NSString; cdecl;
    procedure payUrlOrder(orderStr: NSString; fromScheme: NSString;
      callback: CompletionBlock); cdecl;
    procedure authWithInfo(authInfo: APayAuthInfo;
      callback: CompletionBlock); cdecl;
    procedure processAuthResult(resultUrl: NSURL;
      standbyCallback: CompletionBlock); cdecl;
    procedure auth_V2WithInfo(infoStr: NSString; fromScheme: NSString;
      callback: CompletionBlock); cdecl;
    procedure processAuth_V2Result(resultUrl: NSURL;
      standbyCallback: CompletionBlock); cdecl;
  end;

  TAlipaySDK = class(TOCGenericImport<AlipaySDKClass, AlipaySDK>)
  end;

  PAlipaySDK = Pointer;

  // ===== External functions =====

const
  libAlipaySDK = '/System/Library/Frameworks/AlipaySDK.framework/AlipaySDK';

implementation

{$IF defined(IOS) and NOT defined(CPUARM)}

uses
  Posix.Dlfcn;

var
  AlipaySDKModule: THandle;

{$ENDIF IOS}
{$IF defined(IOS) and NOT defined(CPUARM)}

initialization

AlipaySDKModule := dlopen(MarshaledAString(libAlipaySDK), RTLD_LAZY);

finalization

dlclose(AlipaySDKModule);
{$ENDIF IOS}

end.
