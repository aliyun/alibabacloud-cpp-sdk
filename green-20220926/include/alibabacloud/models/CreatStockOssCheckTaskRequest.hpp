// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATSTOCKOSSCHECKTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATSTOCKOSSCHECKTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CreatStockOssCheckTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatStockOssCheckTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(CallbackId, callbackId_);
      DARABONBA_PTR_TO_JSON(DistinctHistoryTasks, distinctHistoryTasks_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExecuteDate, executeDate_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Freeze, freeze_);
      DARABONBA_PTR_TO_JSON(FreezeHighRisk1, freezeHighRisk1_);
      DARABONBA_PTR_TO_JSON(FreezeHighRisk2, freezeHighRisk2_);
      DARABONBA_PTR_TO_JSON(FreezeMediumRisk1, freezeMediumRisk1_);
      DARABONBA_PTR_TO_JSON(FreezeMediumRisk2, freezeMediumRisk2_);
      DARABONBA_PTR_TO_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_TO_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_TO_JSON(IsInc, isInc_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_TO_JSON(PrefixFilters, prefixFilters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScanLimit, scanLimit_);
      DARABONBA_PTR_TO_JSON(ScanNoFileType, scanNoFileType_);
      DARABONBA_PTR_TO_JSON(ScanResourceType, scanResourceType_);
      DARABONBA_PTR_TO_JSON(ScanService, scanService_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskCycle, taskCycle_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, CreatStockOssCheckTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(CallbackId, callbackId_);
      DARABONBA_PTR_FROM_JSON(DistinctHistoryTasks, distinctHistoryTasks_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExecuteDate, executeDate_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Freeze, freeze_);
      DARABONBA_PTR_FROM_JSON(FreezeHighRisk1, freezeHighRisk1_);
      DARABONBA_PTR_FROM_JSON(FreezeHighRisk2, freezeHighRisk2_);
      DARABONBA_PTR_FROM_JSON(FreezeMediumRisk1, freezeMediumRisk1_);
      DARABONBA_PTR_FROM_JSON(FreezeMediumRisk2, freezeMediumRisk2_);
      DARABONBA_PTR_FROM_JSON(FreezeRestorePath, freezeRestorePath_);
      DARABONBA_PTR_FROM_JSON(FreezeType, freezeType_);
      DARABONBA_PTR_FROM_JSON(IsInc, isInc_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilters, prefixFilters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScanLimit, scanLimit_);
      DARABONBA_PTR_FROM_JSON(ScanNoFileType, scanNoFileType_);
      DARABONBA_PTR_FROM_JSON(ScanResourceType, scanResourceType_);
      DARABONBA_PTR_FROM_JSON(ScanService, scanService_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskCycle, taskCycle_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    CreatStockOssCheckTaskRequest() = default ;
    CreatStockOssCheckTaskRequest(const CreatStockOssCheckTaskRequest &) = default ;
    CreatStockOssCheckTaskRequest(CreatStockOssCheckTaskRequest &&) = default ;
    CreatStockOssCheckTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatStockOssCheckTaskRequest() = default ;
    CreatStockOssCheckTaskRequest& operator=(const CreatStockOssCheckTaskRequest &) = default ;
    CreatStockOssCheckTaskRequest& operator=(CreatStockOssCheckTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buckets_ == nullptr
        && return this->callbackId_ == nullptr && return this->distinctHistoryTasks_ == nullptr && return this->endTime_ == nullptr && return this->executeDate_ == nullptr && return this->executeTime_ == nullptr
        && return this->freeze_ == nullptr && return this->freezeHighRisk1_ == nullptr && return this->freezeHighRisk2_ == nullptr && return this->freezeMediumRisk1_ == nullptr && return this->freezeMediumRisk2_ == nullptr
        && return this->freezeRestorePath_ == nullptr && return this->freezeType_ == nullptr && return this->isInc_ == nullptr && return this->mediaType_ == nullptr && return this->prefixFilterType_ == nullptr
        && return this->prefixFilters_ == nullptr && return this->priority_ == nullptr && return this->referer_ == nullptr && return this->regionId_ == nullptr && return this->scanLimit_ == nullptr
        && return this->scanNoFileType_ == nullptr && return this->scanResourceType_ == nullptr && return this->scanService_ == nullptr && return this->startTime_ == nullptr && return this->taskCycle_ == nullptr
        && return this->taskName_ == nullptr && return this->taskType_ == nullptr; };
    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string buckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline CreatStockOssCheckTaskRequest& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // callbackId Field Functions 
    bool hasCallbackId() const { return this->callbackId_ != nullptr;};
    void deleteCallbackId() { this->callbackId_ = nullptr;};
    inline string callbackId() const { DARABONBA_PTR_GET_DEFAULT(callbackId_, "") };
    inline CreatStockOssCheckTaskRequest& setCallbackId(string callbackId) { DARABONBA_PTR_SET_VALUE(callbackId_, callbackId) };


    // distinctHistoryTasks Field Functions 
    bool hasDistinctHistoryTasks() const { return this->distinctHistoryTasks_ != nullptr;};
    void deleteDistinctHistoryTasks() { this->distinctHistoryTasks_ = nullptr;};
    inline bool distinctHistoryTasks() const { DARABONBA_PTR_GET_DEFAULT(distinctHistoryTasks_, false) };
    inline CreatStockOssCheckTaskRequest& setDistinctHistoryTasks(bool distinctHistoryTasks) { DARABONBA_PTR_SET_VALUE(distinctHistoryTasks_, distinctHistoryTasks) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreatStockOssCheckTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeDate Field Functions 
    bool hasExecuteDate() const { return this->executeDate_ != nullptr;};
    void deleteExecuteDate() { this->executeDate_ = nullptr;};
    inline int32_t executeDate() const { DARABONBA_PTR_GET_DEFAULT(executeDate_, 0) };
    inline CreatStockOssCheckTaskRequest& setExecuteDate(int32_t executeDate) { DARABONBA_PTR_SET_VALUE(executeDate_, executeDate) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline CreatStockOssCheckTaskRequest& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // freeze Field Functions 
    bool hasFreeze() const { return this->freeze_ != nullptr;};
    void deleteFreeze() { this->freeze_ = nullptr;};
    inline bool freeze() const { DARABONBA_PTR_GET_DEFAULT(freeze_, false) };
    inline CreatStockOssCheckTaskRequest& setFreeze(bool freeze) { DARABONBA_PTR_SET_VALUE(freeze_, freeze) };


    // freezeHighRisk1 Field Functions 
    bool hasFreezeHighRisk1() const { return this->freezeHighRisk1_ != nullptr;};
    void deleteFreezeHighRisk1() { this->freezeHighRisk1_ = nullptr;};
    inline bool freezeHighRisk1() const { DARABONBA_PTR_GET_DEFAULT(freezeHighRisk1_, false) };
    inline CreatStockOssCheckTaskRequest& setFreezeHighRisk1(bool freezeHighRisk1) { DARABONBA_PTR_SET_VALUE(freezeHighRisk1_, freezeHighRisk1) };


    // freezeHighRisk2 Field Functions 
    bool hasFreezeHighRisk2() const { return this->freezeHighRisk2_ != nullptr;};
    void deleteFreezeHighRisk2() { this->freezeHighRisk2_ = nullptr;};
    inline bool freezeHighRisk2() const { DARABONBA_PTR_GET_DEFAULT(freezeHighRisk2_, false) };
    inline CreatStockOssCheckTaskRequest& setFreezeHighRisk2(bool freezeHighRisk2) { DARABONBA_PTR_SET_VALUE(freezeHighRisk2_, freezeHighRisk2) };


    // freezeMediumRisk1 Field Functions 
    bool hasFreezeMediumRisk1() const { return this->freezeMediumRisk1_ != nullptr;};
    void deleteFreezeMediumRisk1() { this->freezeMediumRisk1_ = nullptr;};
    inline bool freezeMediumRisk1() const { DARABONBA_PTR_GET_DEFAULT(freezeMediumRisk1_, false) };
    inline CreatStockOssCheckTaskRequest& setFreezeMediumRisk1(bool freezeMediumRisk1) { DARABONBA_PTR_SET_VALUE(freezeMediumRisk1_, freezeMediumRisk1) };


    // freezeMediumRisk2 Field Functions 
    bool hasFreezeMediumRisk2() const { return this->freezeMediumRisk2_ != nullptr;};
    void deleteFreezeMediumRisk2() { this->freezeMediumRisk2_ = nullptr;};
    inline bool freezeMediumRisk2() const { DARABONBA_PTR_GET_DEFAULT(freezeMediumRisk2_, false) };
    inline CreatStockOssCheckTaskRequest& setFreezeMediumRisk2(bool freezeMediumRisk2) { DARABONBA_PTR_SET_VALUE(freezeMediumRisk2_, freezeMediumRisk2) };


    // freezeRestorePath Field Functions 
    bool hasFreezeRestorePath() const { return this->freezeRestorePath_ != nullptr;};
    void deleteFreezeRestorePath() { this->freezeRestorePath_ = nullptr;};
    inline string freezeRestorePath() const { DARABONBA_PTR_GET_DEFAULT(freezeRestorePath_, "") };
    inline CreatStockOssCheckTaskRequest& setFreezeRestorePath(string freezeRestorePath) { DARABONBA_PTR_SET_VALUE(freezeRestorePath_, freezeRestorePath) };


    // freezeType Field Functions 
    bool hasFreezeType() const { return this->freezeType_ != nullptr;};
    void deleteFreezeType() { this->freezeType_ = nullptr;};
    inline string freezeType() const { DARABONBA_PTR_GET_DEFAULT(freezeType_, "") };
    inline CreatStockOssCheckTaskRequest& setFreezeType(string freezeType) { DARABONBA_PTR_SET_VALUE(freezeType_, freezeType) };


    // isInc Field Functions 
    bool hasIsInc() const { return this->isInc_ != nullptr;};
    void deleteIsInc() { this->isInc_ = nullptr;};
    inline bool isInc() const { DARABONBA_PTR_GET_DEFAULT(isInc_, false) };
    inline CreatStockOssCheckTaskRequest& setIsInc(bool isInc) { DARABONBA_PTR_SET_VALUE(isInc_, isInc) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline CreatStockOssCheckTaskRequest& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // prefixFilterType Field Functions 
    bool hasPrefixFilterType() const { return this->prefixFilterType_ != nullptr;};
    void deletePrefixFilterType() { this->prefixFilterType_ = nullptr;};
    inline string prefixFilterType() const { DARABONBA_PTR_GET_DEFAULT(prefixFilterType_, "") };
    inline CreatStockOssCheckTaskRequest& setPrefixFilterType(string prefixFilterType) { DARABONBA_PTR_SET_VALUE(prefixFilterType_, prefixFilterType) };


    // prefixFilters Field Functions 
    bool hasPrefixFilters() const { return this->prefixFilters_ != nullptr;};
    void deletePrefixFilters() { this->prefixFilters_ = nullptr;};
    inline string prefixFilters() const { DARABONBA_PTR_GET_DEFAULT(prefixFilters_, "") };
    inline CreatStockOssCheckTaskRequest& setPrefixFilters(string prefixFilters) { DARABONBA_PTR_SET_VALUE(prefixFilters_, prefixFilters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatStockOssCheckTaskRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string referer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline CreatStockOssCheckTaskRequest& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatStockOssCheckTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scanLimit Field Functions 
    bool hasScanLimit() const { return this->scanLimit_ != nullptr;};
    void deleteScanLimit() { this->scanLimit_ = nullptr;};
    inline int64_t scanLimit() const { DARABONBA_PTR_GET_DEFAULT(scanLimit_, 0L) };
    inline CreatStockOssCheckTaskRequest& setScanLimit(int64_t scanLimit) { DARABONBA_PTR_SET_VALUE(scanLimit_, scanLimit) };


    // scanNoFileType Field Functions 
    bool hasScanNoFileType() const { return this->scanNoFileType_ != nullptr;};
    void deleteScanNoFileType() { this->scanNoFileType_ = nullptr;};
    inline bool scanNoFileType() const { DARABONBA_PTR_GET_DEFAULT(scanNoFileType_, false) };
    inline CreatStockOssCheckTaskRequest& setScanNoFileType(bool scanNoFileType) { DARABONBA_PTR_SET_VALUE(scanNoFileType_, scanNoFileType) };


    // scanResourceType Field Functions 
    bool hasScanResourceType() const { return this->scanResourceType_ != nullptr;};
    void deleteScanResourceType() { this->scanResourceType_ = nullptr;};
    inline string scanResourceType() const { DARABONBA_PTR_GET_DEFAULT(scanResourceType_, "") };
    inline CreatStockOssCheckTaskRequest& setScanResourceType(string scanResourceType) { DARABONBA_PTR_SET_VALUE(scanResourceType_, scanResourceType) };


    // scanService Field Functions 
    bool hasScanService() const { return this->scanService_ != nullptr;};
    void deleteScanService() { this->scanService_ = nullptr;};
    inline string scanService() const { DARABONBA_PTR_GET_DEFAULT(scanService_, "") };
    inline CreatStockOssCheckTaskRequest& setScanService(string scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreatStockOssCheckTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskCycle Field Functions 
    bool hasTaskCycle() const { return this->taskCycle_ != nullptr;};
    void deleteTaskCycle() { this->taskCycle_ = nullptr;};
    inline int32_t taskCycle() const { DARABONBA_PTR_GET_DEFAULT(taskCycle_, 0) };
    inline CreatStockOssCheckTaskRequest& setTaskCycle(int32_t taskCycle) { DARABONBA_PTR_SET_VALUE(taskCycle_, taskCycle) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreatStockOssCheckTaskRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline CreatStockOssCheckTaskRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // OSS buckets
    std::shared_ptr<string> buckets_ = nullptr;
    // Callback ID
    std::shared_ptr<string> callbackId_ = nullptr;
    // Flag for deduplicating against previously detected tasks.
    std::shared_ptr<bool> distinctHistoryTasks_ = nullptr;
    // The end time of the task.
    std::shared_ptr<string> endTime_ = nullptr;
    // Execute date of scheduled task.
    std::shared_ptr<int32_t> executeDate_ = nullptr;
    // Execute time of scheduled task.
    std::shared_ptr<string> executeTime_ = nullptr;
    // Freeze indicator
    std::shared_ptr<bool> freeze_ = nullptr;
    // Freeze High-Risk Images
    std::shared_ptr<bool> freezeHighRisk1_ = nullptr;
    // Freeze High-Risk Audio and Text
    std::shared_ptr<bool> freezeHighRisk2_ = nullptr;
    // Freeze Medium-Risk Images
    std::shared_ptr<bool> freezeMediumRisk1_ = nullptr;
    // Freeze Medium-Risk Audio and Text
    std::shared_ptr<bool> freezeMediumRisk2_ = nullptr;
    // Freeze Restore Path
    std::shared_ptr<string> freezeRestorePath_ = nullptr;
    // Freeze type
    std::shared_ptr<string> freezeType_ = nullptr;
    // Indicator for scheduled task.
    std::shared_ptr<bool> isInc_ = nullptr;
    // Media type.
    std::shared_ptr<int32_t> mediaType_ = nullptr;
    // Prefix filter type.
    std::shared_ptr<string> prefixFilterType_ = nullptr;
    // Prefix filters
    std::shared_ptr<string> prefixFilters_ = nullptr;
    // The priority of the task.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Referer.
    std::shared_ptr<string> referer_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
    // The scan limit of the task.
    std::shared_ptr<int64_t> scanLimit_ = nullptr;
    // Indicator for scanning files without file type.
    std::shared_ptr<bool> scanNoFileType_ = nullptr;
    // Scan resource type.
    std::shared_ptr<string> scanResourceType_ = nullptr;
    // The code of scan service.
    std::shared_ptr<string> scanService_ = nullptr;
    // The start time of the task.
    std::shared_ptr<string> startTime_ = nullptr;
    // Task Cycle
    std::shared_ptr<int32_t> taskCycle_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // Task type.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
