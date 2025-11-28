// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOWSQLRECORDSRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOWSQLRECORDSRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSlowSQLRecordsResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlowSQLRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(CpuTimeMs, cpuTimeMs_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_TO_JSON(LockWaitTime, lockWaitTime_);
      DARABONBA_PTR_TO_JSON(MemBytes, memBytes_);
      DARABONBA_PTR_TO_JSON(Optimizer, optimizer_);
      DARABONBA_PTR_TO_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_TO_JSON(QueryID, queryID_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(QueueWaitTime, queueWaitTime_);
      DARABONBA_PTR_TO_JSON(SpillBytes, spillBytes_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
      DARABONBA_PTR_TO_JSON(SqlTruncated, sqlTruncated_);
      DARABONBA_PTR_TO_JSON(SqlTruncatedThreshold, sqlTruncatedThreshold_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlowSQLRecordsResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuTimeMs, cpuTimeMs_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DurationTime, durationTime_);
      DARABONBA_PTR_FROM_JSON(LockWaitTime, lockWaitTime_);
      DARABONBA_PTR_FROM_JSON(MemBytes, memBytes_);
      DARABONBA_PTR_FROM_JSON(Optimizer, optimizer_);
      DARABONBA_PTR_FROM_JSON(QueryEndTime, queryEndTime_);
      DARABONBA_PTR_FROM_JSON(QueryID, queryID_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(QueueWaitTime, queueWaitTime_);
      DARABONBA_PTR_FROM_JSON(SpillBytes, spillBytes_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
      DARABONBA_PTR_FROM_JSON(SqlTruncated, sqlTruncated_);
      DARABONBA_PTR_FROM_JSON(SqlTruncatedThreshold, sqlTruncatedThreshold_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    ListSlowSQLRecordsResponseBodyItems() = default ;
    ListSlowSQLRecordsResponseBodyItems(const ListSlowSQLRecordsResponseBodyItems &) = default ;
    ListSlowSQLRecordsResponseBodyItems(ListSlowSQLRecordsResponseBodyItems &&) = default ;
    ListSlowSQLRecordsResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlowSQLRecordsResponseBodyItems() = default ;
    ListSlowSQLRecordsResponseBodyItems& operator=(const ListSlowSQLRecordsResponseBodyItems &) = default ;
    ListSlowSQLRecordsResponseBodyItems& operator=(ListSlowSQLRecordsResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuTimeMs_ == nullptr
        && return this->DBName_ == nullptr && return this->durationTime_ == nullptr && return this->lockWaitTime_ == nullptr && return this->memBytes_ == nullptr && return this->optimizer_ == nullptr
        && return this->queryEndTime_ == nullptr && return this->queryID_ == nullptr && return this->queryStartTime_ == nullptr && return this->queueWaitTime_ == nullptr && return this->spillBytes_ == nullptr
        && return this->sqlText_ == nullptr && return this->sqlTruncated_ == nullptr && return this->sqlTruncatedThreshold_ == nullptr && return this->userName_ == nullptr; };
    // cpuTimeMs Field Functions 
    bool hasCpuTimeMs() const { return this->cpuTimeMs_ != nullptr;};
    void deleteCpuTimeMs() { this->cpuTimeMs_ = nullptr;};
    inline int64_t cpuTimeMs() const { DARABONBA_PTR_GET_DEFAULT(cpuTimeMs_, 0L) };
    inline ListSlowSQLRecordsResponseBodyItems& setCpuTimeMs(int64_t cpuTimeMs) { DARABONBA_PTR_SET_VALUE(cpuTimeMs_, cpuTimeMs) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // durationTime Field Functions 
    bool hasDurationTime() const { return this->durationTime_ != nullptr;};
    void deleteDurationTime() { this->durationTime_ = nullptr;};
    inline int32_t durationTime() const { DARABONBA_PTR_GET_DEFAULT(durationTime_, 0) };
    inline ListSlowSQLRecordsResponseBodyItems& setDurationTime(int32_t durationTime) { DARABONBA_PTR_SET_VALUE(durationTime_, durationTime) };


    // lockWaitTime Field Functions 
    bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
    void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
    inline int32_t lockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0) };
    inline ListSlowSQLRecordsResponseBodyItems& setLockWaitTime(int32_t lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


    // memBytes Field Functions 
    bool hasMemBytes() const { return this->memBytes_ != nullptr;};
    void deleteMemBytes() { this->memBytes_ = nullptr;};
    inline int64_t memBytes() const { DARABONBA_PTR_GET_DEFAULT(memBytes_, 0L) };
    inline ListSlowSQLRecordsResponseBodyItems& setMemBytes(int64_t memBytes) { DARABONBA_PTR_SET_VALUE(memBytes_, memBytes) };


    // optimizer Field Functions 
    bool hasOptimizer() const { return this->optimizer_ != nullptr;};
    void deleteOptimizer() { this->optimizer_ = nullptr;};
    inline string optimizer() const { DARABONBA_PTR_GET_DEFAULT(optimizer_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setOptimizer(string optimizer) { DARABONBA_PTR_SET_VALUE(optimizer_, optimizer) };


    // queryEndTime Field Functions 
    bool hasQueryEndTime() const { return this->queryEndTime_ != nullptr;};
    void deleteQueryEndTime() { this->queryEndTime_ = nullptr;};
    inline string queryEndTime() const { DARABONBA_PTR_GET_DEFAULT(queryEndTime_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setQueryEndTime(string queryEndTime) { DARABONBA_PTR_SET_VALUE(queryEndTime_, queryEndTime) };


    // queryID Field Functions 
    bool hasQueryID() const { return this->queryID_ != nullptr;};
    void deleteQueryID() { this->queryID_ = nullptr;};
    inline string queryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // queueWaitTime Field Functions 
    bool hasQueueWaitTime() const { return this->queueWaitTime_ != nullptr;};
    void deleteQueueWaitTime() { this->queueWaitTime_ = nullptr;};
    inline int32_t queueWaitTime() const { DARABONBA_PTR_GET_DEFAULT(queueWaitTime_, 0) };
    inline ListSlowSQLRecordsResponseBodyItems& setQueueWaitTime(int32_t queueWaitTime) { DARABONBA_PTR_SET_VALUE(queueWaitTime_, queueWaitTime) };


    // spillBytes Field Functions 
    bool hasSpillBytes() const { return this->spillBytes_ != nullptr;};
    void deleteSpillBytes() { this->spillBytes_ = nullptr;};
    inline int64_t spillBytes() const { DARABONBA_PTR_GET_DEFAULT(spillBytes_, 0L) };
    inline ListSlowSQLRecordsResponseBodyItems& setSpillBytes(int64_t spillBytes) { DARABONBA_PTR_SET_VALUE(spillBytes_, spillBytes) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // sqlTruncated Field Functions 
    bool hasSqlTruncated() const { return this->sqlTruncated_ != nullptr;};
    void deleteSqlTruncated() { this->sqlTruncated_ = nullptr;};
    inline string sqlTruncated() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncated_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setSqlTruncated(string sqlTruncated) { DARABONBA_PTR_SET_VALUE(sqlTruncated_, sqlTruncated) };


    // sqlTruncatedThreshold Field Functions 
    bool hasSqlTruncatedThreshold() const { return this->sqlTruncatedThreshold_ != nullptr;};
    void deleteSqlTruncatedThreshold() { this->sqlTruncatedThreshold_ = nullptr;};
    inline int32_t sqlTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncatedThreshold_, 0) };
    inline ListSlowSQLRecordsResponseBodyItems& setSqlTruncatedThreshold(int32_t sqlTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(sqlTruncatedThreshold_, sqlTruncatedThreshold) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListSlowSQLRecordsResponseBodyItems& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The total CPU time (in milliseconds) consumed by the query execution.
    std::shared_ptr<int64_t> cpuTimeMs_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // Total execution time in milliseconds.
    std::shared_ptr<int32_t> durationTime_ = nullptr;
    // The total lock wait time (in milliseconds).
    std::shared_ptr<int32_t> lockWaitTime_ = nullptr;
    // The total memory (in bytes) occupied by the query execution.
    std::shared_ptr<int64_t> memBytes_ = nullptr;
    // Execution optimizer.
    std::shared_ptr<string> optimizer_ = nullptr;
    // The end time of the query.
    std::shared_ptr<string> queryEndTime_ = nullptr;
    // The query ID. It is a unique identifier of the query.
    std::shared_ptr<string> queryID_ = nullptr;
    // The start time of the query.
    std::shared_ptr<string> queryStartTime_ = nullptr;
    // The query queueing time (in milliseconds) in resource groups/queues.
    std::shared_ptr<int32_t> queueWaitTime_ = nullptr;
    // The total size (in bytes) of the files generated by the query.
    std::shared_ptr<int64_t> spillBytes_ = nullptr;
    // SQL statements in audit logs.
    std::shared_ptr<string> sqlText_ = nullptr;
    // Indicates whether the SQL statement is truncated. Valid values:
    // 
    // *   true: Truncated.
    // *   false: Not truncated.
    std::shared_ptr<string> sqlTruncated_ = nullptr;
    // The threshold that is used to truncate the SQL statement.
    std::shared_ptr<int32_t> sqlTruncatedThreshold_ = nullptr;
    // The account that initiates the query.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
