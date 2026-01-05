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
        // The IDs of scheduling tasks. This parameter is valid only if you set Type to ByScheduledTaskInstance.
        shared_ptr<vector<int64_t>> taskIds_ {};
        // The trigger type of the monitor. Valid values:
        // 
        // *   ByManual: The monitor is manually triggered.
        // *   ByScheduledTaskInstance: The monitor is triggered by associated scheduling tasks.
        // *   ByQualityNode: The monitor is triggered by created data quality monitoring nodes.
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
        // The type of the database to which the table belongs. Valid values:
        // 
        // *   maxcompute
        // *   hologres
        // *   cdh
        // *   analyticdb_for_mysql
        // *   starrocks
        // *   emr
        // *   analyticdb_for_postgresql
        shared_ptr<string> databaseType_ {};
        // Data quality monitoring partition range settings.
        shared_ptr<string> partitionSpec_ {};
        // The ID of the table in Data Map.
        shared_ptr<string> tableGuid_ {};
        // The type of the monitoring object.
        // 
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
            // The extended information.
            shared_ptr<string> extension_ {};
            // The additional parameters that are required when alerts are sent. The parameters are JSON-formatted strings. The following keys are supported:
            // 
            // *   atAll: specifies that all members in a group are mentioned when alerts are sent by using DingTalk. This parameter is valid only if you set ReceiverType to DingdingUrl.
            // 
            // Valid values:
            // 
            // *   WebhookUrl
            // *   FeishuUrl
            // *   DingdingUrl
            // *   WeixinUrl
            // *   AliUid
            shared_ptr<string> receiverType_ {};
            // The alert recipients.
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
            // The alert notification methods.
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
          // The alert notification methods.
          shared_ptr<vector<NotificationsItem::NotificationChannels>> notificationChannels_ {};
          // The configurations of alert recipients.
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
        // *   Specify multiple groups of rule strength types and rule check status, such as `(${severity} == "High"AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. In this expression, the hook trigger condition is met if severity is High and status is Critical, severity is Normal and status is Critical, or severity is Normal and status is Error. The enumeration of severity in a conditional expression is the same as the enumeration of severity in DataQualityRule. The enumeration of status in a conditional expression is the same as the enumeration of status in DataQualityResult.
        shared_ptr<string> condition_ {};
        // The configurations of alert notifications.
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
        // The hook type. Only one hook type is supported.
        // 
        // *   BlockTaskInstance: Blocks the running of scheduling tasks. A monitor is triggered by scheduling tasks. After a monitor finishes running, the monitor determines whether to block the running of scheduling tasks based on the hook condition.
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
      // The ID of the data source used for the monitor.
      shared_ptr<int64_t> dataSourceId_ {};
      // The description of the monitor.
      shared_ptr<string> description_ {};
      // The hook.
      shared_ptr<vector<DataQualityEvaluationTask::Hooks>> hooks_ {};
      // The ID of the data quality monitor.
      shared_ptr<int64_t> id_ {};
      // The name of the monitor.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The configurations of alert notifications.
      shared_ptr<DataQualityEvaluationTask::Notifications> notifications_ {};
      // The workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // Extended configuration, JSON-formatted string, takes effect only for EMR-type data quality monitoring.
      // 
      // - queue: the yarn queue used when performing EMR data quality verification. The default queue is the queue configured for this project.
      // - sqlEngine: SQL engine used when performing EMR data verification
      //     - HIVE_ SQL
      //     - SPARK_ SQL
      shared_ptr<string> runtimeConf_ {};
      // The monitored object of the monitor.
      shared_ptr<DataQualityEvaluationTask::Target> target_ {};
      // The trigger configuration of the monitor.
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
    // The details of the monitor.
    shared_ptr<GetDataQualityEvaluationTaskResponseBody::DataQualityEvaluationTask> dataQualityEvaluationTask_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
