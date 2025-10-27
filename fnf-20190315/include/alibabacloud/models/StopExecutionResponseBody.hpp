// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPEXECUTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STOPEXECUTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class StopExecutionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopExecutionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FlowDefinition, flowDefinition_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoppedTime, stoppedTime_);
    };
    friend void from_json(const Darabonba::Json& j, StopExecutionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowDefinition, flowDefinition_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(StartedTime, startedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoppedTime, stoppedTime_);
    };
    StopExecutionResponseBody() = default ;
    StopExecutionResponseBody(const StopExecutionResponseBody &) = default ;
    StopExecutionResponseBody(StopExecutionResponseBody &&) = default ;
    StopExecutionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopExecutionResponseBody() = default ;
    StopExecutionResponseBody& operator=(const StopExecutionResponseBody &) = default ;
    StopExecutionResponseBody& operator=(StopExecutionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->flowDefinition_ == nullptr
        && return this->flowName_ == nullptr && return this->input_ == nullptr && return this->name_ == nullptr && return this->output_ == nullptr && return this->requestId_ == nullptr
        && return this->roleArn_ == nullptr && return this->startedTime_ == nullptr && return this->status_ == nullptr && return this->stoppedTime_ == nullptr; };
    // flowDefinition Field Functions 
    bool hasFlowDefinition() const { return this->flowDefinition_ != nullptr;};
    void deleteFlowDefinition() { this->flowDefinition_ = nullptr;};
    inline string flowDefinition() const { DARABONBA_PTR_GET_DEFAULT(flowDefinition_, "") };
    inline StopExecutionResponseBody& setFlowDefinition(string flowDefinition) { DARABONBA_PTR_SET_VALUE(flowDefinition_, flowDefinition) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline StopExecutionResponseBody& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline StopExecutionResponseBody& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline StopExecutionResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline StopExecutionResponseBody& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StopExecutionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string roleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline StopExecutionResponseBody& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // startedTime Field Functions 
    bool hasStartedTime() const { return this->startedTime_ != nullptr;};
    void deleteStartedTime() { this->startedTime_ = nullptr;};
    inline string startedTime() const { DARABONBA_PTR_GET_DEFAULT(startedTime_, "") };
    inline StopExecutionResponseBody& setStartedTime(string startedTime) { DARABONBA_PTR_SET_VALUE(startedTime_, startedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StopExecutionResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stoppedTime Field Functions 
    bool hasStoppedTime() const { return this->stoppedTime_ != nullptr;};
    void deleteStoppedTime() { this->stoppedTime_ = nullptr;};
    inline string stoppedTime() const { DARABONBA_PTR_GET_DEFAULT(stoppedTime_, "") };
    inline StopExecutionResponseBody& setStoppedTime(string stoppedTime) { DARABONBA_PTR_SET_VALUE(stoppedTime_, stoppedTime) };


  protected:
    // The definition of the flow.
    std::shared_ptr<string> flowDefinition_ = nullptr;
    // The name of the flow.
    std::shared_ptr<string> flowName_ = nullptr;
    // The input of the execution, which is in the JSON format.
    std::shared_ptr<string> input_ = nullptr;
    // The name of the execution.
    std::shared_ptr<string> name_ = nullptr;
    // The execution result, which is in the JSON format.
    std::shared_ptr<string> output_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The Alibaba Cloud resource name (ARN) of the role that executed the flow. If the RoleArn in the flow definition is changed during the execution of the flow, the system records and returns a snapshot of the original RoleArn.
    // 
    // >  If you do not specify the RoleArn parameter in the request parameters, the response parameters do not contain the RoleArn parameter.
    std::shared_ptr<string> roleArn_ = nullptr;
    // The time when the execution started.
    std::shared_ptr<string> startedTime_ = nullptr;
    // The execution status. Valid values:
    // 
    // *   **Starting**
    // *   **Running**
    // *   **Stopped**
    // *   **Succeeded**
    // *   **Failed**
    // *   **TimedOut**
    std::shared_ptr<string> status_ = nullptr;
    // The time when the execution stopped.
    std::shared_ptr<string> stoppedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
