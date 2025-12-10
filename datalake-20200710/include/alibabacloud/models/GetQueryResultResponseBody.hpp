// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetQueryResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobCompleted, jobCompleted_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultTmpDb, resultTmpDb_);
      DARABONBA_PTR_TO_JSON(ResultTmpTable, resultTmpTable_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(RowCountOverLimit, rowCountOverLimit_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalBytesProcessed, totalBytesProcessed_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobCompleted, jobCompleted_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultTmpDb, resultTmpDb_);
      DARABONBA_PTR_FROM_JSON(ResultTmpTable, resultTmpTable_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(RowCountOverLimit, rowCountOverLimit_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalBytesProcessed, totalBytesProcessed_);
    };
    GetQueryResultResponseBody() = default ;
    GetQueryResultResponseBody(const GetQueryResultResponseBody &) = default ;
    GetQueryResultResponseBody(GetQueryResultResponseBody &&) = default ;
    GetQueryResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryResultResponseBody() = default ;
    GetQueryResultResponseBody& operator=(const GetQueryResultResponseBody &) = default ;
    GetQueryResultResponseBody& operator=(GetQueryResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->endTime_ == nullptr && return this->errorMessage_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr
        && return this->jobCompleted_ == nullptr && return this->logs_ == nullptr && return this->owner_ == nullptr && return this->progress_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr && return this->resultTmpDb_ == nullptr && return this->resultTmpTable_ == nullptr && return this->rowCount_ == nullptr && return this->rowCountOverLimit_ == nullptr
        && return this->rows_ == nullptr && return this->schema_ == nullptr && return this->sql_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr
        && return this->success_ == nullptr && return this->totalBytesProcessed_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline GetQueryResultResponseBody& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetQueryResultResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetQueryResultResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetQueryResultResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetQueryResultResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetQueryResultResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobCompleted Field Functions 
    bool hasJobCompleted() const { return this->jobCompleted_ != nullptr;};
    void deleteJobCompleted() { this->jobCompleted_ = nullptr;};
    inline bool jobCompleted() const { DARABONBA_PTR_GET_DEFAULT(jobCompleted_, false) };
    inline GetQueryResultResponseBody& setJobCompleted(bool jobCompleted) { DARABONBA_PTR_SET_VALUE(jobCompleted_, jobCompleted) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline string logs() const { DARABONBA_PTR_GET_DEFAULT(logs_, "") };
    inline GetQueryResultResponseBody& setLogs(string logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline int64_t owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, 0L) };
    inline GetQueryResultResponseBody& setOwner(int64_t owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline GetQueryResultResponseBody& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetQueryResultResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueryResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultTmpDb Field Functions 
    bool hasResultTmpDb() const { return this->resultTmpDb_ != nullptr;};
    void deleteResultTmpDb() { this->resultTmpDb_ = nullptr;};
    inline string resultTmpDb() const { DARABONBA_PTR_GET_DEFAULT(resultTmpDb_, "") };
    inline GetQueryResultResponseBody& setResultTmpDb(string resultTmpDb) { DARABONBA_PTR_SET_VALUE(resultTmpDb_, resultTmpDb) };


    // resultTmpTable Field Functions 
    bool hasResultTmpTable() const { return this->resultTmpTable_ != nullptr;};
    void deleteResultTmpTable() { this->resultTmpTable_ = nullptr;};
    inline string resultTmpTable() const { DARABONBA_PTR_GET_DEFAULT(resultTmpTable_, "") };
    inline GetQueryResultResponseBody& setResultTmpTable(string resultTmpTable) { DARABONBA_PTR_SET_VALUE(resultTmpTable_, resultTmpTable) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int32_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
    inline GetQueryResultResponseBody& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // rowCountOverLimit Field Functions 
    bool hasRowCountOverLimit() const { return this->rowCountOverLimit_ != nullptr;};
    void deleteRowCountOverLimit() { this->rowCountOverLimit_ = nullptr;};
    inline bool rowCountOverLimit() const { DARABONBA_PTR_GET_DEFAULT(rowCountOverLimit_, false) };
    inline GetQueryResultResponseBody& setRowCountOverLimit(bool rowCountOverLimit) { DARABONBA_PTR_SET_VALUE(rowCountOverLimit_, rowCountOverLimit) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline string rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, "") };
    inline GetQueryResultResponseBody& setRows(string rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline GetQueryResultResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline GetQueryResultResponseBody& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetQueryResultResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQueryResultResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetQueryResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalBytesProcessed Field Functions 
    bool hasTotalBytesProcessed() const { return this->totalBytesProcessed_ != nullptr;};
    void deleteTotalBytesProcessed() { this->totalBytesProcessed_ = nullptr;};
    inline int64_t totalBytesProcessed() const { DARABONBA_PTR_GET_DEFAULT(totalBytesProcessed_, 0L) };
    inline GetQueryResultResponseBody& setTotalBytesProcessed(int64_t totalBytesProcessed) { DARABONBA_PTR_SET_VALUE(totalBytesProcessed_, totalBytesProcessed) };


  protected:
    // up time in milliseconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The time when the query was completed.
    std::shared_ptr<string> endTime_ = nullptr;
    // The error message of the query.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The time when the query was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the query result was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The query ID.
    std::shared_ptr<string> id_ = nullptr;
    // Whether the query has been completed. false indicates that you need to continue polling this interface.
    std::shared_ptr<bool> jobCompleted_ = nullptr;
    // Run logs.
    std::shared_ptr<string> logs_ = nullptr;
    // The uid of the primary account of the creator.
    std::shared_ptr<int64_t> owner_ = nullptr;
    // The progress of the query. The value ranges from 0 to 100.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result temporary library is not available.
    std::shared_ptr<string> resultTmpDb_ = nullptr;
    // The result temporary table, which is not available.
    std::shared_ptr<string> resultTmpTable_ = nullptr;
    // The total number of rows in the result. This parameter is returned only when the status is AVAILABLE.
    std::shared_ptr<int32_t> rowCount_ = nullptr;
    // Whether the total number of rows in the result exceeds the maximum value.
    std::shared_ptr<bool> rowCountOverLimit_ = nullptr;
    // The returned result. This value is returned only when the status is AVAILABLE. The content is represented as a two-dimensional JSON array.
    std::shared_ptr<string> rows_ = nullptr;
    // The header field and type of the query result. This parameter is returned only when the status is AVAILABLE.
    std::shared_ptr<string> schema_ = nullptr;
    // The original SQL statement.
    std::shared_ptr<string> sql_ = nullptr;
    // The point in time when the query was initiated.
    std::shared_ptr<string> startTime_ = nullptr;
    // The query status.
    // 
    // Valid values:
    // 
    // *   AVAILABLE
    // *   CANCELLED: The has canceled.
    // *   RUNNING: The is running.
    // *   CANCELLING: The is being canceled.
    // *   WAITING: The is waiting for.
    // *   ERROR
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The total amount of data scanned. Unit: bytes.
    std::shared_ptr<int64_t> totalBytesProcessed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
