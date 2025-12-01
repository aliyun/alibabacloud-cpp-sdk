// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInvocationsResponseBodyInvocations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocations, invocations_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocations, invocations_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInvocationsResponseBody() = default ;
    DescribeInvocationsResponseBody(const DescribeInvocationsResponseBody &) = default ;
    DescribeInvocationsResponseBody(DescribeInvocationsResponseBody &&) = default ;
    DescribeInvocationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBody() = default ;
    DescribeInvocationsResponseBody& operator=(const DescribeInvocationsResponseBody &) = default ;
    DescribeInvocationsResponseBody& operator=(DescribeInvocationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->invocations_ == nullptr
        && return this->nextToken_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const DescribeInvocationsResponseBodyInvocations & invocations() const { DARABONBA_PTR_GET_CONST(invocations_, DescribeInvocationsResponseBodyInvocations) };
    inline DescribeInvocationsResponseBodyInvocations invocations() { DARABONBA_PTR_GET(invocations_, DescribeInvocationsResponseBodyInvocations) };
    inline DescribeInvocationsResponseBody& setInvocations(const DescribeInvocationsResponseBodyInvocations & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline DescribeInvocationsResponseBody& setInvocations(DescribeInvocationsResponseBodyInvocations && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInvocationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInvocationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInvocationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of instance N. When you specify this parameter, the system queries all the execution records of all the commands that run on the instance.
    std::shared_ptr<DescribeInvocationsResponseBodyInvocations> invocations_ = nullptr;
    // The overall execution status of the command task. The value of this parameter depends on the execution states of the command task on all involved instances. Valid values:
    // 
    // *   Running:
    // 
    //     *   Scheduled task: Before you stop the scheduled execution of the command, the overall execution state is always Running.
    //     *   One-time task: If the command is being run on instances, the overall execution state is Running.
    // 
    // *   Finished:
    // 
    //     *   Scheduled task: The overall execution state can never be Finished.
    //     *   One-time task: The execution is complete on all instances, or the execution is stopped on some instances and is complete on the other instances.
    // 
    // *   Success: If the execution state on at least one instance is Success and the execution state on the other instances is Stopped or Success, the overall execution state is Success.
    // 
    //     *   One-time task: The execution is complete, and the exit code is 0.
    //     *   Scheduled task: The last execution is complete, the exit code is 0, and the specified period ends.
    // 
    // *   Failed:
    // 
    //     *   Scheduled task: The overall execution state can never be Failed.
    //     *   One-time task: The execution failed on all instances.
    // 
    // *   Stopped: The task is stopped.
    // 
    // *   Stopping: The task is being stopped.
    // 
    // *   PartialFailed: The task fails on some instances. If you specify both this parameter and `InstanceId`, this parameter does not take effect.
    // 
    // *   Pending: The command is being verified or sent. If the execution state on at least one instance is Pending, the overall execution state is Pending.
    // 
    // *   Scheduled: The command that is set to run on a schedule is sent and waiting to be run. If the execution state on at least one instance is Scheduled, the overall execution state is Scheduled.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The command type. Valid values:
    // 
    // *   RunBatScript: batch command, applicable to Windows instances.
    // *   RunPowerShellScript: PowerShell command, applicable to Windows instances.
    // *   RunShellScript: shell command, applicable to Linux instances.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The command ID. You can call the [DescribeCommands](https://help.aliyun.com/document_detail/64843.html) operation to query all available command IDs.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The command name. If you specify both this parameter and `InstanceId`, this parameter does not take effect.
    std::shared_ptr<string> requestId_ = nullptr;
    // Specifies whether the command is to be automatically run. Valid values:
    // 
    // *   true: The command is run by calling the `RunCommand` or `InvokeCommand` operation with `RepeatMode` set to `Period`, `NextRebootOnly`, or `EveryReboot`.
    // 
    // *   false: The command meets one of the following requirements:
    // 
    //     *   The command is run by calling the `RunCommand` or `InvokeCommand` operation with `RepeatMode` set to `Once`.
    //     *   The command task is canceled, stopped, or completed.
    // 
    // Default value: false.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
