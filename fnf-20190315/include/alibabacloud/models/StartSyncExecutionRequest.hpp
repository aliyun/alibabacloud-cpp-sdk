// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTSYNCEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTSYNCEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class StartSyncExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartSyncExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
    };
    friend void from_json(const Darabonba::Json& j, StartSyncExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
    };
    StartSyncExecutionRequest() = default ;
    StartSyncExecutionRequest(const StartSyncExecutionRequest &) = default ;
    StartSyncExecutionRequest(StartSyncExecutionRequest &&) = default ;
    StartSyncExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartSyncExecutionRequest() = default ;
    StartSyncExecutionRequest& operator=(const StartSyncExecutionRequest &) = default ;
    StartSyncExecutionRequest& operator=(StartSyncExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionName_ == nullptr
        && return this->flowName_ == nullptr && return this->input_ == nullptr && return this->qualifier_ == nullptr; };
    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string executionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline StartSyncExecutionRequest& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline StartSyncExecutionRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline StartSyncExecutionRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // qualifier Field Functions 
    bool hasQualifier() const { return this->qualifier_ != nullptr;};
    void deleteQualifier() { this->qualifier_ = nullptr;};
    inline string qualifier() const { DARABONBA_PTR_GET_DEFAULT(qualifier_, "") };
    inline StartSyncExecutionRequest& setQualifier(string qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };


  protected:
    // The name of the execution that you want to start. The name must meet the following conventions:
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must start with a letter or an underscore (_).
    // *   The name is case-sensitive.
    // *   The name must be 1 to 128 characters in length.
    // 
    // Different from the StartExecution operation, in the synchronous execution mode, the execution name is no longer required to be unique within a flow. You can choose to provide an execution name to identify the current execution. In this case, the system adds a UUID to the current execution name. The used format is {ExecutionName}:{UUID}. If you do not specify the execution name, the system automatically generates an execution name.
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
