// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREPORTPERFORMANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYREPORTPERFORMANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReportPerformanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReportPerformanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CacheCostTimeAvg, cacheCostTimeAvg_);
      DARABONBA_PTR_TO_JSON(CacheQueryCount, cacheQueryCount_);
      DARABONBA_PTR_TO_JSON(ComponentQueryCount, componentQueryCount_);
      DARABONBA_PTR_TO_JSON(ComponentQueryCountAvg, componentQueryCountAvg_);
      DARABONBA_PTR_TO_JSON(CostTimeAvg, costTimeAvg_);
      DARABONBA_PTR_TO_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_TO_JSON(QueryCountAvg, queryCountAvg_);
      DARABONBA_PTR_TO_JSON(QueryOverFivePercentNum, queryOverFivePercentNum_);
      DARABONBA_PTR_TO_JSON(QueryOverFiveSecPercent, queryOverFiveSecPercent_);
      DARABONBA_PTR_TO_JSON(QueryOverTenSecPercent, queryOverTenSecPercent_);
      DARABONBA_PTR_TO_JSON(QueryOverTenSecPercentNum, queryOverTenSecPercentNum_);
      DARABONBA_PTR_TO_JSON(QueryTimeoutCount, queryTimeoutCount_);
      DARABONBA_PTR_TO_JSON(QueryTimeoutCountPercent, queryTimeoutCountPercent_);
      DARABONBA_PTR_TO_JSON(QuickIndexCostTimeAvg, quickIndexCostTimeAvg_);
      DARABONBA_PTR_TO_JSON(QuickIndexQueryCount, quickIndexQueryCount_);
      DARABONBA_PTR_TO_JSON(RepeatQueryPercent, repeatQueryPercent_);
      DARABONBA_PTR_TO_JSON(RepeatQueryPercentNum, repeatQueryPercentNum_);
      DARABONBA_PTR_TO_JSON(RepeatSqlQueryCount, repeatSqlQueryCount_);
      DARABONBA_PTR_TO_JSON(RepeatSqlQueryPercent, repeatSqlQueryPercent_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportName, reportName_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReportPerformanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheCostTimeAvg, cacheCostTimeAvg_);
      DARABONBA_PTR_FROM_JSON(CacheQueryCount, cacheQueryCount_);
      DARABONBA_PTR_FROM_JSON(ComponentQueryCount, componentQueryCount_);
      DARABONBA_PTR_FROM_JSON(ComponentQueryCountAvg, componentQueryCountAvg_);
      DARABONBA_PTR_FROM_JSON(CostTimeAvg, costTimeAvg_);
      DARABONBA_PTR_FROM_JSON(QueryCount, queryCount_);
      DARABONBA_PTR_FROM_JSON(QueryCountAvg, queryCountAvg_);
      DARABONBA_PTR_FROM_JSON(QueryOverFivePercentNum, queryOverFivePercentNum_);
      DARABONBA_PTR_FROM_JSON(QueryOverFiveSecPercent, queryOverFiveSecPercent_);
      DARABONBA_PTR_FROM_JSON(QueryOverTenSecPercent, queryOverTenSecPercent_);
      DARABONBA_PTR_FROM_JSON(QueryOverTenSecPercentNum, queryOverTenSecPercentNum_);
      DARABONBA_PTR_FROM_JSON(QueryTimeoutCount, queryTimeoutCount_);
      DARABONBA_PTR_FROM_JSON(QueryTimeoutCountPercent, queryTimeoutCountPercent_);
      DARABONBA_PTR_FROM_JSON(QuickIndexCostTimeAvg, quickIndexCostTimeAvg_);
      DARABONBA_PTR_FROM_JSON(QuickIndexQueryCount, quickIndexQueryCount_);
      DARABONBA_PTR_FROM_JSON(RepeatQueryPercent, repeatQueryPercent_);
      DARABONBA_PTR_FROM_JSON(RepeatQueryPercentNum, repeatQueryPercentNum_);
      DARABONBA_PTR_FROM_JSON(RepeatSqlQueryCount, repeatSqlQueryCount_);
      DARABONBA_PTR_FROM_JSON(RepeatSqlQueryPercent, repeatSqlQueryPercent_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportName, reportName_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    QueryReportPerformanceResponseBodyResult() = default ;
    QueryReportPerformanceResponseBodyResult(const QueryReportPerformanceResponseBodyResult &) = default ;
    QueryReportPerformanceResponseBodyResult(QueryReportPerformanceResponseBodyResult &&) = default ;
    QueryReportPerformanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReportPerformanceResponseBodyResult() = default ;
    QueryReportPerformanceResponseBodyResult& operator=(const QueryReportPerformanceResponseBodyResult &) = default ;
    QueryReportPerformanceResponseBodyResult& operator=(QueryReportPerformanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheCostTimeAvg_ == nullptr
        && return this->cacheQueryCount_ == nullptr && return this->componentQueryCount_ == nullptr && return this->componentQueryCountAvg_ == nullptr && return this->costTimeAvg_ == nullptr && return this->queryCount_ == nullptr
        && return this->queryCountAvg_ == nullptr && return this->queryOverFivePercentNum_ == nullptr && return this->queryOverFiveSecPercent_ == nullptr && return this->queryOverTenSecPercent_ == nullptr && return this->queryOverTenSecPercentNum_ == nullptr
        && return this->queryTimeoutCount_ == nullptr && return this->queryTimeoutCountPercent_ == nullptr && return this->quickIndexCostTimeAvg_ == nullptr && return this->quickIndexQueryCount_ == nullptr && return this->repeatQueryPercent_ == nullptr
        && return this->repeatQueryPercentNum_ == nullptr && return this->repeatSqlQueryCount_ == nullptr && return this->repeatSqlQueryPercent_ == nullptr && return this->reportId_ == nullptr && return this->reportName_ == nullptr
        && return this->reportType_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // cacheCostTimeAvg Field Functions 
    bool hasCacheCostTimeAvg() const { return this->cacheCostTimeAvg_ != nullptr;};
    void deleteCacheCostTimeAvg() { this->cacheCostTimeAvg_ = nullptr;};
    inline double cacheCostTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(cacheCostTimeAvg_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setCacheCostTimeAvg(double cacheCostTimeAvg) { DARABONBA_PTR_SET_VALUE(cacheCostTimeAvg_, cacheCostTimeAvg) };


    // cacheQueryCount Field Functions 
    bool hasCacheQueryCount() const { return this->cacheQueryCount_ != nullptr;};
    void deleteCacheQueryCount() { this->cacheQueryCount_ = nullptr;};
    inline int32_t cacheQueryCount() const { DARABONBA_PTR_GET_DEFAULT(cacheQueryCount_, 0) };
    inline QueryReportPerformanceResponseBodyResult& setCacheQueryCount(int32_t cacheQueryCount) { DARABONBA_PTR_SET_VALUE(cacheQueryCount_, cacheQueryCount) };


    // componentQueryCount Field Functions 
    bool hasComponentQueryCount() const { return this->componentQueryCount_ != nullptr;};
    void deleteComponentQueryCount() { this->componentQueryCount_ = nullptr;};
    inline int32_t componentQueryCount() const { DARABONBA_PTR_GET_DEFAULT(componentQueryCount_, 0) };
    inline QueryReportPerformanceResponseBodyResult& setComponentQueryCount(int32_t componentQueryCount) { DARABONBA_PTR_SET_VALUE(componentQueryCount_, componentQueryCount) };


    // componentQueryCountAvg Field Functions 
    bool hasComponentQueryCountAvg() const { return this->componentQueryCountAvg_ != nullptr;};
    void deleteComponentQueryCountAvg() { this->componentQueryCountAvg_ = nullptr;};
    inline double componentQueryCountAvg() const { DARABONBA_PTR_GET_DEFAULT(componentQueryCountAvg_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setComponentQueryCountAvg(double componentQueryCountAvg) { DARABONBA_PTR_SET_VALUE(componentQueryCountAvg_, componentQueryCountAvg) };


    // costTimeAvg Field Functions 
    bool hasCostTimeAvg() const { return this->costTimeAvg_ != nullptr;};
    void deleteCostTimeAvg() { this->costTimeAvg_ = nullptr;};
    inline double costTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(costTimeAvg_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setCostTimeAvg(double costTimeAvg) { DARABONBA_PTR_SET_VALUE(costTimeAvg_, costTimeAvg) };


    // queryCount Field Functions 
    bool hasQueryCount() const { return this->queryCount_ != nullptr;};
    void deleteQueryCount() { this->queryCount_ = nullptr;};
    inline int32_t queryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0) };
    inline QueryReportPerformanceResponseBodyResult& setQueryCount(int32_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


    // queryCountAvg Field Functions 
    bool hasQueryCountAvg() const { return this->queryCountAvg_ != nullptr;};
    void deleteQueryCountAvg() { this->queryCountAvg_ = nullptr;};
    inline double queryCountAvg() const { DARABONBA_PTR_GET_DEFAULT(queryCountAvg_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setQueryCountAvg(double queryCountAvg) { DARABONBA_PTR_SET_VALUE(queryCountAvg_, queryCountAvg) };


    // queryOverFivePercentNum Field Functions 
    bool hasQueryOverFivePercentNum() const { return this->queryOverFivePercentNum_ != nullptr;};
    void deleteQueryOverFivePercentNum() { this->queryOverFivePercentNum_ = nullptr;};
    inline double queryOverFivePercentNum() const { DARABONBA_PTR_GET_DEFAULT(queryOverFivePercentNum_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setQueryOverFivePercentNum(double queryOverFivePercentNum) { DARABONBA_PTR_SET_VALUE(queryOverFivePercentNum_, queryOverFivePercentNum) };


    // queryOverFiveSecPercent Field Functions 
    bool hasQueryOverFiveSecPercent() const { return this->queryOverFiveSecPercent_ != nullptr;};
    void deleteQueryOverFiveSecPercent() { this->queryOverFiveSecPercent_ = nullptr;};
    inline string queryOverFiveSecPercent() const { DARABONBA_PTR_GET_DEFAULT(queryOverFiveSecPercent_, "") };
    inline QueryReportPerformanceResponseBodyResult& setQueryOverFiveSecPercent(string queryOverFiveSecPercent) { DARABONBA_PTR_SET_VALUE(queryOverFiveSecPercent_, queryOverFiveSecPercent) };


    // queryOverTenSecPercent Field Functions 
    bool hasQueryOverTenSecPercent() const { return this->queryOverTenSecPercent_ != nullptr;};
    void deleteQueryOverTenSecPercent() { this->queryOverTenSecPercent_ = nullptr;};
    inline string queryOverTenSecPercent() const { DARABONBA_PTR_GET_DEFAULT(queryOverTenSecPercent_, "") };
    inline QueryReportPerformanceResponseBodyResult& setQueryOverTenSecPercent(string queryOverTenSecPercent) { DARABONBA_PTR_SET_VALUE(queryOverTenSecPercent_, queryOverTenSecPercent) };


    // queryOverTenSecPercentNum Field Functions 
    bool hasQueryOverTenSecPercentNum() const { return this->queryOverTenSecPercentNum_ != nullptr;};
    void deleteQueryOverTenSecPercentNum() { this->queryOverTenSecPercentNum_ = nullptr;};
    inline double queryOverTenSecPercentNum() const { DARABONBA_PTR_GET_DEFAULT(queryOverTenSecPercentNum_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setQueryOverTenSecPercentNum(double queryOverTenSecPercentNum) { DARABONBA_PTR_SET_VALUE(queryOverTenSecPercentNum_, queryOverTenSecPercentNum) };


    // queryTimeoutCount Field Functions 
    bool hasQueryTimeoutCount() const { return this->queryTimeoutCount_ != nullptr;};
    void deleteQueryTimeoutCount() { this->queryTimeoutCount_ = nullptr;};
    inline int32_t queryTimeoutCount() const { DARABONBA_PTR_GET_DEFAULT(queryTimeoutCount_, 0) };
    inline QueryReportPerformanceResponseBodyResult& setQueryTimeoutCount(int32_t queryTimeoutCount) { DARABONBA_PTR_SET_VALUE(queryTimeoutCount_, queryTimeoutCount) };


    // queryTimeoutCountPercent Field Functions 
    bool hasQueryTimeoutCountPercent() const { return this->queryTimeoutCountPercent_ != nullptr;};
    void deleteQueryTimeoutCountPercent() { this->queryTimeoutCountPercent_ = nullptr;};
    inline double queryTimeoutCountPercent() const { DARABONBA_PTR_GET_DEFAULT(queryTimeoutCountPercent_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setQueryTimeoutCountPercent(double queryTimeoutCountPercent) { DARABONBA_PTR_SET_VALUE(queryTimeoutCountPercent_, queryTimeoutCountPercent) };


    // quickIndexCostTimeAvg Field Functions 
    bool hasQuickIndexCostTimeAvg() const { return this->quickIndexCostTimeAvg_ != nullptr;};
    void deleteQuickIndexCostTimeAvg() { this->quickIndexCostTimeAvg_ = nullptr;};
    inline double quickIndexCostTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(quickIndexCostTimeAvg_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setQuickIndexCostTimeAvg(double quickIndexCostTimeAvg) { DARABONBA_PTR_SET_VALUE(quickIndexCostTimeAvg_, quickIndexCostTimeAvg) };


    // quickIndexQueryCount Field Functions 
    bool hasQuickIndexQueryCount() const { return this->quickIndexQueryCount_ != nullptr;};
    void deleteQuickIndexQueryCount() { this->quickIndexQueryCount_ = nullptr;};
    inline int32_t quickIndexQueryCount() const { DARABONBA_PTR_GET_DEFAULT(quickIndexQueryCount_, 0) };
    inline QueryReportPerformanceResponseBodyResult& setQuickIndexQueryCount(int32_t quickIndexQueryCount) { DARABONBA_PTR_SET_VALUE(quickIndexQueryCount_, quickIndexQueryCount) };


    // repeatQueryPercent Field Functions 
    bool hasRepeatQueryPercent() const { return this->repeatQueryPercent_ != nullptr;};
    void deleteRepeatQueryPercent() { this->repeatQueryPercent_ = nullptr;};
    inline string repeatQueryPercent() const { DARABONBA_PTR_GET_DEFAULT(repeatQueryPercent_, "") };
    inline QueryReportPerformanceResponseBodyResult& setRepeatQueryPercent(string repeatQueryPercent) { DARABONBA_PTR_SET_VALUE(repeatQueryPercent_, repeatQueryPercent) };


    // repeatQueryPercentNum Field Functions 
    bool hasRepeatQueryPercentNum() const { return this->repeatQueryPercentNum_ != nullptr;};
    void deleteRepeatQueryPercentNum() { this->repeatQueryPercentNum_ = nullptr;};
    inline double repeatQueryPercentNum() const { DARABONBA_PTR_GET_DEFAULT(repeatQueryPercentNum_, 0.0) };
    inline QueryReportPerformanceResponseBodyResult& setRepeatQueryPercentNum(double repeatQueryPercentNum) { DARABONBA_PTR_SET_VALUE(repeatQueryPercentNum_, repeatQueryPercentNum) };


    // repeatSqlQueryCount Field Functions 
    bool hasRepeatSqlQueryCount() const { return this->repeatSqlQueryCount_ != nullptr;};
    void deleteRepeatSqlQueryCount() { this->repeatSqlQueryCount_ = nullptr;};
    inline int32_t repeatSqlQueryCount() const { DARABONBA_PTR_GET_DEFAULT(repeatSqlQueryCount_, 0) };
    inline QueryReportPerformanceResponseBodyResult& setRepeatSqlQueryCount(int32_t repeatSqlQueryCount) { DARABONBA_PTR_SET_VALUE(repeatSqlQueryCount_, repeatSqlQueryCount) };


    // repeatSqlQueryPercent Field Functions 
    bool hasRepeatSqlQueryPercent() const { return this->repeatSqlQueryPercent_ != nullptr;};
    void deleteRepeatSqlQueryPercent() { this->repeatSqlQueryPercent_ = nullptr;};
    inline string repeatSqlQueryPercent() const { DARABONBA_PTR_GET_DEFAULT(repeatSqlQueryPercent_, "") };
    inline QueryReportPerformanceResponseBodyResult& setRepeatSqlQueryPercent(string repeatSqlQueryPercent) { DARABONBA_PTR_SET_VALUE(repeatSqlQueryPercent_, repeatSqlQueryPercent) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline QueryReportPerformanceResponseBodyResult& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportName Field Functions 
    bool hasReportName() const { return this->reportName_ != nullptr;};
    void deleteReportName() { this->reportName_ = nullptr;};
    inline string reportName() const { DARABONBA_PTR_GET_DEFAULT(reportName_, "") };
    inline QueryReportPerformanceResponseBodyResult& setReportName(string reportName) { DARABONBA_PTR_SET_VALUE(reportName_, reportName) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline QueryReportPerformanceResponseBodyResult& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryReportPerformanceResponseBodyResult& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline QueryReportPerformanceResponseBodyResult& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The average duration of cache hits.
    std::shared_ptr<double> cacheCostTimeAvg_ = nullptr;
    // The number of cache hits.
    std::shared_ptr<int32_t> cacheQueryCount_ = nullptr;
    // The number of times the chart is queried.
    std::shared_ptr<int32_t> componentQueryCount_ = nullptr;
    // The average number of times the chart is queried.
    std::shared_ptr<double> componentQueryCountAvg_ = nullptr;
    // The average query duration associated with the SQL pattern.
    std::shared_ptr<double> costTimeAvg_ = nullptr;
    // The number of queries.
    std::shared_ptr<int32_t> queryCount_ = nullptr;
    // The average number of queries.
    std::shared_ptr<double> queryCountAvg_ = nullptr;
    // The percentage of the number of queries that exceed the 5S.
    std::shared_ptr<double> queryOverFivePercentNum_ = nullptr;
    // Query the proportion of more than 5S.
    std::shared_ptr<string> queryOverFiveSecPercent_ = nullptr;
    // The percentage of queries that exceed 10s.
    std::shared_ptr<string> queryOverTenSecPercent_ = nullptr;
    // The number of queries that exceed 10 seconds.
    std::shared_ptr<double> queryOverTenSecPercentNum_ = nullptr;
    // The number of times that the chart query times out.
    std::shared_ptr<int32_t> queryTimeoutCount_ = nullptr;
    // The percentage of timeout times for chart queries.
    std::shared_ptr<double> queryTimeoutCountPercent_ = nullptr;
    // The average time consumed by the Quick engine query.
    std::shared_ptr<double> quickIndexCostTimeAvg_ = nullptr;
    // The number of times that the Quick engine is hit.
    std::shared_ptr<int32_t> quickIndexQueryCount_ = nullptr;
    // The proportion of duplicate queries.
    std::shared_ptr<string> repeatQueryPercent_ = nullptr;
    // The number of duplicate queries.
    std::shared_ptr<double> repeatQueryPercentNum_ = nullptr;
    // The number of times the query is repeated.
    std::shared_ptr<int32_t> repeatSqlQueryCount_ = nullptr;
    // The proportion of duplicate queries.
    std::shared_ptr<string> repeatSqlQueryPercent_ = nullptr;
    // The ID of the work.
    std::shared_ptr<string> reportId_ = nullptr;
    // The name of the report.
    std::shared_ptr<string> reportName_ = nullptr;
    // The format of the report.
    std::shared_ptr<string> reportType_ = nullptr;
    // The ID of the workspace to which the work belongs.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
