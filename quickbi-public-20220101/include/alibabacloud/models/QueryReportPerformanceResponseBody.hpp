// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREPORTPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYREPORTPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryReportPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReportPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReportPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryReportPerformanceResponseBody() = default ;
    QueryReportPerformanceResponseBody(const QueryReportPerformanceResponseBody &) = default ;
    QueryReportPerformanceResponseBody(QueryReportPerformanceResponseBody &&) = default ;
    QueryReportPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReportPerformanceResponseBody() = default ;
    QueryReportPerformanceResponseBody& operator=(const QueryReportPerformanceResponseBody &) = default ;
    QueryReportPerformanceResponseBody& operator=(QueryReportPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cacheCostTimeAvg_ == nullptr
        && this->cacheQueryCount_ == nullptr && this->componentQueryCount_ == nullptr && this->componentQueryCountAvg_ == nullptr && this->costTimeAvg_ == nullptr && this->queryCount_ == nullptr
        && this->queryCountAvg_ == nullptr && this->queryOverFivePercentNum_ == nullptr && this->queryOverFiveSecPercent_ == nullptr && this->queryOverTenSecPercent_ == nullptr && this->queryOverTenSecPercentNum_ == nullptr
        && this->queryTimeoutCount_ == nullptr && this->queryTimeoutCountPercent_ == nullptr && this->quickIndexCostTimeAvg_ == nullptr && this->quickIndexQueryCount_ == nullptr && this->repeatQueryPercent_ == nullptr
        && this->repeatQueryPercentNum_ == nullptr && this->repeatSqlQueryCount_ == nullptr && this->repeatSqlQueryPercent_ == nullptr && this->reportId_ == nullptr && this->reportName_ == nullptr
        && this->reportType_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
      // cacheCostTimeAvg Field Functions 
      bool hasCacheCostTimeAvg() const { return this->cacheCostTimeAvg_ != nullptr;};
      void deleteCacheCostTimeAvg() { this->cacheCostTimeAvg_ = nullptr;};
      inline double getCacheCostTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(cacheCostTimeAvg_, 0.0) };
      inline Result& setCacheCostTimeAvg(double cacheCostTimeAvg) { DARABONBA_PTR_SET_VALUE(cacheCostTimeAvg_, cacheCostTimeAvg) };


      // cacheQueryCount Field Functions 
      bool hasCacheQueryCount() const { return this->cacheQueryCount_ != nullptr;};
      void deleteCacheQueryCount() { this->cacheQueryCount_ = nullptr;};
      inline int32_t getCacheQueryCount() const { DARABONBA_PTR_GET_DEFAULT(cacheQueryCount_, 0) };
      inline Result& setCacheQueryCount(int32_t cacheQueryCount) { DARABONBA_PTR_SET_VALUE(cacheQueryCount_, cacheQueryCount) };


      // componentQueryCount Field Functions 
      bool hasComponentQueryCount() const { return this->componentQueryCount_ != nullptr;};
      void deleteComponentQueryCount() { this->componentQueryCount_ = nullptr;};
      inline int32_t getComponentQueryCount() const { DARABONBA_PTR_GET_DEFAULT(componentQueryCount_, 0) };
      inline Result& setComponentQueryCount(int32_t componentQueryCount) { DARABONBA_PTR_SET_VALUE(componentQueryCount_, componentQueryCount) };


      // componentQueryCountAvg Field Functions 
      bool hasComponentQueryCountAvg() const { return this->componentQueryCountAvg_ != nullptr;};
      void deleteComponentQueryCountAvg() { this->componentQueryCountAvg_ = nullptr;};
      inline double getComponentQueryCountAvg() const { DARABONBA_PTR_GET_DEFAULT(componentQueryCountAvg_, 0.0) };
      inline Result& setComponentQueryCountAvg(double componentQueryCountAvg) { DARABONBA_PTR_SET_VALUE(componentQueryCountAvg_, componentQueryCountAvg) };


      // costTimeAvg Field Functions 
      bool hasCostTimeAvg() const { return this->costTimeAvg_ != nullptr;};
      void deleteCostTimeAvg() { this->costTimeAvg_ = nullptr;};
      inline double getCostTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(costTimeAvg_, 0.0) };
      inline Result& setCostTimeAvg(double costTimeAvg) { DARABONBA_PTR_SET_VALUE(costTimeAvg_, costTimeAvg) };


      // queryCount Field Functions 
      bool hasQueryCount() const { return this->queryCount_ != nullptr;};
      void deleteQueryCount() { this->queryCount_ = nullptr;};
      inline int32_t getQueryCount() const { DARABONBA_PTR_GET_DEFAULT(queryCount_, 0) };
      inline Result& setQueryCount(int32_t queryCount) { DARABONBA_PTR_SET_VALUE(queryCount_, queryCount) };


      // queryCountAvg Field Functions 
      bool hasQueryCountAvg() const { return this->queryCountAvg_ != nullptr;};
      void deleteQueryCountAvg() { this->queryCountAvg_ = nullptr;};
      inline double getQueryCountAvg() const { DARABONBA_PTR_GET_DEFAULT(queryCountAvg_, 0.0) };
      inline Result& setQueryCountAvg(double queryCountAvg) { DARABONBA_PTR_SET_VALUE(queryCountAvg_, queryCountAvg) };


      // queryOverFivePercentNum Field Functions 
      bool hasQueryOverFivePercentNum() const { return this->queryOverFivePercentNum_ != nullptr;};
      void deleteQueryOverFivePercentNum() { this->queryOverFivePercentNum_ = nullptr;};
      inline double getQueryOverFivePercentNum() const { DARABONBA_PTR_GET_DEFAULT(queryOverFivePercentNum_, 0.0) };
      inline Result& setQueryOverFivePercentNum(double queryOverFivePercentNum) { DARABONBA_PTR_SET_VALUE(queryOverFivePercentNum_, queryOverFivePercentNum) };


      // queryOverFiveSecPercent Field Functions 
      bool hasQueryOverFiveSecPercent() const { return this->queryOverFiveSecPercent_ != nullptr;};
      void deleteQueryOverFiveSecPercent() { this->queryOverFiveSecPercent_ = nullptr;};
      inline string getQueryOverFiveSecPercent() const { DARABONBA_PTR_GET_DEFAULT(queryOverFiveSecPercent_, "") };
      inline Result& setQueryOverFiveSecPercent(string queryOverFiveSecPercent) { DARABONBA_PTR_SET_VALUE(queryOverFiveSecPercent_, queryOverFiveSecPercent) };


      // queryOverTenSecPercent Field Functions 
      bool hasQueryOverTenSecPercent() const { return this->queryOverTenSecPercent_ != nullptr;};
      void deleteQueryOverTenSecPercent() { this->queryOverTenSecPercent_ = nullptr;};
      inline string getQueryOverTenSecPercent() const { DARABONBA_PTR_GET_DEFAULT(queryOverTenSecPercent_, "") };
      inline Result& setQueryOverTenSecPercent(string queryOverTenSecPercent) { DARABONBA_PTR_SET_VALUE(queryOverTenSecPercent_, queryOverTenSecPercent) };


      // queryOverTenSecPercentNum Field Functions 
      bool hasQueryOverTenSecPercentNum() const { return this->queryOverTenSecPercentNum_ != nullptr;};
      void deleteQueryOverTenSecPercentNum() { this->queryOverTenSecPercentNum_ = nullptr;};
      inline double getQueryOverTenSecPercentNum() const { DARABONBA_PTR_GET_DEFAULT(queryOverTenSecPercentNum_, 0.0) };
      inline Result& setQueryOverTenSecPercentNum(double queryOverTenSecPercentNum) { DARABONBA_PTR_SET_VALUE(queryOverTenSecPercentNum_, queryOverTenSecPercentNum) };


      // queryTimeoutCount Field Functions 
      bool hasQueryTimeoutCount() const { return this->queryTimeoutCount_ != nullptr;};
      void deleteQueryTimeoutCount() { this->queryTimeoutCount_ = nullptr;};
      inline int32_t getQueryTimeoutCount() const { DARABONBA_PTR_GET_DEFAULT(queryTimeoutCount_, 0) };
      inline Result& setQueryTimeoutCount(int32_t queryTimeoutCount) { DARABONBA_PTR_SET_VALUE(queryTimeoutCount_, queryTimeoutCount) };


      // queryTimeoutCountPercent Field Functions 
      bool hasQueryTimeoutCountPercent() const { return this->queryTimeoutCountPercent_ != nullptr;};
      void deleteQueryTimeoutCountPercent() { this->queryTimeoutCountPercent_ = nullptr;};
      inline double getQueryTimeoutCountPercent() const { DARABONBA_PTR_GET_DEFAULT(queryTimeoutCountPercent_, 0.0) };
      inline Result& setQueryTimeoutCountPercent(double queryTimeoutCountPercent) { DARABONBA_PTR_SET_VALUE(queryTimeoutCountPercent_, queryTimeoutCountPercent) };


      // quickIndexCostTimeAvg Field Functions 
      bool hasQuickIndexCostTimeAvg() const { return this->quickIndexCostTimeAvg_ != nullptr;};
      void deleteQuickIndexCostTimeAvg() { this->quickIndexCostTimeAvg_ = nullptr;};
      inline double getQuickIndexCostTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(quickIndexCostTimeAvg_, 0.0) };
      inline Result& setQuickIndexCostTimeAvg(double quickIndexCostTimeAvg) { DARABONBA_PTR_SET_VALUE(quickIndexCostTimeAvg_, quickIndexCostTimeAvg) };


      // quickIndexQueryCount Field Functions 
      bool hasQuickIndexQueryCount() const { return this->quickIndexQueryCount_ != nullptr;};
      void deleteQuickIndexQueryCount() { this->quickIndexQueryCount_ = nullptr;};
      inline int32_t getQuickIndexQueryCount() const { DARABONBA_PTR_GET_DEFAULT(quickIndexQueryCount_, 0) };
      inline Result& setQuickIndexQueryCount(int32_t quickIndexQueryCount) { DARABONBA_PTR_SET_VALUE(quickIndexQueryCount_, quickIndexQueryCount) };


      // repeatQueryPercent Field Functions 
      bool hasRepeatQueryPercent() const { return this->repeatQueryPercent_ != nullptr;};
      void deleteRepeatQueryPercent() { this->repeatQueryPercent_ = nullptr;};
      inline string getRepeatQueryPercent() const { DARABONBA_PTR_GET_DEFAULT(repeatQueryPercent_, "") };
      inline Result& setRepeatQueryPercent(string repeatQueryPercent) { DARABONBA_PTR_SET_VALUE(repeatQueryPercent_, repeatQueryPercent) };


      // repeatQueryPercentNum Field Functions 
      bool hasRepeatQueryPercentNum() const { return this->repeatQueryPercentNum_ != nullptr;};
      void deleteRepeatQueryPercentNum() { this->repeatQueryPercentNum_ = nullptr;};
      inline double getRepeatQueryPercentNum() const { DARABONBA_PTR_GET_DEFAULT(repeatQueryPercentNum_, 0.0) };
      inline Result& setRepeatQueryPercentNum(double repeatQueryPercentNum) { DARABONBA_PTR_SET_VALUE(repeatQueryPercentNum_, repeatQueryPercentNum) };


      // repeatSqlQueryCount Field Functions 
      bool hasRepeatSqlQueryCount() const { return this->repeatSqlQueryCount_ != nullptr;};
      void deleteRepeatSqlQueryCount() { this->repeatSqlQueryCount_ = nullptr;};
      inline int32_t getRepeatSqlQueryCount() const { DARABONBA_PTR_GET_DEFAULT(repeatSqlQueryCount_, 0) };
      inline Result& setRepeatSqlQueryCount(int32_t repeatSqlQueryCount) { DARABONBA_PTR_SET_VALUE(repeatSqlQueryCount_, repeatSqlQueryCount) };


      // repeatSqlQueryPercent Field Functions 
      bool hasRepeatSqlQueryPercent() const { return this->repeatSqlQueryPercent_ != nullptr;};
      void deleteRepeatSqlQueryPercent() { this->repeatSqlQueryPercent_ = nullptr;};
      inline string getRepeatSqlQueryPercent() const { DARABONBA_PTR_GET_DEFAULT(repeatSqlQueryPercent_, "") };
      inline Result& setRepeatSqlQueryPercent(string repeatSqlQueryPercent) { DARABONBA_PTR_SET_VALUE(repeatSqlQueryPercent_, repeatSqlQueryPercent) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline Result& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportName Field Functions 
      bool hasReportName() const { return this->reportName_ != nullptr;};
      void deleteReportName() { this->reportName_ = nullptr;};
      inline string getReportName() const { DARABONBA_PTR_GET_DEFAULT(reportName_, "") };
      inline Result& setReportName(string reportName) { DARABONBA_PTR_SET_VALUE(reportName_, reportName) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Result& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Result& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // The average duration of cache hits.
      shared_ptr<double> cacheCostTimeAvg_ {};
      // The number of cache hits.
      shared_ptr<int32_t> cacheQueryCount_ {};
      // The number of times the chart is queried.
      shared_ptr<int32_t> componentQueryCount_ {};
      // The average number of times the chart is queried.
      shared_ptr<double> componentQueryCountAvg_ {};
      // The average query duration associated with the SQL pattern.
      shared_ptr<double> costTimeAvg_ {};
      // The number of queries.
      shared_ptr<int32_t> queryCount_ {};
      // The average number of queries.
      shared_ptr<double> queryCountAvg_ {};
      // The percentage of the number of queries that exceed the 5S.
      shared_ptr<double> queryOverFivePercentNum_ {};
      // Query the proportion of more than 5S.
      shared_ptr<string> queryOverFiveSecPercent_ {};
      // The percentage of queries that exceed 10s.
      shared_ptr<string> queryOverTenSecPercent_ {};
      // The number of queries that exceed 10 seconds.
      shared_ptr<double> queryOverTenSecPercentNum_ {};
      // The number of times that the chart query times out.
      shared_ptr<int32_t> queryTimeoutCount_ {};
      // The percentage of timeout times for chart queries.
      shared_ptr<double> queryTimeoutCountPercent_ {};
      // The average time consumed by the Quick engine query.
      shared_ptr<double> quickIndexCostTimeAvg_ {};
      // The number of times that the Quick engine is hit.
      shared_ptr<int32_t> quickIndexQueryCount_ {};
      // The proportion of duplicate queries.
      shared_ptr<string> repeatQueryPercent_ {};
      // The number of duplicate queries.
      shared_ptr<double> repeatQueryPercentNum_ {};
      // The number of times the query is repeated.
      shared_ptr<int32_t> repeatSqlQueryCount_ {};
      // The proportion of duplicate queries.
      shared_ptr<string> repeatSqlQueryPercent_ {};
      // The ID of the work.
      shared_ptr<string> reportId_ {};
      // The name of the report.
      shared_ptr<string> reportName_ {};
      // The format of the report.
      shared_ptr<string> reportType_ {};
      // The ID of the workspace to which the work belongs.
      shared_ptr<string> workspaceId_ {};
      // The name of the group.
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryReportPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryReportPerformanceResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryReportPerformanceResponseBody::Result>) };
    inline vector<QueryReportPerformanceResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryReportPerformanceResponseBody::Result>) };
    inline QueryReportPerformanceResponseBody& setResult(const vector<QueryReportPerformanceResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryReportPerformanceResponseBody& setResult(vector<QueryReportPerformanceResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryReportPerformanceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The returned results.
    shared_ptr<vector<QueryReportPerformanceResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
