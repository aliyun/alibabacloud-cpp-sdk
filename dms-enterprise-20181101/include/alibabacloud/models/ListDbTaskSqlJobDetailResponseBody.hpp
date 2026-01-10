// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBTaskSQLJobDetailList, DBTaskSQLJobDetailList_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBTaskSQLJobDetailList, DBTaskSQLJobDetailList_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDBTaskSQLJobDetailResponseBody() = default ;
    ListDBTaskSQLJobDetailResponseBody(const ListDBTaskSQLJobDetailResponseBody &) = default ;
    ListDBTaskSQLJobDetailResponseBody(ListDBTaskSQLJobDetailResponseBody &&) = default ;
    ListDBTaskSQLJobDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobDetailResponseBody() = default ;
    ListDBTaskSQLJobDetailResponseBody& operator=(const ListDBTaskSQLJobDetailResponseBody &) = default ;
    ListDBTaskSQLJobDetailResponseBody& operator=(ListDBTaskSQLJobDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBTaskSQLJobDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBTaskSQLJobDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_TO_JSON(CurrentSql, currentSql_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(ExecuteCount, executeCount_);
        DARABONBA_PTR_TO_JSON(JobDetailId, jobDetailId_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(Log, log_);
        DARABONBA_PTR_TO_JSON(Logic, logic_);
        DARABONBA_PTR_TO_JSON(Skip, skip_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TimeDelay, timeDelay_);
      };
      friend void from_json(const Darabonba::Json& j, DBTaskSQLJobDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_FROM_JSON(CurrentSql, currentSql_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(ExecuteCount, executeCount_);
        DARABONBA_PTR_FROM_JSON(JobDetailId, jobDetailId_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(Log, log_);
        DARABONBA_PTR_FROM_JSON(Logic, logic_);
        DARABONBA_PTR_FROM_JSON(Skip, skip_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TimeDelay, timeDelay_);
      };
      DBTaskSQLJobDetailList() = default ;
      DBTaskSQLJobDetailList(const DBTaskSQLJobDetailList &) = default ;
      DBTaskSQLJobDetailList(DBTaskSQLJobDetailList &&) = default ;
      DBTaskSQLJobDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBTaskSQLJobDetailList() = default ;
      DBTaskSQLJobDetailList& operator=(const DBTaskSQLJobDetailList &) = default ;
      DBTaskSQLJobDetailList& operator=(DBTaskSQLJobDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->currentSql_ == nullptr && this->dbId_ == nullptr && this->endTime_ == nullptr && this->executeCount_ == nullptr && this->jobDetailId_ == nullptr
        && this->jobId_ == nullptr && this->log_ == nullptr && this->logic_ == nullptr && this->skip_ == nullptr && this->sqlType_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->timeDelay_ == nullptr; };
      // affectRows Field Functions 
      bool hasAffectRows() const { return this->affectRows_ != nullptr;};
      void deleteAffectRows() { this->affectRows_ = nullptr;};
      inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
      inline DBTaskSQLJobDetailList& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


      // currentSql Field Functions 
      bool hasCurrentSql() const { return this->currentSql_ != nullptr;};
      void deleteCurrentSql() { this->currentSql_ = nullptr;};
      inline string getCurrentSql() const { DARABONBA_PTR_GET_DEFAULT(currentSql_, "") };
      inline DBTaskSQLJobDetailList& setCurrentSql(string currentSql) { DARABONBA_PTR_SET_VALUE(currentSql_, currentSql) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline DBTaskSQLJobDetailList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline DBTaskSQLJobDetailList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // executeCount Field Functions 
      bool hasExecuteCount() const { return this->executeCount_ != nullptr;};
      void deleteExecuteCount() { this->executeCount_ = nullptr;};
      inline int64_t getExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(executeCount_, 0L) };
      inline DBTaskSQLJobDetailList& setExecuteCount(int64_t executeCount) { DARABONBA_PTR_SET_VALUE(executeCount_, executeCount) };


      // jobDetailId Field Functions 
      bool hasJobDetailId() const { return this->jobDetailId_ != nullptr;};
      void deleteJobDetailId() { this->jobDetailId_ = nullptr;};
      inline int64_t getJobDetailId() const { DARABONBA_PTR_GET_DEFAULT(jobDetailId_, 0L) };
      inline DBTaskSQLJobDetailList& setJobDetailId(int64_t jobDetailId) { DARABONBA_PTR_SET_VALUE(jobDetailId_, jobDetailId) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
      inline DBTaskSQLJobDetailList& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline string getLog() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
      inline DBTaskSQLJobDetailList& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


      // logic Field Functions 
      bool hasLogic() const { return this->logic_ != nullptr;};
      void deleteLogic() { this->logic_ = nullptr;};
      inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
      inline DBTaskSQLJobDetailList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


      // skip Field Functions 
      bool hasSkip() const { return this->skip_ != nullptr;};
      void deleteSkip() { this->skip_ = nullptr;};
      inline bool getSkip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
      inline DBTaskSQLJobDetailList& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline DBTaskSQLJobDetailList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline DBTaskSQLJobDetailList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DBTaskSQLJobDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // timeDelay Field Functions 
      bool hasTimeDelay() const { return this->timeDelay_ != nullptr;};
      void deleteTimeDelay() { this->timeDelay_ = nullptr;};
      inline int64_t getTimeDelay() const { DARABONBA_PTR_GET_DEFAULT(timeDelay_, 0L) };
      inline DBTaskSQLJobDetailList& setTimeDelay(int64_t timeDelay) { DARABONBA_PTR_SET_VALUE(timeDelay_, timeDelay) };


    protected:
      // The number of rows affected by the SQL task.
      shared_ptr<int64_t> affectRows_ {};
      // The SQL statement that was executed in the SQL task.
      shared_ptr<string> currentSql_ {};
      // The ID of the physical database.
      shared_ptr<int64_t> dbId_ {};
      // The point in time when the SQL task ended.
      shared_ptr<string> endTime_ {};
      // The number of times that the SQL statement was executed.
      shared_ptr<int64_t> executeCount_ {};
      // The ID of the details of the SQL task.
      shared_ptr<int64_t> jobDetailId_ {};
      // The ID of the SQL task.
      shared_ptr<int64_t> jobId_ {};
      // The details of the operational log.
      shared_ptr<string> log_ {};
      // Indicates whether the database is a logical database. Valid values:
      // 
      // *   **true**: The database is a logical database.
      // *   **false**: The database is a physical database.
      shared_ptr<bool> logic_ {};
      // Indicates whether the SQL statement was skipped. Valid values:
      // 
      // *   **true**: The SQL statement was skipped.
      // *   **false**: The SQL statement was not skipped.
      shared_ptr<bool> skip_ {};
      // The type of the SQL statement, such as DELETE, UPDATE, or ALTER_TABLE.
      shared_ptr<string> sqlType_ {};
      // The point in time when the SQL task started.
      shared_ptr<string> startTime_ {};
      // The status of the SQL task. Valid values:
      // 
      // *   **INIT**: The SQL task was initialized.
      // *   **PENDING**: The SQL task waited to be run.
      // *   **BE_SCHEDULED**: The SQL task waited to be scheduled.
      // *   **FAIL**: The SQL task failed.
      // *   **SUCCESS**: The SQL task was successful.
      // *   **PAUSE**: The SQL task was paused.
      // *   **DELETE**: The SQL task was deleted.
      // *   **RUNNING**: The SQL task was being run.
      shared_ptr<string> status_ {};
      // The duration of the SQL task. Unit: milliseconds.
      shared_ptr<int64_t> timeDelay_ {};
    };

    virtual bool empty() const override { return this->DBTaskSQLJobDetailList_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // DBTaskSQLJobDetailList Field Functions 
    bool hasDBTaskSQLJobDetailList() const { return this->DBTaskSQLJobDetailList_ != nullptr;};
    void deleteDBTaskSQLJobDetailList() { this->DBTaskSQLJobDetailList_ = nullptr;};
    inline const vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList> & getDBTaskSQLJobDetailList() const { DARABONBA_PTR_GET_CONST(DBTaskSQLJobDetailList_, vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList>) };
    inline vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList> getDBTaskSQLJobDetailList() { DARABONBA_PTR_GET(DBTaskSQLJobDetailList_, vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList>) };
    inline ListDBTaskSQLJobDetailResponseBody& setDBTaskSQLJobDetailList(const vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList> & dBTaskSQLJobDetailList) { DARABONBA_PTR_SET_VALUE(DBTaskSQLJobDetailList_, dBTaskSQLJobDetailList) };
    inline ListDBTaskSQLJobDetailResponseBody& setDBTaskSQLJobDetailList(vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList> && dBTaskSQLJobDetailList) { DARABONBA_PTR_SET_RVALUE(DBTaskSQLJobDetailList_, dBTaskSQLJobDetailList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDBTaskSQLJobDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDBTaskSQLJobDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDBTaskSQLJobDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDBTaskSQLJobDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of SQL tasks.
    shared_ptr<vector<ListDBTaskSQLJobDetailResponseBody::DBTaskSQLJobDetailList>> DBTaskSQLJobDetailList_ {};
    // The error code that is returned.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
    // The total number of SQL tasks.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
