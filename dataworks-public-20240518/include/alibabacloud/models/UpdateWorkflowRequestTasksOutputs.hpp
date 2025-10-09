// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTTASKSOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkflowRequestTasksOutputsTaskOutputs.hpp>
#include <alibabacloud/models/UpdateWorkflowRequestTasksOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequestTasksOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequestTasksOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequestTasksOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    UpdateWorkflowRequestTasksOutputs() = default ;
    UpdateWorkflowRequestTasksOutputs(const UpdateWorkflowRequestTasksOutputs &) = default ;
    UpdateWorkflowRequestTasksOutputs(UpdateWorkflowRequestTasksOutputs &&) = default ;
    UpdateWorkflowRequestTasksOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequestTasksOutputs() = default ;
    UpdateWorkflowRequestTasksOutputs& operator=(const UpdateWorkflowRequestTasksOutputs &) = default ;
    UpdateWorkflowRequestTasksOutputs& operator=(UpdateWorkflowRequestTasksOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskOutputs_ != nullptr
        && this->variables_ != nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs>) };
    inline vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs>) };
    inline UpdateWorkflowRequestTasksOutputs& setTaskOutputs(const vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline UpdateWorkflowRequestTasksOutputs& setTaskOutputs(vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::UpdateWorkflowRequestTasksOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::UpdateWorkflowRequestTasksOutputsVariables>) };
    inline vector<Models::UpdateWorkflowRequestTasksOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::UpdateWorkflowRequestTasksOutputsVariables>) };
    inline UpdateWorkflowRequestTasksOutputs& setVariables(const vector<Models::UpdateWorkflowRequestTasksOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateWorkflowRequestTasksOutputs& setVariables(vector<Models::UpdateWorkflowRequestTasksOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::UpdateWorkflowRequestTasksOutputsTaskOutputs>> taskOutputs_ = nullptr;
    // The variables.
    std::shared_ptr<vector<Models::UpdateWorkflowRequestTasksOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
