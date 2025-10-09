// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKINSTANCERESPONSEBODYTASKINSTANCEOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_GETTASKINSTANCERESPONSEBODYTASKINSTANCEOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs.hpp>
#include <alibabacloud/models/GetTaskInstanceResponseBodyTaskInstanceOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskInstanceResponseBodyTaskInstanceOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskInstanceResponseBodyTaskInstanceOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskInstanceResponseBodyTaskInstanceOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    GetTaskInstanceResponseBodyTaskInstanceOutputs() = default ;
    GetTaskInstanceResponseBodyTaskInstanceOutputs(const GetTaskInstanceResponseBodyTaskInstanceOutputs &) = default ;
    GetTaskInstanceResponseBodyTaskInstanceOutputs(GetTaskInstanceResponseBodyTaskInstanceOutputs &&) = default ;
    GetTaskInstanceResponseBodyTaskInstanceOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskInstanceResponseBodyTaskInstanceOutputs() = default ;
    GetTaskInstanceResponseBodyTaskInstanceOutputs& operator=(const GetTaskInstanceResponseBodyTaskInstanceOutputs &) = default ;
    GetTaskInstanceResponseBodyTaskInstanceOutputs& operator=(GetTaskInstanceResponseBodyTaskInstanceOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskOutputs_ != nullptr
        && this->variables_ != nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs>) };
    inline vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs>) };
    inline GetTaskInstanceResponseBodyTaskInstanceOutputs& setTaskOutputs(const vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline GetTaskInstanceResponseBodyTaskInstanceOutputs& setTaskOutputs(vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables>) };
    inline vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables>) };
    inline GetTaskInstanceResponseBodyTaskInstanceOutputs& setVariables(const vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetTaskInstanceResponseBodyTaskInstanceOutputs& setVariables(vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsTaskOutputs>> taskOutputs_ = nullptr;
    // The variables.
    std::shared_ptr<vector<Models::GetTaskInstanceResponseBodyTaskInstanceOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
