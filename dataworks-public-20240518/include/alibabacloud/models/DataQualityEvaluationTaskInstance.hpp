// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYEVALUATIONTASKINSTANCE_HPP_
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
  class DataQualityEvaluationTaskInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
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
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(Hooks, hooks_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Notifications, notifications_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(RuntimeConf, runtimeConf_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(Hooks, hooks_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Notifications, notifications_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(RuntimeConf, runtimeConf_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
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
        shared_ptr<vector<int64_t>> taskIds_ {};
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
        shared_ptr<string> databaseType_ {};
        shared_ptr<string> partitionSpec_ {};
        shared_ptr<string> tableGuid_ {};
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
            shared_ptr<string> extension_ {};
            shared_ptr<string> receiverType_ {};
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
          shared_ptr<vector<NotificationsItem::NotificationChannels>> notificationChannels_ {};
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
        shared_ptr<string> condition_ {};
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
        shared_ptr<string> condition_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->hooks_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notifications_ == nullptr && this->projectId_ == nullptr
        && this->runtimeConf_ == nullptr && this->target_ == nullptr && this->tenantId_ == nullptr && this->trigger_ == nullptr; };
      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline Task& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


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
      inline const vector<Task::Notifications> & getNotifications() const { DARABONBA_PTR_GET_CONST(notifications_, vector<Task::Notifications>) };
      inline vector<Task::Notifications> getNotifications() { DARABONBA_PTR_GET(notifications_, vector<Task::Notifications>) };
      inline Task& setNotifications(const vector<Task::Notifications> & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
      inline Task& setNotifications(vector<Task::Notifications> && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


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


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline Task& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // trigger Field Functions 
      bool hasTrigger() const { return this->trigger_ != nullptr;};
      void deleteTrigger() { this->trigger_ = nullptr;};
      inline const Task::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, Task::Trigger) };
      inline Task::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, Task::Trigger) };
      inline Task& setTrigger(const Task::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
      inline Task& setTrigger(Task::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    protected:
      shared_ptr<int64_t> dataSourceId_ {};
      shared_ptr<vector<Task::Hooks>> hooks_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> name_ {};
      shared_ptr<vector<Task::Notifications>> notifications_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> runtimeConf_ {};
      shared_ptr<Task::Target> target_ {};
      shared_ptr<int64_t> tenantId_ {};
      shared_ptr<Task::Trigger> trigger_ {};
    };

    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->id_ == nullptr && this->status_ == nullptr && this->task_ == nullptr; };
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


  protected:
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<int64_t> finishTime_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> status_ {};
    shared_ptr<DataQualityEvaluationTaskInstance::Task> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
