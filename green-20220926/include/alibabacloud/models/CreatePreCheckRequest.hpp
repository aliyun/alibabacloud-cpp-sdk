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
      DARABONBA_PTR_TO_JSON(BucketPrefixFilterConfig, bucketPrefixFilterConfig_);
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
      DARABONBA_PTR_FROM_JSON(BucketPrefixFilterConfig, bucketPrefixFilterConfig_);
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
    virtual bool empty() const override { return this->bucketPrefixFilterConfig_ == nullptr
        && this->buckets_ == nullptr && this->distinctHistoryTasks_ == nullptr && this->endTime_ == nullptr && this->isInc_ == nullptr && this->mediaType_ == nullptr
        && this->prefixFilterType_ == nullptr && this->prefixFilters_ == nullptr && this->priority_ == nullptr && this->regionId_ == nullptr && this->scanLimit_ == nullptr
        && this->scanNoFileType_ == nullptr && this->scanService_ == nullptr && this->startTime_ == nullptr && this->taskName_ == nullptr; };
    // bucketPrefixFilterConfig Field Functions 
    bool hasBucketPrefixFilterConfig() const { return this->bucketPrefixFilterConfig_ != nullptr;};
    void deleteBucketPrefixFilterConfig() { this->bucketPrefixFilterConfig_ = nullptr;};
    inline string getBucketPrefixFilterConfig() const { DARABONBA_PTR_GET_DEFAULT(bucketPrefixFilterConfig_, "") };
    inline CreatePreCheckRequest& setBucketPrefixFilterConfig(string bucketPrefixFilterConfig) { DARABONBA_PTR_SET_VALUE(bucketPrefixFilterConfig_, bucketPrefixFilterConfig) };


    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string getBuckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline CreatePreCheckRequest& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // distinctHistoryTasks Field Functions 
    bool hasDistinctHistoryTasks() const { return this->distinctHistoryTasks_ != nullptr;};
    void deleteDistinctHistoryTasks() { this->distinctHistoryTasks_ = nullptr;};
    inline bool getDistinctHistoryTasks() const { DARABONBA_PTR_GET_DEFAULT(distinctHistoryTasks_, false) };
    inline CreatePreCheckRequest& setDistinctHistoryTasks(bool distinctHistoryTasks) { DARABONBA_PTR_SET_VALUE(distinctHistoryTasks_, distinctHistoryTasks) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreatePreCheckRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isInc Field Functions 
    bool hasIsInc() const { return this->isInc_ != nullptr;};
    void deleteIsInc() { this->isInc_ = nullptr;};
    inline bool getIsInc() const { DARABONBA_PTR_GET_DEFAULT(isInc_, false) };
    inline CreatePreCheckRequest& setIsInc(bool isInc) { DARABONBA_PTR_SET_VALUE(isInc_, isInc) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline CreatePreCheckRequest& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // prefixFilterType Field Functions 
    bool hasPrefixFilterType() const { return this->prefixFilterType_ != nullptr;};
    void deletePrefixFilterType() { this->prefixFilterType_ = nullptr;};
    inline string getPrefixFilterType() const { DARABONBA_PTR_GET_DEFAULT(prefixFilterType_, "") };
    inline CreatePreCheckRequest& setPrefixFilterType(string prefixFilterType) { DARABONBA_PTR_SET_VALUE(prefixFilterType_, prefixFilterType) };


    // prefixFilters Field Functions 
    bool hasPrefixFilters() const { return this->prefixFilters_ != nullptr;};
    void deletePrefixFilters() { this->prefixFilters_ = nullptr;};
    inline string getPrefixFilters() const { DARABONBA_PTR_GET_DEFAULT(prefixFilters_, "") };
    inline CreatePreCheckRequest& setPrefixFilters(string prefixFilters) { DARABONBA_PTR_SET_VALUE(prefixFilters_, prefixFilters) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreatePreCheckRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePreCheckRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scanLimit Field Functions 
    bool hasScanLimit() const { return this->scanLimit_ != nullptr;};
    void deleteScanLimit() { this->scanLimit_ = nullptr;};
    inline int64_t getScanLimit() const { DARABONBA_PTR_GET_DEFAULT(scanLimit_, 0L) };
    inline CreatePreCheckRequest& setScanLimit(int64_t scanLimit) { DARABONBA_PTR_SET_VALUE(scanLimit_, scanLimit) };


    // scanNoFileType Field Functions 
    bool hasScanNoFileType() const { return this->scanNoFileType_ != nullptr;};
    void deleteScanNoFileType() { this->scanNoFileType_ = nullptr;};
    inline bool getScanNoFileType() const { DARABONBA_PTR_GET_DEFAULT(scanNoFileType_, false) };
    inline CreatePreCheckRequest& setScanNoFileType(bool scanNoFileType) { DARABONBA_PTR_SET_VALUE(scanNoFileType_, scanNoFileType) };


    // scanService Field Functions 
    bool hasScanService() const { return this->scanService_ != nullptr;};
    void deleteScanService() { this->scanService_ = nullptr;};
    inline string getScanService() const { DARABONBA_PTR_GET_DEFAULT(scanService_, "") };
    inline CreatePreCheckRequest& setScanService(string scanService) { DARABONBA_PTR_SET_VALUE(scanService_, scanService) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreatePreCheckRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreatePreCheckRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<string> bucketPrefixFilterConfig_ {};
    // Buckets.
    shared_ptr<string> buckets_ {};
    // Whether to deduplicate historical detected tasks.
    shared_ptr<bool> distinctHistoryTasks_ {};
    // Task end time.
    shared_ptr<string> endTime_ {};
    // Whether it is a scheduled scan task.
    shared_ptr<bool> isInc_ {};
    // Media type.
    shared_ptr<int32_t> mediaType_ {};
    // Prefix filter type.
    shared_ptr<string> prefixFilterType_ {};
    // Prefixes.
    shared_ptr<string> prefixFilters_ {};
    // Priority.
    shared_ptr<int32_t> priority_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Scan limit count.
    shared_ptr<int64_t> scanLimit_ {};
    // Whether to scan images without file extensions.
    shared_ptr<bool> scanNoFileType_ {};
    // Scan service code.
    shared_ptr<string> scanService_ {};
    // Task start time.
    shared_ptr<string> startTime_ {};
    // Task name.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
