// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCESREQUEST_HPP_
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
  class ListTaskInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ids, ids_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceType, workflowInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ids, ids_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceType, workflowInstanceType_);
    };
    ListTaskInstancesRequest() = default ;
    ListTaskInstancesRequest(const ListTaskInstancesRequest &) = default ;
    ListTaskInstancesRequest(ListTaskInstancesRequest &&) = default ;
    ListTaskInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstancesRequest() = default ;
    ListTaskInstancesRequest& operator=(const ListTaskInstancesRequest &) = default ;
    ListTaskInstancesRequest& operator=(ListTaskInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizdate_ == nullptr
        && return this->id_ == nullptr && return this->ids_ == nullptr && return this->owner_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->projectEnv_ == nullptr && return this->projectId_ == nullptr && return this->runtimeResource_ == nullptr && return this->sortBy_ == nullptr && return this->status_ == nullptr
        && return this->taskId_ == nullptr && return this->taskIds_ == nullptr && return this->taskName_ == nullptr && return this->taskType_ == nullptr && return this->triggerRecurrence_ == nullptr
        && return this->triggerType_ == nullptr && return this->workflowId_ == nullptr && return this->workflowInstanceId_ == nullptr && return this->workflowInstanceType_ == nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListTaskInstancesRequest& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskInstancesRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ids Field Functions 
    bool hasIds() const { return this->ids_ != nullptr;};
    void deleteIds() { this->ids_ = nullptr;};
    inline const vector<int64_t> & ids() const { DARABONBA_PTR_GET_CONST(ids_, vector<int64_t>) };
    inline vector<int64_t> ids() { DARABONBA_PTR_GET(ids_, vector<int64_t>) };
    inline ListTaskInstancesRequest& setIds(const vector<int64_t> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
    inline ListTaskInstancesRequest& setIds(vector<int64_t> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListTaskInstancesRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTaskInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListTaskInstancesRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListTaskInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline string runtimeResource() const { DARABONBA_PTR_GET_DEFAULT(runtimeResource_, "") };
    inline ListTaskInstancesRequest& setRuntimeResource(string runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTaskInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListTaskInstancesRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<int64_t> & taskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<int64_t>) };
    inline vector<int64_t> taskIds() { DARABONBA_PTR_GET(taskIds_, vector<int64_t>) };
    inline ListTaskInstancesRequest& setTaskIds(const vector<int64_t> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ListTaskInstancesRequest& setTaskIds(vector<int64_t> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListTaskInstancesRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListTaskInstancesRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // triggerRecurrence Field Functions 
    bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
    void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
    inline string triggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
    inline ListTaskInstancesRequest& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListTaskInstancesRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListTaskInstancesRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline ListTaskInstancesRequest& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowInstanceType Field Functions 
    bool hasWorkflowInstanceType() const { return this->workflowInstanceType_ != nullptr;};
    void deleteWorkflowInstanceType() { this->workflowInstanceType_ = nullptr;};
    inline string workflowInstanceType() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceType_, "") };
    inline ListTaskInstancesRequest& setWorkflowInstanceType(string workflowInstanceType) { DARABONBA_PTR_SET_VALUE(workflowInstanceType_, workflowInstanceType) };


  protected:
    // The data timestamp. The value of this parameter is 00:00:00 of the day before the scheduling time of the instance. The value is a UNIX timestamp. Unit: milliseconds. Example: 1743350400000.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The ID of the instance. The instance may be rerun. If the instance is rerun and you configure this parameter, the system returns the historical information of the instance, including the rerun information. You can use the RunNumber parameter to distinguish each entry in the historical information.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The IDs of the instances. You can query multiple instances at a time by instance ID.
    std::shared_ptr<vector<int64_t>> ids_ = nullptr;
    // The account ID of the task owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The information about the resource group. Set this parameter to the identifier of a resource group for scheduling.
    std::shared_ptr<string> runtimeResource_ = nullptr;
    // The field used for sorting. Fields such as TriggerTime and StartedTime are supported. The value of this parameter is in the Sort field + Sort by (Desc/Asc) format. By default, results are sorted in ascending order. Valid values:
    // 
    // *   `TriggerTime (Desc/Asc)`
    // 
    // *   `StartedTime (Desc/Asc)`
    // 
    // *   `FinishedTime (Desc/Asc)`
    // 
    // *   `CreateTime (Desc/Asc)`
    // 
    // *   `Id (Desc/Asc)`
    // 
    //     Default value: `Id Desc`.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The status of the task instance.
    // 
    // *   `NotRun`: Not started
    // *   `Running`
    // *   `Failure`
    // *   `Success`
    // *   `WaitTime`: Awaiting scheduled time
    // *   `WaitResource`: Awaiting resources
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the task for which the instance is generated.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The IDs of the tasks. You can query multiple instances at a time by task ID.
    std::shared_ptr<vector<int64_t>> taskIds_ = nullptr;
    // The name of the task. Fuzzy match is supported.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task for which the instance is generated.
    std::shared_ptr<string> taskType_ = nullptr;
    // The running mode of the instance after it is triggered. This parameter takes effect only if the TriggerType parameter is set to Scheduler. Valid values:
    // 
    // *   Pause
    // *   Skip
    // *   Normal
    std::shared_ptr<string> triggerRecurrence_ = nullptr;
    // The trigger type. Valid values:
    // 
    // *   Scheduler: scheduling cycle-based trigger
    // *   Manual: manual trigger
    std::shared_ptr<string> triggerType_ = nullptr;
    // The ID of the workflow to which the instance belongs.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    // The workflow instance ID.
    std::shared_ptr<int64_t> workflowInstanceId_ = nullptr;
    // The type of the workflow instance. Valid values:
    // 
    // *   SmokeTest: Testing
    // *   Manual: Manually triggered node
    // *   SupplementData: Data backfill
    // *   ManualWorkflow: Manually triggered workflow
    // *   Normal: Scheduled execution
    std::shared_ptr<string> workflowInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
