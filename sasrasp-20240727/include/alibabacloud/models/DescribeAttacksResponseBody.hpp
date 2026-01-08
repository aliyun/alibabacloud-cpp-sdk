// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasRasp20240727
{
namespace Models
{
  class DescribeAttacksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttacksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Attacks, attacks_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttacksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Attacks, attacks_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAttacksResponseBody() = default ;
    DescribeAttacksResponseBody(const DescribeAttacksResponseBody &) = default ;
    DescribeAttacksResponseBody(DescribeAttacksResponseBody &&) = default ;
    DescribeAttacksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttacksResponseBody() = default ;
    DescribeAttacksResponseBody& operator=(const DescribeAttacksResponseBody &) = default ;
    DescribeAttacksResponseBody& operator=(DescribeAttacksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Attacks : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attacks& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Attacks& obj) { 
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
      Attacks() = default ;
      Attacks(const Attacks &) = default ;
      Attacks(Attacks &&) = default ;
      Attacks(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attacks() = default ;
      Attacks& operator=(const Attacks &) = default ;
      Attacks& operator=(Attacks &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InputParamItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InputParamItemList& obj) { 
          DARABONBA_PTR_TO_JSON(ProcessedKey, processedKey_);
          DARABONBA_PTR_TO_JSON(RawKey, rawKey_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, InputParamItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(ProcessedKey, processedKey_);
          DARABONBA_PTR_FROM_JSON(RawKey, rawKey_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        InputParamItemList() = default ;
        InputParamItemList(const InputParamItemList &) = default ;
        InputParamItemList(InputParamItemList &&) = default ;
        InputParamItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InputParamItemList() = default ;
        InputParamItemList& operator=(const InputParamItemList &) = default ;
        InputParamItemList& operator=(InputParamItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->processedKey_ == nullptr
        && this->rawKey_ == nullptr && this->value_ == nullptr; };
        // processedKey Field Functions 
        bool hasProcessedKey() const { return this->processedKey_ != nullptr;};
        void deleteProcessedKey() { this->processedKey_ = nullptr;};
        inline string getProcessedKey() const { DARABONBA_PTR_GET_DEFAULT(processedKey_, "") };
        inline InputParamItemList& setProcessedKey(string processedKey) { DARABONBA_PTR_SET_VALUE(processedKey_, processedKey) };


        // rawKey Field Functions 
        bool hasRawKey() const { return this->rawKey_ != nullptr;};
        void deleteRawKey() { this->rawKey_ = nullptr;};
        inline string getRawKey() const { DARABONBA_PTR_GET_DEFAULT(rawKey_, "") };
        inline InputParamItemList& setRawKey(string rawKey) { DARABONBA_PTR_SET_VALUE(rawKey_, rawKey) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline InputParamItemList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> processedKey_ {};
        shared_ptr<string> rawKey_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->appDir_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->avd_ == nullptr && this->cmdline_ == nullptr && this->confidence_ == nullptr
        && this->content_ == nullptr && this->contentLength_ == nullptr && this->count_ == nullptr && this->data_ == nullptr && this->handleStatus_ == nullptr
        && this->handleTimestamp_ == nullptr && this->headers_ == nullptr && this->hostId_ == nullptr && this->hostname_ == nullptr && this->inputParamItemList_ == nullptr
        && this->installType_ == nullptr && this->ip_ == nullptr && this->jdk_ == nullptr && this->language_ == nullptr && this->languageVersion_ == nullptr
        && this->maxTimestamp_ == nullptr && this->message_ == nullptr && this->method_ == nullptr && this->middlewareInstanceId_ == nullptr && this->minTimestamp_ == nullptr
        && this->os_ == nullptr && this->osArch_ == nullptr && this->osVersion_ == nullptr && this->param_ == nullptr && this->payload_ == nullptr
        && this->payloadLength_ == nullptr && this->pid_ == nullptr && this->raspVersion_ == nullptr && this->region_ == nullptr && this->remote_ == nullptr
        && this->result_ == nullptr && this->ruleResult_ == nullptr && this->severity_ == nullptr && this->stacktrace_ == nullptr && this->time_ == nullptr
        && this->timestamp_ == nullptr && this->type_ == nullptr && this->unionId_ == nullptr && this->url_ == nullptr; };
      // appDir Field Functions 
      bool hasAppDir() const { return this->appDir_ != nullptr;};
      void deleteAppDir() { this->appDir_ = nullptr;};
      inline string getAppDir() const { DARABONBA_PTR_GET_DEFAULT(appDir_, "") };
      inline Attacks& setAppDir(string appDir) { DARABONBA_PTR_SET_VALUE(appDir_, appDir) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Attacks& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Attacks& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // avd Field Functions 
      bool hasAvd() const { return this->avd_ != nullptr;};
      void deleteAvd() { this->avd_ = nullptr;};
      inline string getAvd() const { DARABONBA_PTR_GET_DEFAULT(avd_, "") };
      inline Attacks& setAvd(string avd) { DARABONBA_PTR_SET_VALUE(avd_, avd) };


      // cmdline Field Functions 
      bool hasCmdline() const { return this->cmdline_ != nullptr;};
      void deleteCmdline() { this->cmdline_ = nullptr;};
      inline string getCmdline() const { DARABONBA_PTR_GET_DEFAULT(cmdline_, "") };
      inline Attacks& setCmdline(string cmdline) { DARABONBA_PTR_SET_VALUE(cmdline_, cmdline) };


      // confidence Field Functions 
      bool hasConfidence() const { return this->confidence_ != nullptr;};
      void deleteConfidence() { this->confidence_ = nullptr;};
      inline string getConfidence() const { DARABONBA_PTR_GET_DEFAULT(confidence_, "") };
      inline Attacks& setConfidence(string confidence) { DARABONBA_PTR_SET_VALUE(confidence_, confidence) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Attacks& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // contentLength Field Functions 
      bool hasContentLength() const { return this->contentLength_ != nullptr;};
      void deleteContentLength() { this->contentLength_ = nullptr;};
      inline int64_t getContentLength() const { DARABONBA_PTR_GET_DEFAULT(contentLength_, 0L) };
      inline Attacks& setContentLength(int64_t contentLength) { DARABONBA_PTR_SET_VALUE(contentLength_, contentLength) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Attacks& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Attacks& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // handleStatus Field Functions 
      bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
      void deleteHandleStatus() { this->handleStatus_ = nullptr;};
      inline int32_t getHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, 0) };
      inline Attacks& setHandleStatus(int32_t handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


      // handleTimestamp Field Functions 
      bool hasHandleTimestamp() const { return this->handleTimestamp_ != nullptr;};
      void deleteHandleTimestamp() { this->handleTimestamp_ = nullptr;};
      inline int64_t getHandleTimestamp() const { DARABONBA_PTR_GET_DEFAULT(handleTimestamp_, 0L) };
      inline Attacks& setHandleTimestamp(int64_t handleTimestamp) { DARABONBA_PTR_SET_VALUE(handleTimestamp_, handleTimestamp) };


      // headers Field Functions 
      bool hasHeaders() const { return this->headers_ != nullptr;};
      void deleteHeaders() { this->headers_ = nullptr;};
      inline string getHeaders() const { DARABONBA_PTR_GET_DEFAULT(headers_, "") };
      inline Attacks& setHeaders(string headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };


      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Attacks& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Attacks& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // inputParamItemList Field Functions 
      bool hasInputParamItemList() const { return this->inputParamItemList_ != nullptr;};
      void deleteInputParamItemList() { this->inputParamItemList_ = nullptr;};
      inline const vector<Attacks::InputParamItemList> & getInputParamItemList() const { DARABONBA_PTR_GET_CONST(inputParamItemList_, vector<Attacks::InputParamItemList>) };
      inline vector<Attacks::InputParamItemList> getInputParamItemList() { DARABONBA_PTR_GET(inputParamItemList_, vector<Attacks::InputParamItemList>) };
      inline Attacks& setInputParamItemList(const vector<Attacks::InputParamItemList> & inputParamItemList) { DARABONBA_PTR_SET_VALUE(inputParamItemList_, inputParamItemList) };
      inline Attacks& setInputParamItemList(vector<Attacks::InputParamItemList> && inputParamItemList) { DARABONBA_PTR_SET_RVALUE(inputParamItemList_, inputParamItemList) };


      // installType Field Functions 
      bool hasInstallType() const { return this->installType_ != nullptr;};
      void deleteInstallType() { this->installType_ = nullptr;};
      inline int64_t getInstallType() const { DARABONBA_PTR_GET_DEFAULT(installType_, 0L) };
      inline Attacks& setInstallType(int64_t installType) { DARABONBA_PTR_SET_VALUE(installType_, installType) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Attacks& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // jdk Field Functions 
      bool hasJdk() const { return this->jdk_ != nullptr;};
      void deleteJdk() { this->jdk_ = nullptr;};
      inline string getJdk() const { DARABONBA_PTR_GET_DEFAULT(jdk_, "") };
      inline Attacks& setJdk(string jdk) { DARABONBA_PTR_SET_VALUE(jdk_, jdk) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline Attacks& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // languageVersion Field Functions 
      bool hasLanguageVersion() const { return this->languageVersion_ != nullptr;};
      void deleteLanguageVersion() { this->languageVersion_ = nullptr;};
      inline string getLanguageVersion() const { DARABONBA_PTR_GET_DEFAULT(languageVersion_, "") };
      inline Attacks& setLanguageVersion(string languageVersion) { DARABONBA_PTR_SET_VALUE(languageVersion_, languageVersion) };


      // maxTimestamp Field Functions 
      bool hasMaxTimestamp() const { return this->maxTimestamp_ != nullptr;};
      void deleteMaxTimestamp() { this->maxTimestamp_ = nullptr;};
      inline int64_t getMaxTimestamp() const { DARABONBA_PTR_GET_DEFAULT(maxTimestamp_, 0L) };
      inline Attacks& setMaxTimestamp(int64_t maxTimestamp) { DARABONBA_PTR_SET_VALUE(maxTimestamp_, maxTimestamp) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Attacks& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Attacks& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // middlewareInstanceId Field Functions 
      bool hasMiddlewareInstanceId() const { return this->middlewareInstanceId_ != nullptr;};
      void deleteMiddlewareInstanceId() { this->middlewareInstanceId_ = nullptr;};
      inline string getMiddlewareInstanceId() const { DARABONBA_PTR_GET_DEFAULT(middlewareInstanceId_, "") };
      inline Attacks& setMiddlewareInstanceId(string middlewareInstanceId) { DARABONBA_PTR_SET_VALUE(middlewareInstanceId_, middlewareInstanceId) };


      // minTimestamp Field Functions 
      bool hasMinTimestamp() const { return this->minTimestamp_ != nullptr;};
      void deleteMinTimestamp() { this->minTimestamp_ = nullptr;};
      inline int64_t getMinTimestamp() const { DARABONBA_PTR_GET_DEFAULT(minTimestamp_, 0L) };
      inline Attacks& setMinTimestamp(int64_t minTimestamp) { DARABONBA_PTR_SET_VALUE(minTimestamp_, minTimestamp) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Attacks& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osArch Field Functions 
      bool hasOsArch() const { return this->osArch_ != nullptr;};
      void deleteOsArch() { this->osArch_ = nullptr;};
      inline string getOsArch() const { DARABONBA_PTR_GET_DEFAULT(osArch_, "") };
      inline Attacks& setOsArch(string osArch) { DARABONBA_PTR_SET_VALUE(osArch_, osArch) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline Attacks& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline Attacks& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
      inline Attacks& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


      // payloadLength Field Functions 
      bool hasPayloadLength() const { return this->payloadLength_ != nullptr;};
      void deletePayloadLength() { this->payloadLength_ = nullptr;};
      inline int64_t getPayloadLength() const { DARABONBA_PTR_GET_DEFAULT(payloadLength_, 0L) };
      inline Attacks& setPayloadLength(int64_t payloadLength) { DARABONBA_PTR_SET_VALUE(payloadLength_, payloadLength) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline Attacks& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // raspVersion Field Functions 
      bool hasRaspVersion() const { return this->raspVersion_ != nullptr;};
      void deleteRaspVersion() { this->raspVersion_ = nullptr;};
      inline string getRaspVersion() const { DARABONBA_PTR_GET_DEFAULT(raspVersion_, "") };
      inline Attacks& setRaspVersion(string raspVersion) { DARABONBA_PTR_SET_VALUE(raspVersion_, raspVersion) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Attacks& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // remote Field Functions 
      bool hasRemote() const { return this->remote_ != nullptr;};
      void deleteRemote() { this->remote_ = nullptr;};
      inline string getRemote() const { DARABONBA_PTR_GET_DEFAULT(remote_, "") };
      inline Attacks& setRemote(string remote) { DARABONBA_PTR_SET_VALUE(remote_, remote) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Attacks& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // ruleResult Field Functions 
      bool hasRuleResult() const { return this->ruleResult_ != nullptr;};
      void deleteRuleResult() { this->ruleResult_ = nullptr;};
      inline string getRuleResult() const { DARABONBA_PTR_GET_DEFAULT(ruleResult_, "") };
      inline Attacks& setRuleResult(string ruleResult) { DARABONBA_PTR_SET_VALUE(ruleResult_, ruleResult) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Attacks& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // stacktrace Field Functions 
      bool hasStacktrace() const { return this->stacktrace_ != nullptr;};
      void deleteStacktrace() { this->stacktrace_ = nullptr;};
      inline const vector<string> & getStacktrace() const { DARABONBA_PTR_GET_CONST(stacktrace_, vector<string>) };
      inline vector<string> getStacktrace() { DARABONBA_PTR_GET(stacktrace_, vector<string>) };
      inline Attacks& setStacktrace(const vector<string> & stacktrace) { DARABONBA_PTR_SET_VALUE(stacktrace_, stacktrace) };
      inline Attacks& setStacktrace(vector<string> && stacktrace) { DARABONBA_PTR_SET_RVALUE(stacktrace_, stacktrace) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Attacks& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Attacks& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Attacks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unionId Field Functions 
      bool hasUnionId() const { return this->unionId_ != nullptr;};
      void deleteUnionId() { this->unionId_ = nullptr;};
      inline string getUnionId() const { DARABONBA_PTR_GET_DEFAULT(unionId_, "") };
      inline Attacks& setUnionId(string unionId) { DARABONBA_PTR_SET_VALUE(unionId_, unionId) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Attacks& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> appDir_ {};
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<string> avd_ {};
      shared_ptr<string> cmdline_ {};
      shared_ptr<string> confidence_ {};
      shared_ptr<string> content_ {};
      shared_ptr<int64_t> contentLength_ {};
      shared_ptr<int64_t> count_ {};
      shared_ptr<string> data_ {};
      shared_ptr<int32_t> handleStatus_ {};
      shared_ptr<int64_t> handleTimestamp_ {};
      shared_ptr<string> headers_ {};
      shared_ptr<string> hostId_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<vector<Attacks::InputParamItemList>> inputParamItemList_ {};
      shared_ptr<int64_t> installType_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> jdk_ {};
      shared_ptr<string> language_ {};
      shared_ptr<string> languageVersion_ {};
      shared_ptr<int64_t> maxTimestamp_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> method_ {};
      shared_ptr<string> middlewareInstanceId_ {};
      shared_ptr<int64_t> minTimestamp_ {};
      shared_ptr<string> os_ {};
      shared_ptr<string> osArch_ {};
      shared_ptr<string> osVersion_ {};
      shared_ptr<string> param_ {};
      shared_ptr<string> payload_ {};
      shared_ptr<int64_t> payloadLength_ {};
      shared_ptr<string> pid_ {};
      shared_ptr<string> raspVersion_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> remote_ {};
      shared_ptr<string> result_ {};
      shared_ptr<string> ruleResult_ {};
      shared_ptr<string> severity_ {};
      shared_ptr<vector<string>> stacktrace_ {};
      shared_ptr<string> time_ {};
      shared_ptr<int64_t> timestamp_ {};
      shared_ptr<string> type_ {};
      // unionId。
      shared_ptr<string> unionId_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->attacks_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // attacks Field Functions 
    bool hasAttacks() const { return this->attacks_ != nullptr;};
    void deleteAttacks() { this->attacks_ = nullptr;};
    inline const vector<DescribeAttacksResponseBody::Attacks> & getAttacks() const { DARABONBA_PTR_GET_CONST(attacks_, vector<DescribeAttacksResponseBody::Attacks>) };
    inline vector<DescribeAttacksResponseBody::Attacks> getAttacks() { DARABONBA_PTR_GET(attacks_, vector<DescribeAttacksResponseBody::Attacks>) };
    inline DescribeAttacksResponseBody& setAttacks(const vector<DescribeAttacksResponseBody::Attacks> & attacks) { DARABONBA_PTR_SET_VALUE(attacks_, attacks) };
    inline DescribeAttacksResponseBody& setAttacks(vector<DescribeAttacksResponseBody::Attacks> && attacks) { DARABONBA_PTR_SET_RVALUE(attacks_, attacks) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttacksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeAttacksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeAttacksResponseBody::Attacks>> attacks_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasRasp20240727
#endif
