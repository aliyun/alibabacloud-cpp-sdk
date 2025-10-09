// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_GETTASKRESPONSEBODYTASKOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTaskResponseBodyTaskOutputsTaskOutputs.hpp>
#include <alibabacloud/models/GetTaskResponseBodyTaskOutputsVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetTaskResponseBodyTaskOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskResponseBodyTaskOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskResponseBodyTaskOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    GetTaskResponseBodyTaskOutputs() = default ;
    GetTaskResponseBodyTaskOutputs(const GetTaskResponseBodyTaskOutputs &) = default ;
    GetTaskResponseBodyTaskOutputs(GetTaskResponseBodyTaskOutputs &&) = default ;
    GetTaskResponseBodyTaskOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskResponseBodyTaskOutputs() = default ;
    GetTaskResponseBodyTaskOutputs& operator=(const GetTaskResponseBodyTaskOutputs &) = default ;
    GetTaskResponseBodyTaskOutputs& operator=(GetTaskResponseBodyTaskOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskOutputs_ != nullptr
        && this->variables_ != nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs>) };
    inline vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs>) };
    inline GetTaskResponseBodyTaskOutputs& setTaskOutputs(const vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline GetTaskResponseBodyTaskOutputs& setTaskOutputs(vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::GetTaskResponseBodyTaskOutputsVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::GetTaskResponseBodyTaskOutputsVariables>) };
    inline vector<Models::GetTaskResponseBodyTaskOutputsVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::GetTaskResponseBodyTaskOutputsVariables>) };
    inline GetTaskResponseBodyTaskOutputs& setVariables(const vector<Models::GetTaskResponseBodyTaskOutputsVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline GetTaskResponseBodyTaskOutputs& setVariables(vector<Models::GetTaskResponseBodyTaskOutputsVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::GetTaskResponseBodyTaskOutputsTaskOutputs>> taskOutputs_ = nullptr;
    // The variables.
    std::shared_ptr<vector<Models::GetTaskResponseBodyTaskOutputsVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
