// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetAppGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAppGroupResponseBody() = default ;
    GetAppGroupResponseBody(const GetAppGroupResponseBody &) = default ;
    GetAppGroupResponseBody(GetAppGroupResponseBody &&) = default ;
    GetAppGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppGroupResponseBody() = default ;
    GetAppGroupResponseBody& operator=(const GetAppGroupResponseBody &) = default ;
    GetAppGroupResponseBody& operator=(GetAppGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(CurJobs, curJobs_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EnableLog, enableLog_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(MaxJobs, maxJobs_);
        DARABONBA_PTR_TO_JSON(MonitorConfigJson, monitorConfigJson_);
        DARABONBA_PTR_TO_JSON(MonitorContactsJson, monitorContactsJson_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(NotificationPolicyName, notificationPolicyName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(CurJobs, curJobs_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EnableLog, enableLog_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(MaxJobs, maxJobs_);
        DARABONBA_PTR_FROM_JSON(MonitorConfigJson, monitorConfigJson_);
        DARABONBA_PTR_FROM_JSON(MonitorContactsJson, monitorContactsJson_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(NotificationPolicyName, notificationPolicyName_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->appName_ == nullptr && this->appVersion_ == nullptr && this->curJobs_ == nullptr && this->description_ == nullptr && this->enableLog_ == nullptr
        && this->groupId_ == nullptr && this->maxJobs_ == nullptr && this->monitorConfigJson_ == nullptr && this->monitorContactsJson_ == nullptr && this->namespace_ == nullptr
        && this->notificationPolicyName_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline Data& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Data& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // curJobs Field Functions 
      bool hasCurJobs() const { return this->curJobs_ != nullptr;};
      void deleteCurJobs() { this->curJobs_ = nullptr;};
      inline int32_t getCurJobs() const { DARABONBA_PTR_GET_DEFAULT(curJobs_, 0) };
      inline Data& setCurJobs(int32_t curJobs) { DARABONBA_PTR_SET_VALUE(curJobs_, curJobs) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enableLog Field Functions 
      bool hasEnableLog() const { return this->enableLog_ != nullptr;};
      void deleteEnableLog() { this->enableLog_ = nullptr;};
      inline bool getEnableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
      inline Data& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // maxJobs Field Functions 
      bool hasMaxJobs() const { return this->maxJobs_ != nullptr;};
      void deleteMaxJobs() { this->maxJobs_ = nullptr;};
      inline int32_t getMaxJobs() const { DARABONBA_PTR_GET_DEFAULT(maxJobs_, 0) };
      inline Data& setMaxJobs(int32_t maxJobs) { DARABONBA_PTR_SET_VALUE(maxJobs_, maxJobs) };


      // monitorConfigJson Field Functions 
      bool hasMonitorConfigJson() const { return this->monitorConfigJson_ != nullptr;};
      void deleteMonitorConfigJson() { this->monitorConfigJson_ = nullptr;};
      inline string getMonitorConfigJson() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigJson_, "") };
      inline Data& setMonitorConfigJson(string monitorConfigJson) { DARABONBA_PTR_SET_VALUE(monitorConfigJson_, monitorConfigJson) };


      // monitorContactsJson Field Functions 
      bool hasMonitorContactsJson() const { return this->monitorContactsJson_ != nullptr;};
      void deleteMonitorContactsJson() { this->monitorContactsJson_ = nullptr;};
      inline string getMonitorContactsJson() const { DARABONBA_PTR_GET_DEFAULT(monitorContactsJson_, "") };
      inline Data& setMonitorContactsJson(string monitorContactsJson) { DARABONBA_PTR_SET_VALUE(monitorContactsJson_, monitorContactsJson) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // notificationPolicyName Field Functions 
      bool hasNotificationPolicyName() const { return this->notificationPolicyName_ != nullptr;};
      void deleteNotificationPolicyName() { this->notificationPolicyName_ = nullptr;};
      inline string getNotificationPolicyName() const { DARABONBA_PTR_GET_DEFAULT(notificationPolicyName_, "") };
      inline Data& setNotificationPolicyName(string notificationPolicyName) { DARABONBA_PTR_SET_VALUE(notificationPolicyName_, notificationPolicyName) };


    protected:
      // The AppKey of the application.
      shared_ptr<string> appKey_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The application version. 1: Basic version, 2: Professional version.
      shared_ptr<string> appVersion_ {};
      // The number of jobs that are configured for the application group.
      shared_ptr<int32_t> curJobs_ {};
      // The description of the application.
      shared_ptr<string> description_ {};
      shared_ptr<bool> enableLog_ {};
      // The ID of the application.
      shared_ptr<string> groupId_ {};
      // The maximum number of jobs that can be configured for the application group.
      shared_ptr<int32_t> maxJobs_ {};
      // The alert notification configurations.
      // 
      // >  For more information about this parameter, see the following **additional information about request parameters**.
      shared_ptr<string> monitorConfigJson_ {};
      // The alert contact configurations.
      // 
      // >  For more information about this parameter, see the following **additional information about request parameters**.
      shared_ptr<string> monitorContactsJson_ {};
      // The ID of the namespace.
      shared_ptr<string> namespace_ {};
      shared_ptr<string> notificationPolicyName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetAppGroupResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAppGroupResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAppGroupResponseBody::Data) };
    inline GetAppGroupResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAppGroupResponseBody::Data) };
    inline GetAppGroupResponseBody& setData(const GetAppGroupResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAppGroupResponseBody& setData(GetAppGroupResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAppGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAppGroupResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    // The information about the application group.
    shared_ptr<GetAppGroupResponseBody::Data> data_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
