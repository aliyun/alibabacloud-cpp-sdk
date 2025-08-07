// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORRESPONSEBODYMODEL_HPP_
#define ALIBABACLOUD_MODELS_GETERRORRESPONSEBODYMODEL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetErrorResponseBodyModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorResponseBodyModel& obj) { 
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
      DARABONBA_PTR_TO_JSON(IsSpeedVersion, isSpeedVersion_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(JsBacktrace, jsBacktrace_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LaunchedTime, launchedTime_);
      DARABONBA_PTR_TO_JSON(LineNo, lineNo_);
      DARABONBA_PTR_TO_JSON(LogHash, logHash_);
      DARABONBA_PTR_TO_JSON(MainLog, mainLog_);
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
    friend void from_json(const Darabonba::Json& j, GetErrorResponseBodyModel& obj) { 
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
      DARABONBA_PTR_FROM_JSON(IsSpeedVersion, isSpeedVersion_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(JsBacktrace, jsBacktrace_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LaunchedTime, launchedTime_);
      DARABONBA_PTR_FROM_JSON(LineNo, lineNo_);
      DARABONBA_PTR_FROM_JSON(LogHash, logHash_);
      DARABONBA_PTR_FROM_JSON(MainLog, mainLog_);
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
    GetErrorResponseBodyModel() = default ;
    GetErrorResponseBodyModel(const GetErrorResponseBodyModel &) = default ;
    GetErrorResponseBodyModel(GetErrorResponseBodyModel &&) = default ;
    GetErrorResponseBodyModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorResponseBodyModel() = default ;
    GetErrorResponseBodyModel& operator=(const GetErrorResponseBodyModel &) = default ;
    GetErrorResponseBodyModel& operator=(GetErrorResponseBodyModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->access_ != nullptr
        && this->accessSubType_ != nullptr && this->additionalCallbackInfo_ != nullptr && this->additionalCrossPlatformCrashInfo_ != nullptr && this->additionalCustomInfo_ != nullptr && this->androidVm_ != nullptr
        && this->appId_ != nullptr && this->appKey_ != nullptr && this->appVersion_ != nullptr && this->argHash_ != nullptr && this->args_ != nullptr
        && this->backtrace_ != nullptr && this->banner_ != nullptr && this->binaryUuids_ != nullptr && this->brand_ != nullptr && this->browserName_ != nullptr
        && this->browserVersion_ != nullptr && this->build_ != nullptr && this->businessCountry_ != nullptr && this->businessErrorExtData_ != nullptr && this->businessLogType_ != nullptr
        && this->carrier_ != nullptr && this->channel_ != nullptr && this->city_ != nullptr && this->clientIp_ != nullptr && this->clientTime_ != nullptr
        && this->colNo_ != nullptr && this->country_ != nullptr && this->cpuModel_ != nullptr && this->cruxModule_ != nullptr && this->cruxStack_ != nullptr
        && this->cruxStackHash_ != nullptr && this->cruxStackTrace_ != nullptr && this->cruxStackTraceHash_ != nullptr && this->customExceptionType_ != nullptr && this->customInfo_ != nullptr
        && this->dataDirectory_ != nullptr && this->deviceId_ != nullptr && this->deviceModel_ != nullptr && this->did_ != nullptr && this->digest_ != nullptr
        && this->digestHash_ != nullptr && this->domScore_ != nullptr && this->downloadCacheDirectory_ != nullptr && this->errorName_ != nullptr && this->errorType_ != nullptr
        && this->eventId_ != nullptr && this->eventLog_ != nullptr && this->exceptionArg1_ != nullptr && this->exceptionArg2_ != nullptr && this->exceptionArg3_ != nullptr
        && this->exceptionCode_ != nullptr && this->exceptionCodes_ != nullptr && this->exceptionDetail_ != nullptr && this->exceptionId_ != nullptr && this->exceptionMsg_ != nullptr
        && this->exceptionSubtype_ != nullptr && this->exceptionType_ != nullptr && this->exceptionVersion_ != nullptr && this->exportStatus_ != nullptr && this->externalStorageDirectory_ != nullptr
        && this->featureScene_ != nullptr && this->fileName_ != nullptr && this->filePath_ != nullptr && this->filename_ != nullptr && this->flutterRoute_ != nullptr
        && this->forceGround_ != nullptr && this->foreGround_ != nullptr && this->h5FullUrl_ != nullptr && this->h5ShortUrl_ != nullptr && this->hasOpenMultiProcessMode_ != nullptr
        && this->hasSdCard_ != nullptr && this->hasSgSecurityConfigKey_ != nullptr && this->imei_ != nullptr && this->imsi_ != nullptr && this->inMainProcess_ != nullptr
        && this->installSdCard_ != nullptr && this->isBackTrace_ != nullptr && this->isSpeedVersion_ != nullptr && this->isp_ != nullptr && this->jsBacktrace_ != nullptr
        && this->language_ != nullptr && this->launchedTime_ != nullptr && this->lineNo_ != nullptr && this->logHash_ != nullptr && this->mainLog_ != nullptr
        && this->memoryMap_ != nullptr && this->moreInfo1_ != nullptr && this->moreInfo2_ != nullptr && this->moreInfo3_ != nullptr && this->nativeAllThreadDump_ != nullptr
        && this->nativeMaps_ != nullptr && this->needReCluster_ != nullptr && this->openedFileCount_ != nullptr && this->operations_ != nullptr && this->originData_ != nullptr
        && this->originUri_ != nullptr && this->os_ != nullptr && this->osVersion_ != nullptr && this->page_ != nullptr && this->parentProcessName_ != nullptr
        && this->pid_ != nullptr && this->platform_ != nullptr && this->processName_ != nullptr && this->province_ != nullptr && this->reason_ != nullptr
        && this->reportContent_ != nullptr && this->reportType_ != nullptr && this->resolution_ != nullptr && this->rootDirectory_ != nullptr && this->runtimeExtData_ != nullptr
        && this->sceneValue_ != nullptr && this->sdkType_ != nullptr && this->sdkVersion_ != nullptr && this->seq_ != nullptr && this->serverTime_ != nullptr
        && this->sessionId_ != nullptr && this->simpleReportContent_ != nullptr && this->soLibBuild_ != nullptr && this->speedFlags_ != nullptr && this->stack_ != nullptr
        && this->status_ != nullptr && this->structuredStack_ != nullptr && this->summary_ != nullptr && this->symbolicFileType_ != nullptr && this->sysLog_ != nullptr
        && this->threadName_ != nullptr && this->threads_ != nullptr && this->tid_ != nullptr && this->track_ != nullptr && this->triggeredTime_ != nullptr
        && this->uploadTime_ != nullptr && this->uri_ != nullptr && this->user_ != nullptr && this->userId_ != nullptr && this->userNick_ != nullptr
        && this->utdid_ != nullptr && this->uuid_ != nullptr && this->view_ != nullptr && this->weexFullUrl_ != nullptr && this->weexShortUrl_ != nullptr
        && this->writeLimit_ != nullptr; };
    // access Field Functions 
    bool hasAccess() const { return this->access_ != nullptr;};
    void deleteAccess() { this->access_ = nullptr;};
    inline string access() const { DARABONBA_PTR_GET_DEFAULT(access_, "") };
    inline GetErrorResponseBodyModel& setAccess(string access) { DARABONBA_PTR_SET_VALUE(access_, access) };


    // accessSubType Field Functions 
    bool hasAccessSubType() const { return this->accessSubType_ != nullptr;};
    void deleteAccessSubType() { this->accessSubType_ = nullptr;};
    inline string accessSubType() const { DARABONBA_PTR_GET_DEFAULT(accessSubType_, "") };
    inline GetErrorResponseBodyModel& setAccessSubType(string accessSubType) { DARABONBA_PTR_SET_VALUE(accessSubType_, accessSubType) };


    // additionalCallbackInfo Field Functions 
    bool hasAdditionalCallbackInfo() const { return this->additionalCallbackInfo_ != nullptr;};
    void deleteAdditionalCallbackInfo() { this->additionalCallbackInfo_ = nullptr;};
    inline string additionalCallbackInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalCallbackInfo_, "") };
    inline GetErrorResponseBodyModel& setAdditionalCallbackInfo(string additionalCallbackInfo) { DARABONBA_PTR_SET_VALUE(additionalCallbackInfo_, additionalCallbackInfo) };


    // additionalCrossPlatformCrashInfo Field Functions 
    bool hasAdditionalCrossPlatformCrashInfo() const { return this->additionalCrossPlatformCrashInfo_ != nullptr;};
    void deleteAdditionalCrossPlatformCrashInfo() { this->additionalCrossPlatformCrashInfo_ = nullptr;};
    inline string additionalCrossPlatformCrashInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalCrossPlatformCrashInfo_, "") };
    inline GetErrorResponseBodyModel& setAdditionalCrossPlatformCrashInfo(string additionalCrossPlatformCrashInfo) { DARABONBA_PTR_SET_VALUE(additionalCrossPlatformCrashInfo_, additionalCrossPlatformCrashInfo) };


    // additionalCustomInfo Field Functions 
    bool hasAdditionalCustomInfo() const { return this->additionalCustomInfo_ != nullptr;};
    void deleteAdditionalCustomInfo() { this->additionalCustomInfo_ = nullptr;};
    inline string additionalCustomInfo() const { DARABONBA_PTR_GET_DEFAULT(additionalCustomInfo_, "") };
    inline GetErrorResponseBodyModel& setAdditionalCustomInfo(string additionalCustomInfo) { DARABONBA_PTR_SET_VALUE(additionalCustomInfo_, additionalCustomInfo) };


    // androidVm Field Functions 
    bool hasAndroidVm() const { return this->androidVm_ != nullptr;};
    void deleteAndroidVm() { this->androidVm_ = nullptr;};
    inline string androidVm() const { DARABONBA_PTR_GET_DEFAULT(androidVm_, "") };
    inline GetErrorResponseBodyModel& setAndroidVm(string androidVm) { DARABONBA_PTR_SET_VALUE(androidVm_, androidVm) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetErrorResponseBodyModel& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline int64_t appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
    inline GetErrorResponseBodyModel& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetErrorResponseBodyModel& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // argHash Field Functions 
    bool hasArgHash() const { return this->argHash_ != nullptr;};
    void deleteArgHash() { this->argHash_ = nullptr;};
    inline int64_t argHash() const { DARABONBA_PTR_GET_DEFAULT(argHash_, 0L) };
    inline GetErrorResponseBodyModel& setArgHash(int64_t argHash) { DARABONBA_PTR_SET_VALUE(argHash_, argHash) };


    // args Field Functions 
    bool hasArgs() const { return this->args_ != nullptr;};
    void deleteArgs() { this->args_ = nullptr;};
    inline string args() const { DARABONBA_PTR_GET_DEFAULT(args_, "") };
    inline GetErrorResponseBodyModel& setArgs(string args) { DARABONBA_PTR_SET_VALUE(args_, args) };


    // backtrace Field Functions 
    bool hasBacktrace() const { return this->backtrace_ != nullptr;};
    void deleteBacktrace() { this->backtrace_ = nullptr;};
    inline string backtrace() const { DARABONBA_PTR_GET_DEFAULT(backtrace_, "") };
    inline GetErrorResponseBodyModel& setBacktrace(string backtrace) { DARABONBA_PTR_SET_VALUE(backtrace_, backtrace) };


    // banner Field Functions 
    bool hasBanner() const { return this->banner_ != nullptr;};
    void deleteBanner() { this->banner_ = nullptr;};
    inline string banner() const { DARABONBA_PTR_GET_DEFAULT(banner_, "") };
    inline GetErrorResponseBodyModel& setBanner(string banner) { DARABONBA_PTR_SET_VALUE(banner_, banner) };


    // binaryUuids Field Functions 
    bool hasBinaryUuids() const { return this->binaryUuids_ != nullptr;};
    void deleteBinaryUuids() { this->binaryUuids_ = nullptr;};
    inline string binaryUuids() const { DARABONBA_PTR_GET_DEFAULT(binaryUuids_, "") };
    inline GetErrorResponseBodyModel& setBinaryUuids(string binaryUuids) { DARABONBA_PTR_SET_VALUE(binaryUuids_, binaryUuids) };


    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline string brand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
    inline GetErrorResponseBodyModel& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


    // browserName Field Functions 
    bool hasBrowserName() const { return this->browserName_ != nullptr;};
    void deleteBrowserName() { this->browserName_ = nullptr;};
    inline string browserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
    inline GetErrorResponseBodyModel& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


    // browserVersion Field Functions 
    bool hasBrowserVersion() const { return this->browserVersion_ != nullptr;};
    void deleteBrowserVersion() { this->browserVersion_ = nullptr;};
    inline string browserVersion() const { DARABONBA_PTR_GET_DEFAULT(browserVersion_, "") };
    inline GetErrorResponseBodyModel& setBrowserVersion(string browserVersion) { DARABONBA_PTR_SET_VALUE(browserVersion_, browserVersion) };


    // build Field Functions 
    bool hasBuild() const { return this->build_ != nullptr;};
    void deleteBuild() { this->build_ = nullptr;};
    inline string build() const { DARABONBA_PTR_GET_DEFAULT(build_, "") };
    inline GetErrorResponseBodyModel& setBuild(string build) { DARABONBA_PTR_SET_VALUE(build_, build) };


    // businessCountry Field Functions 
    bool hasBusinessCountry() const { return this->businessCountry_ != nullptr;};
    void deleteBusinessCountry() { this->businessCountry_ = nullptr;};
    inline string businessCountry() const { DARABONBA_PTR_GET_DEFAULT(businessCountry_, "") };
    inline GetErrorResponseBodyModel& setBusinessCountry(string businessCountry) { DARABONBA_PTR_SET_VALUE(businessCountry_, businessCountry) };


    // businessErrorExtData Field Functions 
    bool hasBusinessErrorExtData() const { return this->businessErrorExtData_ != nullptr;};
    void deleteBusinessErrorExtData() { this->businessErrorExtData_ = nullptr;};
    inline string businessErrorExtData() const { DARABONBA_PTR_GET_DEFAULT(businessErrorExtData_, "") };
    inline GetErrorResponseBodyModel& setBusinessErrorExtData(string businessErrorExtData) { DARABONBA_PTR_SET_VALUE(businessErrorExtData_, businessErrorExtData) };


    // businessLogType Field Functions 
    bool hasBusinessLogType() const { return this->businessLogType_ != nullptr;};
    void deleteBusinessLogType() { this->businessLogType_ = nullptr;};
    inline string businessLogType() const { DARABONBA_PTR_GET_DEFAULT(businessLogType_, "") };
    inline GetErrorResponseBodyModel& setBusinessLogType(string businessLogType) { DARABONBA_PTR_SET_VALUE(businessLogType_, businessLogType) };


    // carrier Field Functions 
    bool hasCarrier() const { return this->carrier_ != nullptr;};
    void deleteCarrier() { this->carrier_ = nullptr;};
    inline string carrier() const { DARABONBA_PTR_GET_DEFAULT(carrier_, "") };
    inline GetErrorResponseBodyModel& setCarrier(string carrier) { DARABONBA_PTR_SET_VALUE(carrier_, carrier) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline GetErrorResponseBodyModel& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // city Field Functions 
    bool hasCity() const { return this->city_ != nullptr;};
    void deleteCity() { this->city_ = nullptr;};
    inline string city() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
    inline GetErrorResponseBodyModel& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline GetErrorResponseBodyModel& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // clientTime Field Functions 
    bool hasClientTime() const { return this->clientTime_ != nullptr;};
    void deleteClientTime() { this->clientTime_ = nullptr;};
    inline int64_t clientTime() const { DARABONBA_PTR_GET_DEFAULT(clientTime_, 0L) };
    inline GetErrorResponseBodyModel& setClientTime(int64_t clientTime) { DARABONBA_PTR_SET_VALUE(clientTime_, clientTime) };


    // colNo Field Functions 
    bool hasColNo() const { return this->colNo_ != nullptr;};
    void deleteColNo() { this->colNo_ = nullptr;};
    inline string colNo() const { DARABONBA_PTR_GET_DEFAULT(colNo_, "") };
    inline GetErrorResponseBodyModel& setColNo(string colNo) { DARABONBA_PTR_SET_VALUE(colNo_, colNo) };


    // country Field Functions 
    bool hasCountry() const { return this->country_ != nullptr;};
    void deleteCountry() { this->country_ = nullptr;};
    inline string country() const { DARABONBA_PTR_GET_DEFAULT(country_, "") };
    inline GetErrorResponseBodyModel& setCountry(string country) { DARABONBA_PTR_SET_VALUE(country_, country) };


    // cpuModel Field Functions 
    bool hasCpuModel() const { return this->cpuModel_ != nullptr;};
    void deleteCpuModel() { this->cpuModel_ = nullptr;};
    inline string cpuModel() const { DARABONBA_PTR_GET_DEFAULT(cpuModel_, "") };
    inline GetErrorResponseBodyModel& setCpuModel(string cpuModel) { DARABONBA_PTR_SET_VALUE(cpuModel_, cpuModel) };


    // cruxModule Field Functions 
    bool hasCruxModule() const { return this->cruxModule_ != nullptr;};
    void deleteCruxModule() { this->cruxModule_ = nullptr;};
    inline string cruxModule() const { DARABONBA_PTR_GET_DEFAULT(cruxModule_, "") };
    inline GetErrorResponseBodyModel& setCruxModule(string cruxModule) { DARABONBA_PTR_SET_VALUE(cruxModule_, cruxModule) };


    // cruxStack Field Functions 
    bool hasCruxStack() const { return this->cruxStack_ != nullptr;};
    void deleteCruxStack() { this->cruxStack_ = nullptr;};
    inline string cruxStack() const { DARABONBA_PTR_GET_DEFAULT(cruxStack_, "") };
    inline GetErrorResponseBodyModel& setCruxStack(string cruxStack) { DARABONBA_PTR_SET_VALUE(cruxStack_, cruxStack) };


    // cruxStackHash Field Functions 
    bool hasCruxStackHash() const { return this->cruxStackHash_ != nullptr;};
    void deleteCruxStackHash() { this->cruxStackHash_ = nullptr;};
    inline int64_t cruxStackHash() const { DARABONBA_PTR_GET_DEFAULT(cruxStackHash_, 0L) };
    inline GetErrorResponseBodyModel& setCruxStackHash(int64_t cruxStackHash) { DARABONBA_PTR_SET_VALUE(cruxStackHash_, cruxStackHash) };


    // cruxStackTrace Field Functions 
    bool hasCruxStackTrace() const { return this->cruxStackTrace_ != nullptr;};
    void deleteCruxStackTrace() { this->cruxStackTrace_ = nullptr;};
    inline string cruxStackTrace() const { DARABONBA_PTR_GET_DEFAULT(cruxStackTrace_, "") };
    inline GetErrorResponseBodyModel& setCruxStackTrace(string cruxStackTrace) { DARABONBA_PTR_SET_VALUE(cruxStackTrace_, cruxStackTrace) };


    // cruxStackTraceHash Field Functions 
    bool hasCruxStackTraceHash() const { return this->cruxStackTraceHash_ != nullptr;};
    void deleteCruxStackTraceHash() { this->cruxStackTraceHash_ = nullptr;};
    inline int64_t cruxStackTraceHash() const { DARABONBA_PTR_GET_DEFAULT(cruxStackTraceHash_, 0L) };
    inline GetErrorResponseBodyModel& setCruxStackTraceHash(int64_t cruxStackTraceHash) { DARABONBA_PTR_SET_VALUE(cruxStackTraceHash_, cruxStackTraceHash) };


    // customExceptionType Field Functions 
    bool hasCustomExceptionType() const { return this->customExceptionType_ != nullptr;};
    void deleteCustomExceptionType() { this->customExceptionType_ = nullptr;};
    inline string customExceptionType() const { DARABONBA_PTR_GET_DEFAULT(customExceptionType_, "") };
    inline GetErrorResponseBodyModel& setCustomExceptionType(string customExceptionType) { DARABONBA_PTR_SET_VALUE(customExceptionType_, customExceptionType) };


    // customInfo Field Functions 
    bool hasCustomInfo() const { return this->customInfo_ != nullptr;};
    void deleteCustomInfo() { this->customInfo_ = nullptr;};
    inline string customInfo() const { DARABONBA_PTR_GET_DEFAULT(customInfo_, "") };
    inline GetErrorResponseBodyModel& setCustomInfo(string customInfo) { DARABONBA_PTR_SET_VALUE(customInfo_, customInfo) };


    // dataDirectory Field Functions 
    bool hasDataDirectory() const { return this->dataDirectory_ != nullptr;};
    void deleteDataDirectory() { this->dataDirectory_ = nullptr;};
    inline string dataDirectory() const { DARABONBA_PTR_GET_DEFAULT(dataDirectory_, "") };
    inline GetErrorResponseBodyModel& setDataDirectory(string dataDirectory) { DARABONBA_PTR_SET_VALUE(dataDirectory_, dataDirectory) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline GetErrorResponseBodyModel& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline GetErrorResponseBodyModel& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // did Field Functions 
    bool hasDid() const { return this->did_ != nullptr;};
    void deleteDid() { this->did_ = nullptr;};
    inline string did() const { DARABONBA_PTR_GET_DEFAULT(did_, "") };
    inline GetErrorResponseBodyModel& setDid(string did) { DARABONBA_PTR_SET_VALUE(did_, did) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline GetErrorResponseBodyModel& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // digestHash Field Functions 
    bool hasDigestHash() const { return this->digestHash_ != nullptr;};
    void deleteDigestHash() { this->digestHash_ = nullptr;};
    inline string digestHash() const { DARABONBA_PTR_GET_DEFAULT(digestHash_, "") };
    inline GetErrorResponseBodyModel& setDigestHash(string digestHash) { DARABONBA_PTR_SET_VALUE(digestHash_, digestHash) };


    // domScore Field Functions 
    bool hasDomScore() const { return this->domScore_ != nullptr;};
    void deleteDomScore() { this->domScore_ = nullptr;};
    inline string domScore() const { DARABONBA_PTR_GET_DEFAULT(domScore_, "") };
    inline GetErrorResponseBodyModel& setDomScore(string domScore) { DARABONBA_PTR_SET_VALUE(domScore_, domScore) };


    // downloadCacheDirectory Field Functions 
    bool hasDownloadCacheDirectory() const { return this->downloadCacheDirectory_ != nullptr;};
    void deleteDownloadCacheDirectory() { this->downloadCacheDirectory_ = nullptr;};
    inline string downloadCacheDirectory() const { DARABONBA_PTR_GET_DEFAULT(downloadCacheDirectory_, "") };
    inline GetErrorResponseBodyModel& setDownloadCacheDirectory(string downloadCacheDirectory) { DARABONBA_PTR_SET_VALUE(downloadCacheDirectory_, downloadCacheDirectory) };


    // errorName Field Functions 
    bool hasErrorName() const { return this->errorName_ != nullptr;};
    void deleteErrorName() { this->errorName_ = nullptr;};
    inline string errorName() const { DARABONBA_PTR_GET_DEFAULT(errorName_, "") };
    inline GetErrorResponseBodyModel& setErrorName(string errorName) { DARABONBA_PTR_SET_VALUE(errorName_, errorName) };


    // errorType Field Functions 
    bool hasErrorType() const { return this->errorType_ != nullptr;};
    void deleteErrorType() { this->errorType_ = nullptr;};
    inline string errorType() const { DARABONBA_PTR_GET_DEFAULT(errorType_, "") };
    inline GetErrorResponseBodyModel& setErrorType(string errorType) { DARABONBA_PTR_SET_VALUE(errorType_, errorType) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline int32_t eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0) };
    inline GetErrorResponseBodyModel& setEventId(int32_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // eventLog Field Functions 
    bool hasEventLog() const { return this->eventLog_ != nullptr;};
    void deleteEventLog() { this->eventLog_ = nullptr;};
    inline string eventLog() const { DARABONBA_PTR_GET_DEFAULT(eventLog_, "") };
    inline GetErrorResponseBodyModel& setEventLog(string eventLog) { DARABONBA_PTR_SET_VALUE(eventLog_, eventLog) };


    // exceptionArg1 Field Functions 
    bool hasExceptionArg1() const { return this->exceptionArg1_ != nullptr;};
    void deleteExceptionArg1() { this->exceptionArg1_ = nullptr;};
    inline string exceptionArg1() const { DARABONBA_PTR_GET_DEFAULT(exceptionArg1_, "") };
    inline GetErrorResponseBodyModel& setExceptionArg1(string exceptionArg1) { DARABONBA_PTR_SET_VALUE(exceptionArg1_, exceptionArg1) };


    // exceptionArg2 Field Functions 
    bool hasExceptionArg2() const { return this->exceptionArg2_ != nullptr;};
    void deleteExceptionArg2() { this->exceptionArg2_ = nullptr;};
    inline string exceptionArg2() const { DARABONBA_PTR_GET_DEFAULT(exceptionArg2_, "") };
    inline GetErrorResponseBodyModel& setExceptionArg2(string exceptionArg2) { DARABONBA_PTR_SET_VALUE(exceptionArg2_, exceptionArg2) };


    // exceptionArg3 Field Functions 
    bool hasExceptionArg3() const { return this->exceptionArg3_ != nullptr;};
    void deleteExceptionArg3() { this->exceptionArg3_ = nullptr;};
    inline string exceptionArg3() const { DARABONBA_PTR_GET_DEFAULT(exceptionArg3_, "") };
    inline GetErrorResponseBodyModel& setExceptionArg3(string exceptionArg3) { DARABONBA_PTR_SET_VALUE(exceptionArg3_, exceptionArg3) };


    // exceptionCode Field Functions 
    bool hasExceptionCode() const { return this->exceptionCode_ != nullptr;};
    void deleteExceptionCode() { this->exceptionCode_ = nullptr;};
    inline string exceptionCode() const { DARABONBA_PTR_GET_DEFAULT(exceptionCode_, "") };
    inline GetErrorResponseBodyModel& setExceptionCode(string exceptionCode) { DARABONBA_PTR_SET_VALUE(exceptionCode_, exceptionCode) };


    // exceptionCodes Field Functions 
    bool hasExceptionCodes() const { return this->exceptionCodes_ != nullptr;};
    void deleteExceptionCodes() { this->exceptionCodes_ = nullptr;};
    inline string exceptionCodes() const { DARABONBA_PTR_GET_DEFAULT(exceptionCodes_, "") };
    inline GetErrorResponseBodyModel& setExceptionCodes(string exceptionCodes) { DARABONBA_PTR_SET_VALUE(exceptionCodes_, exceptionCodes) };


    // exceptionDetail Field Functions 
    bool hasExceptionDetail() const { return this->exceptionDetail_ != nullptr;};
    void deleteExceptionDetail() { this->exceptionDetail_ = nullptr;};
    inline string exceptionDetail() const { DARABONBA_PTR_GET_DEFAULT(exceptionDetail_, "") };
    inline GetErrorResponseBodyModel& setExceptionDetail(string exceptionDetail) { DARABONBA_PTR_SET_VALUE(exceptionDetail_, exceptionDetail) };


    // exceptionId Field Functions 
    bool hasExceptionId() const { return this->exceptionId_ != nullptr;};
    void deleteExceptionId() { this->exceptionId_ = nullptr;};
    inline string exceptionId() const { DARABONBA_PTR_GET_DEFAULT(exceptionId_, "") };
    inline GetErrorResponseBodyModel& setExceptionId(string exceptionId) { DARABONBA_PTR_SET_VALUE(exceptionId_, exceptionId) };


    // exceptionMsg Field Functions 
    bool hasExceptionMsg() const { return this->exceptionMsg_ != nullptr;};
    void deleteExceptionMsg() { this->exceptionMsg_ = nullptr;};
    inline string exceptionMsg() const { DARABONBA_PTR_GET_DEFAULT(exceptionMsg_, "") };
    inline GetErrorResponseBodyModel& setExceptionMsg(string exceptionMsg) { DARABONBA_PTR_SET_VALUE(exceptionMsg_, exceptionMsg) };


    // exceptionSubtype Field Functions 
    bool hasExceptionSubtype() const { return this->exceptionSubtype_ != nullptr;};
    void deleteExceptionSubtype() { this->exceptionSubtype_ = nullptr;};
    inline string exceptionSubtype() const { DARABONBA_PTR_GET_DEFAULT(exceptionSubtype_, "") };
    inline GetErrorResponseBodyModel& setExceptionSubtype(string exceptionSubtype) { DARABONBA_PTR_SET_VALUE(exceptionSubtype_, exceptionSubtype) };


    // exceptionType Field Functions 
    bool hasExceptionType() const { return this->exceptionType_ != nullptr;};
    void deleteExceptionType() { this->exceptionType_ = nullptr;};
    inline string exceptionType() const { DARABONBA_PTR_GET_DEFAULT(exceptionType_, "") };
    inline GetErrorResponseBodyModel& setExceptionType(string exceptionType) { DARABONBA_PTR_SET_VALUE(exceptionType_, exceptionType) };


    // exceptionVersion Field Functions 
    bool hasExceptionVersion() const { return this->exceptionVersion_ != nullptr;};
    void deleteExceptionVersion() { this->exceptionVersion_ = nullptr;};
    inline string exceptionVersion() const { DARABONBA_PTR_GET_DEFAULT(exceptionVersion_, "") };
    inline GetErrorResponseBodyModel& setExceptionVersion(string exceptionVersion) { DARABONBA_PTR_SET_VALUE(exceptionVersion_, exceptionVersion) };


    // exportStatus Field Functions 
    bool hasExportStatus() const { return this->exportStatus_ != nullptr;};
    void deleteExportStatus() { this->exportStatus_ = nullptr;};
    inline string exportStatus() const { DARABONBA_PTR_GET_DEFAULT(exportStatus_, "") };
    inline GetErrorResponseBodyModel& setExportStatus(string exportStatus) { DARABONBA_PTR_SET_VALUE(exportStatus_, exportStatus) };


    // externalStorageDirectory Field Functions 
    bool hasExternalStorageDirectory() const { return this->externalStorageDirectory_ != nullptr;};
    void deleteExternalStorageDirectory() { this->externalStorageDirectory_ = nullptr;};
    inline string externalStorageDirectory() const { DARABONBA_PTR_GET_DEFAULT(externalStorageDirectory_, "") };
    inline GetErrorResponseBodyModel& setExternalStorageDirectory(string externalStorageDirectory) { DARABONBA_PTR_SET_VALUE(externalStorageDirectory_, externalStorageDirectory) };


    // featureScene Field Functions 
    bool hasFeatureScene() const { return this->featureScene_ != nullptr;};
    void deleteFeatureScene() { this->featureScene_ = nullptr;};
    inline string featureScene() const { DARABONBA_PTR_GET_DEFAULT(featureScene_, "") };
    inline GetErrorResponseBodyModel& setFeatureScene(string featureScene) { DARABONBA_PTR_SET_VALUE(featureScene_, featureScene) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetErrorResponseBodyModel& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline GetErrorResponseBodyModel& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GetErrorResponseBodyModel& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // flutterRoute Field Functions 
    bool hasFlutterRoute() const { return this->flutterRoute_ != nullptr;};
    void deleteFlutterRoute() { this->flutterRoute_ = nullptr;};
    inline string flutterRoute() const { DARABONBA_PTR_GET_DEFAULT(flutterRoute_, "") };
    inline GetErrorResponseBodyModel& setFlutterRoute(string flutterRoute) { DARABONBA_PTR_SET_VALUE(flutterRoute_, flutterRoute) };


    // forceGround Field Functions 
    bool hasForceGround() const { return this->forceGround_ != nullptr;};
    void deleteForceGround() { this->forceGround_ = nullptr;};
    inline int32_t forceGround() const { DARABONBA_PTR_GET_DEFAULT(forceGround_, 0) };
    inline GetErrorResponseBodyModel& setForceGround(int32_t forceGround) { DARABONBA_PTR_SET_VALUE(forceGround_, forceGround) };


    // foreGround Field Functions 
    bool hasForeGround() const { return this->foreGround_ != nullptr;};
    void deleteForeGround() { this->foreGround_ = nullptr;};
    inline int32_t foreGround() const { DARABONBA_PTR_GET_DEFAULT(foreGround_, 0) };
    inline GetErrorResponseBodyModel& setForeGround(int32_t foreGround) { DARABONBA_PTR_SET_VALUE(foreGround_, foreGround) };


    // h5FullUrl Field Functions 
    bool hasH5FullUrl() const { return this->h5FullUrl_ != nullptr;};
    void deleteH5FullUrl() { this->h5FullUrl_ = nullptr;};
    inline string h5FullUrl() const { DARABONBA_PTR_GET_DEFAULT(h5FullUrl_, "") };
    inline GetErrorResponseBodyModel& setH5FullUrl(string h5FullUrl) { DARABONBA_PTR_SET_VALUE(h5FullUrl_, h5FullUrl) };


    // h5ShortUrl Field Functions 
    bool hasH5ShortUrl() const { return this->h5ShortUrl_ != nullptr;};
    void deleteH5ShortUrl() { this->h5ShortUrl_ = nullptr;};
    inline string h5ShortUrl() const { DARABONBA_PTR_GET_DEFAULT(h5ShortUrl_, "") };
    inline GetErrorResponseBodyModel& setH5ShortUrl(string h5ShortUrl) { DARABONBA_PTR_SET_VALUE(h5ShortUrl_, h5ShortUrl) };


    // hasOpenMultiProcessMode Field Functions 
    bool hasHasOpenMultiProcessMode() const { return this->hasOpenMultiProcessMode_ != nullptr;};
    void deleteHasOpenMultiProcessMode() { this->hasOpenMultiProcessMode_ = nullptr;};
    inline int32_t hasOpenMultiProcessMode() const { DARABONBA_PTR_GET_DEFAULT(hasOpenMultiProcessMode_, 0) };
    inline GetErrorResponseBodyModel& setHasOpenMultiProcessMode(int32_t hasOpenMultiProcessMode) { DARABONBA_PTR_SET_VALUE(hasOpenMultiProcessMode_, hasOpenMultiProcessMode) };


    // hasSdCard Field Functions 
    bool hasHasSdCard() const { return this->hasSdCard_ != nullptr;};
    void deleteHasSdCard() { this->hasSdCard_ = nullptr;};
    inline int32_t hasSdCard() const { DARABONBA_PTR_GET_DEFAULT(hasSdCard_, 0) };
    inline GetErrorResponseBodyModel& setHasSdCard(int32_t hasSdCard) { DARABONBA_PTR_SET_VALUE(hasSdCard_, hasSdCard) };


    // hasSgSecurityConfigKey Field Functions 
    bool hasHasSgSecurityConfigKey() const { return this->hasSgSecurityConfigKey_ != nullptr;};
    void deleteHasSgSecurityConfigKey() { this->hasSgSecurityConfigKey_ = nullptr;};
    inline int32_t hasSgSecurityConfigKey() const { DARABONBA_PTR_GET_DEFAULT(hasSgSecurityConfigKey_, 0) };
    inline GetErrorResponseBodyModel& setHasSgSecurityConfigKey(int32_t hasSgSecurityConfigKey) { DARABONBA_PTR_SET_VALUE(hasSgSecurityConfigKey_, hasSgSecurityConfigKey) };


    // imei Field Functions 
    bool hasImei() const { return this->imei_ != nullptr;};
    void deleteImei() { this->imei_ = nullptr;};
    inline string imei() const { DARABONBA_PTR_GET_DEFAULT(imei_, "") };
    inline GetErrorResponseBodyModel& setImei(string imei) { DARABONBA_PTR_SET_VALUE(imei_, imei) };


    // imsi Field Functions 
    bool hasImsi() const { return this->imsi_ != nullptr;};
    void deleteImsi() { this->imsi_ = nullptr;};
    inline string imsi() const { DARABONBA_PTR_GET_DEFAULT(imsi_, "") };
    inline GetErrorResponseBodyModel& setImsi(string imsi) { DARABONBA_PTR_SET_VALUE(imsi_, imsi) };


    // inMainProcess Field Functions 
    bool hasInMainProcess() const { return this->inMainProcess_ != nullptr;};
    void deleteInMainProcess() { this->inMainProcess_ = nullptr;};
    inline int32_t inMainProcess() const { DARABONBA_PTR_GET_DEFAULT(inMainProcess_, 0) };
    inline GetErrorResponseBodyModel& setInMainProcess(int32_t inMainProcess) { DARABONBA_PTR_SET_VALUE(inMainProcess_, inMainProcess) };


    // installSdCard Field Functions 
    bool hasInstallSdCard() const { return this->installSdCard_ != nullptr;};
    void deleteInstallSdCard() { this->installSdCard_ = nullptr;};
    inline int32_t installSdCard() const { DARABONBA_PTR_GET_DEFAULT(installSdCard_, 0) };
    inline GetErrorResponseBodyModel& setInstallSdCard(int32_t installSdCard) { DARABONBA_PTR_SET_VALUE(installSdCard_, installSdCard) };


    // isBackTrace Field Functions 
    bool hasIsBackTrace() const { return this->isBackTrace_ != nullptr;};
    void deleteIsBackTrace() { this->isBackTrace_ = nullptr;};
    inline int32_t isBackTrace() const { DARABONBA_PTR_GET_DEFAULT(isBackTrace_, 0) };
    inline GetErrorResponseBodyModel& setIsBackTrace(int32_t isBackTrace) { DARABONBA_PTR_SET_VALUE(isBackTrace_, isBackTrace) };


    // isSpeedVersion Field Functions 
    bool hasIsSpeedVersion() const { return this->isSpeedVersion_ != nullptr;};
    void deleteIsSpeedVersion() { this->isSpeedVersion_ = nullptr;};
    inline int32_t isSpeedVersion() const { DARABONBA_PTR_GET_DEFAULT(isSpeedVersion_, 0) };
    inline GetErrorResponseBodyModel& setIsSpeedVersion(int32_t isSpeedVersion) { DARABONBA_PTR_SET_VALUE(isSpeedVersion_, isSpeedVersion) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline GetErrorResponseBodyModel& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // jsBacktrace Field Functions 
    bool hasJsBacktrace() const { return this->jsBacktrace_ != nullptr;};
    void deleteJsBacktrace() { this->jsBacktrace_ = nullptr;};
    inline string jsBacktrace() const { DARABONBA_PTR_GET_DEFAULT(jsBacktrace_, "") };
    inline GetErrorResponseBodyModel& setJsBacktrace(string jsBacktrace) { DARABONBA_PTR_SET_VALUE(jsBacktrace_, jsBacktrace) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetErrorResponseBodyModel& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // launchedTime Field Functions 
    bool hasLaunchedTime() const { return this->launchedTime_ != nullptr;};
    void deleteLaunchedTime() { this->launchedTime_ = nullptr;};
    inline string launchedTime() const { DARABONBA_PTR_GET_DEFAULT(launchedTime_, "") };
    inline GetErrorResponseBodyModel& setLaunchedTime(string launchedTime) { DARABONBA_PTR_SET_VALUE(launchedTime_, launchedTime) };


    // lineNo Field Functions 
    bool hasLineNo() const { return this->lineNo_ != nullptr;};
    void deleteLineNo() { this->lineNo_ = nullptr;};
    inline string lineNo() const { DARABONBA_PTR_GET_DEFAULT(lineNo_, "") };
    inline GetErrorResponseBodyModel& setLineNo(string lineNo) { DARABONBA_PTR_SET_VALUE(lineNo_, lineNo) };


    // logHash Field Functions 
    bool hasLogHash() const { return this->logHash_ != nullptr;};
    void deleteLogHash() { this->logHash_ = nullptr;};
    inline int64_t logHash() const { DARABONBA_PTR_GET_DEFAULT(logHash_, 0L) };
    inline GetErrorResponseBodyModel& setLogHash(int64_t logHash) { DARABONBA_PTR_SET_VALUE(logHash_, logHash) };


    // mainLog Field Functions 
    bool hasMainLog() const { return this->mainLog_ != nullptr;};
    void deleteMainLog() { this->mainLog_ = nullptr;};
    inline string mainLog() const { DARABONBA_PTR_GET_DEFAULT(mainLog_, "") };
    inline GetErrorResponseBodyModel& setMainLog(string mainLog) { DARABONBA_PTR_SET_VALUE(mainLog_, mainLog) };


    // memoryMap Field Functions 
    bool hasMemoryMap() const { return this->memoryMap_ != nullptr;};
    void deleteMemoryMap() { this->memoryMap_ = nullptr;};
    inline string memoryMap() const { DARABONBA_PTR_GET_DEFAULT(memoryMap_, "") };
    inline GetErrorResponseBodyModel& setMemoryMap(string memoryMap) { DARABONBA_PTR_SET_VALUE(memoryMap_, memoryMap) };


    // moreInfo1 Field Functions 
    bool hasMoreInfo1() const { return this->moreInfo1_ != nullptr;};
    void deleteMoreInfo1() { this->moreInfo1_ = nullptr;};
    inline string moreInfo1() const { DARABONBA_PTR_GET_DEFAULT(moreInfo1_, "") };
    inline GetErrorResponseBodyModel& setMoreInfo1(string moreInfo1) { DARABONBA_PTR_SET_VALUE(moreInfo1_, moreInfo1) };


    // moreInfo2 Field Functions 
    bool hasMoreInfo2() const { return this->moreInfo2_ != nullptr;};
    void deleteMoreInfo2() { this->moreInfo2_ = nullptr;};
    inline string moreInfo2() const { DARABONBA_PTR_GET_DEFAULT(moreInfo2_, "") };
    inline GetErrorResponseBodyModel& setMoreInfo2(string moreInfo2) { DARABONBA_PTR_SET_VALUE(moreInfo2_, moreInfo2) };


    // moreInfo3 Field Functions 
    bool hasMoreInfo3() const { return this->moreInfo3_ != nullptr;};
    void deleteMoreInfo3() { this->moreInfo3_ = nullptr;};
    inline string moreInfo3() const { DARABONBA_PTR_GET_DEFAULT(moreInfo3_, "") };
    inline GetErrorResponseBodyModel& setMoreInfo3(string moreInfo3) { DARABONBA_PTR_SET_VALUE(moreInfo3_, moreInfo3) };


    // nativeAllThreadDump Field Functions 
    bool hasNativeAllThreadDump() const { return this->nativeAllThreadDump_ != nullptr;};
    void deleteNativeAllThreadDump() { this->nativeAllThreadDump_ = nullptr;};
    inline string nativeAllThreadDump() const { DARABONBA_PTR_GET_DEFAULT(nativeAllThreadDump_, "") };
    inline GetErrorResponseBodyModel& setNativeAllThreadDump(string nativeAllThreadDump) { DARABONBA_PTR_SET_VALUE(nativeAllThreadDump_, nativeAllThreadDump) };


    // nativeMaps Field Functions 
    bool hasNativeMaps() const { return this->nativeMaps_ != nullptr;};
    void deleteNativeMaps() { this->nativeMaps_ = nullptr;};
    inline string nativeMaps() const { DARABONBA_PTR_GET_DEFAULT(nativeMaps_, "") };
    inline GetErrorResponseBodyModel& setNativeMaps(string nativeMaps) { DARABONBA_PTR_SET_VALUE(nativeMaps_, nativeMaps) };


    // needReCluster Field Functions 
    bool hasNeedReCluster() const { return this->needReCluster_ != nullptr;};
    void deleteNeedReCluster() { this->needReCluster_ = nullptr;};
    inline int32_t needReCluster() const { DARABONBA_PTR_GET_DEFAULT(needReCluster_, 0) };
    inline GetErrorResponseBodyModel& setNeedReCluster(int32_t needReCluster) { DARABONBA_PTR_SET_VALUE(needReCluster_, needReCluster) };


    // openedFileCount Field Functions 
    bool hasOpenedFileCount() const { return this->openedFileCount_ != nullptr;};
    void deleteOpenedFileCount() { this->openedFileCount_ = nullptr;};
    inline int32_t openedFileCount() const { DARABONBA_PTR_GET_DEFAULT(openedFileCount_, 0) };
    inline GetErrorResponseBodyModel& setOpenedFileCount(int32_t openedFileCount) { DARABONBA_PTR_SET_VALUE(openedFileCount_, openedFileCount) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline string operations() const { DARABONBA_PTR_GET_DEFAULT(operations_, "") };
    inline GetErrorResponseBodyModel& setOperations(string operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };


    // originData Field Functions 
    bool hasOriginData() const { return this->originData_ != nullptr;};
    void deleteOriginData() { this->originData_ = nullptr;};
    inline string originData() const { DARABONBA_PTR_GET_DEFAULT(originData_, "") };
    inline GetErrorResponseBodyModel& setOriginData(string originData) { DARABONBA_PTR_SET_VALUE(originData_, originData) };


    // originUri Field Functions 
    bool hasOriginUri() const { return this->originUri_ != nullptr;};
    void deleteOriginUri() { this->originUri_ = nullptr;};
    inline string originUri() const { DARABONBA_PTR_GET_DEFAULT(originUri_, "") };
    inline GetErrorResponseBodyModel& setOriginUri(string originUri) { DARABONBA_PTR_SET_VALUE(originUri_, originUri) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline GetErrorResponseBodyModel& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline GetErrorResponseBodyModel& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline string page() const { DARABONBA_PTR_GET_DEFAULT(page_, "") };
    inline GetErrorResponseBodyModel& setPage(string page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // parentProcessName Field Functions 
    bool hasParentProcessName() const { return this->parentProcessName_ != nullptr;};
    void deleteParentProcessName() { this->parentProcessName_ = nullptr;};
    inline string parentProcessName() const { DARABONBA_PTR_GET_DEFAULT(parentProcessName_, "") };
    inline GetErrorResponseBodyModel& setParentProcessName(string parentProcessName) { DARABONBA_PTR_SET_VALUE(parentProcessName_, parentProcessName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline int32_t pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, 0) };
    inline GetErrorResponseBodyModel& setPid(int32_t pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetErrorResponseBodyModel& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string processName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline GetErrorResponseBodyModel& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline GetErrorResponseBodyModel& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetErrorResponseBodyModel& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reportContent Field Functions 
    bool hasReportContent() const { return this->reportContent_ != nullptr;};
    void deleteReportContent() { this->reportContent_ = nullptr;};
    inline string reportContent() const { DARABONBA_PTR_GET_DEFAULT(reportContent_, "") };
    inline GetErrorResponseBodyModel& setReportContent(string reportContent) { DARABONBA_PTR_SET_VALUE(reportContent_, reportContent) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetErrorResponseBodyModel& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string resolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline GetErrorResponseBodyModel& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // rootDirectory Field Functions 
    bool hasRootDirectory() const { return this->rootDirectory_ != nullptr;};
    void deleteRootDirectory() { this->rootDirectory_ = nullptr;};
    inline string rootDirectory() const { DARABONBA_PTR_GET_DEFAULT(rootDirectory_, "") };
    inline GetErrorResponseBodyModel& setRootDirectory(string rootDirectory) { DARABONBA_PTR_SET_VALUE(rootDirectory_, rootDirectory) };


    // runtimeExtData Field Functions 
    bool hasRuntimeExtData() const { return this->runtimeExtData_ != nullptr;};
    void deleteRuntimeExtData() { this->runtimeExtData_ = nullptr;};
    inline string runtimeExtData() const { DARABONBA_PTR_GET_DEFAULT(runtimeExtData_, "") };
    inline GetErrorResponseBodyModel& setRuntimeExtData(string runtimeExtData) { DARABONBA_PTR_SET_VALUE(runtimeExtData_, runtimeExtData) };


    // sceneValue Field Functions 
    bool hasSceneValue() const { return this->sceneValue_ != nullptr;};
    void deleteSceneValue() { this->sceneValue_ = nullptr;};
    inline string sceneValue() const { DARABONBA_PTR_GET_DEFAULT(sceneValue_, "") };
    inline GetErrorResponseBodyModel& setSceneValue(string sceneValue) { DARABONBA_PTR_SET_VALUE(sceneValue_, sceneValue) };


    // sdkType Field Functions 
    bool hasSdkType() const { return this->sdkType_ != nullptr;};
    void deleteSdkType() { this->sdkType_ = nullptr;};
    inline string sdkType() const { DARABONBA_PTR_GET_DEFAULT(sdkType_, "") };
    inline GetErrorResponseBodyModel& setSdkType(string sdkType) { DARABONBA_PTR_SET_VALUE(sdkType_, sdkType) };


    // sdkVersion Field Functions 
    bool hasSdkVersion() const { return this->sdkVersion_ != nullptr;};
    void deleteSdkVersion() { this->sdkVersion_ = nullptr;};
    inline string sdkVersion() const { DARABONBA_PTR_GET_DEFAULT(sdkVersion_, "") };
    inline GetErrorResponseBodyModel& setSdkVersion(string sdkVersion) { DARABONBA_PTR_SET_VALUE(sdkVersion_, sdkVersion) };


    // seq Field Functions 
    bool hasSeq() const { return this->seq_ != nullptr;};
    void deleteSeq() { this->seq_ = nullptr;};
    inline string seq() const { DARABONBA_PTR_GET_DEFAULT(seq_, "") };
    inline GetErrorResponseBodyModel& setSeq(string seq) { DARABONBA_PTR_SET_VALUE(seq_, seq) };


    // serverTime Field Functions 
    bool hasServerTime() const { return this->serverTime_ != nullptr;};
    void deleteServerTime() { this->serverTime_ = nullptr;};
    inline int64_t serverTime() const { DARABONBA_PTR_GET_DEFAULT(serverTime_, 0L) };
    inline GetErrorResponseBodyModel& setServerTime(int64_t serverTime) { DARABONBA_PTR_SET_VALUE(serverTime_, serverTime) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetErrorResponseBodyModel& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // simpleReportContent Field Functions 
    bool hasSimpleReportContent() const { return this->simpleReportContent_ != nullptr;};
    void deleteSimpleReportContent() { this->simpleReportContent_ = nullptr;};
    inline string simpleReportContent() const { DARABONBA_PTR_GET_DEFAULT(simpleReportContent_, "") };
    inline GetErrorResponseBodyModel& setSimpleReportContent(string simpleReportContent) { DARABONBA_PTR_SET_VALUE(simpleReportContent_, simpleReportContent) };


    // soLibBuild Field Functions 
    bool hasSoLibBuild() const { return this->soLibBuild_ != nullptr;};
    void deleteSoLibBuild() { this->soLibBuild_ = nullptr;};
    inline string soLibBuild() const { DARABONBA_PTR_GET_DEFAULT(soLibBuild_, "") };
    inline GetErrorResponseBodyModel& setSoLibBuild(string soLibBuild) { DARABONBA_PTR_SET_VALUE(soLibBuild_, soLibBuild) };


    // speedFlags Field Functions 
    bool hasSpeedFlags() const { return this->speedFlags_ != nullptr;};
    void deleteSpeedFlags() { this->speedFlags_ = nullptr;};
    inline string speedFlags() const { DARABONBA_PTR_GET_DEFAULT(speedFlags_, "") };
    inline GetErrorResponseBodyModel& setSpeedFlags(string speedFlags) { DARABONBA_PTR_SET_VALUE(speedFlags_, speedFlags) };


    // stack Field Functions 
    bool hasStack() const { return this->stack_ != nullptr;};
    void deleteStack() { this->stack_ = nullptr;};
    inline string stack() const { DARABONBA_PTR_GET_DEFAULT(stack_, "") };
    inline GetErrorResponseBodyModel& setStack(string stack) { DARABONBA_PTR_SET_VALUE(stack_, stack) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetErrorResponseBodyModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // structuredStack Field Functions 
    bool hasStructuredStack() const { return this->structuredStack_ != nullptr;};
    void deleteStructuredStack() { this->structuredStack_ = nullptr;};
    inline string structuredStack() const { DARABONBA_PTR_GET_DEFAULT(structuredStack_, "") };
    inline GetErrorResponseBodyModel& setStructuredStack(string structuredStack) { DARABONBA_PTR_SET_VALUE(structuredStack_, structuredStack) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetErrorResponseBodyModel& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // symbolicFileType Field Functions 
    bool hasSymbolicFileType() const { return this->symbolicFileType_ != nullptr;};
    void deleteSymbolicFileType() { this->symbolicFileType_ = nullptr;};
    inline string symbolicFileType() const { DARABONBA_PTR_GET_DEFAULT(symbolicFileType_, "") };
    inline GetErrorResponseBodyModel& setSymbolicFileType(string symbolicFileType) { DARABONBA_PTR_SET_VALUE(symbolicFileType_, symbolicFileType) };


    // sysLog Field Functions 
    bool hasSysLog() const { return this->sysLog_ != nullptr;};
    void deleteSysLog() { this->sysLog_ = nullptr;};
    inline string sysLog() const { DARABONBA_PTR_GET_DEFAULT(sysLog_, "") };
    inline GetErrorResponseBodyModel& setSysLog(string sysLog) { DARABONBA_PTR_SET_VALUE(sysLog_, sysLog) };


    // threadName Field Functions 
    bool hasThreadName() const { return this->threadName_ != nullptr;};
    void deleteThreadName() { this->threadName_ = nullptr;};
    inline string threadName() const { DARABONBA_PTR_GET_DEFAULT(threadName_, "") };
    inline GetErrorResponseBodyModel& setThreadName(string threadName) { DARABONBA_PTR_SET_VALUE(threadName_, threadName) };


    // threads Field Functions 
    bool hasThreads() const { return this->threads_ != nullptr;};
    void deleteThreads() { this->threads_ = nullptr;};
    inline string threads() const { DARABONBA_PTR_GET_DEFAULT(threads_, "") };
    inline GetErrorResponseBodyModel& setThreads(string threads) { DARABONBA_PTR_SET_VALUE(threads_, threads) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int32_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0) };
    inline GetErrorResponseBodyModel& setTid(int32_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // track Field Functions 
    bool hasTrack() const { return this->track_ != nullptr;};
    void deleteTrack() { this->track_ = nullptr;};
    inline string track() const { DARABONBA_PTR_GET_DEFAULT(track_, "") };
    inline GetErrorResponseBodyModel& setTrack(string track) { DARABONBA_PTR_SET_VALUE(track_, track) };


    // triggeredTime Field Functions 
    bool hasTriggeredTime() const { return this->triggeredTime_ != nullptr;};
    void deleteTriggeredTime() { this->triggeredTime_ = nullptr;};
    inline string triggeredTime() const { DARABONBA_PTR_GET_DEFAULT(triggeredTime_, "") };
    inline GetErrorResponseBodyModel& setTriggeredTime(string triggeredTime) { DARABONBA_PTR_SET_VALUE(triggeredTime_, triggeredTime) };


    // uploadTime Field Functions 
    bool hasUploadTime() const { return this->uploadTime_ != nullptr;};
    void deleteUploadTime() { this->uploadTime_ = nullptr;};
    inline int64_t uploadTime() const { DARABONBA_PTR_GET_DEFAULT(uploadTime_, 0L) };
    inline GetErrorResponseBodyModel& setUploadTime(int64_t uploadTime) { DARABONBA_PTR_SET_VALUE(uploadTime_, uploadTime) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GetErrorResponseBodyModel& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline GetErrorResponseBodyModel& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetErrorResponseBodyModel& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline GetErrorResponseBodyModel& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


    // utdid Field Functions 
    bool hasUtdid() const { return this->utdid_ != nullptr;};
    void deleteUtdid() { this->utdid_ = nullptr;};
    inline string utdid() const { DARABONBA_PTR_GET_DEFAULT(utdid_, "") };
    inline GetErrorResponseBodyModel& setUtdid(string utdid) { DARABONBA_PTR_SET_VALUE(utdid_, utdid) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetErrorResponseBodyModel& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // view Field Functions 
    bool hasView() const { return this->view_ != nullptr;};
    void deleteView() { this->view_ = nullptr;};
    inline string view() const { DARABONBA_PTR_GET_DEFAULT(view_, "") };
    inline GetErrorResponseBodyModel& setView(string view) { DARABONBA_PTR_SET_VALUE(view_, view) };


    // weexFullUrl Field Functions 
    bool hasWeexFullUrl() const { return this->weexFullUrl_ != nullptr;};
    void deleteWeexFullUrl() { this->weexFullUrl_ = nullptr;};
    inline string weexFullUrl() const { DARABONBA_PTR_GET_DEFAULT(weexFullUrl_, "") };
    inline GetErrorResponseBodyModel& setWeexFullUrl(string weexFullUrl) { DARABONBA_PTR_SET_VALUE(weexFullUrl_, weexFullUrl) };


    // weexShortUrl Field Functions 
    bool hasWeexShortUrl() const { return this->weexShortUrl_ != nullptr;};
    void deleteWeexShortUrl() { this->weexShortUrl_ = nullptr;};
    inline string weexShortUrl() const { DARABONBA_PTR_GET_DEFAULT(weexShortUrl_, "") };
    inline GetErrorResponseBodyModel& setWeexShortUrl(string weexShortUrl) { DARABONBA_PTR_SET_VALUE(weexShortUrl_, weexShortUrl) };


    // writeLimit Field Functions 
    bool hasWriteLimit() const { return this->writeLimit_ != nullptr;};
    void deleteWriteLimit() { this->writeLimit_ = nullptr;};
    inline int32_t writeLimit() const { DARABONBA_PTR_GET_DEFAULT(writeLimit_, 0) };
    inline GetErrorResponseBodyModel& setWriteLimit(int32_t writeLimit) { DARABONBA_PTR_SET_VALUE(writeLimit_, writeLimit) };


  protected:
    std::shared_ptr<string> access_ = nullptr;
    std::shared_ptr<string> accessSubType_ = nullptr;
    std::shared_ptr<string> additionalCallbackInfo_ = nullptr;
    std::shared_ptr<string> additionalCrossPlatformCrashInfo_ = nullptr;
    std::shared_ptr<string> additionalCustomInfo_ = nullptr;
    std::shared_ptr<string> androidVm_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    // appKey
    std::shared_ptr<int64_t> appKey_ = nullptr;
    std::shared_ptr<string> appVersion_ = nullptr;
    std::shared_ptr<int64_t> argHash_ = nullptr;
    std::shared_ptr<string> args_ = nullptr;
    std::shared_ptr<string> backtrace_ = nullptr;
    // banner
    std::shared_ptr<string> banner_ = nullptr;
    std::shared_ptr<string> binaryUuids_ = nullptr;
    std::shared_ptr<string> brand_ = nullptr;
    std::shared_ptr<string> browserName_ = nullptr;
    std::shared_ptr<string> browserVersion_ = nullptr;
    std::shared_ptr<string> build_ = nullptr;
    std::shared_ptr<string> businessCountry_ = nullptr;
    std::shared_ptr<string> businessErrorExtData_ = nullptr;
    std::shared_ptr<string> businessLogType_ = nullptr;
    // carrier
    std::shared_ptr<string> carrier_ = nullptr;
    std::shared_ptr<string> channel_ = nullptr;
    std::shared_ptr<string> city_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<int64_t> clientTime_ = nullptr;
    std::shared_ptr<string> colNo_ = nullptr;
    std::shared_ptr<string> country_ = nullptr;
    std::shared_ptr<string> cpuModel_ = nullptr;
    std::shared_ptr<string> cruxModule_ = nullptr;
    std::shared_ptr<string> cruxStack_ = nullptr;
    std::shared_ptr<int64_t> cruxStackHash_ = nullptr;
    // CruxStackTrace
    std::shared_ptr<string> cruxStackTrace_ = nullptr;
    std::shared_ptr<int64_t> cruxStackTraceHash_ = nullptr;
    std::shared_ptr<string> customExceptionType_ = nullptr;
    std::shared_ptr<string> customInfo_ = nullptr;
    std::shared_ptr<string> dataDirectory_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceModel_ = nullptr;
    std::shared_ptr<string> did_ = nullptr;
    std::shared_ptr<string> digest_ = nullptr;
    std::shared_ptr<string> digestHash_ = nullptr;
    std::shared_ptr<string> domScore_ = nullptr;
    std::shared_ptr<string> downloadCacheDirectory_ = nullptr;
    std::shared_ptr<string> errorName_ = nullptr;
    std::shared_ptr<string> errorType_ = nullptr;
    std::shared_ptr<int32_t> eventId_ = nullptr;
    std::shared_ptr<string> eventLog_ = nullptr;
    std::shared_ptr<string> exceptionArg1_ = nullptr;
    std::shared_ptr<string> exceptionArg2_ = nullptr;
    std::shared_ptr<string> exceptionArg3_ = nullptr;
    std::shared_ptr<string> exceptionCode_ = nullptr;
    std::shared_ptr<string> exceptionCodes_ = nullptr;
    std::shared_ptr<string> exceptionDetail_ = nullptr;
    std::shared_ptr<string> exceptionId_ = nullptr;
    std::shared_ptr<string> exceptionMsg_ = nullptr;
    std::shared_ptr<string> exceptionSubtype_ = nullptr;
    std::shared_ptr<string> exceptionType_ = nullptr;
    std::shared_ptr<string> exceptionVersion_ = nullptr;
    std::shared_ptr<string> exportStatus_ = nullptr;
    std::shared_ptr<string> externalStorageDirectory_ = nullptr;
    std::shared_ptr<string> featureScene_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> flutterRoute_ = nullptr;
    std::shared_ptr<int32_t> forceGround_ = nullptr;
    std::shared_ptr<int32_t> foreGround_ = nullptr;
    std::shared_ptr<string> h5FullUrl_ = nullptr;
    std::shared_ptr<string> h5ShortUrl_ = nullptr;
    std::shared_ptr<int32_t> hasOpenMultiProcessMode_ = nullptr;
    std::shared_ptr<int32_t> hasSdCard_ = nullptr;
    std::shared_ptr<int32_t> hasSgSecurityConfigKey_ = nullptr;
    // IMEI
    std::shared_ptr<string> imei_ = nullptr;
    // IMSI
    std::shared_ptr<string> imsi_ = nullptr;
    std::shared_ptr<int32_t> inMainProcess_ = nullptr;
    std::shared_ptr<int32_t> installSdCard_ = nullptr;
    std::shared_ptr<int32_t> isBackTrace_ = nullptr;
    std::shared_ptr<int32_t> isSpeedVersion_ = nullptr;
    // ISP
    std::shared_ptr<string> isp_ = nullptr;
    std::shared_ptr<string> jsBacktrace_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> launchedTime_ = nullptr;
    std::shared_ptr<string> lineNo_ = nullptr;
    std::shared_ptr<int64_t> logHash_ = nullptr;
    std::shared_ptr<string> mainLog_ = nullptr;
    std::shared_ptr<string> memoryMap_ = nullptr;
    std::shared_ptr<string> moreInfo1_ = nullptr;
    std::shared_ptr<string> moreInfo2_ = nullptr;
    std::shared_ptr<string> moreInfo3_ = nullptr;
    std::shared_ptr<string> nativeAllThreadDump_ = nullptr;
    // Native map
    std::shared_ptr<string> nativeMaps_ = nullptr;
    std::shared_ptr<int32_t> needReCluster_ = nullptr;
    std::shared_ptr<int32_t> openedFileCount_ = nullptr;
    std::shared_ptr<string> operations_ = nullptr;
    std::shared_ptr<string> originData_ = nullptr;
    std::shared_ptr<string> originUri_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> osVersion_ = nullptr;
    std::shared_ptr<string> page_ = nullptr;
    std::shared_ptr<string> parentProcessName_ = nullptr;
    std::shared_ptr<int32_t> pid_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    std::shared_ptr<string> processName_ = nullptr;
    std::shared_ptr<string> province_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> reportContent_ = nullptr;
    std::shared_ptr<string> reportType_ = nullptr;
    std::shared_ptr<string> resolution_ = nullptr;
    std::shared_ptr<string> rootDirectory_ = nullptr;
    std::shared_ptr<string> runtimeExtData_ = nullptr;
    std::shared_ptr<string> sceneValue_ = nullptr;
    std::shared_ptr<string> sdkType_ = nullptr;
    std::shared_ptr<string> sdkVersion_ = nullptr;
    std::shared_ptr<string> seq_ = nullptr;
    std::shared_ptr<int64_t> serverTime_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> simpleReportContent_ = nullptr;
    std::shared_ptr<string> soLibBuild_ = nullptr;
    // SpeedFlags
    std::shared_ptr<string> speedFlags_ = nullptr;
    std::shared_ptr<string> stack_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> structuredStack_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> symbolicFileType_ = nullptr;
    std::shared_ptr<string> sysLog_ = nullptr;
    std::shared_ptr<string> threadName_ = nullptr;
    std::shared_ptr<string> threads_ = nullptr;
    std::shared_ptr<int32_t> tid_ = nullptr;
    std::shared_ptr<string> track_ = nullptr;
    std::shared_ptr<string> triggeredTime_ = nullptr;
    std::shared_ptr<int64_t> uploadTime_ = nullptr;
    // URI
    std::shared_ptr<string> uri_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> userNick_ = nullptr;
    // utdid
    std::shared_ptr<string> utdid_ = nullptr;
    // uuid
    std::shared_ptr<string> uuid_ = nullptr;
    // view
    std::shared_ptr<string> view_ = nullptr;
    std::shared_ptr<string> weexFullUrl_ = nullptr;
    std::shared_ptr<string> weexShortUrl_ = nullptr;
    std::shared_ptr<int32_t> writeLimit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
