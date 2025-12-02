// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPRECHECKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPRECHECKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class CreatePreCheckRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePreCheckRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(DistinctHistoryTasks, distinctHistoryTasks_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsInc, isInc_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_TO_JSON(PrefixFilters, prefixFilters_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScanLimit, scanLimit_);
      DARABONBA_PTR_TO_JSON(ScanNoFileType, scanNoFileType_);
      DARABONBA_PTR_TO_JSON(ScanService, scanService_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePreCheckRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(DistinctHistoryTasks, distinctHistoryTasks_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsInc, isInc_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilterType, prefixFilterType_);
      DARABONBA_PTR_FROM_JSON(PrefixFilters, prefixFilters_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScanLimit, scanLimit_);
      DARABONBA_PTR_FROM_JSON(ScanNoFileType, scanNoFileType_);
      DARABONBA_PTR_FROM_JSON(ScanService, scanService_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreatePreCheckRequest() = default ;
    CreatePreCheckRequest(const CreatePreCheckRequest &) = default ;
    CreatePreCheckRequest(CreatePreCheckRequest &&) = default ;
    CreatePreCheckRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePreCheckRequest() = default ;
    CreatePreCheckRequest& operator=(const CreatePreCheckRequest &) = default ;
    CreatePreCheckRequest& operator=(CreatePreCheckRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buckets_ == nullptr
        && return this->distinctHistoryTasks_ == nullptr && return this->endTime_ == nullptr && return this->isInc_ == nullptr && return this->mediaType_ == nullptr && return this->prefixFilterType_ == nullptr
        && return this->prefixFilters_ == nullptr && return this->priority_ == nullptr && return this->regionId_ == nullptr && return this->scanLimit_ == nullptr && return this->scanNoFileType_ == nullptr
        && return this->scanService_ == nullptr && return this->startTime_ == nullptr && return this->taskName_ == nullptr; };
    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string buckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline CreatePreCheckRequest& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // distinctHistoryTasks Field Functions 
    bool hasDistinctHistoryTasks() const { return this->distinctHistoryTasks_ != nullptr;};
    void deleteDistinctHistoryTasks() { this->distinctHistoryTasks_ = nullptr;};
    inline bool distinctHistoryTasks() const { DARABONBA_PTR_GET_DEFAULT(distinctHistoryTasks_, false) };
    inline CreatePreCheckRequest& setDistinctHistoryTasks(bool distinctHistoryTasks) { DARABONBA_PTR_SET_VALUE(distinctHistoryTasks_, distinctHistoryTasks) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreatePreCheckRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isInc Field Functions 
    bool hasIsInc() const { return this->isInc_ != nullptr;};
    void deleteIsInc() { this->isInc_ = nullptr;};
    inline bool isInc() const { DARABONBA_PTR_GET_DEFAULT(isInc_, false) };
    inline CreatePreCheckRequest& setIsInc(bool isInc) { DARABONBA_PTR_SET_VALUE(isInc_, isInc) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline CreatePreCheckRequest& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // prefixFilterType Field Functions 
    bool hasPrefixFilterType() const { return this->prefixFilterType_ != nullptr;};
    void deletePrefixFilterType() { this->prefixFilterType_ = nullptr;};
    inline string prefixFilterType() const { DARABONBA_PTR_GET_DEFAULT(prefixFilterType_, "") };
    inline CreatePreCheckRequest& setPrefixFilterType(string prefixFilterType) { DARABONBA_PTR_SET_VALUE(prefixFilterType_, prefixFilterType) };


    // prefixFilters Field Functions 
    bool hasPrefixFilters() const { return this->prefixFilters_ != nullptr;};
    void deletePrefixFilters() { this->prefixFilters_ = nullptr;};
    inline string prefixFilters() const { DARABONBA_PTR_GET_DEFAULT(prefixFilters_, "") };
    inline CreatePreCheckRequest& setPrefixFilters(string prefixFilters) { DARABONBA_PTR_SET_VALUE(prefixFilters_, prefixFilters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatePreCheckRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePreCheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scanLimit Field Functions 
    bool hasScanLimit() const { return this->scanLimit_ != nullptr;};
    void deleteScanLimit() { this->scanLimit_ = nullptr;};
    inline int64_t scanLimit() const { DARABONBA_PTR_GET_DEFAULT(scanLimit_, 0L) };
    inline CreatePreCheckRequest& setScanLimit(int64_t scanLimit) { DARABONBA_PTR_SET_VALUE(scanLimit_, scanLimit) };


    // scanNoFileType Field Functions 
    bool hasScanNoFileType() const { return this->scanNoFileType_ != nullptr;};
    void deleteScanNoFileType() { this->scanNoFileType_ = nullptr;};
    inline bool scanNoFileType() const { DARABONBA_PTR_GET_DEFAULT(scanNoFileType_, false) };
    inline CreatePreCheckRequest& setScanNoFileType(bool scanNoFileType) { DARABONBA_PTR_SET_VALUE(scanNoFileType_, scanNoFileType) };


    // scanService Field Functions 
    bool hasScanService() const { return this->scanService_ != nullptr;};
    void deleteScanService() { this->scanService_ = nullptr;};
    inline string scanService() const { DARABONBA_PTR_GET_DEFAULT(scanService_, "") };
    inline CreatePreCheckRequest& setScanService(string scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreatePreCheckRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreatePreCheckRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // Buckets.
    std::shared_ptr<string> buckets_ = nullptr;
    // Whether to deduplicate historical detected tasks.
    std::shared_ptr<bool> distinctHistoryTasks_ = nullptr;
    // Task end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // Whether it is a scheduled scan task.
    std::shared_ptr<bool> isInc_ = nullptr;
    // Media type.
    std::shared_ptr<int32_t> mediaType_ = nullptr;
    // Prefix filter type.
    std::shared_ptr<string> prefixFilterType_ = nullptr;
    // Prefixes.
    std::shared_ptr<string> prefixFilters_ = nullptr;
    // Priority.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Scan limit count.
    std::shared_ptr<int64_t> scanLimit_ = nullptr;
    // Whether to scan images without file extensions.
    std::shared_ptr<bool> scanNoFileType_ = nullptr;
    // Scan service code.
    std::shared_ptr<string> scanService_ = nullptr;
    // Task start time.
    std::shared_ptr<string> startTime_ = nullptr;
    // Task name.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
