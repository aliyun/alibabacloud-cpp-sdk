// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODY_HPP_
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
  class DescribeSqlLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlLogRecordsResponseBody() = default ;
    DescribeSqlLogRecordsResponseBody(const DescribeSqlLogRecordsResponseBody &) = default ;
    DescribeSqlLogRecordsResponseBody(DescribeSqlLogRecordsResponseBody &&) = default ;
    DescribeSqlLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogRecordsResponseBody() = default ;
    DescribeSqlLogRecordsResponseBody& operator=(const DescribeSqlLogRecordsResponseBody &) = default ;
    DescribeSqlLogRecordsResponseBody& operator=(DescribeSqlLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Finish, finish_);
        DARABONBA_PTR_TO_JSON(Items, items_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Finish, finish_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(SQLLogRecord, SQLLogRecord_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(SQLLogRecord, SQLLogRecord_);
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
        class SQLLogRecord : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SQLLogRecord& obj) { 
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
          friend void from_json(const Darabonba::Json& j, SQLLogRecord& obj) { 
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
          SQLLogRecord() = default ;
          SQLLogRecord(const SQLLogRecord &) = default ;
          SQLLogRecord(SQLLogRecord &&) = default ;
          SQLLogRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SQLLogRecord() = default ;
          SQLLogRecord& operator=(const SQLLogRecord &) = default ;
          SQLLogRecord& operator=(SQLLogRecord &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountName_ == nullptr
        && this->collection_ == nullptr && this->consume_ == nullptr && this->cpuTime_ == nullptr && this->DBName_ == nullptr && this->executeTime_ == nullptr
        && this->ext_ == nullptr && this->frows_ == nullptr && this->hostAddress_ == nullptr && this->lockTime_ == nullptr && this->logicRead_ == nullptr
        && this->nodeId_ == nullptr && this->originTime_ == nullptr && this->parallelDegree_ == nullptr && this->parallelQueueTime_ == nullptr && this->physicAsyncRead_ == nullptr
        && this->physicRead_ == nullptr && this->physicSyncRead_ == nullptr && this->returnRows_ == nullptr && this->rows_ == nullptr && this->scanRows_ == nullptr
        && this->scnt_ == nullptr && this->sqlId_ == nullptr && this->sqlText_ == nullptr && this->sqlType_ == nullptr && this->state_ == nullptr
        && this->tableName_ == nullptr && this->threadId_ == nullptr && this->traceId_ == nullptr && this->trxId_ == nullptr && this->updateRows_ == nullptr
        && this->useImciEngine_ == nullptr && this->vip_ == nullptr && this->writes_ == nullptr; };
          // accountName Field Functions 
          bool hasAccountName() const { return this->accountName_ != nullptr;};
          void deleteAccountName() { this->accountName_ = nullptr;};
          inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
          inline SQLLogRecord& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // collection Field Functions 
          bool hasCollection() const { return this->collection_ != nullptr;};
          void deleteCollection() { this->collection_ = nullptr;};
          inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
          inline SQLLogRecord& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


          // consume Field Functions 
          bool hasConsume() const { return this->consume_ != nullptr;};
          void deleteConsume() { this->consume_ = nullptr;};
          inline int64_t getConsume() const { DARABONBA_PTR_GET_DEFAULT(consume_, 0L) };
          inline SQLLogRecord& setConsume(int64_t consume) { DARABONBA_PTR_SET_VALUE(consume_, consume) };


          // cpuTime Field Functions 
          bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
          void deleteCpuTime() { this->cpuTime_ = nullptr;};
          inline int64_t getCpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0L) };
          inline SQLLogRecord& setCpuTime(int64_t cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


          // DBName Field Functions 
          bool hasDBName() const { return this->DBName_ != nullptr;};
          void deleteDBName() { this->DBName_ = nullptr;};
          inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
          inline SQLLogRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


          // executeTime Field Functions 
          bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
          void deleteExecuteTime() { this->executeTime_ = nullptr;};
          inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
          inline SQLLogRecord& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


          // ext Field Functions 
          bool hasExt() const { return this->ext_ != nullptr;};
          void deleteExt() { this->ext_ = nullptr;};
          inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
          inline SQLLogRecord& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


          // frows Field Functions 
          bool hasFrows() const { return this->frows_ != nullptr;};
          void deleteFrows() { this->frows_ = nullptr;};
          inline int64_t getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
          inline SQLLogRecord& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


          // hostAddress Field Functions 
          bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
          void deleteHostAddress() { this->hostAddress_ = nullptr;};
          inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
          inline SQLLogRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


          // lockTime Field Functions 
          bool hasLockTime() const { return this->lockTime_ != nullptr;};
          void deleteLockTime() { this->lockTime_ = nullptr;};
          inline int64_t getLockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0L) };
          inline SQLLogRecord& setLockTime(int64_t lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


          // logicRead Field Functions 
          bool hasLogicRead() const { return this->logicRead_ != nullptr;};
          void deleteLogicRead() { this->logicRead_ = nullptr;};
          inline int64_t getLogicRead() const { DARABONBA_PTR_GET_DEFAULT(logicRead_, 0L) };
          inline SQLLogRecord& setLogicRead(int64_t logicRead) { DARABONBA_PTR_SET_VALUE(logicRead_, logicRead) };


          // nodeId Field Functions 
          bool hasNodeId() const { return this->nodeId_ != nullptr;};
          void deleteNodeId() { this->nodeId_ = nullptr;};
          inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
          inline SQLLogRecord& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


          // originTime Field Functions 
          bool hasOriginTime() const { return this->originTime_ != nullptr;};
          void deleteOriginTime() { this->originTime_ = nullptr;};
          inline int64_t getOriginTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, 0L) };
          inline SQLLogRecord& setOriginTime(int64_t originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


          // parallelDegree Field Functions 
          bool hasParallelDegree() const { return this->parallelDegree_ != nullptr;};
          void deleteParallelDegree() { this->parallelDegree_ = nullptr;};
          inline string getParallelDegree() const { DARABONBA_PTR_GET_DEFAULT(parallelDegree_, "") };
          inline SQLLogRecord& setParallelDegree(string parallelDegree) { DARABONBA_PTR_SET_VALUE(parallelDegree_, parallelDegree) };


          // parallelQueueTime Field Functions 
          bool hasParallelQueueTime() const { return this->parallelQueueTime_ != nullptr;};
          void deleteParallelQueueTime() { this->parallelQueueTime_ = nullptr;};
          inline string getParallelQueueTime() const { DARABONBA_PTR_GET_DEFAULT(parallelQueueTime_, "") };
          inline SQLLogRecord& setParallelQueueTime(string parallelQueueTime) { DARABONBA_PTR_SET_VALUE(parallelQueueTime_, parallelQueueTime) };


          // physicAsyncRead Field Functions 
          bool hasPhysicAsyncRead() const { return this->physicAsyncRead_ != nullptr;};
          void deletePhysicAsyncRead() { this->physicAsyncRead_ = nullptr;};
          inline int64_t getPhysicAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicAsyncRead_, 0L) };
          inline SQLLogRecord& setPhysicAsyncRead(int64_t physicAsyncRead) { DARABONBA_PTR_SET_VALUE(physicAsyncRead_, physicAsyncRead) };


          // physicRead Field Functions 
          bool hasPhysicRead() const { return this->physicRead_ != nullptr;};
          void deletePhysicRead() { this->physicRead_ = nullptr;};
          inline int64_t getPhysicRead() const { DARABONBA_PTR_GET_DEFAULT(physicRead_, 0L) };
          inline SQLLogRecord& setPhysicRead(int64_t physicRead) { DARABONBA_PTR_SET_VALUE(physicRead_, physicRead) };


          // physicSyncRead Field Functions 
          bool hasPhysicSyncRead() const { return this->physicSyncRead_ != nullptr;};
          void deletePhysicSyncRead() { this->physicSyncRead_ = nullptr;};
          inline int64_t getPhysicSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicSyncRead_, 0L) };
          inline SQLLogRecord& setPhysicSyncRead(int64_t physicSyncRead) { DARABONBA_PTR_SET_VALUE(physicSyncRead_, physicSyncRead) };


          // returnRows Field Functions 
          bool hasReturnRows() const { return this->returnRows_ != nullptr;};
          void deleteReturnRows() { this->returnRows_ = nullptr;};
          inline int64_t getReturnRows() const { DARABONBA_PTR_GET_DEFAULT(returnRows_, 0L) };
          inline SQLLogRecord& setReturnRows(int64_t returnRows) { DARABONBA_PTR_SET_VALUE(returnRows_, returnRows) };


          // rows Field Functions 
          bool hasRows() const { return this->rows_ != nullptr;};
          void deleteRows() { this->rows_ = nullptr;};
          inline int64_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
          inline SQLLogRecord& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


          // scanRows Field Functions 
          bool hasScanRows() const { return this->scanRows_ != nullptr;};
          void deleteScanRows() { this->scanRows_ = nullptr;};
          inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
          inline SQLLogRecord& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


          // scnt Field Functions 
          bool hasScnt() const { return this->scnt_ != nullptr;};
          void deleteScnt() { this->scnt_ = nullptr;};
          inline int64_t getScnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
          inline SQLLogRecord& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


          // sqlId Field Functions 
          bool hasSqlId() const { return this->sqlId_ != nullptr;};
          void deleteSqlId() { this->sqlId_ = nullptr;};
          inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
          inline SQLLogRecord& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


          // sqlText Field Functions 
          bool hasSqlText() const { return this->sqlText_ != nullptr;};
          void deleteSqlText() { this->sqlText_ = nullptr;};
          inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
          inline SQLLogRecord& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


          // sqlType Field Functions 
          bool hasSqlType() const { return this->sqlType_ != nullptr;};
          void deleteSqlType() { this->sqlType_ = nullptr;};
          inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
          inline SQLLogRecord& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


          // state Field Functions 
          bool hasState() const { return this->state_ != nullptr;};
          void deleteState() { this->state_ = nullptr;};
          inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
          inline SQLLogRecord& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline SQLLogRecord& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // threadId Field Functions 
          bool hasThreadId() const { return this->threadId_ != nullptr;};
          void deleteThreadId() { this->threadId_ = nullptr;};
          inline int64_t getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, 0L) };
          inline SQLLogRecord& setThreadId(int64_t threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


          // traceId Field Functions 
          bool hasTraceId() const { return this->traceId_ != nullptr;};
          void deleteTraceId() { this->traceId_ = nullptr;};
          inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
          inline SQLLogRecord& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


          // trxId Field Functions 
          bool hasTrxId() const { return this->trxId_ != nullptr;};
          void deleteTrxId() { this->trxId_ = nullptr;};
          inline string getTrxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
          inline SQLLogRecord& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


          // updateRows Field Functions 
          bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
          void deleteUpdateRows() { this->updateRows_ = nullptr;};
          inline int64_t getUpdateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
          inline SQLLogRecord& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


          // useImciEngine Field Functions 
          bool hasUseImciEngine() const { return this->useImciEngine_ != nullptr;};
          void deleteUseImciEngine() { this->useImciEngine_ = nullptr;};
          inline string getUseImciEngine() const { DARABONBA_PTR_GET_DEFAULT(useImciEngine_, "") };
          inline SQLLogRecord& setUseImciEngine(string useImciEngine) { DARABONBA_PTR_SET_VALUE(useImciEngine_, useImciEngine) };


          // vip Field Functions 
          bool hasVip() const { return this->vip_ != nullptr;};
          void deleteVip() { this->vip_ = nullptr;};
          inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
          inline SQLLogRecord& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


          // writes Field Functions 
          bool hasWrites() const { return this->writes_ != nullptr;};
          void deleteWrites() { this->writes_ = nullptr;};
          inline int64_t getWrites() const { DARABONBA_PTR_GET_DEFAULT(writes_, 0L) };
          inline SQLLogRecord& setWrites(int64_t writes) { DARABONBA_PTR_SET_VALUE(writes_, writes) };


        protected:
          // The account of the database.
          shared_ptr<string> accountName_ {};
          // A reserved parameter.
          shared_ptr<string> collection_ {};
          // The amount of time that is consumed to execute the SQL statement. Unit: millisecond.
          shared_ptr<int64_t> consume_ {};
          // The CPU execution duration. Unit: microsecond.
          shared_ptr<int64_t> cpuTime_ {};
          // The database name.
          shared_ptr<string> DBName_ {};
          // The time when the SQL statement was executed. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
          shared_ptr<string> executeTime_ {};
          // The extended information. This parameter is a reserved parameter.
          shared_ptr<string> ext_ {};
          // The number of rows that are pulled by the compute nodes of the PolarDB-X 2.0 instance.
          shared_ptr<int64_t> frows_ {};
          // The IP address of the client.
          shared_ptr<string> hostAddress_ {};
          // The lock wait duration. Unit: millisecond.
          shared_ptr<int64_t> lockTime_ {};
          // The number of logical reads.
          shared_ptr<int64_t> logicRead_ {};
          // The node ID.
          shared_ptr<string> nodeId_ {};
          // The timestamp generated when the SQL statement was executed. The value of this parameter is a UNIX timestamp. Unit: millisecond.
          shared_ptr<int64_t> originTime_ {};
          // The parallel queue time of the PolarDB for MySQL instance. Unit: millisecond.
          shared_ptr<string> parallelDegree_ {};
          // The parallelism of the PolarDB for MySQL cluster.
          shared_ptr<string> parallelQueueTime_ {};
          // The number of physical asynchronous reads.
          shared_ptr<int64_t> physicAsyncRead_ {};
          // The total number of physical reads.
          shared_ptr<int64_t> physicRead_ {};
          // The number of physical synchronous reads.
          shared_ptr<int64_t> physicSyncRead_ {};
          // The number of rows returned by the SQL statement.
          shared_ptr<int64_t> returnRows_ {};
          // The total number of rows that are updated or returned by the compute nodes of the PolarDB-X 2.0 instance.
          shared_ptr<int64_t> rows_ {};
          // The number of scanned rows.
          shared_ptr<int64_t> scanRows_ {};
          // The number of requests that are sent from the compute nodes to the data nodes of the PolarDB-X 2.0 instance.
          shared_ptr<int64_t> scnt_ {};
          // The SQL statement ID.
          shared_ptr<string> sqlId_ {};
          // The SQL statement.
          shared_ptr<string> sqlText_ {};
          // The type of the SQL statement.
          shared_ptr<string> sqlType_ {};
          // The execution status of the SQL statement.
          // 
          // *   **0**: The execution was successful.
          // *   **1**: The execution failed.
          shared_ptr<string> state_ {};
          shared_ptr<string> tableName_ {};
          // The thread ID.
          shared_ptr<int64_t> threadId_ {};
          // The trace ID of the PolarDB-X 2.0 instance. The value is the execution ID of the SQL statement on the data node.
          shared_ptr<string> traceId_ {};
          // The transaction ID.
          shared_ptr<string> trxId_ {};
          // The number of rows that are updated.
          shared_ptr<int64_t> updateRows_ {};
          // Indicates whether the In-Memory Column Index (IMCI) feature is enabled for the PolarDB for MySQL cluster. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<string> useImciEngine_ {};
          // The IP address that is resolved from the endpoint of the query link.
          shared_ptr<string> vip_ {};
          // The number of writes to the ApsaraDB RDS for SQL Server instance.
          shared_ptr<int64_t> writes_ {};
        };

        virtual bool empty() const override { return this->SQLLogRecord_ == nullptr; };
        // SQLLogRecord Field Functions 
        bool hasSQLLogRecord() const { return this->SQLLogRecord_ != nullptr;};
        void deleteSQLLogRecord() { this->SQLLogRecord_ = nullptr;};
        inline const vector<Items::SQLLogRecord> & getSQLLogRecord() const { DARABONBA_PTR_GET_CONST(SQLLogRecord_, vector<Items::SQLLogRecord>) };
        inline vector<Items::SQLLogRecord> getSQLLogRecord() { DARABONBA_PTR_GET(SQLLogRecord_, vector<Items::SQLLogRecord>) };
        inline Items& setSQLLogRecord(const vector<Items::SQLLogRecord> & sQLLogRecord) { DARABONBA_PTR_SET_VALUE(SQLLogRecord_, sQLLogRecord) };
        inline Items& setSQLLogRecord(vector<Items::SQLLogRecord> && sQLLogRecord) { DARABONBA_PTR_SET_RVALUE(SQLLogRecord_, sQLLogRecord) };


      protected:
        // The SQL log data.
        shared_ptr<vector<Items::SQLLogRecord>> SQLLogRecord_ {};
      };

      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->finish_ == nullptr && this->items_ == nullptr && this->jobId_ == nullptr && this->startTime_ == nullptr && this->totalRecords_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // finish Field Functions 
      bool hasFinish() const { return this->finish_ != nullptr;};
      void deleteFinish() { this->finish_ = nullptr;};
      inline string getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, "") };
      inline Data& setFinish(string finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const Data::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, Data::Items) };
      inline Data::Items getItems() { DARABONBA_PTR_GET(items_, Data::Items) };
      inline Data& setItems(const Data::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(Data::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Data& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
      inline Data& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      // The end of the time range to query. This value is a UNIX timestamp. Unit: millisecond.
      shared_ptr<int64_t> endTime_ {};
      // Indicates whether the task was complete. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      // 
      // >  If the value of **Finish** is 0 and the value of **JobId** is returned, the request is an asynchronous request and the return result cannot be directly obtained. You must query the return result based on the value of **JobId**. Specify JobId as the key of **Filters** and the value of **JobId** as the value of Filters. Example: `Filters=[{"Key": "JobId", "Value": "******"}]`.
      shared_ptr<string> finish_ {};
      // The data.
      shared_ptr<Data::Items> items_ {};
      // The ID of the asynchronous task.
      shared_ptr<string> jobId_ {};
      // The beginning of the time range to query. This value is a UNIX timestamp. Unit: millisecond.
      shared_ptr<int64_t> startTime_ {};
      // The total number of entries.
      shared_ptr<int64_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSqlLogRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlLogRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlLogRecordsResponseBody::Data) };
    inline DescribeSqlLogRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlLogRecordsResponseBody::Data) };
    inline DescribeSqlLogRecordsResponseBody& setData(const DescribeSqlLogRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlLogRecordsResponseBody& setData(DescribeSqlLogRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlLogRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSqlLogRecordsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<string> code_ {};
    // The data that is returned.
    shared_ptr<DescribeSqlLogRecordsResponseBody::Data> data_ {};
    // The message that is returned.
    // 
    // >  If the request is successful, **Successful** is returned. If the request fails, an error message that contains information such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
