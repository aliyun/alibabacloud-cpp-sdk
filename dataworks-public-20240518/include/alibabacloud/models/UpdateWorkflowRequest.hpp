// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkflowRequestDependencies.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestOutputs.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTags.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasks.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceMode, instanceMode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    UpdateWorkflowRequest() = default ;
    UpdateWorkflowRequest(const UpdateWorkflowRequest &) = default ;
    UpdateWorkflowRequest(UpdateWorkflowRequest &&) = default ;
    UpdateWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequest() = default ;
    UpdateWorkflowRequest& operator=(const UpdateWorkflowRequest &) = default ;
    UpdateWorkflowRequest& operator=(UpdateWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && return this->dependencies_ == nullptr && return this->description_ == nullptr && return this->envType_ == nullptr && return this->id_ == nullptr && return this->instanceMode_ == nullptr
        && return this->name_ == nullptr && return this->outputs_ == nullptr && return this->owner_ == nullptr && return this->parameters_ == nullptr && return this->tags_ == nullptr
        && return this->tasks_ == nullptr && return this->trigger_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string clientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline UpdateWorkflowRequest& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<UpdateWorkflowRequestDependencies> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<UpdateWorkflowRequestDependencies>) };
    inline vector<UpdateWorkflowRequestDependencies> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<UpdateWorkflowRequestDependencies>) };
    inline UpdateWorkflowRequest& setDependencies(const vector<UpdateWorkflowRequestDependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline UpdateWorkflowRequest& setDependencies(vector<UpdateWorkflowRequestDependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkflowRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateWorkflowRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateWorkflowRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceMode Field Functions 
    bool hasInstanceMode() const { return this->instanceMode_ != nullptr;};
    void deleteInstanceMode() { this->instanceMode_ = nullptr;};
    inline string instanceMode() const { DARABONBA_PTR_GET_DEFAULT(instanceMode_, "") };
    inline UpdateWorkflowRequest& setInstanceMode(string instanceMode) { DARABONBA_PTR_SET_VALUE(instanceMode_, instanceMode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWorkflowRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const UpdateWorkflowRequestOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, UpdateWorkflowRequestOutputs) };
    inline UpdateWorkflowRequestOutputs outputs() { DARABONBA_PTR_GET(outputs_, UpdateWorkflowRequestOutputs) };
    inline UpdateWorkflowRequest& setOutputs(const UpdateWorkflowRequestOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline UpdateWorkflowRequest& setOutputs(UpdateWorkflowRequestOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateWorkflowRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateWorkflowRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateWorkflowRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateWorkflowRequestTags>) };
    inline vector<UpdateWorkflowRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<UpdateWorkflowRequestTags>) };
    inline UpdateWorkflowRequest& setTags(const vector<UpdateWorkflowRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateWorkflowRequest& setTags(vector<UpdateWorkflowRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<UpdateWorkflowRequestTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<UpdateWorkflowRequestTasks>) };
    inline vector<UpdateWorkflowRequestTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<UpdateWorkflowRequestTasks>) };
    inline UpdateWorkflowRequest& setTasks(const vector<UpdateWorkflowRequestTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline UpdateWorkflowRequest& setTasks(vector<UpdateWorkflowRequestTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const UpdateWorkflowRequestTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, UpdateWorkflowRequestTrigger) };
    inline UpdateWorkflowRequestTrigger trigger() { DARABONBA_PTR_GET(trigger_, UpdateWorkflowRequestTrigger) };
    inline UpdateWorkflowRequest& setTrigger(const UpdateWorkflowRequestTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline UpdateWorkflowRequest& setTrigger(UpdateWorkflowRequestTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The unique code of the client. This parameter is used to create a workflow asynchronously and implement the idempotence of the workflow. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
    std::shared_ptr<string> clientUniqueCode_ = nullptr;
    // The dependency information.
    std::shared_ptr<vector<UpdateWorkflowRequestDependencies>> dependencies_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The workflow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> instanceMode_ = nullptr;
    // The name of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The output information.
    std::shared_ptr<UpdateWorkflowRequestOutputs> outputs_ = nullptr;
    // The account ID of the owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameters.
    std::shared_ptr<string> parameters_ = nullptr;
    // The tags.
    std::shared_ptr<vector<UpdateWorkflowRequestTags>> tags_ = nullptr;
    // The tasks.
    std::shared_ptr<vector<UpdateWorkflowRequestTasks>> tasks_ = nullptr;
    // The trigger method.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateWorkflowRequestTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
