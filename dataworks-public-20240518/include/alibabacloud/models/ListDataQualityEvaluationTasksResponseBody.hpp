// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODY_HPP_
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
  class ListDataQualityEvaluationTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityEvaluationTasksResponseBody() = default ;
    ListDataQualityEvaluationTasksResponseBody(const ListDataQualityEvaluationTasksResponseBody &) = default ;
    ListDataQualityEvaluationTasksResponseBody(ListDataQualityEvaluationTasksResponseBody &&) = default ;
    ListDataQualityEvaluationTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTasksResponseBody() = default ;
    ListDataQualityEvaluationTasksResponseBody& operator=(const ListDataQualityEvaluationTasksResponseBody &) = default ;
    ListDataQualityEvaluationTasksResponseBody& operator=(ListDataQualityEvaluationTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityEvaluationTasks, dataQualityEvaluationTasks_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTasks, dataQualityEvaluationTasks_);
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
      class DataQualityEvaluationTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityEvaluationTasks& obj) { 
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
        friend void from_json(const Darabonba::Json& j, DataQualityEvaluationTasks& obj) { 
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
        DataQualityEvaluationTasks() = default ;
        DataQualityEvaluationTasks(const DataQualityEvaluationTasks &) = default ;
        DataQualityEvaluationTasks(DataQualityEvaluationTasks &&) = default ;
        DataQualityEvaluationTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityEvaluationTasks() = default ;
        DataQualityEvaluationTasks& operator=(const DataQualityEvaluationTasks &) = default ;
        DataQualityEvaluationTasks& operator=(DataQualityEvaluationTasks &&) = default ;
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
          // The IDs of the auto triggered nodes of which the instances are successfully run. This parameter takes effect only if the Type parameter is set to ByScheduledTaskInstance.
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
            // The alert recipients.
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

        virtual bool empty() const override { return this->dataSourceId_ == nullptr
        && this->description_ == nullptr && this->hooks_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->notifications_ == nullptr
        && this->projectId_ == nullptr && this->runtimeConf_ == nullptr && this->target_ == nullptr && this->trigger_ == nullptr; };
        // dataSourceId Field Functions 
        bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
        void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
        inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
        inline DataQualityEvaluationTasks& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataQualityEvaluationTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hooks Field Functions 
        bool hasHooks() const { return this->hooks_ != nullptr;};
        void deleteHooks() { this->hooks_ = nullptr;};
        inline const vector<DataQualityEvaluationTasks::Hooks> & getHooks() const { DARABONBA_PTR_GET_CONST(hooks_, vector<DataQualityEvaluationTasks::Hooks>) };
        inline vector<DataQualityEvaluationTasks::Hooks> getHooks() { DARABONBA_PTR_GET(hooks_, vector<DataQualityEvaluationTasks::Hooks>) };
        inline DataQualityEvaluationTasks& setHooks(const vector<DataQualityEvaluationTasks::Hooks> & hooks) { DARABONBA_PTR_SET_VALUE(hooks_, hooks) };
        inline DataQualityEvaluationTasks& setHooks(vector<DataQualityEvaluationTasks::Hooks> && hooks) { DARABONBA_PTR_SET_RVALUE(hooks_, hooks) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataQualityEvaluationTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataQualityEvaluationTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // notifications Field Functions 
        bool hasNotifications() const { return this->notifications_ != nullptr;};
        void deleteNotifications() { this->notifications_ = nullptr;};
        inline const DataQualityEvaluationTasks::Notifications & getNotifications() const { DARABONBA_PTR_GET_CONST(notifications_, DataQualityEvaluationTasks::Notifications) };
        inline DataQualityEvaluationTasks::Notifications getNotifications() { DARABONBA_PTR_GET(notifications_, DataQualityEvaluationTasks::Notifications) };
        inline DataQualityEvaluationTasks& setNotifications(const DataQualityEvaluationTasks::Notifications & notifications) { DARABONBA_PTR_SET_VALUE(notifications_, notifications) };
        inline DataQualityEvaluationTasks& setNotifications(DataQualityEvaluationTasks::Notifications && notifications) { DARABONBA_PTR_SET_RVALUE(notifications_, notifications) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DataQualityEvaluationTasks& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // runtimeConf Field Functions 
        bool hasRuntimeConf() const { return this->runtimeConf_ != nullptr;};
        void deleteRuntimeConf() { this->runtimeConf_ = nullptr;};
        inline string getRuntimeConf() const { DARABONBA_PTR_GET_DEFAULT(runtimeConf_, "") };
        inline DataQualityEvaluationTasks& setRuntimeConf(string runtimeConf) { DARABONBA_PTR_SET_VALUE(runtimeConf_, runtimeConf) };


        // target Field Functions 
        bool hasTarget() const { return this->target_ != nullptr;};
        void deleteTarget() { this->target_ = nullptr;};
        inline const DataQualityEvaluationTasks::Target & getTarget() const { DARABONBA_PTR_GET_CONST(target_, DataQualityEvaluationTasks::Target) };
        inline DataQualityEvaluationTasks::Target getTarget() { DARABONBA_PTR_GET(target_, DataQualityEvaluationTasks::Target) };
        inline DataQualityEvaluationTasks& setTarget(const DataQualityEvaluationTasks::Target & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
        inline DataQualityEvaluationTasks& setTarget(DataQualityEvaluationTasks::Target && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


        // trigger Field Functions 
        bool hasTrigger() const { return this->trigger_ != nullptr;};
        void deleteTrigger() { this->trigger_ = nullptr;};
        inline const DataQualityEvaluationTasks::Trigger & getTrigger() const { DARABONBA_PTR_GET_CONST(trigger_, DataQualityEvaluationTasks::Trigger) };
        inline DataQualityEvaluationTasks::Trigger getTrigger() { DARABONBA_PTR_GET(trigger_, DataQualityEvaluationTasks::Trigger) };
        inline DataQualityEvaluationTasks& setTrigger(const DataQualityEvaluationTasks::Trigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
        inline DataQualityEvaluationTasks& setTrigger(DataQualityEvaluationTasks::Trigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


      protected:
        shared_ptr<int64_t> dataSourceId_ {};
        // The description of the data quality monitoring task. The description can be up to 65,535 characters in length.
        shared_ptr<string> description_ {};
        // The callback configurations of the task during the instance lifecycle. Blocking an auto triggered node is a type of callback event. Only this type is supported.
        shared_ptr<vector<DataQualityEvaluationTasks::Hooks>> hooks_ {};
        // The ID of the data quality monitoring task.
        shared_ptr<int64_t> id_ {};
        // The name of the data quality monitoring task. The name can be up to 255 characters in length and can contain digits, letters, and punctuation marks.
        shared_ptr<string> name_ {};
        // The configurations for alert notifications.
        shared_ptr<DataQualityEvaluationTasks::Notifications> notifications_ {};
        // The DataWorks workspace ID.
        shared_ptr<int64_t> projectId_ {};
        // The configuration of the data source. The value of the queue field is default, and that of the sqlEngine field can be set to SPARK_SQL, KYUUBI, PRESTO_SQL, or HIVE_SQL. The value default indicates the YARN queue for E-MapReduce (EMR) tasks.
        shared_ptr<string> runtimeConf_ {};
        // The monitored object of the task.
        shared_ptr<DataQualityEvaluationTasks::Target> target_ {};
        // The trigger configuration of the task.
        shared_ptr<DataQualityEvaluationTasks::Trigger> trigger_ {};
      };

      virtual bool empty() const override { return this->dataQualityEvaluationTasks_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityEvaluationTasks Field Functions 
      bool hasDataQualityEvaluationTasks() const { return this->dataQualityEvaluationTasks_ != nullptr;};
      void deleteDataQualityEvaluationTasks() { this->dataQualityEvaluationTasks_ = nullptr;};
      inline const vector<PagingInfo::DataQualityEvaluationTasks> & getDataQualityEvaluationTasks() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTasks_, vector<PagingInfo::DataQualityEvaluationTasks>) };
      inline vector<PagingInfo::DataQualityEvaluationTasks> getDataQualityEvaluationTasks() { DARABONBA_PTR_GET(dataQualityEvaluationTasks_, vector<PagingInfo::DataQualityEvaluationTasks>) };
      inline PagingInfo& setDataQualityEvaluationTasks(const vector<PagingInfo::DataQualityEvaluationTasks> & dataQualityEvaluationTasks) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTasks_, dataQualityEvaluationTasks) };
      inline PagingInfo& setDataQualityEvaluationTasks(vector<PagingInfo::DataQualityEvaluationTasks> && dataQualityEvaluationTasks) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTasks_, dataQualityEvaluationTasks) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline PagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline PagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
      inline PagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The data quality monitoring tasks.
      shared_ptr<vector<PagingInfo::DataQualityEvaluationTasks>> dataQualityEvaluationTasks_ {};
      // The page number.
      shared_ptr<string> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<string> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<string> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDataQualityEvaluationTasksResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDataQualityEvaluationTasksResponseBody::PagingInfo) };
    inline ListDataQualityEvaluationTasksResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDataQualityEvaluationTasksResponseBody::PagingInfo) };
    inline ListDataQualityEvaluationTasksResponseBody& setPagingInfo(const ListDataQualityEvaluationTasksResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDataQualityEvaluationTasksResponseBody& setPagingInfo(ListDataQualityEvaluationTasksResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityEvaluationTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDataQualityEvaluationTasksResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
