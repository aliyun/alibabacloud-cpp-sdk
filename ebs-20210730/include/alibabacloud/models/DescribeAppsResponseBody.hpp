// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserCode, userCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AppInfos, appInfos_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserCode, userCode_);
    };
    DescribeAppsResponseBody() = default ;
    DescribeAppsResponseBody(const DescribeAppsResponseBody &) = default ;
    DescribeAppsResponseBody(DescribeAppsResponseBody &&) = default ;
    DescribeAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAppsResponseBody() = default ;
    DescribeAppsResponseBody& operator=(const DescribeAppsResponseBody &) = default ;
    DescribeAppsResponseBody& operator=(DescribeAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppTags, appTags_);
        DARABONBA_PTR_TO_JSON(Default, default_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EventBridgeSendEnabled, eventBridgeSendEnabled_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(MonitorSendEnabled, monitorSendEnabled_);
        DARABONBA_PTR_TO_JSON(ReportSendEnabled, reportSendEnabled_);
        DARABONBA_PTR_TO_JSON(SlsSendEnabled, slsSendEnabled_);
        DARABONBA_PTR_TO_JSON(SubscribePeriod, subscribePeriod_);
        DARABONBA_PTR_TO_JSON(SubscribeStatus, subscribeStatus_);
      };
      friend void from_json(const Darabonba::Json& j, AppInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppTags, appTags_);
        DARABONBA_PTR_FROM_JSON(Default, default_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EventBridgeSendEnabled, eventBridgeSendEnabled_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(MonitorSendEnabled, monitorSendEnabled_);
        DARABONBA_PTR_FROM_JSON(ReportSendEnabled, reportSendEnabled_);
        DARABONBA_PTR_FROM_JSON(SlsSendEnabled, slsSendEnabled_);
        DARABONBA_PTR_FROM_JSON(SubscribePeriod, subscribePeriod_);
        DARABONBA_PTR_FROM_JSON(SubscribeStatus, subscribeStatus_);
      };
      AppInfos() = default ;
      AppInfos(const AppInfos &) = default ;
      AppInfos(AppInfos &&) = default ;
      AppInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppInfos() = default ;
      AppInfos& operator=(const AppInfos &) = default ;
      AppInfos& operator=(AppInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppTags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, AppTags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        AppTags() = default ;
        AppTags(const AppTags &) = default ;
        AppTags(AppTags &&) = default ;
        AppTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppTags() = default ;
        AppTags& operator=(const AppTags &) = default ;
        AppTags& operator=(AppTags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline AppTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline AppTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->appTags_ == nullptr && this->default_ == nullptr && this->description_ == nullptr && this->eventBridgeSendEnabled_ == nullptr
        && this->modifyTime_ == nullptr && this->monitorSendEnabled_ == nullptr && this->reportSendEnabled_ == nullptr && this->slsSendEnabled_ == nullptr && this->subscribePeriod_ == nullptr
        && this->subscribeStatus_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline AppInfos& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline AppInfos& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appTags Field Functions 
      bool hasAppTags() const { return this->appTags_ != nullptr;};
      void deleteAppTags() { this->appTags_ = nullptr;};
      inline const vector<AppInfos::AppTags> & getAppTags() const { DARABONBA_PTR_GET_CONST(appTags_, vector<AppInfos::AppTags>) };
      inline vector<AppInfos::AppTags> getAppTags() { DARABONBA_PTR_GET(appTags_, vector<AppInfos::AppTags>) };
      inline AppInfos& setAppTags(const vector<AppInfos::AppTags> & appTags) { DARABONBA_PTR_SET_VALUE(appTags_, appTags) };
      inline AppInfos& setAppTags(vector<AppInfos::AppTags> && appTags) { DARABONBA_PTR_SET_RVALUE(appTags_, appTags) };


      // default Field Functions 
      bool hasDefault() const { return this->default_ != nullptr;};
      void deleteDefault() { this->default_ = nullptr;};
      inline bool getDefault() const { DARABONBA_PTR_GET_DEFAULT(default_, false) };
      inline AppInfos& setDefault(bool _default) { DARABONBA_PTR_SET_VALUE(default_, _default) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline AppInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // eventBridgeSendEnabled Field Functions 
      bool hasEventBridgeSendEnabled() const { return this->eventBridgeSendEnabled_ != nullptr;};
      void deleteEventBridgeSendEnabled() { this->eventBridgeSendEnabled_ = nullptr;};
      inline bool getEventBridgeSendEnabled() const { DARABONBA_PTR_GET_DEFAULT(eventBridgeSendEnabled_, false) };
      inline AppInfos& setEventBridgeSendEnabled(bool eventBridgeSendEnabled) { DARABONBA_PTR_SET_VALUE(eventBridgeSendEnabled_, eventBridgeSendEnabled) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline AppInfos& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // monitorSendEnabled Field Functions 
      bool hasMonitorSendEnabled() const { return this->monitorSendEnabled_ != nullptr;};
      void deleteMonitorSendEnabled() { this->monitorSendEnabled_ = nullptr;};
      inline bool getMonitorSendEnabled() const { DARABONBA_PTR_GET_DEFAULT(monitorSendEnabled_, false) };
      inline AppInfos& setMonitorSendEnabled(bool monitorSendEnabled) { DARABONBA_PTR_SET_VALUE(monitorSendEnabled_, monitorSendEnabled) };


      // reportSendEnabled Field Functions 
      bool hasReportSendEnabled() const { return this->reportSendEnabled_ != nullptr;};
      void deleteReportSendEnabled() { this->reportSendEnabled_ = nullptr;};
      inline bool getReportSendEnabled() const { DARABONBA_PTR_GET_DEFAULT(reportSendEnabled_, false) };
      inline AppInfos& setReportSendEnabled(bool reportSendEnabled) { DARABONBA_PTR_SET_VALUE(reportSendEnabled_, reportSendEnabled) };


      // slsSendEnabled Field Functions 
      bool hasSlsSendEnabled() const { return this->slsSendEnabled_ != nullptr;};
      void deleteSlsSendEnabled() { this->slsSendEnabled_ = nullptr;};
      inline bool getSlsSendEnabled() const { DARABONBA_PTR_GET_DEFAULT(slsSendEnabled_, false) };
      inline AppInfos& setSlsSendEnabled(bool slsSendEnabled) { DARABONBA_PTR_SET_VALUE(slsSendEnabled_, slsSendEnabled) };


      // subscribePeriod Field Functions 
      bool hasSubscribePeriod() const { return this->subscribePeriod_ != nullptr;};
      void deleteSubscribePeriod() { this->subscribePeriod_ = nullptr;};
      inline string getSubscribePeriod() const { DARABONBA_PTR_GET_DEFAULT(subscribePeriod_, "") };
      inline AppInfos& setSubscribePeriod(string subscribePeriod) { DARABONBA_PTR_SET_VALUE(subscribePeriod_, subscribePeriod) };


      // subscribeStatus Field Functions 
      bool hasSubscribeStatus() const { return this->subscribeStatus_ != nullptr;};
      void deleteSubscribeStatus() { this->subscribeStatus_ = nullptr;};
      inline string getSubscribeStatus() const { DARABONBA_PTR_GET_DEFAULT(subscribeStatus_, "") };
      inline AppInfos& setSubscribeStatus(string subscribeStatus) { DARABONBA_PTR_SET_VALUE(subscribeStatus_, subscribeStatus) };


    protected:
      shared_ptr<string> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<vector<AppInfos::AppTags>> appTags_ {};
      shared_ptr<bool> default_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> eventBridgeSendEnabled_ {};
      shared_ptr<int64_t> modifyTime_ {};
      shared_ptr<bool> monitorSendEnabled_ {};
      shared_ptr<bool> reportSendEnabled_ {};
      shared_ptr<bool> slsSendEnabled_ {};
      shared_ptr<string> subscribePeriod_ {};
      shared_ptr<string> subscribeStatus_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->appInfos_ == nullptr && this->code_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->userCode_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeAppsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // appInfos Field Functions 
    bool hasAppInfos() const { return this->appInfos_ != nullptr;};
    void deleteAppInfos() { this->appInfos_ = nullptr;};
    inline const vector<DescribeAppsResponseBody::AppInfos> & getAppInfos() const { DARABONBA_PTR_GET_CONST(appInfos_, vector<DescribeAppsResponseBody::AppInfos>) };
    inline vector<DescribeAppsResponseBody::AppInfos> getAppInfos() { DARABONBA_PTR_GET(appInfos_, vector<DescribeAppsResponseBody::AppInfos>) };
    inline DescribeAppsResponseBody& setAppInfos(const vector<DescribeAppsResponseBody::AppInfos> & appInfos) { DARABONBA_PTR_SET_VALUE(appInfos_, appInfos) };
    inline DescribeAppsResponseBody& setAppInfos(vector<DescribeAppsResponseBody::AppInfos> && appInfos) { DARABONBA_PTR_SET_RVALUE(appInfos_, appInfos) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAppsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline DescribeAppsResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline DescribeAppsResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeAppsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userCode Field Functions 
    bool hasUserCode() const { return this->userCode_ != nullptr;};
    void deleteUserCode() { this->userCode_ = nullptr;};
    inline string getUserCode() const { DARABONBA_PTR_GET_DEFAULT(userCode_, "") };
    inline DescribeAppsResponseBody& setUserCode(string userCode) { DARABONBA_PTR_SET_VALUE(userCode_, userCode) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<vector<DescribeAppsResponseBody::AppInfos>> appInfos_ {};
    shared_ptr<string> code_ {};
    shared_ptr<string> dynamicCode_ {};
    shared_ptr<string> dynamicMessage_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> userCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
