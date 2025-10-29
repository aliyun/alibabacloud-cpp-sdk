// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWOUTPUTS_HPP_
#define ALIBABACLOUD_MODELS_GETWORKFLOWRESPONSEBODYWORKFLOWOUTPUTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkflowResponseBodyWorkflowOutputsTaskOutputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetWorkflowResponseBodyWorkflowOutputs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkflowResponseBodyWorkflowOutputs& obj) { 
      DARABONBA_PTR_TO_JSON(TaskOutputs, taskOutputs_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkflowResponseBodyWorkflowOutputs& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskOutputs, taskOutputs_);
    };
    GetWorkflowResponseBodyWorkflowOutputs() = default ;
    GetWorkflowResponseBodyWorkflowOutputs(const GetWorkflowResponseBodyWorkflowOutputs &) = default ;
    GetWorkflowResponseBodyWorkflowOutputs(GetWorkflowResponseBodyWorkflowOutputs &&) = default ;
    GetWorkflowResponseBodyWorkflowOutputs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkflowResponseBodyWorkflowOutputs() = default ;
    GetWorkflowResponseBodyWorkflowOutputs& operator=(const GetWorkflowResponseBodyWorkflowOutputs &) = default ;
    GetWorkflowResponseBodyWorkflowOutputs& operator=(GetWorkflowResponseBodyWorkflowOutputs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskOutputs_ == nullptr; };
    // taskOutputs Field Functions 
    bool hasTaskOutputs() const { return this->taskOutputs_ != nullptr;};
    void deleteTaskOutputs() { this->taskOutputs_ = nullptr;};
    inline const vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs> & taskOutputs() const { DARABONBA_PTR_GET_CONST(taskOutputs_, vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs>) };
    inline vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs> taskOutputs() { DARABONBA_PTR_GET(taskOutputs_, vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs>) };
    inline GetWorkflowResponseBodyWorkflowOutputs& setTaskOutputs(const vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs> & taskOutputs) { DARABONBA_PTR_SET_VALUE(taskOutputs_, taskOutputs) };
    inline GetWorkflowResponseBodyWorkflowOutputs& setTaskOutputs(vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs> && taskOutputs) { DARABONBA_PTR_SET_RVALUE(taskOutputs_, taskOutputs) };


  protected:
    // The task outputs.
    std::shared_ptr<vector<Models::GetWorkflowResponseBodyWorkflowOutputsTaskOutputs>> taskOutputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
