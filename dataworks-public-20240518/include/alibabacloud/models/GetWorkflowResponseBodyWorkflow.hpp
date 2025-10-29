// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOW_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowDependencies.hpp>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowOutputs.hpp>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowTags.hpp>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowTasks.hpp>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowTrigger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowResponseBodyWorkflow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBodyWorkflow& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(Trigger, trigger_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBodyWorkflow& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(Trigger, trigger_);
    };
    GetWorkflowResponseBodyWorkflow() = default ;
    GetWorkflowResponseBodyWorkflow(const GetWorkflowResponseBodyWorkflow &) = default ;
    GetWorkflowResponseBodyWorkflow(GetWorkflowResponseBodyWorkflow &&) = default ;
    GetWorkflowResponseBodyWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBodyWorkflow() = default ;
    GetWorkflowResponseBodyWorkflow& operator=(const GetWorkflowResponseBodyWorkflow &) = default ;
    GetWorkflowResponseBodyWorkflow& operator=(GetWorkflowResponseBodyWorkflow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && return this->createTime_ == nullptr && return this->createUser_ == nullptr && return this->dependencies_ == nullptr && return this->description_ == nullptr && return this->envType_ == nullptr
        && return this->id_ == nullptr && return this->modifyTime_ == nullptr && return this->modifyUser_ == nullptr && return this->name_ == nullptr && return this->outputs_ == nullptr
        && return this->owner_ == nullptr && return this->parameters_ == nullptr && return this->projectId_ == nullptr && return this->tags_ == nullptr && return this->tasks_ == nullptr
        && return this->trigger_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string clientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline GetWorkflowResponseBodyWorkflow& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetWorkflowResponseBodyWorkflow& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createUser Field Functions 
    bool hasCreateUser() const { return this->createUser_ != nullptr;};
    void deleteCreateUser() { this->createUser_ = nullptr;};
    inline string createUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
    inline GetWorkflowResponseBodyWorkflow& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<Models::GetWorkflowResponseBodyWorkflowDependencies> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Models::GetWorkflowResponseBodyWorkflowDependencies>) };
    inline vector<Models::GetWorkflowResponseBodyWorkflowDependencies> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<Models::GetWorkflowResponseBodyWorkflowDependencies>) };
    inline GetWorkflowResponseBodyWorkflow& setDependencies(const vector<Models::GetWorkflowResponseBodyWorkflowDependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline GetWorkflowResponseBodyWorkflow& setDependencies(vector<Models::GetWorkflowResponseBodyWorkflowDependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkflowResponseBodyWorkflow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetWorkflowResponseBodyWorkflow& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetWorkflowResponseBodyWorkflow& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline GetWorkflowResponseBodyWorkflow& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // modifyUser Field Functions 
    bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
    void deleteModifyUser() { this->modifyUser_ = nullptr;};
    inline string modifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
    inline GetWorkflowResponseBodyWorkflow& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetWorkflowResponseBodyWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const Models::GetWorkflowResponseBodyWorkflowOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, Models::GetWorkflowResponseBodyWorkflowOutputs) };
    inline Models::GetWorkflowResponseBodyWorkflowOutputs outputs() { DARABONBA_PTR_GET(outputs_, Models::GetWorkflowResponseBodyWorkflowOutputs) };
    inline GetWorkflowResponseBodyWorkflow& setOutputs(const Models::GetWorkflowResponseBodyWorkflowOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline GetWorkflowResponseBodyWorkflow& setOutputs(Models::GetWorkflowResponseBodyWorkflowOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetWorkflowResponseBodyWorkflow& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline GetWorkflowResponseBodyWorkflow& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetWorkflowResponseBodyWorkflow& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetWorkflowResponseBodyWorkflowTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetWorkflowResponseBodyWorkflowTags>) };
    inline vector<Models::GetWorkflowResponseBodyWorkflowTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetWorkflowResponseBodyWorkflowTags>) };
    inline GetWorkflowResponseBodyWorkflow& setTags(const vector<Models::GetWorkflowResponseBodyWorkflowTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetWorkflowResponseBodyWorkflow& setTags(vector<Models::GetWorkflowResponseBodyWorkflowTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<Models::GetWorkflowResponseBodyWorkflowTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Models::GetWorkflowResponseBodyWorkflowTasks>) };
    inline vector<Models::GetWorkflowResponseBodyWorkflowTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<Models::GetWorkflowResponseBodyWorkflowTasks>) };
    inline GetWorkflowResponseBodyWorkflow& setTasks(const vector<Models::GetWorkflowResponseBodyWorkflowTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline GetWorkflowResponseBodyWorkflow& setTasks(vector<Models::GetWorkflowResponseBodyWorkflowTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // trigger Field Functions 
    bool hasTrigger() const { return this->trigger_ != nullptr;};
    void deleteTrigger() { this->trigger_ = nullptr;};
    inline const Models::GetWorkflowResponseBodyWorkflowTrigger & trigger() const { DARABONBA_PTR_GET_CONST(trigger_, Models::GetWorkflowResponseBodyWorkflowTrigger) };
    inline Models::GetWorkflowResponseBodyWorkflowTrigger trigger() { DARABONBA_PTR_GET(trigger_, Models::GetWorkflowResponseBodyWorkflowTrigger) };
    inline GetWorkflowResponseBodyWorkflow& setTrigger(const Models::GetWorkflowResponseBodyWorkflowTrigger & trigger) { DARABONBA_PTR_SET_VALUE(trigger_, trigger) };
    inline GetWorkflowResponseBodyWorkflow& setTrigger(Models::GetWorkflowResponseBodyWorkflowTrigger && trigger) { DARABONBA_PTR_SET_RVALUE(trigger_, trigger) };


  protected:
    // The unique code of the client. This parameter is used to create a workflow asynchronously and implement the idempotence of the workflow. If you do not specify this parameter when you create the workflow, the system automatically generates a unique code. The unique code is uniquely associated with the workflow ID. If you specify this parameter when you update or delete the workflow, the value of this parameter must be the unique code that is used to create the workflow.
    std::shared_ptr<string> clientUniqueCode_ = nullptr;
    // The creation time.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The account ID of the creator.
    std::shared_ptr<string> createUser_ = nullptr;
    // The dependency information.
    std::shared_ptr<vector<Models::GetWorkflowResponseBodyWorkflowDependencies>> dependencies_ = nullptr;
    // The description of the workflow.
    std::shared_ptr<string> description_ = nullptr;
    // The environment of the workspace. Valid values:
    // 
    // *   Prod: production environment
    // *   Dev: development environment
    std::shared_ptr<string> envType_ = nullptr;
    // The workflow ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The modification time.
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    // The account ID of the modifier.
    std::shared_ptr<string> modifyUser_ = nullptr;
    // The name of the workflow.
    std::shared_ptr<string> name_ = nullptr;
    // The output information.
    std::shared_ptr<Models::GetWorkflowResponseBodyWorkflowOutputs> outputs_ = nullptr;
    // The account ID of the workflow owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The parameters.
    std::shared_ptr<string> parameters_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::GetWorkflowResponseBodyWorkflowTags>> tags_ = nullptr;
    // The tasks.
    std::shared_ptr<vector<Models::GetWorkflowResponseBodyWorkflowTasks>> tasks_ = nullptr;
    // The trigger method.
    std::shared_ptr<Models::GetWorkflowResponseBodyWorkflowTrigger> trigger_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
