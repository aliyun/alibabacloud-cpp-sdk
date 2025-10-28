// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYDATAITEMSSQLLOGRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYDATAITEMSSQLLOGRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Consume, consume_);
      DARABONBA_PTR_TO_JSON(CpuTime, cpuTime_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Frows, frows_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(LogicRead, logicRead_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OriginTime, originTime_);
      DARABONBA_PTR_TO_JSON(ParallelDegree, parallelDegree_);
      DARABONBA_PTR_TO_JSON(ParallelQueueTime, parallelQueueTime_);
      DARABONBA_PTR_TO_JSON(PhysicAsyncRead, physicAsyncRead_);
      DARABONBA_PTR_TO_JSON(PhysicRead, physicRead_);
      DARABONBA_PTR_TO_JSON(PhysicSyncRead, physicSyncRead_);
      DARABONBA_PTR_TO_JSON(ReturnRows, returnRows_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
      DARABONBA_PTR_TO_JSON(Scnt, scnt_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(TrxId, trxId_);
      DARABONBA_PTR_TO_JSON(UpdateRows, updateRows_);
      DARABONBA_PTR_TO_JSON(UseImciEngine, useImciEngine_);
      DARABONBA_PTR_TO_JSON(Vip, vip_);
      DARABONBA_PTR_TO_JSON(Writes, writes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Consume, consume_);
      DARABONBA_PTR_FROM_JSON(CpuTime, cpuTime_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Frows, frows_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(LogicRead, logicRead_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OriginTime, originTime_);
      DARABONBA_PTR_FROM_JSON(ParallelDegree, parallelDegree_);
      DARABONBA_PTR_FROM_JSON(ParallelQueueTime, parallelQueueTime_);
      DARABONBA_PTR_FROM_JSON(PhysicAsyncRead, physicAsyncRead_);
      DARABONBA_PTR_FROM_JSON(PhysicRead, physicRead_);
      DARABONBA_PTR_FROM_JSON(PhysicSyncRead, physicSyncRead_);
      DARABONBA_PTR_FROM_JSON(ReturnRows, returnRows_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
      DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(TrxId, trxId_);
      DARABONBA_PTR_FROM_JSON(UpdateRows, updateRows_);
      DARABONBA_PTR_FROM_JSON(UseImciEngine, useImciEngine_);
      DARABONBA_PTR_FROM_JSON(Vip, vip_);
      DARABONBA_PTR_FROM_JSON(Writes, writes_);
    };
    DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord() = default ;
    DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord(const DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord &) = default ;
    DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord(DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord &&) = default ;
    DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord() = default ;
    DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& operator=(const DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord &) = default ;
    DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& operator=(DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->collection_ == nullptr && return this->consume_ == nullptr && return this->cpuTime_ == nullptr && return this->DBName_ == nullptr && return this->executeTime_ == nullptr
        && return this->ext_ == nullptr && return this->frows_ == nullptr && return this->hostAddress_ == nullptr && return this->lockTime_ == nullptr && return this->logicRead_ == nullptr
        && return this->nodeId_ == nullptr && return this->originTime_ == nullptr && return this->parallelDegree_ == nullptr && return this->parallelQueueTime_ == nullptr && return this->physicAsyncRead_ == nullptr
        && return this->physicRead_ == nullptr && return this->physicSyncRead_ == nullptr && return this->returnRows_ == nullptr && return this->rows_ == nullptr && return this->scanRows_ == nullptr
        && return this->scnt_ == nullptr && return this->sqlId_ == nullptr && return this->sqlText_ == nullptr && return this->sqlType_ == nullptr && return this->state_ == nullptr
        && return this->tableName_ == nullptr && return this->threadId_ == nullptr && return this->traceId_ == nullptr && return this->trxId_ == nullptr && return this->updateRows_ == nullptr
        && return this->useImciEngine_ == nullptr && return this->vip_ == nullptr && return this->writes_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string collection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // consume Field Functions 
    bool hasConsume() const { return this->consume_ != nullptr;};
    void deleteConsume() { this->consume_ = nullptr;};
    inline int64_t consume() const { DARABONBA_PTR_GET_DEFAULT(consume_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setConsume(int64_t consume) { DARABONBA_PTR_SET_VALUE(consume_, consume) };


    // cpuTime Field Functions 
    bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
    void deleteCpuTime() { this->cpuTime_ = nullptr;};
    inline int64_t cpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setCpuTime(int64_t cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // frows Field Functions 
    bool hasFrows() const { return this->frows_ != nullptr;};
    void deleteFrows() { this->frows_ = nullptr;};
    inline int64_t frows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline int64_t lockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setLockTime(int64_t lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


    // logicRead Field Functions 
    bool hasLogicRead() const { return this->logicRead_ != nullptr;};
    void deleteLogicRead() { this->logicRead_ = nullptr;};
    inline int64_t logicRead() const { DARABONBA_PTR_GET_DEFAULT(logicRead_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setLogicRead(int64_t logicRead) { DARABONBA_PTR_SET_VALUE(logicRead_, logicRead) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // originTime Field Functions 
    bool hasOriginTime() const { return this->originTime_ != nullptr;};
    void deleteOriginTime() { this->originTime_ = nullptr;};
    inline int64_t originTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setOriginTime(int64_t originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


    // parallelDegree Field Functions 
    bool hasParallelDegree() const { return this->parallelDegree_ != nullptr;};
    void deleteParallelDegree() { this->parallelDegree_ = nullptr;};
    inline string parallelDegree() const { DARABONBA_PTR_GET_DEFAULT(parallelDegree_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setParallelDegree(string parallelDegree) { DARABONBA_PTR_SET_VALUE(parallelDegree_, parallelDegree) };


    // parallelQueueTime Field Functions 
    bool hasParallelQueueTime() const { return this->parallelQueueTime_ != nullptr;};
    void deleteParallelQueueTime() { this->parallelQueueTime_ = nullptr;};
    inline string parallelQueueTime() const { DARABONBA_PTR_GET_DEFAULT(parallelQueueTime_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setParallelQueueTime(string parallelQueueTime) { DARABONBA_PTR_SET_VALUE(parallelQueueTime_, parallelQueueTime) };


    // physicAsyncRead Field Functions 
    bool hasPhysicAsyncRead() const { return this->physicAsyncRead_ != nullptr;};
    void deletePhysicAsyncRead() { this->physicAsyncRead_ = nullptr;};
    inline int64_t physicAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicAsyncRead_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setPhysicAsyncRead(int64_t physicAsyncRead) { DARABONBA_PTR_SET_VALUE(physicAsyncRead_, physicAsyncRead) };


    // physicRead Field Functions 
    bool hasPhysicRead() const { return this->physicRead_ != nullptr;};
    void deletePhysicRead() { this->physicRead_ = nullptr;};
    inline int64_t physicRead() const { DARABONBA_PTR_GET_DEFAULT(physicRead_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setPhysicRead(int64_t physicRead) { DARABONBA_PTR_SET_VALUE(physicRead_, physicRead) };


    // physicSyncRead Field Functions 
    bool hasPhysicSyncRead() const { return this->physicSyncRead_ != nullptr;};
    void deletePhysicSyncRead() { this->physicSyncRead_ = nullptr;};
    inline int64_t physicSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicSyncRead_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setPhysicSyncRead(int64_t physicSyncRead) { DARABONBA_PTR_SET_VALUE(physicSyncRead_, physicSyncRead) };


    // returnRows Field Functions 
    bool hasReturnRows() const { return this->returnRows_ != nullptr;};
    void deleteReturnRows() { this->returnRows_ = nullptr;};
    inline int64_t returnRows() const { DARABONBA_PTR_GET_DEFAULT(returnRows_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setReturnRows(int64_t returnRows) { DARABONBA_PTR_SET_VALUE(returnRows_, returnRows) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline int64_t rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // scnt Field Functions 
    bool hasScnt() const { return this->scnt_ != nullptr;};
    void deleteScnt() { this->scnt_ = nullptr;};
    inline int64_t scnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline int64_t threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setThreadId(int64_t threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // trxId Field Functions 
    bool hasTrxId() const { return this->trxId_ != nullptr;};
    void deleteTrxId() { this->trxId_ = nullptr;};
    inline string trxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


    // updateRows Field Functions 
    bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
    void deleteUpdateRows() { this->updateRows_ = nullptr;};
    inline int64_t updateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


    // useImciEngine Field Functions 
    bool hasUseImciEngine() const { return this->useImciEngine_ != nullptr;};
    void deleteUseImciEngine() { this->useImciEngine_ = nullptr;};
    inline string useImciEngine() const { DARABONBA_PTR_GET_DEFAULT(useImciEngine_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setUseImciEngine(string useImciEngine) { DARABONBA_PTR_SET_VALUE(useImciEngine_, useImciEngine) };


    // vip Field Functions 
    bool hasVip() const { return this->vip_ != nullptr;};
    void deleteVip() { this->vip_ = nullptr;};
    inline string vip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


    // writes Field Functions 
    bool hasWrites() const { return this->writes_ != nullptr;};
    void deleteWrites() { this->writes_ = nullptr;};
    inline int64_t writes() const { DARABONBA_PTR_GET_DEFAULT(writes_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyDataItemsSQLLogRecord& setWrites(int64_t writes) { DARABONBA_PTR_SET_VALUE(writes_, writes) };


  protected:
    // The account of the database.
    std::shared_ptr<string> accountName_ = nullptr;
    // A reserved parameter.
    std::shared_ptr<string> collection_ = nullptr;
    // The amount of time that is consumed to execute the SQL statement. Unit: millisecond.
    std::shared_ptr<int64_t> consume_ = nullptr;
    // The CPU execution duration. Unit: microsecond.
    std::shared_ptr<int64_t> cpuTime_ = nullptr;
    // The database name.
    std::shared_ptr<string> DBName_ = nullptr;
    // The time when the SQL statement was executed. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    std::shared_ptr<string> executeTime_ = nullptr;
    // The extended information. This parameter is a reserved parameter.
    std::shared_ptr<string> ext_ = nullptr;
    // The number of rows that are pulled by the compute nodes of the PolarDB-X 2.0 instance.
    std::shared_ptr<int64_t> frows_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The lock wait duration. Unit: millisecond.
    std::shared_ptr<int64_t> lockTime_ = nullptr;
    // The number of logical reads.
    std::shared_ptr<int64_t> logicRead_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The timestamp generated when the SQL statement was executed. The value of this parameter is a UNIX timestamp. Unit: millisecond.
    std::shared_ptr<int64_t> originTime_ = nullptr;
    // The parallel queue time of the PolarDB for MySQL instance. Unit: millisecond.
    std::shared_ptr<string> parallelDegree_ = nullptr;
    // The parallelism of the PolarDB for MySQL cluster.
    std::shared_ptr<string> parallelQueueTime_ = nullptr;
    // The number of physical asynchronous reads.
    std::shared_ptr<int64_t> physicAsyncRead_ = nullptr;
    // The total number of physical reads.
    std::shared_ptr<int64_t> physicRead_ = nullptr;
    // The number of physical synchronous reads.
    std::shared_ptr<int64_t> physicSyncRead_ = nullptr;
    // The number of rows returned by the SQL statement.
    std::shared_ptr<int64_t> returnRows_ = nullptr;
    // The total number of rows that are updated or returned by the compute nodes of the PolarDB-X 2.0 instance.
    std::shared_ptr<int64_t> rows_ = nullptr;
    // The number of scanned rows.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The number of requests that are sent from the compute nodes to the data nodes of the PolarDB-X 2.0 instance.
    std::shared_ptr<int64_t> scnt_ = nullptr;
    // The SQL statement ID.
    std::shared_ptr<string> sqlId_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> sqlText_ = nullptr;
    // The type of the SQL statement.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The execution status of the SQL statement.
    // 
    // *   **0**: The execution was successful.
    // *   **1**: The execution failed.
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    // The thread ID.
    std::shared_ptr<int64_t> threadId_ = nullptr;
    // The trace ID of the PolarDB-X 2.0 instance. The value is the execution ID of the SQL statement on the data node.
    std::shared_ptr<string> traceId_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> trxId_ = nullptr;
    // The number of rows that are updated.
    std::shared_ptr<int64_t> updateRows_ = nullptr;
    // Indicates whether the In-Memory Column Index (IMCI) feature is enabled for the PolarDB for MySQL cluster. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> useImciEngine_ = nullptr;
    // The IP address that is resolved from the endpoint of the query link.
    std::shared_ptr<string> vip_ = nullptr;
    // The number of writes to the ApsaraDB RDS for SQL Server instance.
    std::shared_ptr<int64_t> writes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
