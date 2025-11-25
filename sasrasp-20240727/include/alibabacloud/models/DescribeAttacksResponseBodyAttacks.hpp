// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODYATTACKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODYATTACKS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAttacksResponseBodyAttacksInputParamItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttacksResponseBodyAttacks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttacksResponseBodyAttacks& obj) { 
      DARABONBA_PTR_TO_JSON(AppDir, appDir_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Avd, avd_);
      DARABONBA_PTR_TO_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_TO_JSON(Confidence, confidence_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentLength, contentLength_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_TO_JSON(HandleTimestamp, handleTimestamp_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(InputParamItemList, inputParamItemList_);
      DARABONBA_PTR_TO_JSON(InstallType, installType_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Jdk, jdk_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(LanguageVersion, languageVersion_);
      DARABONBA_PTR_TO_JSON(MaxTimestamp, maxTimestamp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(MiddlewareInstanceId, middlewareInstanceId_);
      DARABONBA_PTR_TO_JSON(MinTimestamp, minTimestamp_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(OsArch, osArch_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(PayloadLength, payloadLength_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RaspVersion, raspVersion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Remote, remote_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Stacktrace, stacktrace_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UnionId, unionId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttacksResponseBodyAttacks& obj) { 
      DARABONBA_PTR_FROM_JSON(AppDir, appDir_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Avd, avd_);
      DARABONBA_PTR_FROM_JSON(Cmdline, cmdline_);
      DARABONBA_PTR_FROM_JSON(Confidence, confidence_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentLength, contentLength_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HandleStatus, handleStatus_);
      DARABONBA_PTR_FROM_JSON(HandleTimestamp, handleTimestamp_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(InputParamItemList, inputParamItemList_);
      DARABONBA_PTR_FROM_JSON(InstallType, installType_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Jdk, jdk_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(LanguageVersion, languageVersion_);
      DARABONBA_PTR_FROM_JSON(MaxTimestamp, maxTimestamp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(MiddlewareInstanceId, middlewareInstanceId_);
      DARABONBA_PTR_FROM_JSON(MinTimestamp, minTimestamp_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(OsArch, osArch_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(PayloadLength, payloadLength_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RaspVersion, raspVersion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Remote, remote_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RuleResult, ruleResult_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Stacktrace, stacktrace_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UnionId, unionId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeAttacksResponseBodyAttacks() = default ;
    DescribeAttacksResponseBodyAttacks(const DescribeAttacksResponseBodyAttacks &) = default ;
    DescribeAttacksResponseBodyAttacks(DescribeAttacksResponseBodyAttacks &&) = default ;
    DescribeAttacksResponseBodyAttacks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttacksResponseBodyAttacks() = default ;
    DescribeAttacksResponseBodyAttacks& operator=(const DescribeAttacksResponseBodyAttacks &) = default ;
    DescribeAttacksResponseBodyAttacks& operator=(DescribeAttacksResponseBodyAttacks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appDir_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->avd_ == nullptr && return this->cmdline_ == nullptr && return this->confidence_ == nullptr
        && return this->content_ == nullptr && return this->contentLength_ == nullptr && return this->count_ == nullptr && return this->data_ == nullptr && return this->handleStatus_ == nullptr
        && return this->handleTimestamp_ == nullptr && return this->headers_ == nullptr && return this->hostId_ == nullptr && return this->hostname_ == nullptr && return this->inputParamItemList_ == nullptr
        && return this->installType_ == nullptr && return this->ip_ == nullptr && return this->jdk_ == nullptr && return this->language_ == nullptr && return this->languageVersion_ == nullptr
        && return this->maxTimestamp_ == nullptr && return this->message_ == nullptr && return this->method_ == nullptr && return this->middlewareInstanceId_ == nullptr && return this->minTimestamp_ == nullptr
        && return this->os_ == nullptr && return this->osArch_ == nullptr && return this->osVersion_ == nullptr && return this->param_ == nullptr && return this->payload_ == nullptr
        && return this->payloadLength_ == nullptr && return this->pid_ == nullptr && return this->raspVersion_ == nullptr && return this->region_ == nullptr && return this->remote_ == nullptr
        && return this->result_ == nullptr && return this->ruleResult_ == nullptr && return this->severity_ == nullptr && return this->stacktrace_ == nullptr && return this->time_ == nullptr
        && return this->timestamp_ == nullptr && return this->type_ == nullptr && return this->unionId_ == nullptr && return this->url_ == nullptr; };
    // appDir Field Functions 
    bool hasAppDir() const { return this->appDir_ != nullptr;};
    void deleteAppDir() { this->appDir_ = nullptr;};
    inline string appDir() const { DARABONBA_PTR_GET_DEFAULT(appDir_, "") };
    inline DescribeAttacksResponseBodyAttacks& setAppDir(string appDir) { DARABONBA_PTR_SET_VALUE(appDir_, appDir) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeAttacksResponseBodyAttacks& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeAttacksResponseBodyAttacks& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // avd Field Functions 
    bool hasAvd() const { return this->avd_ != nullptr;};
    void deleteAvd() { this->avd_ = nullptr;};
    inline string avd() const { DARABONBA_PTR_GET_DEFAULT(avd_, "") };
    inline DescribeAttacksResponseBodyAttacks& setAvd(string avd) { DARABONBA_PTR_SET_VALUE(avd_, avd) };


    // cmdline Field Functions 
    bool hasCmdline() const { return this->cmdline_ != nullptr;};
    void deleteCmdline() { this->cmdline_ = nullptr;};
    inline string cmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
    inline DescribeAttacksResponseBodyAttacks& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


    // confidence Field Functions 
    bool hasConfidence() const { return this->confidence_ != nullptr;};
    void deleteConfidence() { this->confidence_ = nullptr;};
    inline string confidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, "") };
    inline DescribeAttacksResponseBodyAttacks& setConfidence(string confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeAttacksResponseBodyAttacks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentLength Field Functions 
    bool hasContentLength() const { return this->contentLength_ != nullptr;};
    void deleteContentLength() { this->contentLength_ = nullptr;};
    inline int64_t contentLength() const { DARABONBA_PTR_GET_DEFAULT(contentLength_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setContentLength(int64_t contentLength) { DARABONBA_PTR_SET_VALUE(contentLength_, contentLength) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DescribeAttacksResponseBodyAttacks& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // handleStatus Field Functions 
    bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
    void deleteHandleStatus() { this->handleStatus_ = nullptr;};
    inline int32_t handleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, 0) };
    inline DescribeAttacksResponseBodyAttacks& setHandleStatus(int32_t handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


    // handleTimestamp Field Functions 
    bool hasHandleTimestamp() const { return this->handleTimestamp_ != nullptr;};
    void deleteHandleTimestamp() { this->handleTimestamp_ = nullptr;};
    inline int64_t handleTimestamp() const { DARABONBA_PTR_GET_DEFAULT(handleTimestamp_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setHandleTimestamp(int64_t handleTimestamp) { DARABONBA_PTR_SET_VALUE(handleTimestamp_, handleTimestamp) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline string headers() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
    inline DescribeAttacksResponseBodyAttacks& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline DescribeAttacksResponseBodyAttacks& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline DescribeAttacksResponseBodyAttacks& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // inputParamItemList Field Functions 
    bool hasInputParamItemList() const { return this->inputParamItemList_ != nullptr;};
    void deleteInputParamItemList() { this->inputParamItemList_ = nullptr;};
    inline const vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList> & inputParamItemList() const { DARABONBA_PTR_GET_CONST(inputParamItemList_, vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList>) };
    inline vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList> inputParamItemList() { DARABONBA_PTR_GET(inputParamItemList_, vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList>) };
    inline DescribeAttacksResponseBodyAttacks& setInputParamItemList(const vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList> & inputParamItemList) { DARABONBA_PTR_SET_VALUE(inputParamItemList_, inputParamItemList) };
    inline DescribeAttacksResponseBodyAttacks& setInputParamItemList(vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList> && inputParamItemList) { DARABONBA_PTR_SET_RVALUE(inputParamItemList_, inputParamItemList) };


    // installType Field Functions 
    bool hasInstallType() const { return this->installType_ != nullptr;};
    void deleteInstallType() { this->installType_ = nullptr;};
    inline int64_t installType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setInstallType(int64_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeAttacksResponseBodyAttacks& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // jdk Field Functions 
    bool hasJdk() const { return this->jdk_ != nullptr;};
    void deleteJdk() { this->jdk_ = nullptr;};
    inline string jdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
    inline DescribeAttacksResponseBodyAttacks& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAttacksResponseBodyAttacks& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // languageVersion Field Functions 
    bool hasLanguageVersion() const { return this->languageVersion_ != nullptr;};
    void deleteLanguageVersion() { this->languageVersion_ = nullptr;};
    inline string languageVersion() const { DARABONBA_PTR_GET_DEFAULT(languageVersion_, "") };
    inline DescribeAttacksResponseBodyAttacks& setLanguageVersion(string languageVersion) { DARABONBA_PTR_SET_VALUE(languageVersion_, languageVersion) };


    // maxTimestamp Field Functions 
    bool hasMaxTimestamp() const { return this->maxTimestamp_ != nullptr;};
    void deleteMaxTimestamp() { this->maxTimestamp_ = nullptr;};
    inline int64_t maxTimestamp() const { DARABONBA_PTR_GET_DEFAULT(maxTimestamp_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setMaxTimestamp(int64_t maxTimestamp) { DARABONBA_PTR_SET_VALUE(maxTimestamp_, maxTimestamp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAttacksResponseBodyAttacks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeAttacksResponseBodyAttacks& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // middlewareInstanceId Field Functions 
    bool hasMiddlewareInstanceId() const { return this->middlewareInstanceId_ != nullptr;};
    void deleteMiddlewareInstanceId() { this->middlewareInstanceId_ = nullptr;};
    inline string middlewareInstanceId() const { DARABONBA_PTR_GET_DEFAULT(middlewareInstanceId_, "") };
    inline DescribeAttacksResponseBodyAttacks& setMiddlewareInstanceId(string middlewareInstanceId) { DARABONBA_PTR_SET_VALUE(middlewareInstanceId_, middlewareInstanceId) };


    // minTimestamp Field Functions 
    bool hasMinTimestamp() const { return this->minTimestamp_ != nullptr;};
    void deleteMinTimestamp() { this->minTimestamp_ = nullptr;};
    inline int64_t minTimestamp() const { DARABONBA_PTR_GET_DEFAULT(minTimestamp_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setMinTimestamp(int64_t minTimestamp) { DARABONBA_PTR_SET_VALUE(minTimestamp_, minTimestamp) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeAttacksResponseBodyAttacks& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // osArch Field Functions 
    bool hasOsArch() const { return this->osArch_ != nullptr;};
    void deleteOsArch() { this->osArch_ = nullptr;};
    inline string osArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
    inline DescribeAttacksResponseBodyAttacks& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline DescribeAttacksResponseBodyAttacks& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string param() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline DescribeAttacksResponseBodyAttacks& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string payload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline DescribeAttacksResponseBodyAttacks& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // payloadLength Field Functions 
    bool hasPayloadLength() const { return this->payloadLength_ != nullptr;};
    void deletePayloadLength() { this->payloadLength_ = nullptr;};
    inline int64_t payloadLength() const { DARABONBA_PTR_GET_DEFAULT(payloadLength_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setPayloadLength(int64_t payloadLength) { DARABONBA_PTR_SET_VALUE(payloadLength_, payloadLength) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline DescribeAttacksResponseBodyAttacks& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // raspVersion Field Functions 
    bool hasRaspVersion() const { return this->raspVersion_ != nullptr;};
    void deleteRaspVersion() { this->raspVersion_ = nullptr;};
    inline string raspVersion() const { DARABONBA_PTR_GET_DEFAULT(raspVersion_, "") };
    inline DescribeAttacksResponseBodyAttacks& setRaspVersion(string raspVersion) { DARABONBA_PTR_SET_VALUE(raspVersion_, raspVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeAttacksResponseBodyAttacks& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // remote Field Functions 
    bool hasRemote() const { return this->remote_ != nullptr;};
    void deleteRemote() { this->remote_ = nullptr;};
    inline string remote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
    inline DescribeAttacksResponseBodyAttacks& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DescribeAttacksResponseBodyAttacks& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // ruleResult Field Functions 
    bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
    void deleteRuleResult() { this->ruleResult_ = nullptr;};
    inline string ruleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
    inline DescribeAttacksResponseBodyAttacks& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeAttacksResponseBodyAttacks& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // stacktrace Field Functions 
    bool hasStacktrace() const { return this->stacktrace_ != nullptr;};
    void deleteStacktrace() { this->stacktrace_ = nullptr;};
    inline const vector<string> & stacktrace() const { DARABONBA_PTR_GET_CONST(stacktrace_, vector<string>) };
    inline vector<string> stacktrace() { DARABONBA_PTR_GET(stacktrace_, vector<string>) };
    inline DescribeAttacksResponseBodyAttacks& setStacktrace(const vector<string> & stacktrace) { DARABONBA_PTR_SET_VALUE(stacktrace_, stacktrace) };
    inline DescribeAttacksResponseBodyAttacks& setStacktrace(vector<string> && stacktrace) { DARABONBA_PTR_SET_RVALUE(stacktrace_, stacktrace) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeAttacksResponseBodyAttacks& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeAttacksResponseBodyAttacks& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAttacksResponseBodyAttacks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // unionId Field Functions 
    bool hasUnionId() const { return this->unionId_ != nullptr;};
    void deleteUnionId() { this->unionId_ = nullptr;};
    inline string unionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
    inline DescribeAttacksResponseBodyAttacks& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeAttacksResponseBodyAttacks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> appDir_ = nullptr;
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> avd_ = nullptr;
    std::shared_ptr<string> cmdline_ = nullptr;
    std::shared_ptr<string> confidence_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<int64_t> contentLength_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> data_ = nullptr;
    std::shared_ptr<int32_t> handleStatus_ = nullptr;
    std::shared_ptr<int64_t> handleTimestamp_ = nullptr;
    std::shared_ptr<string> headers_ = nullptr;
    std::shared_ptr<string> hostId_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAttacksResponseBodyAttacksInputParamItemList>> inputParamItemList_ = nullptr;
    std::shared_ptr<int64_t> installType_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> jdk_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> languageVersion_ = nullptr;
    std::shared_ptr<int64_t> maxTimestamp_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> middlewareInstanceId_ = nullptr;
    std::shared_ptr<int64_t> minTimestamp_ = nullptr;
    std::shared_ptr<string> os_ = nullptr;
    std::shared_ptr<string> osArch_ = nullptr;
    std::shared_ptr<string> osVersion_ = nullptr;
    std::shared_ptr<string> param_ = nullptr;
    std::shared_ptr<string> payload_ = nullptr;
    std::shared_ptr<int64_t> payloadLength_ = nullptr;
    std::shared_ptr<string> pid_ = nullptr;
    std::shared_ptr<string> raspVersion_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> remote_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<string> ruleResult_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<vector<string>> stacktrace_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    // unionId。
    std::shared_ptr<string> unionId_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
