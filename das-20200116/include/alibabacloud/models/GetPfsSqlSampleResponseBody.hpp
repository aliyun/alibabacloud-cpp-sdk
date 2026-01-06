// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPFSSQLSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPFSSQLSAMPLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetPfsSqlSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPfsSqlSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPfsSqlSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPfsSqlSampleResponseBody() = default ;
    GetPfsSqlSampleResponseBody(const GetPfsSqlSampleResponseBody &) = default ;
    GetPfsSqlSampleResponseBody(GetPfsSqlSampleResponseBody &&) = default ;
    GetPfsSqlSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPfsSqlSampleResponseBody() = default ;
    GetPfsSqlSampleResponseBody& operator=(const GetPfsSqlSampleResponseBody &) = default ;
    GetPfsSqlSampleResponseBody& operator=(GetPfsSqlSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTmpDiskTables, createTmpDiskTables_);
        DARABONBA_PTR_TO_JSON(CreateTmpTables, createTmpTables_);
        DARABONBA_PTR_TO_JSON(Db, db_);
        DARABONBA_PTR_TO_JSON(EndEventId, endEventId_);
        DARABONBA_PTR_TO_JSON(Errors, errors_);
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Latency, latency_);
        DARABONBA_PTR_TO_JSON(LockLatency, lockLatency_);
        DARABONBA_PTR_TO_JSON(LogicId, logicId_);
        DARABONBA_PTR_TO_JSON(NoGoodIndexUsed, noGoodIndexUsed_);
        DARABONBA_PTR_TO_JSON(NoIndexUsed, noIndexUsed_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(RowsAffected, rowsAffected_);
        DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
        DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
        DARABONBA_PTR_TO_JSON(SelectFullJoin, selectFullJoin_);
        DARABONBA_PTR_TO_JSON(SelectFullRangeJoin, selectFullRangeJoin_);
        DARABONBA_PTR_TO_JSON(SelectRange, selectRange_);
        DARABONBA_PTR_TO_JSON(SelectRangeCheck, selectRangeCheck_);
        DARABONBA_PTR_TO_JSON(SelectScan, selectScan_);
        DARABONBA_PTR_TO_JSON(SortMergePasses, sortMergePasses_);
        DARABONBA_PTR_TO_JSON(SortRange, sortRange_);
        DARABONBA_PTR_TO_JSON(SortRows, sortRows_);
        DARABONBA_PTR_TO_JSON(SortScan, sortScan_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
        DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(Warnings, warnings_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTmpDiskTables, createTmpDiskTables_);
        DARABONBA_PTR_FROM_JSON(CreateTmpTables, createTmpTables_);
        DARABONBA_PTR_FROM_JSON(Db, db_);
        DARABONBA_PTR_FROM_JSON(EndEventId, endEventId_);
        DARABONBA_PTR_FROM_JSON(Errors, errors_);
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Latency, latency_);
        DARABONBA_PTR_FROM_JSON(LockLatency, lockLatency_);
        DARABONBA_PTR_FROM_JSON(LogicId, logicId_);
        DARABONBA_PTR_FROM_JSON(NoGoodIndexUsed, noGoodIndexUsed_);
        DARABONBA_PTR_FROM_JSON(NoIndexUsed, noIndexUsed_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(RowsAffected, rowsAffected_);
        DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
        DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
        DARABONBA_PTR_FROM_JSON(SelectFullJoin, selectFullJoin_);
        DARABONBA_PTR_FROM_JSON(SelectFullRangeJoin, selectFullRangeJoin_);
        DARABONBA_PTR_FROM_JSON(SelectRange, selectRange_);
        DARABONBA_PTR_FROM_JSON(SelectRangeCheck, selectRangeCheck_);
        DARABONBA_PTR_FROM_JSON(SelectScan, selectScan_);
        DARABONBA_PTR_FROM_JSON(SortMergePasses, sortMergePasses_);
        DARABONBA_PTR_FROM_JSON(SortRange, sortRange_);
        DARABONBA_PTR_FROM_JSON(SortRows, sortRows_);
        DARABONBA_PTR_FROM_JSON(SortScan, sortScan_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
        DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTmpDiskTables_ == nullptr
        && this->createTmpTables_ == nullptr && this->db_ == nullptr && this->endEventId_ == nullptr && this->errors_ == nullptr && this->eventId_ == nullptr
        && this->eventName_ == nullptr && this->instanceId_ == nullptr && this->latency_ == nullptr && this->lockLatency_ == nullptr && this->logicId_ == nullptr
        && this->noGoodIndexUsed_ == nullptr && this->noIndexUsed_ == nullptr && this->nodeId_ == nullptr && this->rowsAffected_ == nullptr && this->rowsExamined_ == nullptr
        && this->rowsSent_ == nullptr && this->selectFullJoin_ == nullptr && this->selectFullRangeJoin_ == nullptr && this->selectRange_ == nullptr && this->selectRangeCheck_ == nullptr
        && this->selectScan_ == nullptr && this->sortMergePasses_ == nullptr && this->sortRange_ == nullptr && this->sortRows_ == nullptr && this->sortScan_ == nullptr
        && this->sql_ == nullptr && this->sqlId_ == nullptr && this->threadId_ == nullptr && this->timestamp_ == nullptr && this->userId_ == nullptr
        && this->warnings_ == nullptr; };
      // createTmpDiskTables Field Functions 
      bool hasCreateTmpDiskTables() const { return this->createTmpDiskTables_ != nullptr;};
      void deleteCreateTmpDiskTables() { this->createTmpDiskTables_ = nullptr;};
      inline int32_t getCreateTmpDiskTables() const { DARABONBA_PTR_GET_DEFAULT(createTmpDiskTables_, 0) };
      inline Data& setCreateTmpDiskTables(int32_t createTmpDiskTables) { DARABONBA_PTR_SET_VALUE(createTmpDiskTables_, createTmpDiskTables) };


      // createTmpTables Field Functions 
      bool hasCreateTmpTables() const { return this->createTmpTables_ != nullptr;};
      void deleteCreateTmpTables() { this->createTmpTables_ = nullptr;};
      inline int32_t getCreateTmpTables() const { DARABONBA_PTR_GET_DEFAULT(createTmpTables_, 0) };
      inline Data& setCreateTmpTables(int32_t createTmpTables) { DARABONBA_PTR_SET_VALUE(createTmpTables_, createTmpTables) };


      // db Field Functions 
      bool hasDb() const { return this->db_ != nullptr;};
      void deleteDb() { this->db_ = nullptr;};
      inline string getDb() const { DARABONBA_PTR_GET_DEFAULT(db_, "") };
      inline Data& setDb(string db) { DARABONBA_PTR_SET_VALUE(db_, db) };


      // endEventId Field Functions 
      bool hasEndEventId() const { return this->endEventId_ != nullptr;};
      void deleteEndEventId() { this->endEventId_ = nullptr;};
      inline int32_t getEndEventId() const { DARABONBA_PTR_GET_DEFAULT(endEventId_, 0) };
      inline Data& setEndEventId(int32_t endEventId) { DARABONBA_PTR_SET_VALUE(endEventId_, endEventId) };


      // errors Field Functions 
      bool hasErrors() const { return this->errors_ != nullptr;};
      void deleteErrors() { this->errors_ = nullptr;};
      inline int32_t getErrors() const { DARABONBA_PTR_GET_DEFAULT(errors_, 0) };
      inline Data& setErrors(int32_t errors) { DARABONBA_PTR_SET_VALUE(errors_, errors) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline int32_t getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, 0) };
      inline Data& setEventId(int32_t eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline Data& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // latency Field Functions 
      bool hasLatency() const { return this->latency_ != nullptr;};
      void deleteLatency() { this->latency_ = nullptr;};
      inline double getLatency() const { DARABONBA_PTR_GET_DEFAULT(latency_, 0.0) };
      inline Data& setLatency(double latency) { DARABONBA_PTR_SET_VALUE(latency_, latency) };


      // lockLatency Field Functions 
      bool hasLockLatency() const { return this->lockLatency_ != nullptr;};
      void deleteLockLatency() { this->lockLatency_ = nullptr;};
      inline double getLockLatency() const { DARABONBA_PTR_GET_DEFAULT(lockLatency_, 0.0) };
      inline Data& setLockLatency(double lockLatency) { DARABONBA_PTR_SET_VALUE(lockLatency_, lockLatency) };


      // logicId Field Functions 
      bool hasLogicId() const { return this->logicId_ != nullptr;};
      void deleteLogicId() { this->logicId_ = nullptr;};
      inline string getLogicId() const { DARABONBA_PTR_GET_DEFAULT(logicId_, "") };
      inline Data& setLogicId(string logicId) { DARABONBA_PTR_SET_VALUE(logicId_, logicId) };


      // noGoodIndexUsed Field Functions 
      bool hasNoGoodIndexUsed() const { return this->noGoodIndexUsed_ != nullptr;};
      void deleteNoGoodIndexUsed() { this->noGoodIndexUsed_ = nullptr;};
      inline int32_t getNoGoodIndexUsed() const { DARABONBA_PTR_GET_DEFAULT(noGoodIndexUsed_, 0) };
      inline Data& setNoGoodIndexUsed(int32_t noGoodIndexUsed) { DARABONBA_PTR_SET_VALUE(noGoodIndexUsed_, noGoodIndexUsed) };


      // noIndexUsed Field Functions 
      bool hasNoIndexUsed() const { return this->noIndexUsed_ != nullptr;};
      void deleteNoIndexUsed() { this->noIndexUsed_ = nullptr;};
      inline int32_t getNoIndexUsed() const { DARABONBA_PTR_GET_DEFAULT(noIndexUsed_, 0) };
      inline Data& setNoIndexUsed(int32_t noIndexUsed) { DARABONBA_PTR_SET_VALUE(noIndexUsed_, noIndexUsed) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // rowsAffected Field Functions 
      bool hasRowsAffected() const { return this->rowsAffected_ != nullptr;};
      void deleteRowsAffected() { this->rowsAffected_ = nullptr;};
      inline int32_t getRowsAffected() const { DARABONBA_PTR_GET_DEFAULT(rowsAffected_, 0) };
      inline Data& setRowsAffected(int32_t rowsAffected) { DARABONBA_PTR_SET_VALUE(rowsAffected_, rowsAffected) };


      // rowsExamined Field Functions 
      bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
      void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
      inline int32_t getRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0) };
      inline Data& setRowsExamined(int32_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


      // rowsSent Field Functions 
      bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
      void deleteRowsSent() { this->rowsSent_ = nullptr;};
      inline int32_t getRowsSent() const { DARABONBA_PTR_GET_DEFAULT(rowsSent_, 0) };
      inline Data& setRowsSent(int32_t rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };


      // selectFullJoin Field Functions 
      bool hasSelectFullJoin() const { return this->selectFullJoin_ != nullptr;};
      void deleteSelectFullJoin() { this->selectFullJoin_ = nullptr;};
      inline int32_t getSelectFullJoin() const { DARABONBA_PTR_GET_DEFAULT(selectFullJoin_, 0) };
      inline Data& setSelectFullJoin(int32_t selectFullJoin) { DARABONBA_PTR_SET_VALUE(selectFullJoin_, selectFullJoin) };


      // selectFullRangeJoin Field Functions 
      bool hasSelectFullRangeJoin() const { return this->selectFullRangeJoin_ != nullptr;};
      void deleteSelectFullRangeJoin() { this->selectFullRangeJoin_ = nullptr;};
      inline int32_t getSelectFullRangeJoin() const { DARABONBA_PTR_GET_DEFAULT(selectFullRangeJoin_, 0) };
      inline Data& setSelectFullRangeJoin(int32_t selectFullRangeJoin) { DARABONBA_PTR_SET_VALUE(selectFullRangeJoin_, selectFullRangeJoin) };


      // selectRange Field Functions 
      bool hasSelectRange() const { return this->selectRange_ != nullptr;};
      void deleteSelectRange() { this->selectRange_ = nullptr;};
      inline int32_t getSelectRange() const { DARABONBA_PTR_GET_DEFAULT(selectRange_, 0) };
      inline Data& setSelectRange(int32_t selectRange) { DARABONBA_PTR_SET_VALUE(selectRange_, selectRange) };


      // selectRangeCheck Field Functions 
      bool hasSelectRangeCheck() const { return this->selectRangeCheck_ != nullptr;};
      void deleteSelectRangeCheck() { this->selectRangeCheck_ = nullptr;};
      inline int32_t getSelectRangeCheck() const { DARABONBA_PTR_GET_DEFAULT(selectRangeCheck_, 0) };
      inline Data& setSelectRangeCheck(int32_t selectRangeCheck) { DARABONBA_PTR_SET_VALUE(selectRangeCheck_, selectRangeCheck) };


      // selectScan Field Functions 
      bool hasSelectScan() const { return this->selectScan_ != nullptr;};
      void deleteSelectScan() { this->selectScan_ = nullptr;};
      inline int32_t getSelectScan() const { DARABONBA_PTR_GET_DEFAULT(selectScan_, 0) };
      inline Data& setSelectScan(int32_t selectScan) { DARABONBA_PTR_SET_VALUE(selectScan_, selectScan) };


      // sortMergePasses Field Functions 
      bool hasSortMergePasses() const { return this->sortMergePasses_ != nullptr;};
      void deleteSortMergePasses() { this->sortMergePasses_ = nullptr;};
      inline int32_t getSortMergePasses() const { DARABONBA_PTR_GET_DEFAULT(sortMergePasses_, 0) };
      inline Data& setSortMergePasses(int32_t sortMergePasses) { DARABONBA_PTR_SET_VALUE(sortMergePasses_, sortMergePasses) };


      // sortRange Field Functions 
      bool hasSortRange() const { return this->sortRange_ != nullptr;};
      void deleteSortRange() { this->sortRange_ = nullptr;};
      inline int32_t getSortRange() const { DARABONBA_PTR_GET_DEFAULT(sortRange_, 0) };
      inline Data& setSortRange(int32_t sortRange) { DARABONBA_PTR_SET_VALUE(sortRange_, sortRange) };


      // sortRows Field Functions 
      bool hasSortRows() const { return this->sortRows_ != nullptr;};
      void deleteSortRows() { this->sortRows_ = nullptr;};
      inline int32_t getSortRows() const { DARABONBA_PTR_GET_DEFAULT(sortRows_, 0) };
      inline Data& setSortRows(int32_t sortRows) { DARABONBA_PTR_SET_VALUE(sortRows_, sortRows) };


      // sortScan Field Functions 
      bool hasSortScan() const { return this->sortScan_ != nullptr;};
      void deleteSortScan() { this->sortScan_ = nullptr;};
      inline int32_t getSortScan() const { DARABONBA_PTR_GET_DEFAULT(sortScan_, 0) };
      inline Data& setSortScan(int32_t sortScan) { DARABONBA_PTR_SET_VALUE(sortScan_, sortScan) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline Data& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // sqlId Field Functions 
      bool hasSqlId() const { return this->sqlId_ != nullptr;};
      void deleteSqlId() { this->sqlId_ = nullptr;};
      inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
      inline Data& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


      // threadId Field Functions 
      bool hasThreadId() const { return this->threadId_ != nullptr;};
      void deleteThreadId() { this->threadId_ = nullptr;};
      inline int32_t getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, 0) };
      inline Data& setThreadId(int32_t threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // warnings Field Functions 
      bool hasWarnings() const { return this->warnings_ != nullptr;};
      void deleteWarnings() { this->warnings_ = nullptr;};
      inline int32_t getWarnings() const { DARABONBA_PTR_GET_DEFAULT(warnings_, 0) };
      inline Data& setWarnings(int32_t warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };


    protected:
      // The number of internal on-disk temporary tables that were created when the SQL statement was executed.
      shared_ptr<int32_t> createTmpDiskTables_ {};
      // The number of internal temporary tables that were created when the SQL statement was executed.
      shared_ptr<int32_t> createTmpTables_ {};
      // The name of the database.
      shared_ptr<string> db_ {};
      // The end ID of the event. By default, the value of this parameter is NULL when the event starts and is changed to the event ID when the event ends.
      shared_ptr<int32_t> endEventId_ {};
      // The number of errors returned for the SQL statement.
      shared_ptr<int32_t> errors_ {};
      // The event ID.
      shared_ptr<int32_t> eventId_ {};
      // The name of the event.
      shared_ptr<string> eventName_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The execution duration. Unit: millisecond.
      shared_ptr<double> latency_ {};
      // The lock wait duration. Unit: millisecond.
      shared_ptr<double> lockLatency_ {};
      // The ID of the logical database.
      shared_ptr<string> logicId_ {};
      // Indicates whether the server failed to find an index that can be used for the SQL statement. Valid values:
      // 
      // *   **1**: yes.
      // *   **0**: no.
      shared_ptr<int32_t> noGoodIndexUsed_ {};
      // Indicates whether table scans were performed when indexes were not used. Valid values:
      // 
      // *   **1**: yes.
      // *   **0**: no.
      shared_ptr<int32_t> noIndexUsed_ {};
      // The node ID.
      // 
      // >  This parameter is returned only for ApsaraDB RDS for MySQL Cluster Edition instances or PolarDB for MySQL clusters.
      shared_ptr<string> nodeId_ {};
      // The number of rows affected by the SQL statement.
      shared_ptr<int32_t> rowsAffected_ {};
      // The number of rows scanned by the SQL statement.
      shared_ptr<int32_t> rowsExamined_ {};
      // The number of rows returned by the SQL statement.
      shared_ptr<int32_t> rowsSent_ {};
      // The number of joins that are used to perform table scans without using indexes.
      // 
      // > : This parameter is used for the scenario in which indexes are not used in a union query. If the returned value is not 0, check the indexes of tables.
      shared_ptr<int32_t> selectFullJoin_ {};
      // The number of joins that used ranges on referenced tables.
      shared_ptr<int32_t> selectFullRangeJoin_ {};
      // The number of joins that used ranges on the first table.
      shared_ptr<int32_t> selectRange_ {};
      // The number of joins that did not have key values. The keys and values were checked for each row of data.
      // 
      // > : This parameter is used for the scenario in which indexes are not used in a union query. If the returned value is not 0, check the indexes of tables.
      shared_ptr<int32_t> selectRangeCheck_ {};
      // The number of scans.
      shared_ptr<int32_t> selectScan_ {};
      // The number of merges that the sorting algorithm must perform.
      shared_ptr<int32_t> sortMergePasses_ {};
      // The number of times the data was sorted by using ranges.
      shared_ptr<int32_t> sortRange_ {};
      // The number of sorted rows.
      shared_ptr<int32_t> sortRows_ {};
      // The number of sorts that were performed during table scans.
      shared_ptr<int32_t> sortScan_ {};
      // The sample SQL statement.
      shared_ptr<string> sql_ {};
      // The SQL statement ID.
      shared_ptr<string> sqlId_ {};
      // The thread ID.
      shared_ptr<int32_t> threadId_ {};
      // The time when the SQL statement was executed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> timestamp_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The number of warnings returned for the SQL statement.
      shared_ptr<int32_t> warnings_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetPfsSqlSampleResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetPfsSqlSampleResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetPfsSqlSampleResponseBody::Data>) };
    inline vector<GetPfsSqlSampleResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetPfsSqlSampleResponseBody::Data>) };
    inline GetPfsSqlSampleResponseBody& setData(const vector<GetPfsSqlSampleResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPfsSqlSampleResponseBody& setData(vector<GetPfsSqlSampleResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPfsSqlSampleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPfsSqlSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPfsSqlSampleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The SQL sample data.
    shared_ptr<vector<GetPfsSqlSampleResponseBody::Data>> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
