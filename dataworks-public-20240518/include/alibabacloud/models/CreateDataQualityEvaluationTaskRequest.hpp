// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUEST_HPP_
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
  class CreateDataQualityEvaluationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityRules, dataQualityRules_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Hooks, hooks_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notifications, notifications_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityRules, dataQualityRules_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    CreateDataQualityEvaluationTaskRequest() = default ;
    CreateDataQualityEvaluationTaskRequest(const CreateDataQualityEvaluationTaskRequest &) = default ;
    CreateDataQualityEvaluationTaskRequest(CreateDataQualityEvaluationTaskRequest &&) = default ;
    CreateDataQualityEvaluationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskRequest() = default ;
    CreateDataQualityEvaluationTaskRequest& operator=(const CreateDataQualityEvaluationTaskRequest &) = default ;
    CreateDataQualityEvaluationTaskRequest& operator=(CreateDataQualityEvaluationTaskRequest &&) = default ;
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
      // The list of scheduling task IDs. This parameter is valid only when Type is set to ByScheduledTaskInstance.
      shared_ptr<vector<int64_t>> taskIds_ {};
      // The trigger type for quality monitoring. Valid values:
      // - ByManual: manual trigger. This is the default value.
      // - ByScheduledTaskInstance: triggered by an associated scheduled task instance.
      shared_ptr<string> type_ {};
    };

    class Target : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Target& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_TO_JSON(PartitionSpec, partitionSpec_);
        DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      };
      friend void from_json(const Darabonba::Json& j, Target& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
        DARABONBA_PTR_FROM_JSON(PartitionSpec, partitionSpec_);
        DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
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
        && this->partitionSpec_ == nullptr && this->tableGuid_ == nullptr; };
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


    protected:
      // The type of the database to which the table belongs. Valid values:
      // 
      // - maxcompute
      // - hologres
      // - cdh
      // - analyticdb_for_mysql
      // - starrocks
      // - emr
      // - analyticdb_for_postgresql
      // 
      // This parameter is required.
      shared_ptr<string> databaseType_ {};
      // The partition settings of the partitioned table.
      shared_ptr<string> partitionSpec_ {};
      // The unique ID of the table in DataWorks Data Map.
      // 
      // This parameter is required.
      shared_ptr<string> tableGuid_ {};
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
          // The additional parameter settings for sending alerts. The value is in JSON format. The following keys are supported:
          shared_ptr<string> extension_ {};
          // The type of the alert recipient.
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
          // The notification methods.
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
        // The notification methods.
        shared_ptr<vector<NotificationsItem::NotificationChannels>> notificationChannels_ {};
        // The alert recipient settings.
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
      // The notification trigger condition. When this condition is met, a message notification is triggered. Currently, only two types of conditional expressions are supported:
      // 
      // Specify a single combination of rule severity type and rule check status, such as `${severity} == "High" AND ${status} == "Critical"`. This means that among the executed rules, if a rule with severity High has a check result of Critical, the condition is met.
      // Specify multiple combinations of rule severity type and rule check status, such as `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. This means that among the executed rules, if a rule with severity High has a check result of Critical, or a rule with severity Normal has a check result of Critical, or a rule with severity Normal has a check result of Error, the condition is met. The enumeration values of severity in the conditional expression are consistent with the severity enumeration in DataQualityRule, and the enumeration values of status are consistent with the status enumeration in DataQualityResult.
      shared_ptr<string> condition_ {};
      // The notification settings.
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
      // The hook trigger condition. When this condition is met, the hook action is triggered. Only two types of conditional expressions are supported:
      // 1. Specify a single combination of rule severity type and rule check status, such as `${severity} == "High" AND ${status} == "Critical"`. This means that if any executed rule with a severity of High has a check result of Critical, the condition is met.
      // 2. Specify multiple combinations of rule severity type and rule check status, such as `(${severity} == "High" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Critical") OR (${severity} == "Normal" AND ${status} == "Error")`. This means that the condition is met if any executed rule with a severity of High has a check result of Critical, or any rule with a severity of Normal has a check result of Critical, or any rule with a severity of Normal has a check result of Error. The enumerated values of severity in the conditional expression are consistent with those of severity in DataQualityRule, and the enumerated values of status are consistent with those of status in DataQualityResult.
      shared_ptr<string> condition_ {};
      // The hook type. Currently, only one type is supported:
      shared_ptr<string> type_ {};
    };

    class DataQualityRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataQualityRules& obj) { 
        DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, DataQualityRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      };
      DataQualityRules() = default ;
      DataQualityRules(const DataQualityRules &) = default ;
      DataQualityRules(DataQualityRules &&) = default ;
      DataQualityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataQualityRules() = default ;
      DataQualityRules& operator=(const DataQualityRules &) = default ;
      DataQualityRules& operator=(DataQualityRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        // The name of the sampling metric. Valid values:
        // - Count: the number of table rows.
        // - Min: the minimum value of the field.
        // - Max: the maximum value of the field.
        // - Avg: the average value of the field.
        // - DistinctCount: the number of distinct values in the field.
        // - DistinctPercent: the ratio of distinct values in the field to the total number of rows.
        // - DuplicatedCount: the number of duplicate values in the field.
        // - DuplicatedPercent: the ratio of duplicate values in the field to the total number of rows.
        // - TableSize: the table size.
        // - NullValueCount: the number of rows where the field is null.
        // - NullValuePercent: the ratio of rows where the field is null.
        // - GroupCount: the count of rows for each value after aggregation by field value.
        // - CountNotIn: the number of rows that do not match the enumerated values.
        // - CountDistinctNotIn: the number of distinct values that do not match the enumerated values.
        // - UserDefinedSql: sample collection through a custom SQL statement.
        shared_ptr<string> metric_ {};
        // The parameters required for sample collection.
        shared_ptr<string> metricParameters_ {};
        // The filter condition used to perform secondary filtering on data that is not of interest during sampling. The maximum length is 16,777,215 characters.
        shared_ptr<string> samplingFilter_ {};
        // The runtime parameter setting statements that are executed before the sampling statement. The maximum length is 1,000 characters. Currently, only MaxCompute is supported.
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
        // The SQL statement specified by the user to filter problematic data. This is required for custom SQL rules.
        shared_ptr<string> errorDataFilter_ {};
        // The handler type:
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
            // The threshold expression.
            // 
            // Rules of the fluctuation type must use expressions to represent fluctuation thresholds. Examples:
            // 
            // - Fluctuation increase greater than 0.01: $checkValue > 0.01
            // - Fluctuation decrease greater than 0.01: $checkValue < -0.01
            // - Absolute value of fluctuation: abs($checkValue) > 0.01
            // 
            // Rules of the fixed value type can also use expressions to configure thresholds. If both are configured, the expression takes precedence over Operator and Value.
            shared_ptr<string> expression_ {};
            // The comparison operator.
            shared_ptr<string> operator_ {};
            // The threshold value.
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
            // The threshold expression.
            // 
            // Rules of the fluctuation type must use expressions to represent fluctuation thresholds. Examples:
            // 
            // - Fluctuation increase greater than 0.01: $checkValue > 0.01
            // - Fluctuation decrease greater than 0.01: $checkValue < -0.01
            // - Absolute value of fluctuation: abs($checkValue) > 0.01
            // 
            // Rules of the fixed value type can also use expressions to configure thresholds. If both are configured, the expression takes precedence over Operator and Value.
            shared_ptr<string> expression_ {};
            // The comparison operator.
            shared_ptr<string> operator_ {};
            // The threshold value.
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
            // The threshold expression.
            // 
            // Rules of the fluctuation type must use expressions to represent fluctuation thresholds. Examples:
            // 
            // - Fluctuation increase greater than 0.01: $checkValue > 0.01
            // - Fluctuation decrease greater than 0.01: $checkValue < -0.01
            // - Absolute value of fluctuation: abs($checkValue) > 0.01
            // 
            // Rules of the fixed value type can also use expressions to configure thresholds. If both are configured, the expression takes precedence over Operator and Value.
            shared_ptr<string> expression_ {};
            // The comparison operator.
            shared_ptr<string> operator_ {};
            // The threshold value.
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
          // The threshold settings for critical warnings.
          shared_ptr<Thresholds::Critical> critical_ {};
          // The expected threshold settings.
          shared_ptr<Thresholds::Expected> expected_ {};
          // The threshold settings for normal warnings.
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
        // The expression that specifies how to query reference samples. Some threshold types require querying reference samples and then aggregating the values of the reference samples to derive the threshold for comparison.
        shared_ptr<string> referencedSamplesFilter_ {};
        // The verification threshold settings.
        shared_ptr<CheckingConfig::Thresholds> thresholds_ {};
        // The threshold calculation method.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->errorHandlers_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->samplingConfig_ == nullptr && this->severity_ == nullptr && this->templateCode_ == nullptr; };
      // checkingConfig Field Functions 
      bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
      void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
      inline const DataQualityRules::CheckingConfig & getCheckingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, DataQualityRules::CheckingConfig) };
      inline DataQualityRules::CheckingConfig getCheckingConfig() { DARABONBA_PTR_GET(checkingConfig_, DataQualityRules::CheckingConfig) };
      inline DataQualityRules& setCheckingConfig(const DataQualityRules::CheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
      inline DataQualityRules& setCheckingConfig(DataQualityRules::CheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DataQualityRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DataQualityRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // errorHandlers Field Functions 
      bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
      void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
      inline const vector<DataQualityRules::ErrorHandlers> & getErrorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<DataQualityRules::ErrorHandlers>) };
      inline vector<DataQualityRules::ErrorHandlers> getErrorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<DataQualityRules::ErrorHandlers>) };
      inline DataQualityRules& setErrorHandlers(const vector<DataQualityRules::ErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
      inline DataQualityRules& setErrorHandlers(vector<DataQualityRules::ErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline DataQualityRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DataQualityRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // samplingConfig Field Functions 
      bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
      void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
      inline const DataQualityRules::SamplingConfig & getSamplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, DataQualityRules::SamplingConfig) };
      inline DataQualityRules::SamplingConfig getSamplingConfig() { DARABONBA_PTR_GET(samplingConfig_, DataQualityRules::SamplingConfig) };
      inline DataQualityRules& setSamplingConfig(const DataQualityRules::SamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
      inline DataQualityRules& setSamplingConfig(DataQualityRules::SamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline DataQualityRules& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline DataQualityRules& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      // The sample verification settings.
      shared_ptr<DataQualityRules::CheckingConfig> checkingConfig_ {};
      // The description of the data quality rule.
      shared_ptr<string> description_ {};
      // Specifies whether the quality rule is enabled.
      shared_ptr<bool> enabled_ {};
      // The list of error handlers for quality rule verification issues.
      shared_ptr<vector<DataQualityRules::ErrorHandlers>> errorHandlers_ {};
      // The rule ID.
      shared_ptr<int64_t> id_ {};
      // The name of the data quality rule.
      shared_ptr<string> name_ {};
      // The parameters required for sample collection.
      shared_ptr<DataQualityRules::SamplingConfig> samplingConfig_ {};
      // The severity level of the rule for the business (corresponding to strong or weak rules on the page). Valid values:
      shared_ptr<string> severity_ {};
      // The unique identifier of the rule template referenced by the rule.
      shared_ptr<string> templateCode_ {};
    };

    virtual bool empty() const override { return this->dataQualityRules_ == nullptr
        && this->dataSourceId_ == nullptr && this->description_ == nullptr && this->hooks_ == nullptr && this->name_ == nullptr && this->notifications_ == nullptr
        && this->projectId_ == nullptr && this->runtimeConf_ == nullptr && this->target_ == nullptr && this->trigger_ == nullptr; };
    // dataQualityRules Field Functions 
    bool hasDataQualityRules() const { return this->dataQualityRules_ != nullptr;};
    void deleteDataQualityRules() { this->dataQualityRules_ = nullptr;};
    inline const vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules> & getDataQualityRules() const { DARABONBA_PTR_GET_CONST(dataQualityRules_, vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules>) };
    inline vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules> getDataQualityRules() { DARABONBA_PTR_GET(dataQualityRules_, vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules>) };
    inline CreateDataQualityEvaluationTaskRequest& setDataQualityRules(const vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules> & dataQualityRules) { DARABONBA_PTR_SET_VALUE(dataQualityRules_, dataQualityRules) };
    inline CreateDataQualityEvaluationTaskRequest& setDataQualityRules(vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules> && dataQualityRules) { DARABONBA_PTR_SET_RVALUE(dataQualityRules_, dataQualityRules) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateDataQualityEvaluationTaskRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityEvaluationTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hooks Field Functions 
    bool hasHooks() const { return this->hooks_ != nullptr;};
    void deleteHooks() { this->hooks_ = nullptr;};
    inline const vector<CreateDataQualityEvaluationTaskRequest::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<CreateDataQualityEvaluationTaskRequest::Hooks>) };
    inline vector<CreateDataQualityEvaluationTaskRequest::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<CreateDataQualityEvaluationTaskRequest::Hooks>) };
    inline CreateDataQualityEvaluationTaskRequest& setHooks(const vector<CreateDataQualityEvaluationTaskRequest::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
    inline CreateDataQualityEvaluationTaskRequest& setHooks(vector<CreateDataQualityEvaluationTaskRequest::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityEvaluationTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifications Field Functions 
    bool hasNotifications() const { return this->notifications_ != nullptr;};
    void deleteNotifications() { this->notifications_ = nullptr;};
    inline const CreateDataQualityEvaluationTaskRequest::Notifications & getNotifications() const { DARABONBA_PTR_GET_CONST(notifications_, CreateDataQualityEvaluationTaskRequest::Notifications) };
    inline CreateDataQualityEvaluationTaskRequest::Notifications getNotifications() { DARABONBA_PTR_GET(notifications_, CreateDataQualityEvaluationTaskRequest::Notifications) };
    inline CreateDataQualityEvaluationTaskRequest& setNotifications(const CreateDataQualityEvaluationTaskRequest::Notifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
    inline CreateDataQualityEvaluationTaskRequest& setNotifications(CreateDataQualityEvaluationTaskRequest::Notifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityEvaluationTaskRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeConf Field Functions 
    bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
    void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
    inline string getRuntimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
    inline CreateDataQualityEvaluationTaskRequest& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const CreateDataQualityEvaluationTaskRequest::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, CreateDataQualityEvaluationTaskRequest::Target) };
    inline CreateDataQualityEvaluationTaskRequest::Target getTarget() { DARABONBA_PTR_GET(target_, CreateDataQualityEvaluationTaskRequest::Target) };
    inline CreateDataQualityEvaluationTaskRequest& setTarget(const CreateDataQualityEvaluationTaskRequest::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateDataQualityEvaluationTaskRequest& setTarget(CreateDataQualityEvaluationTaskRequest::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const CreateDataQualityEvaluationTaskRequest::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, CreateDataQualityEvaluationTaskRequest::Trigger) };
    inline CreateDataQualityEvaluationTaskRequest::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, CreateDataQualityEvaluationTaskRequest::Trigger) };
    inline CreateDataQualityEvaluationTaskRequest& setTrigger(const CreateDataQualityEvaluationTaskRequest::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline CreateDataQualityEvaluationTaskRequest& setTrigger(CreateDataQualityEvaluationTaskRequest::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The list of data quality rules associated with the data quality monitoring task. If DataQualityRule.Id is specified, the rule corresponding to the ID is associated with the new quality monitoring task. If DataQualityRule.Id is not specified, a new rule is created based on the other fields and associated with the new quality monitoring task.
    shared_ptr<vector<CreateDataQualityEvaluationTaskRequest::DataQualityRules>> dataQualityRules_ {};
    // The data source ID. You can call [ListDataSources](https://help.aliyun.com/document_detail/211431.html) to obtain the data source ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataSourceId_ {};
    // The description of the data quality monitor task.
    shared_ptr<string> description_ {};
    // The callback settings.
    shared_ptr<vector<CreateDataQualityEvaluationTaskRequest::Hooks>> hooks_ {};
    // The name of the data quality monitor task.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The notification subscription configuration.
    shared_ptr<CreateDataQualityEvaluationTaskRequest::Notifications> notifications_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace management page to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The extended configuration. The value is a JSON-formatted string. This parameter takes effect only for EMR-type data quality monitors.
    shared_ptr<string> runtimeConf_ {};
    // The monitored object of the data quality monitor.
    // 
    // This parameter is required.
    shared_ptr<CreateDataQualityEvaluationTaskRequest::Target> target_ {};
    // The trigger configuration of the data quality check task.
    shared_ptr<CreateDataQualityEvaluationTaskRequest::Trigger> trigger_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
