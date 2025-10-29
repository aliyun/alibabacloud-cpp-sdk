// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSINPUTS_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCWORKFLOWINSTANCEREQUESTTASKSINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ExecuteAdhocWorkflowInstanceRequestTasksInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdhocWorkflowInstanceRequestTasksInputs& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdhocWorkflowInstanceRequestTasksInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    ExecuteAdhocWorkflowInstanceRequestTasksInputs() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksInputs(const ExecuteAdhocWorkflowInstanceRequestTasksInputs &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksInputs(ExecuteAdhocWorkflowInstanceRequestTasksInputs &&) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdhocWorkflowInstanceRequestTasksInputs() = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksInputs& operator=(const ExecuteAdhocWorkflowInstanceRequestTasksInputs &) = default ;
    ExecuteAdhocWorkflowInstanceRequestTasksInputs& operator=(ExecuteAdhocWorkflowInstanceRequestTasksInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables>) };
    inline vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables>) };
    inline ExecuteAdhocWorkflowInstanceRequestTasksInputs& setVariables(const vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline ExecuteAdhocWorkflowInstanceRequestTasksInputs& setVariables(vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The variables.
    std::shared_ptr<vector<Models::ExecuteAdhocWorkflowInstanceRequestTasksInputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
