// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKREQUESTOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKREQUESTOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTaskRequestOutputsTaskOutputs.hpp>
#include <alibabacloud/models/UpdateTaskRequestOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskRequestOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskRequestOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskRequestOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    UpdateTaskRequestOutputs() = default ;
    UpdateTaskRequestOutputs(const UpdateTaskRequestOutputs &) = default ;
    UpdateTaskRequestOutputs(UpdateTaskRequestOutputs &&) = default ;
    UpdateTaskRequestOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskRequestOutputs() = default ;
    UpdateTaskRequestOutputs& operator=(const UpdateTaskRequestOutputs &) = default ;
    UpdateTaskRequestOutputs& operator=(UpdateTaskRequestOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskOutputs_ != nullptr
        && this->variables_ != nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::UpdateTaskRequestOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::UpdateTaskRequestOutputsTaskOutputs>) };
    inline vector<Models::UpdateTaskRequestOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::UpdateTaskRequestOutputsTaskOutputs>) };
    inline UpdateTaskRequestOutputs& setTaskOutputs(const vector<Models::UpdateTaskRequestOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline UpdateTaskRequestOutputs& setTaskOutputs(vector<Models::UpdateTaskRequestOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::UpdateTaskRequestOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::UpdateTaskRequestOutputsVariables>) };
    inline vector<Models::UpdateTaskRequestOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::UpdateTaskRequestOutputsVariables>) };
    inline UpdateTaskRequestOutputs& setVariables(const vector<Models::UpdateTaskRequestOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline UpdateTaskRequestOutputs& setVariables(vector<Models::UpdateTaskRequestOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::UpdateTaskRequestOutputsTaskOutputs>> taskOutputs_ = nullptr;
    // The variables.
    std::shared_ptr<vector<Models::UpdateTaskRequestOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
