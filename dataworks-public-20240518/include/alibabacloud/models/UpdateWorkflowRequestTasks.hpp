// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksDataSource.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkflowRequestTasksDependencies.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksInputs.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksOutputs.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksRuntimeResource.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksScript.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksTags.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(BaseLineId, baseLineId_);
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseLineId, baseLineId_);
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RerunInterval, rerunInterval_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(RerunTimes, rerunTimes_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdateWorkflowRequestTasks() = default ;
    UpdateWorkflowRequestTasks(const UpdateWorkflowRequestTasks &) = default ;
    UpdateWorkflowRequestTasks(UpdateWorkflowRequestTasks &&) = default ;
    UpdateWorkflowRequestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequestTasks() = default ;
    UpdateWorkflowRequestTasks& operator=(const UpdateWorkflowRequestTasks &) = default ;
    UpdateWorkflowRequestTasks& operator=(UpdateWorkflowRequestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseLineId_ != nullptr
        && this->clientUniqueCode_ != nullptr && this->dataSource_ != nullptr && this->dependencies_ != nullptr && this->description_ != nullptr && this->envType_ != nullptr
        && this->id_ != nullptr && this->inputs_ != nullptr && this->name_ != nullptr && this->outputs_ != nullptr && this->owner_ != nullptr
        && this->rerunInterval_ != nullptr && this->rerunMode_ != nullptr && this->rerunTimes_ != nullptr && this->runtimeResource_ != nullptr && this->script_ != nullptr
        && this->tags_ != nullptr && this->timeout_ != nullptr && this->trigger_ != nullptr && this->type_ != nullptr; };
    // baseLineId Field Functions 
    bool hasBaseLineId() const { return this->baseLineId_ != nullptr;};
    void deleteBaseLineId() { this->baseLineId_ = nullptr;};
    inline int64_t baseLineId() const { DARABONBA_PTR_GET_DEFAULT(baseLineId_, 0L) };
    inline UpdateWorkflowRequestTasks& setBaseLineId(int64_t baseLineId) { DARABONBA_PTR_SET_VALUE(baseLineId_, baseLineId) };


    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string clientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline UpdateWorkflowRequestTasks& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::UpdateWorkflowRequestTasksDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::UpdateWorkflowRequestTasksDataSource) };
    inline Models::UpdateWorkflowRequestTasksDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::UpdateWorkflowRequestTasksDataSource) };
    inline UpdateWorkflowRequestTasks& setDataSource(const Models::UpdateWorkflowRequestTasksDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline UpdateWorkflowRequestTasks& setDataSource(Models::UpdateWorkflowRequestTasksDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<Models::UpdateWorkflowRequestTasksDependencies> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Models::UpdateWorkflowRequestTasksDependencies>) };
    inline vector<Models::UpdateWorkflowRequestTasksDependencies> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<Models::UpdateWorkflowRequestTasksDependencies>) };
    inline UpdateWorkflowRequestTasks& setDependencies(const vector<Models::UpdateWorkflowRequestTasksDependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline UpdateWorkflowRequestTasks& setDependencies(vector<Models::UpdateWorkflowRequestTasksDependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkflowRequestTasks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateWorkflowRequestTasks& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateWorkflowRequestTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const Models::UpdateWorkflowRequestTasksInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, Models::UpdateWorkflowRequestTasksInputs) };
    inline Models::UpdateWorkflowRequestTasksInputs inputs() { DARABONBA_PTR_GET(inputs_, Models::UpdateWorkflowRequestTasksInputs) };
    inline UpdateWorkflowRequestTasks& setInputs(const Models::UpdateWorkflowRequestTasksInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline UpdateWorkflowRequestTasks& setInputs(Models::UpdateWorkflowRequestTasksInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWorkflowRequestTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const Models::UpdateWorkflowRequestTasksOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, Models::UpdateWorkflowRequestTasksOutputs) };
    inline Models::UpdateWorkflowRequestTasksOutputs outputs() { DARABONBA_PTR_GET(outputs_, Models::UpdateWorkflowRequestTasksOutputs) };
    inline UpdateWorkflowRequestTasks& setOutputs(const Models::UpdateWorkflowRequestTasksOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline UpdateWorkflowRequestTasks& setOutputs(Models::UpdateWorkflowRequestTasksOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateWorkflowRequestTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t rerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline UpdateWorkflowRequestTasks& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline UpdateWorkflowRequestTasks& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t rerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline UpdateWorkflowRequestTasks& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::UpdateWorkflowRequestTasksRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::UpdateWorkflowRequestTasksRuntimeResource) };
    inline Models::UpdateWorkflowRequestTasksRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::UpdateWorkflowRequestTasksRuntimeResource) };
    inline UpdateWorkflowRequestTasks& setRuntimeResource(const Models::UpdateWorkflowRequestTasksRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline UpdateWorkflowRequestTasks& setRuntimeResource(Models::UpdateWorkflowRequestTasksRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::UpdateWorkflowRequestTasksScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::UpdateWorkflowRequestTasksScript) };
    inline Models::UpdateWorkflowRequestTasksScript script() { DARABONBA_PTR_GET(script_, Models::UpdateWorkflowRequestTasksScript) };
    inline UpdateWorkflowRequestTasks& setScript(const Models::UpdateWorkflowRequestTasksScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline UpdateWorkflowRequestTasks& setScript(Models::UpdateWorkflowRequestTasksScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::UpdateWorkflowRequestTasksTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::UpdateWorkflowRequestTasksTags>) };
    inline vector<Models::UpdateWorkflowRequestTasksTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::UpdateWorkflowRequestTasksTags>) };
    inline UpdateWorkflowRequestTasks& setTags(const vector<Models::UpdateWorkflowRequestTasksTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateWorkflowRequestTasks& setTags(vector<Models::UpdateWorkflowRequestTasksTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateWorkflowRequestTasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::UpdateWorkflowRequestTasksTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::UpdateWorkflowRequestTasksTrigger) };
    inline Models::UpdateWorkflowRequestTasksTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::UpdateWorkflowRequestTasksTrigger) };
    inline UpdateWorkflowRequestTasks& setTrigger(const Models::UpdateWorkflowRequestTasksTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateWorkflowRequestTasks& setTrigger(Models::UpdateWorkflowRequestTasksTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateWorkflowRequestTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The baseline ID.
    std::shared_ptr<int64_t> baseLineId_ = nullptr;
    // The unique code of the client. This parameter is used to create a task asynchronously and implement the idempotence of the task. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
    std::shared_ptr<string> clientUniqueCode_ = nullptr;
    // The information about the associated data source.
    std::shared_ptr<Models::UpdateWorkflowRequestTasksDataSource> dataSource_ = nullptr;
    // The dependency information.
    std::shared_ptr<vector<Models::UpdateWorkflowRequestTasksDependencies>> dependencies_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The task ID. If you configure this parameter, full update is performed on the task. If you do not configure this parameter, another task is created.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The input information.
    std::shared_ptr<Models::UpdateWorkflowRequestTasksInputs> inputs_ = nullptr;
    // The name of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The output information.
    std::shared_ptr<Models::UpdateWorkflowRequestTasksOutputs> outputs_ = nullptr;
    // The account ID of the owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The rerun interval. Unit: seconds.
    std::shared_ptr<int32_t> rerunInterval_ = nullptr;
    // The rerun mode. Valid values:
    // 
    // *   AllDenied: The task cannot be rerun regardless of whether the task is successfully run or fails to run.
    // *   FailureAllowed: The task can be rerun only after it fails to run.
    // *   AllAllowed: The task can be rerun regardless of whether the task is successfully run or fails to run.
    // 
    // This parameter is required.
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
    std::shared_ptr<int32_t> rerunTimes_ = nullptr;
    // The configurations of the runtime environment, such as the resource group information.
    // 
    // This parameter is required.
    std::shared_ptr<Models::UpdateWorkflowRequestTasksRuntimeResource> runtimeResource_ = nullptr;
    // The script information.
    std::shared_ptr<Models::UpdateWorkflowRequestTasksScript> script_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::UpdateWorkflowRequestTasksTags>> tags_ = nullptr;
    // The timeout period of task running. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The trigger method.
    // 
    // This parameter is required.
    std::shared_ptr<Models::UpdateWorkflowRequestTasksTrigger> trigger_ = nullptr;
    // The type of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
