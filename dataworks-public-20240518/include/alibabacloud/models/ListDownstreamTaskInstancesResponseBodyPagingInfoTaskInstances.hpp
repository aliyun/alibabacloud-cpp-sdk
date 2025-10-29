// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFOTASKINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFOTASKINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource.hpp>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime.hpp>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PeriodNumber, periodNumber_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RunNumber, runNumber_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StepType, stepType_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(TriggerRecurrence, triggerRecurrence_);
      DARABONBA_PTR_TO_JSON(TriggerTime, triggerTime_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_TO_JSON(WorkflowInstanceType, workflowInstanceType_);
      DARABONBA_PTR_TO_JSON(WorkflowName, workflowName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PeriodNumber, periodNumber_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RunNumber, runNumber_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StepType, stepType_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(TriggerRecurrence, triggerRecurrence_);
      DARABONBA_PTR_FROM_JSON(TriggerTime, triggerTime_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceId, workflowInstanceId_);
      DARABONBA_PTR_FROM_JSON(WorkflowInstanceType, workflowInstanceType_);
      DARABONBA_PTR_FROM_JSON(WorkflowName, workflowName_);
    };
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances(const ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances(ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances &&) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& operator=(const ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& operator=(ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->bizdate_ == nullptr && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->dataSource_ == nullptr && return this->description_ == nullptr
        && return this->envType_ == nullptr && return this->finishedTime_ == nullptr && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr
        && return this->owner_ == nullptr && return this->periodNumber_ == nullptr && return this->priority_ == nullptr && return this->projectEnv_ == nullptr && return this->projectId_ == nullptr
        && return this->rerunMode_ == nullptr && return this->runNumber_ == nullptr && return this->runtime_ == nullptr && return this->runtimeResource_ == nullptr && return this->startedTime_ == nullptr
        && return this->status_ == nullptr && return this->stepType_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskType_ == nullptr
        && return this->timeout_ == nullptr && return this->triggerRecurrence_ == nullptr && return this->triggerTime_ == nullptr && return this->triggerType_ == nullptr && return this->workflowId_ == nullptr
        && return this->workflowInstanceId_ == nullptr && return this->workflowInstanceType_ == nullptr && return this->workflowName_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource) };
    inline Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setDataSource(const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setDataSource(Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline int64_t finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // periodNumber Field Functions 
    bool hasPeriodNumber() const { return this->periodNumber_ != nullptr;};
    void deletePeriodNumber() { this->periodNumber_ = nullptr;};
    inline int32_t periodNumber() const { DARABONBA_PTR_GET_DEFAULT(periodNumber_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setPeriodNumber(int32_t periodNumber) { DARABONBA_PTR_SET_VALUE(periodNumber_, periodNumber) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // runNumber Field Functions 
    bool hasRunNumber() const { return this->runNumber_ != nullptr;};
    void deleteRunNumber() { this->runNumber_ = nullptr;};
    inline int32_t runNumber() const { DARABONBA_PTR_GET_DEFAULT(runNumber_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setRunNumber(int32_t runNumber) { DARABONBA_PTR_SET_VALUE(runNumber_, runNumber) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime) };
    inline Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setRuntime(const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setRuntime(Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource) };
    inline Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setRuntimeResource(const Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setRuntimeResource(Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline int64_t startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setStartedTime(int64_t startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepType Field Functions 
    bool hasStepType() const { return this->stepType_ != nullptr;};
    void deleteStepType() { this->stepType_ = nullptr;};
    inline string stepType() const { DARABONBA_PTR_GET_DEFAULT(stepType_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setStepType(string stepType) { DARABONBA_PTR_SET_VALUE(stepType_, stepType) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // triggerRecurrence Field Functions 
    bool hasTriggerRecurrence() const { return this->triggerRecurrence_ != nullptr;};
    void deleteTriggerRecurrence() { this->triggerRecurrence_ = nullptr;};
    inline string triggerRecurrence() const { DARABONBA_PTR_GET_DEFAULT(triggerRecurrence_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTriggerRecurrence(string triggerRecurrence) { DARABONBA_PTR_SET_VALUE(triggerRecurrence_, triggerRecurrence) };


    // triggerTime Field Functions 
    bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
    void deleteTriggerTime() { this->triggerTime_ = nullptr;};
    inline int64_t triggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTriggerTime(int64_t triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowInstanceId Field Functions 
    bool hasWorkflowInstanceId() const { return this->workflowInstanceId_ != nullptr;};
    void deleteWorkflowInstanceId() { this->workflowInstanceId_ = nullptr;};
    inline int64_t workflowInstanceId() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceId_, 0L) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setWorkflowInstanceId(int64_t workflowInstanceId) { DARABONBA_PTR_SET_VALUE(workflowInstanceId_, workflowInstanceId) };


    // workflowInstanceType Field Functions 
    bool hasWorkflowInstanceType() const { return this->workflowInstanceType_ != nullptr;};
    void deleteWorkflowInstanceType() { this->workflowInstanceType_ = nullptr;};
    inline string workflowInstanceType() const { DARABONBA_PTR_GET_DEFAULT(workflowInstanceType_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setWorkflowInstanceType(string workflowInstanceType) { DARABONBA_PTR_SET_VALUE(workflowInstanceType_, workflowInstanceType) };


    // workflowName Field Functions 
    bool hasWorkflowName() const { return this->workflowName_ != nullptr;};
    void deleteWorkflowName() { this->workflowName_ = nullptr;};
    inline string workflowName() const { DARABONBA_PTR_GET_DEFAULT(workflowName_, "") };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances& setWorkflowName(string workflowName) { DARABONBA_PTR_SET_VALUE(workflowName_, workflowName) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The data timestamp.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The account ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The information about the associated data source.
    std::shared_ptr<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesDataSource> dataSource_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment in which the data source is used. Valid values:
    // 
    // *   Dev
    // *   Prod
    std::shared_ptr<string> envType_ = nullptr;
    // The time when the instance finished running.
    std::shared_ptr<int64_t> finishedTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The account ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The account ID of the task owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The sequence number of the cycle. This parameter indicates the cycle of the task instance on the current day.
    std::shared_ptr<int32_t> periodNumber_ = nullptr;
    // The priority of the task. Valid values: 1 to 8. A larger value indicates a higher priority. Default value: 1.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The environment of the workspace. This parameter is deprecated and replaced by the EnvType parameter. Valid values:
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The rerun mode.
    // 
    // Valid values:
    // 
    // *   AllDenied: The task cannot be rerun regardless of whether it is successfully run or fails to run.
    // *   FailureAllowed: The task can be rerun only after it fails to run.
    // *   AllAllowed: The task can be rerun regardless of whether it is successfully run or fails to run.
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The number of times the instance is run. By default, the value starts from 1.
    std::shared_ptr<int32_t> runNumber_ = nullptr;
    // The runtime information about the instance.
    std::shared_ptr<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntime> runtime_ = nullptr;
    // The information about the resource group with which the instance is associated.
    std::shared_ptr<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstancesRuntimeResource> runtimeResource_ = nullptr;
    // The time when the instance started to run.
    std::shared_ptr<int64_t> startedTime_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   NotRun: The instance is not run.
    // *   Running: The instance is running.
    // *   WaitTime: The instance is waiting for the scheduling time to arrive.
    // *   CheckingCondition: Branch conditions are being checked for the instance.
    // *   WaitResource: The instance is waiting for resources.
    // *   Failure: The instance fails to be run.
    // *   Success: The instance is successfully run.
    // *   Checking: Data quality is being checked for the instance.
    // *   WaitTrigger: The instance is waiting to be triggered by external scheduling systems.
    std::shared_ptr<string> status_ = nullptr;
    // The scheduling dependency type. Valid values:
    // 
    // *   Normal: same-cycle scheduling dependency
    // *   CrossCycle: cross-cycle scheduling dependency
    std::shared_ptr<string> stepType_ = nullptr;
    // The ID of the task for which the instance is generated.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The name of the task for which the instance is generated.
    std::shared_ptr<string> taskName_ = nullptr;
    // The type of the task for which the instance is generated.
    std::shared_ptr<string> taskType_ = nullptr;
    // The timeout period of task running. Unit: seconds.
    // 
    // Note: The value of this parameter is rounded up by hour.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The running mode of the instance after it is triggered. This parameter takes effect only if the TriggerType parameter is set to Scheduler.
    // 
    // Valid values:
    // 
    // *   Pause
    // *   Skip
    // *   Normal
    std::shared_ptr<string> triggerRecurrence_ = nullptr;
    // The scheduling time.
    std::shared_ptr<int64_t> triggerTime_ = nullptr;
    // The method to trigger instance scheduling.
    // 
    // Valid values:
    // 
    // *   Scheduler: scheduling cycle-based trigger
    // *   Manual: manual trigger
    std::shared_ptr<string> triggerType_ = nullptr;
    // The ID of the workflow to which the instance belongs.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    // The workflow instance ID.
    std::shared_ptr<int64_t> workflowInstanceId_ = nullptr;
    // The type of the workflow instance.
    // 
    // Valid values:
    // 
    // *   SmokeTest
    // *   SupplementData
    // *   Manual
    // *   ManualWorkflow
    // *   Normal
    // *   ManualFlow
    std::shared_ptr<string> workflowInstanceType_ = nullptr;
    // The name of the workflow to which the instance belongs.
    std::shared_ptr<string> workflowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
