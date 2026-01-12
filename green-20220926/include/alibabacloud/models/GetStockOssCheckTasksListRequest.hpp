// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSTOCKOSSCHECKTASKSLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetStockOssCheckTasksListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStockOssCheckTasksListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IsInc, isInc_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GetStockOssCheckTasksListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IsInc, isInc_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GetStockOssCheckTasksListRequest() = default ;
    GetStockOssCheckTasksListRequest(const GetStockOssCheckTasksListRequest &) = default ;
    GetStockOssCheckTasksListRequest(GetStockOssCheckTasksListRequest &&) = default ;
    GetStockOssCheckTasksListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStockOssCheckTasksListRequest() = default ;
    GetStockOssCheckTasksListRequest& operator=(const GetStockOssCheckTasksListRequest &) = default ;
    GetStockOssCheckTasksListRequest& operator=(GetStockOssCheckTasksListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endTime_ == nullptr && this->isInc_ == nullptr && this->mediaType_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->sort_ == nullptr && this->startTime_ == nullptr && this->taskType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetStockOssCheckTasksListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetStockOssCheckTasksListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // isInc Field Functions 
    bool hasIsInc() const { return this->isInc_ != nullptr;};
    void deleteIsInc() { this->isInc_ = nullptr;};
    inline bool getIsInc() const { DARABONBA_PTR_GET_DEFAULT(isInc_, false) };
    inline GetStockOssCheckTasksListRequest& setIsInc(bool isInc) { DARABONBA_PTR_SET_VALUE(isInc_, isInc) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline int32_t getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, 0) };
    inline GetStockOssCheckTasksListRequest& setMediaType(int32_t mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetStockOssCheckTasksListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetStockOssCheckTasksListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline const map<string, string> & getSort() const { DARABONBA_PTR_GET_CONST(sort_, map<string, string>) };
    inline map<string, string> getSort() { DARABONBA_PTR_GET(sort_, map<string, string>) };
    inline GetStockOssCheckTasksListRequest& setSort(const map<string, string> & sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };
    inline GetStockOssCheckTasksListRequest& setSort(map<string, string> && sort) { DARABONBA_PTR_SET_RVALUE(sort_, sort) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetStockOssCheckTasksListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetStockOssCheckTasksListRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // End time.
    shared_ptr<string> endTime_ {};
    // Whether it is a scheduled scan task.
    shared_ptr<bool> isInc_ {};
    // Media type.
    shared_ptr<int32_t> mediaType_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Sort field.
    shared_ptr<map<string, string>> sort_ {};
    // Start time.
    shared_ptr<string> startTime_ {};
    // Task type.
    shared_ptr<string> taskType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
