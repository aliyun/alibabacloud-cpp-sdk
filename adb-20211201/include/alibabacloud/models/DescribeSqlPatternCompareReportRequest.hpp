// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternCompareReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternCompareReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeRate, changeRate_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(IncludePattern, includePattern_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternCompareReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeRate, changeRate_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(IncludePattern, includePattern_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DescribeSqlPatternCompareReportRequest() = default ;
    DescribeSqlPatternCompareReportRequest(const DescribeSqlPatternCompareReportRequest &) = default ;
    DescribeSqlPatternCompareReportRequest(DescribeSqlPatternCompareReportRequest &&) = default ;
    DescribeSqlPatternCompareReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternCompareReportRequest() = default ;
    DescribeSqlPatternCompareReportRequest& operator=(const DescribeSqlPatternCompareReportRequest &) = default ;
    DescribeSqlPatternCompareReportRequest& operator=(DescribeSqlPatternCompareReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeRate_ == nullptr
        && this->DBClusterId_ == nullptr && this->includePattern_ == nullptr && this->metricType_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->reportId_ == nullptr; };
    // changeRate Field Functions 
    bool hasChangeRate() const { return this->changeRate_ != nullptr;};
    void deleteChangeRate() { this->changeRate_ = nullptr;};
    inline string getChangeRate() const { DARABONBA_PTR_GET_DEFAULT(changeRate_, "") };
    inline DescribeSqlPatternCompareReportRequest& setChangeRate(string changeRate) { DARABONBA_PTR_SET_VALUE(changeRate_, changeRate) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSqlPatternCompareReportRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // includePattern Field Functions 
    bool hasIncludePattern() const { return this->includePattern_ != nullptr;};
    void deleteIncludePattern() { this->includePattern_ = nullptr;};
    inline bool getIncludePattern() const { DARABONBA_PTR_GET_DEFAULT(includePattern_, false) };
    inline DescribeSqlPatternCompareReportRequest& setIncludePattern(bool includePattern) { DARABONBA_PTR_SET_VALUE(includePattern_, includePattern) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeSqlPatternCompareReportRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline DescribeSqlPatternCompareReportRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSqlPatternCompareReportRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlPatternCompareReportRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSqlPatternCompareReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeSqlPatternCompareReportRequest& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The average change rate filter range for CHANGED reports. The format is `left~right`, where values are expressed as percentages and the interval is left-exclusive and right-inclusive. Examples:
    // 
    // - `100~500`: greater than 100% and less than or equal to 500%.
    // - `100~`: greater than 100% with no upper limit.
    // 
    // > - The left boundary is required and must be no less than 0. The right boundary must be no less than the left boundary.
    // > - This parameter is ignored for NEW reports.
    // > - When the time window 1 metric value is 0 and the time window 2 value is greater than 0, the Pattern is classified as zero-baseline growth and is categorized as `SEVERE` (significant change). To exclude such Patterns, set an upper limit for the change rate.
    shared_ptr<string> changeRate_ {};
    // The ID of the AnalyticDB for MySQL instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to return the parameterized SQL Pattern text. Valid values:
    // 
    // - `true`: Returns the Pattern text.
    // - `false`: Does not return the Pattern text, which reduces the response size.
    // 
    // Default value: `true`.
    shared_ptr<bool> includePattern_ {};
    // The analysis metric. Valid values:
    // 
    // - `QUERY_COUNT`: the number of query executions.
    // - `CPU_COST`: the CPU consumption.
    // - `SHUFFLE_SIZE`: the amount of shuffle data.
    // - `PEAK_MEMORY`: the peak memory consumption.
    // - `SCAN_SIZE`: the amount of scanned data.
    // 
    // This parameter is required.
    shared_ptr<string> metricType_ {};
    // Sorts the query results by a specified field. The value is a JSON array string, such as `[{"Field":"Time2SumValue","Type":"Desc"}]`. The array can contain only one object. Parameters:
    // 
    // - `Field`: the sort field. This parameter is case-sensitive. Valid values:
    //     - NEW report: `Time2SumValue`, `Time2AvgValue`, `Time2MaxValue`.
    //     - CHANGED report: `AvgChangeRatePercent`, `AvgTime1Value`, `AvgTime2Value`, `SumChangeRatePercent`, `SumTime1Value`, `SumTime2Value`, `MaxChangeRatePercent`, `MaxTime1Value`, `MaxTime2Value`.
    //     - All report types and analysis metrics: `AvgRt`, `MaxRt`.
    //     - `QUERY_COUNT`: `TotalQueryTime`.
    //     - `CPU_COST`: `QueryCount`, `AvgPlanningTime`, `MaxPlanningTime`, `AvgExecutionTime`, `MaxExecutionTime`.
    //     - `SHUFFLE_SIZE`, `PEAK_MEMORY`: `QueryCount`.
    //     - `SCAN_SIZE`: `QueryCount`, `TotalScanCost`.
    // - `Type`: the sort order. This parameter is case-insensitive. Valid values:
    //     - `Asc`: ascending order.
    //     - `Desc`: descending order.
    // 
    // > - NEW reports are sorted by `Time2SumValue` in descending order by default.
    // > - CHANGED reports are sorted by `AvgChangeRatePercent` in descending order by default.
    // > - The value of `Field` must be applicable to the current report type and `MetricType`.
    shared_ptr<string> order_ {};
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the SQL Pattern comparison report.
    // 
    // This parameter is required.
    shared_ptr<int64_t> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
