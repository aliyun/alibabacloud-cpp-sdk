// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Ids, idsShrink_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIdsShrink_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceType, workflowInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Ids, idsShrink_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIdsShrink_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(UnifiedWorkflowInstanceId, unifiedWorkflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceType, workflowInstanceType_);
    };
    ListTaskInstancesShrinkRequest() = default ;
    ListTaskInstancesShrinkRequest(const ListTaskInstancesShrinkRequest &) = default ;
    ListTaskInstancesShrinkRequest(ListTaskInstancesShrinkRequest &&) = default ;
    ListTaskInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstancesShrinkRequest() = default ;
    ListTaskInstancesShrinkRequest& operator=(const ListTaskInstancesShrinkRequest &) = default ;
    ListTaskInstancesShrinkRequest& operator=(ListTaskInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizdate_ == nullptr
        && this->filter_ == nullptr && this->id_ == nullptr && this->idsShrink_ == nullptr && this->owner_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectEnv_ == nullptr && this->projectId_ == nullptr && this->runtimeResource_ == nullptr && this->sortBy_ == nullptr
        && this->status_ == nullptr && this->taskId_ == nullptr && this->taskIdsShrink_ == nullptr && this->taskName_ == nullptr && this->taskType_ == nullptr
        && this->triggerRecurrence_ == nullptr && this->triggerType_ == nullptr && this->unifiedWorkflowInstanceId_ == nullptr && this->workflowId_ == nullptr && this->workflowInstanceId_ == nullptr
        && this->workflowInstanceType_ == nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListTaskInstancesShrinkRequest& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListTaskInstancesShrinkRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskInstancesShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idsShrink Field Functions 
    bool hasIdsShrink() const { return this->idsShrink_ != nullptr;};
    void deleteIdsShrink() { this->idsShrink_ = nullptr;};
    inline string getIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(idsShrink_, "") };
    inline ListTaskInstancesShrinkRequest& setIdsShrink(string idsShrink) { DARABONBA_PTR_SET_VALUE(idsShrink_, idsShrink) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListTaskInstancesShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTaskInstancesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskInstancesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string getProjectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListTaskInstancesShrinkRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListTaskInstancesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline string getRuntimeResource() const { DARABONBA_PTR_GET_DEFAULT(runtimeResource_, "") };
    inline ListTaskInstancesShrinkRequest& setRuntimeResource(string runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTaskInstancesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskInstancesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListTaskInstancesShrinkRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskIdsShrink Field Functions 
    bool hasTaskIdsShrink() const { return this->taskIdsShrink_ != nullptr;};
    void deleteTaskIdsShrink() { this->taskIdsShrink_ = nullptr;};
    inline string getTaskIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(taskIdsShrink_, "") };
    inline ListTaskInstancesShrinkRequest& setTaskIdsShrink(string taskIdsShrink) { DARABONBA_PTR_SET_VALUE(taskIdsShrink_, taskIdsShrink) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListTaskInstancesShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListTaskInstancesShrinkRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // triggerRecurrence Field Functions 
    bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
    void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
    inline string getTriggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
    inline ListTaskInstancesShrinkRequest& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListTaskInstancesShrinkRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // unifiedWorkflowInstanceId Field Functions 
    bool hasUnifiedWorkflowInstanceId() const { return this->unifiedWorkflowInstanceId_ != nullptr;};
    void deleteUnifiedWorkflowInstanceId() { this->unifiedWorkflowInstanceId_ = nullptr;};
    inline int64_t getUnifiedWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(unifiedWorkflowInstanceId_, 0L) };
    inline ListTaskInstancesShrinkRequest& setUnifiedWorkflowInstanceId(int64_t unifiedWorkflowInstanceId) { DARABONBA_PTR_SET_VALUE(unifiedWorkflowInstanceId_, unifiedWorkflowInstanceId) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t getWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListTaskInstancesShrinkRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t getWorkflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline ListTaskInstancesShrinkRequest& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowInstanceType Field Functions 
    bool hasWorkflowInstanceType() const { return this->workflowInstanceType_ != nullptr;};
    void deleteWorkflowInstanceType() { this->workflowInstanceType_ = nullptr;};
    inline string getWorkflowInstanceType() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceType_, "") };
    inline ListTaskInstancesShrinkRequest& setWorkflowInstanceType(string workflowInstanceType) { DARABONBA_PTR_SET_VALUE(workflowInstanceType_, workflowInstanceType) };


  protected:
    // The business date. This is typically 00:00:00 of the day before the scheduled time of the periodic instance. The value is a millisecond-level timestamp, such as 1743350400000.
    // 
    // This parameter is required.
    shared_ptr<int64_t> bizdate_ {};
    // The filter. The value is in JSON format. Multiple filter conditions are combined with AND logic. Currently supported fields: `startedTimeStart, startedTimeEnd, finishedTimeStart, finishedTimeEnd, createTimeStart, createTimeEnd`
    shared_ptr<string> filter_ {};
    // The instance ID. If an instance has been rerun, specifying this parameter returns the historical information including reruns. You can use RunNumber to distinguish each historical record.
    shared_ptr<int64_t> id_ {};
    // The list of instance IDs. You can use this parameter to query multiple instances in a batch.
    shared_ptr<string> idsShrink_ {};
    // The account ID of the node owner.
    shared_ptr<string> owner_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 500.
    shared_ptr<int32_t> pageSize_ {};
    // The project environment. Valid values:
    // - Prod: production.
    // - Dev: development.
    shared_ptr<string> projectEnv_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The schedule resource information. Specify the identifier of the schedule resource group.
    shared_ptr<string> runtimeResource_ {};
    // The sort field. Supports fields such as scheduled time and start time. The format is "sort field + sort order (Desc/Asc)". Asc can be omitted. Valid values:
    // 
    // - `TriggerTime (Desc/Asc)`
    // 
    // - `StartedTime (Desc/Asc)`
    // 
    // - `FinishedTime (Desc/Asc)`
    // 
    // - `CreateTime (Desc/Asc)`
    // 
    // - `Id (Desc/Asc)`
    // 
    //   Default value: `Id Desc`
    shared_ptr<string> sortBy_ {};
    // The status of the instance. Valid values:
    // - `NotRun`: not run.
    // - `Running`: running.
    // - `Failure`: failed.
    // - `Success`: succeeded.
    // - `WaitTime`: waiting for the scheduled time.
    // - `WaitResource`: waiting for resources.
    shared_ptr<string> status_ {};
    // The ID of the corresponding node.
    shared_ptr<int64_t> taskId_ {};
    // The list of node IDs. You can use this parameter to query instances of multiple nodes in a batch.
    shared_ptr<string> taskIdsShrink_ {};
    // The name of the corresponding node. Fuzzy match is supported.
    shared_ptr<string> taskName_ {};
    // The node type. For the TaskType values of each node, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
    shared_ptr<string> taskType_ {};
    // The run mode at the time of triggering. This parameter takes effect only when TriggerType is set to Scheduler. Valid values:
    // - Pause: paused.
    // - Skip: dry run.
    // - Normal: normal run.
    shared_ptr<string> triggerRecurrence_ {};
    // The trigger type. Valid values:
    // - Scheduler: triggered by periodic scheduling.
    // - Manual: manually triggered.
    shared_ptr<string> triggerType_ {};
    // The unified workflow instance ID. All instances within the same business date under a single trigger share the same value for this field.
    shared_ptr<int64_t> unifiedWorkflowInstanceId_ {};
    // The ID of the workflow to which the instance belongs.
    shared_ptr<int64_t> workflowId_ {};
    // The ID of the workflow instance to which the instance belongs.
    shared_ptr<int64_t> workflowInstanceId_ {};
    // The type of the workflow instance to which the instance belongs. Valid values:
    // - SmokeTest: test.
    // - Manual: manual node.
    // - SupplementData: data backfill.
    // - ManualWorkflow: manual workflow.
    // - Normal: periodic scheduling.
    // - TriggerWorkflow: trigger-based workflow.
    shared_ptr<string> workflowInstanceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
