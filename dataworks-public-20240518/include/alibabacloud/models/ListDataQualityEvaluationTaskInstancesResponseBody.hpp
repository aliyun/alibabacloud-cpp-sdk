// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODY_HPP_
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
  class ListDataQualityEvaluationTaskInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTaskInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityEvaluationTaskInstancesResponseBody() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBody(const ListDataQualityEvaluationTaskInstancesResponseBody &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBody(ListDataQualityEvaluationTaskInstancesResponseBody &&) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTaskInstancesResponseBody() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBody& operator=(const ListDataQualityEvaluationTaskInstancesResponseBody &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBody& operator=(ListDataQualityEvaluationTaskInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskInstances, dataQualityEvaluationTaskInstances_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskInstances, dataQualityEvaluationTaskInstances_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityEvaluationTaskInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTaskInstances& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Task, task_);
          DARABONBA_PTR_TO_JSON(TriggerContext, triggerContext_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTaskInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Task, task_);
          DARABONBA_PTR_FROM_JSON(TriggerContext, triggerContext_);
        };
        DataQualityEvaluationTaskInstances() = default ;
        DataQualityEvaluationTaskInstances(const DataQualityEvaluationTaskInstances &) = default ;
        DataQualityEvaluationTaskInstances(DataQualityEvaluationTaskInstances &&) = default ;
        DataQualityEvaluationTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityEvaluationTaskInstances() = default ;
        DataQualityEvaluationTaskInstances& operator=(const DataQualityEvaluationTaskInstances &) = default ;
        DataQualityEvaluationTaskInstances& operator=(DataQualityEvaluationTaskInstances &&) = default ;
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
            // The IDs of the auto triggered nodes of which the instances are successfully run.
            shared_ptr<vector<int64_t>> taskIds_ {};
            // The trigger condition of the task. Valid values:
            // 
            // *   ByScheduledTaskInstance. The value indicates that the task is triggered when the instance of an auto triggered node is successfully run.
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
            // *   emr
            // *   cdh
            // *   hologres
            // *   analyticdb_for_postgresql
            // *   analyticdb_for_mysql
            // *   starrocks
            shared_ptr<string> databaseType_ {};
            // The configuration of the partitioned table.
            shared_ptr<string> partitionSpec_ {};
            // The ID of the table in Data Map.
            shared_ptr<string> tableGuid_ {};
            // The type of the monitored object. Valid values:
            // 
            // *   Table
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
                DARABONBA_PTR_TO_JSON(NofiticationReceivers, nofiticationReceivers_);
                DARABONBA_PTR_TO_JSON(NotificationChannels, notificationChannels_);
              };
              friend void from_json(const Darabonba::Json& j, NotificationsItem& obj) { 
                DARABONBA_PTR_FROM_JSON(NofiticationReceivers, nofiticationReceivers_);
                DARABONBA_PTR_FROM_JSON(NotificationChannels, notificationChannels_);
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

              class NofiticationReceivers : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const NofiticationReceivers& obj) { 
                  DARABONBA_PTR_TO_JSON(Extension, extension_);
                  DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
                  DARABONBA_PTR_TO_JSON(ReceiverValues, receiverValues_);
                };
                friend void from_json(const Darabonba::Json& j, NofiticationReceivers& obj) { 
                  DARABONBA_PTR_FROM_JSON(Extension, extension_);
                  DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
                  DARABONBA_PTR_FROM_JSON(ReceiverValues, receiverValues_);
                };
                NofiticationReceivers() = default ;
                NofiticationReceivers(const NofiticationReceivers &) = default ;
                NofiticationReceivers(NofiticationReceivers &&) = default ;
                NofiticationReceivers(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~NofiticationReceivers() = default ;
                NofiticationReceivers& operator=(const NofiticationReceivers &) = default ;
                NofiticationReceivers& operator=(NofiticationReceivers &&) = default ;
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
                inline NofiticationReceivers& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


                // receiverType Field Functions 
                bool hasReceiverType() const { return this->receiverType_ != nullptr;};
                void deleteReceiverType() { this->receiverType_ = nullptr;};
                inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
                inline NofiticationReceivers& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


                // receiverValues Field Functions 
                bool hasReceiverValues() const { return this->receiverValues_ != nullptr;};
                void deleteReceiverValues() { this->receiverValues_ = nullptr;};
                inline const vector<string> & getReceiverValues() const { DARABONBA_PTR_GET_CONST(receiverValues_, vector<string>) };
                inline vector<string> getReceiverValues() { DARABONBA_PTR_GET(receiverValues_, vector<string>) };
                inline NofiticationReceivers& setReceiverValues(const vector<string> & receiverValues) { DARABONBA_PTR_SET_VALUE(receiverValues_, receiverValues) };
                inline NofiticationReceivers& setReceiverValues(vector<string> && receiverValues) { DARABONBA_PTR_SET_RVALUE(receiverValues_, receiverValues) };


              protected:
                // The extended information in the JSON format. For example, the DingTalk chatbot can remind all members in a DingTalk group by using the at sign (@).
                shared_ptr<string> extension_ {};
                // The type of the alert recipient. Valid values:
                // 
                // *   AliUid: Alibaba Cloud account ID
                // *   WebhookUrl: URL of a custom webhook
                // *   DingdingUrl: DingTalk chatbot URL
                // *   FeishuUrl: Lark chatbot URL
                // *   WeixinUrl: WeCom chatbot URL
                shared_ptr<string> receiverType_ {};
                // The alert recipients.
                shared_ptr<vector<string>> receiverValues_ {};
              };

              virtual bool empty() const override { return this->nofiticationReceivers_ == nullptr
        && this->notificationChannels_ == nullptr; };
              // nofiticationReceivers Field Functions 
              bool hasNofiticationReceivers() const { return this->nofiticationReceivers_ != nullptr;};
              void deleteNofiticationReceivers() { this->nofiticationReceivers_ = nullptr;};
              inline const vector<NotificationsItem::NofiticationReceivers> & getNofiticationReceivers() const { DARABONBA_PTR_GET_CONST(nofiticationReceivers_, vector<NotificationsItem::NofiticationReceivers>) };
              inline vector<NotificationsItem::NofiticationReceivers> getNofiticationReceivers() { DARABONBA_PTR_GET(nofiticationReceivers_, vector<NotificationsItem::NofiticationReceivers>) };
              inline NotificationsItem& setNofiticationReceivers(const vector<NotificationsItem::NofiticationReceivers> & nofiticationReceivers) { DARABONBA_PTR_SET_VALUE(nofiticationReceivers_, nofiticationReceivers) };
              inline NotificationsItem& setNofiticationReceivers(vector<NotificationsItem::NofiticationReceivers> && nofiticationReceivers) { DARABONBA_PTR_SET_RVALUE(nofiticationReceivers_, nofiticationReceivers) };


              // notificationChannels Field Functions 
              bool hasNotificationChannels() const { return this->notificationChannels_ != nullptr;};
              void deleteNotificationChannels() { this->notificationChannels_ = nullptr;};
              inline const vector<NotificationsItem::NotificationChannels> & getNotificationChannels() const { DARABONBA_PTR_GET_CONST(notificationChannels_, vector<NotificationsItem::NotificationChannels>) };
              inline vector<NotificationsItem::NotificationChannels> getNotificationChannels() { DARABONBA_PTR_GET(notificationChannels_, vector<NotificationsItem::NotificationChannels>) };
              inline NotificationsItem& setNotificationChannels(const vector<NotificationsItem::NotificationChannels> & notificationChannels) { DARABONBA_PTR_SET_VALUE(notificationChannels_, notificationChannels) };
              inline NotificationsItem& setNotificationChannels(vector<NotificationsItem::NotificationChannels> && notificationChannels) { DARABONBA_PTR_SET_RVALUE(notificationChannels_, notificationChannels) };


            protected:
              // The alert recipients.
              shared_ptr<vector<NotificationsItem::NofiticationReceivers>> nofiticationReceivers_ {};
              // The alert notification methods.
              shared_ptr<vector<NotificationsItem::NotificationChannels>> notificationChannels_ {};
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
            // The trigger condition of the alert notification.
            shared_ptr<string> condition_ {};
            // The configurations for the alert notification.
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
            // The trigger configuration of the callback event.
            shared_ptr<string> condition_ {};
            // The type of the callback event. Valid values:
            // 
            // *   BlockTaskInstance. The value indicates that an auto triggered node is blocked.
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
          // The description of the task.
          shared_ptr<string> description_ {};
          // The callback configurations of the task during the instance lifecycle. Blocking an auto triggered node is a type of callback event. Only this type is supported.
          shared_ptr<vector<Task::Hooks>> hooks_ {};
          // The task ID.
          shared_ptr<int64_t> id_ {};
          // The name of the monitor.
          // 
          // This parameter is required.
          shared_ptr<string> name_ {};
          // The configurations for alert notifications.
          shared_ptr<Task::Notifications> notifications_ {};
          // The workspace ID.
          shared_ptr<int64_t> projectId_ {};
          // The configuration of the data source. The value of the queue field is default, and that of the sqlEngine field can be set to SPARK_SQL, KYUUBI, PRESTO_SQL, or HIVE_SQL. The value default indicates the YARN queue for E-MapReduce (EMR) tasks.
          shared_ptr<string> runtimeConf_ {};
          // The monitored object of the task.
          shared_ptr<Task::Target> target_ {};
          // The trigger configuration of the task.
          shared_ptr<Task::Trigger> trigger_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->id_ == nullptr && this->parameters_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr
        && this->task_ == nullptr && this->triggerContext_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataQualityEvaluationTaskInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline DataQualityEvaluationTaskInstances& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataQualityEvaluationTaskInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline DataQualityEvaluationTaskInstances& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataQualityEvaluationTaskInstances& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataQualityEvaluationTaskInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // task Field Functions 
        bool hasTask() const { return this->task_ != nullptr;};
        void deleteTask() { this->task_ = nullptr;};
        inline const DataQualityEvaluationTaskInstances::Task & getTask() const { DARABONBA_PTR_GET_CONST(task_, DataQualityEvaluationTaskInstances::Task) };
        inline DataQualityEvaluationTaskInstances::Task getTask() { DARABONBA_PTR_GET(task_, DataQualityEvaluationTaskInstances::Task) };
        inline DataQualityEvaluationTaskInstances& setTask(const DataQualityEvaluationTaskInstances::Task & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
        inline DataQualityEvaluationTaskInstances& setTask(DataQualityEvaluationTaskInstances::Task && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


        // triggerContext Field Functions 
        bool hasTriggerContext() const { return this->triggerContext_ != nullptr;};
        void deleteTriggerContext() { this->triggerContext_ = nullptr;};
        inline string getTriggerContext() const { DARABONBA_PTR_GET_DEFAULT(triggerContext_, "") };
        inline DataQualityEvaluationTaskInstances& setTriggerContext(string triggerContext) { DARABONBA_PTR_SET_VALUE(triggerContext_, triggerContext) };


      protected:
        // The time at which the instance was generated.
        shared_ptr<int64_t> createTime_ {};
        // The time at which the instance finished running.
        shared_ptr<int64_t> finishTime_ {};
        // The ID of the instance.
        shared_ptr<int64_t> id_ {};
        // The parameters configured for the instance.
        shared_ptr<string> parameters_ {};
        // The DataWorks workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The status of the instance. Valid values:
        // 
        // *   Running
        // *   Error
        // *   Passed
        // *   Warned
        // *   Critical
        shared_ptr<string> status_ {};
        // The snapshot of the configurations for the task when the task starts.
        shared_ptr<DataQualityEvaluationTaskInstances::Task> task_ {};
        // The information about the trigger module of the instance.
        shared_ptr<string> triggerContext_ {};
      };

      virtual bool empty() const override { return this->dataQualityEvaluationTaskInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityEvaluationTaskInstances Field Functions 
      bool hasDataQualityEvaluationTaskInstances() const { return this->dataQualityEvaluationTaskInstances_ != nullptr;};
      void deleteDataQualityEvaluationTaskInstances() { this->dataQualityEvaluationTaskInstances_ = nullptr;};
      inline const vector<PagingInfo::DataQualityEvaluationTaskInstances> & getDataQualityEvaluationTaskInstances() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTaskInstances_, vector<PagingInfo::DataQualityEvaluationTaskInstances>) };
      inline vector<PagingInfo::DataQualityEvaluationTaskInstances> getDataQualityEvaluationTaskInstances() { DARABONBA_PTR_GET(dataQualityEvaluationTaskInstances_, vector<PagingInfo::DataQualityEvaluationTaskInstances>) };
      inline PagingInfo& setDataQualityEvaluationTaskInstances(const vector<PagingInfo::DataQualityEvaluationTaskInstances> & dataQualityEvaluationTaskInstances) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskInstances_, dataQualityEvaluationTaskInstances) };
      inline PagingInfo& setDataQualityEvaluationTaskInstances(vector<PagingInfo::DataQualityEvaluationTaskInstances> && dataQualityEvaluationTaskInstances) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTaskInstances_, dataQualityEvaluationTaskInstances) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The instances generated by the task.
      shared_ptr<vector<PagingInfo::DataQualityEvaluationTaskInstances>> dataQualityEvaluationTaskInstances_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo) };
    inline ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo) };
    inline ListDataQualityEvaluationTaskInstancesResponseBody& setPagingInfo(const ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataQualityEvaluationTaskInstancesResponseBody& setPagingInfo(ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityEvaluationTaskInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDataQualityEvaluationTaskInstancesResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
