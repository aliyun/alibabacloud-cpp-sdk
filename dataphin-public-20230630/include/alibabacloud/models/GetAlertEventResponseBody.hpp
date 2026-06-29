// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAlertEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertEventInfo, alertEventInfo_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertEventInfo, alertEventInfo_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAlertEventResponseBody() = default ;
    GetAlertEventResponseBody(const GetAlertEventResponseBody &) = default ;
    GetAlertEventResponseBody(GetAlertEventResponseBody &&) = default ;
    GetAlertEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertEventResponseBody() = default ;
    GetAlertEventResponseBody& operator=(const GetAlertEventResponseBody &) = default ;
    GetAlertEventResponseBody& operator=(GetAlertEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertEventInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertEventInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AlertFrequency, alertFrequency_);
        DARABONBA_PTR_TO_JSON(AlertObject, alertObject_);
        DARABONBA_PTR_TO_JSON(AlertReason, alertReason_);
        DARABONBA_PTR_TO_JSON(AlertReceiverList, alertReceiverList_);
        DARABONBA_PTR_TO_JSON(BelongProject, belongProject_);
        DARABONBA_PTR_TO_JSON(DoNotDisturbEndTime, doNotDisturbEndTime_);
        DARABONBA_PTR_TO_JSON(FirstAlertTime, firstAlertTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(LatestAlertTime, latestAlertTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalAlertTimes, totalAlertTimes_);
        DARABONBA_PTR_TO_JSON(UrlConfig, urlConfig_);
      };
      friend void from_json(const Darabonba::Json& j, AlertEventInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertFrequency, alertFrequency_);
        DARABONBA_PTR_FROM_JSON(AlertObject, alertObject_);
        DARABONBA_PTR_FROM_JSON(AlertReason, alertReason_);
        DARABONBA_PTR_FROM_JSON(AlertReceiverList, alertReceiverList_);
        DARABONBA_PTR_FROM_JSON(BelongProject, belongProject_);
        DARABONBA_PTR_FROM_JSON(DoNotDisturbEndTime, doNotDisturbEndTime_);
        DARABONBA_PTR_FROM_JSON(FirstAlertTime, firstAlertTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(LatestAlertTime, latestAlertTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalAlertTimes, totalAlertTimes_);
        DARABONBA_PTR_FROM_JSON(UrlConfig, urlConfig_);
      };
      AlertEventInfo() = default ;
      AlertEventInfo(const AlertEventInfo &) = default ;
      AlertEventInfo(AlertEventInfo &&) = default ;
      AlertEventInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertEventInfo() = default ;
      AlertEventInfo& operator=(const AlertEventInfo &) = default ;
      AlertEventInfo& operator=(AlertEventInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UrlConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UrlConfig& obj) { 
          DARABONBA_PTR_TO_JSON(AlertConfigUrl, alertConfigUrl_);
          DARABONBA_PTR_TO_JSON(LogUrl, logUrl_);
          DARABONBA_PTR_TO_JSON(ObjectUrl, objectUrl_);
        };
        friend void from_json(const Darabonba::Json& j, UrlConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertConfigUrl, alertConfigUrl_);
          DARABONBA_PTR_FROM_JSON(LogUrl, logUrl_);
          DARABONBA_PTR_FROM_JSON(ObjectUrl, objectUrl_);
        };
        UrlConfig() = default ;
        UrlConfig(const UrlConfig &) = default ;
        UrlConfig(UrlConfig &&) = default ;
        UrlConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UrlConfig() = default ;
        UrlConfig& operator=(const UrlConfig &) = default ;
        UrlConfig& operator=(UrlConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertConfigUrl_ == nullptr
        && this->logUrl_ == nullptr && this->objectUrl_ == nullptr; };
        // alertConfigUrl Field Functions 
        bool hasAlertConfigUrl() const { return this->alertConfigUrl_ != nullptr;};
        void deleteAlertConfigUrl() { this->alertConfigUrl_ = nullptr;};
        inline string getAlertConfigUrl() const { DARABONBA_PTR_GET_DEFAULT(alertConfigUrl_, "") };
        inline UrlConfig& setAlertConfigUrl(string alertConfigUrl) { DARABONBA_PTR_SET_VALUE(alertConfigUrl_, alertConfigUrl) };


        // logUrl Field Functions 
        bool hasLogUrl() const { return this->logUrl_ != nullptr;};
        void deleteLogUrl() { this->logUrl_ = nullptr;};
        inline string getLogUrl() const { DARABONBA_PTR_GET_DEFAULT(logUrl_, "") };
        inline UrlConfig& setLogUrl(string logUrl) { DARABONBA_PTR_SET_VALUE(logUrl_, logUrl) };


        // objectUrl Field Functions 
        bool hasObjectUrl() const { return this->objectUrl_ != nullptr;};
        void deleteObjectUrl() { this->objectUrl_ = nullptr;};
        inline string getObjectUrl() const { DARABONBA_PTR_GET_DEFAULT(objectUrl_, "") };
        inline UrlConfig& setObjectUrl(string objectUrl) { DARABONBA_PTR_SET_VALUE(objectUrl_, objectUrl) };


      protected:
        // The URL of the alert configuration page.
        shared_ptr<string> alertConfigUrl_ {};
        // The URL of the log page.
        shared_ptr<string> logUrl_ {};
        // The URL of the alert object page.
        shared_ptr<string> objectUrl_ {};
      };

      class BelongProject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BelongProject& obj) { 
          DARABONBA_PTR_TO_JSON(BizName, bizName_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, BelongProject& obj) { 
          DARABONBA_PTR_FROM_JSON(BizName, bizName_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        };
        BelongProject() = default ;
        BelongProject(const BelongProject &) = default ;
        BelongProject(BelongProject &&) = default ;
        BelongProject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BelongProject() = default ;
        BelongProject& operator=(const BelongProject &) = default ;
        BelongProject& operator=(BelongProject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizName_ == nullptr
        && this->projectName_ == nullptr; };
        // bizName Field Functions 
        bool hasBizName() const { return this->bizName_ != nullptr;};
        void deleteBizName() { this->bizName_ = nullptr;};
        inline string getBizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
        inline BelongProject& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline BelongProject& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      protected:
        // The name of the business unit.
        shared_ptr<string> bizName_ {};
        // The name of the project.
        shared_ptr<string> projectName_ {};
      };

      class AlertReceiverList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertReceiverList& obj) { 
          DARABONBA_PTR_TO_JSON(AlertChannelTypeList, alertChannelTypeList_);
          DARABONBA_PTR_TO_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
          DARABONBA_PTR_TO_JSON(OnCallTableName, onCallTableName_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UserList, userList_);
        };
        friend void from_json(const Darabonba::Json& j, AlertReceiverList& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertChannelTypeList, alertChannelTypeList_);
          DARABONBA_PTR_FROM_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
          DARABONBA_PTR_FROM_JSON(OnCallTableName, onCallTableName_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UserList, userList_);
        };
        AlertReceiverList() = default ;
        AlertReceiverList(const AlertReceiverList &) = default ;
        AlertReceiverList(AlertReceiverList &&) = default ;
        AlertReceiverList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertReceiverList() = default ;
        AlertReceiverList& operator=(const AlertReceiverList &) = default ;
        AlertReceiverList& operator=(AlertReceiverList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class UserList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserList& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, UserList& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          UserList() = default ;
          UserList(const UserList &) = default ;
          UserList(UserList &&) = default ;
          UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserList() = default ;
          UserList& operator=(const UserList &) = default ;
          UserList& operator=(UserList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline UserList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The username.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->alertChannelTypeList_ == nullptr
        && this->customAlertChannelIdList_ == nullptr && this->onCallTableName_ == nullptr && this->type_ == nullptr && this->userList_ == nullptr; };
        // alertChannelTypeList Field Functions 
        bool hasAlertChannelTypeList() const { return this->alertChannelTypeList_ != nullptr;};
        void deleteAlertChannelTypeList() { this->alertChannelTypeList_ = nullptr;};
        inline const vector<string> & getAlertChannelTypeList() const { DARABONBA_PTR_GET_CONST(alertChannelTypeList_, vector<string>) };
        inline vector<string> getAlertChannelTypeList() { DARABONBA_PTR_GET(alertChannelTypeList_, vector<string>) };
        inline AlertReceiverList& setAlertChannelTypeList(const vector<string> & alertChannelTypeList) { DARABONBA_PTR_SET_VALUE(alertChannelTypeList_, alertChannelTypeList) };
        inline AlertReceiverList& setAlertChannelTypeList(vector<string> && alertChannelTypeList) { DARABONBA_PTR_SET_RVALUE(alertChannelTypeList_, alertChannelTypeList) };


        // customAlertChannelIdList Field Functions 
        bool hasCustomAlertChannelIdList() const { return this->customAlertChannelIdList_ != nullptr;};
        void deleteCustomAlertChannelIdList() { this->customAlertChannelIdList_ = nullptr;};
        inline const vector<string> & getCustomAlertChannelIdList() const { DARABONBA_PTR_GET_CONST(customAlertChannelIdList_, vector<string>) };
        inline vector<string> getCustomAlertChannelIdList() { DARABONBA_PTR_GET(customAlertChannelIdList_, vector<string>) };
        inline AlertReceiverList& setCustomAlertChannelIdList(const vector<string> & customAlertChannelIdList) { DARABONBA_PTR_SET_VALUE(customAlertChannelIdList_, customAlertChannelIdList) };
        inline AlertReceiverList& setCustomAlertChannelIdList(vector<string> && customAlertChannelIdList) { DARABONBA_PTR_SET_RVALUE(customAlertChannelIdList_, customAlertChannelIdList) };


        // onCallTableName Field Functions 
        bool hasOnCallTableName() const { return this->onCallTableName_ != nullptr;};
        void deleteOnCallTableName() { this->onCallTableName_ = nullptr;};
        inline string getOnCallTableName() const { DARABONBA_PTR_GET_DEFAULT(onCallTableName_, "") };
        inline AlertReceiverList& setOnCallTableName(string onCallTableName) { DARABONBA_PTR_SET_VALUE(onCallTableName_, onCallTableName) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AlertReceiverList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // userList Field Functions 
        bool hasUserList() const { return this->userList_ != nullptr;};
        void deleteUserList() { this->userList_ = nullptr;};
        inline const vector<AlertReceiverList::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<AlertReceiverList::UserList>) };
        inline vector<AlertReceiverList::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<AlertReceiverList::UserList>) };
        inline AlertReceiverList& setUserList(const vector<AlertReceiverList::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
        inline AlertReceiverList& setUserList(vector<AlertReceiverList::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


      protected:
        // The list of alert channel types.
        shared_ptr<vector<string>> alertChannelTypeList_ {};
        // The list of custom alert channel IDs.
        shared_ptr<vector<string>> customAlertChannelIdList_ {};
        // The name of the on-call schedule.
        shared_ptr<string> onCallTableName_ {};
        // The type of the alert receiver. Valid values:
        // - ON_CALL_TABLE: on-call schedule
        // - USER_DEFINED: custom user
        // - OWNER: owner.
        shared_ptr<string> type_ {};
        // The list of alert users.
        shared_ptr<vector<AlertReceiverList::UserList>> userList_ {};
      };

      class AlertReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertReason& obj) { 
          DARABONBA_PTR_TO_JSON(AlertReasonParamList, alertReasonParamList_);
          DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UniqueKey, uniqueKey_);
        };
        friend void from_json(const Darabonba::Json& j, AlertReason& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertReasonParamList, alertReasonParamList_);
          DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UniqueKey, uniqueKey_);
        };
        AlertReason() = default ;
        AlertReason(const AlertReason &) = default ;
        AlertReason(AlertReason &&) = default ;
        AlertReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertReason() = default ;
        AlertReason& operator=(const AlertReason &) = default ;
        AlertReason& operator=(AlertReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AlertReasonParamList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlertReasonParamList& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AlertReasonParamList& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AlertReasonParamList() = default ;
          AlertReasonParamList(const AlertReasonParamList &) = default ;
          AlertReasonParamList(AlertReasonParamList &&) = default ;
          AlertReasonParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlertReasonParamList() = default ;
          AlertReasonParamList& operator=(const AlertReasonParamList &) = default ;
          AlertReasonParamList& operator=(AlertReasonParamList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline AlertReasonParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AlertReasonParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the alert reason parameter.
          shared_ptr<string> key_ {};
          // The value of the alert reason parameter.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->alertReasonParamList_ == nullptr
        && this->bizDate_ == nullptr && this->type_ == nullptr && this->uniqueKey_ == nullptr; };
        // alertReasonParamList Field Functions 
        bool hasAlertReasonParamList() const { return this->alertReasonParamList_ != nullptr;};
        void deleteAlertReasonParamList() { this->alertReasonParamList_ = nullptr;};
        inline const vector<AlertReason::AlertReasonParamList> & getAlertReasonParamList() const { DARABONBA_PTR_GET_CONST(alertReasonParamList_, vector<AlertReason::AlertReasonParamList>) };
        inline vector<AlertReason::AlertReasonParamList> getAlertReasonParamList() { DARABONBA_PTR_GET(alertReasonParamList_, vector<AlertReason::AlertReasonParamList>) };
        inline AlertReason& setAlertReasonParamList(const vector<AlertReason::AlertReasonParamList> & alertReasonParamList) { DARABONBA_PTR_SET_VALUE(alertReasonParamList_, alertReasonParamList) };
        inline AlertReason& setAlertReasonParamList(vector<AlertReason::AlertReasonParamList> && alertReasonParamList) { DARABONBA_PTR_SET_RVALUE(alertReasonParamList_, alertReasonParamList) };


        // bizDate Field Functions 
        bool hasBizDate() const { return this->bizDate_ != nullptr;};
        void deleteBizDate() { this->bizDate_ = nullptr;};
        inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
        inline AlertReason& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AlertReason& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uniqueKey Field Functions 
        bool hasUniqueKey() const { return this->uniqueKey_ != nullptr;};
        void deleteUniqueKey() { this->uniqueKey_ = nullptr;};
        inline string getUniqueKey() const { DARABONBA_PTR_GET_DEFAULT(uniqueKey_, "") };
        inline AlertReason& setUniqueKey(string uniqueKey) { DARABONBA_PTR_SET_VALUE(uniqueKey_, uniqueKey) };


      protected:
        // The list of alert reason parameters.
        shared_ptr<vector<AlertReason::AlertReasonParamList>> alertReasonParamList_ {};
        // The business date.
        shared_ptr<string> bizDate_ {};
        // The type of the alert reason. Valid values:
        // - DQE_COLUMN: field rule exception
        // - DQE_DATA_SOURCE: data source rule exception
        // - DQE_CUSTOMIZE: custom rule exception
        // - DQE_TABLE: table rule exception
        // - DQE_REALTIME_TABLE: real-time table rule exception
        // - DQE_INDEX: metric rule exception
        // - OS_AVG_RESPONSE: average response time exception
        // - OS_CALL_TIMES: call count exception
        // - OS_ERROR_RATE: error rate exception
        // - OS_OFFLINE: Offline percentage exception
        // - STREAM_BIZ_DELAY: business delay too high
        // - STREAM_DATA_RETENTION: data retention exceeds configuration
        // - STREAM_MORE_THAN_FAILURE: failure frequency exceeds configuration
        // - STREAM_TPS_OUT_RANGE: TPS out of range
        // - STREAM_CHECKPOINT_FAILURE: checkpoint failures exceed configuration
        // - STREAM_BACKPRESSURE: backpressure duration exceeds configuration
        // - STREAM_JOB_FAILURE: job failure
        // - VDM_BATCH_ERROR: error
        // - VDM_BATCH_FINISH: completed
        // - VDM_BATCH_TIME_OUT: execution timeout
        // - VDM_BATCH_UNDONE: incomplete
        // - VDM_BATCH_LOGIC_DATA_DELAY: data delay
        // - QD_DECISION_CALL_TIMES: decision call count exception
        // - QD_DECISION_MAX_RESPONSE: maximum response time exception
        // - QD_DECISION_ERROR_RATE: error rate exception
        // - QD_DECISION_PARAM_COUNT: decision parameter count exception
        // - QD_DECISION_PARAM_PERCENTAGE: decision parameter percentage exception
        // - QD_DECISION_PARAM_SUM: decision parameter sum exception
        // - QD_DECISION_PARAM_AVG: decision parameter average exception
        // - LOGICAL_INSTANCE_GENERATION: logical instance generation monitoring
        // - KGB_TASK_ERROR: baseline task error
        // - KGB_TASK_SLOW_DOWN: baseline task slowdown
        // - KGB_EARLY_WARNING: baseline early warning
        // - KGB_BROKEN_LINE: baseline breach
        // 
        // and more.
        shared_ptr<string> type_ {};
        // The unique identifier.
        shared_ptr<string> uniqueKey_ {};
      };

      class AlertObject : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertObject& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SourceSystemType, sourceSystemType_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, AlertObject& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SourceSystemType, sourceSystemType_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        AlertObject() = default ;
        AlertObject(const AlertObject &) = default ;
        AlertObject(AlertObject &&) = default ;
        AlertObject(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertObject() = default ;
        AlertObject& operator=(const AlertObject &) = default ;
        AlertObject& operator=(AlertObject &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->sourceSystemType_ == nullptr && this->type_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AlertObject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // sourceSystemType Field Functions 
        bool hasSourceSystemType() const { return this->sourceSystemType_ != nullptr;};
        void deleteSourceSystemType() { this->sourceSystemType_ = nullptr;};
        inline string getSourceSystemType() const { DARABONBA_PTR_GET_DEFAULT(sourceSystemType_, "") };
        inline AlertObject& setSourceSystemType(string sourceSystemType) { DARABONBA_PTR_SET_VALUE(sourceSystemType_, sourceSystemType) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AlertObject& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The name of the alert object.
        shared_ptr<string> name_ {};
        // The source system type. Valid values:
        // 
        // - ALL: all systems
        // - DQE: data quality
        // - OS: data service
        // - STREAM: real-time computing
        // - VDM_BATCH: batch computing
        // - SOP: O&M platform
        // - REAL_TIME_PIPELINE: real-time integration
        // - KGB: baseline monitoring
        // 
        // and more.
        shared_ptr<string> sourceSystemType_ {};
        // The alerting object type. Valid values:
        // - OS_API: API operation
        // - OS_APPLICATION_SERVICE: service application
        // - STREAM_TASK: real-time computing
        // - REAL_TIME_PIPELINE_TASK: real-time integration
        // - VDM_BATCH_SHELL: SHELL
        // - VDM_BATCH_PYTHON: PYTHON
        // - VDM_BATCH_DATAX: DATAX
        // - VDM_BATCH_DLINK: DLINK
        // - VDM_BATCH_VIRTUAL: VIRTUAL
        // - VDM_BATCH_PYTHON37: PYTHON37
        // - VDM_BATCH_PYTHON311: PYTHON311
        // - VDM_BATCH_MAX_COMPUTE_SQL: MAXCOMPUTE_SQL
        // - VDM_BATCH_MAX_COMPUTE_MR: MAXCOMPUTE_MR
        // - VDM_BATCH_SPARK_JAR_ON_MAX_COMPUTE: SPARK_JAR_ON_MAX_COMPUTE
        // - VDM_BATCH_HIVE_SQL: HIVE_SQL
        // - VDM_BATCH_HADOOP_MR: HADOOP_MR
        // - VDM_BATCH_SPARK_JAR_ON_HIVE: SPARK_JAR_ON_HIVE
        // - VDM_BATCH_SPARK_SQL_ON_HIVE: SPARK_SQL_ON_HIVE
        // - VDM_BATCH_SPARK_SQL: VDM_BATCH_SPARK_SQL
        // - DQE_LOGICAL_TABLE: logical table
        // - DQE_PHYSICAL_TABLE: physical table
        // - DQE_REALTIME_TABLE: real-time metadata table
        // - DQE_DATA_SOURCE: data source
        // - DQE_INDEX: metric
        // - QD_DECISION_INVOKE: QD decision invocation
        // - BASELINE: baseline
        // 
        // and more.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->alertFrequency_ == nullptr
        && this->alertObject_ == nullptr && this->alertReason_ == nullptr && this->alertReceiverList_ == nullptr && this->belongProject_ == nullptr && this->doNotDisturbEndTime_ == nullptr
        && this->firstAlertTime_ == nullptr && this->id_ == nullptr && this->latestAlertTime_ == nullptr && this->status_ == nullptr && this->totalAlertTimes_ == nullptr
        && this->urlConfig_ == nullptr; };
      // alertFrequency Field Functions 
      bool hasAlertFrequency() const { return this->alertFrequency_ != nullptr;};
      void deleteAlertFrequency() { this->alertFrequency_ = nullptr;};
      inline string getAlertFrequency() const { DARABONBA_PTR_GET_DEFAULT(alertFrequency_, "") };
      inline AlertEventInfo& setAlertFrequency(string alertFrequency) { DARABONBA_PTR_SET_VALUE(alertFrequency_, alertFrequency) };


      // alertObject Field Functions 
      bool hasAlertObject() const { return this->alertObject_ != nullptr;};
      void deleteAlertObject() { this->alertObject_ = nullptr;};
      inline const AlertEventInfo::AlertObject & getAlertObject() const { DARABONBA_PTR_GET_CONST(alertObject_, AlertEventInfo::AlertObject) };
      inline AlertEventInfo::AlertObject getAlertObject() { DARABONBA_PTR_GET(alertObject_, AlertEventInfo::AlertObject) };
      inline AlertEventInfo& setAlertObject(const AlertEventInfo::AlertObject & alertObject) { DARABONBA_PTR_SET_VALUE(alertObject_, alertObject) };
      inline AlertEventInfo& setAlertObject(AlertEventInfo::AlertObject && alertObject) { DARABONBA_PTR_SET_RVALUE(alertObject_, alertObject) };


      // alertReason Field Functions 
      bool hasAlertReason() const { return this->alertReason_ != nullptr;};
      void deleteAlertReason() { this->alertReason_ = nullptr;};
      inline const AlertEventInfo::AlertReason & getAlertReason() const { DARABONBA_PTR_GET_CONST(alertReason_, AlertEventInfo::AlertReason) };
      inline AlertEventInfo::AlertReason getAlertReason() { DARABONBA_PTR_GET(alertReason_, AlertEventInfo::AlertReason) };
      inline AlertEventInfo& setAlertReason(const AlertEventInfo::AlertReason & alertReason) { DARABONBA_PTR_SET_VALUE(alertReason_, alertReason) };
      inline AlertEventInfo& setAlertReason(AlertEventInfo::AlertReason && alertReason) { DARABONBA_PTR_SET_RVALUE(alertReason_, alertReason) };


      // alertReceiverList Field Functions 
      bool hasAlertReceiverList() const { return this->alertReceiverList_ != nullptr;};
      void deleteAlertReceiverList() { this->alertReceiverList_ = nullptr;};
      inline const vector<AlertEventInfo::AlertReceiverList> & getAlertReceiverList() const { DARABONBA_PTR_GET_CONST(alertReceiverList_, vector<AlertEventInfo::AlertReceiverList>) };
      inline vector<AlertEventInfo::AlertReceiverList> getAlertReceiverList() { DARABONBA_PTR_GET(alertReceiverList_, vector<AlertEventInfo::AlertReceiverList>) };
      inline AlertEventInfo& setAlertReceiverList(const vector<AlertEventInfo::AlertReceiverList> & alertReceiverList) { DARABONBA_PTR_SET_VALUE(alertReceiverList_, alertReceiverList) };
      inline AlertEventInfo& setAlertReceiverList(vector<AlertEventInfo::AlertReceiverList> && alertReceiverList) { DARABONBA_PTR_SET_RVALUE(alertReceiverList_, alertReceiverList) };


      // belongProject Field Functions 
      bool hasBelongProject() const { return this->belongProject_ != nullptr;};
      void deleteBelongProject() { this->belongProject_ = nullptr;};
      inline const AlertEventInfo::BelongProject & getBelongProject() const { DARABONBA_PTR_GET_CONST(belongProject_, AlertEventInfo::BelongProject) };
      inline AlertEventInfo::BelongProject getBelongProject() { DARABONBA_PTR_GET(belongProject_, AlertEventInfo::BelongProject) };
      inline AlertEventInfo& setBelongProject(const AlertEventInfo::BelongProject & belongProject) { DARABONBA_PTR_SET_VALUE(belongProject_, belongProject) };
      inline AlertEventInfo& setBelongProject(AlertEventInfo::BelongProject && belongProject) { DARABONBA_PTR_SET_RVALUE(belongProject_, belongProject) };


      // doNotDisturbEndTime Field Functions 
      bool hasDoNotDisturbEndTime() const { return this->doNotDisturbEndTime_ != nullptr;};
      void deleteDoNotDisturbEndTime() { this->doNotDisturbEndTime_ = nullptr;};
      inline string getDoNotDisturbEndTime() const { DARABONBA_PTR_GET_DEFAULT(doNotDisturbEndTime_, "") };
      inline AlertEventInfo& setDoNotDisturbEndTime(string doNotDisturbEndTime) { DARABONBA_PTR_SET_VALUE(doNotDisturbEndTime_, doNotDisturbEndTime) };


      // firstAlertTime Field Functions 
      bool hasFirstAlertTime() const { return this->firstAlertTime_ != nullptr;};
      void deleteFirstAlertTime() { this->firstAlertTime_ = nullptr;};
      inline string getFirstAlertTime() const { DARABONBA_PTR_GET_DEFAULT(firstAlertTime_, "") };
      inline AlertEventInfo& setFirstAlertTime(string firstAlertTime) { DARABONBA_PTR_SET_VALUE(firstAlertTime_, firstAlertTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline AlertEventInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // latestAlertTime Field Functions 
      bool hasLatestAlertTime() const { return this->latestAlertTime_ != nullptr;};
      void deleteLatestAlertTime() { this->latestAlertTime_ = nullptr;};
      inline string getLatestAlertTime() const { DARABONBA_PTR_GET_DEFAULT(latestAlertTime_, "") };
      inline AlertEventInfo& setLatestAlertTime(string latestAlertTime) { DARABONBA_PTR_SET_VALUE(latestAlertTime_, latestAlertTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline AlertEventInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalAlertTimes Field Functions 
      bool hasTotalAlertTimes() const { return this->totalAlertTimes_ != nullptr;};
      void deleteTotalAlertTimes() { this->totalAlertTimes_ = nullptr;};
      inline int64_t getTotalAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(totalAlertTimes_, 0L) };
      inline AlertEventInfo& setTotalAlertTimes(int64_t totalAlertTimes) { DARABONBA_PTR_SET_VALUE(totalAlertTimes_, totalAlertTimes) };


      // urlConfig Field Functions 
      bool hasUrlConfig() const { return this->urlConfig_ != nullptr;};
      void deleteUrlConfig() { this->urlConfig_ = nullptr;};
      inline const AlertEventInfo::UrlConfig & getUrlConfig() const { DARABONBA_PTR_GET_CONST(urlConfig_, AlertEventInfo::UrlConfig) };
      inline AlertEventInfo::UrlConfig getUrlConfig() { DARABONBA_PTR_GET(urlConfig_, AlertEventInfo::UrlConfig) };
      inline AlertEventInfo& setUrlConfig(const AlertEventInfo::UrlConfig & urlConfig) { DARABONBA_PTR_SET_VALUE(urlConfig_, urlConfig) };
      inline AlertEventInfo& setUrlConfig(AlertEventInfo::UrlConfig && urlConfig) { DARABONBA_PTR_SET_RVALUE(urlConfig_, urlConfig) };


    protected:
      // The alert frequency. Valid values:
      // - ONCE: Instant alert.
      // - PERIOD: Periodic alert. Format: 1HOUR, 1MINUTE, 1SECOND.
      shared_ptr<string> alertFrequency_ {};
      // The alert object.
      shared_ptr<AlertEventInfo::AlertObject> alertObject_ {};
      // The alert reason.
      shared_ptr<AlertEventInfo::AlertReason> alertReason_ {};
      // The list of alert receivers.
      shared_ptr<vector<AlertEventInfo::AlertReceiverList>> alertReceiverList_ {};
      // The project to which the alert event belongs.
      shared_ptr<AlertEventInfo::BelongProject> belongProject_ {};
      // The expiration time of the do-not-disturb period.
      shared_ptr<string> doNotDisturbEndTime_ {};
      // The time of the first alert.
      shared_ptr<string> firstAlertTime_ {};
      // The alert event ID.
      shared_ptr<int64_t> id_ {};
      // The time of the latest alert.
      shared_ptr<string> latestAlertTime_ {};
      // The alert status. Valid values:
      // - ALERTING: Alerting.
      // - DO_NOT_DISTURB: Do not disturb.
      // - SILENCING: Alerting (cool-down period).
      // - FINISH: Alert completed.
      shared_ptr<string> status_ {};
      // The total number of alerts.
      shared_ptr<int64_t> totalAlertTimes_ {};
      // The URL configuration.
      shared_ptr<AlertEventInfo::UrlConfig> urlConfig_ {};
    };

    virtual bool empty() const override { return this->alertEventInfo_ == nullptr
        && this->code_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // alertEventInfo Field Functions 
    bool hasAlertEventInfo() const { return this->alertEventInfo_ != nullptr;};
    void deleteAlertEventInfo() { this->alertEventInfo_ = nullptr;};
    inline const GetAlertEventResponseBody::AlertEventInfo & getAlertEventInfo() const { DARABONBA_PTR_GET_CONST(alertEventInfo_, GetAlertEventResponseBody::AlertEventInfo) };
    inline GetAlertEventResponseBody::AlertEventInfo getAlertEventInfo() { DARABONBA_PTR_GET(alertEventInfo_, GetAlertEventResponseBody::AlertEventInfo) };
    inline GetAlertEventResponseBody& setAlertEventInfo(const GetAlertEventResponseBody::AlertEventInfo & alertEventInfo) { DARABONBA_PTR_SET_VALUE(alertEventInfo_, alertEventInfo) };
    inline GetAlertEventResponseBody& setAlertEventInfo(GetAlertEventResponseBody::AlertEventInfo && alertEventInfo) { DARABONBA_PTR_SET_RVALUE(alertEventInfo_, alertEventInfo) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlertEventResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAlertEventResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlertEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAlertEventResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The alert event information.
    shared_ptr<GetAlertEventResponseBody::AlertEventInfo> alertEventInfo_ {};
    // The error code. A value of OK indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
