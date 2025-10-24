// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeInvocationsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeInvocationsResponseBodyData() = default ;
    DescribeInvocationsResponseBodyData(const DescribeInvocationsResponseBodyData &) = default ;
    DescribeInvocationsResponseBodyData(DescribeInvocationsResponseBodyData &&) = default ;
    DescribeInvocationsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationsResponseBodyData() = default ;
    DescribeInvocationsResponseBodyData& operator=(const DescribeInvocationsResponseBodyData &) = default ;
    DescribeInvocationsResponseBodyData& operator=(DescribeInvocationsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finishTime_ == nullptr
        && return this->instanceId_ == nullptr && return this->invocationId_ == nullptr && return this->invocationStatus_ == nullptr && return this->output_ == nullptr && return this->startTime_ == nullptr; };
    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeInvocationsResponseBodyData& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInvocationsResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invocationId Field Functions 
    bool hasInvocationId() const { return this->invocationId_ != nullptr;};
    void deleteInvocationId() { this->invocationId_ = nullptr;};
    inline string invocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
    inline DescribeInvocationsResponseBodyData& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeInvocationsResponseBodyData& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeInvocationsResponseBodyData& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeInvocationsResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the command execution.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The ID of the cloud phone instance on which the command is executed.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the execution.
    std::shared_ptr<string> invocationId_ = nullptr;
    // The execution state of the command.
    // 
    // Valid values:
    // 
    // *   Failed: The execution of the command failed.
    // *   Timeout: The execution of the command timed out.
    // *   Running: The command is being executed.
    // *   Success: The execution of the command is successful.
    // *   Pending: The command is waiting to be executed.
    std::shared_ptr<string> invocationStatus_ = nullptr;
    // The output of the command execution.
    std::shared_ptr<string> output_ = nullptr;
    // The start time of the command execution.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
