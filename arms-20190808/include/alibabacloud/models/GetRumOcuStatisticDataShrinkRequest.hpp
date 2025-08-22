// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRUMOCUSTATISTICDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumOcuStatisticDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumOcuStatisticDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(Group, groupShrink_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumOcuStatisticDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(Group, groupShrink_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetRumOcuStatisticDataShrinkRequest() = default ;
    GetRumOcuStatisticDataShrinkRequest(const GetRumOcuStatisticDataShrinkRequest &) = default ;
    GetRumOcuStatisticDataShrinkRequest(GetRumOcuStatisticDataShrinkRequest &&) = default ;
    GetRumOcuStatisticDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumOcuStatisticDataShrinkRequest() = default ;
    GetRumOcuStatisticDataShrinkRequest& operator=(const GetRumOcuStatisticDataShrinkRequest &) = default ;
    GetRumOcuStatisticDataShrinkRequest& operator=(GetRumOcuStatisticDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->filterShrink_ != nullptr && this->groupShrink_ != nullptr && this->page_ != nullptr && this->pageSize_ != nullptr && this->queryType_ != nullptr
        && this->regionId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetRumOcuStatisticDataShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string filterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline GetRumOcuStatisticDataShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // groupShrink Field Functions 
    bool hasGroupShrink() const { return this->groupShrink_ != nullptr;};
    void deleteGroupShrink() { this->groupShrink_ = nullptr;};
    inline string groupShrink() const { DARABONBA_PTR_GET_DEFAULT(groupShrink_, "") };
    inline GetRumOcuStatisticDataShrinkRequest& setGroupShrink(string groupShrink) { DARABONBA_PTR_SET_VALUE(groupShrink_, groupShrink) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetRumOcuStatisticDataShrinkRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetRumOcuStatisticDataShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline GetRumOcuStatisticDataShrinkRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRumOcuStatisticDataShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetRumOcuStatisticDataShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The filter condition. Three types of filter conditions are provided:
    // 
    // *   Application name: pid (Note that the application name is displayed, but the application ID is actually specified)
    // *   Application type: siteType
    // *   Data type: dataType
    std::shared_ptr<string> filterShrink_ = nullptr;
    // The grouping fields. Valid values:
    // 
    // *   siteType: The total number of OCUs is grouped by application type.
    // *   dataType: The total number of OCUs is grouped by data type.
    // *   pid: The total number of OCUs is grouped by application ID.
    // *   appName: The total number of OCUs is grouped by application name.
    // *   startTime: The total number of OCUs is grouped by start time.
    std::shared_ptr<string> groupShrink_ = nullptr;
    // The page number.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> page_ = nullptr;
    // The number of entries per page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the query. To query non-time series data, set the value to INSTANT. To query time series data, set the value to TIME_SERIES.
    std::shared_ptr<string> queryType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
