// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKFLOWSBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListTaskFlowsByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskFlowsByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskFlowList, taskFlowList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskFlowsByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskFlowList, taskFlowList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTaskFlowsByPageResponseBody() = default ;
    ListTaskFlowsByPageResponseBody(const ListTaskFlowsByPageResponseBody &) = default ;
    ListTaskFlowsByPageResponseBody(ListTaskFlowsByPageResponseBody &&) = default ;
    ListTaskFlowsByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskFlowsByPageResponseBody() = default ;
    ListTaskFlowsByPageResponseBody& operator=(const ListTaskFlowsByPageResponseBody &) = default ;
    ListTaskFlowsByPageResponseBody& operator=(ListTaskFlowsByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskFlowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskFlowList& obj) { 
        DARABONBA_PTR_TO_JSON(TaskFlow, taskFlow_);
      };
      friend void from_json(const Darabonba::Json& j, TaskFlowList& obj) { 
        DARABONBA_PTR_FROM_JSON(TaskFlow, taskFlow_);
      };
      TaskFlowList() = default ;
      TaskFlowList(const TaskFlowList &) = default ;
      TaskFlowList(TaskFlowList &&) = default ;
      TaskFlowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskFlowList() = default ;
      TaskFlowList& operator=(const TaskFlowList &) = default ;
      TaskFlowList& operator=(TaskFlowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TaskFlow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskFlow& obj) { 
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_TO_JSON(CronBeginDate, cronBeginDate_);
          DARABONBA_PTR_TO_JSON(CronEndDate, cronEndDate_);
          DARABONBA_PTR_TO_JSON(CronStr, cronStr_);
          DARABONBA_PTR_TO_JSON(CronSwitch, cronSwitch_);
          DARABONBA_PTR_TO_JSON(CronType, cronType_);
          DARABONBA_PTR_TO_JSON(DagName, dagName_);
          DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
          DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_TO_JSON(DeployId, deployId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
          DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
          DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
          DARABONBA_PTR_TO_JSON(ScheduleParam, scheduleParam_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimeZoneId, timeZoneId_);
          DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
        };
        friend void from_json(const Darabonba::Json& j, TaskFlow& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_FROM_JSON(CronBeginDate, cronBeginDate_);
          DARABONBA_PTR_FROM_JSON(CronEndDate, cronEndDate_);
          DARABONBA_PTR_FROM_JSON(CronStr, cronStr_);
          DARABONBA_PTR_FROM_JSON(CronSwitch, cronSwitch_);
          DARABONBA_PTR_FROM_JSON(CronType, cronType_);
          DARABONBA_PTR_FROM_JSON(DagName, dagName_);
          DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
          DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
          DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
          DARABONBA_PTR_FROM_JSON(ScheduleParam, scheduleParam_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimeZoneId, timeZoneId_);
          DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
        };
        TaskFlow() = default ;
        TaskFlow(const TaskFlow &) = default ;
        TaskFlow(TaskFlow &&) = default ;
        TaskFlow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskFlow() = default ;
        TaskFlow& operator=(const TaskFlow &) = default ;
        TaskFlow& operator=(TaskFlow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->creatorNickName_ == nullptr && this->cronBeginDate_ == nullptr && this->cronEndDate_ == nullptr && this->cronStr_ == nullptr && this->cronSwitch_ == nullptr
        && this->cronType_ == nullptr && this->dagName_ == nullptr && this->dagOwnerId_ == nullptr && this->dagOwnerNickName_ == nullptr && this->deployId_ == nullptr
        && this->description_ == nullptr && this->id_ == nullptr && this->latestInstanceStatus_ == nullptr && this->latestInstanceTime_ == nullptr && this->scenarioId_ == nullptr
        && this->scheduleParam_ == nullptr && this->status_ == nullptr && this->timeZoneId_ == nullptr && this->triggerType_ == nullptr; };
        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline TaskFlow& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorNickName Field Functions 
        bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
        void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
        inline string getCreatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
        inline TaskFlow& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


        // cronBeginDate Field Functions 
        bool hasCronBeginDate() const { return this->cronBeginDate_ != nullptr;};
        void deleteCronBeginDate() { this->cronBeginDate_ = nullptr;};
        inline string getCronBeginDate() const { DARABONBA_PTR_GET_DEFAULT(cronBeginDate_, "") };
        inline TaskFlow& setCronBeginDate(string cronBeginDate) { DARABONBA_PTR_SET_VALUE(cronBeginDate_, cronBeginDate) };


        // cronEndDate Field Functions 
        bool hasCronEndDate() const { return this->cronEndDate_ != nullptr;};
        void deleteCronEndDate() { this->cronEndDate_ = nullptr;};
        inline string getCronEndDate() const { DARABONBA_PTR_GET_DEFAULT(cronEndDate_, "") };
        inline TaskFlow& setCronEndDate(string cronEndDate) { DARABONBA_PTR_SET_VALUE(cronEndDate_, cronEndDate) };


        // cronStr Field Functions 
        bool hasCronStr() const { return this->cronStr_ != nullptr;};
        void deleteCronStr() { this->cronStr_ = nullptr;};
        inline string getCronStr() const { DARABONBA_PTR_GET_DEFAULT(cronStr_, "") };
        inline TaskFlow& setCronStr(string cronStr) { DARABONBA_PTR_SET_VALUE(cronStr_, cronStr) };


        // cronSwitch Field Functions 
        bool hasCronSwitch() const { return this->cronSwitch_ != nullptr;};
        void deleteCronSwitch() { this->cronSwitch_ = nullptr;};
        inline bool getCronSwitch() const { DARABONBA_PTR_GET_DEFAULT(cronSwitch_, false) };
        inline TaskFlow& setCronSwitch(bool cronSwitch) { DARABONBA_PTR_SET_VALUE(cronSwitch_, cronSwitch) };


        // cronType Field Functions 
        bool hasCronType() const { return this->cronType_ != nullptr;};
        void deleteCronType() { this->cronType_ = nullptr;};
        inline int32_t getCronType() const { DARABONBA_PTR_GET_DEFAULT(cronType_, 0) };
        inline TaskFlow& setCronType(int32_t cronType) { DARABONBA_PTR_SET_VALUE(cronType_, cronType) };


        // dagName Field Functions 
        bool hasDagName() const { return this->dagName_ != nullptr;};
        void deleteDagName() { this->dagName_ = nullptr;};
        inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
        inline TaskFlow& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


        // dagOwnerId Field Functions 
        bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
        void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
        inline string getDagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
        inline TaskFlow& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


        // dagOwnerNickName Field Functions 
        bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
        void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
        inline string getDagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
        inline TaskFlow& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


        // deployId Field Functions 
        bool hasDeployId() const { return this->deployId_ != nullptr;};
        void deleteDeployId() { this->deployId_ = nullptr;};
        inline int64_t getDeployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
        inline TaskFlow& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline TaskFlow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline TaskFlow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // latestInstanceStatus Field Functions 
        bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
        void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
        inline int32_t getLatestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
        inline TaskFlow& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


        // latestInstanceTime Field Functions 
        bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
        void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
        inline string getLatestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, "") };
        inline TaskFlow& setLatestInstanceTime(string latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


        // scenarioId Field Functions 
        bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
        void deleteScenarioId() { this->scenarioId_ = nullptr;};
        inline string getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, "") };
        inline TaskFlow& setScenarioId(string scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


        // scheduleParam Field Functions 
        bool hasScheduleParam() const { return this->scheduleParam_ != nullptr;};
        void deleteScheduleParam() { this->scheduleParam_ = nullptr;};
        inline string getScheduleParam() const { DARABONBA_PTR_GET_DEFAULT(scheduleParam_, "") };
        inline TaskFlow& setScheduleParam(string scheduleParam) { DARABONBA_PTR_SET_VALUE(scheduleParam_, scheduleParam) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline TaskFlow& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timeZoneId Field Functions 
        bool hasTimeZoneId() const { return this->timeZoneId_ != nullptr;};
        void deleteTimeZoneId() { this->timeZoneId_ = nullptr;};
        inline string getTimeZoneId() const { DARABONBA_PTR_GET_DEFAULT(timeZoneId_, "") };
        inline TaskFlow& setTimeZoneId(string timeZoneId) { DARABONBA_PTR_SET_VALUE(timeZoneId_, timeZoneId) };


        // triggerType Field Functions 
        bool hasTriggerType() const { return this->triggerType_ != nullptr;};
        void deleteTriggerType() { this->triggerType_ = nullptr;};
        inline int32_t getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, 0) };
        inline TaskFlow& setTriggerType(int32_t triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


      protected:
        // The ID of the user who created the task flow.
        shared_ptr<string> creatorId_ {};
        // The username of the user who created the task flow.
        shared_ptr<string> creatorNickName_ {};
        // The start time of scheduled scheduling. The task flow is not scheduled before this point in time.
        shared_ptr<string> cronBeginDate_ {};
        // The end time of scheduled scheduling. The task flow is not scheduled after this point in time.
        shared_ptr<string> cronEndDate_ {};
        // Scheduled Cron.
        shared_ptr<string> cronStr_ {};
        // Whether to enable scheduled scheduling.
        shared_ptr<bool> cronSwitch_ {};
        // Scheduling cycle type. Valid values:
        // - **2**: Hourly scheduling
        // - **3**: Daily scheduling
        // - **4**: Weekly scheduling
        // - **5**: Monthly scheduling
        shared_ptr<int32_t> cronType_ {};
        // The name of the task flow.
        shared_ptr<string> dagName_ {};
        // The user ID of the task flow owner.
        shared_ptr<string> dagOwnerId_ {};
        // The username of the owner of the task flow.
        shared_ptr<string> dagOwnerNickName_ {};
        // The ID of the last deployment record of the task flow.
        shared_ptr<int64_t> deployId_ {};
        // The description of the task flow.
        shared_ptr<string> description_ {};
        // The ID of the task flow.
        shared_ptr<int64_t> id_ {};
        // The status of the last execution of the task flow. Valid values:
        // 
        // *   **0**: invalid
        // *   **1**: scheduling disabled
        // *   **2**: waiting to be scheduled
        shared_ptr<int32_t> latestInstanceStatus_ {};
        // The time when the last execution record was created.
        shared_ptr<string> latestInstanceTime_ {};
        // The ID of the application scenario.
        shared_ptr<string> scenarioId_ {};
        // Event scheduling configuration, JSON string format.
        shared_ptr<string> scheduleParam_ {};
        // The status of the task flow. Valid values:
        // 
        // *   **0**: invalid
        // *   **1**: scheduling disabled
        // *   **2**: waiting to be scheduled
        shared_ptr<int32_t> status_ {};
        // Time zone setting. Default value: East 8(Asia/Shanghai).
        shared_ptr<string> timeZoneId_ {};
        // The trigger type. Valid values:
        // - **0**: Periodic scheduling
        // - **1**: Run manually
        shared_ptr<int32_t> triggerType_ {};
      };

      virtual bool empty() const override { return this->taskFlow_ == nullptr; };
      // taskFlow Field Functions 
      bool hasTaskFlow() const { return this->taskFlow_ != nullptr;};
      void deleteTaskFlow() { this->taskFlow_ = nullptr;};
      inline const vector<TaskFlowList::TaskFlow> & getTaskFlow() const { DARABONBA_PTR_GET_CONST(taskFlow_, vector<TaskFlowList::TaskFlow>) };
      inline vector<TaskFlowList::TaskFlow> getTaskFlow() { DARABONBA_PTR_GET(taskFlow_, vector<TaskFlowList::TaskFlow>) };
      inline TaskFlowList& setTaskFlow(const vector<TaskFlowList::TaskFlow> & taskFlow) { DARABONBA_PTR_SET_VALUE(taskFlow_, taskFlow) };
      inline TaskFlowList& setTaskFlow(vector<TaskFlowList::TaskFlow> && taskFlow) { DARABONBA_PTR_SET_RVALUE(taskFlow_, taskFlow) };


    protected:
      shared_ptr<vector<TaskFlowList::TaskFlow>> taskFlow_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->taskFlowList_ == nullptr && this->totalCount_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListTaskFlowsByPageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListTaskFlowsByPageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTaskFlowsByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTaskFlowsByPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskFlowList Field Functions 
    bool hasTaskFlowList() const { return this->taskFlowList_ != nullptr;};
    void deleteTaskFlowList() { this->taskFlowList_ = nullptr;};
    inline const ListTaskFlowsByPageResponseBody::TaskFlowList & getTaskFlowList() const { DARABONBA_PTR_GET_CONST(taskFlowList_, ListTaskFlowsByPageResponseBody::TaskFlowList) };
    inline ListTaskFlowsByPageResponseBody::TaskFlowList getTaskFlowList() { DARABONBA_PTR_GET(taskFlowList_, ListTaskFlowsByPageResponseBody::TaskFlowList) };
    inline ListTaskFlowsByPageResponseBody& setTaskFlowList(const ListTaskFlowsByPageResponseBody::TaskFlowList & taskFlowList) { DARABONBA_PTR_SET_VALUE(taskFlowList_, taskFlowList) };
    inline ListTaskFlowsByPageResponseBody& setTaskFlowList(ListTaskFlowsByPageResponseBody::TaskFlowList && taskFlowList) { DARABONBA_PTR_SET_RVALUE(taskFlowList_, taskFlowList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTaskFlowsByPageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The details of the returned task flows.
    shared_ptr<ListTaskFlowsByPageResponseBody::TaskFlowList> taskFlowList_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
