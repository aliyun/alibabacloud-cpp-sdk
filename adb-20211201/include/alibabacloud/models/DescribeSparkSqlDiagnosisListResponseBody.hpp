// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPARKSQLDIAGNOSISLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeSparkSQLDiagnosisListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSparkSQLDiagnosisListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLDiagnosisList, SQLDiagnosisList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSparkSQLDiagnosisListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLDiagnosisList, SQLDiagnosisList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSparkSQLDiagnosisListResponseBody() = default ;
    DescribeSparkSQLDiagnosisListResponseBody(const DescribeSparkSQLDiagnosisListResponseBody &) = default ;
    DescribeSparkSQLDiagnosisListResponseBody(DescribeSparkSQLDiagnosisListResponseBody &&) = default ;
    DescribeSparkSQLDiagnosisListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSparkSQLDiagnosisListResponseBody() = default ;
    DescribeSparkSQLDiagnosisListResponseBody& operator=(const DescribeSparkSQLDiagnosisListResponseBody &) = default ;
    DescribeSparkSQLDiagnosisListResponseBody& operator=(DescribeSparkSQLDiagnosisListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SQLDiagnosisList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SQLDiagnosisList& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(InnerQueryId, innerQueryId_);
        DARABONBA_PTR_TO_JSON(MaxExclusiveTime, maxExclusiveTime_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(SQL, SQL_);
        DARABONBA_PTR_TO_JSON(ScanRowCount, scanRowCount_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(StatementId, statementId_);
      };
      friend void from_json(const Darabonba::Json& j, SQLDiagnosisList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(InnerQueryId, innerQueryId_);
        DARABONBA_PTR_FROM_JSON(MaxExclusiveTime, maxExclusiveTime_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(SQL, SQL_);
        DARABONBA_PTR_FROM_JSON(ScanRowCount, scanRowCount_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(StatementId, statementId_);
      };
      SQLDiagnosisList() = default ;
      SQLDiagnosisList(const SQLDiagnosisList &) = default ;
      SQLDiagnosisList(SQLDiagnosisList &&) = default ;
      SQLDiagnosisList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SQLDiagnosisList() = default ;
      SQLDiagnosisList& operator=(const SQLDiagnosisList &) = default ;
      SQLDiagnosisList& operator=(SQLDiagnosisList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->elapsedTime_ == nullptr && this->innerQueryId_ == nullptr && this->maxExclusiveTime_ == nullptr && this->peakMemory_ == nullptr && this->SQL_ == nullptr
        && this->scanRowCount_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr && this->statementId_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline SQLDiagnosisList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline SQLDiagnosisList& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // innerQueryId Field Functions 
      bool hasInnerQueryId() const { return this->innerQueryId_ != nullptr;};
      void deleteInnerQueryId() { this->innerQueryId_ = nullptr;};
      inline int64_t getInnerQueryId() const { DARABONBA_PTR_GET_DEFAULT(innerQueryId_, 0L) };
      inline SQLDiagnosisList& setInnerQueryId(int64_t innerQueryId) { DARABONBA_PTR_SET_VALUE(innerQueryId_, innerQueryId) };


      // maxExclusiveTime Field Functions 
      bool hasMaxExclusiveTime() const { return this->maxExclusiveTime_ != nullptr;};
      void deleteMaxExclusiveTime() { this->maxExclusiveTime_ = nullptr;};
      inline int64_t getMaxExclusiveTime() const { DARABONBA_PTR_GET_DEFAULT(maxExclusiveTime_, 0L) };
      inline SQLDiagnosisList& setMaxExclusiveTime(int64_t maxExclusiveTime) { DARABONBA_PTR_SET_VALUE(maxExclusiveTime_, maxExclusiveTime) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline SQLDiagnosisList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // SQL Field Functions 
      bool hasSQL() const { return this->SQL_ != nullptr;};
      void deleteSQL() { this->SQL_ = nullptr;};
      inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
      inline SQLDiagnosisList& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


      // scanRowCount Field Functions 
      bool hasScanRowCount() const { return this->scanRowCount_ != nullptr;};
      void deleteScanRowCount() { this->scanRowCount_ = nullptr;};
      inline int64_t getScanRowCount() const { DARABONBA_PTR_GET_DEFAULT(scanRowCount_, 0L) };
      inline SQLDiagnosisList& setScanRowCount(int64_t scanRowCount) { DARABONBA_PTR_SET_VALUE(scanRowCount_, scanRowCount) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline SQLDiagnosisList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SQLDiagnosisList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // statementId Field Functions 
      bool hasStatementId() const { return this->statementId_ != nullptr;};
      void deleteStatementId() { this->statementId_ = nullptr;};
      inline int64_t getStatementId() const { DARABONBA_PTR_GET_DEFAULT(statementId_, 0L) };
      inline SQLDiagnosisList& setStatementId(int64_t statementId) { DARABONBA_PTR_SET_VALUE(statementId_, statementId) };


    protected:
      // The application ID.
      // 
      // >  You can call the [ListSparkApps](https://help.aliyun.com/document_detail/612475.html) operation to query a list of Spark application IDs.
      shared_ptr<string> appId_ {};
      // The execution duration of the query. Unit: milliseconds.
      shared_ptr<int64_t> elapsedTime_ {};
      // The ID of the query executed within the Spark application.
      shared_ptr<int64_t> innerQueryId_ {};
      // The maximum operator execution duration. Unit: milliseconds.
      shared_ptr<int64_t> maxExclusiveTime_ {};
      // The maximum operator memory used. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The SQL statement.
      shared_ptr<string> SQL_ {};
      // The number of entries scanned.
      shared_ptr<int64_t> scanRowCount_ {};
      // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The execution status of the query. Valid values:
      // 
      // *   COMPLETED
      // *   CANCELED
      // *   ABORTED
      // *   FAILED
      shared_ptr<string> state_ {};
      // The unique ID of the code block in the Spark job.
      shared_ptr<int64_t> statementId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->SQLDiagnosisList_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSparkSQLDiagnosisListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLDiagnosisList Field Functions 
    bool hasSQLDiagnosisList() const { return this->SQLDiagnosisList_ != nullptr;};
    void deleteSQLDiagnosisList() { this->SQLDiagnosisList_ = nullptr;};
    inline const vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList> & getSQLDiagnosisList() const { DARABONBA_PTR_GET_CONST(SQLDiagnosisList_, vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList>) };
    inline vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList> getSQLDiagnosisList() { DARABONBA_PTR_GET(SQLDiagnosisList_, vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList>) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setSQLDiagnosisList(const vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList> & sQLDiagnosisList) { DARABONBA_PTR_SET_VALUE(SQLDiagnosisList_, sQLDiagnosisList) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setSQLDiagnosisList(vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList> && sQLDiagnosisList) { DARABONBA_PTR_SET_RVALUE(SQLDiagnosisList_, sQLDiagnosisList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSparkSQLDiagnosisListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried diagnostic information.
    shared_ptr<vector<DescribeSparkSQLDiagnosisListResponseBody::SQLDiagnosisList>> SQLDiagnosisList_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
