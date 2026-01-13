// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLOWSQLRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSLOWSQLRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class ListSlowSQLRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSlowSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSlowSQLRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    ListSlowSQLRecordsResponseBody() = default ;
    ListSlowSQLRecordsResponseBody(const ListSlowSQLRecordsResponseBody &) = default ;
    ListSlowSQLRecordsResponseBody(ListSlowSQLRecordsResponseBody &&) = default ;
    ListSlowSQLRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSlowSQLRecordsResponseBody() = default ;
    ListSlowSQLRecordsResponseBody& operator=(const ListSlowSQLRecordsResponseBody &) = default ;
    ListSlowSQLRecordsResponseBody& operator=(ListSlowSQLRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
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
      virtual bool empty() const override { return this->cpuTimeMs_ == nullptr
        && this->DBName_ == nullptr && this->durationTime_ == nullptr && this->lockWaitTime_ == nullptr && this->memBytes_ == nullptr && this->optimizer_ == nullptr
        && this->queryEndTime_ == nullptr && this->queryID_ == nullptr && this->queryStartTime_ == nullptr && this->queueWaitTime_ == nullptr && this->spillBytes_ == nullptr
        && this->sqlText_ == nullptr && this->sqlTruncated_ == nullptr && this->sqlTruncatedThreshold_ == nullptr && this->userName_ == nullptr; };
      // cpuTimeMs Field Functions 
      bool hasCpuTimeMs() const { return this->cpuTimeMs_ != nullptr;};
      void deleteCpuTimeMs() { this->cpuTimeMs_ = nullptr;};
      inline int64_t getCpuTimeMs() const { DARABONBA_PTR_GET_DEFAULT(cpuTimeMs_, 0L) };
      inline Items& setCpuTimeMs(int64_t cpuTimeMs) { DARABONBA_PTR_SET_VALUE(cpuTimeMs_, cpuTimeMs) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline Items& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // durationTime Field Functions 
      bool hasDurationTime() const { return this->durationTime_ != nullptr;};
      void deleteDurationTime() { this->durationTime_ = nullptr;};
      inline int32_t getDurationTime() const { DARABONBA_PTR_GET_DEFAULT(durationTime_, 0) };
      inline Items& setDurationTime(int32_t durationTime) { DARABONBA_PTR_SET_VALUE(durationTime_, durationTime) };


      // lockWaitTime Field Functions 
      bool hasLockWaitTime() const { return this->lockWaitTime_ != nullptr;};
      void deleteLockWaitTime() { this->lockWaitTime_ = nullptr;};
      inline int32_t getLockWaitTime() const { DARABONBA_PTR_GET_DEFAULT(lockWaitTime_, 0) };
      inline Items& setLockWaitTime(int32_t lockWaitTime) { DARABONBA_PTR_SET_VALUE(lockWaitTime_, lockWaitTime) };


      // memBytes Field Functions 
      bool hasMemBytes() const { return this->memBytes_ != nullptr;};
      void deleteMemBytes() { this->memBytes_ = nullptr;};
      inline int64_t getMemBytes() const { DARABONBA_PTR_GET_DEFAULT(memBytes_, 0L) };
      inline Items& setMemBytes(int64_t memBytes) { DARABONBA_PTR_SET_VALUE(memBytes_, memBytes) };


      // optimizer Field Functions 
      bool hasOptimizer() const { return this->optimizer_ != nullptr;};
      void deleteOptimizer() { this->optimizer_ = nullptr;};
      inline string getOptimizer() const { DARABONBA_PTR_GET_DEFAULT(optimizer_, "") };
      inline Items& setOptimizer(string optimizer) { DARABONBA_PTR_SET_VALUE(optimizer_, optimizer) };


      // queryEndTime Field Functions 
      bool hasQueryEndTime() const { return this->queryEndTime_ != nullptr;};
      void deleteQueryEndTime() { this->queryEndTime_ = nullptr;};
      inline string getQueryEndTime() const { DARABONBA_PTR_GET_DEFAULT(queryEndTime_, "") };
      inline Items& setQueryEndTime(string queryEndTime) { DARABONBA_PTR_SET_VALUE(queryEndTime_, queryEndTime) };


      // queryID Field Functions 
      bool hasQueryID() const { return this->queryID_ != nullptr;};
      void deleteQueryID() { this->queryID_ = nullptr;};
      inline string getQueryID() const { DARABONBA_PTR_GET_DEFAULT(queryID_, "") };
      inline Items& setQueryID(string queryID) { DARABONBA_PTR_SET_VALUE(queryID_, queryID) };


      // queryStartTime Field Functions 
      bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
      void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
      inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
      inline Items& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


      // queueWaitTime Field Functions 
      bool hasQueueWaitTime() const { return this->queueWaitTime_ != nullptr;};
      void deleteQueueWaitTime() { this->queueWaitTime_ = nullptr;};
      inline int32_t getQueueWaitTime() const { DARABONBA_PTR_GET_DEFAULT(queueWaitTime_, 0) };
      inline Items& setQueueWaitTime(int32_t queueWaitTime) { DARABONBA_PTR_SET_VALUE(queueWaitTime_, queueWaitTime) };


      // spillBytes Field Functions 
      bool hasSpillBytes() const { return this->spillBytes_ != nullptr;};
      void deleteSpillBytes() { this->spillBytes_ = nullptr;};
      inline int64_t getSpillBytes() const { DARABONBA_PTR_GET_DEFAULT(spillBytes_, 0L) };
      inline Items& setSpillBytes(int64_t spillBytes) { DARABONBA_PTR_SET_VALUE(spillBytes_, spillBytes) };


      // sqlText Field Functions 
      bool hasSqlText() const { return this->sqlText_ != nullptr;};
      void deleteSqlText() { this->sqlText_ = nullptr;};
      inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
      inline Items& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


      // sqlTruncated Field Functions 
      bool hasSqlTruncated() const { return this->sqlTruncated_ != nullptr;};
      void deleteSqlTruncated() { this->sqlTruncated_ = nullptr;};
      inline string getSqlTruncated() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncated_, "") };
      inline Items& setSqlTruncated(string sqlTruncated) { DARABONBA_PTR_SET_VALUE(sqlTruncated_, sqlTruncated) };


      // sqlTruncatedThreshold Field Functions 
      bool hasSqlTruncatedThreshold() const { return this->sqlTruncatedThreshold_ != nullptr;};
      void deleteSqlTruncatedThreshold() { this->sqlTruncatedThreshold_ = nullptr;};
      inline int32_t getSqlTruncatedThreshold() const { DARABONBA_PTR_GET_DEFAULT(sqlTruncatedThreshold_, 0) };
      inline Items& setSqlTruncatedThreshold(int32_t sqlTruncatedThreshold) { DARABONBA_PTR_SET_VALUE(sqlTruncatedThreshold_, sqlTruncatedThreshold) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The total CPU time (in milliseconds) consumed by the query execution.
      shared_ptr<int64_t> cpuTimeMs_ {};
      // The name of the database.
      shared_ptr<string> DBName_ {};
      // Total execution time in milliseconds.
      shared_ptr<int32_t> durationTime_ {};
      // The total lock wait time (in milliseconds).
      shared_ptr<int32_t> lockWaitTime_ {};
      // The total memory (in bytes) occupied by the query execution.
      shared_ptr<int64_t> memBytes_ {};
      // Execution optimizer.
      shared_ptr<string> optimizer_ {};
      // The end time of the query.
      shared_ptr<string> queryEndTime_ {};
      // The query ID. It is a unique identifier of the query.
      shared_ptr<string> queryID_ {};
      // The start time of the query.
      shared_ptr<string> queryStartTime_ {};
      // The query queueing time (in milliseconds) in resource groups/queues.
      shared_ptr<int32_t> queueWaitTime_ {};
      // The total size (in bytes) of the files generated by the query.
      shared_ptr<int64_t> spillBytes_ {};
      // SQL statements in audit logs.
      shared_ptr<string> sqlText_ {};
      // Indicates whether the SQL statement is truncated. Valid values:
      // 
      // *   true: Truncated.
      // *   false: Not truncated.
      shared_ptr<string> sqlTruncated_ {};
      // The threshold that is used to truncate the SQL statement.
      shared_ptr<int32_t> sqlTruncatedThreshold_ {};
      // The account that initiates the query.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListSlowSQLRecordsResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListSlowSQLRecordsResponseBody::Items>) };
    inline vector<ListSlowSQLRecordsResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListSlowSQLRecordsResponseBody::Items>) };
    inline ListSlowSQLRecordsResponseBody& setItems(const vector<ListSlowSQLRecordsResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListSlowSQLRecordsResponseBody& setItems(vector<ListSlowSQLRecordsResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSlowSQLRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline ListSlowSQLRecordsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSlowSQLRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline ListSlowSQLRecordsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // List of slow queries.
    shared_ptr<vector<ListSlowSQLRecordsResponseBody::Items>> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of log entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
