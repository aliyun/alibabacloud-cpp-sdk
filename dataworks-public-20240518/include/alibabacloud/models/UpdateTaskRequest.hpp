// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTaskRequestDataSource.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTaskRequestDependencies.hpp>
#include <alibabacloud/models/UpdateTaskRequestInputs.hpp>
#include <alibabacloud/models/UpdateTaskRequestOutputs.hpp>
#include <alibabacloud/models/UpdateTaskRequestRuntimeResource.hpp>
#include <alibabacloud/models/UpdateTaskRequestScript.hpp>
#include <alibabacloud/models/UpdateTaskRequestTags.hpp>
#include <alibabacloud/models/UpdateTaskRequestTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
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
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
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
    };
    UpdateTaskRequest() = default ;
    UpdateTaskRequest(const UpdateTaskRequest &) = default ;
    UpdateTaskRequest(UpdateTaskRequest &&) = default ;
    UpdateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequest() = default ;
    UpdateTaskRequest& operator=(const UpdateTaskRequest &) = default ;
    UpdateTaskRequest& operator=(UpdateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && return this->dataSource_ == nullptr && return this->dependencies_ == nullptr && return this->description_ == nullptr && return this->envType_ == nullptr && return this->id_ == nullptr
        && return this->inputs_ == nullptr && return this->instanceMode_ == nullptr && return this->name_ == nullptr && return this->outputs_ == nullptr && return this->owner_ == nullptr
        && return this->rerunInterval_ == nullptr && return this->rerunMode_ == nullptr && return this->rerunTimes_ == nullptr && return this->runtimeResource_ == nullptr && return this->script_ == nullptr
        && return this->tags_ == nullptr && return this->timeout_ == nullptr && return this->trigger_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string clientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline UpdateTaskRequest& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const UpdateTaskRequestDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, UpdateTaskRequestDataSource) };
    inline UpdateTaskRequestDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, UpdateTaskRequestDataSource) };
    inline UpdateTaskRequest& setDataSource(const UpdateTaskRequestDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline UpdateTaskRequest& setDataSource(UpdateTaskRequestDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<UpdateTaskRequestDependencies> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<UpdateTaskRequestDependencies>) };
    inline vector<UpdateTaskRequestDependencies> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<UpdateTaskRequestDependencies>) };
    inline UpdateTaskRequest& setDependencies(const vector<UpdateTaskRequestDependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline UpdateTaskRequest& setDependencies(vector<UpdateTaskRequestDependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateTaskRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateTaskRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const UpdateTaskRequestInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, UpdateTaskRequestInputs) };
    inline UpdateTaskRequestInputs inputs() { DARABONBA_PTR_GET(inputs_, UpdateTaskRequestInputs) };
    inline UpdateTaskRequest& setInputs(const UpdateTaskRequestInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline UpdateTaskRequest& setInputs(UpdateTaskRequestInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string instanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline UpdateTaskRequest& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const UpdateTaskRequestOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, UpdateTaskRequestOutputs) };
    inline UpdateTaskRequestOutputs outputs() { DARABONBA_PTR_GET(outputs_, UpdateTaskRequestOutputs) };
    inline UpdateTaskRequest& setOutputs(const UpdateTaskRequestOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline UpdateTaskRequest& setOutputs(UpdateTaskRequestOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateTaskRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // rerunInterval Field Functions 
    bool hasRerunInterval() const { return this->rerunInterval_ != nullptr;};
    void deleteRerunInterval() { this->rerunInterval_ = nullptr;};
    inline int32_t rerunInterval() const { DARABONBA_PTR_GET_DEFAULT(rerunInterval_, 0) };
    inline UpdateTaskRequest& setRerunInterval(int32_t rerunInterval) { DARABONBA_PTR_SET_VALUE(rerunInterval_, rerunInterval) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline UpdateTaskRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // rerunTimes Field Functions 
    bool hasRerunTimes() const { return this->rerunTimes_ != nullptr;};
    void deleteRerunTimes() { this->rerunTimes_ = nullptr;};
    inline int32_t rerunTimes() const { DARABONBA_PTR_GET_DEFAULT(rerunTimes_, 0) };
    inline UpdateTaskRequest& setRerunTimes(int32_t rerunTimes) { DARABONBA_PTR_SET_VALUE(rerunTimes_, rerunTimes) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const UpdateTaskRequestRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, UpdateTaskRequestRuntimeResource) };
    inline UpdateTaskRequestRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, UpdateTaskRequestRuntimeResource) };
    inline UpdateTaskRequest& setRuntimeResource(const UpdateTaskRequestRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline UpdateTaskRequest& setRuntimeResource(UpdateTaskRequestRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const UpdateTaskRequestScript & script() const { DARABONBA_PTR_GET_CONST(script_, UpdateTaskRequestScript) };
    inline UpdateTaskRequestScript script() { DARABONBA_PTR_GET(script_, UpdateTaskRequestScript) };
    inline UpdateTaskRequest& setScript(const UpdateTaskRequestScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline UpdateTaskRequest& setScript(UpdateTaskRequestScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateTaskRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateTaskRequestTags>) };
    inline vector<UpdateTaskRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateTaskRequestTags>) };
    inline UpdateTaskRequest& setTags(const vector<UpdateTaskRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateTaskRequest& setTags(vector<UpdateTaskRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateTaskRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateTaskRequestTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateTaskRequestTrigger) };
    inline UpdateTaskRequestTrigger trigger() { DARABONBA_PTR_GET(trigger_, UpdateTaskRequestTrigger) };
    inline UpdateTaskRequest& setTrigger(const UpdateTaskRequestTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateTaskRequest& setTrigger(UpdateTaskRequestTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The unique code of the client. This code uniquely identifies a task. This parameter is used to create a task asynchronously and implement the idempotence of the task. If you do not specify this parameter when you create the task, the system automatically generates a unique code. The unique code is uniquely associated with the task ID. If you specify this parameter when you update or delete the task, the value of this parameter must be the unique code that is used to create the task.
    std::shared_ptr<string> clientUniqueCode_ = nullptr;
    // The information about the associated data source.
    std::shared_ptr<UpdateTaskRequestDataSource> dataSource_ = nullptr;
    // The dependency information.
    std::shared_ptr<vector<UpdateTaskRequestDependencies>> dependencies_ = nullptr;
    // The description of the task.
    std::shared_ptr<string> description_ = nullptr;
    // The project environment.
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The input information.
    std::shared_ptr<UpdateTaskRequestInputs> inputs_ = nullptr;
    // The instance generation mode.
    // 
    // *   T+1: the next day
    // *   Immediately
    std::shared_ptr<string> instanceMode_ = nullptr;
    // Name.
    std::shared_ptr<string> name_ = nullptr;
    // The output information.
    std::shared_ptr<UpdateTaskRequestOutputs> outputs_ = nullptr;
    // The account ID of the task owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The rerun interval. Unit: milliseconds. Must not exceed 1800000.
    std::shared_ptr<int32_t> rerunInterval_ = nullptr;
    // The rerun mode. Valid values:
    // 
    // *   AllDenied: The task cannot be rerun.
    // *   FailureAllowed: The task can be rerun only after it fails.
    // *   AllAllowed: The task can always be rerun.
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The number of times that the task is rerun. This parameter takes effect only if the RerunMode parameter is set to AllAllowed or FailureAllowed.
    std::shared_ptr<int32_t> rerunTimes_ = nullptr;
    // Runtime environment configurations, such as resource group information.
    std::shared_ptr<UpdateTaskRequestRuntimeResource> runtimeResource_ = nullptr;
    // The run script information.
    std::shared_ptr<UpdateTaskRequestScript> script_ = nullptr;
    // The tags.
    std::shared_ptr<vector<UpdateTaskRequestTags>> tags_ = nullptr;
    // Task execution timeout in seconds. Must be greater than 3600.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The triggering method.
    std::shared_ptr<UpdateTaskRequestTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
