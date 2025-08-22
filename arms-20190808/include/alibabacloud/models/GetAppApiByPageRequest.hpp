// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPAPIBYPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPAPIBYPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetAppApiByPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppApiByPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IntervalMills, intervalMills_);
      DARABONBA_PTR_TO_JSON(PId, PId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppApiByPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IntervalMills, intervalMills_);
      DARABONBA_PTR_FROM_JSON(PId, PId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetAppApiByPageRequest() = default ;
    GetAppApiByPageRequest(const GetAppApiByPageRequest &) = default ;
    GetAppApiByPageRequest(GetAppApiByPageRequest &&) = default ;
    GetAppApiByPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppApiByPageRequest() = default ;
    GetAppApiByPageRequest& operator=(const GetAppApiByPageRequest &) = default ;
    GetAppApiByPageRequest& operator=(GetAppApiByPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentPage_ != nullptr
        && this->endTime_ != nullptr && this->intervalMills_ != nullptr && this->PId_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr
        && this->startTime_ != nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAppApiByPageRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetAppApiByPageRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // intervalMills Field Functions 
    bool hasIntervalMills() const { return this->intervalMills_ != nullptr;};
    void deleteIntervalMills() { this->intervalMills_ = nullptr;};
    inline int32_t intervalMills() const { DARABONBA_PTR_GET_DEFAULT(intervalMills_, 0) };
    inline GetAppApiByPageRequest& setIntervalMills(int32_t intervalMills) { DARABONBA_PTR_SET_VALUE(intervalMills_, intervalMills) };


    // PId Field Functions 
    bool hasPId() const { return this->PId_ != nullptr;};
    void deletePId() { this->PId_ = nullptr;};
    inline string PId() const { DARABONBA_PTR_GET_DEFAULT(PId_, "") };
    inline GetAppApiByPageRequest& setPId(string PId) { DARABONBA_PTR_SET_VALUE(PId_, PId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAppApiByPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAppApiByPageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetAppApiByPageRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The end of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The time interval between the data shards to be queried. Unit: milliseconds. Minimum value: 60000. Maximum value: 2147483647.
    std::shared_ptr<int32_t> intervalMills_ = nullptr;
    // The process identifier (PID) of the application. For information about how to obtain a PID, see [Obtain the PID of an application](https://www.alibabacloud.com/help/zh/doc-detail/186100.htm?spm=a2cdw.13409063.0.0.7a72281f0bkTfx#title-imy-7gj-qhr).
    // 
    // This parameter is required.
    std::shared_ptr<string> PId_ = nullptr;
    // The number of entries to return on each page. This parameter is no longer supported. The number of entries to return on each page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
