// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERBATCHESRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerBatchesResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerBatchesResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_TO_JSON(SkippedCount, skippedCount_);
      DARABONBA_PTR_TO_JSON(SucceedCount, succeedCount_);
      DARABONBA_PTR_TO_JSON(TimerType, timerType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerBatchesResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(RunningCount, runningCount_);
      DARABONBA_PTR_FROM_JSON(SkippedCount, skippedCount_);
      DARABONBA_PTR_FROM_JSON(SucceedCount, succeedCount_);
      DARABONBA_PTR_FROM_JSON(TimerType, timerType_);
    };
    DescribeGlobalTimerBatchesResponseBodyResults() = default ;
    DescribeGlobalTimerBatchesResponseBodyResults(const DescribeGlobalTimerBatchesResponseBodyResults &) = default ;
    DescribeGlobalTimerBatchesResponseBodyResults(DescribeGlobalTimerBatchesResponseBodyResults &&) = default ;
    DescribeGlobalTimerBatchesResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerBatchesResponseBodyResults() = default ;
    DescribeGlobalTimerBatchesResponseBodyResults& operator=(const DescribeGlobalTimerBatchesResponseBodyResults &) = default ;
    DescribeGlobalTimerBatchesResponseBodyResults& operator=(DescribeGlobalTimerBatchesResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && return this->createTime_ == nullptr && return this->failedCount_ == nullptr && return this->runningCount_ == nullptr && return this->skippedCount_ == nullptr && return this->succeedCount_ == nullptr
        && return this->timerType_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t failedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // runningCount Field Functions 
    bool hasRunningCount() const { return this->runningCount_ != nullptr;};
    void deleteRunningCount() { this->runningCount_ = nullptr;};
    inline int32_t runningCount() const { DARABONBA_PTR_GET_DEFAULT(runningCount_, 0) };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setRunningCount(int32_t runningCount) { DARABONBA_PTR_SET_VALUE(runningCount_, runningCount) };


    // skippedCount Field Functions 
    bool hasSkippedCount() const { return this->skippedCount_ != nullptr;};
    void deleteSkippedCount() { this->skippedCount_ = nullptr;};
    inline int32_t skippedCount() const { DARABONBA_PTR_GET_DEFAULT(skippedCount_, 0) };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setSkippedCount(int32_t skippedCount) { DARABONBA_PTR_SET_VALUE(skippedCount_, skippedCount) };


    // succeedCount Field Functions 
    bool hasSucceedCount() const { return this->succeedCount_ != nullptr;};
    void deleteSucceedCount() { this->succeedCount_ = nullptr;};
    inline int32_t succeedCount() const { DARABONBA_PTR_GET_DEFAULT(succeedCount_, 0) };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setSucceedCount(int32_t succeedCount) { DARABONBA_PTR_SET_VALUE(succeedCount_, succeedCount) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline DescribeGlobalTimerBatchesResponseBodyResults& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    std::shared_ptr<string> batchId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> failedCount_ = nullptr;
    std::shared_ptr<int32_t> runningCount_ = nullptr;
    std::shared_ptr<int32_t> skippedCount_ = nullptr;
    std::shared_ptr<int32_t> succeedCount_ = nullptr;
    std::shared_ptr<string> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
