// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class StopExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cause, cause_);
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
    };
    friend void from_json(const Darabonba::Json& j, StopExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cause, cause_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
    };
    StopExecutionRequest() = default ;
    StopExecutionRequest(const StopExecutionRequest &) = default ;
    StopExecutionRequest(StopExecutionRequest &&) = default ;
    StopExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopExecutionRequest() = default ;
    StopExecutionRequest& operator=(const StopExecutionRequest &) = default ;
    StopExecutionRequest& operator=(StopExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cause_ == nullptr
        && return this->error_ == nullptr && return this->executionName_ == nullptr && return this->flowName_ == nullptr; };
    // cause Field Functions 
    bool hasCause() const { return this->cause_ != nullptr;};
    void deleteCause() { this->cause_ = nullptr;};
    inline string cause() const { DARABONBA_PTR_GET_DEFAULT(cause_, "") };
    inline StopExecutionRequest& setCause(string cause) { DARABONBA_PTR_SET_VALUE(cause_, cause) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline StopExecutionRequest& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string executionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline StopExecutionRequest& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline StopExecutionRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


  protected:
    // The reason for stopping the execution. The value must be 1 to 4,096 characters in length.
    std::shared_ptr<string> cause_ = nullptr;
    // The error code for stopping the execution. The error code must be 1 to 128 characters in length.
    std::shared_ptr<string> error_ = nullptr;
    // The name of the execution to be stopped. You can call the **ListExecutions** operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> executionName_ = nullptr;
    // The name of the workflow to be stopped. You can call the **ListFlows** operation to obtain the value of this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
