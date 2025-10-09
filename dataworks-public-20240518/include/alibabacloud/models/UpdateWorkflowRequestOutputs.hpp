// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKFLOWREQUESTOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWorkflowRequestOutputsTaskOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateWorkflowRequestOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkflowRequestOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkflowRequestOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
    };
    UpdateWorkflowRequestOutputs() = default ;
    UpdateWorkflowRequestOutputs(const UpdateWorkflowRequestOutputs &) = default ;
    UpdateWorkflowRequestOutputs(UpdateWorkflowRequestOutputs &&) = default ;
    UpdateWorkflowRequestOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkflowRequestOutputs() = default ;
    UpdateWorkflowRequestOutputs& operator=(const UpdateWorkflowRequestOutputs &) = default ;
    UpdateWorkflowRequestOutputs& operator=(UpdateWorkflowRequestOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskOutputs_ != nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::UpdateWorkflowRequestOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::UpdateWorkflowRequestOutputsTaskOutputs>) };
    inline vector<Models::UpdateWorkflowRequestOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::UpdateWorkflowRequestOutputsTaskOutputs>) };
    inline UpdateWorkflowRequestOutputs& setTaskOutputs(const vector<Models::UpdateWorkflowRequestOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline UpdateWorkflowRequestOutputs& setTaskOutputs(vector<Models::UpdateWorkflowRequestOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::UpdateWorkflowRequestOutputsTaskOutputs>> taskOutputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
