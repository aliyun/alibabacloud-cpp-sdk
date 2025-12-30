// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESRESPONSEBODY_HPP_
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
  class DescribeGlobalTimerBatchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerBatchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerBatchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    DescribeGlobalTimerBatchesResponseBody() = default ;
    DescribeGlobalTimerBatchesResponseBody(const DescribeGlobalTimerBatchesResponseBody &) = default ;
    DescribeGlobalTimerBatchesResponseBody(DescribeGlobalTimerBatchesResponseBody &&) = default ;
    DescribeGlobalTimerBatchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerBatchesResponseBody() = default ;
    DescribeGlobalTimerBatchesResponseBody& operator=(const DescribeGlobalTimerBatchesResponseBody &) = default ;
    DescribeGlobalTimerBatchesResponseBody& operator=(DescribeGlobalTimerBatchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(BatchId, batchId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_TO_JSON(SkippedCount, skippedCount_);
        DARABONBA_PTR_TO_JSON(SucceedCount, succeedCount_);
        DARABONBA_PTR_TO_JSON(TimerType, timerType_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
        DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
        DARABONBA_PTR_FROM_JSON(SkippedCount, skippedCount_);
        DARABONBA_PTR_FROM_JSON(SucceedCount, succeedCount_);
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
      virtual bool empty() const override { return this->batchId_ == nullptr
        && this->createTime_ == nullptr && this->failedCount_ == nullptr && this->runningCount_ == nullptr && this->skippedCount_ == nullptr && this->succeedCount_ == nullptr
        && this->timerType_ == nullptr; };
      // batchId Field Functions 
      bool hasBatchId() const { return this->batchId_ != nullptr;};
      void deleteBatchId() { this->batchId_ = nullptr;};
      inline string getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
      inline Results& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Results& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // failedCount Field Functions 
      bool hasFailedCount() const { return this->failedCount_ != nullptr;};
      void deleteFailedCount() { this->failedCount_ = nullptr;};
      inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
      inline Results& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


      // runningCount Field Functions 
      bool hasRunningCount() const { return this->runningCount_ != nullptr;};
      void deleteRunningCount() { this->runningCount_ = nullptr;};
      inline int32_t getRunningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
      inline Results& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


      // skippedCount Field Functions 
      bool hasSkippedCount() const { return this->skippedCount_ != nullptr;};
      void deleteSkippedCount() { this->skippedCount_ = nullptr;};
      inline int32_t getSkippedCount() const { DARABONBA_PTR_GET_DEFAULT(skippedCount_, 0) };
      inline Results& setSkippedCount(int32_t skippedCount) { DARABONBA_PTR_SET_VALUE(skippedCount_, skippedCount) };


      // succeedCount Field Functions 
      bool hasSucceedCount() const { return this->succeedCount_ != nullptr;};
      void deleteSucceedCount() { this->succeedCount_ = nullptr;};
      inline int32_t getSucceedCount() const { DARABONBA_PTR_GET_DEFAULT(succeedCount_, 0) };
      inline Results& setSucceedCount(int32_t succeedCount) { DARABONBA_PTR_SET_VALUE(succeedCount_, succeedCount) };


      // timerType Field Functions 
      bool hasTimerType() const { return this->timerType_ != nullptr;};
      void deleteTimerType() { this->timerType_ = nullptr;};
      inline string getTimerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
      inline Results& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


    protected:
      shared_ptr<string> batchId_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<int32_t> failedCount_ {};
      shared_ptr<int32_t> runningCount_ {};
      shared_ptr<int32_t> skippedCount_ {};
      shared_ptr<int32_t> succeedCount_ {};
      shared_ptr<string> timerType_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeGlobalTimerBatchesResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeGlobalTimerBatchesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGlobalTimerBatchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DescribeGlobalTimerBatchesResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DescribeGlobalTimerBatchesResponseBody::Results>) };
    inline vector<DescribeGlobalTimerBatchesResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DescribeGlobalTimerBatchesResponseBody::Results>) };
    inline DescribeGlobalTimerBatchesResponseBody& setResults(const vector<DescribeGlobalTimerBatchesResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeGlobalTimerBatchesResponseBody& setResults(vector<DescribeGlobalTimerBatchesResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeGlobalTimerBatchesResponseBody::Results>> results_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
