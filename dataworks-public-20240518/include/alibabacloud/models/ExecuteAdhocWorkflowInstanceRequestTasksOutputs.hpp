// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs.hpp>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequestTasksOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequestTasksOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequestTasksOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ExecuteAdhocWorkflowInstanceRequestTasksOutputs() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksOutputs(const ExecuteAdhocWorkflowInstanceRequestTasksOutputs &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksOutputs(ExecuteAdhocWorkflowInstanceRequestTasksOutputs &&) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequestTasksOutputs() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksOutputs& operator=(const ExecuteAdhocWorkflowInstanceRequestTasksOutputs &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksOutputs& operator=(ExecuteAdhocWorkflowInstanceRequestTasksOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskOutputs_ == nullptr
        && return this->variables_ == nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs>) };
    inline vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs>) };
    inline ExecuteAdhocWorkflowInstanceRequestTasksOutputs& setTaskOutputs(const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline ExecuteAdhocWorkflowInstanceRequestTasksOutputs& setTaskOutputs(vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables>) };
    inline vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables>) };
    inline ExecuteAdhocWorkflowInstanceRequestTasksOutputs& setVariables(const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ExecuteAdhocWorkflowInstanceRequestTasksOutputs& setVariables(vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsTaskOutputs>> taskOutputs_ = nullptr;
    // The variables.
    std::shared_ptr<vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
