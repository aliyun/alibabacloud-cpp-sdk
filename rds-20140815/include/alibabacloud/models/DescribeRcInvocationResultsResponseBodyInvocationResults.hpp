// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINVOCATIONRESULTSRESPONSEBODYINVOCATIONRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINVOCATIONRESULTSRESPONSEBODYINVOCATIONRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCInvocationResultsResponseBodyInvocationResultsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInvocationResultsResponseBodyInvocationResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInvocationResultsResponseBodyInvocationResults& obj) { 
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(Dropped, dropped_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_TO_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_TO_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(Repeats, repeats_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInvocationResultsResponseBodyInvocationResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
      DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
      DARABONBA_PTR_FROM_JSON(FinishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
      DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
      DARABONBA_PTR_FROM_JSON(InvokeRecordStatus, invokeRecordStatus_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    DescribeRCInvocationResultsResponseBodyInvocationResults() = default ;
    DescribeRCInvocationResultsResponseBodyInvocationResults(const DescribeRCInvocationResultsResponseBodyInvocationResults &) = default ;
    DescribeRCInvocationResultsResponseBodyInvocationResults(DescribeRCInvocationResultsResponseBodyInvocationResults &&) = default ;
    DescribeRCInvocationResultsResponseBodyInvocationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInvocationResultsResponseBodyInvocationResults() = default ;
    DescribeRCInvocationResultsResponseBodyInvocationResults& operator=(const DescribeRCInvocationResultsResponseBodyInvocationResults &) = default ;
    DescribeRCInvocationResultsResponseBodyInvocationResults& operator=(DescribeRCInvocationResultsResponseBodyInvocationResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandId_ == nullptr
        && return this->containerId_ == nullptr && return this->containerName_ == nullptr && return this->dropped_ == nullptr && return this->errorCode_ == nullptr && return this->errorInfo_ == nullptr
        && return this->exitCode_ == nullptr && return this->finishedTime_ == nullptr && return this->instanceId_ == nullptr && return this->invocationStatus_ == nullptr && return this->invokeId_ == nullptr
        && return this->invokeRecordStatus_ == nullptr && return this->output_ == nullptr && return this->repeats_ == nullptr && return this->startTime_ == nullptr && return this->stopTime_ == nullptr
        && return this->tags_ == nullptr && return this->username_ == nullptr; };
    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // dropped Field Functions 
    bool hasDropped() const { return this->dropped_ != nullptr;};
    void deleteDropped() { this->dropped_ = nullptr;};
    inline int32_t dropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorInfo Field Functions 
    bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
    void deleteErrorInfo() { this->errorInfo_ = nullptr;};
    inline string errorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


    // exitCode Field Functions 
    bool hasExitCode() const { return this->exitCode_ != nullptr;};
    void deleteExitCode() { this->exitCode_ = nullptr;};
    inline int32_t exitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0) };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setExitCode(int32_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline string finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // invocationStatus Field Functions 
    bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
    void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
    inline string invocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


    // invokeId Field Functions 
    bool hasInvokeId() const { return this->invokeId_ != nullptr;};
    void deleteInvokeId() { this->invokeId_ = nullptr;};
    inline string invokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


    // invokeRecordStatus Field Functions 
    bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
    void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
    inline string invokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline string output() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


    // repeats Field Functions 
    bool hasRepeats() const { return this->repeats_ != nullptr;};
    void deleteRepeats() { this->repeats_ = nullptr;};
    inline string repeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setRepeats(string repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stopTime Field Functions 
    bool hasStopTime() const { return this->stopTime_ != nullptr;};
    void deleteStopTime() { this->stopTime_ = nullptr;};
    inline string stopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags>) };
    inline vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags>) };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setTags(const vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setTags(vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline DescribeRCInvocationResultsResponseBodyInvocationResults& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> commandId_ = nullptr;
    std::shared_ptr<string> containerId_ = nullptr;
    std::shared_ptr<string> containerName_ = nullptr;
    std::shared_ptr<int32_t> dropped_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorInfo_ = nullptr;
    std::shared_ptr<int32_t> exitCode_ = nullptr;
    std::shared_ptr<string> finishedTime_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> invocationStatus_ = nullptr;
    std::shared_ptr<string> invokeId_ = nullptr;
    std::shared_ptr<string> invokeRecordStatus_ = nullptr;
    std::shared_ptr<string> output_ = nullptr;
    std::shared_ptr<string> repeats_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> stopTime_ = nullptr;
    std::shared_ptr<vector<Models::DescribeRCInvocationResultsResponseBodyInvocationResultsTags>> tags_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
