// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODYPAGINGINFOTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODYPAGINGINFOTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTasksResponseBodyPagingInfoTasksDataSource.hpp>
#include <alibabacloud/models/ListTasksResponseBodyPagingInfoTasksRuntimeResource.hpp>
#include <alibabacloud/models/ListTasksResponseBodyPagingInfoTasksTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTasksResponseBodyPagingInfoTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBodyPagingInfoTasks& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(ScriptParameters, scriptParameters_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBodyPagingInfoTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(ScriptParameters, scriptParameters_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
    };
    ListTasksResponseBodyPagingInfoTasks() = default ;
    ListTasksResponseBodyPagingInfoTasks(const ListTasksResponseBodyPagingInfoTasks &) = default ;
    ListTasksResponseBodyPagingInfoTasks(ListTasksResponseBodyPagingInfoTasks &&) = default ;
    ListTasksResponseBodyPagingInfoTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBodyPagingInfoTasks() = default ;
    ListTasksResponseBodyPagingInfoTasks& operator=(const ListTasksResponseBodyPagingInfoTasks &) = default ;
    ListTasksResponseBodyPagingInfoTasks& operator=(ListTasksResponseBodyPagingInfoTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineId_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->dataSource_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr
        && return this->instanceMode_ == nullptr && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr
        && return this->priority_ == nullptr && return this->projectEnv_ == nullptr && return this->projectId_ == nullptr && return this->rerunInterval_ == nullptr && return this->rerunMode_ == nullptr
        && return this->rerunTimes_ == nullptr && return this->runtimeResource_ == nullptr && return this->scriptParameters_ == nullptr && return this->timeout_ == nullptr && return this->trigger_ == nullptr
        && return this->type_ == nullptr && return this->workflowId_ == nullptr; };
    // baselineId Field Functions 
    bool hasBaselineId() const { return this->baselineId_ != nullptr;};
    void deleteBaselineId() { this->baselineId_ = nullptr;};
    inline int64_t baselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
    inline ListTasksResponseBodyPagingInfoTasks& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListTasksResponseBodyPagingInfoTasks& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ListTasksResponseBodyPagingInfoTasksDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ListTasksResponseBodyPagingInfoTasksDataSource) };
    inline Models::ListTasksResponseBodyPagingInfoTasksDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ListTasksResponseBodyPagingInfoTasksDataSource) };
    inline ListTasksResponseBodyPagingInfoTasks& setDataSource(const Models::ListTasksResponseBodyPagingInfoTasksDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ListTasksResponseBodyPagingInfoTasks& setDataSource(Models::ListTasksResponseBodyPagingInfoTasksDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTasksResponseBodyPagingInfoTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string instanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline ListTasksResponseBodyPagingInfoTasks& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListTasksResponseBodyPagingInfoTasks& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListTasksResponseBodyPagingInfoTasks& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t rerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline ListTasksResponseBodyPagingInfoTasks& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t rerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline ListTasksResponseBodyPagingInfoTasks& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource) };
    inline Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource) };
    inline ListTasksResponseBodyPagingInfoTasks& setRuntimeResource(const Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ListTasksResponseBodyPagingInfoTasks& setRuntimeResource(Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // scriptParameters Field Functions 
    bool hasScriptParameters() const { return this->scriptParameters_ != nullptr;};
    void deleteScriptParameters() { this->scriptParameters_ = nullptr;};
    inline string scriptParameters() const { DARABONBA_PTR_GET_DEFAULT(scriptParameters_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setScriptParameters(string scriptParameters) { DARABONBA_PTR_SET_VALUE(scriptParameters_, scriptParameters) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ListTasksResponseBodyPagingInfoTasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::ListTasksResponseBodyPagingInfoTasksTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::ListTasksResponseBodyPagingInfoTasksTrigger) };
    inline Models::ListTasksResponseBodyPagingInfoTasksTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::ListTasksResponseBodyPagingInfoTasksTrigger) };
    inline ListTasksResponseBodyPagingInfoTasks& setTrigger(const Models::ListTasksResponseBodyPagingInfoTasksTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline ListTasksResponseBodyPagingInfoTasks& setTrigger(Models::ListTasksResponseBodyPagingInfoTasksTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTasksResponseBodyPagingInfoTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline ListTasksResponseBodyPagingInfoTasks& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baselineId_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The account ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The information about the associated data source.
    std::shared_ptr<Models::ListTasksResponseBodyPagingInfoTasksDataSource> dataSource_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> description_ = nullptr;
    // The task ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance generation mode. Valid values:
    // 
    // *   T+1
    // *   Immediately
    std::shared_ptr<string> instanceMode_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The account ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The account ID of the task owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The priority of the task. Valid values: 1 to 8. A larger value indicates a higher priority. Default value: 1.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The environment of the workspace.
    // 
    // Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> projectEnv_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The rerun interval. Unit: seconds.
    std::shared_ptr<int32_t> rerunInterval_ = nullptr;
    // The rerun mode.
    // 
    // Valid values:
    // 
    // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
    // *   FailureAllowed: The task can be rerun only after it fails to run.
    // *   AllAllowed: The task can be rerun regardless of whether it is successfully run or fails to run.
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
    std::shared_ptr<int32_t> rerunTimes_ = nullptr;
    // The configurations of the runtime environment, such as the resource group information.
    std::shared_ptr<Models::ListTasksResponseBodyPagingInfoTasksRuntimeResource> runtimeResource_ = nullptr;
    // The list of script parameters.
    std::shared_ptr<string> scriptParameters_ = nullptr;
    // The timeout period of task running. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The method to trigger task scheduling.
    std::shared_ptr<Models::ListTasksResponseBodyPagingInfoTasksTrigger> trigger_ = nullptr;
    // The type of the task.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the workflow to which the task belongs.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
