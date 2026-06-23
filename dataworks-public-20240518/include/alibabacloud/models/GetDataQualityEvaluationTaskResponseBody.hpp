// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYEVALUATIONTASKRESPONSEBODY_HPP_
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
  class GetDataQualityEvaluationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityEvaluationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTask, dataQualityEvaluationTask_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityEvaluationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTask, dataQualityEvaluationTask_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataQualityEvaluationTaskResponseBody() = default ;
    GetDataQualityEvaluationTaskResponseBody(const GetDataQualityEvaluationTaskResponseBody &) = default ;
    GetDataQualityEvaluationTaskResponseBody(GetDataQualityEvaluationTaskResponseBody &&) = default ;
    GetDataQualityEvaluationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityEvaluationTaskResponseBody() = default ;
    GetDataQualityEvaluationTaskResponseBody& operator=(const GetDataQualityEvaluationTaskResponseBody &) = default ;
    GetDataQualityEvaluationTaskResponseBody& operator=(GetDataQualityEvaluationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataQualityEvaluationTask : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTask& obj) { 
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
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
      friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTask& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
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
      DataQualityEvaluationTask() = default ;
      DataQualityEvaluationTask(const DataQualityEvaluationTask &) = default ;
      DataQualityEvaluationTask(DataQualityEvaluationTask &&) = default ;
      DataQualityEvaluationTask(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityEvaluationTask() = default ;
      DataQualityEvaluationTask& operator=(const DataQualityEvaluationTask &) = default ;
      DataQualityEvaluationTask& operator=(DataQualityEvaluationTask &&) = default ;
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
        // List of scheduled task IDs. Valid when Type is ByScheduledTaskInstance.
        shared_ptr<vector<int64_t>> taskIds_ {};
        // Quality monitoring trigger type:
        // 
        // - ByManual: Manual trigger
        // - ByScheduledTaskInstance: Scheduled task trigger
        // - ByQualityNode: Quality node trigger
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
        // Database type to which the table belongs:
        // - maxcompute
        // - hologres
        // - cdh
        // - analyticdb_for_mysql
        // - starrocks
        // - emr
        // - analyticdb_for_postgresql
        shared_ptr<string> databaseType_ {};
        // Partition range setting for data quality monitoring.
        shared_ptr<string> partitionSpec_ {};
        // Unique ID of the table in Data Map.
        shared_ptr<string> tableGuid_ {};
        // Monitoring object type.
        // - Table: Table.
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
            // Extended information.
            shared_ptr<string> extension_ {};
            // Additional parameter settings when sending alerts. JSON format. Supported keys are as follows:
            // 
            // - atAll: Whether to @everyone in the group when sending DingTalk alerts. Takes effect when ReceiverType is DingdingUrl.
            shared_ptr<string> receiverType_ {};
            // Alert receiver.
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
            // Notification method.
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
          // Notification method.
          shared_ptr<vector<NotificationsItem::NotificationChannels>> notificationChannels_ {};
          // Alert receiver settings.
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
        // Notification trigger condition. When this condition is met, the message notification is triggered. Currently, only two types of conditional expressions are supported:
        // 
        // - Specify a single group of rule severity type and rule validation status, e.g., `${severity} == "High" AND ${status} == "Critical"`, which means the condition is met if any executed rule with severity High has a validation result of Critical.
        // - Specify multiple groups of rule severity types and rule validation statuses, e.g., `(${severity} == "High"AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`, which means the condition is met if any executed rule has severity High with validation result Critical, or severity Normal with validation result Critical, or severity Normal with validation result Error. The severity enum in the conditional expression is consistent with the severity enum in DataQualityRule, and the status enum is consistent with the status in DataQualityResult.
        shared_ptr<string> condition_ {};
        // Notification settings.
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
        // Hook trigger condition. When this condition is met, the hook action is triggered. Currently, only two types of conditional expressions are supported:
        // 
        // - Specify a single group of rule severity type and rule validation status, e.g., `${severity} == "High" AND ${status} == "Critical"`, which means the condition is met if any executed rule with severity High has a validation result of Critical.
        // - Specify multiple groups of rule severity types and rule validation statuses, e.g., `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`, which means the condition is met if any executed rule has severity High with validation result Critical, or severity Normal with validation result Critical, or severity Normal with validation result Error. The severity enum in the conditional expression is consistent with the severity enum in DataQualityRule, and the status enum is consistent with the status in DataQualityResult.
        shared_ptr<string> condition_ {};
        // Hook type. Currently, only one type is supported:
        // 
        // - BlockTaskInstance: Blocks the scheduled task from continuing to run. When data quality monitoring is triggered by a scheduled task, after the data quality monitoring completes, Hook.Condition is used to determine whether to block the scheduled task from continuing to run.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->description_ == nullptr && this->hooks_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notifications_ == nullptr
        && this->projectId_ == nullptr && this->runtimeConf_ == nullptr && this->target_ == nullptr && this->trigger_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline DataQualityEvaluationTask& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataQualityEvaluationTask& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hooks Field Functions 
      bool hasHooks() const { return this->hooks_ != nullptr;};
      void deleteHooks() { this->hooks_ = nullptr;};
      inline const vector<DataQualityEvaluationTask::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<DataQualityEvaluationTask::Hooks>) };
      inline vector<DataQualityEvaluationTask::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<DataQualityEvaluationTask::Hooks>) };
      inline DataQualityEvaluationTask& setHooks(const vector<DataQualityEvaluationTask::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
      inline DataQualityEvaluationTask& setHooks(vector<DataQualityEvaluationTask::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataQualityEvaluationTask& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataQualityEvaluationTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notifications Field Functions 
      bool hasNotifications() const { return this->notifications_ != nullptr;};
      void deleteNotifications() { this->notifications_ = nullptr;};
      inline const DataQualityEvaluationTask::Notifications & getNotifications() const { DARABONBA_PTR_GET_CONST(notifications_, DataQualityEvaluationTask::Notifications) };
      inline DataQualityEvaluationTask::Notifications getNotifications() { DARABONBA_PTR_GET(notifications_, DataQualityEvaluationTask::Notifications) };
      inline DataQualityEvaluationTask& setNotifications(const DataQualityEvaluationTask::Notifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
      inline DataQualityEvaluationTask& setNotifications(DataQualityEvaluationTask::Notifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline DataQualityEvaluationTask& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // runtimeConf Field Functions 
      bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
      void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
      inline string getRuntimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
      inline DataQualityEvaluationTask& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline const DataQualityEvaluationTask::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, DataQualityEvaluationTask::Target) };
      inline DataQualityEvaluationTask::Target getTarget() { DARABONBA_PTR_GET(target_, DataQualityEvaluationTask::Target) };
      inline DataQualityEvaluationTask& setTarget(const DataQualityEvaluationTask::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
      inline DataQualityEvaluationTask& setTarget(DataQualityEvaluationTask::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const DataQualityEvaluationTask::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, DataQualityEvaluationTask::Trigger) };
      inline DataQualityEvaluationTask::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, DataQualityEvaluationTask::Trigger) };
      inline DataQualityEvaluationTask& setTrigger(const DataQualityEvaluationTask::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline DataQualityEvaluationTask& setTrigger(DataQualityEvaluationTask::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    protected:
      // Data source ID used by the quality monitoring task.
      shared_ptr<int64_t> dataSourceId_ {};
      // Description of the quality monitoring task.
      shared_ptr<string> description_ {};
      // Callback settings.
      shared_ptr<vector<DataQualityEvaluationTask::Hooks>> hooks_ {};
      // Data quality monitoring ID.
      shared_ptr<int64_t> id_ {};
      // Name of the quality monitoring task.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // Notification subscription configuration.
      shared_ptr<DataQualityEvaluationTask::Notifications> notifications_ {};
      // Workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // Extended configuration. A JSON-formatted string. Only takes effect for EMR-type data quality monitoring.
      // 
      // - queue: The YARN queue used when executing EMR data quality validation. Defaults to the queue configured for the current project.
      // - sqlEngine: The SQL engine used when executing EMR data validation.
      //   + HIVE_SQL
      //   + SPARK_SQL
      shared_ptr<string> runtimeConf_ {};
      // Data quality monitoring object.
      shared_ptr<DataQualityEvaluationTask::Target> target_ {};
      // Trigger configuration of the data quality validation task.
      shared_ptr<DataQualityEvaluationTask::Trigger> trigger_ {};
    };

    virtual bool empty() const override { return this->dataQualityEvaluationTask_ == nullptr
        && this->requestId_ == nullptr; };
    // dataQualityEvaluationTask Field Functions 
    bool hasDataQualityEvaluationTask() const { return this->dataQualityEvaluationTask_ != nullptr;};
    void deleteDataQualityEvaluationTask() { this->dataQualityEvaluationTask_ = nullptr;};
    inline const GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask & getDataQualityEvaluationTask() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTask_, GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask) };
    inline GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask getDataQualityEvaluationTask() { DARABONBA_PTR_GET(dataQualityEvaluationTask_, GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask) };
    inline GetDataQualityEvaluationTaskResponseBody& setDataQualityEvaluationTask(const GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask & dataQualityEvaluationTask) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTask_, dataQualityEvaluationTask) };
    inline GetDataQualityEvaluationTaskResponseBody& setDataQualityEvaluationTask(GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask && dataQualityEvaluationTask) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTask_, dataQualityEvaluationTask) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataQualityEvaluationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Data quality monitoring details.
    shared_ptr<GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask> dataQualityEvaluationTask_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
