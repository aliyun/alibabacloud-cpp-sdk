// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetErrorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Args, args_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Args, args_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetErrorResponseBody() = default ;
    GetErrorResponseBody(const GetErrorResponseBody &) = default ;
    GetErrorResponseBody(GetErrorResponseBody &&) = default ;
    GetErrorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorResponseBody() = default ;
    GetErrorResponseBody& operator=(const GetErrorResponseBody &) = default ;
    GetErrorResponseBody& operator=(GetErrorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(Access, access_);
        DARABONBA_PTR_TO_JSON(AccessSubType, accessSubType_);
        DARABONBA_PTR_TO_JSON(AdditionalCallbackInfo, additionalCallbackInfo_);
        DARABONBA_PTR_TO_JSON(AdditionalCrossPlatformCrashInfo, additionalCrossPlatformCrashInfo_);
        DARABONBA_PTR_TO_JSON(AdditionalCustomInfo, additionalCustomInfo_);
        DARABONBA_PTR_TO_JSON(AndroidVm, androidVm_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(ArgHash, argHash_);
        DARABONBA_PTR_TO_JSON(Args, args_);
        DARABONBA_PTR_TO_JSON(Backtrace, backtrace_);
        DARABONBA_PTR_TO_JSON(Banner, banner_);
        DARABONBA_PTR_TO_JSON(BinaryUuids, binaryUuids_);
        DARABONBA_PTR_TO_JSON(Brand, brand_);
        DARABONBA_PTR_TO_JSON(BrowserName, browserName_);
        DARABONBA_PTR_TO_JSON(BrowserVersion, browserVersion_);
        DARABONBA_PTR_TO_JSON(Build, build_);
        DARABONBA_PTR_TO_JSON(BusinessCountry, businessCountry_);
        DARABONBA_PTR_TO_JSON(BusinessErrorExtData, businessErrorExtData_);
        DARABONBA_PTR_TO_JSON(BusinessLogType, businessLogType_);
        DARABONBA_PTR_TO_JSON(Carrier, carrier_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(City, city_);
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(ClientTime, clientTime_);
        DARABONBA_PTR_TO_JSON(ColNo, colNo_);
        DARABONBA_PTR_TO_JSON(Controllers, controllers_);
        DARABONBA_PTR_TO_JSON(Country, country_);
        DARABONBA_PTR_TO_JSON(CpuModel, cpuModel_);
        DARABONBA_PTR_TO_JSON(CruxModule, cruxModule_);
        DARABONBA_PTR_TO_JSON(CruxStack, cruxStack_);
        DARABONBA_PTR_TO_JSON(CruxStackHash, cruxStackHash_);
        DARABONBA_PTR_TO_JSON(CruxStackTrace, cruxStackTrace_);
        DARABONBA_PTR_TO_JSON(CruxStackTraceHash, cruxStackTraceHash_);
        DARABONBA_PTR_TO_JSON(CustomExceptionType, customExceptionType_);
        DARABONBA_PTR_TO_JSON(CustomInfo, customInfo_);
        DARABONBA_PTR_TO_JSON(DataDirectory, dataDirectory_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_TO_JSON(Did, did_);
        DARABONBA_PTR_TO_JSON(Digest, digest_);
        DARABONBA_PTR_TO_JSON(DigestHash, digestHash_);
        DARABONBA_PTR_TO_JSON(DomScore, domScore_);
        DARABONBA_PTR_TO_JSON(DownloadCacheDirectory, downloadCacheDirectory_);
        DARABONBA_PTR_TO_JSON(ErrorName, errorName_);
        DARABONBA_PTR_TO_JSON(ErrorType, errorType_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventLog, eventLog_);
        DARABONBA_PTR_TO_JSON(ExceptionArg1, exceptionArg1_);
        DARABONBA_PTR_TO_JSON(ExceptionArg2, exceptionArg2_);
        DARABONBA_PTR_TO_JSON(ExceptionArg3, exceptionArg3_);
        DARABONBA_PTR_TO_JSON(ExceptionCode, exceptionCode_);
        DARABONBA_PTR_TO_JSON(ExceptionCodes, exceptionCodes_);
        DARABONBA_PTR_TO_JSON(ExceptionDetail, exceptionDetail_);
        DARABONBA_PTR_TO_JSON(ExceptionId, exceptionId_);
        DARABONBA_PTR_TO_JSON(ExceptionMsg, exceptionMsg_);
        DARABONBA_PTR_TO_JSON(ExceptionSubtype, exceptionSubtype_);
        DARABONBA_PTR_TO_JSON(ExceptionType, exceptionType_);
        DARABONBA_PTR_TO_JSON(ExceptionVersion, exceptionVersion_);
        DARABONBA_PTR_TO_JSON(ExportStatus, exportStatus_);
        DARABONBA_PTR_TO_JSON(ExternalStorageDirectory, externalStorageDirectory_);
        DARABONBA_PTR_TO_JSON(FeatureScene, featureScene_);
        DARABONBA_PTR_TO_JSON(FileDescriptor, fileDescriptor_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FilePath, filePath_);
        DARABONBA_PTR_TO_JSON(Filename, filename_);
        DARABONBA_PTR_TO_JSON(FlutterRoute, flutterRoute_);
        DARABONBA_PTR_TO_JSON(ForceGround, forceGround_);
        DARABONBA_PTR_TO_JSON(ForeGround, foreGround_);
        DARABONBA_PTR_TO_JSON(H5FullUrl, h5FullUrl_);
        DARABONBA_PTR_TO_JSON(H5ShortUrl, h5ShortUrl_);
        DARABONBA_PTR_TO_JSON(HasOpenMultiProcessMode, hasOpenMultiProcessMode_);
        DARABONBA_PTR_TO_JSON(HasSdCard, hasSdCard_);
        DARABONBA_PTR_TO_JSON(HasSgSecurityConfigKey, hasSgSecurityConfigKey_);
        DARABONBA_PTR_TO_JSON(Imei, imei_);
        DARABONBA_PTR_TO_JSON(Imsi, imsi_);
        DARABONBA_PTR_TO_JSON(InMainProcess, inMainProcess_);
        DARABONBA_PTR_TO_JSON(InstallSdCard, installSdCard_);
        DARABONBA_PTR_TO_JSON(IsBackTrace, isBackTrace_);
        DARABONBA_PTR_TO_JSON(IsJailbroken, isJailbroken_);
        DARABONBA_PTR_TO_JSON(IsSimulator, isSimulator_);
        DARABONBA_PTR_TO_JSON(IsSpeedVersion, isSpeedVersion_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
        DARABONBA_PTR_TO_JSON(JsBacktrace, jsBacktrace_);
        DARABONBA_PTR_TO_JSON(LagCost, lagCost_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(LaunchedCrashStage, launchedCrashStage_);
        DARABONBA_PTR_TO_JSON(LaunchedTime, launchedTime_);
        DARABONBA_PTR_TO_JSON(LineNo, lineNo_);
        DARABONBA_PTR_TO_JSON(LogHash, logHash_);
        DARABONBA_PTR_TO_JSON(MainLog, mainLog_);
        DARABONBA_PTR_TO_JSON(MemInfo, memInfo_);
        DARABONBA_PTR_TO_JSON(MemoryMap, memoryMap_);
        DARABONBA_PTR_TO_JSON(MoreInfo1, moreInfo1_);
        DARABONBA_PTR_TO_JSON(MoreInfo2, moreInfo2_);
        DARABONBA_PTR_TO_JSON(MoreInfo3, moreInfo3_);
        DARABONBA_PTR_TO_JSON(NativeAllThreadDump, nativeAllThreadDump_);
        DARABONBA_PTR_TO_JSON(NativeMaps, nativeMaps_);
        DARABONBA_PTR_TO_JSON(NeedReCluster, needReCluster_);
        DARABONBA_PTR_TO_JSON(OpenedFileCount, openedFileCount_);
        DARABONBA_PTR_TO_JSON(Operations, operations_);
        DARABONBA_PTR_TO_JSON(OriginData, originData_);
        DARABONBA_PTR_TO_JSON(OriginUri, originUri_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(ParentProcessName, parentProcessName_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(ProcessName, processName_);
        DARABONBA_PTR_TO_JSON(Province, province_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ReportContent, reportContent_);
        DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        DARABONBA_PTR_TO_JSON(Resolution, resolution_);
        DARABONBA_PTR_TO_JSON(RootDirectory, rootDirectory_);
        DARABONBA_PTR_TO_JSON(RuntimeExtData, runtimeExtData_);
        DARABONBA_PTR_TO_JSON(SceneValue, sceneValue_);
        DARABONBA_PTR_TO_JSON(SdkType, sdkType_);
        DARABONBA_PTR_TO_JSON(SdkVersion, sdkVersion_);
        DARABONBA_PTR_TO_JSON(Seq, seq_);
        DARABONBA_PTR_TO_JSON(ServerTime, serverTime_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(SimpleReportContent, simpleReportContent_);
        DARABONBA_PTR_TO_JSON(SoLibBuild, soLibBuild_);
        DARABONBA_PTR_TO_JSON(SpeedFlags, speedFlags_);
        DARABONBA_PTR_TO_JSON(Stack, stack_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StructuredStack, structuredStack_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(SymbolicFileType, symbolicFileType_);
        DARABONBA_PTR_TO_JSON(SysLog, sysLog_);
        DARABONBA_PTR_TO_JSON(ThreadName, threadName_);
        DARABONBA_PTR_TO_JSON(Threads, threads_);
        DARABONBA_PTR_TO_JSON(Tid, tid_);
        DARABONBA_PTR_TO_JSON(Track, track_);
        DARABONBA_PTR_TO_JSON(TriggeredTime, triggeredTime_);
        DARABONBA_PTR_TO_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
        DARABONBA_PTR_TO_JSON(User, user_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserNick, userNick_);
        DARABONBA_PTR_TO_JSON(Utdid, utdid_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(View, view_);
        DARABONBA_PTR_TO_JSON(WeexFullUrl, weexFullUrl_);
        DARABONBA_PTR_TO_JSON(WeexShortUrl, weexShortUrl_);
        DARABONBA_PTR_TO_JSON(WriteLimit, writeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(Access, access_);
        DARABONBA_PTR_FROM_JSON(AccessSubType, accessSubType_);
        DARABONBA_PTR_FROM_JSON(AdditionalCallbackInfo, additionalCallbackInfo_);
        DARABONBA_PTR_FROM_JSON(AdditionalCrossPlatformCrashInfo, additionalCrossPlatformCrashInfo_);
        DARABONBA_PTR_FROM_JSON(AdditionalCustomInfo, additionalCustomInfo_);
        DARABONBA_PTR_FROM_JSON(AndroidVm, androidVm_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(ArgHash, argHash_);
        DARABONBA_PTR_FROM_JSON(Args, args_);
        DARABONBA_PTR_FROM_JSON(Backtrace, backtrace_);
        DARABONBA_PTR_FROM_JSON(Banner, banner_);
        DARABONBA_PTR_FROM_JSON(BinaryUuids, binaryUuids_);
        DARABONBA_PTR_FROM_JSON(Brand, brand_);
        DARABONBA_PTR_FROM_JSON(BrowserName, browserName_);
        DARABONBA_PTR_FROM_JSON(BrowserVersion, browserVersion_);
        DARABONBA_PTR_FROM_JSON(Build, build_);
        DARABONBA_PTR_FROM_JSON(BusinessCountry, businessCountry_);
        DARABONBA_PTR_FROM_JSON(BusinessErrorExtData, businessErrorExtData_);
        DARABONBA_PTR_FROM_JSON(BusinessLogType, businessLogType_);
        DARABONBA_PTR_FROM_JSON(Carrier, carrier_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(City, city_);
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(ClientTime, clientTime_);
        DARABONBA_PTR_FROM_JSON(ColNo, colNo_);
        DARABONBA_PTR_FROM_JSON(Controllers, controllers_);
        DARABONBA_PTR_FROM_JSON(Country, country_);
        DARABONBA_PTR_FROM_JSON(CpuModel, cpuModel_);
        DARABONBA_PTR_FROM_JSON(CruxModule, cruxModule_);
        DARABONBA_PTR_FROM_JSON(CruxStack, cruxStack_);
        DARABONBA_PTR_FROM_JSON(CruxStackHash, cruxStackHash_);
        DARABONBA_PTR_FROM_JSON(CruxStackTrace, cruxStackTrace_);
        DARABONBA_PTR_FROM_JSON(CruxStackTraceHash, cruxStackTraceHash_);
        DARABONBA_PTR_FROM_JSON(CustomExceptionType, customExceptionType_);
        DARABONBA_PTR_FROM_JSON(CustomInfo, customInfo_);
        DARABONBA_PTR_FROM_JSON(DataDirectory, dataDirectory_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_FROM_JSON(Did, did_);
        DARABONBA_PTR_FROM_JSON(Digest, digest_);
        DARABONBA_PTR_FROM_JSON(DigestHash, digestHash_);
        DARABONBA_PTR_FROM_JSON(DomScore, domScore_);
        DARABONBA_PTR_FROM_JSON(DownloadCacheDirectory, downloadCacheDirectory_);
        DARABONBA_PTR_FROM_JSON(ErrorName, errorName_);
        DARABONBA_PTR_FROM_JSON(ErrorType, errorType_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventLog, eventLog_);
        DARABONBA_PTR_FROM_JSON(ExceptionArg1, exceptionArg1_);
        DARABONBA_PTR_FROM_JSON(ExceptionArg2, exceptionArg2_);
        DARABONBA_PTR_FROM_JSON(ExceptionArg3, exceptionArg3_);
        DARABONBA_PTR_FROM_JSON(ExceptionCode, exceptionCode_);
        DARABONBA_PTR_FROM_JSON(ExceptionCodes, exceptionCodes_);
        DARABONBA_PTR_FROM_JSON(ExceptionDetail, exceptionDetail_);
        DARABONBA_PTR_FROM_JSON(ExceptionId, exceptionId_);
        DARABONBA_PTR_FROM_JSON(ExceptionMsg, exceptionMsg_);
        DARABONBA_PTR_FROM_JSON(ExceptionSubtype, exceptionSubtype_);
        DARABONBA_PTR_FROM_JSON(ExceptionType, exceptionType_);
        DARABONBA_PTR_FROM_JSON(ExceptionVersion, exceptionVersion_);
        DARABONBA_PTR_FROM_JSON(ExportStatus, exportStatus_);
        DARABONBA_PTR_FROM_JSON(ExternalStorageDirectory, externalStorageDirectory_);
        DARABONBA_PTR_FROM_JSON(FeatureScene, featureScene_);
        DARABONBA_PTR_FROM_JSON(FileDescriptor, fileDescriptor_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
        DARABONBA_PTR_FROM_JSON(Filename, filename_);
        DARABONBA_PTR_FROM_JSON(FlutterRoute, flutterRoute_);
        DARABONBA_PTR_FROM_JSON(ForceGround, forceGround_);
        DARABONBA_PTR_FROM_JSON(ForeGround, foreGround_);
        DARABONBA_PTR_FROM_JSON(H5FullUrl, h5FullUrl_);
        DARABONBA_PTR_FROM_JSON(H5ShortUrl, h5ShortUrl_);
        DARABONBA_PTR_FROM_JSON(HasOpenMultiProcessMode, hasOpenMultiProcessMode_);
        DARABONBA_PTR_FROM_JSON(HasSdCard, hasSdCard_);
        DARABONBA_PTR_FROM_JSON(HasSgSecurityConfigKey, hasSgSecurityConfigKey_);
        DARABONBA_PTR_FROM_JSON(Imei, imei_);
        DARABONBA_PTR_FROM_JSON(Imsi, imsi_);
        DARABONBA_PTR_FROM_JSON(InMainProcess, inMainProcess_);
        DARABONBA_PTR_FROM_JSON(InstallSdCard, installSdCard_);
        DARABONBA_PTR_FROM_JSON(IsBackTrace, isBackTrace_);
        DARABONBA_PTR_FROM_JSON(IsJailbroken, isJailbroken_);
        DARABONBA_PTR_FROM_JSON(IsSimulator, isSimulator_);
        DARABONBA_PTR_FROM_JSON(IsSpeedVersion, isSpeedVersion_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
        DARABONBA_PTR_FROM_JSON(JsBacktrace, jsBacktrace_);
        DARABONBA_PTR_FROM_JSON(LagCost, lagCost_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(LaunchedCrashStage, launchedCrashStage_);
        DARABONBA_PTR_FROM_JSON(LaunchedTime, launchedTime_);
        DARABONBA_PTR_FROM_JSON(LineNo, lineNo_);
        DARABONBA_PTR_FROM_JSON(LogHash, logHash_);
        DARABONBA_PTR_FROM_JSON(MainLog, mainLog_);
        DARABONBA_PTR_FROM_JSON(MemInfo, memInfo_);
        DARABONBA_PTR_FROM_JSON(MemoryMap, memoryMap_);
        DARABONBA_PTR_FROM_JSON(MoreInfo1, moreInfo1_);
        DARABONBA_PTR_FROM_JSON(MoreInfo2, moreInfo2_);
        DARABONBA_PTR_FROM_JSON(MoreInfo3, moreInfo3_);
        DARABONBA_PTR_FROM_JSON(NativeAllThreadDump, nativeAllThreadDump_);
        DARABONBA_PTR_FROM_JSON(NativeMaps, nativeMaps_);
        DARABONBA_PTR_FROM_JSON(NeedReCluster, needReCluster_);
        DARABONBA_PTR_FROM_JSON(OpenedFileCount, openedFileCount_);
        DARABONBA_PTR_FROM_JSON(Operations, operations_);
        DARABONBA_PTR_FROM_JSON(OriginData, originData_);
        DARABONBA_PTR_FROM_JSON(OriginUri, originUri_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(ParentProcessName, parentProcessName_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
        DARABONBA_PTR_FROM_JSON(Province, province_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ReportContent, reportContent_);
        DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
        DARABONBA_PTR_FROM_JSON(RootDirectory, rootDirectory_);
        DARABONBA_PTR_FROM_JSON(RuntimeExtData, runtimeExtData_);
        DARABONBA_PTR_FROM_JSON(SceneValue, sceneValue_);
        DARABONBA_PTR_FROM_JSON(SdkType, sdkType_);
        DARABONBA_PTR_FROM_JSON(SdkVersion, sdkVersion_);
        DARABONBA_PTR_FROM_JSON(Seq, seq_);
        DARABONBA_PTR_FROM_JSON(ServerTime, serverTime_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(SimpleReportContent, simpleReportContent_);
        DARABONBA_PTR_FROM_JSON(SoLibBuild, soLibBuild_);
        DARABONBA_PTR_FROM_JSON(SpeedFlags, speedFlags_);
        DARABONBA_PTR_FROM_JSON(Stack, stack_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StructuredStack, structuredStack_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(SymbolicFileType, symbolicFileType_);
        DARABONBA_PTR_FROM_JSON(SysLog, sysLog_);
        DARABONBA_PTR_FROM_JSON(ThreadName, threadName_);
        DARABONBA_PTR_FROM_JSON(Threads, threads_);
        DARABONBA_PTR_FROM_JSON(Tid, tid_);
        DARABONBA_PTR_FROM_JSON(Track, track_);
        DARABONBA_PTR_FROM_JSON(TriggeredTime, triggeredTime_);
        DARABONBA_PTR_FROM_JSON(UploadTime, uploadTime_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
        DARABONBA_PTR_FROM_JSON(User, user_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
        DARABONBA_PTR_FROM_JSON(Utdid, utdid_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(View, view_);
        DARABONBA_PTR_FROM_JSON(WeexFullUrl, weexFullUrl_);
        DARABONBA_PTR_FROM_JSON(WeexShortUrl, weexShortUrl_);
        DARABONBA_PTR_FROM_JSON(WriteLimit, writeLimit_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->access_ == nullptr
        && this->accessSubType_ == nullptr && this->additionalCallbackInfo_ == nullptr && this->additionalCrossPlatformCrashInfo_ == nullptr && this->additionalCustomInfo_ == nullptr && this->androidVm_ == nullptr
        && this->appId_ == nullptr && this->appKey_ == nullptr && this->appVersion_ == nullptr && this->argHash_ == nullptr && this->args_ == nullptr
        && this->backtrace_ == nullptr && this->banner_ == nullptr && this->binaryUuids_ == nullptr && this->brand_ == nullptr && this->browserName_ == nullptr
        && this->browserVersion_ == nullptr && this->build_ == nullptr && this->businessCountry_ == nullptr && this->businessErrorExtData_ == nullptr && this->businessLogType_ == nullptr
        && this->carrier_ == nullptr && this->channel_ == nullptr && this->city_ == nullptr && this->clientIp_ == nullptr && this->clientTime_ == nullptr
        && this->colNo_ == nullptr && this->controllers_ == nullptr && this->country_ == nullptr && this->cpuModel_ == nullptr && this->cruxModule_ == nullptr
        && this->cruxStack_ == nullptr && this->cruxStackHash_ == nullptr && this->cruxStackTrace_ == nullptr && this->cruxStackTraceHash_ == nullptr && this->customExceptionType_ == nullptr
        && this->customInfo_ == nullptr && this->dataDirectory_ == nullptr && this->deviceId_ == nullptr && this->deviceModel_ == nullptr && this->did_ == nullptr
        && this->digest_ == nullptr && this->digestHash_ == nullptr && this->domScore_ == nullptr && this->downloadCacheDirectory_ == nullptr && this->errorName_ == nullptr
        && this->errorType_ == nullptr && this->eventId_ == nullptr && this->eventLog_ == nullptr && this->exceptionArg1_ == nullptr && this->exceptionArg2_ == nullptr
        && this->exceptionArg3_ == nullptr && this->exceptionCode_ == nullptr && this->exceptionCodes_ == nullptr && this->exceptionDetail_ == nullptr && this->exceptionId_ == nullptr
        && this->exceptionMsg_ == nullptr && this->exceptionSubtype_ == nullptr && this->exceptionType_ == nullptr && this->exceptionVersion_ == nullptr && this->exportStatus_ == nullptr
        && this->externalStorageDirectory_ == nullptr && this->featureScene_ == nullptr && this->fileDescriptor_ == nullptr && this->fileName_ == nullptr && this->filePath_ == nullptr
        && this->filename_ == nullptr && this->flutterRoute_ == nullptr && this->forceGround_ == nullptr && this->foreGround_ == nullptr && this->h5FullUrl_ == nullptr
        && this->h5ShortUrl_ == nullptr && this->hasOpenMultiProcessMode_ == nullptr && this->hasSdCard_ == nullptr && this->hasSgSecurityConfigKey_ == nullptr && this->imei_ == nullptr
        && this->imsi_ == nullptr && this->inMainProcess_ == nullptr && this->installSdCard_ == nullptr && this->isBackTrace_ == nullptr && this->isJailbroken_ == nullptr
        && this->isSimulator_ == nullptr && this->isSpeedVersion_ == nullptr && this->isp_ == nullptr && this->jsBacktrace_ == nullptr && this->lagCost_ == nullptr
        && this->language_ == nullptr && this->launchedCrashStage_ == nullptr && this->launchedTime_ == nullptr && this->lineNo_ == nullptr && this->logHash_ == nullptr
        && this->mainLog_ == nullptr && this->memInfo_ == nullptr && this->memoryMap_ == nullptr && this->moreInfo1_ == nullptr && this->moreInfo2_ == nullptr
        && this->moreInfo3_ == nullptr && this->nativeAllThreadDump_ == nullptr && this->nativeMaps_ == nullptr && this->needReCluster_ == nullptr && this->openedFileCount_ == nullptr
        && this->operations_ == nullptr && this->originData_ == nullptr && this->originUri_ == nullptr && this->os_ == nullptr && this->osVersion_ == nullptr
        && this->page_ == nullptr && this->parentProcessName_ == nullptr && this->pid_ == nullptr && this->platform_ == nullptr && this->processName_ == nullptr
        && this->province_ == nullptr && this->reason_ == nullptr && this->reportContent_ == nullptr && this->reportType_ == nullptr && this->resolution_ == nullptr
        && this->rootDirectory_ == nullptr && this->runtimeExtData_ == nullptr && this->sceneValue_ == nullptr && this->sdkType_ == nullptr && this->sdkVersion_ == nullptr
        && this->seq_ == nullptr && this->serverTime_ == nullptr && this->sessionId_ == nullptr && this->simpleReportContent_ == nullptr && this->soLibBuild_ == nullptr
        && this->speedFlags_ == nullptr && this->stack_ == nullptr && this->status_ == nullptr && this->structuredStack_ == nullptr && this->summary_ == nullptr
        && this->symbolicFileType_ == nullptr && this->sysLog_ == nullptr && this->threadName_ == nullptr && this->threads_ == nullptr && this->tid_ == nullptr
        && this->track_ == nullptr && this->triggeredTime_ == nullptr && this->uploadTime_ == nullptr && this->uri_ == nullptr && this->user_ == nullptr
        && this->userId_ == nullptr && this->userNick_ == nullptr && this->utdid_ == nullptr && this->uuid_ == nullptr && this->view_ == nullptr
        && this->weexFullUrl_ == nullptr && this->weexShortUrl_ == nullptr && this->writeLimit_ == nullptr; };
      // access Field Functions 
      bool hasAccess() const { return this->access_ != nullptr;};
      void deleteAccess() { this->access_ = nullptr;};
      inline string getAccess() const { DARABONBA_PTR_GET_DEFAULT(access_, "") };
      inline Model& setAccess(string access) { DARABONBA_PTR_SET_VALUE(access_, access) };


      // accessSubType Field Functions 
      bool hasAccessSubType() const { return this->accessSubType_ != nullptr;};
      void deleteAccessSubType() { this->accessSubType_ = nullptr;};
      inline string getAccessSubType() const { DARABONBA_PTR_GET_DEFAULT(accessSubType_, "") };
      inline Model& setAccessSubType(string accessSubType) { DARABONBA_PTR_SET_VALUE(accessSubType_, accessSubType) };


      // additionalCallbackInfo Field Functions 
      bool hasAdditionalCallbackInfo() const { return this->additionalCallbackInfo_ != nullptr;};
      void deleteAdditionalCallbackInfo() { this->additionalCallbackInfo_ = nullptr;};
      inline string getAdditionalCallbackInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalCallbackInfo_, "") };
      inline Model& setAdditionalCallbackInfo(string additionalCallbackInfo) { DARABONBA_PTR_SET_VALUE(additionalCallbackInfo_, additionalCallbackInfo) };


      // additionalCrossPlatformCrashInfo Field Functions 
      bool hasAdditionalCrossPlatformCrashInfo() const { return this->additionalCrossPlatformCrashInfo_ != nullptr;};
      void deleteAdditionalCrossPlatformCrashInfo() { this->additionalCrossPlatformCrashInfo_ = nullptr;};
      inline string getAdditionalCrossPlatformCrashInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalCrossPlatformCrashInfo_, "") };
      inline Model& setAdditionalCrossPlatformCrashInfo(string additionalCrossPlatformCrashInfo) { DARABONBA_PTR_SET_VALUE(additionalCrossPlatformCrashInfo_, additionalCrossPlatformCrashInfo) };


      // additionalCustomInfo Field Functions 
      bool hasAdditionalCustomInfo() const { return this->additionalCustomInfo_ != nullptr;};
      void deleteAdditionalCustomInfo() { this->additionalCustomInfo_ = nullptr;};
      inline string getAdditionalCustomInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalCustomInfo_, "") };
      inline Model& setAdditionalCustomInfo(string additionalCustomInfo) { DARABONBA_PTR_SET_VALUE(additionalCustomInfo_, additionalCustomInfo) };


      // androidVm Field Functions 
      bool hasAndroidVm() const { return this->androidVm_ != nullptr;};
      void deleteAndroidVm() { this->androidVm_ = nullptr;};
      inline string getAndroidVm() const { DARABONBA_PTR_GET_DEFAULT(androidVm_, "") };
      inline Model& setAndroidVm(string androidVm) { DARABONBA_PTR_SET_VALUE(androidVm_, androidVm) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Model& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
      inline Model& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Model& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // argHash Field Functions 
      bool hasArgHash() const { return this->argHash_ != nullptr;};
      void deleteArgHash() { this->argHash_ = nullptr;};
      inline int64_t getArgHash() const { DARABONBA_PTR_GET_DEFAULT(argHash_, 0L) };
      inline Model& setArgHash(int64_t argHash) { DARABONBA_PTR_SET_VALUE(argHash_, argHash) };


      // args Field Functions 
      bool hasArgs() const { return this->args_ != nullptr;};
      void deleteArgs() { this->args_ = nullptr;};
      inline string getArgs() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
      inline Model& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


      // backtrace Field Functions 
      bool hasBacktrace() const { return this->backtrace_ != nullptr;};
      void deleteBacktrace() { this->backtrace_ = nullptr;};
      inline string getBacktrace() const { DARABONBA_PTR_GET_DEFAULT(backtrace_, "") };
      inline Model& setBacktrace(string backtrace) { DARABONBA_PTR_SET_VALUE(backtrace_, backtrace) };


      // banner Field Functions 
      bool hasBanner() const { return this->banner_ != nullptr;};
      void deleteBanner() { this->banner_ = nullptr;};
      inline string getBanner() const { DARABONBA_PTR_GET_DEFAULT(banner_, "") };
      inline Model& setBanner(string banner) { DARABONBA_PTR_SET_VALUE(banner_, banner) };


      // binaryUuids Field Functions 
      bool hasBinaryUuids() const { return this->binaryUuids_ != nullptr;};
      void deleteBinaryUuids() { this->binaryUuids_ = nullptr;};
      inline string getBinaryUuids() const { DARABONBA_PTR_GET_DEFAULT(binaryUuids_, "") };
      inline Model& setBinaryUuids(string binaryUuids) { DARABONBA_PTR_SET_VALUE(binaryUuids_, binaryUuids) };


      // brand Field Functions 
      bool hasBrand() const { return this->brand_ != nullptr;};
      void deleteBrand() { this->brand_ = nullptr;};
      inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
      inline Model& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


      // browserName Field Functions 
      bool hasBrowserName() const { return this->browserName_ != nullptr;};
      void deleteBrowserName() { this->browserName_ = nullptr;};
      inline string getBrowserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
      inline Model& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


      // browserVersion Field Functions 
      bool hasBrowserVersion() const { return this->browserVersion_ != nullptr;};
      void deleteBrowserVersion() { this->browserVersion_ = nullptr;};
      inline string getBrowserVersion() const { DARABONBA_PTR_GET_DEFAULT(browserVersion_, "") };
      inline Model& setBrowserVersion(string browserVersion) { DARABONBA_PTR_SET_VALUE(browserVersion_, browserVersion) };


      // build Field Functions 
      bool hasBuild() const { return this->build_ != nullptr;};
      void deleteBuild() { this->build_ = nullptr;};
      inline string getBuild() const { DARABONBA_PTR_GET_DEFAULT(build_, "") };
      inline Model& setBuild(string build) { DARABONBA_PTR_SET_VALUE(build_, build) };


      // businessCountry Field Functions 
      bool hasBusinessCountry() const { return this->businessCountry_ != nullptr;};
      void deleteBusinessCountry() { this->businessCountry_ = nullptr;};
      inline string getBusinessCountry() const { DARABONBA_PTR_GET_DEFAULT(businessCountry_, "") };
      inline Model& setBusinessCountry(string businessCountry) { DARABONBA_PTR_SET_VALUE(businessCountry_, businessCountry) };


      // businessErrorExtData Field Functions 
      bool hasBusinessErrorExtData() const { return this->businessErrorExtData_ != nullptr;};
      void deleteBusinessErrorExtData() { this->businessErrorExtData_ = nullptr;};
      inline string getBusinessErrorExtData() const { DARABONBA_PTR_GET_DEFAULT(businessErrorExtData_, "") };
      inline Model& setBusinessErrorExtData(string businessErrorExtData) { DARABONBA_PTR_SET_VALUE(businessErrorExtData_, businessErrorExtData) };


      // businessLogType Field Functions 
      bool hasBusinessLogType() const { return this->businessLogType_ != nullptr;};
      void deleteBusinessLogType() { this->businessLogType_ = nullptr;};
      inline string getBusinessLogType() const { DARABONBA_PTR_GET_DEFAULT(businessLogType_, "") };
      inline Model& setBusinessLogType(string businessLogType) { DARABONBA_PTR_SET_VALUE(businessLogType_, businessLogType) };


      // carrier Field Functions 
      bool hasCarrier() const { return this->carrier_ != nullptr;};
      void deleteCarrier() { this->carrier_ = nullptr;};
      inline string getCarrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
      inline Model& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
      inline Model& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Model& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline Model& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // clientTime Field Functions 
      bool hasClientTime() const { return this->clientTime_ != nullptr;};
      void deleteClientTime() { this->clientTime_ = nullptr;};
      inline int64_t getClientTime() const { DARABONBA_PTR_GET_DEFAULT(clientTime_, 0L) };
      inline Model& setClientTime(int64_t clientTime) { DARABONBA_PTR_SET_VALUE(clientTime_, clientTime) };


      // colNo Field Functions 
      bool hasColNo() const { return this->colNo_ != nullptr;};
      void deleteColNo() { this->colNo_ = nullptr;};
      inline string getColNo() const { DARABONBA_PTR_GET_DEFAULT(colNo_, "") };
      inline Model& setColNo(string colNo) { DARABONBA_PTR_SET_VALUE(colNo_, colNo) };


      // controllers Field Functions 
      bool hasControllers() const { return this->controllers_ != nullptr;};
      void deleteControllers() { this->controllers_ = nullptr;};
      inline string getControllers() const { DARABONBA_PTR_GET_DEFAULT(controllers_, "") };
      inline Model& setControllers(string controllers) { DARABONBA_PTR_SET_VALUE(controllers_, controllers) };


      // country Field Functions 
      bool hasCountry() const { return this->country_ != nullptr;};
      void deleteCountry() { this->country_ = nullptr;};
      inline string getCountry() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
      inline Model& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


      // cpuModel Field Functions 
      bool hasCpuModel() const { return this->cpuModel_ != nullptr;};
      void deleteCpuModel() { this->cpuModel_ = nullptr;};
      inline string getCpuModel() const { DARABONBA_PTR_GET_DEFAULT(cpuModel_, "") };
      inline Model& setCpuModel(string cpuModel) { DARABONBA_PTR_SET_VALUE(cpuModel_, cpuModel) };


      // cruxModule Field Functions 
      bool hasCruxModule() const { return this->cruxModule_ != nullptr;};
      void deleteCruxModule() { this->cruxModule_ = nullptr;};
      inline string getCruxModule() const { DARABONBA_PTR_GET_DEFAULT(cruxModule_, "") };
      inline Model& setCruxModule(string cruxModule) { DARABONBA_PTR_SET_VALUE(cruxModule_, cruxModule) };


      // cruxStack Field Functions 
      bool hasCruxStack() const { return this->cruxStack_ != nullptr;};
      void deleteCruxStack() { this->cruxStack_ = nullptr;};
      inline string getCruxStack() const { DARABONBA_PTR_GET_DEFAULT(cruxStack_, "") };
      inline Model& setCruxStack(string cruxStack) { DARABONBA_PTR_SET_VALUE(cruxStack_, cruxStack) };


      // cruxStackHash Field Functions 
      bool hasCruxStackHash() const { return this->cruxStackHash_ != nullptr;};
      void deleteCruxStackHash() { this->cruxStackHash_ = nullptr;};
      inline int64_t getCruxStackHash() const { DARABONBA_PTR_GET_DEFAULT(cruxStackHash_, 0L) };
      inline Model& setCruxStackHash(int64_t cruxStackHash) { DARABONBA_PTR_SET_VALUE(cruxStackHash_, cruxStackHash) };


      // cruxStackTrace Field Functions 
      bool hasCruxStackTrace() const { return this->cruxStackTrace_ != nullptr;};
      void deleteCruxStackTrace() { this->cruxStackTrace_ = nullptr;};
      inline string getCruxStackTrace() const { DARABONBA_PTR_GET_DEFAULT(cruxStackTrace_, "") };
      inline Model& setCruxStackTrace(string cruxStackTrace) { DARABONBA_PTR_SET_VALUE(cruxStackTrace_, cruxStackTrace) };


      // cruxStackTraceHash Field Functions 
      bool hasCruxStackTraceHash() const { return this->cruxStackTraceHash_ != nullptr;};
      void deleteCruxStackTraceHash() { this->cruxStackTraceHash_ = nullptr;};
      inline int64_t getCruxStackTraceHash() const { DARABONBA_PTR_GET_DEFAULT(cruxStackTraceHash_, 0L) };
      inline Model& setCruxStackTraceHash(int64_t cruxStackTraceHash) { DARABONBA_PTR_SET_VALUE(cruxStackTraceHash_, cruxStackTraceHash) };


      // customExceptionType Field Functions 
      bool hasCustomExceptionType() const { return this->customExceptionType_ != nullptr;};
      void deleteCustomExceptionType() { this->customExceptionType_ = nullptr;};
      inline string getCustomExceptionType() const { DARABONBA_PTR_GET_DEFAULT(customExceptionType_, "") };
      inline Model& setCustomExceptionType(string customExceptionType) { DARABONBA_PTR_SET_VALUE(customExceptionType_, customExceptionType) };


      // customInfo Field Functions 
      bool hasCustomInfo() const { return this->customInfo_ != nullptr;};
      void deleteCustomInfo() { this->customInfo_ = nullptr;};
      inline string getCustomInfo() const { DARABONBA_PTR_GET_DEFAULT(customInfo_, "") };
      inline Model& setCustomInfo(string customInfo) { DARABONBA_PTR_SET_VALUE(customInfo_, customInfo) };


      // dataDirectory Field Functions 
      bool hasDataDirectory() const { return this->dataDirectory_ != nullptr;};
      void deleteDataDirectory() { this->dataDirectory_ = nullptr;};
      inline string getDataDirectory() const { DARABONBA_PTR_GET_DEFAULT(dataDirectory_, "") };
      inline Model& setDataDirectory(string dataDirectory) { DARABONBA_PTR_SET_VALUE(dataDirectory_, dataDirectory) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Model& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceModel Field Functions 
      bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
      void deleteDeviceModel() { this->deviceModel_ = nullptr;};
      inline string getDeviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
      inline Model& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


      // did Field Functions 
      bool hasDid() const { return this->did_ != nullptr;};
      void deleteDid() { this->did_ = nullptr;};
      inline string getDid() const { DARABONBA_PTR_GET_DEFAULT(did_, "") };
      inline Model& setDid(string did) { DARABONBA_PTR_SET_VALUE(did_, did) };


      // digest Field Functions 
      bool hasDigest() const { return this->digest_ != nullptr;};
      void deleteDigest() { this->digest_ = nullptr;};
      inline string getDigest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
      inline Model& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


      // digestHash Field Functions 
      bool hasDigestHash() const { return this->digestHash_ != nullptr;};
      void deleteDigestHash() { this->digestHash_ = nullptr;};
      inline string getDigestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
      inline Model& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


      // domScore Field Functions 
      bool hasDomScore() const { return this->domScore_ != nullptr;};
      void deleteDomScore() { this->domScore_ = nullptr;};
      inline string getDomScore() const { DARABONBA_PTR_GET_DEFAULT(domScore_, "") };
      inline Model& setDomScore(string domScore) { DARABONBA_PTR_SET_VALUE(domScore_, domScore) };


      // downloadCacheDirectory Field Functions 
      bool hasDownloadCacheDirectory() const { return this->downloadCacheDirectory_ != nullptr;};
      void deleteDownloadCacheDirectory() { this->downloadCacheDirectory_ = nullptr;};
      inline string getDownloadCacheDirectory() const { DARABONBA_PTR_GET_DEFAULT(downloadCacheDirectory_, "") };
      inline Model& setDownloadCacheDirectory(string downloadCacheDirectory) { DARABONBA_PTR_SET_VALUE(downloadCacheDirectory_, downloadCacheDirectory) };


      // errorName Field Functions 
      bool hasErrorName() const { return this->errorName_ != nullptr;};
      void deleteErrorName() { this->errorName_ = nullptr;};
      inline string getErrorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
      inline Model& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


      // errorType Field Functions 
      bool hasErrorType() const { return this->errorType_ != nullptr;};
      void deleteErrorType() { this->errorType_ = nullptr;};
      inline string getErrorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
      inline Model& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int32_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0) };
      inline Model& setEventId(int32_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventLog Field Functions 
      bool hasEventLog() const { return this->eventLog_ != nullptr;};
      void deleteEventLog() { this->eventLog_ = nullptr;};
      inline string getEventLog() const { DARABONBA_PTR_GET_DEFAULT(eventLog_, "") };
      inline Model& setEventLog(string eventLog) { DARABONBA_PTR_SET_VALUE(eventLog_, eventLog) };


      // exceptionArg1 Field Functions 
      bool hasExceptionArg1() const { return this->exceptionArg1_ != nullptr;};
      void deleteExceptionArg1() { this->exceptionArg1_ = nullptr;};
      inline string getExceptionArg1() const { DARABONBA_PTR_GET_DEFAULT(exceptionArg1_, "") };
      inline Model& setExceptionArg1(string exceptionArg1) { DARABONBA_PTR_SET_VALUE(exceptionArg1_, exceptionArg1) };


      // exceptionArg2 Field Functions 
      bool hasExceptionArg2() const { return this->exceptionArg2_ != nullptr;};
      void deleteExceptionArg2() { this->exceptionArg2_ = nullptr;};
      inline string getExceptionArg2() const { DARABONBA_PTR_GET_DEFAULT(exceptionArg2_, "") };
      inline Model& setExceptionArg2(string exceptionArg2) { DARABONBA_PTR_SET_VALUE(exceptionArg2_, exceptionArg2) };


      // exceptionArg3 Field Functions 
      bool hasExceptionArg3() const { return this->exceptionArg3_ != nullptr;};
      void deleteExceptionArg3() { this->exceptionArg3_ = nullptr;};
      inline string getExceptionArg3() const { DARABONBA_PTR_GET_DEFAULT(exceptionArg3_, "") };
      inline Model& setExceptionArg3(string exceptionArg3) { DARABONBA_PTR_SET_VALUE(exceptionArg3_, exceptionArg3) };


      // exceptionCode Field Functions 
      bool hasExceptionCode() const { return this->exceptionCode_ != nullptr;};
      void deleteExceptionCode() { this->exceptionCode_ = nullptr;};
      inline string getExceptionCode() const { DARABONBA_PTR_GET_DEFAULT(exceptionCode_, "") };
      inline Model& setExceptionCode(string exceptionCode) { DARABONBA_PTR_SET_VALUE(exceptionCode_, exceptionCode) };


      // exceptionCodes Field Functions 
      bool hasExceptionCodes() const { return this->exceptionCodes_ != nullptr;};
      void deleteExceptionCodes() { this->exceptionCodes_ = nullptr;};
      inline string getExceptionCodes() const { DARABONBA_PTR_GET_DEFAULT(exceptionCodes_, "") };
      inline Model& setExceptionCodes(string exceptionCodes) { DARABONBA_PTR_SET_VALUE(exceptionCodes_, exceptionCodes) };


      // exceptionDetail Field Functions 
      bool hasExceptionDetail() const { return this->exceptionDetail_ != nullptr;};
      void deleteExceptionDetail() { this->exceptionDetail_ = nullptr;};
      inline string getExceptionDetail() const { DARABONBA_PTR_GET_DEFAULT(exceptionDetail_, "") };
      inline Model& setExceptionDetail(string exceptionDetail) { DARABONBA_PTR_SET_VALUE(exceptionDetail_, exceptionDetail) };


      // exceptionId Field Functions 
      bool hasExceptionId() const { return this->exceptionId_ != nullptr;};
      void deleteExceptionId() { this->exceptionId_ = nullptr;};
      inline string getExceptionId() const { DARABONBA_PTR_GET_DEFAULT(exceptionId_, "") };
      inline Model& setExceptionId(string exceptionId) { DARABONBA_PTR_SET_VALUE(exceptionId_, exceptionId) };


      // exceptionMsg Field Functions 
      bool hasExceptionMsg() const { return this->exceptionMsg_ != nullptr;};
      void deleteExceptionMsg() { this->exceptionMsg_ = nullptr;};
      inline string getExceptionMsg() const { DARABONBA_PTR_GET_DEFAULT(exceptionMsg_, "") };
      inline Model& setExceptionMsg(string exceptionMsg) { DARABONBA_PTR_SET_VALUE(exceptionMsg_, exceptionMsg) };


      // exceptionSubtype Field Functions 
      bool hasExceptionSubtype() const { return this->exceptionSubtype_ != nullptr;};
      void deleteExceptionSubtype() { this->exceptionSubtype_ = nullptr;};
      inline string getExceptionSubtype() const { DARABONBA_PTR_GET_DEFAULT(exceptionSubtype_, "") };
      inline Model& setExceptionSubtype(string exceptionSubtype) { DARABONBA_PTR_SET_VALUE(exceptionSubtype_, exceptionSubtype) };


      // exceptionType Field Functions 
      bool hasExceptionType() const { return this->exceptionType_ != nullptr;};
      void deleteExceptionType() { this->exceptionType_ = nullptr;};
      inline string getExceptionType() const { DARABONBA_PTR_GET_DEFAULT(exceptionType_, "") };
      inline Model& setExceptionType(string exceptionType) { DARABONBA_PTR_SET_VALUE(exceptionType_, exceptionType) };


      // exceptionVersion Field Functions 
      bool hasExceptionVersion() const { return this->exceptionVersion_ != nullptr;};
      void deleteExceptionVersion() { this->exceptionVersion_ = nullptr;};
      inline string getExceptionVersion() const { DARABONBA_PTR_GET_DEFAULT(exceptionVersion_, "") };
      inline Model& setExceptionVersion(string exceptionVersion) { DARABONBA_PTR_SET_VALUE(exceptionVersion_, exceptionVersion) };


      // exportStatus Field Functions 
      bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
      void deleteExportStatus() { this->exportStatus_ = nullptr;};
      inline string getExportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
      inline Model& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


      // externalStorageDirectory Field Functions 
      bool hasExternalStorageDirectory() const { return this->externalStorageDirectory_ != nullptr;};
      void deleteExternalStorageDirectory() { this->externalStorageDirectory_ = nullptr;};
      inline string getExternalStorageDirectory() const { DARABONBA_PTR_GET_DEFAULT(externalStorageDirectory_, "") };
      inline Model& setExternalStorageDirectory(string externalStorageDirectory) { DARABONBA_PTR_SET_VALUE(externalStorageDirectory_, externalStorageDirectory) };


      // featureScene Field Functions 
      bool hasFeatureScene() const { return this->featureScene_ != nullptr;};
      void deleteFeatureScene() { this->featureScene_ = nullptr;};
      inline string getFeatureScene() const { DARABONBA_PTR_GET_DEFAULT(featureScene_, "") };
      inline Model& setFeatureScene(string featureScene) { DARABONBA_PTR_SET_VALUE(featureScene_, featureScene) };


      // fileDescriptor Field Functions 
      bool hasFileDescriptor() const { return this->fileDescriptor_ != nullptr;};
      void deleteFileDescriptor() { this->fileDescriptor_ = nullptr;};
      inline string getFileDescriptor() const { DARABONBA_PTR_GET_DEFAULT(fileDescriptor_, "") };
      inline Model& setFileDescriptor(string fileDescriptor) { DARABONBA_PTR_SET_VALUE(fileDescriptor_, fileDescriptor) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline Model& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // filePath Field Functions 
      bool hasFilePath() const { return this->filePath_ != nullptr;};
      void deleteFilePath() { this->filePath_ = nullptr;};
      inline string getFilePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
      inline Model& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


      // filename Field Functions 
      bool hasFilename() const { return this->filename_ != nullptr;};
      void deleteFilename() { this->filename_ = nullptr;};
      inline string getFilename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
      inline Model& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


      // flutterRoute Field Functions 
      bool hasFlutterRoute() const { return this->flutterRoute_ != nullptr;};
      void deleteFlutterRoute() { this->flutterRoute_ = nullptr;};
      inline string getFlutterRoute() const { DARABONBA_PTR_GET_DEFAULT(flutterRoute_, "") };
      inline Model& setFlutterRoute(string flutterRoute) { DARABONBA_PTR_SET_VALUE(flutterRoute_, flutterRoute) };


      // forceGround Field Functions 
      bool hasForceGround() const { return this->forceGround_ != nullptr;};
      void deleteForceGround() { this->forceGround_ = nullptr;};
      inline int32_t getForceGround() const { DARABONBA_PTR_GET_DEFAULT(forceGround_, 0) };
      inline Model& setForceGround(int32_t forceGround) { DARABONBA_PTR_SET_VALUE(forceGround_, forceGround) };


      // foreGround Field Functions 
      bool hasForeGround() const { return this->foreGround_ != nullptr;};
      void deleteForeGround() { this->foreGround_ = nullptr;};
      inline int32_t getForeGround() const { DARABONBA_PTR_GET_DEFAULT(foreGround_, 0) };
      inline Model& setForeGround(int32_t foreGround) { DARABONBA_PTR_SET_VALUE(foreGround_, foreGround) };


      // h5FullUrl Field Functions 
      bool hasH5FullUrl() const { return this->h5FullUrl_ != nullptr;};
      void deleteH5FullUrl() { this->h5FullUrl_ = nullptr;};
      inline string getH5FullUrl() const { DARABONBA_PTR_GET_DEFAULT(h5FullUrl_, "") };
      inline Model& setH5FullUrl(string h5FullUrl) { DARABONBA_PTR_SET_VALUE(h5FullUrl_, h5FullUrl) };


      // h5ShortUrl Field Functions 
      bool hasH5ShortUrl() const { return this->h5ShortUrl_ != nullptr;};
      void deleteH5ShortUrl() { this->h5ShortUrl_ = nullptr;};
      inline string getH5ShortUrl() const { DARABONBA_PTR_GET_DEFAULT(h5ShortUrl_, "") };
      inline Model& setH5ShortUrl(string h5ShortUrl) { DARABONBA_PTR_SET_VALUE(h5ShortUrl_, h5ShortUrl) };


      // hasOpenMultiProcessMode Field Functions 
      bool hasHasOpenMultiProcessMode() const { return this->hasOpenMultiProcessMode_ != nullptr;};
      void deleteHasOpenMultiProcessMode() { this->hasOpenMultiProcessMode_ = nullptr;};
      inline int32_t getHasOpenMultiProcessMode() const { DARABONBA_PTR_GET_DEFAULT(hasOpenMultiProcessMode_, 0) };
      inline Model& setHasOpenMultiProcessMode(int32_t hasOpenMultiProcessMode) { DARABONBA_PTR_SET_VALUE(hasOpenMultiProcessMode_, hasOpenMultiProcessMode) };


      // hasSdCard Field Functions 
      bool hasHasSdCard() const { return this->hasSdCard_ != nullptr;};
      void deleteHasSdCard() { this->hasSdCard_ = nullptr;};
      inline int32_t getHasSdCard() const { DARABONBA_PTR_GET_DEFAULT(hasSdCard_, 0) };
      inline Model& setHasSdCard(int32_t hasSdCard) { DARABONBA_PTR_SET_VALUE(hasSdCard_, hasSdCard) };


      // hasSgSecurityConfigKey Field Functions 
      bool hasHasSgSecurityConfigKey() const { return this->hasSgSecurityConfigKey_ != nullptr;};
      void deleteHasSgSecurityConfigKey() { this->hasSgSecurityConfigKey_ = nullptr;};
      inline int32_t getHasSgSecurityConfigKey() const { DARABONBA_PTR_GET_DEFAULT(hasSgSecurityConfigKey_, 0) };
      inline Model& setHasSgSecurityConfigKey(int32_t hasSgSecurityConfigKey) { DARABONBA_PTR_SET_VALUE(hasSgSecurityConfigKey_, hasSgSecurityConfigKey) };


      // imei Field Functions 
      bool hasImei() const { return this->imei_ != nullptr;};
      void deleteImei() { this->imei_ = nullptr;};
      inline string getImei() const { DARABONBA_PTR_GET_DEFAULT(imei_, "") };
      inline Model& setImei(string imei) { DARABONBA_PTR_SET_VALUE(imei_, imei) };


      // imsi Field Functions 
      bool hasImsi() const { return this->imsi_ != nullptr;};
      void deleteImsi() { this->imsi_ = nullptr;};
      inline string getImsi() const { DARABONBA_PTR_GET_DEFAULT(imsi_, "") };
      inline Model& setImsi(string imsi) { DARABONBA_PTR_SET_VALUE(imsi_, imsi) };


      // inMainProcess Field Functions 
      bool hasInMainProcess() const { return this->inMainProcess_ != nullptr;};
      void deleteInMainProcess() { this->inMainProcess_ = nullptr;};
      inline int32_t getInMainProcess() const { DARABONBA_PTR_GET_DEFAULT(inMainProcess_, 0) };
      inline Model& setInMainProcess(int32_t inMainProcess) { DARABONBA_PTR_SET_VALUE(inMainProcess_, inMainProcess) };


      // installSdCard Field Functions 
      bool hasInstallSdCard() const { return this->installSdCard_ != nullptr;};
      void deleteInstallSdCard() { this->installSdCard_ = nullptr;};
      inline int32_t getInstallSdCard() const { DARABONBA_PTR_GET_DEFAULT(installSdCard_, 0) };
      inline Model& setInstallSdCard(int32_t installSdCard) { DARABONBA_PTR_SET_VALUE(installSdCard_, installSdCard) };


      // isBackTrace Field Functions 
      bool hasIsBackTrace() const { return this->isBackTrace_ != nullptr;};
      void deleteIsBackTrace() { this->isBackTrace_ = nullptr;};
      inline int32_t getIsBackTrace() const { DARABONBA_PTR_GET_DEFAULT(isBackTrace_, 0) };
      inline Model& setIsBackTrace(int32_t isBackTrace) { DARABONBA_PTR_SET_VALUE(isBackTrace_, isBackTrace) };


      // isJailbroken Field Functions 
      bool hasIsJailbroken() const { return this->isJailbroken_ != nullptr;};
      void deleteIsJailbroken() { this->isJailbroken_ = nullptr;};
      inline int32_t getIsJailbroken() const { DARABONBA_PTR_GET_DEFAULT(isJailbroken_, 0) };
      inline Model& setIsJailbroken(int32_t isJailbroken) { DARABONBA_PTR_SET_VALUE(isJailbroken_, isJailbroken) };


      // isSimulator Field Functions 
      bool hasIsSimulator() const { return this->isSimulator_ != nullptr;};
      void deleteIsSimulator() { this->isSimulator_ = nullptr;};
      inline int32_t getIsSimulator() const { DARABONBA_PTR_GET_DEFAULT(isSimulator_, 0) };
      inline Model& setIsSimulator(int32_t isSimulator) { DARABONBA_PTR_SET_VALUE(isSimulator_, isSimulator) };


      // isSpeedVersion Field Functions 
      bool hasIsSpeedVersion() const { return this->isSpeedVersion_ != nullptr;};
      void deleteIsSpeedVersion() { this->isSpeedVersion_ = nullptr;};
      inline int32_t getIsSpeedVersion() const { DARABONBA_PTR_GET_DEFAULT(isSpeedVersion_, 0) };
      inline Model& setIsSpeedVersion(int32_t isSpeedVersion) { DARABONBA_PTR_SET_VALUE(isSpeedVersion_, isSpeedVersion) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline Model& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


      // jsBacktrace Field Functions 
      bool hasJsBacktrace() const { return this->jsBacktrace_ != nullptr;};
      void deleteJsBacktrace() { this->jsBacktrace_ = nullptr;};
      inline string getJsBacktrace() const { DARABONBA_PTR_GET_DEFAULT(jsBacktrace_, "") };
      inline Model& setJsBacktrace(string jsBacktrace) { DARABONBA_PTR_SET_VALUE(jsBacktrace_, jsBacktrace) };


      // lagCost Field Functions 
      bool hasLagCost() const { return this->lagCost_ != nullptr;};
      void deleteLagCost() { this->lagCost_ = nullptr;};
      inline int32_t getLagCost() const { DARABONBA_PTR_GET_DEFAULT(lagCost_, 0) };
      inline Model& setLagCost(int32_t lagCost) { DARABONBA_PTR_SET_VALUE(lagCost_, lagCost) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Model& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // launchedCrashStage Field Functions 
      bool hasLaunchedCrashStage() const { return this->launchedCrashStage_ != nullptr;};
      void deleteLaunchedCrashStage() { this->launchedCrashStage_ = nullptr;};
      inline int32_t getLaunchedCrashStage() const { DARABONBA_PTR_GET_DEFAULT(launchedCrashStage_, 0) };
      inline Model& setLaunchedCrashStage(int32_t launchedCrashStage) { DARABONBA_PTR_SET_VALUE(launchedCrashStage_, launchedCrashStage) };


      // launchedTime Field Functions 
      bool hasLaunchedTime() const { return this->launchedTime_ != nullptr;};
      void deleteLaunchedTime() { this->launchedTime_ = nullptr;};
      inline string getLaunchedTime() const { DARABONBA_PTR_GET_DEFAULT(launchedTime_, "") };
      inline Model& setLaunchedTime(string launchedTime) { DARABONBA_PTR_SET_VALUE(launchedTime_, launchedTime) };


      // lineNo Field Functions 
      bool hasLineNo() const { return this->lineNo_ != nullptr;};
      void deleteLineNo() { this->lineNo_ = nullptr;};
      inline string getLineNo() const { DARABONBA_PTR_GET_DEFAULT(lineNo_, "") };
      inline Model& setLineNo(string lineNo) { DARABONBA_PTR_SET_VALUE(lineNo_, lineNo) };


      // logHash Field Functions 
      bool hasLogHash() const { return this->logHash_ != nullptr;};
      void deleteLogHash() { this->logHash_ = nullptr;};
      inline int64_t getLogHash() const { DARABONBA_PTR_GET_DEFAULT(logHash_, 0L) };
      inline Model& setLogHash(int64_t logHash) { DARABONBA_PTR_SET_VALUE(logHash_, logHash) };


      // mainLog Field Functions 
      bool hasMainLog() const { return this->mainLog_ != nullptr;};
      void deleteMainLog() { this->mainLog_ = nullptr;};
      inline string getMainLog() const { DARABONBA_PTR_GET_DEFAULT(mainLog_, "") };
      inline Model& setMainLog(string mainLog) { DARABONBA_PTR_SET_VALUE(mainLog_, mainLog) };


      // memInfo Field Functions 
      bool hasMemInfo() const { return this->memInfo_ != nullptr;};
      void deleteMemInfo() { this->memInfo_ = nullptr;};
      inline string getMemInfo() const { DARABONBA_PTR_GET_DEFAULT(memInfo_, "") };
      inline Model& setMemInfo(string memInfo) { DARABONBA_PTR_SET_VALUE(memInfo_, memInfo) };


      // memoryMap Field Functions 
      bool hasMemoryMap() const { return this->memoryMap_ != nullptr;};
      void deleteMemoryMap() { this->memoryMap_ = nullptr;};
      inline string getMemoryMap() const { DARABONBA_PTR_GET_DEFAULT(memoryMap_, "") };
      inline Model& setMemoryMap(string memoryMap) { DARABONBA_PTR_SET_VALUE(memoryMap_, memoryMap) };


      // moreInfo1 Field Functions 
      bool hasMoreInfo1() const { return this->moreInfo1_ != nullptr;};
      void deleteMoreInfo1() { this->moreInfo1_ = nullptr;};
      inline string getMoreInfo1() const { DARABONBA_PTR_GET_DEFAULT(moreInfo1_, "") };
      inline Model& setMoreInfo1(string moreInfo1) { DARABONBA_PTR_SET_VALUE(moreInfo1_, moreInfo1) };


      // moreInfo2 Field Functions 
      bool hasMoreInfo2() const { return this->moreInfo2_ != nullptr;};
      void deleteMoreInfo2() { this->moreInfo2_ = nullptr;};
      inline string getMoreInfo2() const { DARABONBA_PTR_GET_DEFAULT(moreInfo2_, "") };
      inline Model& setMoreInfo2(string moreInfo2) { DARABONBA_PTR_SET_VALUE(moreInfo2_, moreInfo2) };


      // moreInfo3 Field Functions 
      bool hasMoreInfo3() const { return this->moreInfo3_ != nullptr;};
      void deleteMoreInfo3() { this->moreInfo3_ = nullptr;};
      inline string getMoreInfo3() const { DARABONBA_PTR_GET_DEFAULT(moreInfo3_, "") };
      inline Model& setMoreInfo3(string moreInfo3) { DARABONBA_PTR_SET_VALUE(moreInfo3_, moreInfo3) };


      // nativeAllThreadDump Field Functions 
      bool hasNativeAllThreadDump() const { return this->nativeAllThreadDump_ != nullptr;};
      void deleteNativeAllThreadDump() { this->nativeAllThreadDump_ = nullptr;};
      inline string getNativeAllThreadDump() const { DARABONBA_PTR_GET_DEFAULT(nativeAllThreadDump_, "") };
      inline Model& setNativeAllThreadDump(string nativeAllThreadDump) { DARABONBA_PTR_SET_VALUE(nativeAllThreadDump_, nativeAllThreadDump) };


      // nativeMaps Field Functions 
      bool hasNativeMaps() const { return this->nativeMaps_ != nullptr;};
      void deleteNativeMaps() { this->nativeMaps_ = nullptr;};
      inline string getNativeMaps() const { DARABONBA_PTR_GET_DEFAULT(nativeMaps_, "") };
      inline Model& setNativeMaps(string nativeMaps) { DARABONBA_PTR_SET_VALUE(nativeMaps_, nativeMaps) };


      // needReCluster Field Functions 
      bool hasNeedReCluster() const { return this->needReCluster_ != nullptr;};
      void deleteNeedReCluster() { this->needReCluster_ = nullptr;};
      inline int32_t getNeedReCluster() const { DARABONBA_PTR_GET_DEFAULT(needReCluster_, 0) };
      inline Model& setNeedReCluster(int32_t needReCluster) { DARABONBA_PTR_SET_VALUE(needReCluster_, needReCluster) };


      // openedFileCount Field Functions 
      bool hasOpenedFileCount() const { return this->openedFileCount_ != nullptr;};
      void deleteOpenedFileCount() { this->openedFileCount_ = nullptr;};
      inline int32_t getOpenedFileCount() const { DARABONBA_PTR_GET_DEFAULT(openedFileCount_, 0) };
      inline Model& setOpenedFileCount(int32_t openedFileCount) { DARABONBA_PTR_SET_VALUE(openedFileCount_, openedFileCount) };


      // operations Field Functions 
      bool hasOperations() const { return this->operations_ != nullptr;};
      void deleteOperations() { this->operations_ = nullptr;};
      inline string getOperations() const { DARABONBA_PTR_GET_DEFAULT(operations_, "") };
      inline Model& setOperations(string operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };


      // originData Field Functions 
      bool hasOriginData() const { return this->originData_ != nullptr;};
      void deleteOriginData() { this->originData_ = nullptr;};
      inline string getOriginData() const { DARABONBA_PTR_GET_DEFAULT(originData_, "") };
      inline Model& setOriginData(string originData) { DARABONBA_PTR_SET_VALUE(originData_, originData) };


      // originUri Field Functions 
      bool hasOriginUri() const { return this->originUri_ != nullptr;};
      void deleteOriginUri() { this->originUri_ = nullptr;};
      inline string getOriginUri() const { DARABONBA_PTR_GET_DEFAULT(originUri_, "") };
      inline Model& setOriginUri(string originUri) { DARABONBA_PTR_SET_VALUE(originUri_, originUri) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Model& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline Model& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline string getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
      inline Model& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // parentProcessName Field Functions 
      bool hasParentProcessName() const { return this->parentProcessName_ != nullptr;};
      void deleteParentProcessName() { this->parentProcessName_ = nullptr;};
      inline string getParentProcessName() const { DARABONBA_PTR_GET_DEFAULT(parentProcessName_, "") };
      inline Model& setParentProcessName(string parentProcessName) { DARABONBA_PTR_SET_VALUE(parentProcessName_, parentProcessName) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline int32_t getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
      inline Model& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Model& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // processName Field Functions 
      bool hasProcessName() const { return this->processName_ != nullptr;};
      void deleteProcessName() { this->processName_ = nullptr;};
      inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
      inline Model& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline Model& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline Model& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // reportContent Field Functions 
      bool hasReportContent() const { return this->reportContent_ != nullptr;};
      void deleteReportContent() { this->reportContent_ = nullptr;};
      inline string getReportContent() const { DARABONBA_PTR_GET_DEFAULT(reportContent_, "") };
      inline Model& setReportContent(string reportContent) { DARABONBA_PTR_SET_VALUE(reportContent_, reportContent) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Model& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // resolution Field Functions 
      bool hasResolution() const { return this->resolution_ != nullptr;};
      void deleteResolution() { this->resolution_ = nullptr;};
      inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
      inline Model& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


      // rootDirectory Field Functions 
      bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
      void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
      inline string getRootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
      inline Model& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


      // runtimeExtData Field Functions 
      bool hasRuntimeExtData() const { return this->runtimeExtData_ != nullptr;};
      void deleteRuntimeExtData() { this->runtimeExtData_ = nullptr;};
      inline string getRuntimeExtData() const { DARABONBA_PTR_GET_DEFAULT(runtimeExtData_, "") };
      inline Model& setRuntimeExtData(string runtimeExtData) { DARABONBA_PTR_SET_VALUE(runtimeExtData_, runtimeExtData) };


      // sceneValue Field Functions 
      bool hasSceneValue() const { return this->sceneValue_ != nullptr;};
      void deleteSceneValue() { this->sceneValue_ = nullptr;};
      inline string getSceneValue() const { DARABONBA_PTR_GET_DEFAULT(sceneValue_, "") };
      inline Model& setSceneValue(string sceneValue) { DARABONBA_PTR_SET_VALUE(sceneValue_, sceneValue) };


      // sdkType Field Functions 
      bool hasSdkType() const { return this->sdkType_ != nullptr;};
      void deleteSdkType() { this->sdkType_ = nullptr;};
      inline string getSdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
      inline Model& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


      // sdkVersion Field Functions 
      bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
      void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
      inline string getSdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
      inline Model& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


      // seq Field Functions 
      bool hasSeq() const { return this->seq_ != nullptr;};
      void deleteSeq() { this->seq_ = nullptr;};
      inline string getSeq() const { DARABONBA_PTR_GET_DEFAULT(seq_, "") };
      inline Model& setSeq(string seq) { DARABONBA_PTR_SET_VALUE(seq_, seq) };


      // serverTime Field Functions 
      bool hasServerTime() const { return this->serverTime_ != nullptr;};
      void deleteServerTime() { this->serverTime_ = nullptr;};
      inline int64_t getServerTime() const { DARABONBA_PTR_GET_DEFAULT(serverTime_, 0L) };
      inline Model& setServerTime(int64_t serverTime) { DARABONBA_PTR_SET_VALUE(serverTime_, serverTime) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Model& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // simpleReportContent Field Functions 
      bool hasSimpleReportContent() const { return this->simpleReportContent_ != nullptr;};
      void deleteSimpleReportContent() { this->simpleReportContent_ = nullptr;};
      inline string getSimpleReportContent() const { DARABONBA_PTR_GET_DEFAULT(simpleReportContent_, "") };
      inline Model& setSimpleReportContent(string simpleReportContent) { DARABONBA_PTR_SET_VALUE(simpleReportContent_, simpleReportContent) };


      // soLibBuild Field Functions 
      bool hasSoLibBuild() const { return this->soLibBuild_ != nullptr;};
      void deleteSoLibBuild() { this->soLibBuild_ = nullptr;};
      inline string getSoLibBuild() const { DARABONBA_PTR_GET_DEFAULT(soLibBuild_, "") };
      inline Model& setSoLibBuild(string soLibBuild) { DARABONBA_PTR_SET_VALUE(soLibBuild_, soLibBuild) };


      // speedFlags Field Functions 
      bool hasSpeedFlags() const { return this->speedFlags_ != nullptr;};
      void deleteSpeedFlags() { this->speedFlags_ = nullptr;};
      inline string getSpeedFlags() const { DARABONBA_PTR_GET_DEFAULT(speedFlags_, "") };
      inline Model& setSpeedFlags(string speedFlags) { DARABONBA_PTR_SET_VALUE(speedFlags_, speedFlags) };


      // stack Field Functions 
      bool hasStack() const { return this->stack_ != nullptr;};
      void deleteStack() { this->stack_ = nullptr;};
      inline string getStack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
      inline Model& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Model& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // structuredStack Field Functions 
      bool hasStructuredStack() const { return this->structuredStack_ != nullptr;};
      void deleteStructuredStack() { this->structuredStack_ = nullptr;};
      inline string getStructuredStack() const { DARABONBA_PTR_GET_DEFAULT(structuredStack_, "") };
      inline Model& setStructuredStack(string structuredStack) { DARABONBA_PTR_SET_VALUE(structuredStack_, structuredStack) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Model& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // symbolicFileType Field Functions 
      bool hasSymbolicFileType() const { return this->symbolicFileType_ != nullptr;};
      void deleteSymbolicFileType() { this->symbolicFileType_ = nullptr;};
      inline string getSymbolicFileType() const { DARABONBA_PTR_GET_DEFAULT(symbolicFileType_, "") };
      inline Model& setSymbolicFileType(string symbolicFileType) { DARABONBA_PTR_SET_VALUE(symbolicFileType_, symbolicFileType) };


      // sysLog Field Functions 
      bool hasSysLog() const { return this->sysLog_ != nullptr;};
      void deleteSysLog() { this->sysLog_ = nullptr;};
      inline string getSysLog() const { DARABONBA_PTR_GET_DEFAULT(sysLog_, "") };
      inline Model& setSysLog(string sysLog) { DARABONBA_PTR_SET_VALUE(sysLog_, sysLog) };


      // threadName Field Functions 
      bool hasThreadName() const { return this->threadName_ != nullptr;};
      void deleteThreadName() { this->threadName_ = nullptr;};
      inline string getThreadName() const { DARABONBA_PTR_GET_DEFAULT(threadName_, "") };
      inline Model& setThreadName(string threadName) { DARABONBA_PTR_SET_VALUE(threadName_, threadName) };


      // threads Field Functions 
      bool hasThreads() const { return this->threads_ != nullptr;};
      void deleteThreads() { this->threads_ = nullptr;};
      inline string getThreads() const { DARABONBA_PTR_GET_DEFAULT(threads_, "") };
      inline Model& setThreads(string threads) { DARABONBA_PTR_SET_VALUE(threads_, threads) };


      // tid Field Functions 
      bool hasTid() const { return this->tid_ != nullptr;};
      void deleteTid() { this->tid_ = nullptr;};
      inline int32_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0) };
      inline Model& setTid(int32_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


      // track Field Functions 
      bool hasTrack() const { return this->track_ != nullptr;};
      void deleteTrack() { this->track_ = nullptr;};
      inline string getTrack() const { DARABONBA_PTR_GET_DEFAULT(track_, "") };
      inline Model& setTrack(string track) { DARABONBA_PTR_SET_VALUE(track_, track) };


      // triggeredTime Field Functions 
      bool hasTriggeredTime() const { return this->triggeredTime_ != nullptr;};
      void deleteTriggeredTime() { this->triggeredTime_ = nullptr;};
      inline string getTriggeredTime() const { DARABONBA_PTR_GET_DEFAULT(triggeredTime_, "") };
      inline Model& setTriggeredTime(string triggeredTime) { DARABONBA_PTR_SET_VALUE(triggeredTime_, triggeredTime) };


      // uploadTime Field Functions 
      bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
      void deleteUploadTime() { this->uploadTime_ = nullptr;};
      inline int64_t getUploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, 0L) };
      inline Model& setUploadTime(int64_t uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline Model& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Model& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Model& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userNick Field Functions 
      bool hasUserNick() const { return this->userNick_ != nullptr;};
      void deleteUserNick() { this->userNick_ = nullptr;};
      inline string getUserNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
      inline Model& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


      // utdid Field Functions 
      bool hasUtdid() const { return this->utdid_ != nullptr;};
      void deleteUtdid() { this->utdid_ = nullptr;};
      inline string getUtdid() const { DARABONBA_PTR_GET_DEFAULT(utdid_, "") };
      inline Model& setUtdid(string utdid) { DARABONBA_PTR_SET_VALUE(utdid_, utdid) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Model& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // view Field Functions 
      bool hasView() const { return this->view_ != nullptr;};
      void deleteView() { this->view_ = nullptr;};
      inline string getView() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
      inline Model& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


      // weexFullUrl Field Functions 
      bool hasWeexFullUrl() const { return this->weexFullUrl_ != nullptr;};
      void deleteWeexFullUrl() { this->weexFullUrl_ = nullptr;};
      inline string getWeexFullUrl() const { DARABONBA_PTR_GET_DEFAULT(weexFullUrl_, "") };
      inline Model& setWeexFullUrl(string weexFullUrl) { DARABONBA_PTR_SET_VALUE(weexFullUrl_, weexFullUrl) };


      // weexShortUrl Field Functions 
      bool hasWeexShortUrl() const { return this->weexShortUrl_ != nullptr;};
      void deleteWeexShortUrl() { this->weexShortUrl_ = nullptr;};
      inline string getWeexShortUrl() const { DARABONBA_PTR_GET_DEFAULT(weexShortUrl_, "") };
      inline Model& setWeexShortUrl(string weexShortUrl) { DARABONBA_PTR_SET_VALUE(weexShortUrl_, weexShortUrl) };


      // writeLimit Field Functions 
      bool hasWriteLimit() const { return this->writeLimit_ != nullptr;};
      void deleteWriteLimit() { this->writeLimit_ = nullptr;};
      inline int32_t getWriteLimit() const { DARABONBA_PTR_GET_DEFAULT(writeLimit_, 0) };
      inline Model& setWriteLimit(int32_t writeLimit) { DARABONBA_PTR_SET_VALUE(writeLimit_, writeLimit) };


    protected:
      shared_ptr<string> access_ {};
      shared_ptr<string> accessSubType_ {};
      shared_ptr<string> additionalCallbackInfo_ {};
      shared_ptr<string> additionalCrossPlatformCrashInfo_ {};
      shared_ptr<string> additionalCustomInfo_ {};
      shared_ptr<string> androidVm_ {};
      shared_ptr<string> appId_ {};
      // appKey
      shared_ptr<int64_t> appKey_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<int64_t> argHash_ {};
      shared_ptr<string> args_ {};
      shared_ptr<string> backtrace_ {};
      // banner
      shared_ptr<string> banner_ {};
      shared_ptr<string> binaryUuids_ {};
      shared_ptr<string> brand_ {};
      shared_ptr<string> browserName_ {};
      shared_ptr<string> browserVersion_ {};
      shared_ptr<string> build_ {};
      shared_ptr<string> businessCountry_ {};
      shared_ptr<string> businessErrorExtData_ {};
      shared_ptr<string> businessLogType_ {};
      // carrier
      shared_ptr<string> carrier_ {};
      shared_ptr<string> channel_ {};
      shared_ptr<string> city_ {};
      shared_ptr<string> clientIp_ {};
      shared_ptr<int64_t> clientTime_ {};
      shared_ptr<string> colNo_ {};
      shared_ptr<string> controllers_ {};
      shared_ptr<string> country_ {};
      shared_ptr<string> cpuModel_ {};
      shared_ptr<string> cruxModule_ {};
      shared_ptr<string> cruxStack_ {};
      shared_ptr<int64_t> cruxStackHash_ {};
      // CruxStackTrace
      shared_ptr<string> cruxStackTrace_ {};
      shared_ptr<int64_t> cruxStackTraceHash_ {};
      shared_ptr<string> customExceptionType_ {};
      shared_ptr<string> customInfo_ {};
      shared_ptr<string> dataDirectory_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceModel_ {};
      shared_ptr<string> did_ {};
      shared_ptr<string> digest_ {};
      shared_ptr<string> digestHash_ {};
      shared_ptr<string> domScore_ {};
      shared_ptr<string> downloadCacheDirectory_ {};
      shared_ptr<string> errorName_ {};
      shared_ptr<string> errorType_ {};
      shared_ptr<int32_t> eventId_ {};
      shared_ptr<string> eventLog_ {};
      shared_ptr<string> exceptionArg1_ {};
      shared_ptr<string> exceptionArg2_ {};
      shared_ptr<string> exceptionArg3_ {};
      shared_ptr<string> exceptionCode_ {};
      shared_ptr<string> exceptionCodes_ {};
      shared_ptr<string> exceptionDetail_ {};
      shared_ptr<string> exceptionId_ {};
      shared_ptr<string> exceptionMsg_ {};
      shared_ptr<string> exceptionSubtype_ {};
      shared_ptr<string> exceptionType_ {};
      shared_ptr<string> exceptionVersion_ {};
      shared_ptr<string> exportStatus_ {};
      shared_ptr<string> externalStorageDirectory_ {};
      shared_ptr<string> featureScene_ {};
      shared_ptr<string> fileDescriptor_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> filePath_ {};
      shared_ptr<string> filename_ {};
      shared_ptr<string> flutterRoute_ {};
      shared_ptr<int32_t> forceGround_ {};
      shared_ptr<int32_t> foreGround_ {};
      shared_ptr<string> h5FullUrl_ {};
      shared_ptr<string> h5ShortUrl_ {};
      shared_ptr<int32_t> hasOpenMultiProcessMode_ {};
      shared_ptr<int32_t> hasSdCard_ {};
      shared_ptr<int32_t> hasSgSecurityConfigKey_ {};
      // IMEI
      shared_ptr<string> imei_ {};
      // IMSI
      shared_ptr<string> imsi_ {};
      shared_ptr<int32_t> inMainProcess_ {};
      shared_ptr<int32_t> installSdCard_ {};
      shared_ptr<int32_t> isBackTrace_ {};
      shared_ptr<int32_t> isJailbroken_ {};
      shared_ptr<int32_t> isSimulator_ {};
      shared_ptr<int32_t> isSpeedVersion_ {};
      // ISP
      shared_ptr<string> isp_ {};
      shared_ptr<string> jsBacktrace_ {};
      shared_ptr<int32_t> lagCost_ {};
      shared_ptr<string> language_ {};
      shared_ptr<int32_t> launchedCrashStage_ {};
      shared_ptr<string> launchedTime_ {};
      shared_ptr<string> lineNo_ {};
      shared_ptr<int64_t> logHash_ {};
      shared_ptr<string> mainLog_ {};
      shared_ptr<string> memInfo_ {};
      shared_ptr<string> memoryMap_ {};
      shared_ptr<string> moreInfo1_ {};
      shared_ptr<string> moreInfo2_ {};
      shared_ptr<string> moreInfo3_ {};
      shared_ptr<string> nativeAllThreadDump_ {};
      // Native map
      shared_ptr<string> nativeMaps_ {};
      shared_ptr<int32_t> needReCluster_ {};
      shared_ptr<int32_t> openedFileCount_ {};
      shared_ptr<string> operations_ {};
      shared_ptr<string> originData_ {};
      shared_ptr<string> originUri_ {};
      shared_ptr<string> os_ {};
      shared_ptr<string> osVersion_ {};
      shared_ptr<string> page_ {};
      shared_ptr<string> parentProcessName_ {};
      shared_ptr<int32_t> pid_ {};
      shared_ptr<string> platform_ {};
      shared_ptr<string> processName_ {};
      shared_ptr<string> province_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> reportContent_ {};
      shared_ptr<string> reportType_ {};
      shared_ptr<string> resolution_ {};
      shared_ptr<string> rootDirectory_ {};
      shared_ptr<string> runtimeExtData_ {};
      shared_ptr<string> sceneValue_ {};
      shared_ptr<string> sdkType_ {};
      shared_ptr<string> sdkVersion_ {};
      shared_ptr<string> seq_ {};
      shared_ptr<int64_t> serverTime_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> simpleReportContent_ {};
      shared_ptr<string> soLibBuild_ {};
      // SpeedFlags
      shared_ptr<string> speedFlags_ {};
      shared_ptr<string> stack_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> structuredStack_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> symbolicFileType_ {};
      shared_ptr<string> sysLog_ {};
      shared_ptr<string> threadName_ {};
      shared_ptr<string> threads_ {};
      shared_ptr<int32_t> tid_ {};
      shared_ptr<string> track_ {};
      shared_ptr<string> triggeredTime_ {};
      shared_ptr<int64_t> uploadTime_ {};
      // URI
      shared_ptr<string> uri_ {};
      shared_ptr<string> user_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userNick_ {};
      // utdid
      shared_ptr<string> utdid_ {};
      // uuid
      shared_ptr<string> uuid_ {};
      // view
      shared_ptr<string> view_ {};
      shared_ptr<string> weexFullUrl_ {};
      shared_ptr<string> weexShortUrl_ {};
      shared_ptr<int32_t> writeLimit_ {};
    };

    virtual bool empty() const override { return this->args_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline     const Darabonba::Json & getArgs() const { DARABONBA_GET(args_) };
    Darabonba::Json & getArgs() { DARABONBA_GET(args_) };
    inline GetErrorResponseBody& setArgs(const Darabonba::Json & args) { DARABONBA_SET_VALUE(args_, args) };
    inline GetErrorResponseBody& setArgs(Darabonba::Json && args) { DARABONBA_SET_RVALUE(args_, args) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline GetErrorResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetErrorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetErrorResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetErrorResponseBody::Model) };
    inline GetErrorResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetErrorResponseBody::Model) };
    inline GetErrorResponseBody& setModel(const GetErrorResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetErrorResponseBody& setModel(GetErrorResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErrorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetErrorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    Darabonba::Json args_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetErrorResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
