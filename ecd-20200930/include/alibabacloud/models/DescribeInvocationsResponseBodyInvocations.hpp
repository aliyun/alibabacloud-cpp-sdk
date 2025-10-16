// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYINVOCATIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocationsInvokeDesktops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeInvocationsResponseBodyInvocations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyInvocations& obj) { 
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(InvokeDesktopCount, invokeDesktopCount_);
      DARABONBA_PTR_TO_JSON(InvokeDesktopSucceedCount, invokeDesktopSucceedCount_);
      DARABONBA_PTR_TO_JSON(InvokeDesktops, invokeDesktops_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyInvocations& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeDesktopCount, invokeDesktopCount_);
      DARABONBA_PTR_FROM_JSON(InvokeDesktopSucceedCount, invokeDesktopSucceedCount_);
      DARABONBA_PTR_FROM_JSON(InvokeDesktops, invokeDesktops_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
    };
    DescribeInvocationsResponseBodyInvocations() = default ;
    DescribeInvocationsResponseBodyInvocations(const DescribeInvocationsResponseBodyInvocations &) = default ;
    DescribeInvocationsResponseBodyInvocations(DescribeInvocationsResponseBodyInvocations &&) = default ;
    DescribeInvocationsResponseBodyInvocations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyInvocations() = default ;
    DescribeInvocationsResponseBodyInvocations& operator=(const DescribeInvocationsResponseBodyInvocations &) = default ;
    DescribeInvocationsResponseBodyInvocations& operator=(DescribeInvocationsResponseBodyInvocations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandContent_ == nullptr
        && return this->commandType_ == nullptr && return this->creationTime_ == nullptr && return this->endUserId_ == nullptr && return this->invocationStatus_ == nullptr && return this->invokeDesktopCount_ == nullptr
        && return this->invokeDesktopSucceedCount_ == nullptr && return this->invokeDesktops_ == nullptr && return this->invokeId_ == nullptr; };
    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline DescribeInvocationsResponseBodyInvocations& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string commandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline DescribeInvocationsResponseBodyInvocations& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeInvocationsResponseBodyInvocations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeInvocationsResponseBodyInvocations& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationsResponseBodyInvocations& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // invokeDesktopCount Field Functions 
    bool hasInvokeDesktopCount() const { return this->invokeDesktopCount_ != nullptr;};
    void deleteInvokeDesktopCount() { this->invokeDesktopCount_ = nullptr;};
    inline int32_t invokeDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(invokeDesktopCount_, 0) };
    inline DescribeInvocationsResponseBodyInvocations& setInvokeDesktopCount(int32_t invokeDesktopCount) { DARABONBA_PTR_SET_VALUE(invokeDesktopCount_, invokeDesktopCount) };


    // invokeDesktopSucceedCount Field Functions 
    bool hasInvokeDesktopSucceedCount() const { return this->invokeDesktopSucceedCount_ != nullptr;};
    void deleteInvokeDesktopSucceedCount() { this->invokeDesktopSucceedCount_ = nullptr;};
    inline int32_t invokeDesktopSucceedCount() const { DARABONBA_PTR_GET_DEFAULT(invokeDesktopSucceedCount_, 0) };
    inline DescribeInvocationsResponseBodyInvocations& setInvokeDesktopSucceedCount(int32_t invokeDesktopSucceedCount) { DARABONBA_PTR_SET_VALUE(invokeDesktopSucceedCount_, invokeDesktopSucceedCount) };


    // invokeDesktops Field Functions 
    bool hasInvokeDesktops() const { return this->invokeDesktops_ != nullptr;};
    void deleteInvokeDesktops() { this->invokeDesktops_ = nullptr;};
    inline const vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops> & invokeDesktops() const { DARABONBA_PTR_GET_CONST(invokeDesktops_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops>) };
    inline vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops> invokeDesktops() { DARABONBA_PTR_GET(invokeDesktops_, vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops>) };
    inline DescribeInvocationsResponseBodyInvocations& setInvokeDesktops(const vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops> & invokeDesktops) { DARABONBA_PTR_SET_VALUE(invokeDesktops_, invokeDesktops) };
    inline DescribeInvocationsResponseBodyInvocations& setInvokeDesktops(vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops> && invokeDesktops) { DARABONBA_PTR_SET_RVALUE(invokeDesktops_, invokeDesktops) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeInvocationsResponseBodyInvocations& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


  protected:
    // The Base64-encoded command content.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The type of the command.
    std::shared_ptr<string> commandType_ = nullptr;
    // The time when the execution task is created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The overall execution status of the command. The value of this parameter depends on the execution status of the command on all the involved cloud computers. Valid values:
    // 
    // *   Pending: The command is being verified or sent. If the execution status is Pending on at least one cloud computer, the overall status is considered Pending.
    // 
    // *   Running: The command is being executed on cloud computers. If the execution status is Running on at least one cloud computer, the overall status is considered Running.
    // 
    // *   Success: If the execution status is Success on at least one cloud computer and either Success or Stopped on all other cloud computers, the overall status is considered Success.
    // 
    // *   Failed: If the execution status is Stopped or Failed on all cloud computers, the overall status is considered Failed. If any execution status on cloud computers matches one of the following values, Failed is returned.
    // 
    //     *   Invalid: The command is invalid.
    //     *   Aborted: The command failed to be sent.
    //     *   Failed: The command is executed, but the exit code is not 0.
    //     *   Timeout: The command execution timed out.
    //     *   Error: An error occurred when the command is being executed.
    // 
    // *   Stopping: The command execution is being stopped. If the execution status is Stopping on at least one cloud computer, the overall status is considered Stopping.
    // 
    // *   Stopped: The command execution stops. If the execution status is Stopped on at least one cloud computer, the overall status is considered Stopped. If any execution status on cloud computers matches one of the following values, Stopped is returned.
    // 
    //     *   Cancelled: The command execution is canceled.
    //     *   Terminated: The command execution is terminated.
    // 
    // *   PartialFailed: The command execution succeeded on some cloud computers but failed on others. If the execution status on any cloud computer is Success, Failed, or Stopped, the overall status is considered PartialFailed.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The total number of cloud computers on which the command is executed.
    std::shared_ptr<int32_t> invokeDesktopCount_ = nullptr;
    // The total number of cloud computers on which the command execution succeeds.
    std::shared_ptr<int32_t> invokeDesktopSucceedCount_ = nullptr;
    // The cloud computers on which the command is executed.
    std::shared_ptr<vector<Models::DescribeInvocationsResponseBodyInvocationsInvokeDesktops>> invokeDesktops_ = nullptr;
    // The ID of the execution.
    std::shared_ptr<string> invokeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
