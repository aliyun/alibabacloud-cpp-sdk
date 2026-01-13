// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINVOCATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINVOCATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInvocationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InvocationResults, invocationResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInvocationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InvocationResults, invocationResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRCInvocationResultsResponseBody() = default ;
    DescribeRCInvocationResultsResponseBody(const DescribeRCInvocationResultsResponseBody &) = default ;
    DescribeRCInvocationResultsResponseBody(DescribeRCInvocationResultsResponseBody &&) = default ;
    DescribeRCInvocationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInvocationResultsResponseBody() = default ;
    DescribeRCInvocationResultsResponseBody& operator=(const DescribeRCInvocationResultsResponseBody &) = default ;
    DescribeRCInvocationResultsResponseBody& operator=(DescribeRCInvocationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InvocationResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InvocationResults& obj) { 
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
      friend void from_json(const Darabonba::Json& j, InvocationResults& obj) { 
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
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
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->commandId_ == nullptr
        && this->containerId_ == nullptr && this->containerName_ == nullptr && this->dropped_ == nullptr && this->errorCode_ == nullptr && this->errorInfo_ == nullptr
        && this->exitCode_ == nullptr && this->finishedTime_ == nullptr && this->instanceId_ == nullptr && this->invocationStatus_ == nullptr && this->invokeId_ == nullptr
        && this->invokeRecordStatus_ == nullptr && this->output_ == nullptr && this->repeats_ == nullptr && this->startTime_ == nullptr && this->stopTime_ == nullptr
        && this->tags_ == nullptr && this->username_ == nullptr; };
      // commandId Field Functions 
      bool hasCommandId() const { return this->commandId_ != nullptr;};
      void deleteCommandId() { this->commandId_ = nullptr;};
      inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
      inline InvocationResults& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


      // containerId Field Functions 
      bool hasContainerId() const { return this->containerId_ != nullptr;};
      void deleteContainerId() { this->containerId_ = nullptr;};
      inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
      inline InvocationResults& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


      // containerName Field Functions 
      bool hasContainerName() const { return this->containerName_ != nullptr;};
      void deleteContainerName() { this->containerName_ = nullptr;};
      inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
      inline InvocationResults& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


      // dropped Field Functions 
      bool hasDropped() const { return this->dropped_ != nullptr;};
      void deleteDropped() { this->dropped_ = nullptr;};
      inline int32_t getDropped() const { DARABONBA_PTR_GET_DEFAULT(dropped_, 0) };
      inline InvocationResults& setDropped(int32_t dropped) { DARABONBA_PTR_SET_VALUE(dropped_, dropped) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline InvocationResults& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorInfo Field Functions 
      bool hasErrorInfo() const { return this->errorInfo_ != nullptr;};
      void deleteErrorInfo() { this->errorInfo_ = nullptr;};
      inline string getErrorInfo() const { DARABONBA_PTR_GET_DEFAULT(errorInfo_, "") };
      inline InvocationResults& setErrorInfo(string errorInfo) { DARABONBA_PTR_SET_VALUE(errorInfo_, errorInfo) };


      // exitCode Field Functions 
      bool hasExitCode() const { return this->exitCode_ != nullptr;};
      void deleteExitCode() { this->exitCode_ = nullptr;};
      inline int32_t getExitCode() const { DARABONBA_PTR_GET_DEFAULT(exitCode_, 0) };
      inline InvocationResults& setExitCode(int32_t exitCode) { DARABONBA_PTR_SET_VALUE(exitCode_, exitCode) };


      // finishedTime Field Functions 
      bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
      void deleteFinishedTime() { this->finishedTime_ = nullptr;};
      inline string getFinishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, "") };
      inline InvocationResults& setFinishedTime(string finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InvocationResults& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // invocationStatus Field Functions 
      bool hasInvocationStatus() const { return this->invocationStatus_ != nullptr;};
      void deleteInvocationStatus() { this->invocationStatus_ = nullptr;};
      inline string getInvocationStatus() const { DARABONBA_PTR_GET_DEFAULT(invocationStatus_, "") };
      inline InvocationResults& setInvocationStatus(string invocationStatus) { DARABONBA_PTR_SET_VALUE(invocationStatus_, invocationStatus) };


      // invokeId Field Functions 
      bool hasInvokeId() const { return this->invokeId_ != nullptr;};
      void deleteInvokeId() { this->invokeId_ = nullptr;};
      inline string getInvokeId() const { DARABONBA_PTR_GET_DEFAULT(invokeId_, "") };
      inline InvocationResults& setInvokeId(string invokeId) { DARABONBA_PTR_SET_VALUE(invokeId_, invokeId) };


      // invokeRecordStatus Field Functions 
      bool hasInvokeRecordStatus() const { return this->invokeRecordStatus_ != nullptr;};
      void deleteInvokeRecordStatus() { this->invokeRecordStatus_ = nullptr;};
      inline string getInvokeRecordStatus() const { DARABONBA_PTR_GET_DEFAULT(invokeRecordStatus_, "") };
      inline InvocationResults& setInvokeRecordStatus(string invokeRecordStatus) { DARABONBA_PTR_SET_VALUE(invokeRecordStatus_, invokeRecordStatus) };


      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
      inline InvocationResults& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


      // repeats Field Functions 
      bool hasRepeats() const { return this->repeats_ != nullptr;};
      void deleteRepeats() { this->repeats_ = nullptr;};
      inline string getRepeats() const { DARABONBA_PTR_GET_DEFAULT(repeats_, "") };
      inline InvocationResults& setRepeats(string repeats) { DARABONBA_PTR_SET_VALUE(repeats_, repeats) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline InvocationResults& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // stopTime Field Functions 
      bool hasStopTime() const { return this->stopTime_ != nullptr;};
      void deleteStopTime() { this->stopTime_ = nullptr;};
      inline string getStopTime() const { DARABONBA_PTR_GET_DEFAULT(stopTime_, "") };
      inline InvocationResults& setStopTime(string stopTime) { DARABONBA_PTR_SET_VALUE(stopTime_, stopTime) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<InvocationResults::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<InvocationResults::Tags>) };
      inline vector<InvocationResults::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<InvocationResults::Tags>) };
      inline InvocationResults& setTags(const vector<InvocationResults::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline InvocationResults& setTags(vector<InvocationResults::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline InvocationResults& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> commandId_ {};
      shared_ptr<string> containerId_ {};
      shared_ptr<string> containerName_ {};
      shared_ptr<int32_t> dropped_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorInfo_ {};
      shared_ptr<int32_t> exitCode_ {};
      shared_ptr<string> finishedTime_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> invocationStatus_ {};
      shared_ptr<string> invokeId_ {};
      shared_ptr<string> invokeRecordStatus_ {};
      shared_ptr<string> output_ {};
      shared_ptr<string> repeats_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<string> stopTime_ {};
      shared_ptr<vector<InvocationResults::Tags>> tags_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->invocationResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // invocationResults Field Functions 
    bool hasInvocationResults() const { return this->invocationResults_ != nullptr;};
    void deleteInvocationResults() { this->invocationResults_ = nullptr;};
    inline const vector<DescribeRCInvocationResultsResponseBody::InvocationResults> & getInvocationResults() const { DARABONBA_PTR_GET_CONST(invocationResults_, vector<DescribeRCInvocationResultsResponseBody::InvocationResults>) };
    inline vector<DescribeRCInvocationResultsResponseBody::InvocationResults> getInvocationResults() { DARABONBA_PTR_GET(invocationResults_, vector<DescribeRCInvocationResultsResponseBody::InvocationResults>) };
    inline DescribeRCInvocationResultsResponseBody& setInvocationResults(const vector<DescribeRCInvocationResultsResponseBody::InvocationResults> & invocationResults) { DARABONBA_PTR_SET_VALUE(invocationResults_, invocationResults) };
    inline DescribeRCInvocationResultsResponseBody& setInvocationResults(vector<DescribeRCInvocationResultsResponseBody::InvocationResults> && invocationResults) { DARABONBA_PTR_SET_RVALUE(invocationResults_, invocationResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRCInvocationResultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeRCInvocationResultsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeRCInvocationResultsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInvocationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRCInvocationResultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeRCInvocationResultsResponseBody::InvocationResults>> invocationResults_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> pageNumber_ {};
    shared_ptr<string> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
