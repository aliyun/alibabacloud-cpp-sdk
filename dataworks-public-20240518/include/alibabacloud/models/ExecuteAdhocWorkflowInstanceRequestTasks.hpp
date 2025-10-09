// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksDataSource.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksDependencies.hpp>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksInputs.hpp>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksOutputs.hpp>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource.hpp>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(Dependencies, dependencies_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ExecuteAdhocWorkflowInstanceRequestTasks() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasks(const ExecuteAdhocWorkflowInstanceRequestTasks &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasks(ExecuteAdhocWorkflowInstanceRequestTasks &&) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequestTasks() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasks& operator=(const ExecuteAdhocWorkflowInstanceRequestTasks &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasks& operator=(ExecuteAdhocWorkflowInstanceRequestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientUniqueCode_ != nullptr
        && this->dataSource_ != nullptr && this->dependencies_ != nullptr && this->inputs_ != nullptr && this->name_ != nullptr && this->outputs_ != nullptr
        && this->owner_ != nullptr && this->runtimeResource_ != nullptr && this->script_ != nullptr && this->timeout_ != nullptr && this->type_ != nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string clientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline const Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource & dataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource) };
    inline Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource dataSource() { DARABONBA_PTR_GET(dataSource_, Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setDataSource(const Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setDataSource(Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


    // dependencies Field Functions 
    bool hasDependencies() const { return this->dependencies_ != nullptr;};
    void deleteDependencies() { this->dependencies_ = nullptr;};
    inline const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies> & dependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies>) };
    inline vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies> dependencies() { DARABONBA_PTR_GET(dependencies_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies>) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setDependencies(const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setDependencies(vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs) };
    inline Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs inputs() { DARABONBA_PTR_GET(inputs_, Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setInputs(const Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setInputs(Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline const Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs & outputs() const { DARABONBA_PTR_GET_CONST(outputs_, Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs) };
    inline Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs outputs() { DARABONBA_PTR_GET(outputs_, Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setOutputs(const Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs & outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setOutputs(Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs && outputs) { DARABONBA_PTR_SET_RVALUE(outputs_, outputs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource) };
    inline Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setRuntimeResource(const Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setRuntimeResource(Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const Models::ExecuteAdhocWorkflowInstanceRequestTasksScript & script() const { DARABONBA_PTR_GET_CONST(script_, Models::ExecuteAdhocWorkflowInstanceRequestTasksScript) };
    inline Models::ExecuteAdhocWorkflowInstanceRequestTasksScript script() { DARABONBA_PTR_GET(script_, Models::ExecuteAdhocWorkflowInstanceRequestTasksScript) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setScript(const Models::ExecuteAdhocWorkflowInstanceRequestTasksScript & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setScript(Models::ExecuteAdhocWorkflowInstanceRequestTasksScript && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExecuteAdhocWorkflowInstanceRequestTasks& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The unique code of the client. This code uniquely identifies a task.
    // 
    // This parameter is required.
    std::shared_ptr<string> clientUniqueCode_ = nullptr;
    // The information about the associated data source.
    std::shared_ptr<Models::ExecuteAdhocWorkflowInstanceRequestTasksDataSource> dataSource_ = nullptr;
    // The dependency information.
    std::shared_ptr<vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksDependencies>> dependencies_ = nullptr;
    // The input information.
    std::shared_ptr<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputs> inputs_ = nullptr;
    // The name of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The output information.
    std::shared_ptr<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputs> outputs_ = nullptr;
    // The account ID of the owner.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The configurations of the runtime environment, such as the resource group information.
    // 
    // This parameter is required.
    std::shared_ptr<Models::ExecuteAdhocWorkflowInstanceRequestTasksRuntimeResource> runtimeResource_ = nullptr;
    // The script information.
    std::shared_ptr<Models::ExecuteAdhocWorkflowInstanceRequestTasksScript> script_ = nullptr;
    // The timeout period of task running. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // The type of the task.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
