// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Fnf20190315
{
namespace Models
{
  class DescribeExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(WaitTimeSeconds, waitTimeSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(WaitTimeSeconds, waitTimeSeconds_);
    };
    DescribeExecutionRequest() = default ;
    DescribeExecutionRequest(const DescribeExecutionRequest &) = default ;
    DescribeExecutionRequest(DescribeExecutionRequest &&) = default ;
    DescribeExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExecutionRequest() = default ;
    DescribeExecutionRequest& operator=(const DescribeExecutionRequest &) = default ;
    DescribeExecutionRequest& operator=(DescribeExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionName_ == nullptr
        && return this->flowName_ == nullptr && return this->waitTimeSeconds_ == nullptr; };
    // executionName Field Functions 
    bool hasExecutionName() const { return this->executionName_ != nullptr;};
    void deleteExecutionName() { this->executionName_ = nullptr;};
    inline string executionName() const { DARABONBA_PTR_GET_DEFAULT(executionName_, "") };
    inline DescribeExecutionRequest& setExecutionName(string executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string flowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline DescribeExecutionRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // waitTimeSeconds Field Functions 
    bool hasWaitTimeSeconds() const { return this->waitTimeSeconds_ != nullptr;};
    void deleteWaitTimeSeconds() { this->waitTimeSeconds_ = nullptr;};
    inline int32_t waitTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(waitTimeSeconds_, 0) };
    inline DescribeExecutionRequest& setWaitTimeSeconds(int32_t waitTimeSeconds) { DARABONBA_PTR_SET_VALUE(waitTimeSeconds_, waitTimeSeconds) };


  protected:
    // The name of the execution.
    // 
    // This parameter is required.
    std::shared_ptr<string> executionName_ = nullptr;
    // The name of the workflow.
    // 
    // This parameter is required.
    std::shared_ptr<string> flowName_ = nullptr;
    // The maximum period of time for long polling waits. Valid values: 0 to 60. Unit: seconds. Configure this parameter based on the following rules:
    // 
    // *   If the value is 0, the system immediately returns the current execution status.
    // *   If the value is greater than 0, the long polling request waits until the execution ends or the specified period elapses.
    std::shared_ptr<int32_t> waitTimeSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Fnf20190315
#endif
