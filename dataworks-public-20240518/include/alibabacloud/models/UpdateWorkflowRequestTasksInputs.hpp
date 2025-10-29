// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSINPUTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSINPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkflowRequestTasksInputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequestTasksInputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequestTasksInputs& obj) { 
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequestTasksInputs& obj) { 
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    UpdateWorkflowRequestTasksInputs() = default ;
    UpdateWorkflowRequestTasksInputs(const UpdateWorkflowRequestTasksInputs &) = default ;
    UpdateWorkflowRequestTasksInputs(UpdateWorkflowRequestTasksInputs &&) = default ;
    UpdateWorkflowRequestTasksInputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequestTasksInputs() = default ;
    UpdateWorkflowRequestTasksInputs& operator=(const UpdateWorkflowRequestTasksInputs &) = default ;
    UpdateWorkflowRequestTasksInputs& operator=(UpdateWorkflowRequestTasksInputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->variables_ == nullptr; };
    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::UpdateWorkflowRequestTasksInputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::UpdateWorkflowRequestTasksInputsVariables>) };
    inline vector<Models::UpdateWorkflowRequestTasksInputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::UpdateWorkflowRequestTasksInputsVariables>) };
    inline UpdateWorkflowRequestTasksInputs& setVariables(const vector<Models::UpdateWorkflowRequestTasksInputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateWorkflowRequestTasksInputs& setVariables(vector<Models::UpdateWorkflowRequestTasksInputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The variables.
    std::shared_ptr<vector<Models::UpdateWorkflowRequestTasksInputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
