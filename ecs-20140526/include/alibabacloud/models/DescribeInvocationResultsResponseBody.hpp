// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInvocationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Invocation, invocation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvocationResultsResponseBody() = default ;
    DescribeInvocationResultsResponseBody(const DescribeInvocationResultsResponseBody &) = default ;
    DescribeInvocationResultsResponseBody(DescribeInvocationResultsResponseBody &&) = default ;
    DescribeInvocationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvocationResultsResponseBody() = default ;
    DescribeInvocationResultsResponseBody& operator=(const DescribeInvocationResultsResponseBody &) = default ;
    DescribeInvocationResultsResponseBody& operator=(DescribeInvocationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Invocation : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Invocation& obj) { 
        DARABONBA_PTR_TO_JSON(InvocationResults, invocationResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Invocation& obj) { 
        DARABONBA_PTR_FROM_JSON(InvocationResults, invocationResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Invocation() = default ;
      Invocation(const Invocation &) = default ;
      Invocation(Invocation &&) = default ;
      Invocation(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Invocation() = default ;
      Invocation& operator=(const Invocation &) = default ;
      Invocation& operator=(Invocation &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InvocationResults : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvocationResults& obj) { 
          DARABONBA_PTR_TO_JSON(InvocationResult, invocationResult_);
        };
        friend void from_json(const Darabonba::Json& j, InvocationResults& obj) { 
          DARABONBA_PTR_FROM_JSON(InvocationResult, invocationResult_);
        };
        InvocationResults() = default ;
        InvocationResults(const InvocationResults &) = default ;
        InvocationResults(InvocationResults &&) = default ;
        InvocationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvocationResults() = default ;
        InvocationResults& operator=(const InvocationResults &) = default ;
        InvocationResults& operator=(InvocationResults &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InvocationResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvocationResult& obj) { 
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
            DARABONBA_PTR_TO_JSON(Launcher, launcher_);
            DARABONBA_PTR_TO_JSON(OssOutputDelivery, ossOutputDelivery_);
            DARABONBA_PTR_TO_JSON(OssOutputErrorCode, ossOutputErrorCode_);
            DARABONBA_PTR_TO_JSON(OssOutputErrorInfo, ossOutputErrorInfo_);
            DARABONBA_PTR_TO_JSON(OssOutputStatus, ossOutputStatus_);
            DARABONBA_PTR_TO_JSON(OssOutputUri, ossOutputUri_);
            DARABONBA_PTR_TO_JSON(Output, output_);
            DARABONBA_PTR_TO_JSON(Repeats, repeats_);
            DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
            DARABONBA_PTR_TO_JSON(Tags, tags_);
            DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
            DARABONBA_PTR_TO_JSON(Username, username_);
          };
          friend void from_json(const Darabonba::Json& j, InvocationResult& obj) { 
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
            DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
            DARABONBA_PTR_FROM_JSON(OssOutputDelivery, ossOutputDelivery_);
            DARABONBA_PTR_FROM_JSON(OssOutputErrorCode, ossOutputErrorCode_);
            DARABONBA_PTR_FROM_JSON(OssOutputErrorInfo, ossOutputErrorInfo_);
            DARABONBA_PTR_FROM_JSON(OssOutputStatus, ossOutputStatus_);
            DARABONBA_PTR_FROM_JSON(OssOutputUri, ossOutputUri_);
            DARABONBA_PTR_FROM_JSON(Output, output_);
            DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
            DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
            DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
            DARABONBA_PTR_FROM_JSON(Username, username_);
          };
          InvocationResult() = default ;
          InvocationResult(const InvocationResult &) = default ;
          InvocationResult(InvocationResult &&) = default ;
          InvocationResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvocationResult() = default ;
          InvocationResult& operator=(const InvocationResult &) = default ;
          InvocationResult& operator=(InvocationResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tags& obj) { 
              DARABONBA_PTR_TO_JSON(Tag, tag_);
            };
            friend void from_json(const Darabonba::Json& j, Tags& obj) { 
              DARABONBA_PTR_FROM_JSON(Tag, tag_);
            };
            Tags() = default ;
            Tags(const Tags &) = default ;
            Tags(Tags &&) = default ;
            Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tags() = default ;
            Tags& operator=(const Tags &) = default ;
            Tags& operator=(Tags &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Tag : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Tag& obj) { 
                DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
                DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
              };
              friend void from_json(const Darabonba::Json& j, Tag& obj) { 
                DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
                DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
              };
              Tag() = default ;
              Tag(const Tag &) = default ;
              Tag(Tag &&) = default ;
              Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Tag() = default ;
              Tag& operator=(const Tag &) = default ;
              Tag& operator=(Tag &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
              // tagKey Field Functions 
              bool hasTagKey() const { return this->tagKey_ != nullptr;};
              void deleteTagKey() { this->tagKey_ = nullptr;};
              inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
              inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


              // tagValue Field Functions 
              bool hasTagValue() const { return this->tagValue_ != nullptr;};
              void deleteTagValue() { this->tagValue_ = nullptr;};
              inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
              inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


            protected:
              // The output delivery status of the command execution. Valid values:
              // 
              // *   InProgress: The delivery is in progress.
              // *   Finished: The delivery is complete.
              // *   Failed: The delivery failed.
              shared_ptr<string> tagKey_ {};
              // The username used to run the command on the instance.
              shared_ptr<string> tagValue_ {};
            };

            virtual bool empty() const override { return this->tag_ == nullptr; };
            // tag Field Functions 
            bool hasTag() const { return this->tag_ != nullptr;};
            void deleteTag() { this->tag_ = nullptr;};
            inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
            inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
            inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
            inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


          protected:
            shared_ptr<vector<Tags::Tag>> tag_ {};
          };

          virtual bool empty() const override { return this->commandId_ == nullptr
        && this->containerId_ == nullptr && this->containerName_ == nullptr && this->dropped_ == nullptr && this->errorCode_ == nullptr && this->errorInfo_ == nullptr
        && this->exitCode_ == nullptr && this->finishedTime_ == nullptr && this->instanceId_ == nullptr && this->invocationStatus_ == nullptr && this->invokeId_ == nullptr
        && this->invokeRecordStatus_ == nullptr && this->launcher_ == nullptr && this->ossOutputDelivery_ == nullptr && this->ossOutputErrorCode_ == nullptr && this->ossOutputErrorInfo_ == nullptr
        && this->ossOutputStatus_ == nullptr && this->ossOutputUri_ == nullptr && this->output_ == nullptr && this->repeats_ == nullptr && this->startTime_ == nullptr
        && this->stopTime_ == nullptr && this->tags_ == nullptr && this->terminationMode_ == nullptr && this->username_ == nullptr; };
          // commandId Field Functions 
          bool hasCommandId() const { return this->commandId_ != nullptr;};
          void deleteCommandId() { this->commandId_ = nullptr;};
          inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
          inline InvocationResult& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


          // containerId Field Functions 
          bool hasContainerId() const { return this->containerId_ != nullptr;};
          void deleteContainerId() { this->containerId_ = nullptr;};
          inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
          inline InvocationResult& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


          // containerName Field Functions 
          bool hasContainerName() const { return this->containerName_ != nullptr;};
          void deleteContainerName() { this->containerName_ = nullptr;};
          inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
          inline InvocationResult& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


          // dropped Field Functions 
          bool hasDropped() const { return this->dropped_ != nullptr;};
          void deleteDropped() { this->dropped_ = nullptr;};
          inline int32_t getDropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
          inline InvocationResult& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


          // errorCode Field Functions 
          bool hasErrorCode() const { return this->errorCode_ != nullptr;};
          void deleteErrorCode() { this->errorCode_ = nullptr;};
          inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
          inline InvocationResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


          // errorInfo Field Functions 
          bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
          void deleteErrorInfo() { this->errorInfo_ = nullptr;};
          inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
          inline InvocationResult& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


          // exitCode Field Functions 
          bool hasExitCode() const { return this->exitCode_ != nullptr;};
          void deleteExitCode() { this->exitCode_ = nullptr;};
          inline int64_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
          inline InvocationResult& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


          // finishedTime Field Functions 
          bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
          void deleteFinishedTime() { this->finishedTime_ = nullptr;};
          inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
          inline InvocationResult& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


          // instanceId Field Functions 
          bool hasInstanceId() const { return this->instanceId_ != nullptr;};
          void deleteInstanceId() { this->instanceId_ = nullptr;};
          inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
          inline InvocationResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


          // invocationStatus Field Functions 
          bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
          void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
          inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
          inline InvocationResult& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


          // invokeId Field Functions 
          bool hasInvokeId() const { return this->invokeId_ != nullptr;};
          void deleteInvokeId() { this->invokeId_ = nullptr;};
          inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
          inline InvocationResult& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


          // invokeRecordStatus Field Functions 
          bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
          void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
          inline string getInvokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
          inline InvocationResult& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


          // launcher Field Functions 
          bool hasLauncher() const { return this->launcher_ != nullptr;};
          void deleteLauncher() { this->launcher_ = nullptr;};
          inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
          inline InvocationResult& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


          // ossOutputDelivery Field Functions 
          bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
          void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
          inline string getOssOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
          inline InvocationResult& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


          // ossOutputErrorCode Field Functions 
          bool hasOssOutputErrorCode() const { return this->ossOutputErrorCode_ != nullptr;};
          void deleteOssOutputErrorCode() { this->ossOutputErrorCode_ = nullptr;};
          inline string getOssOutputErrorCode() const { DARABONBA_PTR_GET_DEFAULT(ossOutputErrorCode_, "") };
          inline InvocationResult& setOssOutputErrorCode(string ossOutputErrorCode) { DARABONBA_PTR_SET_VALUE(ossOutputErrorCode_, ossOutputErrorCode) };


          // ossOutputErrorInfo Field Functions 
          bool hasOssOutputErrorInfo() const { return this->ossOutputErrorInfo_ != nullptr;};
          void deleteOssOutputErrorInfo() { this->ossOutputErrorInfo_ = nullptr;};
          inline string getOssOutputErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(ossOutputErrorInfo_, "") };
          inline InvocationResult& setOssOutputErrorInfo(string ossOutputErrorInfo) { DARABONBA_PTR_SET_VALUE(ossOutputErrorInfo_, ossOutputErrorInfo) };


          // ossOutputStatus Field Functions 
          bool hasOssOutputStatus() const { return this->ossOutputStatus_ != nullptr;};
          void deleteOssOutputStatus() { this->ossOutputStatus_ = nullptr;};
          inline string getOssOutputStatus() const { DARABONBA_PTR_GET_DEFAULT(ossOutputStatus_, "") };
          inline InvocationResult& setOssOutputStatus(string ossOutputStatus) { DARABONBA_PTR_SET_VALUE(ossOutputStatus_, ossOutputStatus) };


          // ossOutputUri Field Functions 
          bool hasOssOutputUri() const { return this->ossOutputUri_ != nullptr;};
          void deleteOssOutputUri() { this->ossOutputUri_ = nullptr;};
          inline string getOssOutputUri() const { DARABONBA_PTR_GET_DEFAULT(ossOutputUri_, "") };
          inline InvocationResult& setOssOutputUri(string ossOutputUri) { DARABONBA_PTR_SET_VALUE(ossOutputUri_, ossOutputUri) };


          // output Field Functions 
          bool hasOutput() const { return this->output_ != nullptr;};
          void deleteOutput() { this->output_ = nullptr;};
          inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
          inline InvocationResult& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


          // repeats Field Functions 
          bool hasRepeats() const { return this->repeats_ != nullptr;};
          void deleteRepeats() { this->repeats_ = nullptr;};
          inline int32_t getRepeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
          inline InvocationResult& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


          // startTime Field Functions 
          bool hasStartTime() const { return this->startTime_ != nullptr;};
          void deleteStartTime() { this->startTime_ = nullptr;};
          inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
          inline InvocationResult& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          // stopTime Field Functions 
          bool hasStopTime() const { return this->stopTime_ != nullptr;};
          void deleteStopTime() { this->stopTime_ = nullptr;};
          inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
          inline InvocationResult& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const InvocationResult::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, InvocationResult::Tags) };
          inline InvocationResult::Tags getTags() { DARABONBA_PTR_GET(tags_, InvocationResult::Tags) };
          inline InvocationResult& setTags(const InvocationResult::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline InvocationResult& setTags(InvocationResult::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


          // terminationMode Field Functions 
          bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
          void deleteTerminationMode() { this->terminationMode_ = nullptr;};
          inline string getTerminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
          inline InvocationResult& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


          // username Field Functions 
          bool hasUsername() const { return this->username_ != nullptr;};
          void deleteUsername() { this->username_ = nullptr;};
          inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
          inline InvocationResult& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        protected:
          // The error message returned when the command failed to be sent or run. Valid values:
          // 
          // *   If this parameter is empty, the command was run as expected.
          // *   The security group rules denied access to the aliyun service.
          // *   The specified instance does not exist.
          // *   The specified instance was released during task execution.
          // *   The specified instance was not running during task execution.
          // *   The OS type of the instance does not support the specified command type.
          // *   The specified account does not exist.
          // *   The specified directory does not exist.
          // *   The cron expression is invalid.
          // *   The aliyun service is not running on the instance.
          // *   The aliyun service in the instance does not response.
          // *   The aliyun service in the instance is upgrading during task execution.
          // *   The aliyun service in the instance need to be upgraded to at least version to support the feature. indicates the earliest version that supports the feature. indicates the name of the feature.
          // *   The command delivery has been timeout.
          // *   The command execution has been timeout.
          // *   The command execution got an exception.
          // *   The command execution exit code is not zero.
          // *   The specified instance was released during task execution.
          shared_ptr<string> commandId_ {};
          // Command to execute the Output OSS delivery configuration.
          shared_ptr<string> containerId_ {};
          // The execution status on a single instance. Valid values:
          // 
          // *   Pending: The command is being verified or sent.
          // 
          // *   Invalid: The specified command type or parameter is invalid.
          // 
          // *   Aborted: The command failed to be sent to the instance. To send a command to an instance, make sure that the instance is in the Running state and the command can be sent to the instance within 1 minute.
          // 
          // *   Running: The command is being run on the instance.
          // 
          // *   Success:
          // 
          //     *   One-time task: The execution was complete, and the exit code was 0.
          //     *   Scheduled task: The last execution was complete, the exit code was 0, and the specified period ended.
          // 
          // *   Failed:
          // 
          //     *   One-time task: The execution was complete, but the exit code was not 0.
          //     *   Scheduled task: The last execution was complete, but the exit code was not 0. The specified period was about to end.
          // 
          // *   Error: The execution cannot proceed due to an exception.
          // 
          // *   Timeout: The execution timed out.
          // 
          // *   Cancelled: The execution was canceled before it started.
          // 
          // *   Stopping: The command task is being stopped.
          // 
          // *   Terminated: The execution was terminated before completion.
          // 
          // *   Scheduled:
          // 
          //     *   One-time task: The execution state can never be Scheduled.
          //     *   Scheduled task: The command is waiting to be run.
          shared_ptr<string> containerName_ {};
          // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
          shared_ptr<int32_t> dropped_ {};
          // The time when the command started to be run on the instance.
          shared_ptr<string> errorCode_ {};
          // The ID of the request.
          shared_ptr<string> errorInfo_ {};
          // The key of tag N of the command task. Valid values of N: 1 to 20. The tag key cannot be an empty string.
          // 
          // If a single tag is specified to query resources, up to 1,000 resources that have this tag added can be displayed in the response. If multiple tags are specified to query resources, up to 1,000 resources that have all these tags added can be displayed in the response. To query more than 1,000 resources that have specified tags added, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
          // 
          // The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
          shared_ptr<int64_t> exitCode_ {};
          // The total number of the commands.
          shared_ptr<string> finishedTime_ {};
          // The value of tag N of the command task. Valid values of N: 1 to 20. The tag value can be an empty string.
          // 
          // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
          shared_ptr<string> instanceId_ {};
          // The tag of the command task.
          shared_ptr<string> invocationStatus_ {};
          // The number of times that the command was run on the instance.
          // 
          // *   If the command is set to run only once, the value is 0 or 1.
          // *   If the command is set to run on a schedule, the value is the number of times that the command has been run on the instance.
          shared_ptr<string> invokeId_ {};
          // The page number.
          shared_ptr<string> invokeRecordStatus_ {};
          // The exit code of the command task.
          // 
          // *   For Linux instances, the value is the exit code of the shell command.
          // *   For Windows instances, the value is the exit code of the batch or PowerShell command.
          shared_ptr<string> launcher_ {};
          // The tags of the command task.
          shared_ptr<string> ossOutputDelivery_ {};
          shared_ptr<string> ossOutputErrorCode_ {};
          shared_ptr<string> ossOutputErrorInfo_ {};
          // The execution results.
          shared_ptr<string> ossOutputStatus_ {};
          // A pagination token. It can be used in the next request to retrieve a new page of results.
          shared_ptr<string> ossOutputUri_ {};
          // The instance ID.
          shared_ptr<string> output_ {};
          // The number of entries per page.
          shared_ptr<int32_t> repeats_ {};
          // Details about the execution results.
          shared_ptr<string> startTime_ {};
          // root
          shared_ptr<string> stopTime_ {};
          // The time when the command task was completed. If the command task times out, the end time is equal to the start time of the command task specified by `StartTime` plus the timeout period specified by `Timeout`.
          shared_ptr<InvocationResult::Tags> tags_ {};
          // The execution status of the command. Valid values:
          // 
          // *   Running:
          // 
          //     *   Scheduled task: Before you stop the scheduled execution of the command, the execution state is always Running.
          //     *   One-time task: If the command is being run on instances, the execution state is Running.
          // 
          // *   Finished:
          // 
          //     *   Scheduled task: The execution state can never be Finished.
          //     *   One-time task: The execution was complete on all instances, or the execution was stopped on some instances and was complete on the other instances.
          // 
          // *   Failed:
          // 
          //     *   Scheduled task: The execution state can never be Failed.
          //     *   One-time task: The execution failed on all instances.
          // 
          // *   PartialFailed:
          // 
          //     *   Scheduled task: The execution state can never be PartialFailed.
          //     *   One-time task: The execution failed on some instances.
          // 
          // *   Stopped: The task was stopped.
          // 
          // *   Stopping: The task is being stopped.
          shared_ptr<string> terminationMode_ {};
          // The size of the Output text that was truncated and discarded because the `Output` value exceeded 24 KB in size.
          shared_ptr<string> username_ {};
        };

        virtual bool empty() const override { return this->invocationResult_ == nullptr; };
        // invocationResult Field Functions 
        bool hasInvocationResult() const { return this->invocationResult_ != nullptr;};
        void deleteInvocationResult() { this->invocationResult_ = nullptr;};
        inline const vector<InvocationResults::InvocationResult> & getInvocationResult() const { DARABONBA_PTR_GET_CONST(invocationResult_, vector<InvocationResults::InvocationResult>) };
        inline vector<InvocationResults::InvocationResult> getInvocationResult() { DARABONBA_PTR_GET(invocationResult_, vector<InvocationResults::InvocationResult>) };
        inline InvocationResults& setInvocationResult(const vector<InvocationResults::InvocationResult> & invocationResult) { DARABONBA_PTR_SET_VALUE(invocationResult_, invocationResult) };
        inline InvocationResults& setInvocationResult(vector<InvocationResults::InvocationResult> && invocationResult) { DARABONBA_PTR_SET_RVALUE(invocationResult_, invocationResult) };


      protected:
        shared_ptr<vector<InvocationResults::InvocationResult>> invocationResult_ {};
      };

      virtual bool empty() const override { return this->invocationResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // invocationResults Field Functions 
      bool hasInvocationResults() const { return this->invocationResults_ != nullptr;};
      void deleteInvocationResults() { this->invocationResults_ = nullptr;};
      inline const Invocation::InvocationResults & getInvocationResults() const { DARABONBA_PTR_GET_CONST(invocationResults_, Invocation::InvocationResults) };
      inline Invocation::InvocationResults getInvocationResults() { DARABONBA_PTR_GET(invocationResults_, Invocation::InvocationResults) };
      inline Invocation& setInvocationResults(const Invocation::InvocationResults & invocationResults) { DARABONBA_PTR_SET_VALUE(invocationResults_, invocationResults) };
      inline Invocation& setInvocationResults(Invocation::InvocationResults && invocationResults) { DARABONBA_PTR_SET_RVALUE(invocationResults_, invocationResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Invocation& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Invocation& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Invocation& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Invocation& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The maximum number of entries per page.
      // 
      // Valid values: 1 to 50.
      // 
      // Default value: 10.
      shared_ptr<Invocation::InvocationResults> invocationResults_ {};
      // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
      shared_ptr<string> nextToken_ {};
      // The encoding mode of the `CommandContent` and `Output` values in the response. Valid values:
      // 
      // *   PlainText: returns the original command content and command output.
      // *   Base64: returns the Base64-encoded command content and command output.
      // 
      // Default value: Base64.
      shared_ptr<int64_t> pageNumber_ {};
      // Specifies whether to return the results of historical scheduled executions. Valid values:
      // 
      // *   true: returns the results of historical scheduled executions. If you set this parameter to true, you must set InvokeId to the ID of a task that is run on a schedule (RepeatMode set to Period) or on each system startup (RepeatMode set to EveryReboot).
      // *   false: does not return the results of historical scheduled executions.
      // 
      // Default value: false.
      shared_ptr<int64_t> pageSize_ {};
      // >  This parameter will be removed in the future. We recommend that you use NextToken and MaxResults for a paged query.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->invocation_ == nullptr
        && this->requestId_ == nullptr; };
    // invocation Field Functions 
    bool hasInvocation() const { return this->invocation_ != nullptr;};
    void deleteInvocation() { this->invocation_ = nullptr;};
    inline const DescribeInvocationResultsResponseBody::Invocation & getInvocation() const { DARABONBA_PTR_GET_CONST(invocation_, DescribeInvocationResultsResponseBody::Invocation) };
    inline DescribeInvocationResultsResponseBody::Invocation getInvocation() { DARABONBA_PTR_GET(invocation_, DescribeInvocationResultsResponseBody::Invocation) };
    inline DescribeInvocationResultsResponseBody& setInvocation(const DescribeInvocationResultsResponseBody::Invocation & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
    inline DescribeInvocationResultsResponseBody& setInvocation(DescribeInvocationResultsResponseBody::Invocation && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The execution status of the command task. Valid values:
    // 
    // *   Running:
    // 
    //     *   Scheduled task: Before you stop the scheduled execution of the command, the execution state is always Running.
    //     *   One-time task: If the command is being run on instances, the execution state is Running.
    // 
    // *   Finished:
    // 
    //     *   Scheduled task: The execution state can never be Finished.
    //     *   One-time task: The execution is complete on all instances, or the execution is stopped on some instances and is complete on the other instances.
    // 
    // *   Success:
    // 
    //     *   One-time task: The execution is complete, and the exit code is 0.
    //     *   Scheduled task: The last execution is complete, the exit code is 0, and the specified period ends.
    // 
    // *   Failed:
    // 
    //     *   Scheduled task: The execution state can never be Failed.
    //     *   One-time task: The execution fails on all instances.
    // 
    // *   PartialFailed:
    // 
    //     *   Scheduled task: The execution state can never be PartialFailed.
    //     *   One-time task: The execution fails on some instances.
    // 
    // *   Stopped: The task is stopped.
    // 
    // *   Stopping: The task is being stopped.
    shared_ptr<DescribeInvocationResultsResponseBody::Invocation> invocation_ {};
    // The ID of the command.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
