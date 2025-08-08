// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBDETAILRESPONSEBODYDBTASKSQLJOBDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDBTASKSQLJOBDETAILRESPONSEBODYDBTASKSQLJOBDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& obj) { 
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
    ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList() = default ;
    ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList(const ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList &) = default ;
    ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList(ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList &&) = default ;
    ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList() = default ;
    ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& operator=(const ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList &) = default ;
    ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& operator=(ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affectRows_ != nullptr
        && this->currentSql_ != nullptr && this->dbId_ != nullptr && this->endTime_ != nullptr && this->executeCount_ != nullptr && this->jobDetailId_ != nullptr
        && this->jobId_ != nullptr && this->log_ != nullptr && this->logic_ != nullptr && this->skip_ != nullptr && this->sqlType_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->timeDelay_ != nullptr; };
    // affectRows Field Functions 
    bool hasAffectRows() const { return this->affectRows_ != nullptr;};
    void deleteAffectRows() { this->affectRows_ = nullptr;};
    inline int64_t affectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


    // currentSql Field Functions 
    bool hasCurrentSql() const { return this->currentSql_ != nullptr;};
    void deleteCurrentSql() { this->currentSql_ = nullptr;};
    inline string currentSql() const { DARABONBA_PTR_GET_DEFAULT(currentSql_, "") };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setCurrentSql(string currentSql) { DARABONBA_PTR_SET_VALUE(currentSql_, currentSql) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // executeCount Field Functions 
    bool hasExecuteCount() const { return this->executeCount_ != nullptr;};
    void deleteExecuteCount() { this->executeCount_ = nullptr;};
    inline int64_t executeCount() const { DARABONBA_PTR_GET_DEFAULT(executeCount_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setExecuteCount(int64_t executeCount) { DARABONBA_PTR_SET_VALUE(executeCount_, executeCount) };


    // jobDetailId Field Functions 
    bool hasJobDetailId() const { return this->jobDetailId_ != nullptr;};
    void deleteJobDetailId() { this->jobDetailId_ = nullptr;};
    inline int64_t jobDetailId() const { DARABONBA_PTR_GET_DEFAULT(jobDetailId_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setJobDetailId(int64_t jobDetailId) { DARABONBA_PTR_SET_VALUE(jobDetailId_, jobDetailId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline string log() const { DARABONBA_PTR_GET_DEFAULT(log_, "") };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setLog(string log) { DARABONBA_PTR_SET_VALUE(log_, log) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline bool skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timeDelay Field Functions 
    bool hasTimeDelay() const { return this->timeDelay_ != nullptr;};
    void deleteTimeDelay() { this->timeDelay_ = nullptr;};
    inline int64_t timeDelay() const { DARABONBA_PTR_GET_DEFAULT(timeDelay_, 0L) };
    inline ListDBTaskSQLJobDetailResponseBodyDBTaskSQLJobDetailList& setTimeDelay(int64_t timeDelay) { DARABONBA_PTR_SET_VALUE(timeDelay_, timeDelay) };


  protected:
    // The number of rows affected by the SQL task.
    std::shared_ptr<int64_t> affectRows_ = nullptr;
    // The SQL statement that was executed in the SQL task.
    std::shared_ptr<string> currentSql_ = nullptr;
    // The ID of the physical database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The point in time when the SQL task ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The number of times that the SQL statement was executed.
    std::shared_ptr<int64_t> executeCount_ = nullptr;
    // The ID of the details of the SQL task.
    std::shared_ptr<int64_t> jobDetailId_ = nullptr;
    // The ID of the SQL task.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The details of the operational log.
    std::shared_ptr<string> log_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // Indicates whether the SQL statement was skipped. Valid values:
    // 
    // *   **true**: The SQL statement was skipped.
    // *   **false**: The SQL statement was not skipped.
    std::shared_ptr<bool> skip_ = nullptr;
    // The type of the SQL statement, such as DELETE, UPDATE, or ALTER_TABLE.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The point in time when the SQL task started.
    std::shared_ptr<string> startTime_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The duration of the SQL task. Unit: milliseconds.
    std::shared_ptr<int64_t> timeDelay_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
