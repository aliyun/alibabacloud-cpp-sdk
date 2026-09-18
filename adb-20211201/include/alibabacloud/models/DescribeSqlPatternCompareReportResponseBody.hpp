// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPATTERNCOMPAREREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/ItemsMetricValuesValue.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSqlPatternCompareReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlPatternCompareReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlPatternCompareReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSqlPatternCompareReportResponseBody() = default ;
    DescribeSqlPatternCompareReportResponseBody(const DescribeSqlPatternCompareReportResponseBody &) = default ;
    DescribeSqlPatternCompareReportResponseBody(DescribeSqlPatternCompareReportResponseBody &&) = default ;
    DescribeSqlPatternCompareReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlPatternCompareReportResponseBody() = default ;
    DescribeSqlPatternCompareReportResponseBody& operator=(const DescribeSqlPatternCompareReportResponseBody &) = default ;
    DescribeSqlPatternCompareReportResponseBody& operator=(DescribeSqlPatternCompareReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(AvgExecutionTime, avgExecutionTime_);
        DARABONBA_PTR_TO_JSON(AvgPlanningTime, avgPlanningTime_);
        DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
        DARABONBA_PTR_TO_JSON(MaxExecutionTime, maxExecutionTime_);
        DARABONBA_PTR_TO_JSON(MaxPlanningTime, maxPlanningTime_);
        DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
        DARABONBA_PTR_TO_JSON(MetricValues, metricValues_);
        DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
        DARABONBA_PTR_TO_JSON(QueryCountDisplayValue, queryCountDisplayValue_);
        DARABONBA_PTR_TO_JSON(Rank, rank_);
        DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(SqlPatternHash, sqlPatternHash_);
        DARABONBA_PTR_TO_JSON(TotalQueryTime, totalQueryTime_);
        DARABONBA_PTR_TO_JSON(TotalScanCost, totalScanCost_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(AvgExecutionTime, avgExecutionTime_);
        DARABONBA_PTR_FROM_JSON(AvgPlanningTime, avgPlanningTime_);
        DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
        DARABONBA_PTR_FROM_JSON(MaxExecutionTime, maxExecutionTime_);
        DARABONBA_PTR_FROM_JSON(MaxPlanningTime, maxPlanningTime_);
        DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
        DARABONBA_PTR_FROM_JSON(MetricValues, metricValues_);
        DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
        DARABONBA_PTR_FROM_JSON(QueryCountDisplayValue, queryCountDisplayValue_);
        DARABONBA_PTR_FROM_JSON(Rank, rank_);
        DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(SqlPatternHash, sqlPatternHash_);
        DARABONBA_PTR_FROM_JSON(TotalQueryTime, totalQueryTime_);
        DARABONBA_PTR_FROM_JSON(TotalScanCost, totalScanCost_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->avgExecutionTime_ == nullptr
        && this->avgPlanningTime_ == nullptr && this->avgRt_ == nullptr && this->maxExecutionTime_ == nullptr && this->maxPlanningTime_ == nullptr && this->maxRt_ == nullptr
        && this->metricValues_ == nullptr && this->pattern_ == nullptr && this->queryCount_ == nullptr && this->queryCountDisplayValue_ == nullptr && this->rank_ == nullptr
        && this->riskLevel_ == nullptr && this->sqlPatternHash_ == nullptr && this->totalQueryTime_ == nullptr && this->totalScanCost_ == nullptr; };
      // avgExecutionTime Field Functions 
      bool hasAvgExecutionTime() const { return this->avgExecutionTime_ != nullptr;};
      void deleteAvgExecutionTime() { this->avgExecutionTime_ = nullptr;};
      inline string getAvgExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(avgExecutionTime_, "") };
      inline Items& setAvgExecutionTime(string avgExecutionTime) { DARABONBA_PTR_SET_VALUE(avgExecutionTime_, avgExecutionTime) };


      // avgPlanningTime Field Functions 
      bool hasAvgPlanningTime() const { return this->avgPlanningTime_ != nullptr;};
      void deleteAvgPlanningTime() { this->avgPlanningTime_ = nullptr;};
      inline string getAvgPlanningTime() const { DARABONBA_PTR_GET_DEFAULT(avgPlanningTime_, "") };
      inline Items& setAvgPlanningTime(string avgPlanningTime) { DARABONBA_PTR_SET_VALUE(avgPlanningTime_, avgPlanningTime) };


      // avgRt Field Functions 
      bool hasAvgRt() const { return this->avgRt_ != nullptr;};
      void deleteAvgRt() { this->avgRt_ = nullptr;};
      inline string getAvgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, "") };
      inline Items& setAvgRt(string avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


      // maxExecutionTime Field Functions 
      bool hasMaxExecutionTime() const { return this->maxExecutionTime_ != nullptr;};
      void deleteMaxExecutionTime() { this->maxExecutionTime_ = nullptr;};
      inline string getMaxExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTime_, "") };
      inline Items& setMaxExecutionTime(string maxExecutionTime) { DARABONBA_PTR_SET_VALUE(maxExecutionTime_, maxExecutionTime) };


      // maxPlanningTime Field Functions 
      bool hasMaxPlanningTime() const { return this->maxPlanningTime_ != nullptr;};
      void deleteMaxPlanningTime() { this->maxPlanningTime_ = nullptr;};
      inline string getMaxPlanningTime() const { DARABONBA_PTR_GET_DEFAULT(maxPlanningTime_, "") };
      inline Items& setMaxPlanningTime(string maxPlanningTime) { DARABONBA_PTR_SET_VALUE(maxPlanningTime_, maxPlanningTime) };


      // maxRt Field Functions 
      bool hasMaxRt() const { return this->maxRt_ != nullptr;};
      void deleteMaxRt() { this->maxRt_ = nullptr;};
      inline string getMaxRt() const { DARABONBA_PTR_GET_DEFAULT(maxRt_, "") };
      inline Items& setMaxRt(string maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };


      // metricValues Field Functions 
      bool hasMetricValues() const { return this->metricValues_ != nullptr;};
      void deleteMetricValues() { this->metricValues_ = nullptr;};
      inline const map<string, ItemsMetricValuesValue> & getMetricValues() const { DARABONBA_PTR_GET_CONST(metricValues_, map<string, ItemsMetricValuesValue>) };
      inline map<string, ItemsMetricValuesValue> getMetricValues() { DARABONBA_PTR_GET(metricValues_, map<string, ItemsMetricValuesValue>) };
      inline Items& setMetricValues(const map<string, ItemsMetricValuesValue> & metricValues) { DARABONBA_PTR_SET_VALUE(metricValues_, metricValues) };
      inline Items& setMetricValues(map<string, ItemsMetricValuesValue> && metricValues) { DARABONBA_PTR_SET_RVALUE(metricValues_, metricValues) };


      // pattern Field Functions 
      bool hasPattern() const { return this->pattern_ != nullptr;};
      void deletePattern() { this->pattern_ = nullptr;};
      inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
      inline Items& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


      // queryCount Field Functions 
      bool hasQueryCount() const { return this->queryCount_ != nullptr;};
      void deleteQueryCount() { this->queryCount_ = nullptr;};
      inline int64_t getQueryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0L) };
      inline Items& setQueryCount(int64_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


      // queryCountDisplayValue Field Functions 
      bool hasQueryCountDisplayValue() const { return this->queryCountDisplayValue_ != nullptr;};
      void deleteQueryCountDisplayValue() { this->queryCountDisplayValue_ = nullptr;};
      inline string getQueryCountDisplayValue() const { DARABONBA_PTR_GET_DEFAULT(queryCountDisplayValue_, "") };
      inline Items& setQueryCountDisplayValue(string queryCountDisplayValue) { DARABONBA_PTR_SET_VALUE(queryCountDisplayValue_, queryCountDisplayValue) };


      // rank Field Functions 
      bool hasRank() const { return this->rank_ != nullptr;};
      void deleteRank() { this->rank_ = nullptr;};
      inline int64_t getRank() const { DARABONBA_PTR_GET_DEFAULT(rank_, 0L) };
      inline Items& setRank(int64_t rank) { DARABONBA_PTR_SET_VALUE(rank_, rank) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Items& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sqlPatternHash Field Functions 
      bool hasSqlPatternHash() const { return this->sqlPatternHash_ != nullptr;};
      void deleteSqlPatternHash() { this->sqlPatternHash_ = nullptr;};
      inline string getSqlPatternHash() const { DARABONBA_PTR_GET_DEFAULT(sqlPatternHash_, "") };
      inline Items& setSqlPatternHash(string sqlPatternHash) { DARABONBA_PTR_SET_VALUE(sqlPatternHash_, sqlPatternHash) };


      // totalQueryTime Field Functions 
      bool hasTotalQueryTime() const { return this->totalQueryTime_ != nullptr;};
      void deleteTotalQueryTime() { this->totalQueryTime_ = nullptr;};
      inline string getTotalQueryTime() const { DARABONBA_PTR_GET_DEFAULT(totalQueryTime_, "") };
      inline Items& setTotalQueryTime(string totalQueryTime) { DARABONBA_PTR_SET_VALUE(totalQueryTime_, totalQueryTime) };


      // totalScanCost Field Functions 
      bool hasTotalScanCost() const { return this->totalScanCost_ != nullptr;};
      void deleteTotalScanCost() { this->totalScanCost_ = nullptr;};
      inline string getTotalScanCost() const { DARABONBA_PTR_GET_DEFAULT(totalScanCost_, "") };
      inline Items& setTotalScanCost(string totalScanCost) { DARABONBA_PTR_SET_VALUE(totalScanCost_, totalScanCost) };


    protected:
      // The display string of the average execution duration for Time 2, in seconds. This field is returned only for the CPU_COST dimension.
      shared_ptr<string> avgExecutionTime_ {};
      // The display string of the average planning duration for Time 2, in seconds. This field is returned only for the CPU_COST dimension.
      shared_ptr<string> avgPlanningTime_ {};
      // The display string of the average query response time for Time 2, in seconds. This field is returned for all analysis dimensions.
      shared_ptr<string> avgRt_ {};
      // The display string of the maximum execution duration for Time 2, in seconds. This field is returned only for the CPU_COST dimension.
      shared_ptr<string> maxExecutionTime_ {};
      // The display string of the maximum planning duration for Time 2, in seconds. This field is returned only for the CPU_COST dimension.
      shared_ptr<string> maxPlanningTime_ {};
      // The display string of the maximum query response time for Time 2, in seconds. This field is returned for all analysis dimensions.
      shared_ptr<string> maxRt_ {};
      // The primary metric mapping for the current analysis dimension. Valid keys:
      // 
      // - `QUERY_COUNT`: the number of query executions.
      // - `CPU_COST`: the CPU consumption.
      // - `SHUFFLE_SIZE`: the shuffle data volume.
      // - `PEAK_MEMORY`: the peak memory consumption.
      // - `SCAN_SIZE`: the scan data volume.
      // 
      // > Each result contains only one key that matches the `MetricType` request parameter.
      shared_ptr<map<string, ItemsMetricValuesValue>> metricValues_ {};
      // The parameterized SQL Pattern text. This field is empty or not returned when IncludePattern is set to false. When the text is unavailable, a prompt containing a hash identifier may be returned.
      shared_ptr<string> pattern_ {};
      // The number of query executions for Time 2, in count. This field is returned for the CPU_COST, SHUFFLE_SIZE, PEAK_MEMORY, and SCAN_SIZE dimensions.
      shared_ptr<int64_t> queryCount_ {};
      // The display string of the number of query executions for Time 2. The applicable scope is the same as QueryCount.
      shared_ptr<string> queryCountDisplayValue_ {};
      // The global sequence number in the current filtered and sorted results, starting from 1 and numbered continuously across pages.
      shared_ptr<int64_t> rank_ {};
      // The change level for the current analysis dimension. Valid values:
      // 
      // - `NEW`: A new Pattern. Returned only for NEW reports.
      // - `SLIGHT`: A slight change. The average change rate is in the range of (0%, 20%].
      // - `MODERATE`: A moderate change. The average change rate is in the range of (20%, 50%].
      // - `HIGH`: A high change. The average change rate is in the range of (50%, 100%].
      // - `SEVERE`: A severe change. The average change rate is greater than 100%, or the change represents zero-baseline growth.
      // 
      // > The change level only indicates the magnitude of metric growth and cannot be used alone to determine the cause of a fault.
      shared_ptr<string> riskLevel_ {};
      // The hash identifier of the SQL Pattern, returned as a string. Store and pass this value as a string to avoid precision loss caused by numeric conversion.
      shared_ptr<string> sqlPatternHash_ {};
      // The display string of the total query duration for Time 2, in seconds. This field is returned only for the QUERY_COUNT dimension.
      shared_ptr<string> totalQueryTime_ {};
      // The display string of the total scan duration for Time 2, in seconds. This field is returned only for the SCAN_SIZE dimension.
      shared_ptr<string> totalScanCost_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->metricType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->reportId_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSqlPatternCompareReportResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSqlPatternCompareReportResponseBody::Items>) };
    inline vector<DescribeSqlPatternCompareReportResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSqlPatternCompareReportResponseBody::Items>) };
    inline DescribeSqlPatternCompareReportResponseBody& setItems(const vector<DescribeSqlPatternCompareReportResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSqlPatternCompareReportResponseBody& setItems(vector<DescribeSqlPatternCompareReportResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeSqlPatternCompareReportResponseBody& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSqlPatternCompareReportResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSqlPatternCompareReportResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline int64_t getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, 0L) };
    inline DescribeSqlPatternCompareReportResponseBody& setReportId(int64_t reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlPatternCompareReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSqlPatternCompareReportResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Pattern details on the current page. An empty array is returned if no results match the conditions.
    shared_ptr<vector<DescribeSqlPatternCompareReportResponseBody::Items>> items_ {};
    // The analysis metric. Valid values:
    // 
    // - `QUERY_COUNT`: the number of query executions.
    // - `CPU_COST`: the CPU consumption.
    // - `SHUFFLE_SIZE`: the amount of shuffle data.
    // - `PEAK_MEMORY`: the peak memory consumption.
    // - `SCAN_SIZE`: the amount of scanned data.
    shared_ptr<string> metricType_ {};
    // The page number of the returned page, starting from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries returned per page for this query.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the SQL Pattern comparison report.
    shared_ptr<int64_t> reportId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of Patterns that match the current report, analysis dimension, and change rate filter conditions. This is not the number of entries on the current page.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
