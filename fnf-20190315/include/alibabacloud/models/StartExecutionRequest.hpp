// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class StartExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackFnFTaskToken, callbackFnFTaskToken_);
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, StartExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackFnFTaskToken, callbackFnFTaskToken_);
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
    };
    StartExecutionRequest() = default ;
    StartExecutionRequest(const StartExecutionRequest &) = default ;
    StartExecutionRequest(StartExecutionRequest &&) = default ;
    StartExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartExecutionRequest() = default ;
    StartExecutionRequest& operator=(const StartExecutionRequest &) = default ;
    StartExecutionRequest& operator=(StartExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackFnFTaskToken_ == nullptr
        && return this->executionName_ == nullptr && return this->flowName_ == nullptr && return this->input_ == nullptr && return this->qualifier_ == nullptr; };
    // callbackFnFTaskToken Field Functions 
    bool hasCallbackFnFTaskToken() const { return this->callbackFnFTaskToken_ != nullptr;};
    void deleteCallbackFnFTaskToken() { this->callbackFnFTaskToken_ = nullptr;};
    inline string callbackFnFTaskToken() const { DARABONBA_PTR_GET_DEFAULT(callbackFnFTaskToken_, "") };
    inline StartExecutionRequest& setCallbackFnFTaskToken(string callbackFnFTaskToken) { DARABONBA_PTR_SET_VALUE(callbackFnFTaskToken_, callbackFnFTaskToken) };


    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string executionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline StartExecutionRequest& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline StartExecutionRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline StartExecutionRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline StartExecutionRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // Specifies that the **TaskToken**-related tasks are called back after the execution in the flow ends.
    std::shared_ptr<string> callbackFnFTaskToken_ = nullptr;
    // The name of the execution. The execution name is unique within a workflow. Configure this parameter based on the following rules:
    // 
    // *   The name must start with a letter or an underscore (_).
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name is case-sensitive.
    // *   The name must be 1 to 128 characters in length.
    std::shared_ptr<string> executionName_ = nullptr;
    // The name of the workflow to be executed.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // The input of the execution, which is in the JSON format.
    std::shared_ptr<string> input_ = nullptr;
    std::shared_ptr<string> qualifier_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
