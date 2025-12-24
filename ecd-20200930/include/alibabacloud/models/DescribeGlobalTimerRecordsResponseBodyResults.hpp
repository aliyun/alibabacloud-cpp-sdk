// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALTIMERRECORDSRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeGlobalTimerRecordsResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalTimerRecordsResponseBodyResults& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeGlobalTimerRecordsResponseBodyResults& obj) { 
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
    DescribeGlobalTimerRecordsResponseBodyResults() = default ;
    DescribeGlobalTimerRecordsResponseBodyResults(const DescribeGlobalTimerRecordsResponseBodyResults &) = default ;
    DescribeGlobalTimerRecordsResponseBodyResults(DescribeGlobalTimerRecordsResponseBodyResults &&) = default ;
    DescribeGlobalTimerRecordsResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalTimerRecordsResponseBodyResults() = default ;
    DescribeGlobalTimerRecordsResponseBodyResults& operator=(const DescribeGlobalTimerRecordsResponseBodyResults &) = default ;
    DescribeGlobalTimerRecordsResponseBodyResults& operator=(DescribeGlobalTimerRecordsResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && return this->batchId_ == nullptr && return this->context_ == nullptr && return this->createTime_ == nullptr && return this->desktopId_ == nullptr && return this->desktopName_ == nullptr
        && return this->displayResultName_ == nullptr && return this->finishTime_ == nullptr && return this->regionId_ == nullptr && return this->retryable_ == nullptr && return this->timerGroupId_ == nullptr
        && return this->timerRecordId_ == nullptr && return this->timerResult_ == nullptr && return this->timerType_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string actionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline string batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setBatchId(string batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string desktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // displayResultName Field Functions 
    bool hasDisplayResultName() const { return this->displayResultName_ != nullptr;};
    void deleteDisplayResultName() { this->displayResultName_ = nullptr;};
    inline string displayResultName() const { DARABONBA_PTR_GET_DEFAULT(displayResultName_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setDisplayResultName(string displayResultName) { DARABONBA_PTR_SET_VALUE(displayResultName_, displayResultName) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // retryable Field Functions 
    bool hasRetryable() const { return this->retryable_ != nullptr;};
    void deleteRetryable() { this->retryable_ = nullptr;};
    inline bool retryable() const { DARABONBA_PTR_GET_DEFAULT(retryable_, false) };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setRetryable(bool retryable) { DARABONBA_PTR_SET_VALUE(retryable_, retryable) };


    // timerGroupId Field Functions 
    bool hasTimerGroupId() const { return this->timerGroupId_ != nullptr;};
    void deleteTimerGroupId() { this->timerGroupId_ = nullptr;};
    inline string timerGroupId() const { DARABONBA_PTR_GET_DEFAULT(timerGroupId_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setTimerGroupId(string timerGroupId) { DARABONBA_PTR_SET_VALUE(timerGroupId_, timerGroupId) };


    // timerRecordId Field Functions 
    bool hasTimerRecordId() const { return this->timerRecordId_ != nullptr;};
    void deleteTimerRecordId() { this->timerRecordId_ = nullptr;};
    inline string timerRecordId() const { DARABONBA_PTR_GET_DEFAULT(timerRecordId_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setTimerRecordId(string timerRecordId) { DARABONBA_PTR_SET_VALUE(timerRecordId_, timerRecordId) };


    // timerResult Field Functions 
    bool hasTimerResult() const { return this->timerResult_ != nullptr;};
    void deleteTimerResult() { this->timerResult_ = nullptr;};
    inline string timerResult() const { DARABONBA_PTR_GET_DEFAULT(timerResult_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setTimerResult(string timerResult) { DARABONBA_PTR_SET_VALUE(timerResult_, timerResult) };


    // timerType Field Functions 
    bool hasTimerType() const { return this->timerType_ != nullptr;};
    void deleteTimerType() { this->timerType_ = nullptr;};
    inline string timerType() const { DARABONBA_PTR_GET_DEFAULT(timerType_, "") };
    inline DescribeGlobalTimerRecordsResponseBodyResults& setTimerType(string timerType) { DARABONBA_PTR_SET_VALUE(timerType_, timerType) };


  protected:
    std::shared_ptr<string> actionType_ = nullptr;
    // The ID of the batch in which the scheduled task is executed.
    std::shared_ptr<string> batchId_ = nullptr;
    std::shared_ptr<string> context_ = nullptr;
    // The time when the execution record was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The cloud computer ID.
    std::shared_ptr<string> desktopId_ = nullptr;
    // The cloud computer name.
    std::shared_ptr<string> desktopName_ = nullptr;
    std::shared_ptr<string> displayResultName_ = nullptr;
    // The time when the scheduled task ended.
    std::shared_ptr<string> finishTime_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> retryable_ = nullptr;
    // The ID of the scheduled task group.
    std::shared_ptr<string> timerGroupId_ = nullptr;
    std::shared_ptr<string> timerRecordId_ = nullptr;
    // The execution result of the scheduled task.
    std::shared_ptr<string> timerResult_ = nullptr;
    // The type of the scheduled task.
    std::shared_ptr<string> timerType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
