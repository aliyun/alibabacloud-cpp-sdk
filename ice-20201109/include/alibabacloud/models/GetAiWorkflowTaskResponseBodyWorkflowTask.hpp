// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODYWORKFLOWTASK_HPP_
#define ALIBABACLOUD_MODELS_GETAIWORKFLOWTASKRESPONSEBODYWORKFLOWTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetAIWorkflowTaskResponseBodyWorkflowTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIWorkflowTaskResponseBodyWorkflowTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(NodeResults, nodeResults_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(Workflow, workflow_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIWorkflowTaskResponseBodyWorkflowTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(NodeResults, nodeResults_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(Workflow, workflow_);
    };
    GetAIWorkflowTaskResponseBodyWorkflowTask() = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTask(const GetAIWorkflowTaskResponseBodyWorkflowTask &) = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTask(GetAIWorkflowTaskResponseBodyWorkflowTask &&) = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIWorkflowTaskResponseBodyWorkflowTask() = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTask& operator=(const GetAIWorkflowTaskResponseBodyWorkflowTask &) = default ;
    GetAIWorkflowTaskResponseBodyWorkflowTask& operator=(GetAIWorkflowTaskResponseBodyWorkflowTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->finishTime_ == nullptr && return this->inputs_ == nullptr && return this->nodeResults_ == nullptr && return this->outputs_ == nullptr && return this->status_ == nullptr
        && return this->taskId_ == nullptr && return this->userData_ == nullptr && return this->version_ == nullptr && return this->workflow_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline string inputs() const { DARABONBA_PTR_GET_DEFAULT(inputs_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setInputs(string inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };


    // nodeResults Field Functions 
    bool hasNodeResults() const { return this->nodeResults_ != nullptr;};
    void deleteNodeResults() { this->nodeResults_ = nullptr;};
    inline string nodeResults() const { DARABONBA_PTR_GET_DEFAULT(nodeResults_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setNodeResults(string nodeResults) { DARABONBA_PTR_SET_VALUE(nodeResults_, nodeResults) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workflow Field Functions 
    bool hasWorkflow() const { return this->workflow_ != nullptr;};
    void deleteWorkflow() { this->workflow_ = nullptr;};
    inline const Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow & workflow() const { DARABONBA_PTR_GET_CONST(workflow_, Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow) };
    inline Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow workflow() { DARABONBA_PTR_GET(workflow_, Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow) };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setWorkflow(const Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow & workflow) { DARABONBA_PTR_SET_VALUE(workflow_, workflow) };
    inline GetAIWorkflowTaskResponseBodyWorkflowTask& setWorkflow(Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow && workflow) { DARABONBA_PTR_SET_RVALUE(workflow_, workflow) };


  protected:
    // The time when the task was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the task was complete. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The input parameters of the workflow task.
    std::shared_ptr<string> inputs_ = nullptr;
    // The results of the workflow nodes. The structure of this JSON varies based on the workflow\\"s configuration.
    std::shared_ptr<string> nodeResults_ = nullptr;
    // The node output.
    std::shared_ptr<string> outputs_ = nullptr;
    // The task state.
    // 
    // Valid values:
    // 
    // *   running
    // *   stopped
    // *   failed
    // *   partial-succeeded
    // *   succeeded
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the workflow task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The user-defined data.
    std::shared_ptr<string> userData_ = nullptr;
    // The version of the workflow template that was executed.
    std::shared_ptr<string> version_ = nullptr;
    // The workflow template information.
    std::shared_ptr<Models::GetAIWorkflowTaskResponseBodyWorkflowTaskWorkflow> workflow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
