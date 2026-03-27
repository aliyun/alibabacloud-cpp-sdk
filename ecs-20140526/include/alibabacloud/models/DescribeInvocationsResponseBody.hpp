// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVOCATIONSRESPONSEBODY_HPP_
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
    class Invocations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Invocations& obj) { 
        DARABONBA_PTR_TO_JSON(Invocation, invocation_);
      };
      friend void from_json(const Darabonba::Json& j, Invocations& obj) { 
        DARABONBA_PTR_FROM_JSON(Invocation, invocation_);
      };
      Invocations() = default ;
      Invocations(const Invocations &) = default ;
      Invocations(Invocations &&) = default ;
      Invocations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Invocations() = default ;
      Invocations& operator=(const Invocations &) = default ;
      Invocations& operator=(Invocations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Invocation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Invocation& obj) { 
          DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
          DARABONBA_PTR_TO_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_TO_JSON(CommandId, commandId_);
          DARABONBA_PTR_TO_JSON(CommandName, commandName_);
          DARABONBA_PTR_TO_JSON(CommandType, commandType_);
          DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
          DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(Frequency, frequency_);
          DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_TO_JSON(InvokeId, invokeId_);
          DARABONBA_PTR_TO_JSON(InvokeInstances, invokeInstances_);
          DARABONBA_PTR_TO_JSON(InvokeStatus, invokeStatus_);
          DARABONBA_PTR_TO_JSON(Launcher, launcher_);
          DARABONBA_PTR_TO_JSON(OssOutputDelivery, ossOutputDelivery_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
          DARABONBA_PTR_TO_JSON(Timed, timed_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          DARABONBA_PTR_TO_JSON(Username, username_);
          DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
        };
        friend void from_json(const Darabonba::Json& j, Invocation& obj) { 
          DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
          DARABONBA_PTR_FROM_JSON(CommandDescription, commandDescription_);
          DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
          DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
          DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
          DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
          DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
          DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
          DARABONBA_PTR_FROM_JSON(InvokeId, invokeId_);
          DARABONBA_PTR_FROM_JSON(InvokeInstances, invokeInstances_);
          DARABONBA_PTR_FROM_JSON(InvokeStatus, invokeStatus_);
          DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
          DARABONBA_PTR_FROM_JSON(OssOutputDelivery, ossOutputDelivery_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
          DARABONBA_PTR_FROM_JSON(Timed, timed_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
          DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
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
            shared_ptr<string> tagKey_ {};
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

        class InvokeInstances : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvokeInstances& obj) { 
            DARABONBA_PTR_TO_JSON(InvokeInstance, invokeInstance_);
          };
          friend void from_json(const Darabonba::Json& j, InvokeInstances& obj) { 
            DARABONBA_PTR_FROM_JSON(InvokeInstance, invokeInstance_);
          };
          InvokeInstances() = default ;
          InvokeInstances(const InvokeInstances &) = default ;
          InvokeInstances(InvokeInstances &&) = default ;
          InvokeInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvokeInstances() = default ;
          InvokeInstances& operator=(const InvokeInstances &) = default ;
          InvokeInstances& operator=(InvokeInstances &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InvokeInstance : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InvokeInstance& obj) { 
              DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_TO_JSON(Dropped, dropped_);
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_TO_JSON(ExitCode, exitCode_);
              DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(InstanceInvokeStatus, instanceInvokeStatus_);
              DARABONBA_PTR_TO_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_TO_JSON(OssOutputErrorCode, ossOutputErrorCode_);
              DARABONBA_PTR_TO_JSON(OssOutputErrorInfo, ossOutputErrorInfo_);
              DARABONBA_PTR_TO_JSON(OssOutputStatus, ossOutputStatus_);
              DARABONBA_PTR_TO_JSON(OssOutputUri, ossOutputUri_);
              DARABONBA_PTR_TO_JSON(Output, output_);
              DARABONBA_PTR_TO_JSON(Repeats, repeats_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
              DARABONBA_PTR_TO_JSON(StopTime, stopTime_);
              DARABONBA_PTR_TO_JSON(Timed, timed_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            };
            friend void from_json(const Darabonba::Json& j, InvokeInstance& obj) { 
              DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
              DARABONBA_PTR_FROM_JSON(Dropped, dropped_);
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(ErrorInfo, errorInfo_);
              DARABONBA_PTR_FROM_JSON(ExitCode, exitCode_);
              DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(InstanceInvokeStatus, instanceInvokeStatus_);
              DARABONBA_PTR_FROM_JSON(InvocationStatus, invocationStatus_);
              DARABONBA_PTR_FROM_JSON(OssOutputErrorCode, ossOutputErrorCode_);
              DARABONBA_PTR_FROM_JSON(OssOutputErrorInfo, ossOutputErrorInfo_);
              DARABONBA_PTR_FROM_JSON(OssOutputStatus, ossOutputStatus_);
              DARABONBA_PTR_FROM_JSON(OssOutputUri, ossOutputUri_);
              DARABONBA_PTR_FROM_JSON(Output, output_);
              DARABONBA_PTR_FROM_JSON(Repeats, repeats_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
              DARABONBA_PTR_FROM_JSON(StopTime, stopTime_);
              DARABONBA_PTR_FROM_JSON(Timed, timed_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            };
            InvokeInstance() = default ;
            InvokeInstance(const InvokeInstance &) = default ;
            InvokeInstance(InvokeInstance &&) = default ;
            InvokeInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InvokeInstance() = default ;
            InvokeInstance& operator=(const InvokeInstance &) = default ;
            InvokeInstance& operator=(InvokeInstance &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->dropped_ == nullptr && this->errorCode_ == nullptr && this->errorInfo_ == nullptr && this->exitCode_ == nullptr && this->finishTime_ == nullptr
        && this->instanceId_ == nullptr && this->instanceInvokeStatus_ == nullptr && this->invocationStatus_ == nullptr && this->ossOutputErrorCode_ == nullptr && this->ossOutputErrorInfo_ == nullptr
        && this->ossOutputStatus_ == nullptr && this->ossOutputUri_ == nullptr && this->output_ == nullptr && this->repeats_ == nullptr && this->startTime_ == nullptr
        && this->stopTime_ == nullptr && this->timed_ == nullptr && this->updateTime_ == nullptr; };
            // creationTime Field Functions 
            bool hasCreationTime() const { return this->creationTime_ != nullptr;};
            void deleteCreationTime() { this->creationTime_ = nullptr;};
            inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
            inline InvokeInstance& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


            // dropped Field Functions 
            bool hasDropped() const { return this->dropped_ != nullptr;};
            void deleteDropped() { this->dropped_ = nullptr;};
            inline int32_t getDropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
            inline InvokeInstance& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline InvokeInstance& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // errorInfo Field Functions 
            bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
            void deleteErrorInfo() { this->errorInfo_ = nullptr;};
            inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
            inline InvokeInstance& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


            // exitCode Field Functions 
            bool hasExitCode() const { return this->exitCode_ != nullptr;};
            void deleteExitCode() { this->exitCode_ = nullptr;};
            inline int64_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0L) };
            inline InvokeInstance& setExitCode(int64_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


            // finishTime Field Functions 
            bool hasFinishTime() const { return this->finishTime_ != nullptr;};
            void deleteFinishTime() { this->finishTime_ = nullptr;};
            inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
            inline InvokeInstance& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline InvokeInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // instanceInvokeStatus Field Functions 
            bool hasInstanceInvokeStatus() const { return this->instanceInvokeStatus_ != nullptr;};
            void deleteInstanceInvokeStatus() { this->instanceInvokeStatus_ = nullptr;};
            inline string getInstanceInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceInvokeStatus_, "") };
            inline InvokeInstance& setInstanceInvokeStatus(string instanceInvokeStatus) { DARABONBA_PTR_SET_VALUE(instanceInvokeStatus_, instanceInvokeStatus) };


            // invocationStatus Field Functions 
            bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
            void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
            inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
            inline InvokeInstance& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


            // ossOutputErrorCode Field Functions 
            bool hasOssOutputErrorCode() const { return this->ossOutputErrorCode_ != nullptr;};
            void deleteOssOutputErrorCode() { this->ossOutputErrorCode_ = nullptr;};
            inline string getOssOutputErrorCode() const { DARABONBA_PTR_GET_DEFAULT(ossOutputErrorCode_, "") };
            inline InvokeInstance& setOssOutputErrorCode(string ossOutputErrorCode) { DARABONBA_PTR_SET_VALUE(ossOutputErrorCode_, ossOutputErrorCode) };


            // ossOutputErrorInfo Field Functions 
            bool hasOssOutputErrorInfo() const { return this->ossOutputErrorInfo_ != nullptr;};
            void deleteOssOutputErrorInfo() { this->ossOutputErrorInfo_ = nullptr;};
            inline string getOssOutputErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(ossOutputErrorInfo_, "") };
            inline InvokeInstance& setOssOutputErrorInfo(string ossOutputErrorInfo) { DARABONBA_PTR_SET_VALUE(ossOutputErrorInfo_, ossOutputErrorInfo) };


            // ossOutputStatus Field Functions 
            bool hasOssOutputStatus() const { return this->ossOutputStatus_ != nullptr;};
            void deleteOssOutputStatus() { this->ossOutputStatus_ = nullptr;};
            inline string getOssOutputStatus() const { DARABONBA_PTR_GET_DEFAULT(ossOutputStatus_, "") };
            inline InvokeInstance& setOssOutputStatus(string ossOutputStatus) { DARABONBA_PTR_SET_VALUE(ossOutputStatus_, ossOutputStatus) };


            // ossOutputUri Field Functions 
            bool hasOssOutputUri() const { return this->ossOutputUri_ != nullptr;};
            void deleteOssOutputUri() { this->ossOutputUri_ = nullptr;};
            inline string getOssOutputUri() const { DARABONBA_PTR_GET_DEFAULT(ossOutputUri_, "") };
            inline InvokeInstance& setOssOutputUri(string ossOutputUri) { DARABONBA_PTR_SET_VALUE(ossOutputUri_, ossOutputUri) };


            // output Field Functions 
            bool hasOutput() const { return this->output_ != nullptr;};
            void deleteOutput() { this->output_ = nullptr;};
            inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
            inline InvokeInstance& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


            // repeats Field Functions 
            bool hasRepeats() const { return this->repeats_ != nullptr;};
            void deleteRepeats() { this->repeats_ = nullptr;};
            inline int32_t getRepeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, 0) };
            inline InvokeInstance& setRepeats(int32_t repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline InvokeInstance& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


            // stopTime Field Functions 
            bool hasStopTime() const { return this->stopTime_ != nullptr;};
            void deleteStopTime() { this->stopTime_ = nullptr;};
            inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
            inline InvokeInstance& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


            // timed Field Functions 
            bool hasTimed() const { return this->timed_ != nullptr;};
            void deleteTimed() { this->timed_ = nullptr;};
            inline bool getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
            inline InvokeInstance& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline InvokeInstance& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          protected:
            shared_ptr<string> creationTime_ {};
            shared_ptr<int32_t> dropped_ {};
            shared_ptr<string> errorCode_ {};
            shared_ptr<string> errorInfo_ {};
            shared_ptr<int64_t> exitCode_ {};
            shared_ptr<string> finishTime_ {};
            shared_ptr<string> instanceId_ {};
            shared_ptr<string> instanceInvokeStatus_ {};
            shared_ptr<string> invocationStatus_ {};
            shared_ptr<string> ossOutputErrorCode_ {};
            shared_ptr<string> ossOutputErrorInfo_ {};
            shared_ptr<string> ossOutputStatus_ {};
            shared_ptr<string> ossOutputUri_ {};
            shared_ptr<string> output_ {};
            shared_ptr<int32_t> repeats_ {};
            shared_ptr<string> startTime_ {};
            shared_ptr<string> stopTime_ {};
            shared_ptr<bool> timed_ {};
            shared_ptr<string> updateTime_ {};
          };

          virtual bool empty() const override { return this->invokeInstance_ == nullptr; };
          // invokeInstance Field Functions 
          bool hasInvokeInstance() const { return this->invokeInstance_ != nullptr;};
          void deleteInvokeInstance() { this->invokeInstance_ = nullptr;};
          inline const vector<InvokeInstances::InvokeInstance> & getInvokeInstance() const { DARABONBA_PTR_GET_CONST(invokeInstance_, vector<InvokeInstances::InvokeInstance>) };
          inline vector<InvokeInstances::InvokeInstance> getInvokeInstance() { DARABONBA_PTR_GET(invokeInstance_, vector<InvokeInstances::InvokeInstance>) };
          inline InvokeInstances& setInvokeInstance(const vector<InvokeInstances::InvokeInstance> & invokeInstance) { DARABONBA_PTR_SET_VALUE(invokeInstance_, invokeInstance) };
          inline InvokeInstances& setInvokeInstance(vector<InvokeInstances::InvokeInstance> && invokeInstance) { DARABONBA_PTR_SET_RVALUE(invokeInstance_, invokeInstance) };


        protected:
          shared_ptr<vector<InvokeInstances::InvokeInstance>> invokeInstance_ {};
        };

        virtual bool empty() const override { return this->commandContent_ == nullptr
        && this->commandDescription_ == nullptr && this->commandId_ == nullptr && this->commandName_ == nullptr && this->commandType_ == nullptr && this->containerId_ == nullptr
        && this->containerName_ == nullptr && this->creationTime_ == nullptr && this->frequency_ == nullptr && this->invocationStatus_ == nullptr && this->invokeId_ == nullptr
        && this->invokeInstances_ == nullptr && this->invokeStatus_ == nullptr && this->launcher_ == nullptr && this->ossOutputDelivery_ == nullptr && this->parameters_ == nullptr
        && this->repeatMode_ == nullptr && this->tags_ == nullptr && this->terminationMode_ == nullptr && this->timed_ == nullptr && this->timeout_ == nullptr
        && this->username_ == nullptr && this->workingDir_ == nullptr; };
        // commandContent Field Functions 
        bool hasCommandContent() const { return this->commandContent_ != nullptr;};
        void deleteCommandContent() { this->commandContent_ = nullptr;};
        inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
        inline Invocation& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


        // commandDescription Field Functions 
        bool hasCommandDescription() const { return this->commandDescription_ != nullptr;};
        void deleteCommandDescription() { this->commandDescription_ = nullptr;};
        inline string getCommandDescription() const { DARABONBA_PTR_GET_DEFAULT(commandDescription_, "") };
        inline Invocation& setCommandDescription(string commandDescription) { DARABONBA_PTR_SET_VALUE(commandDescription_, commandDescription) };


        // commandId Field Functions 
        bool hasCommandId() const { return this->commandId_ != nullptr;};
        void deleteCommandId() { this->commandId_ = nullptr;};
        inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
        inline Invocation& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


        // commandName Field Functions 
        bool hasCommandName() const { return this->commandName_ != nullptr;};
        void deleteCommandName() { this->commandName_ = nullptr;};
        inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
        inline Invocation& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


        // commandType Field Functions 
        bool hasCommandType() const { return this->commandType_ != nullptr;};
        void deleteCommandType() { this->commandType_ = nullptr;};
        inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
        inline Invocation& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


        // containerId Field Functions 
        bool hasContainerId() const { return this->containerId_ != nullptr;};
        void deleteContainerId() { this->containerId_ = nullptr;};
        inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
        inline Invocation& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


        // containerName Field Functions 
        bool hasContainerName() const { return this->containerName_ != nullptr;};
        void deleteContainerName() { this->containerName_ = nullptr;};
        inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
        inline Invocation& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline Invocation& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // frequency Field Functions 
        bool hasFrequency() const { return this->frequency_ != nullptr;};
        void deleteFrequency() { this->frequency_ = nullptr;};
        inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
        inline Invocation& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


        // invocationStatus Field Functions 
        bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
        void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
        inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
        inline Invocation& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


        // invokeId Field Functions 
        bool hasInvokeId() const { return this->invokeId_ != nullptr;};
        void deleteInvokeId() { this->invokeId_ = nullptr;};
        inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
        inline Invocation& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


        // invokeInstances Field Functions 
        bool hasInvokeInstances() const { return this->invokeInstances_ != nullptr;};
        void deleteInvokeInstances() { this->invokeInstances_ = nullptr;};
        inline const Invocation::InvokeInstances & getInvokeInstances() const { DARABONBA_PTR_GET_CONST(invokeInstances_, Invocation::InvokeInstances) };
        inline Invocation::InvokeInstances getInvokeInstances() { DARABONBA_PTR_GET(invokeInstances_, Invocation::InvokeInstances) };
        inline Invocation& setInvokeInstances(const Invocation::InvokeInstances & invokeInstances) { DARABONBA_PTR_SET_VALUE(invokeInstances_, invokeInstances) };
        inline Invocation& setInvokeInstances(Invocation::InvokeInstances && invokeInstances) { DARABONBA_PTR_SET_RVALUE(invokeInstances_, invokeInstances) };


        // invokeStatus Field Functions 
        bool hasInvokeStatus() const { return this->invokeStatus_ != nullptr;};
        void deleteInvokeStatus() { this->invokeStatus_ = nullptr;};
        inline string getInvokeStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeStatus_, "") };
        inline Invocation& setInvokeStatus(string invokeStatus) { DARABONBA_PTR_SET_VALUE(invokeStatus_, invokeStatus) };


        // launcher Field Functions 
        bool hasLauncher() const { return this->launcher_ != nullptr;};
        void deleteLauncher() { this->launcher_ = nullptr;};
        inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
        inline Invocation& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


        // ossOutputDelivery Field Functions 
        bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
        void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
        inline string getOssOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
        inline Invocation& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
        inline Invocation& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


        // repeatMode Field Functions 
        bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
        void deleteRepeatMode() { this->repeatMode_ = nullptr;};
        inline string getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
        inline Invocation& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Invocation::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Invocation::Tags) };
        inline Invocation::Tags getTags() { DARABONBA_PTR_GET(tags_, Invocation::Tags) };
        inline Invocation& setTags(const Invocation::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Invocation& setTags(Invocation::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // terminationMode Field Functions 
        bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
        void deleteTerminationMode() { this->terminationMode_ = nullptr;};
        inline string getTerminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
        inline Invocation& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


        // timed Field Functions 
        bool hasTimed() const { return this->timed_ != nullptr;};
        void deleteTimed() { this->timed_ = nullptr;};
        inline bool getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
        inline Invocation& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
        inline Invocation& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Invocation& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        // workingDir Field Functions 
        bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
        void deleteWorkingDir() { this->workingDir_ = nullptr;};
        inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
        inline Invocation& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


      protected:
        shared_ptr<string> commandContent_ {};
        shared_ptr<string> commandDescription_ {};
        shared_ptr<string> commandId_ {};
        shared_ptr<string> commandName_ {};
        shared_ptr<string> commandType_ {};
        shared_ptr<string> containerId_ {};
        shared_ptr<string> containerName_ {};
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> frequency_ {};
        shared_ptr<string> invocationStatus_ {};
        shared_ptr<string> invokeId_ {};
        shared_ptr<Invocation::InvokeInstances> invokeInstances_ {};
        shared_ptr<string> invokeStatus_ {};
        shared_ptr<string> launcher_ {};
        shared_ptr<string> ossOutputDelivery_ {};
        shared_ptr<string> parameters_ {};
        shared_ptr<string> repeatMode_ {};
        shared_ptr<Invocation::Tags> tags_ {};
        shared_ptr<string> terminationMode_ {};
        shared_ptr<bool> timed_ {};
        shared_ptr<int64_t> timeout_ {};
        shared_ptr<string> username_ {};
        shared_ptr<string> workingDir_ {};
      };

      virtual bool empty() const override { return this->invocation_ == nullptr; };
      // invocation Field Functions 
      bool hasInvocation() const { return this->invocation_ != nullptr;};
      void deleteInvocation() { this->invocation_ = nullptr;};
      inline const vector<Invocations::Invocation> & getInvocation() const { DARABONBA_PTR_GET_CONST(invocation_, vector<Invocations::Invocation>) };
      inline vector<Invocations::Invocation> getInvocation() { DARABONBA_PTR_GET(invocation_, vector<Invocations::Invocation>) };
      inline Invocations& setInvocation(const vector<Invocations::Invocation> & invocation) { DARABONBA_PTR_SET_VALUE(invocation_, invocation) };
      inline Invocations& setInvocation(vector<Invocations::Invocation> && invocation) { DARABONBA_PTR_SET_RVALUE(invocation_, invocation) };


    protected:
      shared_ptr<vector<Invocations::Invocation>> invocation_ {};
    };

    virtual bool empty() const override { return this->invocations_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // invocations Field Functions 
    bool hasInvocations() const { return this->invocations_ != nullptr;};
    void deleteInvocations() { this->invocations_ = nullptr;};
    inline const DescribeInvocationsResponseBody::Invocations & getInvocations() const { DARABONBA_PTR_GET_CONST(invocations_, DescribeInvocationsResponseBody::Invocations) };
    inline DescribeInvocationsResponseBody::Invocations getInvocations() { DARABONBA_PTR_GET(invocations_, DescribeInvocationsResponseBody::Invocations) };
    inline DescribeInvocationsResponseBody& setInvocations(const DescribeInvocationsResponseBody::Invocations & invocations) { DARABONBA_PTR_SET_VALUE(invocations_, invocations) };
    inline DescribeInvocationsResponseBody& setInvocations(DescribeInvocationsResponseBody::Invocations && invocations) { DARABONBA_PTR_SET_RVALUE(invocations_, invocations) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInvocationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInvocationsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInvocationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvocationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInvocationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<DescribeInvocationsResponseBody::Invocations> invocations_ {};
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
    shared_ptr<string> nextToken_ {};
    // The command type. Valid values:
    // 
    // *   RunBatScript: batch command, applicable to Windows instances.
    // *   RunPowerShellScript: PowerShell command, applicable to Windows instances.
    // *   RunShellScript: shell command, applicable to Linux instances.
    shared_ptr<int64_t> pageNumber_ {};
    // The command ID. You can call the [DescribeCommands](https://help.aliyun.com/document_detail/64843.html) operation to query all available command IDs.
    shared_ptr<int64_t> pageSize_ {};
    // The command name. If you specify both this parameter and `InstanceId`, this parameter does not take effect.
    shared_ptr<string> requestId_ {};
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
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
