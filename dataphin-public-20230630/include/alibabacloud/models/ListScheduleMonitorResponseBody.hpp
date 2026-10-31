// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEDULEMONITORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEDULEMONITORRESPONSEBODY_HPP_
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
  class ListScheduleMonitorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScheduleMonitorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListScheduleMonitorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListScheduleMonitorResponseBody() = default ;
    ListScheduleMonitorResponseBody(const ListScheduleMonitorResponseBody &) = default ;
    ListScheduleMonitorResponseBody(ListScheduleMonitorResponseBody &&) = default ;
    ListScheduleMonitorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScheduleMonitorResponseBody() = default ;
    ListScheduleMonitorResponseBody& operator=(const ListScheduleMonitorResponseBody &) = default ;
    ListScheduleMonitorResponseBody& operator=(ListScheduleMonitorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(MonitorItemList, monitorItemList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(MonitorItemList, monitorItemList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MonitorItemList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MonitorItemList& obj) { 
          DARABONBA_PTR_TO_JSON(BizUnit, bizUnit_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(LogicTable, logicTable_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(MonitorNodeRange, monitorNodeRange_);
          DARABONBA_PTR_TO_JSON(MonitoredItemId, monitoredItemId_);
          DARABONBA_PTR_TO_JSON(MonitoredRuleList, monitoredRuleList_);
          DARABONBA_PTR_TO_JSON(MonitoredTask, monitoredTask_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectInfo, projectInfo_);
          DARABONBA_PTR_TO_JSON(SubType, subType_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, MonitorItemList& obj) { 
          DARABONBA_PTR_FROM_JSON(BizUnit, bizUnit_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(LogicTable, logicTable_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(MonitorNodeRange, monitorNodeRange_);
          DARABONBA_PTR_FROM_JSON(MonitoredItemId, monitoredItemId_);
          DARABONBA_PTR_FROM_JSON(MonitoredRuleList, monitoredRuleList_);
          DARABONBA_PTR_FROM_JSON(MonitoredTask, monitoredTask_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectInfo, projectInfo_);
          DARABONBA_PTR_FROM_JSON(SubType, subType_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        MonitorItemList() = default ;
        MonitorItemList(const MonitorItemList &) = default ;
        MonitorItemList(MonitorItemList &&) = default ;
        MonitorItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MonitorItemList() = default ;
        MonitorItemList& operator=(const MonitorItemList &) = default ;
        MonitorItemList& operator=(MonitorItemList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ProjectInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProjectInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ProjectInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ProjectInfo() = default ;
          ProjectInfo(const ProjectInfo &) = default ;
          ProjectInfo(ProjectInfo &&) = default ;
          ProjectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProjectInfo() = default ;
          ProjectInfo& operator=(const ProjectInfo &) = default ;
          ProjectInfo& operator=(ProjectInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline ProjectInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ProjectInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The project ID.
          shared_ptr<int64_t> id_ {};
          // The project name.
          shared_ptr<string> name_ {};
        };

        class MonitoredTask : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MonitoredTask& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
            DARABONBA_PTR_TO_JSON(SchedulePeriodType, schedulePeriodType_);
          };
          friend void from_json(const Darabonba::Json& j, MonitoredTask& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
            DARABONBA_PTR_FROM_JSON(SchedulePeriodType, schedulePeriodType_);
          };
          MonitoredTask() = default ;
          MonitoredTask(const MonitoredTask &) = default ;
          MonitoredTask(MonitoredTask &&) = default ;
          MonitoredTask(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MonitoredTask() = default ;
          MonitoredTask& operator=(const MonitoredTask &) = default ;
          MonitoredTask& operator=(MonitoredTask &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->projectName_ == nullptr && this->schedulePeriodType_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline MonitoredTask& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MonitoredTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline MonitoredTask& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


          // schedulePeriodType Field Functions 
          bool hasSchedulePeriodType() const { return this->schedulePeriodType_ != nullptr;};
          void deleteSchedulePeriodType() { this->schedulePeriodType_ = nullptr;};
          inline string getSchedulePeriodType() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriodType_, "") };
          inline MonitoredTask& setSchedulePeriodType(string schedulePeriodType) { DARABONBA_PTR_SET_VALUE(schedulePeriodType_, schedulePeriodType) };


        protected:
          // The ID of the monitoring task.
          shared_ptr<string> id_ {};
          // The name of the monitoring task.
          shared_ptr<string> name_ {};
          // The name of the project to which the task belongs.
          shared_ptr<string> projectName_ {};
          // The schedule period type. Valid values: MINUTELY, HOURLY, DAILY, WEEKLY, MONTHLY, and YEARLY.
          shared_ptr<string> schedulePeriodType_ {};
        };

        class MonitoredRuleList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MonitoredRuleList& obj) { 
            DARABONBA_PTR_TO_JSON(AlertReason, alertReason_);
            DARABONBA_PTR_TO_JSON(AlertStrategy, alertStrategy_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Creator, creator_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_TO_JSON(Modifier, modifier_);
            DARABONBA_PTR_TO_JSON(MonitoredItemId, monitoredItemId_);
            DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
            DARABONBA_PTR_TO_JSON(SwitchStatus, switchStatus_);
            DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          };
          friend void from_json(const Darabonba::Json& j, MonitoredRuleList& obj) { 
            DARABONBA_PTR_FROM_JSON(AlertReason, alertReason_);
            DARABONBA_PTR_FROM_JSON(AlertStrategy, alertStrategy_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Creator, creator_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
            DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
            DARABONBA_PTR_FROM_JSON(MonitoredItemId, monitoredItemId_);
            DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
            DARABONBA_PTR_FROM_JSON(SwitchStatus, switchStatus_);
            DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          };
          MonitoredRuleList() = default ;
          MonitoredRuleList(const MonitoredRuleList &) = default ;
          MonitoredRuleList(MonitoredRuleList &&) = default ;
          MonitoredRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MonitoredRuleList() = default ;
          MonitoredRuleList& operator=(const MonitoredRuleList &) = default ;
          MonitoredRuleList& operator=(MonitoredRuleList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Modifier : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Modifier& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Modifier& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            Modifier() = default ;
            Modifier(const Modifier &) = default ;
            Modifier(Modifier &&) = default ;
            Modifier(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Modifier() = default ;
            Modifier& operator=(const Modifier &) = default ;
            Modifier& operator=(Modifier &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Modifier& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Modifier& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // The user ID.
            shared_ptr<string> id_ {};
            // The username.
            shared_ptr<string> name_ {};
          };

          class Creator : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Creator& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Name, name_);
            };
            friend void from_json(const Darabonba::Json& j, Creator& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Name, name_);
            };
            Creator() = default ;
            Creator(const Creator &) = default ;
            Creator(Creator &&) = default ;
            Creator(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Creator() = default ;
            Creator& operator=(const Creator &) = default ;
            Creator& operator=(Creator &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline Creator& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Creator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          protected:
            // The user ID.
            shared_ptr<string> id_ {};
            // The username.
            shared_ptr<string> name_ {};
          };

          class AlertStrategy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AlertStrategy& obj) { 
              DARABONBA_PTR_TO_JSON(AlertFrequency, alertFrequency_);
              DARABONBA_PTR_TO_JSON(MonitoredTimeRange, monitoredTimeRange_);
              DARABONBA_PTR_TO_JSON(ReceiverConfigList, receiverConfigList_);
              DARABONBA_PTR_TO_JSON(SendTimes, sendTimes_);
            };
            friend void from_json(const Darabonba::Json& j, AlertStrategy& obj) { 
              DARABONBA_PTR_FROM_JSON(AlertFrequency, alertFrequency_);
              DARABONBA_PTR_FROM_JSON(MonitoredTimeRange, monitoredTimeRange_);
              DARABONBA_PTR_FROM_JSON(ReceiverConfigList, receiverConfigList_);
              DARABONBA_PTR_FROM_JSON(SendTimes, sendTimes_);
            };
            AlertStrategy() = default ;
            AlertStrategy(const AlertStrategy &) = default ;
            AlertStrategy(AlertStrategy &&) = default ;
            AlertStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AlertStrategy() = default ;
            AlertStrategy& operator=(const AlertStrategy &) = default ;
            AlertStrategy& operator=(AlertStrategy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ReceiverConfigList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ReceiverConfigList& obj) { 
                DARABONBA_PTR_TO_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
                DARABONBA_PTR_TO_JSON(OnDutyTableIdList, onDutyTableIdList_);
                DARABONBA_PTR_TO_JSON(ReceivedWayList, receivedWayList_);
                DARABONBA_PTR_TO_JSON(ReceiverType, receiverType_);
                DARABONBA_PTR_TO_JSON(ReceiverUserIdList, receiverUserIdList_);
              };
              friend void from_json(const Darabonba::Json& j, ReceiverConfigList& obj) { 
                DARABONBA_PTR_FROM_JSON(CustomAlertChannelIdList, customAlertChannelIdList_);
                DARABONBA_PTR_FROM_JSON(OnDutyTableIdList, onDutyTableIdList_);
                DARABONBA_PTR_FROM_JSON(ReceivedWayList, receivedWayList_);
                DARABONBA_PTR_FROM_JSON(ReceiverType, receiverType_);
                DARABONBA_PTR_FROM_JSON(ReceiverUserIdList, receiverUserIdList_);
              };
              ReceiverConfigList() = default ;
              ReceiverConfigList(const ReceiverConfigList &) = default ;
              ReceiverConfigList(ReceiverConfigList &&) = default ;
              ReceiverConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ReceiverConfigList() = default ;
              ReceiverConfigList& operator=(const ReceiverConfigList &) = default ;
              ReceiverConfigList& operator=(ReceiverConfigList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->customAlertChannelIdList_ == nullptr
        && this->onDutyTableIdList_ == nullptr && this->receivedWayList_ == nullptr && this->receiverType_ == nullptr && this->receiverUserIdList_ == nullptr; };
              // customAlertChannelIdList Field Functions 
              bool hasCustomAlertChannelIdList() const { return this->customAlertChannelIdList_ != nullptr;};
              void deleteCustomAlertChannelIdList() { this->customAlertChannelIdList_ = nullptr;};
              inline const vector<string> & getCustomAlertChannelIdList() const { DARABONBA_PTR_GET_CONST(customAlertChannelIdList_, vector<string>) };
              inline vector<string> getCustomAlertChannelIdList() { DARABONBA_PTR_GET(customAlertChannelIdList_, vector<string>) };
              inline ReceiverConfigList& setCustomAlertChannelIdList(const vector<string> & customAlertChannelIdList) { DARABONBA_PTR_SET_VALUE(customAlertChannelIdList_, customAlertChannelIdList) };
              inline ReceiverConfigList& setCustomAlertChannelIdList(vector<string> && customAlertChannelIdList) { DARABONBA_PTR_SET_RVALUE(customAlertChannelIdList_, customAlertChannelIdList) };


              // onDutyTableIdList Field Functions 
              bool hasOnDutyTableIdList() const { return this->onDutyTableIdList_ != nullptr;};
              void deleteOnDutyTableIdList() { this->onDutyTableIdList_ = nullptr;};
              inline const vector<string> & getOnDutyTableIdList() const { DARABONBA_PTR_GET_CONST(onDutyTableIdList_, vector<string>) };
              inline vector<string> getOnDutyTableIdList() { DARABONBA_PTR_GET(onDutyTableIdList_, vector<string>) };
              inline ReceiverConfigList& setOnDutyTableIdList(const vector<string> & onDutyTableIdList) { DARABONBA_PTR_SET_VALUE(onDutyTableIdList_, onDutyTableIdList) };
              inline ReceiverConfigList& setOnDutyTableIdList(vector<string> && onDutyTableIdList) { DARABONBA_PTR_SET_RVALUE(onDutyTableIdList_, onDutyTableIdList) };


              // receivedWayList Field Functions 
              bool hasReceivedWayList() const { return this->receivedWayList_ != nullptr;};
              void deleteReceivedWayList() { this->receivedWayList_ = nullptr;};
              inline const vector<string> & getReceivedWayList() const { DARABONBA_PTR_GET_CONST(receivedWayList_, vector<string>) };
              inline vector<string> getReceivedWayList() { DARABONBA_PTR_GET(receivedWayList_, vector<string>) };
              inline ReceiverConfigList& setReceivedWayList(const vector<string> & receivedWayList) { DARABONBA_PTR_SET_VALUE(receivedWayList_, receivedWayList) };
              inline ReceiverConfigList& setReceivedWayList(vector<string> && receivedWayList) { DARABONBA_PTR_SET_RVALUE(receivedWayList_, receivedWayList) };


              // receiverType Field Functions 
              bool hasReceiverType() const { return this->receiverType_ != nullptr;};
              void deleteReceiverType() { this->receiverType_ = nullptr;};
              inline string getReceiverType() const { DARABONBA_PTR_GET_DEFAULT(receiverType_, "") };
              inline ReceiverConfigList& setReceiverType(string receiverType) { DARABONBA_PTR_SET_VALUE(receiverType_, receiverType) };


              // receiverUserIdList Field Functions 
              bool hasReceiverUserIdList() const { return this->receiverUserIdList_ != nullptr;};
              void deleteReceiverUserIdList() { this->receiverUserIdList_ = nullptr;};
              inline const vector<string> & getReceiverUserIdList() const { DARABONBA_PTR_GET_CONST(receiverUserIdList_, vector<string>) };
              inline vector<string> getReceiverUserIdList() { DARABONBA_PTR_GET(receiverUserIdList_, vector<string>) };
              inline ReceiverConfigList& setReceiverUserIdList(const vector<string> & receiverUserIdList) { DARABONBA_PTR_SET_VALUE(receiverUserIdList_, receiverUserIdList) };
              inline ReceiverConfigList& setReceiverUserIdList(vector<string> && receiverUserIdList) { DARABONBA_PTR_SET_RVALUE(receiverUserIdList_, receiverUserIdList) };


            protected:
              // The list of custom alert channel IDs.
              shared_ptr<vector<string>> customAlertChannelIdList_ {};
              // The list of on-duty table IDs. This parameter is required when ReceiverType is set to ON_DUTY_TABLE.
              shared_ptr<vector<string>> onDutyTableIdList_ {};
              // The list of notification methods. Valid values: PHONE, MESSAGE, EMAIL, DING_TALK, FEISHU, WECHAT, and CUSTOM.
              // 
              // This parameter is required.
              shared_ptr<vector<string>> receivedWayList_ {};
              // The recipient type. Valid values: OWNER (owner), USER_CUSTOM (custom user), and ON_DUTY_TABLE (on-duty table).
              // 
              // This parameter is required.
              shared_ptr<string> receiverType_ {};
              // The list of recipient user IDs. This parameter is required when ReceiverType is set to USER_CUSTOM.
              shared_ptr<vector<string>> receiverUserIdList_ {};
            };

            class MonitoredTimeRange : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const MonitoredTimeRange& obj) { 
                DARABONBA_PTR_TO_JSON(EndTime, endTime_);
                DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              };
              friend void from_json(const Darabonba::Json& j, MonitoredTimeRange& obj) { 
                DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
                DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              };
              MonitoredTimeRange() = default ;
              MonitoredTimeRange(const MonitoredTimeRange &) = default ;
              MonitoredTimeRange(MonitoredTimeRange &&) = default ;
              MonitoredTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~MonitoredTimeRange() = default ;
              MonitoredTimeRange& operator=(const MonitoredTimeRange &) = default ;
              MonitoredTimeRange& operator=(MonitoredTimeRange &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
              // endTime Field Functions 
              bool hasEndTime() const { return this->endTime_ != nullptr;};
              void deleteEndTime() { this->endTime_ = nullptr;};
              inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
              inline MonitoredTimeRange& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
              inline MonitoredTimeRange& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            protected:
              // The end time in HH:mm format. A value of 0 indicates no limit.
              shared_ptr<string> endTime_ {};
              // The start time in HH:mm format. A value of 0 indicates no limit.
              shared_ptr<string> startTime_ {};
            };

            virtual bool empty() const override { return this->alertFrequency_ == nullptr
        && this->monitoredTimeRange_ == nullptr && this->receiverConfigList_ == nullptr && this->sendTimes_ == nullptr; };
            // alertFrequency Field Functions 
            bool hasAlertFrequency() const { return this->alertFrequency_ != nullptr;};
            void deleteAlertFrequency() { this->alertFrequency_ = nullptr;};
            inline int32_t getAlertFrequency() const { DARABONBA_PTR_GET_DEFAULT(alertFrequency_, 0) };
            inline AlertStrategy& setAlertFrequency(int32_t alertFrequency) { DARABONBA_PTR_SET_VALUE(alertFrequency_, alertFrequency) };


            // monitoredTimeRange Field Functions 
            bool hasMonitoredTimeRange() const { return this->monitoredTimeRange_ != nullptr;};
            void deleteMonitoredTimeRange() { this->monitoredTimeRange_ = nullptr;};
            inline const AlertStrategy::MonitoredTimeRange & getMonitoredTimeRange() const { DARABONBA_PTR_GET_CONST(monitoredTimeRange_, AlertStrategy::MonitoredTimeRange) };
            inline AlertStrategy::MonitoredTimeRange getMonitoredTimeRange() { DARABONBA_PTR_GET(monitoredTimeRange_, AlertStrategy::MonitoredTimeRange) };
            inline AlertStrategy& setMonitoredTimeRange(const AlertStrategy::MonitoredTimeRange & monitoredTimeRange) { DARABONBA_PTR_SET_VALUE(monitoredTimeRange_, monitoredTimeRange) };
            inline AlertStrategy& setMonitoredTimeRange(AlertStrategy::MonitoredTimeRange && monitoredTimeRange) { DARABONBA_PTR_SET_RVALUE(monitoredTimeRange_, monitoredTimeRange) };


            // receiverConfigList Field Functions 
            bool hasReceiverConfigList() const { return this->receiverConfigList_ != nullptr;};
            void deleteReceiverConfigList() { this->receiverConfigList_ = nullptr;};
            inline const vector<AlertStrategy::ReceiverConfigList> & getReceiverConfigList() const { DARABONBA_PTR_GET_CONST(receiverConfigList_, vector<AlertStrategy::ReceiverConfigList>) };
            inline vector<AlertStrategy::ReceiverConfigList> getReceiverConfigList() { DARABONBA_PTR_GET(receiverConfigList_, vector<AlertStrategy::ReceiverConfigList>) };
            inline AlertStrategy& setReceiverConfigList(const vector<AlertStrategy::ReceiverConfigList> & receiverConfigList) { DARABONBA_PTR_SET_VALUE(receiverConfigList_, receiverConfigList) };
            inline AlertStrategy& setReceiverConfigList(vector<AlertStrategy::ReceiverConfigList> && receiverConfigList) { DARABONBA_PTR_SET_RVALUE(receiverConfigList_, receiverConfigList) };


            // sendTimes Field Functions 
            bool hasSendTimes() const { return this->sendTimes_ != nullptr;};
            void deleteSendTimes() { this->sendTimes_ = nullptr;};
            inline int32_t getSendTimes() const { DARABONBA_PTR_GET_DEFAULT(sendTimes_, 0) };
            inline AlertStrategy& setSendTimes(int32_t sendTimes) { DARABONBA_PTR_SET_VALUE(sendTimes_, sendTimes) };


          protected:
            // The alert trigger frequency.
            // 
            // This parameter is required.
            shared_ptr<int32_t> alertFrequency_ {};
            // The monitored time range.
            shared_ptr<AlertStrategy::MonitoredTimeRange> monitoredTimeRange_ {};
            // The list of recipient configurations.
            // 
            // This parameter is required.
            shared_ptr<vector<AlertStrategy::ReceiverConfigList>> receiverConfigList_ {};
            // The maximum number of alert notifications to send.
            // 
            // This parameter is required.
            shared_ptr<int32_t> sendTimes_ {};
          };

          class AlertReason : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AlertReason& obj) { 
              DARABONBA_PTR_TO_JSON(AlertReasonType, alertReasonType_);
              DARABONBA_PTR_TO_JSON(FixedElapsedTime, fixedElapsedTime_);
              DARABONBA_PTR_TO_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
              DARABONBA_PTR_TO_JSON(UnfinishedRuleDetailConfig, unfinishedRuleDetailConfig_);
            };
            friend void from_json(const Darabonba::Json& j, AlertReason& obj) { 
              DARABONBA_PTR_FROM_JSON(AlertReasonType, alertReasonType_);
              DARABONBA_PTR_FROM_JSON(FixedElapsedTime, fixedElapsedTime_);
              DARABONBA_PTR_FROM_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
              DARABONBA_PTR_FROM_JSON(UnfinishedRuleDetailConfig, unfinishedRuleDetailConfig_);
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
            class UnfinishedRuleDetailConfig : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const UnfinishedRuleDetailConfig& obj) { 
                DARABONBA_PTR_TO_JSON(DailyUnfinishedConfig, dailyUnfinishedConfig_);
                DARABONBA_PTR_TO_JSON(MultiPeriodUnfinishedConfig, multiPeriodUnfinishedConfig_);
              };
              friend void from_json(const Darabonba::Json& j, UnfinishedRuleDetailConfig& obj) { 
                DARABONBA_PTR_FROM_JSON(DailyUnfinishedConfig, dailyUnfinishedConfig_);
                DARABONBA_PTR_FROM_JSON(MultiPeriodUnfinishedConfig, multiPeriodUnfinishedConfig_);
              };
              UnfinishedRuleDetailConfig() = default ;
              UnfinishedRuleDetailConfig(const UnfinishedRuleDetailConfig &) = default ;
              UnfinishedRuleDetailConfig(UnfinishedRuleDetailConfig &&) = default ;
              UnfinishedRuleDetailConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~UnfinishedRuleDetailConfig() = default ;
              UnfinishedRuleDetailConfig& operator=(const UnfinishedRuleDetailConfig &) = default ;
              UnfinishedRuleDetailConfig& operator=(UnfinishedRuleDetailConfig &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class MultiPeriodUnfinishedConfig : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const MultiPeriodUnfinishedConfig& obj) { 
                  DARABONBA_PTR_TO_JSON(CustomPeriodList, customPeriodList_);
                  DARABONBA_PTR_TO_JSON(IntervalAfterDueTime, intervalAfterDueTime_);
                  DARABONBA_PTR_TO_JSON(IntervalUnit, intervalUnit_);
                  DARABONBA_PTR_TO_JSON(MonitorPeriodType, monitorPeriodType_);
                  DARABONBA_PTR_TO_JSON(TriggerRuleType, triggerRuleType_);
                };
                friend void from_json(const Darabonba::Json& j, MultiPeriodUnfinishedConfig& obj) { 
                  DARABONBA_PTR_FROM_JSON(CustomPeriodList, customPeriodList_);
                  DARABONBA_PTR_FROM_JSON(IntervalAfterDueTime, intervalAfterDueTime_);
                  DARABONBA_PTR_FROM_JSON(IntervalUnit, intervalUnit_);
                  DARABONBA_PTR_FROM_JSON(MonitorPeriodType, monitorPeriodType_);
                  DARABONBA_PTR_FROM_JSON(TriggerRuleType, triggerRuleType_);
                };
                MultiPeriodUnfinishedConfig() = default ;
                MultiPeriodUnfinishedConfig(const MultiPeriodUnfinishedConfig &) = default ;
                MultiPeriodUnfinishedConfig(MultiPeriodUnfinishedConfig &&) = default ;
                MultiPeriodUnfinishedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~MultiPeriodUnfinishedConfig() = default ;
                MultiPeriodUnfinishedConfig& operator=(const MultiPeriodUnfinishedConfig &) = default ;
                MultiPeriodUnfinishedConfig& operator=(MultiPeriodUnfinishedConfig &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class CustomPeriodList : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const CustomPeriodList& obj) { 
                    DARABONBA_PTR_TO_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
                    DARABONBA_PTR_TO_JSON(PeriodNum, periodNum_);
                  };
                  friend void from_json(const Darabonba::Json& j, CustomPeriodList& obj) { 
                    DARABONBA_PTR_FROM_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
                    DARABONBA_PTR_FROM_JSON(PeriodNum, periodNum_);
                  };
                  CustomPeriodList() = default ;
                  CustomPeriodList(const CustomPeriodList &) = default ;
                  CustomPeriodList(CustomPeriodList &&) = default ;
                  CustomPeriodList(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~CustomPeriodList() = default ;
                  CustomPeriodList& operator=(const CustomPeriodList &) = default ;
                  CustomPeriodList& operator=(CustomPeriodList &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->fixedUnfinishedTime_ == nullptr
        && this->periodNum_ == nullptr; };
                  // fixedUnfinishedTime Field Functions 
                  bool hasFixedUnfinishedTime() const { return this->fixedUnfinishedTime_ != nullptr;};
                  void deleteFixedUnfinishedTime() { this->fixedUnfinishedTime_ = nullptr;};
                  inline string getFixedUnfinishedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedUnfinishedTime_, "") };
                  inline CustomPeriodList& setFixedUnfinishedTime(string fixedUnfinishedTime) { DARABONBA_PTR_SET_VALUE(fixedUnfinishedTime_, fixedUnfinishedTime) };


                  // periodNum Field Functions 
                  bool hasPeriodNum() const { return this->periodNum_ != nullptr;};
                  void deletePeriodNum() { this->periodNum_ = nullptr;};
                  inline int32_t getPeriodNum() const { DARABONBA_PTR_GET_DEFAULT(periodNum_, 0) };
                  inline CustomPeriodList& setPeriodNum(int32_t periodNum) { DARABONBA_PTR_SET_VALUE(periodNum_, periodNum) };


                protected:
                  // The time for the unfinished check, in HH:mm format.
                  shared_ptr<string> fixedUnfinishedTime_ {};
                  // The number of periods.
                  shared_ptr<int32_t> periodNum_ {};
                };

                virtual bool empty() const override { return this->customPeriodList_ == nullptr
        && this->intervalAfterDueTime_ == nullptr && this->intervalUnit_ == nullptr && this->monitorPeriodType_ == nullptr && this->triggerRuleType_ == nullptr; };
                // customPeriodList Field Functions 
                bool hasCustomPeriodList() const { return this->customPeriodList_ != nullptr;};
                void deleteCustomPeriodList() { this->customPeriodList_ = nullptr;};
                inline const vector<MultiPeriodUnfinishedConfig::CustomPeriodList> & getCustomPeriodList() const { DARABONBA_PTR_GET_CONST(customPeriodList_, vector<MultiPeriodUnfinishedConfig::CustomPeriodList>) };
                inline vector<MultiPeriodUnfinishedConfig::CustomPeriodList> getCustomPeriodList() { DARABONBA_PTR_GET(customPeriodList_, vector<MultiPeriodUnfinishedConfig::CustomPeriodList>) };
                inline MultiPeriodUnfinishedConfig& setCustomPeriodList(const vector<MultiPeriodUnfinishedConfig::CustomPeriodList> & customPeriodList) { DARABONBA_PTR_SET_VALUE(customPeriodList_, customPeriodList) };
                inline MultiPeriodUnfinishedConfig& setCustomPeriodList(vector<MultiPeriodUnfinishedConfig::CustomPeriodList> && customPeriodList) { DARABONBA_PTR_SET_RVALUE(customPeriodList_, customPeriodList) };


                // intervalAfterDueTime Field Functions 
                bool hasIntervalAfterDueTime() const { return this->intervalAfterDueTime_ != nullptr;};
                void deleteIntervalAfterDueTime() { this->intervalAfterDueTime_ = nullptr;};
                inline int32_t getIntervalAfterDueTime() const { DARABONBA_PTR_GET_DEFAULT(intervalAfterDueTime_, 0) };
                inline MultiPeriodUnfinishedConfig& setIntervalAfterDueTime(int32_t intervalAfterDueTime) { DARABONBA_PTR_SET_VALUE(intervalAfterDueTime_, intervalAfterDueTime) };


                // intervalUnit Field Functions 
                bool hasIntervalUnit() const { return this->intervalUnit_ != nullptr;};
                void deleteIntervalUnit() { this->intervalUnit_ = nullptr;};
                inline string getIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(intervalUnit_, "") };
                inline MultiPeriodUnfinishedConfig& setIntervalUnit(string intervalUnit) { DARABONBA_PTR_SET_VALUE(intervalUnit_, intervalUnit) };


                // monitorPeriodType Field Functions 
                bool hasMonitorPeriodType() const { return this->monitorPeriodType_ != nullptr;};
                void deleteMonitorPeriodType() { this->monitorPeriodType_ = nullptr;};
                inline string getMonitorPeriodType() const { DARABONBA_PTR_GET_DEFAULT(monitorPeriodType_, "") };
                inline MultiPeriodUnfinishedConfig& setMonitorPeriodType(string monitorPeriodType) { DARABONBA_PTR_SET_VALUE(monitorPeriodType_, monitorPeriodType) };


                // triggerRuleType Field Functions 
                bool hasTriggerRuleType() const { return this->triggerRuleType_ != nullptr;};
                void deleteTriggerRuleType() { this->triggerRuleType_ = nullptr;};
                inline string getTriggerRuleType() const { DARABONBA_PTR_GET_DEFAULT(triggerRuleType_, "") };
                inline MultiPeriodUnfinishedConfig& setTriggerRuleType(string triggerRuleType) { DARABONBA_PTR_SET_VALUE(triggerRuleType_, triggerRuleType) };


              protected:
                // The list of custom monitoring periods.
                shared_ptr<vector<MultiPeriodUnfinishedConfig::CustomPeriodList>> customPeriodList_ {};
                // The interval value.
                shared_ptr<int32_t> intervalAfterDueTime_ {};
                // The interval unit. Valid values: SECONDS, MINUTES, and HOURS.
                shared_ptr<string> intervalUnit_ {};
                // The monitoring period type. Valid values: ALL, FIRST, LAST, and CUSTOM.
                shared_ptr<string> monitorPeriodType_ {};
                // The trigger rule type.
                shared_ptr<string> triggerRuleType_ {};
              };

              class DailyUnfinishedConfig : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const DailyUnfinishedConfig& obj) { 
                  DARABONBA_PTR_TO_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
                };
                friend void from_json(const Darabonba::Json& j, DailyUnfinishedConfig& obj) { 
                  DARABONBA_PTR_FROM_JSON(FixedUnfinishedTime, fixedUnfinishedTime_);
                };
                DailyUnfinishedConfig() = default ;
                DailyUnfinishedConfig(const DailyUnfinishedConfig &) = default ;
                DailyUnfinishedConfig(DailyUnfinishedConfig &&) = default ;
                DailyUnfinishedConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~DailyUnfinishedConfig() = default ;
                DailyUnfinishedConfig& operator=(const DailyUnfinishedConfig &) = default ;
                DailyUnfinishedConfig& operator=(DailyUnfinishedConfig &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->fixedUnfinishedTime_ == nullptr; };
                // fixedUnfinishedTime Field Functions 
                bool hasFixedUnfinishedTime() const { return this->fixedUnfinishedTime_ != nullptr;};
                void deleteFixedUnfinishedTime() { this->fixedUnfinishedTime_ = nullptr;};
                inline string getFixedUnfinishedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedUnfinishedTime_, "") };
                inline DailyUnfinishedConfig& setFixedUnfinishedTime(string fixedUnfinishedTime) { DARABONBA_PTR_SET_VALUE(fixedUnfinishedTime_, fixedUnfinishedTime) };


              protected:
                // The time of day for the unfinished check, in HH:mm format.
                shared_ptr<string> fixedUnfinishedTime_ {};
              };

              virtual bool empty() const override { return this->dailyUnfinishedConfig_ == nullptr
        && this->multiPeriodUnfinishedConfig_ == nullptr; };
              // dailyUnfinishedConfig Field Functions 
              bool hasDailyUnfinishedConfig() const { return this->dailyUnfinishedConfig_ != nullptr;};
              void deleteDailyUnfinishedConfig() { this->dailyUnfinishedConfig_ = nullptr;};
              inline const UnfinishedRuleDetailConfig::DailyUnfinishedConfig & getDailyUnfinishedConfig() const { DARABONBA_PTR_GET_CONST(dailyUnfinishedConfig_, UnfinishedRuleDetailConfig::DailyUnfinishedConfig) };
              inline UnfinishedRuleDetailConfig::DailyUnfinishedConfig getDailyUnfinishedConfig() { DARABONBA_PTR_GET(dailyUnfinishedConfig_, UnfinishedRuleDetailConfig::DailyUnfinishedConfig) };
              inline UnfinishedRuleDetailConfig& setDailyUnfinishedConfig(const UnfinishedRuleDetailConfig::DailyUnfinishedConfig & dailyUnfinishedConfig) { DARABONBA_PTR_SET_VALUE(dailyUnfinishedConfig_, dailyUnfinishedConfig) };
              inline UnfinishedRuleDetailConfig& setDailyUnfinishedConfig(UnfinishedRuleDetailConfig::DailyUnfinishedConfig && dailyUnfinishedConfig) { DARABONBA_PTR_SET_RVALUE(dailyUnfinishedConfig_, dailyUnfinishedConfig) };


              // multiPeriodUnfinishedConfig Field Functions 
              bool hasMultiPeriodUnfinishedConfig() const { return this->multiPeriodUnfinishedConfig_ != nullptr;};
              void deleteMultiPeriodUnfinishedConfig() { this->multiPeriodUnfinishedConfig_ = nullptr;};
              inline const UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig & getMultiPeriodUnfinishedConfig() const { DARABONBA_PTR_GET_CONST(multiPeriodUnfinishedConfig_, UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig) };
              inline UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig getMultiPeriodUnfinishedConfig() { DARABONBA_PTR_GET(multiPeriodUnfinishedConfig_, UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig) };
              inline UnfinishedRuleDetailConfig& setMultiPeriodUnfinishedConfig(const UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig & multiPeriodUnfinishedConfig) { DARABONBA_PTR_SET_VALUE(multiPeriodUnfinishedConfig_, multiPeriodUnfinishedConfig) };
              inline UnfinishedRuleDetailConfig& setMultiPeriodUnfinishedConfig(UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig && multiPeriodUnfinishedConfig) { DARABONBA_PTR_SET_RVALUE(multiPeriodUnfinishedConfig_, multiPeriodUnfinishedConfig) };


            protected:
              // The daily configuration for unfinished tasks.
              shared_ptr<UnfinishedRuleDetailConfig::DailyUnfinishedConfig> dailyUnfinishedConfig_ {};
              // The multi-period unfinished configuration.
              shared_ptr<UnfinishedRuleDetailConfig::MultiPeriodUnfinishedConfig> multiPeriodUnfinishedConfig_ {};
            };

            virtual bool empty() const override { return this->alertReasonType_ == nullptr
        && this->fixedElapsedTime_ == nullptr && this->fixedUnfinishedTime_ == nullptr && this->unfinishedRuleDetailConfig_ == nullptr; };
            // alertReasonType Field Functions 
            bool hasAlertReasonType() const { return this->alertReasonType_ != nullptr;};
            void deleteAlertReasonType() { this->alertReasonType_ = nullptr;};
            inline string getAlertReasonType() const { DARABONBA_PTR_GET_DEFAULT(alertReasonType_, "") };
            inline AlertReason& setAlertReasonType(string alertReasonType) { DARABONBA_PTR_SET_VALUE(alertReasonType_, alertReasonType) };


            // fixedElapsedTime Field Functions 
            bool hasFixedElapsedTime() const { return this->fixedElapsedTime_ != nullptr;};
            void deleteFixedElapsedTime() { this->fixedElapsedTime_ = nullptr;};
            inline int64_t getFixedElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedElapsedTime_, 0L) };
            inline AlertReason& setFixedElapsedTime(int64_t fixedElapsedTime) { DARABONBA_PTR_SET_VALUE(fixedElapsedTime_, fixedElapsedTime) };


            // fixedUnfinishedTime Field Functions 
            bool hasFixedUnfinishedTime() const { return this->fixedUnfinishedTime_ != nullptr;};
            void deleteFixedUnfinishedTime() { this->fixedUnfinishedTime_ = nullptr;};
            inline string getFixedUnfinishedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedUnfinishedTime_, "") };
            inline AlertReason& setFixedUnfinishedTime(string fixedUnfinishedTime) { DARABONBA_PTR_SET_VALUE(fixedUnfinishedTime_, fixedUnfinishedTime) };


            // unfinishedRuleDetailConfig Field Functions 
            bool hasUnfinishedRuleDetailConfig() const { return this->unfinishedRuleDetailConfig_ != nullptr;};
            void deleteUnfinishedRuleDetailConfig() { this->unfinishedRuleDetailConfig_ = nullptr;};
            inline const AlertReason::UnfinishedRuleDetailConfig & getUnfinishedRuleDetailConfig() const { DARABONBA_PTR_GET_CONST(unfinishedRuleDetailConfig_, AlertReason::UnfinishedRuleDetailConfig) };
            inline AlertReason::UnfinishedRuleDetailConfig getUnfinishedRuleDetailConfig() { DARABONBA_PTR_GET(unfinishedRuleDetailConfig_, AlertReason::UnfinishedRuleDetailConfig) };
            inline AlertReason& setUnfinishedRuleDetailConfig(const AlertReason::UnfinishedRuleDetailConfig & unfinishedRuleDetailConfig) { DARABONBA_PTR_SET_VALUE(unfinishedRuleDetailConfig_, unfinishedRuleDetailConfig) };
            inline AlertReason& setUnfinishedRuleDetailConfig(AlertReason::UnfinishedRuleDetailConfig && unfinishedRuleDetailConfig) { DARABONBA_PTR_SET_RVALUE(unfinishedRuleDetailConfig_, unfinishedRuleDetailConfig) };


          protected:
            // The type of the alert reason. Valid values: FAILED, TIME_OUT, UNFINISHED, SUCCESS, and DATA_DELAY.
            shared_ptr<string> alertReasonType_ {};
            // The timeout period in minutes. This parameter is returned only when the alert reason type is TIME_OUT.
            shared_ptr<int64_t> fixedElapsedTime_ {};
            // The daily check time for unfinished tasks in HH:mm format. This parameter is returned only when the alert reason type is UNFINISHED.
            shared_ptr<string> fixedUnfinishedTime_ {};
            // The detailed configuration of the unfinished rule. This parameter is returned only when the alert reason type is UNFINISHED.
            shared_ptr<AlertReason::UnfinishedRuleDetailConfig> unfinishedRuleDetailConfig_ {};
          };

          virtual bool empty() const override { return this->alertReason_ == nullptr
        && this->alertStrategy_ == nullptr && this->createTime_ == nullptr && this->creator_ == nullptr && this->id_ == nullptr && this->modifiedTime_ == nullptr
        && this->modifier_ == nullptr && this->monitoredItemId_ == nullptr && this->projectId_ == nullptr && this->switchStatus_ == nullptr && this->tenantId_ == nullptr; };
          // alertReason Field Functions 
          bool hasAlertReason() const { return this->alertReason_ != nullptr;};
          void deleteAlertReason() { this->alertReason_ = nullptr;};
          inline const MonitoredRuleList::AlertReason & getAlertReason() const { DARABONBA_PTR_GET_CONST(alertReason_, MonitoredRuleList::AlertReason) };
          inline MonitoredRuleList::AlertReason getAlertReason() { DARABONBA_PTR_GET(alertReason_, MonitoredRuleList::AlertReason) };
          inline MonitoredRuleList& setAlertReason(const MonitoredRuleList::AlertReason & alertReason) { DARABONBA_PTR_SET_VALUE(alertReason_, alertReason) };
          inline MonitoredRuleList& setAlertReason(MonitoredRuleList::AlertReason && alertReason) { DARABONBA_PTR_SET_RVALUE(alertReason_, alertReason) };


          // alertStrategy Field Functions 
          bool hasAlertStrategy() const { return this->alertStrategy_ != nullptr;};
          void deleteAlertStrategy() { this->alertStrategy_ = nullptr;};
          inline const MonitoredRuleList::AlertStrategy & getAlertStrategy() const { DARABONBA_PTR_GET_CONST(alertStrategy_, MonitoredRuleList::AlertStrategy) };
          inline MonitoredRuleList::AlertStrategy getAlertStrategy() { DARABONBA_PTR_GET(alertStrategy_, MonitoredRuleList::AlertStrategy) };
          inline MonitoredRuleList& setAlertStrategy(const MonitoredRuleList::AlertStrategy & alertStrategy) { DARABONBA_PTR_SET_VALUE(alertStrategy_, alertStrategy) };
          inline MonitoredRuleList& setAlertStrategy(MonitoredRuleList::AlertStrategy && alertStrategy) { DARABONBA_PTR_SET_RVALUE(alertStrategy_, alertStrategy) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline MonitoredRuleList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // creator Field Functions 
          bool hasCreator() const { return this->creator_ != nullptr;};
          void deleteCreator() { this->creator_ = nullptr;};
          inline const MonitoredRuleList::Creator & getCreator() const { DARABONBA_PTR_GET_CONST(creator_, MonitoredRuleList::Creator) };
          inline MonitoredRuleList::Creator getCreator() { DARABONBA_PTR_GET(creator_, MonitoredRuleList::Creator) };
          inline MonitoredRuleList& setCreator(const MonitoredRuleList::Creator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
          inline MonitoredRuleList& setCreator(MonitoredRuleList::Creator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline MonitoredRuleList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // modifiedTime Field Functions 
          bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
          void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
          inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
          inline MonitoredRuleList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


          // modifier Field Functions 
          bool hasModifier() const { return this->modifier_ != nullptr;};
          void deleteModifier() { this->modifier_ = nullptr;};
          inline const MonitoredRuleList::Modifier & getModifier() const { DARABONBA_PTR_GET_CONST(modifier_, MonitoredRuleList::Modifier) };
          inline MonitoredRuleList::Modifier getModifier() { DARABONBA_PTR_GET(modifier_, MonitoredRuleList::Modifier) };
          inline MonitoredRuleList& setModifier(const MonitoredRuleList::Modifier & modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };
          inline MonitoredRuleList& setModifier(MonitoredRuleList::Modifier && modifier) { DARABONBA_PTR_SET_RVALUE(modifier_, modifier) };


          // monitoredItemId Field Functions 
          bool hasMonitoredItemId() const { return this->monitoredItemId_ != nullptr;};
          void deleteMonitoredItemId() { this->monitoredItemId_ = nullptr;};
          inline int64_t getMonitoredItemId() const { DARABONBA_PTR_GET_DEFAULT(monitoredItemId_, 0L) };
          inline MonitoredRuleList& setMonitoredItemId(int64_t monitoredItemId) { DARABONBA_PTR_SET_VALUE(monitoredItemId_, monitoredItemId) };


          // projectId Field Functions 
          bool hasProjectId() const { return this->projectId_ != nullptr;};
          void deleteProjectId() { this->projectId_ = nullptr;};
          inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
          inline MonitoredRuleList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


          // switchStatus Field Functions 
          bool hasSwitchStatus() const { return this->switchStatus_ != nullptr;};
          void deleteSwitchStatus() { this->switchStatus_ = nullptr;};
          inline bool getSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(switchStatus_, false) };
          inline MonitoredRuleList& setSwitchStatus(bool switchStatus) { DARABONBA_PTR_SET_VALUE(switchStatus_, switchStatus) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
          inline MonitoredRuleList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        protected:
          // The reason for the alert.
          shared_ptr<MonitoredRuleList::AlertReason> alertReason_ {};
          // The alert strategy.
          shared_ptr<MonitoredRuleList::AlertStrategy> alertStrategy_ {};
          // The creation time.
          shared_ptr<string> createTime_ {};
          // The creator.
          shared_ptr<MonitoredRuleList::Creator> creator_ {};
          // The monitoring rule ID.
          shared_ptr<int64_t> id_ {};
          // The last modification time.
          shared_ptr<string> modifiedTime_ {};
          // The last modifier.
          shared_ptr<MonitoredRuleList::Modifier> modifier_ {};
          // The ID of the associated monitoring item.
          shared_ptr<int64_t> monitoredItemId_ {};
          // The project ID.
          shared_ptr<int64_t> projectId_ {};
          // The enablement status of the rule.
          shared_ptr<bool> switchStatus_ {};
          // The tenant ID.
          shared_ptr<string> tenantId_ {};
        };

        class MonitorNodeRange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MonitorNodeRange& obj) { 
            DARABONBA_PTR_TO_JSON(FilterRuleList, filterRuleList_);
          };
          friend void from_json(const Darabonba::Json& j, MonitorNodeRange& obj) { 
            DARABONBA_PTR_FROM_JSON(FilterRuleList, filterRuleList_);
          };
          MonitorNodeRange() = default ;
          MonitorNodeRange(const MonitorNodeRange &) = default ;
          MonitorNodeRange(MonitorNodeRange &&) = default ;
          MonitorNodeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MonitorNodeRange() = default ;
          MonitorNodeRange& operator=(const MonitorNodeRange &) = default ;
          MonitorNodeRange& operator=(MonitorNodeRange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FilterRuleList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FilterRuleList& obj) { 
              DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
              DARABONBA_PTR_TO_JSON(FilterValueList, filterValueList_);
              DARABONBA_PTR_TO_JSON(IsExclude, isExclude_);
            };
            friend void from_json(const Darabonba::Json& j, FilterRuleList& obj) { 
              DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
              DARABONBA_PTR_FROM_JSON(FilterValueList, filterValueList_);
              DARABONBA_PTR_FROM_JSON(IsExclude, isExclude_);
            };
            FilterRuleList() = default ;
            FilterRuleList(const FilterRuleList &) = default ;
            FilterRuleList(FilterRuleList &&) = default ;
            FilterRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FilterRuleList() = default ;
            FilterRuleList& operator=(const FilterRuleList &) = default ;
            FilterRuleList& operator=(FilterRuleList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->filterKey_ == nullptr
        && this->filterValueList_ == nullptr && this->isExclude_ == nullptr; };
            // filterKey Field Functions 
            bool hasFilterKey() const { return this->filterKey_ != nullptr;};
            void deleteFilterKey() { this->filterKey_ = nullptr;};
            inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
            inline FilterRuleList& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


            // filterValueList Field Functions 
            bool hasFilterValueList() const { return this->filterValueList_ != nullptr;};
            void deleteFilterValueList() { this->filterValueList_ = nullptr;};
            inline const vector<string> & getFilterValueList() const { DARABONBA_PTR_GET_CONST(filterValueList_, vector<string>) };
            inline vector<string> getFilterValueList() { DARABONBA_PTR_GET(filterValueList_, vector<string>) };
            inline FilterRuleList& setFilterValueList(const vector<string> & filterValueList) { DARABONBA_PTR_SET_VALUE(filterValueList_, filterValueList) };
            inline FilterRuleList& setFilterValueList(vector<string> && filterValueList) { DARABONBA_PTR_SET_RVALUE(filterValueList_, filterValueList) };


            // isExclude Field Functions 
            bool hasIsExclude() const { return this->isExclude_ != nullptr;};
            void deleteIsExclude() { this->isExclude_ = nullptr;};
            inline bool getIsExclude() const { DARABONBA_PTR_GET_DEFAULT(isExclude_, false) };
            inline FilterRuleList& setIsExclude(bool isExclude) { DARABONBA_PTR_SET_VALUE(isExclude_, isExclude) };


          protected:
            // The filter key.
            shared_ptr<string> filterKey_ {};
            // The list of filter values.
            shared_ptr<vector<string>> filterValueList_ {};
            // Specifies whether to invert the selection.
            shared_ptr<bool> isExclude_ {};
          };

          virtual bool empty() const override { return this->filterRuleList_ == nullptr; };
          // filterRuleList Field Functions 
          bool hasFilterRuleList() const { return this->filterRuleList_ != nullptr;};
          void deleteFilterRuleList() { this->filterRuleList_ = nullptr;};
          inline const vector<MonitorNodeRange::FilterRuleList> & getFilterRuleList() const { DARABONBA_PTR_GET_CONST(filterRuleList_, vector<MonitorNodeRange::FilterRuleList>) };
          inline vector<MonitorNodeRange::FilterRuleList> getFilterRuleList() { DARABONBA_PTR_GET(filterRuleList_, vector<MonitorNodeRange::FilterRuleList>) };
          inline MonitorNodeRange& setFilterRuleList(const vector<MonitorNodeRange::FilterRuleList> & filterRuleList) { DARABONBA_PTR_SET_VALUE(filterRuleList_, filterRuleList) };
          inline MonitorNodeRange& setFilterRuleList(vector<MonitorNodeRange::FilterRuleList> && filterRuleList) { DARABONBA_PTR_SET_RVALUE(filterRuleList_, filterRuleList) };


        protected:
          // The list of filter rules.
          shared_ptr<vector<MonitorNodeRange::FilterRuleList>> filterRuleList_ {};
        };

        class LogicTable : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogicTable& obj) { 
            DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NodeSubType, nodeSubType_);
            DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
            DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
            DARABONBA_PTR_TO_JSON(SchedulePeriodType, schedulePeriodType_);
            DARABONBA_PTR_TO_JSON(SupportDataDelay, supportDataDelay_);
          };
          friend void from_json(const Darabonba::Json& j, LogicTable& obj) { 
            DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NodeSubType, nodeSubType_);
            DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
            DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
            DARABONBA_PTR_FROM_JSON(SchedulePeriodType, schedulePeriodType_);
            DARABONBA_PTR_FROM_JSON(SupportDataDelay, supportDataDelay_);
          };
          LogicTable() = default ;
          LogicTable(const LogicTable &) = default ;
          LogicTable(LogicTable &&) = default ;
          LogicTable(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogicTable() = default ;
          LogicTable& operator=(const LogicTable &) = default ;
          LogicTable& operator=(LogicTable &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->nodeSubType_ == nullptr && this->ownerIdList_ == nullptr && this->projectName_ == nullptr
        && this->schedulePeriodType_ == nullptr && this->supportDataDelay_ == nullptr; };
          // bizUnitId Field Functions 
          bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
          void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
          inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
          inline LogicTable& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline LogicTable& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LogicTable& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nodeSubType Field Functions 
          bool hasNodeSubType() const { return this->nodeSubType_ != nullptr;};
          void deleteNodeSubType() { this->nodeSubType_ = nullptr;};
          inline string getNodeSubType() const { DARABONBA_PTR_GET_DEFAULT(nodeSubType_, "") };
          inline LogicTable& setNodeSubType(string nodeSubType) { DARABONBA_PTR_SET_VALUE(nodeSubType_, nodeSubType) };


          // ownerIdList Field Functions 
          bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
          void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
          inline const vector<string> & getOwnerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, vector<string>) };
          inline vector<string> getOwnerIdList() { DARABONBA_PTR_GET(ownerIdList_, vector<string>) };
          inline LogicTable& setOwnerIdList(const vector<string> & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
          inline LogicTable& setOwnerIdList(vector<string> && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


          // projectName Field Functions 
          bool hasProjectName() const { return this->projectName_ != nullptr;};
          void deleteProjectName() { this->projectName_ = nullptr;};
          inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
          inline LogicTable& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


          // schedulePeriodType Field Functions 
          bool hasSchedulePeriodType() const { return this->schedulePeriodType_ != nullptr;};
          void deleteSchedulePeriodType() { this->schedulePeriodType_ = nullptr;};
          inline string getSchedulePeriodType() const { DARABONBA_PTR_GET_DEFAULT(schedulePeriodType_, "") };
          inline LogicTable& setSchedulePeriodType(string schedulePeriodType) { DARABONBA_PTR_SET_VALUE(schedulePeriodType_, schedulePeriodType) };


          // supportDataDelay Field Functions 
          bool hasSupportDataDelay() const { return this->supportDataDelay_ != nullptr;};
          void deleteSupportDataDelay() { this->supportDataDelay_ = nullptr;};
          inline bool getSupportDataDelay() const { DARABONBA_PTR_GET_DEFAULT(supportDataDelay_, false) };
          inline LogicTable& setSupportDataDelay(bool supportDataDelay) { DARABONBA_PTR_SET_VALUE(supportDataDelay_, supportDataDelay) };


        protected:
          // The ID of the business segment.
          shared_ptr<int64_t> bizUnitId_ {};
          // The ID of the monitoring task.
          shared_ptr<string> id_ {};
          // The name of the monitoring task.
          shared_ptr<string> name_ {};
          // The subtype of the node.
          shared_ptr<string> nodeSubType_ {};
          // The list of O&M owner IDs.
          shared_ptr<vector<string>> ownerIdList_ {};
          // The name of the project to which the task belongs.
          shared_ptr<string> projectName_ {};
          // The type of the scheduling period.
          shared_ptr<string> schedulePeriodType_ {};
          // Specifies whether data delay is supported.
          shared_ptr<bool> supportDataDelay_ {};
        };

        class BizUnit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BizUnit& obj) { 
            DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, BizUnit& obj) { 
            DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          BizUnit() = default ;
          BizUnit(const BizUnit &) = default ;
          BizUnit(BizUnit &&) = default ;
          BizUnit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BizUnit() = default ;
          BizUnit& operator=(const BizUnit &) = default ;
          BizUnit& operator=(BizUnit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline BizUnit& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline BizUnit& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline BizUnit& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // The display name of the business segment.
          shared_ptr<string> displayName_ {};
          // The ID of the business segment.
          shared_ptr<int64_t> id_ {};
          // The name of the business segment.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->bizUnit_ == nullptr
        && this->createTime_ == nullptr && this->logicTable_ == nullptr && this->modifiedTime_ == nullptr && this->monitorNodeRange_ == nullptr && this->monitoredItemId_ == nullptr
        && this->monitoredRuleList_ == nullptr && this->monitoredTask_ == nullptr && this->projectId_ == nullptr && this->projectInfo_ == nullptr && this->subType_ == nullptr
        && this->tenantId_ == nullptr && this->type_ == nullptr; };
        // bizUnit Field Functions 
        bool hasBizUnit() const { return this->bizUnit_ != nullptr;};
        void deleteBizUnit() { this->bizUnit_ = nullptr;};
        inline const MonitorItemList::BizUnit & getBizUnit() const { DARABONBA_PTR_GET_CONST(bizUnit_, MonitorItemList::BizUnit) };
        inline MonitorItemList::BizUnit getBizUnit() { DARABONBA_PTR_GET(bizUnit_, MonitorItemList::BizUnit) };
        inline MonitorItemList& setBizUnit(const MonitorItemList::BizUnit & bizUnit) { DARABONBA_PTR_SET_VALUE(bizUnit_, bizUnit) };
        inline MonitorItemList& setBizUnit(MonitorItemList::BizUnit && bizUnit) { DARABONBA_PTR_SET_RVALUE(bizUnit_, bizUnit) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline MonitorItemList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // logicTable Field Functions 
        bool hasLogicTable() const { return this->logicTable_ != nullptr;};
        void deleteLogicTable() { this->logicTable_ = nullptr;};
        inline const MonitorItemList::LogicTable & getLogicTable() const { DARABONBA_PTR_GET_CONST(logicTable_, MonitorItemList::LogicTable) };
        inline MonitorItemList::LogicTable getLogicTable() { DARABONBA_PTR_GET(logicTable_, MonitorItemList::LogicTable) };
        inline MonitorItemList& setLogicTable(const MonitorItemList::LogicTable & logicTable) { DARABONBA_PTR_SET_VALUE(logicTable_, logicTable) };
        inline MonitorItemList& setLogicTable(MonitorItemList::LogicTable && logicTable) { DARABONBA_PTR_SET_RVALUE(logicTable_, logicTable) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline MonitorItemList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // monitorNodeRange Field Functions 
        bool hasMonitorNodeRange() const { return this->monitorNodeRange_ != nullptr;};
        void deleteMonitorNodeRange() { this->monitorNodeRange_ = nullptr;};
        inline const MonitorItemList::MonitorNodeRange & getMonitorNodeRange() const { DARABONBA_PTR_GET_CONST(monitorNodeRange_, MonitorItemList::MonitorNodeRange) };
        inline MonitorItemList::MonitorNodeRange getMonitorNodeRange() { DARABONBA_PTR_GET(monitorNodeRange_, MonitorItemList::MonitorNodeRange) };
        inline MonitorItemList& setMonitorNodeRange(const MonitorItemList::MonitorNodeRange & monitorNodeRange) { DARABONBA_PTR_SET_VALUE(monitorNodeRange_, monitorNodeRange) };
        inline MonitorItemList& setMonitorNodeRange(MonitorItemList::MonitorNodeRange && monitorNodeRange) { DARABONBA_PTR_SET_RVALUE(monitorNodeRange_, monitorNodeRange) };


        // monitoredItemId Field Functions 
        bool hasMonitoredItemId() const { return this->monitoredItemId_ != nullptr;};
        void deleteMonitoredItemId() { this->monitoredItemId_ = nullptr;};
        inline int64_t getMonitoredItemId() const { DARABONBA_PTR_GET_DEFAULT(monitoredItemId_, 0L) };
        inline MonitorItemList& setMonitoredItemId(int64_t monitoredItemId) { DARABONBA_PTR_SET_VALUE(monitoredItemId_, monitoredItemId) };


        // monitoredRuleList Field Functions 
        bool hasMonitoredRuleList() const { return this->monitoredRuleList_ != nullptr;};
        void deleteMonitoredRuleList() { this->monitoredRuleList_ = nullptr;};
        inline const vector<MonitorItemList::MonitoredRuleList> & getMonitoredRuleList() const { DARABONBA_PTR_GET_CONST(monitoredRuleList_, vector<MonitorItemList::MonitoredRuleList>) };
        inline vector<MonitorItemList::MonitoredRuleList> getMonitoredRuleList() { DARABONBA_PTR_GET(monitoredRuleList_, vector<MonitorItemList::MonitoredRuleList>) };
        inline MonitorItemList& setMonitoredRuleList(const vector<MonitorItemList::MonitoredRuleList> & monitoredRuleList) { DARABONBA_PTR_SET_VALUE(monitoredRuleList_, monitoredRuleList) };
        inline MonitorItemList& setMonitoredRuleList(vector<MonitorItemList::MonitoredRuleList> && monitoredRuleList) { DARABONBA_PTR_SET_RVALUE(monitoredRuleList_, monitoredRuleList) };


        // monitoredTask Field Functions 
        bool hasMonitoredTask() const { return this->monitoredTask_ != nullptr;};
        void deleteMonitoredTask() { this->monitoredTask_ = nullptr;};
        inline const MonitorItemList::MonitoredTask & getMonitoredTask() const { DARABONBA_PTR_GET_CONST(monitoredTask_, MonitorItemList::MonitoredTask) };
        inline MonitorItemList::MonitoredTask getMonitoredTask() { DARABONBA_PTR_GET(monitoredTask_, MonitorItemList::MonitoredTask) };
        inline MonitorItemList& setMonitoredTask(const MonitorItemList::MonitoredTask & monitoredTask) { DARABONBA_PTR_SET_VALUE(monitoredTask_, monitoredTask) };
        inline MonitorItemList& setMonitoredTask(MonitorItemList::MonitoredTask && monitoredTask) { DARABONBA_PTR_SET_RVALUE(monitoredTask_, monitoredTask) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline MonitorItemList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectInfo Field Functions 
        bool hasProjectInfo() const { return this->projectInfo_ != nullptr;};
        void deleteProjectInfo() { this->projectInfo_ = nullptr;};
        inline const MonitorItemList::ProjectInfo & getProjectInfo() const { DARABONBA_PTR_GET_CONST(projectInfo_, MonitorItemList::ProjectInfo) };
        inline MonitorItemList::ProjectInfo getProjectInfo() { DARABONBA_PTR_GET(projectInfo_, MonitorItemList::ProjectInfo) };
        inline MonitorItemList& setProjectInfo(const MonitorItemList::ProjectInfo & projectInfo) { DARABONBA_PTR_SET_VALUE(projectInfo_, projectInfo) };
        inline MonitorItemList& setProjectInfo(MonitorItemList::ProjectInfo && projectInfo) { DARABONBA_PTR_SET_RVALUE(projectInfo_, projectInfo) };


        // subType Field Functions 
        bool hasSubType() const { return this->subType_ != nullptr;};
        void deleteSubType() { this->subType_ = nullptr;};
        inline string getSubType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
        inline MonitorItemList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline MonitorItemList& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline MonitorItemList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The business segment information.
        shared_ptr<MonitorItemList::BizUnit> bizUnit_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The logical table information.
        shared_ptr<MonitorItemList::LogicTable> logicTable_ {};
        // The last modification time.
        shared_ptr<string> modifiedTime_ {};
        // The scope of the monitoring task.
        shared_ptr<MonitorItemList::MonitorNodeRange> monitorNodeRange_ {};
        // The ID of the monitored object.
        shared_ptr<int64_t> monitoredItemId_ {};
        // The list of monitoring rules.
        shared_ptr<vector<MonitorItemList::MonitoredRuleList>> monitoredRuleList_ {};
        // The monitored task information.
        shared_ptr<MonitorItemList::MonitoredTask> monitoredTask_ {};
        // The project ID.
        shared_ptr<int64_t> projectId_ {};
        // The project information.
        shared_ptr<MonitorItemList::ProjectInfo> projectInfo_ {};
        // The business subtype.
        shared_ptr<string> subType_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // The monitored object type.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->monitorItemList_ == nullptr
        && this->totalCount_ == nullptr; };
      // monitorItemList Field Functions 
      bool hasMonitorItemList() const { return this->monitorItemList_ != nullptr;};
      void deleteMonitorItemList() { this->monitorItemList_ = nullptr;};
      inline const vector<PageResult::MonitorItemList> & getMonitorItemList() const { DARABONBA_PTR_GET_CONST(monitorItemList_, vector<PageResult::MonitorItemList>) };
      inline vector<PageResult::MonitorItemList> getMonitorItemList() { DARABONBA_PTR_GET(monitorItemList_, vector<PageResult::MonitorItemList>) };
      inline PageResult& setMonitorItemList(const vector<PageResult::MonitorItemList> & monitorItemList) { DARABONBA_PTR_SET_VALUE(monitorItemList_, monitorItemList) };
      inline PageResult& setMonitorItemList(vector<PageResult::MonitorItemList> && monitorItemList) { DARABONBA_PTR_SET_RVALUE(monitorItemList_, monitorItemList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of monitored objects on the current page.
      shared_ptr<vector<PageResult::MonitorItemList>> monitorItemList_ {};
      // The total number of monitored objects that meet the conditions.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListScheduleMonitorResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListScheduleMonitorResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScheduleMonitorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListScheduleMonitorResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListScheduleMonitorResponseBody::PageResult) };
    inline ListScheduleMonitorResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListScheduleMonitorResponseBody::PageResult) };
    inline ListScheduleMonitorResponseBody& setPageResult(const ListScheduleMonitorResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListScheduleMonitorResponseBody& setPageResult(ListScheduleMonitorResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScheduleMonitorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListScheduleMonitorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code of the request. A value of OK indicates that the request is successful.
    shared_ptr<string> code_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message of the request.
    shared_ptr<string> message_ {};
    // The paginated result of the scheduling monitoring alert query.
    shared_ptr<ListScheduleMonitorResponseBody::PageResult> pageResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
