// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityEvaluationTaskInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskInstance, dataQualityEvaluationTaskInstance_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskInstance, dataQualityEvaluationTaskInstance_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityEvaluationTaskInstanceResponseBody() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody(const GetDataQualityEvaluationTaskInstanceResponseBody &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody(GetDataQualityEvaluationTaskInstanceResponseBody &&) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskInstanceResponseBody() = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody& operator=(const GetDataQualityEvaluationTaskInstanceResponseBody &) = default ;
    GetDataQualityEvaluationTaskInstanceResponseBody& operator=(GetDataQualityEvaluationTaskInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataQualityEvaluationTaskInstance : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstance& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Task, task_);
        DARABONBA_PTR_TO_JSON(TriggerContext, triggerContext_);
      };
      friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstance& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Task, task_);
        DARABONBA_PTR_FROM_JSON(TriggerContext, triggerContext_);
      };
      DataQualityEvaluationTaskInstance() = default ;
      DataQualityEvaluationTaskInstance(const DataQualityEvaluationTaskInstance &) = default ;
      DataQualityEvaluationTaskInstance(DataQualityEvaluationTaskInstance &&) = default ;
      DataQualityEvaluationTaskInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityEvaluationTaskInstance() = default ;
      DataQualityEvaluationTaskInstance& operator=(const DataQualityEvaluationTaskInstance &) = default ;
      DataQualityEvaluationTaskInstance& operator=(DataQualityEvaluationTaskInstance &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Task : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Task& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Hooks, hooks_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Notifications, notifications_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
          DARABONBA_PTR_TO_JSON(Target, target_);
          DARABONBA_PTR_TO_JSON(Trigger, trigger_);
        };
        friend void from_json(const Darabonba::Json& j, Task& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
          DARABONBA_PTR_FROM_JSON(Target, target_);
          DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
        };
        Task() = default ;
        Task(const Task &) = default ;
        Task(Task &&) = default ;
        Task(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Task() = default ;
        Task& operator=(const Task &) = default ;
        Task& operator=(Task &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Trigger : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Trigger& obj) { 
            DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Trigger& obj) { 
            DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Trigger() = default ;
          Trigger(const Trigger &) = default ;
          Trigger(Trigger &&) = default ;
          Trigger(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Trigger() = default ;
          Trigger& operator=(const Trigger &) = default ;
          Trigger& operator=(Trigger &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->taskIds_ == nullptr
        && this->type_ == nullptr; };
          // taskIds Field Functions 
          bool hasTaskIds() const { return this->taskIds_ != nullptr;};
          void deleteTaskIds() { this->taskIds_ = nullptr;};
          inline const vector<int64_t> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
          inline vector<int64_t> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
          inline Trigger& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
          inline Trigger& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Trigger& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The Id list of the scheduled task, which is valid when the Type is ByScheduledTaskInstance.
          shared_ptr<vector<int64_t>> taskIds_ {};
          // The trigger type of the monitor. Valid values:
          // 
          // *   ByManual (default): The monitor is manually triggered.
          // *   ByScheduledTaskInstance: The monitor is triggered by the associated scheduling tasks.
          shared_ptr<string> type_ {};
        };

        class Target : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Target& obj) { 
            DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
            DARABONBA_PTR_TO_JSON(PartitionSpec, partitionSpec_);
            DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Target& obj) { 
            DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
            DARABONBA_PTR_FROM_JSON(PartitionSpec, partitionSpec_);
            DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Target() = default ;
          Target(const Target &) = default ;
          Target(Target &&) = default ;
          Target(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Target() = default ;
          Target& operator=(const Target &) = default ;
          Target& operator=(Target &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->databaseType_ == nullptr
        && this->partitionSpec_ == nullptr && this->tableGuid_ == nullptr && this->type_ == nullptr; };
          // databaseType Field Functions 
          bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
          void deleteDatabaseType() { this->databaseType_ = nullptr;};
          inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
          inline Target& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


          // partitionSpec Field Functions 
          bool hasPartitionSpec() const { return this->partitionSpec_ != nullptr;};
          void deletePartitionSpec() { this->partitionSpec_ = nullptr;};
          inline string getPartitionSpec() const { DARABONBA_PTR_GET_DEFAULT(partitionSpec_, "") };
          inline Target& setPartitionSpec(string partitionSpec) { DARABONBA_PTR_SET_VALUE(partitionSpec_, partitionSpec) };


          // tableGuid Field Functions 
          bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
          void deleteTableGuid() { this->tableGuid_ = nullptr;};
          inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
          inline Target& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The type of the database to which the table belongs.
          shared_ptr<string> databaseType_ {};
          // The partition range monitored.
          shared_ptr<string> partitionSpec_ {};
          // The unique ID of the table in the data map.
          shared_ptr<string> tableGuid_ {};
          // The type of the monitoring object.
          // - Table: Table
          shared_ptr<string> type_ {};
        };

        class Notifications : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Notifications& obj) { 
            DARABONBA_PTR_TO_JSON(Condition, condition_);
            DARABONBA_PTR_TO_JSON(Notifications, notifications_);
          };
          friend void from_json(const Darabonba::Json& j, Notifications& obj) { 
            DARABONBA_PTR_FROM_JSON(Condition, condition_);
            DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
          };
          Notifications() = default ;
          Notifications(const Notifications &) = default ;
          Notifications(Notifications &&) = default ;
          Notifications(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Notifications() = default ;
          Notifications& operator=(const Notifications &) = default ;
          Notifications& operator=(Notifications &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NotificationsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NotificationsItem& obj) { 
              DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
              DARABONBA_PTR_TO_JSON(NotificationReceivers, notificationReceivers_);
            };
            friend void from_json(const Darabonba::Json& j, NotificationsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
              DARABONBA_PTR_FROM_JSON(NotificationReceivers, notificationReceivers_);
            };
            NotificationsItem() = default ;
            NotificationsItem(const NotificationsItem &) = default ;
            NotificationsItem(NotificationsItem &&) = default ;
            NotificationsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NotificationsItem() = default ;
            NotificationsItem& operator=(const NotificationsItem &) = default ;
            NotificationsItem& operator=(NotificationsItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class NotificationReceivers : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NotificationReceivers& obj) { 
                DARABONBA_PTR_TO_JSON(Extension, extension_);
                DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
                DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
              };
              friend void from_json(const Darabonba::Json& j, NotificationReceivers& obj) { 
                DARABONBA_PTR_FROM_JSON(Extension, extension_);
                DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
                DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
              };
              NotificationReceivers() = default ;
              NotificationReceivers(const NotificationReceivers &) = default ;
              NotificationReceivers(NotificationReceivers &&) = default ;
              NotificationReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NotificationReceivers() = default ;
              NotificationReceivers& operator=(const NotificationReceivers &) = default ;
              NotificationReceivers& operator=(NotificationReceivers &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->extension_ == nullptr
        && this->receiverType_ == nullptr && this->receiverValues_ == nullptr; };
              // extension Field Functions 
              bool hasExtension() const { return this->extension_ != nullptr;};
              void deleteExtension() { this->extension_ = nullptr;};
              inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
              inline NotificationReceivers& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


              // receiverType Field Functions 
              bool hasReceiverType() const { return this->receiverType_ != nullptr;};
              void deleteReceiverType() { this->receiverType_ = nullptr;};
              inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
              inline NotificationReceivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


              // receiverValues Field Functions 
              bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
              void deleteReceiverValues() { this->receiverValues_ = nullptr;};
              inline const vector<string> & getReceiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
              inline vector<string> getReceiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
              inline NotificationReceivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
              inline NotificationReceivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


            protected:
              // Additional parameter settings for sending alerts in json format. The supported keys are as follows:
              // 
              // - atAll: when sending DingTalk alerts, do you need to @ everyone in the group. It takes effect when ReceiverType is DingdingUrl.
              shared_ptr<string> extension_ {};
              // The type of alert recipient.
              shared_ptr<string> receiverType_ {};
              // The recipient of the alert.
              shared_ptr<vector<string>> receiverValues_ {};
            };

            class NotificationChannels : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NotificationChannels& obj) { 
                DARABONBA_PTR_TO_JSON(Channels, channels_);
              };
              friend void from_json(const Darabonba::Json& j, NotificationChannels& obj) { 
                DARABONBA_PTR_FROM_JSON(Channels, channels_);
              };
              NotificationChannels() = default ;
              NotificationChannels(const NotificationChannels &) = default ;
              NotificationChannels(NotificationChannels &&) = default ;
              NotificationChannels(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NotificationChannels() = default ;
              NotificationChannels& operator=(const NotificationChannels &) = default ;
              NotificationChannels& operator=(NotificationChannels &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->channels_ == nullptr; };
              // channels Field Functions 
              bool hasChannels() const { return this->channels_ != nullptr;};
              void deleteChannels() { this->channels_ = nullptr;};
              inline const vector<string> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<string>) };
              inline vector<string> getChannels() { DARABONBA_PTR_GET(channels_, vector<string>) };
              inline NotificationChannels& setChannels(const vector<string> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
              inline NotificationChannels& setChannels(vector<string> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


            protected:
              // The notification method.
              shared_ptr<vector<string>> channels_ {};
            };

            virtual bool empty() const override { return this->notificationChannels_ == nullptr
        && this->notificationReceivers_ == nullptr; };
            // notificationChannels Field Functions 
            bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
            void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
            inline const vector<NotificationsItem::NotificationChannels> & getNotificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<NotificationsItem::NotificationChannels>) };
            inline vector<NotificationsItem::NotificationChannels> getNotificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<NotificationsItem::NotificationChannels>) };
            inline NotificationsItem& setNotificationChannels(const vector<NotificationsItem::NotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
            inline NotificationsItem& setNotificationChannels(vector<NotificationsItem::NotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


            // notificationReceivers Field Functions 
            bool hasNotificationReceivers() const { return this->notificationReceivers_ != nullptr;};
            void deleteNotificationReceivers() { this->notificationReceivers_ = nullptr;};
            inline const vector<NotificationsItem::NotificationReceivers> & getNotificationReceivers() const { DARABONBA_PTR_GET_CONST(notificationReceivers_, vector<NotificationsItem::NotificationReceivers>) };
            inline vector<NotificationsItem::NotificationReceivers> getNotificationReceivers() { DARABONBA_PTR_GET(notificationReceivers_, vector<NotificationsItem::NotificationReceivers>) };
            inline NotificationsItem& setNotificationReceivers(const vector<NotificationsItem::NotificationReceivers> & notificationReceivers) { DARABONBA_PTR_SET_VALUE(notificationReceivers_, notificationReceivers) };
            inline NotificationsItem& setNotificationReceivers(vector<NotificationsItem::NotificationReceivers> && notificationReceivers) { DARABONBA_PTR_SET_RVALUE(notificationReceivers_, notificationReceivers) };


          protected:
            // The notification method.
            shared_ptr<vector<NotificationsItem::NotificationChannels>> notificationChannels_ {};
            // The value of the receiver.
            shared_ptr<vector<NotificationsItem::NotificationReceivers>> notificationReceivers_ {};
          };

          virtual bool empty() const override { return this->condition_ == nullptr
        && this->notifications_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline Notifications& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // notifications Field Functions 
          bool hasNotifications() const { return this->notifications_ != nullptr;};
          void deleteNotifications() { this->notifications_ = nullptr;};
          inline const vector<Notifications::NotificationsItem> & getNotifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<Notifications::NotificationsItem>) };
          inline vector<Notifications::NotificationsItem> getNotifications() { DARABONBA_PTR_GET(notifications_, vector<Notifications::NotificationsItem>) };
          inline Notifications& setNotifications(const vector<Notifications::NotificationsItem> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
          inline Notifications& setNotifications(vector<Notifications::NotificationsItem> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


        protected:
          // The notification trigger condition. When this condition is met, the alert notification is triggered. Only two conditional expressions are supported:
          // 
          // *   Specify only one group of rule strength type and rule check status, such as `${severity} == "High" AND ${status} == "Critical"`. In this expression, the hook trigger condition is met if severity is High and status is Critical.
          // *   Specify multiple groups of rule strength types and rule check status, such as `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. In this expression, the hook trigger condition is met if severity is High and status is Critical, severity is Normal and status is Critical, or severity is Normal and status is Error. The enumeration of severity in a conditional expression is the same as the enumeration of severity in DataQualityRule. The enumeration of status in a conditional expression is the same as the enumeration of status in DataQualityResult.
          shared_ptr<string> condition_ {};
          // The alert notification methods.
          shared_ptr<vector<Notifications::NotificationsItem>> notifications_ {};
        };

        class Hooks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Hooks& obj) { 
            DARABONBA_PTR_TO_JSON(Condition, condition_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Hooks& obj) { 
            DARABONBA_PTR_FROM_JSON(Condition, condition_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Hooks() = default ;
          Hooks(const Hooks &) = default ;
          Hooks(Hooks &&) = default ;
          Hooks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Hooks() = default ;
          Hooks& operator=(const Hooks &) = default ;
          Hooks& operator=(Hooks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->condition_ == nullptr
        && this->type_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline Hooks& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Hooks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          // The hook trigger condition. When this condition is met, the hook action is triggered. Only two conditional expressions are supported:
          // 
          // *   Specify only one group of rule strength type and rule check status, such as `${severity} == "High" AND ${status} == "Critical"`. In this expression, the hook trigger condition is met if severity is High and status is Critical.
          // *   Specify multiple groups of rule strength types and rule check status, such as `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. In this expression, the hook trigger condition is met if severity is High and status is Critical, severity is Normal and status is Critical, or severity is Normal and status is Error. The enumeration of severity in a conditional expression is the same as the enumeration of severity in DataQualityRule. The enumeration of status in a conditional expression is the same as the enumeration of status in DataQualityResult.
          shared_ptr<string> condition_ {};
          // Hook type. Currently, only one type is supported:
          // 
          // - BlockTaskInstance: the blocking scheduling task continues to run. Data quality monitoring is triggered by the scheduling task. After the data quality monitoring is completed, the Hook.Condition is used to determine whether the blocking scheduling task continues to run.
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->hooks_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notifications_ == nullptr && this->projectId_ == nullptr
        && this->runtimeConf_ == nullptr && this->target_ == nullptr && this->trigger_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Task& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hooks Field Functions 
        bool hasHooks() const { return this->hooks_ != nullptr;};
        void deleteHooks() { this->hooks_ = nullptr;};
        inline const vector<Task::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<Task::Hooks>) };
        inline vector<Task::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<Task::Hooks>) };
        inline Task& setHooks(const vector<Task::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
        inline Task& setHooks(vector<Task::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Task& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // notifications Field Functions 
        bool hasNotifications() const { return this->notifications_ != nullptr;};
        void deleteNotifications() { this->notifications_ = nullptr;};
        inline const Task::Notifications & getNotifications() const { DARABONBA_PTR_GET_CONST(notifications_, Task::Notifications) };
        inline Task::Notifications getNotifications() { DARABONBA_PTR_GET(notifications_, Task::Notifications) };
        inline Task& setNotifications(const Task::Notifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
        inline Task& setNotifications(Task::Notifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Task& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // runtimeConf Field Functions 
        bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
        void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
        inline string getRuntimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
        inline Task& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline const Task::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Task::Target) };
        inline Task::Target getTarget() { DARABONBA_PTR_GET(target_, Task::Target) };
        inline Task& setTarget(const Task::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
        inline Task& setTarget(Task::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline const Task::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Task::Trigger) };
        inline Task::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Task::Trigger) };
        inline Task& setTrigger(const Task::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
        inline Task& setTrigger(Task::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      protected:
        // The description of the monitor.
        shared_ptr<string> description_ {};
        // The hook.
        shared_ptr<vector<Task::Hooks>> hooks_ {};
        // The ID of the data quality monitor.
        shared_ptr<int64_t> id_ {};
        // The name of the monitor.
        shared_ptr<string> name_ {};
        // The configurations of alert notifications.
        shared_ptr<Task::Notifications> notifications_ {};
        // The ID of the workspace.
        shared_ptr<int64_t> projectId_ {};
        // Extended configuration, JSON-formatted string, takes effect only for EMR-type data quality monitoring.
        // 
        // - queue: the yarn queue used when performing EMR data quality verification. The default queue is the queue configured for this project.
        // - sqlEngine: SQL engine used when performing EMR data verification
        //   - HIVE_ SQL
        //   - SPARK_ SQL
        shared_ptr<string> runtimeConf_ {};
        // The monitored object of the monitor.
        shared_ptr<Task::Target> target_ {};
        // The trigger configuration of the monitor.
        shared_ptr<Task::Trigger> trigger_ {};
      };

      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Details, details_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Rule, rule_);
          DARABONBA_PTR_TO_JSON(Sample, sample_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Details, details_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Rule, rule_);
          DARABONBA_PTR_FROM_JSON(Sample, sample_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Rule : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Rule& obj) { 
            DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
            DARABONBA_PTR_TO_JSON(Severity, severity_);
            DARABONBA_PTR_TO_JSON(Target, target_);
            DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
          };
          friend void from_json(const Darabonba::Json& j, Rule& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
            DARABONBA_PTR_FROM_JSON(Severity, severity_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
            DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
          };
          Rule() = default ;
          Rule(const Rule &) = default ;
          Rule(Rule &&) = default ;
          Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Rule() = default ;
          Rule& operator=(const Rule &) = default ;
          Rule& operator=(Rule &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Target : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Target& obj) { 
              DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
              DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Target& obj) { 
              DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
              DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Target() = default ;
            Target(const Target &) = default ;
            Target(Target &&) = default ;
            Target(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Target() = default ;
            Target& operator=(const Target &) = default ;
            Target& operator=(Target &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->databaseType_ == nullptr
        && this->tableGuid_ == nullptr && this->type_ == nullptr; };
            // databaseType Field Functions 
            bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
            void deleteDatabaseType() { this->databaseType_ = nullptr;};
            inline string getDatabaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
            inline Target& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


            // tableGuid Field Functions 
            bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
            void deleteTableGuid() { this->tableGuid_ = nullptr;};
            inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
            inline Target& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Target& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> databaseType_ {};
            shared_ptr<string> tableGuid_ {};
            shared_ptr<string> type_ {};
          };

          class SamplingConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SamplingConfig& obj) { 
              DARABONBA_PTR_TO_JSON(Metric, metric_);
              DARABONBA_PTR_TO_JSON(MetricParameters, metricParameters_);
              DARABONBA_PTR_TO_JSON(SamplingFilter, samplingFilter_);
              DARABONBA_PTR_TO_JSON(SettingConfig, settingConfig_);
            };
            friend void from_json(const Darabonba::Json& j, SamplingConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(Metric, metric_);
              DARABONBA_PTR_FROM_JSON(MetricParameters, metricParameters_);
              DARABONBA_PTR_FROM_JSON(SamplingFilter, samplingFilter_);
              DARABONBA_PTR_FROM_JSON(SettingConfig, settingConfig_);
            };
            SamplingConfig() = default ;
            SamplingConfig(const SamplingConfig &) = default ;
            SamplingConfig(SamplingConfig &&) = default ;
            SamplingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SamplingConfig() = default ;
            SamplingConfig& operator=(const SamplingConfig &) = default ;
            SamplingConfig& operator=(SamplingConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->metric_ == nullptr
        && this->metricParameters_ == nullptr && this->samplingFilter_ == nullptr && this->settingConfig_ == nullptr; };
            // metric Field Functions 
            bool hasMetric() const { return this->metric_ != nullptr;};
            void deleteMetric() { this->metric_ = nullptr;};
            inline string getMetric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
            inline SamplingConfig& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


            // metricParameters Field Functions 
            bool hasMetricParameters() const { return this->metricParameters_ != nullptr;};
            void deleteMetricParameters() { this->metricParameters_ = nullptr;};
            inline string getMetricParameters() const { DARABONBA_PTR_GET_DEFAULT(metricParameters_, "") };
            inline SamplingConfig& setMetricParameters(string metricParameters) { DARABONBA_PTR_SET_VALUE(metricParameters_, metricParameters) };


            // samplingFilter Field Functions 
            bool hasSamplingFilter() const { return this->samplingFilter_ != nullptr;};
            void deleteSamplingFilter() { this->samplingFilter_ = nullptr;};
            inline string getSamplingFilter() const { DARABONBA_PTR_GET_DEFAULT(samplingFilter_, "") };
            inline SamplingConfig& setSamplingFilter(string samplingFilter) { DARABONBA_PTR_SET_VALUE(samplingFilter_, samplingFilter) };


            // settingConfig Field Functions 
            bool hasSettingConfig() const { return this->settingConfig_ != nullptr;};
            void deleteSettingConfig() { this->settingConfig_ = nullptr;};
            inline string getSettingConfig() const { DARABONBA_PTR_GET_DEFAULT(settingConfig_, "") };
            inline SamplingConfig& setSettingConfig(string settingConfig) { DARABONBA_PTR_SET_VALUE(settingConfig_, settingConfig) };


          protected:
            shared_ptr<string> metric_ {};
            shared_ptr<string> metricParameters_ {};
            shared_ptr<string> samplingFilter_ {};
            shared_ptr<string> settingConfig_ {};
          };

          class ErrorHandlers : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ErrorHandlers& obj) { 
              DARABONBA_PTR_TO_JSON(ErrorDataFilter, errorDataFilter_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, ErrorHandlers& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrorDataFilter, errorDataFilter_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            ErrorHandlers() = default ;
            ErrorHandlers(const ErrorHandlers &) = default ;
            ErrorHandlers(ErrorHandlers &&) = default ;
            ErrorHandlers(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ErrorHandlers() = default ;
            ErrorHandlers& operator=(const ErrorHandlers &) = default ;
            ErrorHandlers& operator=(ErrorHandlers &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errorDataFilter_ == nullptr
        && this->type_ == nullptr; };
            // errorDataFilter Field Functions 
            bool hasErrorDataFilter() const { return this->errorDataFilter_ != nullptr;};
            void deleteErrorDataFilter() { this->errorDataFilter_ = nullptr;};
            inline string getErrorDataFilter() const { DARABONBA_PTR_GET_DEFAULT(errorDataFilter_, "") };
            inline ErrorHandlers& setErrorDataFilter(string errorDataFilter) { DARABONBA_PTR_SET_VALUE(errorDataFilter_, errorDataFilter) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline ErrorHandlers& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> errorDataFilter_ {};
            shared_ptr<string> type_ {};
          };

          class CheckingConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CheckingConfig& obj) { 
              DARABONBA_PTR_TO_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
              DARABONBA_PTR_TO_JSON(Thresholds, thresholds_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, CheckingConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(ReferencedSamplesFilter, referencedSamplesFilter_);
              DARABONBA_PTR_FROM_JSON(Thresholds, thresholds_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            CheckingConfig() = default ;
            CheckingConfig(const CheckingConfig &) = default ;
            CheckingConfig(CheckingConfig &&) = default ;
            CheckingConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CheckingConfig() = default ;
            CheckingConfig& operator=(const CheckingConfig &) = default ;
            CheckingConfig& operator=(CheckingConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Thresholds : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Thresholds& obj) { 
                DARABONBA_PTR_TO_JSON(Critical, critical_);
                DARABONBA_PTR_TO_JSON(Expected, expected_);
                DARABONBA_PTR_TO_JSON(Warned, warned_);
              };
              friend void from_json(const Darabonba::Json& j, Thresholds& obj) { 
                DARABONBA_PTR_FROM_JSON(Critical, critical_);
                DARABONBA_PTR_FROM_JSON(Expected, expected_);
                DARABONBA_PTR_FROM_JSON(Warned, warned_);
              };
              Thresholds() = default ;
              Thresholds(const Thresholds &) = default ;
              Thresholds(Thresholds &&) = default ;
              Thresholds(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Thresholds() = default ;
              Thresholds& operator=(const Thresholds &) = default ;
              Thresholds& operator=(Thresholds &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class Warned : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Warned& obj) { 
                  DARABONBA_PTR_TO_JSON(Expression, expression_);
                  DARABONBA_PTR_TO_JSON(Operator, operator_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, Warned& obj) { 
                  DARABONBA_PTR_FROM_JSON(Expression, expression_);
                  DARABONBA_PTR_FROM_JSON(Operator, operator_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                Warned() = default ;
                Warned(const Warned &) = default ;
                Warned(Warned &&) = default ;
                Warned(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Warned() = default ;
                Warned& operator=(const Warned &) = default ;
                Warned& operator=(Warned &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->expression_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
                // expression Field Functions 
                bool hasExpression() const { return this->expression_ != nullptr;};
                void deleteExpression() { this->expression_ = nullptr;};
                inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
                inline Warned& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


                // operator Field Functions 
                bool hasOperator() const { return this->operator_ != nullptr;};
                void deleteOperator() { this->operator_ = nullptr;};
                inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
                inline Warned& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline Warned& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<string> expression_ {};
                shared_ptr<string> operator_ {};
                shared_ptr<string> value_ {};
              };

              class Expected : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Expected& obj) { 
                  DARABONBA_PTR_TO_JSON(Expression, expression_);
                  DARABONBA_PTR_TO_JSON(Operator, operator_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, Expected& obj) { 
                  DARABONBA_PTR_FROM_JSON(Expression, expression_);
                  DARABONBA_PTR_FROM_JSON(Operator, operator_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                Expected() = default ;
                Expected(const Expected &) = default ;
                Expected(Expected &&) = default ;
                Expected(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Expected() = default ;
                Expected& operator=(const Expected &) = default ;
                Expected& operator=(Expected &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->expression_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
                // expression Field Functions 
                bool hasExpression() const { return this->expression_ != nullptr;};
                void deleteExpression() { this->expression_ = nullptr;};
                inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
                inline Expected& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


                // operator Field Functions 
                bool hasOperator() const { return this->operator_ != nullptr;};
                void deleteOperator() { this->operator_ = nullptr;};
                inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
                inline Expected& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline Expected& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<string> expression_ {};
                shared_ptr<string> operator_ {};
                shared_ptr<string> value_ {};
              };

              class Critical : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const Critical& obj) { 
                  DARABONBA_PTR_TO_JSON(Expression, expression_);
                  DARABONBA_PTR_TO_JSON(Operator, operator_);
                  DARABONBA_PTR_TO_JSON(Value, value_);
                };
                friend void from_json(const Darabonba::Json& j, Critical& obj) { 
                  DARABONBA_PTR_FROM_JSON(Expression, expression_);
                  DARABONBA_PTR_FROM_JSON(Operator, operator_);
                  DARABONBA_PTR_FROM_JSON(Value, value_);
                };
                Critical() = default ;
                Critical(const Critical &) = default ;
                Critical(Critical &&) = default ;
                Critical(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~Critical() = default ;
                Critical& operator=(const Critical &) = default ;
                Critical& operator=(Critical &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->expression_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
                // expression Field Functions 
                bool hasExpression() const { return this->expression_ != nullptr;};
                void deleteExpression() { this->expression_ = nullptr;};
                inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
                inline Critical& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


                // operator Field Functions 
                bool hasOperator() const { return this->operator_ != nullptr;};
                void deleteOperator() { this->operator_ = nullptr;};
                inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
                inline Critical& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline Critical& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<string> expression_ {};
                shared_ptr<string> operator_ {};
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->critical_ == nullptr
        && this->expected_ == nullptr && this->warned_ == nullptr; };
              // critical Field Functions 
              bool hasCritical() const { return this->critical_ != nullptr;};
              void deleteCritical() { this->critical_ = nullptr;};
              inline const Thresholds::Critical & getCritical() const { DARABONBA_PTR_GET_CONST(critical_, Thresholds::Critical) };
              inline Thresholds::Critical getCritical() { DARABONBA_PTR_GET(critical_, Thresholds::Critical) };
              inline Thresholds& setCritical(const Thresholds::Critical & critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };
              inline Thresholds& setCritical(Thresholds::Critical && critical) { DARABONBA_PTR_SET_RVALUE(critical_, critical) };


              // expected Field Functions 
              bool hasExpected() const { return this->expected_ != nullptr;};
              void deleteExpected() { this->expected_ = nullptr;};
              inline const Thresholds::Expected & getExpected() const { DARABONBA_PTR_GET_CONST(expected_, Thresholds::Expected) };
              inline Thresholds::Expected getExpected() { DARABONBA_PTR_GET(expected_, Thresholds::Expected) };
              inline Thresholds& setExpected(const Thresholds::Expected & expected) { DARABONBA_PTR_SET_VALUE(expected_, expected) };
              inline Thresholds& setExpected(Thresholds::Expected && expected) { DARABONBA_PTR_SET_RVALUE(expected_, expected) };


              // warned Field Functions 
              bool hasWarned() const { return this->warned_ != nullptr;};
              void deleteWarned() { this->warned_ = nullptr;};
              inline const Thresholds::Warned & getWarned() const { DARABONBA_PTR_GET_CONST(warned_, Thresholds::Warned) };
              inline Thresholds::Warned getWarned() { DARABONBA_PTR_GET(warned_, Thresholds::Warned) };
              inline Thresholds& setWarned(const Thresholds::Warned & warned) { DARABONBA_PTR_SET_VALUE(warned_, warned) };
              inline Thresholds& setWarned(Thresholds::Warned && warned) { DARABONBA_PTR_SET_RVALUE(warned_, warned) };


            protected:
              shared_ptr<Thresholds::Critical> critical_ {};
              shared_ptr<Thresholds::Expected> expected_ {};
              shared_ptr<Thresholds::Warned> warned_ {};
            };

            virtual bool empty() const override { return this->referencedSamplesFilter_ == nullptr
        && this->thresholds_ == nullptr && this->type_ == nullptr; };
            // referencedSamplesFilter Field Functions 
            bool hasReferencedSamplesFilter() const { return this->referencedSamplesFilter_ != nullptr;};
            void deleteReferencedSamplesFilter() { this->referencedSamplesFilter_ = nullptr;};
            inline string getReferencedSamplesFilter() const { DARABONBA_PTR_GET_DEFAULT(referencedSamplesFilter_, "") };
            inline CheckingConfig& setReferencedSamplesFilter(string referencedSamplesFilter) { DARABONBA_PTR_SET_VALUE(referencedSamplesFilter_, referencedSamplesFilter) };


            // thresholds Field Functions 
            bool hasThresholds() const { return this->thresholds_ != nullptr;};
            void deleteThresholds() { this->thresholds_ = nullptr;};
            inline const CheckingConfig::Thresholds & getThresholds() const { DARABONBA_PTR_GET_CONST(thresholds_, CheckingConfig::Thresholds) };
            inline CheckingConfig::Thresholds getThresholds() { DARABONBA_PTR_GET(thresholds_, CheckingConfig::Thresholds) };
            inline CheckingConfig& setThresholds(const CheckingConfig::Thresholds & thresholds) { DARABONBA_PTR_SET_VALUE(thresholds_, thresholds) };
            inline CheckingConfig& setThresholds(CheckingConfig::Thresholds && thresholds) { DARABONBA_PTR_SET_RVALUE(thresholds_, thresholds) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline CheckingConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> referencedSamplesFilter_ {};
            shared_ptr<CheckingConfig::Thresholds> thresholds_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->errorHandlers_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->samplingConfig_ == nullptr && this->severity_ == nullptr && this->target_ == nullptr && this->templateCode_ == nullptr; };
          // checkingConfig Field Functions 
          bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
          void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
          inline const Rule::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, Rule::CheckingConfig) };
          inline Rule::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, Rule::CheckingConfig) };
          inline Rule& setCheckingConfig(const Rule::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
          inline Rule& setCheckingConfig(Rule::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Rule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline Rule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // errorHandlers Field Functions 
          bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
          void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
          inline const vector<Rule::ErrorHandlers> & getErrorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<Rule::ErrorHandlers>) };
          inline vector<Rule::ErrorHandlers> getErrorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<Rule::ErrorHandlers>) };
          inline Rule& setErrorHandlers(const vector<Rule::ErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
          inline Rule& setErrorHandlers(vector<Rule::ErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline Rule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Rule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline Rule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // samplingConfig Field Functions 
          bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
          void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
          inline const Rule::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, Rule::SamplingConfig) };
          inline Rule::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, Rule::SamplingConfig) };
          inline Rule& setSamplingConfig(const Rule::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
          inline Rule& setSamplingConfig(Rule::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


          // severity Field Functions 
          bool hasSeverity() const { return this->severity_ != nullptr;};
          void deleteSeverity() { this->severity_ = nullptr;};
          inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
          inline Rule& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline const Rule::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, Rule::Target) };
          inline Rule::Target getTarget() { DARABONBA_PTR_GET(target_, Rule::Target) };
          inline Rule& setTarget(const Rule::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
          inline Rule& setTarget(Rule::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


          // templateCode Field Functions 
          bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
          void deleteTemplateCode() { this->templateCode_ = nullptr;};
          inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
          inline Rule& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


        protected:
          shared_ptr<Rule::CheckingConfig> checkingConfig_ {};
          shared_ptr<string> description_ {};
          shared_ptr<bool> enabled_ {};
          shared_ptr<vector<Rule::ErrorHandlers>> errorHandlers_ {};
          shared_ptr<int64_t> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<int64_t> projectId_ {};
          shared_ptr<Rule::SamplingConfig> samplingConfig_ {};
          shared_ptr<string> severity_ {};
          shared_ptr<Rule::Target> target_ {};
          shared_ptr<string> templateCode_ {};
        };

        class Details : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Details& obj) { 
            DARABONBA_PTR_TO_JSON(CheckedValue, checkedValue_);
            DARABONBA_PTR_TO_JSON(ReferencedValue, referencedValue_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Details& obj) { 
            DARABONBA_PTR_FROM_JSON(CheckedValue, checkedValue_);
            DARABONBA_PTR_FROM_JSON(ReferencedValue, referencedValue_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Details() = default ;
          Details(const Details &) = default ;
          Details(Details &&) = default ;
          Details(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Details() = default ;
          Details& operator=(const Details &) = default ;
          Details& operator=(Details &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->checkedValue_ == nullptr
        && this->referencedValue_ == nullptr && this->status_ == nullptr; };
          // checkedValue Field Functions 
          bool hasCheckedValue() const { return this->checkedValue_ != nullptr;};
          void deleteCheckedValue() { this->checkedValue_ = nullptr;};
          inline string getCheckedValue() const { DARABONBA_PTR_GET_DEFAULT(checkedValue_, "") };
          inline Details& setCheckedValue(string checkedValue) { DARABONBA_PTR_SET_VALUE(checkedValue_, checkedValue) };


          // referencedValue Field Functions 
          bool hasReferencedValue() const { return this->referencedValue_ != nullptr;};
          void deleteReferencedValue() { this->referencedValue_ = nullptr;};
          inline string getReferencedValue() const { DARABONBA_PTR_GET_DEFAULT(referencedValue_, "") };
          inline Details& setReferencedValue(string referencedValue) { DARABONBA_PTR_SET_VALUE(referencedValue_, referencedValue) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Details& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> checkedValue_ {};
          shared_ptr<string> referencedValue_ {};
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->details_ == nullptr && this->id_ == nullptr && this->rule_ == nullptr && this->sample_ == nullptr && this->status_ == nullptr
        && this->taskInstanceId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Results& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline const vector<Results::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Results::Details>) };
        inline vector<Results::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Results::Details>) };
        inline Results& setDetails(const vector<Results::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
        inline Results& setDetails(vector<Results::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Results& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // rule Field Functions 
        bool hasRule() const { return this->rule_ != nullptr;};
        void deleteRule() { this->rule_ = nullptr;};
        inline const Results::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, Results::Rule) };
        inline Results::Rule getRule() { DARABONBA_PTR_GET(rule_, Results::Rule) };
        inline Results& setRule(const Results::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
        inline Results& setRule(Results::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


        // sample Field Functions 
        bool hasSample() const { return this->sample_ != nullptr;};
        void deleteSample() { this->sample_ = nullptr;};
        inline string getSample() const { DARABONBA_PTR_GET_DEFAULT(sample_, "") };
        inline Results& setSample(string sample) { DARABONBA_PTR_SET_VALUE(sample_, sample) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Results& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskInstanceId Field Functions 
        bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
        void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
        inline int64_t getTaskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
        inline Results& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<vector<Results::Details>> details_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<Results::Rule> rule_ {};
        shared_ptr<string> sample_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int64_t> taskInstanceId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->id_ == nullptr && this->parameters_ == nullptr && this->projectId_ == nullptr && this->results_ == nullptr
        && this->status_ == nullptr && this->task_ == nullptr && this->triggerContext_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline DataQualityEvaluationTaskInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline DataQualityEvaluationTaskInstance& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataQualityEvaluationTaskInstance& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline DataQualityEvaluationTaskInstance& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DataQualityEvaluationTaskInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<DataQualityEvaluationTaskInstance::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DataQualityEvaluationTaskInstance::Results>) };
      inline vector<DataQualityEvaluationTaskInstance::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DataQualityEvaluationTaskInstance::Results>) };
      inline DataQualityEvaluationTaskInstance& setResults(const vector<DataQualityEvaluationTaskInstance::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline DataQualityEvaluationTaskInstance& setResults(vector<DataQualityEvaluationTaskInstance::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DataQualityEvaluationTaskInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // task Field Functions 
      bool hasTask() const { return this->task_ != nullptr;};
      void deleteTask() { this->task_ = nullptr;};
      inline const DataQualityEvaluationTaskInstance::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, DataQualityEvaluationTaskInstance::Task) };
      inline DataQualityEvaluationTaskInstance::Task getTask() { DARABONBA_PTR_GET(task_, DataQualityEvaluationTaskInstance::Task) };
      inline DataQualityEvaluationTaskInstance& setTask(const DataQualityEvaluationTaskInstance::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
      inline DataQualityEvaluationTaskInstance& setTask(DataQualityEvaluationTaskInstance::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


      // triggerContext Field Functions 
      bool hasTriggerContext() const { return this->triggerContext_ != nullptr;};
      void deleteTriggerContext() { this->triggerContext_ = nullptr;};
      inline string getTriggerContext() const { DARABONBA_PTR_GET_DEFAULT(triggerContext_, "") };
      inline DataQualityEvaluationTaskInstance& setTriggerContext(string triggerContext) { DARABONBA_PTR_SET_VALUE(triggerContext_, triggerContext) };


    protected:
      // The creation time.
      shared_ptr<int64_t> createTime_ {};
      // The end time of the instance.
      shared_ptr<int64_t> finishTime_ {};
      // The ID of the data quality monitoring instance.
      shared_ptr<int64_t> id_ {};
      // Data quality verification execution parameters in JSON format. The available keys are as follows:
      // - triggerTime: the millisecond timestamp of the trigger time. The baseline time of the $[yyyymmdd] expression in the data range of data quality monitoring. Required.
      shared_ptr<string> parameters_ {};
      // The ID of the workspace.
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<vector<DataQualityEvaluationTaskInstance::Results>> results_ {};
      // The status of the data quality monitoring instance.
      // - Running: Verifying
      // - Error: A rule verification Error occurred.
      // - Passed: all rules are verified
      // - Warned: normal alarm threshold triggered by rules
      // - Critical: Threshold for serious alerts triggered by rules
      shared_ptr<string> status_ {};
      // The monitor.
      shared_ptr<DataQualityEvaluationTaskInstance::Task> task_ {};
      // The context information when the instance is triggered, in JSON format. The possible keys are as follows:
      // - TriggerClient: the trigger source of the data quality monitoring instance, such as CWF2 (scheduling system), may be added later.
      // - TriggerClientId: associated with a specific business resource in the source system. For example, if TriggerClient is CWF2, the ID of the scheduling task is recorded here.
      shared_ptr<string> triggerContext_ {};
    };

    virtual bool empty() const override { return this->dataQualityEvaluationTaskInstance_ == nullptr
        && this->requestId_ == nullptr; };
    // dataQualityEvaluationTaskInstance Field Functions 
    bool hasDataQualityEvaluationTaskInstance() const { return this->dataQualityEvaluationTaskInstance_ != nullptr;};
    void deleteDataQualityEvaluationTaskInstance() { this->dataQualityEvaluationTaskInstance_ = nullptr;};
    inline const GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance & getDataQualityEvaluationTaskInstance() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTaskInstance_, GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance) };
    inline GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance getDataQualityEvaluationTaskInstance() { DARABONBA_PTR_GET(dataQualityEvaluationTaskInstance_, GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance) };
    inline GetDataQualityEvaluationTaskInstanceResponseBody& setDataQualityEvaluationTaskInstance(const GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance & dataQualityEvaluationTaskInstance) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskInstance_, dataQualityEvaluationTaskInstance) };
    inline GetDataQualityEvaluationTaskInstanceResponseBody& setDataQualityEvaluationTaskInstance(GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance && dataQualityEvaluationTaskInstance) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTaskInstance_, dataQualityEvaluationTaskInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityEvaluationTaskInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the monitor instance.
    shared_ptr<GetDataQualityEvaluationTaskInstanceResponseBody::DataQualityEvaluationTaskInstance> dataQualityEvaluationTaskInstance_ {};
    // The request ID. You can locate logs and troubleshoot issues based on the ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
