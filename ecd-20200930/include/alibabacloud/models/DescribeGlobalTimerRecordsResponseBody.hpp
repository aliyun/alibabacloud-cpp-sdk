// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeGlobalTimerRecordsResponseBody() = default ;
    DescribeGlobalTimerRecordsResponseBody(const DescribeGlobalTimerRecordsResponseBody &) = default ;
    DescribeGlobalTimerRecordsResponseBody(DescribeGlobalTimerRecordsResponseBody &&) = default ;
    DescribeGlobalTimerRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerRecordsResponseBody() = default ;
    DescribeGlobalTimerRecordsResponseBody& operator=(const DescribeGlobalTimerRecordsResponseBody &) = default ;
    DescribeGlobalTimerRecordsResponseBody& operator=(DescribeGlobalTimerRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(ActionType, actionType_);
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(Context, context_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_TO_JSON(DisplayResultName, displayResultName_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Retryable, retryable_);
        DARABONBA_PTR_TO_JSON(TimerGroupId, timerGroupId_);
        DARABONBA_PTR_TO_JSON(TimerRecordId, timerRecordId_);
        DARABONBA_PTR_TO_JSON(TimerResult, timerResult_);
        DARABONBA_PTR_TO_JSON(TimerType, timerType_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(Context, context_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
        DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
        DARABONBA_PTR_FROM_JSON(DisplayResultName, displayResultName_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Retryable, retryable_);
        DARABONBA_PTR_FROM_JSON(TimerGroupId, timerGroupId_);
        DARABONBA_PTR_FROM_JSON(TimerRecordId, timerRecordId_);
        DARABONBA_PTR_FROM_JSON(TimerResult, timerResult_);
        DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionType_ == nullptr
        && this->batchId_ == nullptr && this->context_ == nullptr && this->createTime_ == nullptr && this->desktopId_ == nullptr && this->desktopName_ == nullptr
        && this->displayResultName_ == nullptr && this->finishTime_ == nullptr && this->regionId_ == nullptr && this->retryable_ == nullptr && this->timerGroupId_ == nullptr
        && this->timerRecordId_ == nullptr && this->timerResult_ == nullptr && this->timerType_ == nullptr; };
      // actionType Field Functions 
      bool hasActionType() const { return this->actionType_ != nullptr;};
      void deleteActionType() { this->actionType_ = nullptr;};
      inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
      inline Results& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Results& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // context Field Functions 
      bool hasContext() const { return this->context_ != nullptr;};
      void deleteContext() { this->context_ = nullptr;};
      inline string getContext() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
      inline Results& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Results& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // desktopId Field Functions 
      bool hasDesktopId() const { return this->desktopId_ != nullptr;};
      void deleteDesktopId() { this->desktopId_ = nullptr;};
      inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
      inline Results& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


      // desktopName Field Functions 
      bool hasDesktopName() const { return this->desktopName_ != nullptr;};
      void deleteDesktopName() { this->desktopName_ = nullptr;};
      inline string getDesktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
      inline Results& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


      // displayResultName Field Functions 
      bool hasDisplayResultName() const { return this->displayResultName_ != nullptr;};
      void deleteDisplayResultName() { this->displayResultName_ = nullptr;};
      inline string getDisplayResultName() const { DARABONBA_PTR_GET_DEFAULT(displayResultName_, "") };
      inline Results& setDisplayResultName(string displayResultName) { DARABONBA_PTR_SET_VALUE(displayResultName_, displayResultName) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
      inline Results& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Results& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // retryable Field Functions 
      bool hasRetryable() const { return this->retryable_ != nullptr;};
      void deleteRetryable() { this->retryable_ = nullptr;};
      inline bool getRetryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
      inline Results& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


      // timerGroupId Field Functions 
      bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
      void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
      inline string getTimerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
      inline Results& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


      // timerRecordId Field Functions 
      bool hasTimerRecordId() const { return this->timerRecordId_ != nullptr;};
      void deleteTimerRecordId() { this->timerRecordId_ = nullptr;};
      inline string getTimerRecordId() const { DARABONBA_PTR_GET_DEFAULT(timerRecordId_, "") };
      inline Results& setTimerRecordId(string timerRecordId) { DARABONBA_PTR_SET_VALUE(timerRecordId_, timerRecordId) };


      // timerResult Field Functions 
      bool hasTimerResult() const { return this->timerResult_ != nullptr;};
      void deleteTimerResult() { this->timerResult_ = nullptr;};
      inline string getTimerResult() const { DARABONBA_PTR_GET_DEFAULT(timerResult_, "") };
      inline Results& setTimerResult(string timerResult) { DARABONBA_PTR_SET_VALUE(timerResult_, timerResult) };


      // timerType Field Functions 
      bool hasTimerType() const { return this->timerType_ != nullptr;};
      void deleteTimerType() { this->timerType_ = nullptr;};
      inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
      inline Results& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


    protected:
      shared_ptr<string> actionType_ {};
      // The ID of the batch in which the scheduled task is executed.
      shared_ptr<string> batchId_ {};
      shared_ptr<string> context_ {};
      // The time when the execution record was created.
      shared_ptr<string> createTime_ {};
      // The cloud computer ID.
      shared_ptr<string> desktopId_ {};
      // The cloud computer name.
      shared_ptr<string> desktopName_ {};
      shared_ptr<string> displayResultName_ {};
      // The time when the scheduled task ended.
      shared_ptr<string> finishTime_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      shared_ptr<bool> retryable_ {};
      // The ID of the scheduled task group.
      shared_ptr<string> timerGroupId_ {};
      shared_ptr<string> timerRecordId_ {};
      // The execution result of the scheduled task.
      shared_ptr<string> timerResult_ {};
      // The type of the scheduled task.
      shared_ptr<string> timerType_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGlobalTimerRecordsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalTimerRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalTimerRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DescribeGlobalTimerRecordsResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DescribeGlobalTimerRecordsResponseBody::Results>) };
    inline vector<DescribeGlobalTimerRecordsResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DescribeGlobalTimerRecordsResponseBody::Results>) };
    inline DescribeGlobalTimerRecordsResponseBody& setResults(const vector<DescribeGlobalTimerRecordsResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeGlobalTimerRecordsResponseBody& setResults(vector<DescribeGlobalTimerRecordsResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The total number of entries returned.
    shared_ptr<int32_t> count_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The response parameters.
    shared_ptr<vector<DescribeGlobalTimerRecordsResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
