// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKRESPONSEBODY_HPP_
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
  class DescribeSqlLogTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlLogTaskResponseBody() = default ;
    DescribeSqlLogTaskResponseBody(const DescribeSqlLogTaskResponseBody &) = default ;
    DescribeSqlLogTaskResponseBody(DescribeSqlLogTaskResponseBody &&) = default ;
    DescribeSqlLogTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogTaskResponseBody() = default ;
    DescribeSqlLogTaskResponseBody& operator=(const DescribeSqlLogTaskResponseBody &) = default ;
    DescribeSqlLogTaskResponseBody& operator=(DescribeSqlLogTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(Expire, expire_);
        DARABONBA_PTR_TO_JSON(Export, export_);
        DARABONBA_PTR_TO_JSON(Filters, filters_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Queries, queries_);
        DARABONBA_PTR_TO_JSON(Start, start_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(Expire, expire_);
        DARABONBA_PTR_FROM_JSON(Export, export_);
        DARABONBA_PTR_FROM_JSON(Filters, filters_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Queries, queries_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class Queries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Queries& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AffectColumns, affectColumns_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(ClientPort, clientPort_);
          DARABONBA_PTR_TO_JSON(Collection, collection_);
          DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
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
          DARABONBA_PTR_TO_JSON(Params, params_);
          DARABONBA_PTR_TO_JSON(PhysicAsyncRead, physicAsyncRead_);
          DARABONBA_PTR_TO_JSON(PhysicRead, physicRead_);
          DARABONBA_PTR_TO_JSON(PhysicSyncRead, physicSyncRead_);
          DARABONBA_PTR_TO_JSON(Protected, protected_);
          DARABONBA_PTR_TO_JSON(ReturnRows, returnRows_);
          DARABONBA_PTR_TO_JSON(RowKey, rowKey_);
          DARABONBA_PTR_TO_JSON(Rows, rows_);
          DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
          DARABONBA_PTR_TO_JSON(Scnt, scnt_);
          DARABONBA_PTR_TO_JSON(SqlCommand, sqlCommand_);
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
        friend void from_json(const Darabonba::Json& j, Queries& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AffectColumns, affectColumns_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(ClientPort, clientPort_);
          DARABONBA_PTR_FROM_JSON(Collection, collection_);
          DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
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
          DARABONBA_PTR_FROM_JSON(Params, params_);
          DARABONBA_PTR_FROM_JSON(PhysicAsyncRead, physicAsyncRead_);
          DARABONBA_PTR_FROM_JSON(PhysicRead, physicRead_);
          DARABONBA_PTR_FROM_JSON(PhysicSyncRead, physicSyncRead_);
          DARABONBA_PTR_FROM_JSON(Protected, protected_);
          DARABONBA_PTR_FROM_JSON(ReturnRows, returnRows_);
          DARABONBA_PTR_FROM_JSON(RowKey, rowKey_);
          DARABONBA_PTR_FROM_JSON(Rows, rows_);
          DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
          DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
          DARABONBA_PTR_FROM_JSON(SqlCommand, sqlCommand_);
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
        Queries() = default ;
        Queries(const Queries &) = default ;
        Queries(Queries &&) = default ;
        Queries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Queries() = default ;
        Queries& operator=(const Queries &) = default ;
        Queries& operator=(Queries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->affectColumns_ == nullptr && this->clientIp_ == nullptr && this->clientPort_ == nullptr && this->collection_ == nullptr && this->connectionId_ == nullptr
        && this->consume_ == nullptr && this->cpuTime_ == nullptr && this->DBName_ == nullptr && this->executeTime_ == nullptr && this->ext_ == nullptr
        && this->frows_ == nullptr && this->hostAddress_ == nullptr && this->lockTime_ == nullptr && this->logicRead_ == nullptr && this->nodeId_ == nullptr
        && this->originTime_ == nullptr && this->parallelDegree_ == nullptr && this->parallelQueueTime_ == nullptr && this->params_ == nullptr && this->physicAsyncRead_ == nullptr
        && this->physicRead_ == nullptr && this->physicSyncRead_ == nullptr && this->protected_ == nullptr && this->returnRows_ == nullptr && this->rowKey_ == nullptr
        && this->rows_ == nullptr && this->scanRows_ == nullptr && this->scnt_ == nullptr && this->sqlCommand_ == nullptr && this->sqlId_ == nullptr
        && this->sqlText_ == nullptr && this->sqlType_ == nullptr && this->state_ == nullptr && this->tableName_ == nullptr && this->threadId_ == nullptr
        && this->traceId_ == nullptr && this->trxId_ == nullptr && this->updateRows_ == nullptr && this->useImciEngine_ == nullptr && this->vip_ == nullptr
        && this->writes_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Queries& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // affectColumns Field Functions 
        bool hasAffectColumns() const { return this->affectColumns_ != nullptr;};
        void deleteAffectColumns() { this->affectColumns_ = nullptr;};
        inline string getAffectColumns() const { DARABONBA_PTR_GET_DEFAULT(affectColumns_, "") };
        inline Queries& setAffectColumns(string affectColumns) { DARABONBA_PTR_SET_VALUE(affectColumns_, affectColumns) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline Queries& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // clientPort Field Functions 
        bool hasClientPort() const { return this->clientPort_ != nullptr;};
        void deleteClientPort() { this->clientPort_ = nullptr;};
        inline int64_t getClientPort() const { DARABONBA_PTR_GET_DEFAULT(clientPort_, 0L) };
        inline Queries& setClientPort(int64_t clientPort) { DARABONBA_PTR_SET_VALUE(clientPort_, clientPort) };


        // collection Field Functions 
        bool hasCollection() const { return this->collection_ != nullptr;};
        void deleteCollection() { this->collection_ = nullptr;};
        inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
        inline Queries& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


        // connectionId Field Functions 
        bool hasConnectionId() const { return this->connectionId_ != nullptr;};
        void deleteConnectionId() { this->connectionId_ = nullptr;};
        inline string getConnectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, "") };
        inline Queries& setConnectionId(string connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


        // consume Field Functions 
        bool hasConsume() const { return this->consume_ != nullptr;};
        void deleteConsume() { this->consume_ = nullptr;};
        inline int64_t getConsume() const { DARABONBA_PTR_GET_DEFAULT(consume_, 0L) };
        inline Queries& setConsume(int64_t consume) { DARABONBA_PTR_SET_VALUE(consume_, consume) };


        // cpuTime Field Functions 
        bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
        void deleteCpuTime() { this->cpuTime_ = nullptr;};
        inline int64_t getCpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0L) };
        inline Queries& setCpuTime(int64_t cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Queries& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
        inline Queries& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
        inline Queries& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


        // frows Field Functions 
        bool hasFrows() const { return this->frows_ != nullptr;};
        void deleteFrows() { this->frows_ = nullptr;};
        inline int64_t getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
        inline Queries& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline Queries& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


        // lockTime Field Functions 
        bool hasLockTime() const { return this->lockTime_ != nullptr;};
        void deleteLockTime() { this->lockTime_ = nullptr;};
        inline int64_t getLockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0L) };
        inline Queries& setLockTime(int64_t lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


        // logicRead Field Functions 
        bool hasLogicRead() const { return this->logicRead_ != nullptr;};
        void deleteLogicRead() { this->logicRead_ = nullptr;};
        inline int64_t getLogicRead() const { DARABONBA_PTR_GET_DEFAULT(logicRead_, 0L) };
        inline Queries& setLogicRead(int64_t logicRead) { DARABONBA_PTR_SET_VALUE(logicRead_, logicRead) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Queries& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // originTime Field Functions 
        bool hasOriginTime() const { return this->originTime_ != nullptr;};
        void deleteOriginTime() { this->originTime_ = nullptr;};
        inline int64_t getOriginTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, 0L) };
        inline Queries& setOriginTime(int64_t originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


        // parallelDegree Field Functions 
        bool hasParallelDegree() const { return this->parallelDegree_ != nullptr;};
        void deleteParallelDegree() { this->parallelDegree_ = nullptr;};
        inline string getParallelDegree() const { DARABONBA_PTR_GET_DEFAULT(parallelDegree_, "") };
        inline Queries& setParallelDegree(string parallelDegree) { DARABONBA_PTR_SET_VALUE(parallelDegree_, parallelDegree) };


        // parallelQueueTime Field Functions 
        bool hasParallelQueueTime() const { return this->parallelQueueTime_ != nullptr;};
        void deleteParallelQueueTime() { this->parallelQueueTime_ = nullptr;};
        inline string getParallelQueueTime() const { DARABONBA_PTR_GET_DEFAULT(parallelQueueTime_, "") };
        inline Queries& setParallelQueueTime(string parallelQueueTime) { DARABONBA_PTR_SET_VALUE(parallelQueueTime_, parallelQueueTime) };


        // params Field Functions 
        bool hasParams() const { return this->params_ != nullptr;};
        void deleteParams() { this->params_ = nullptr;};
        inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
        inline Queries& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


        // physicAsyncRead Field Functions 
        bool hasPhysicAsyncRead() const { return this->physicAsyncRead_ != nullptr;};
        void deletePhysicAsyncRead() { this->physicAsyncRead_ = nullptr;};
        inline int64_t getPhysicAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicAsyncRead_, 0L) };
        inline Queries& setPhysicAsyncRead(int64_t physicAsyncRead) { DARABONBA_PTR_SET_VALUE(physicAsyncRead_, physicAsyncRead) };


        // physicRead Field Functions 
        bool hasPhysicRead() const { return this->physicRead_ != nullptr;};
        void deletePhysicRead() { this->physicRead_ = nullptr;};
        inline int64_t getPhysicRead() const { DARABONBA_PTR_GET_DEFAULT(physicRead_, 0L) };
        inline Queries& setPhysicRead(int64_t physicRead) { DARABONBA_PTR_SET_VALUE(physicRead_, physicRead) };


        // physicSyncRead Field Functions 
        bool hasPhysicSyncRead() const { return this->physicSyncRead_ != nullptr;};
        void deletePhysicSyncRead() { this->physicSyncRead_ = nullptr;};
        inline int64_t getPhysicSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicSyncRead_, 0L) };
        inline Queries& setPhysicSyncRead(int64_t physicSyncRead) { DARABONBA_PTR_SET_VALUE(physicSyncRead_, physicSyncRead) };


        // protected Field Functions 
        bool hasProtected() const { return this->protected_ != nullptr;};
        void deleteProtected() { this->protected_ = nullptr;};
        inline string getProtected() const { DARABONBA_PTR_GET_DEFAULT(protected_, "") };
        inline Queries& setProtected(string _protected) { DARABONBA_PTR_SET_VALUE(protected_, _protected) };


        // returnRows Field Functions 
        bool hasReturnRows() const { return this->returnRows_ != nullptr;};
        void deleteReturnRows() { this->returnRows_ = nullptr;};
        inline int64_t getReturnRows() const { DARABONBA_PTR_GET_DEFAULT(returnRows_, 0L) };
        inline Queries& setReturnRows(int64_t returnRows) { DARABONBA_PTR_SET_VALUE(returnRows_, returnRows) };


        // rowKey Field Functions 
        bool hasRowKey() const { return this->rowKey_ != nullptr;};
        void deleteRowKey() { this->rowKey_ = nullptr;};
        inline string getRowKey() const { DARABONBA_PTR_GET_DEFAULT(rowKey_, "") };
        inline Queries& setRowKey(string rowKey) { DARABONBA_PTR_SET_VALUE(rowKey_, rowKey) };


        // rows Field Functions 
        bool hasRows() const { return this->rows_ != nullptr;};
        void deleteRows() { this->rows_ = nullptr;};
        inline int64_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
        inline Queries& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


        // scanRows Field Functions 
        bool hasScanRows() const { return this->scanRows_ != nullptr;};
        void deleteScanRows() { this->scanRows_ = nullptr;};
        inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
        inline Queries& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


        // scnt Field Functions 
        bool hasScnt() const { return this->scnt_ != nullptr;};
        void deleteScnt() { this->scnt_ = nullptr;};
        inline int64_t getScnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
        inline Queries& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


        // sqlCommand Field Functions 
        bool hasSqlCommand() const { return this->sqlCommand_ != nullptr;};
        void deleteSqlCommand() { this->sqlCommand_ = nullptr;};
        inline int64_t getSqlCommand() const { DARABONBA_PTR_GET_DEFAULT(sqlCommand_, 0L) };
        inline Queries& setSqlCommand(int64_t sqlCommand) { DARABONBA_PTR_SET_VALUE(sqlCommand_, sqlCommand) };


        // sqlId Field Functions 
        bool hasSqlId() const { return this->sqlId_ != nullptr;};
        void deleteSqlId() { this->sqlId_ = nullptr;};
        inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
        inline Queries& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


        // sqlText Field Functions 
        bool hasSqlText() const { return this->sqlText_ != nullptr;};
        void deleteSqlText() { this->sqlText_ = nullptr;};
        inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
        inline Queries& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


        // sqlType Field Functions 
        bool hasSqlType() const { return this->sqlType_ != nullptr;};
        void deleteSqlType() { this->sqlType_ = nullptr;};
        inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
        inline Queries& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline Queries& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline Queries& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // threadId Field Functions 
        bool hasThreadId() const { return this->threadId_ != nullptr;};
        void deleteThreadId() { this->threadId_ = nullptr;};
        inline int64_t getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, 0L) };
        inline Queries& setThreadId(int64_t threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline Queries& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


        // trxId Field Functions 
        bool hasTrxId() const { return this->trxId_ != nullptr;};
        void deleteTrxId() { this->trxId_ = nullptr;};
        inline string getTrxId() const { DARABONBA_PTR_GET_DEFAULT(trxId_, "") };
        inline Queries& setTrxId(string trxId) { DARABONBA_PTR_SET_VALUE(trxId_, trxId) };


        // updateRows Field Functions 
        bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
        void deleteUpdateRows() { this->updateRows_ = nullptr;};
        inline int64_t getUpdateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
        inline Queries& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


        // useImciEngine Field Functions 
        bool hasUseImciEngine() const { return this->useImciEngine_ != nullptr;};
        void deleteUseImciEngine() { this->useImciEngine_ = nullptr;};
        inline string getUseImciEngine() const { DARABONBA_PTR_GET_DEFAULT(useImciEngine_, "") };
        inline Queries& setUseImciEngine(string useImciEngine) { DARABONBA_PTR_SET_VALUE(useImciEngine_, useImciEngine) };


        // vip Field Functions 
        bool hasVip() const { return this->vip_ != nullptr;};
        void deleteVip() { this->vip_ = nullptr;};
        inline string getVip() const { DARABONBA_PTR_GET_DEFAULT(vip_, "") };
        inline Queries& setVip(string vip) { DARABONBA_PTR_SET_VALUE(vip_, vip) };


        // writes Field Functions 
        bool hasWrites() const { return this->writes_ != nullptr;};
        void deleteWrites() { this->writes_ = nullptr;};
        inline int64_t getWrites() const { DARABONBA_PTR_GET_DEFAULT(writes_, 0L) };
        inline Queries& setWrites(int64_t writes) { DARABONBA_PTR_SET_VALUE(writes_, writes) };


      protected:
        // The database account.
        shared_ptr<string> accountName_ {};
        shared_ptr<string> affectColumns_ {};
        shared_ptr<string> clientIp_ {};
        shared_ptr<int64_t> clientPort_ {};
        shared_ptr<string> collection_ {};
        shared_ptr<string> connectionId_ {};
        // The execution duration. Unit: millisecond.
        shared_ptr<int64_t> consume_ {};
        // The CPU execution time. Unit: microsecond.
        shared_ptr<int64_t> cpuTime_ {};
        // The database name.
        shared_ptr<string> DBName_ {};
        // The execution time. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> executeTime_ {};
        // The extended information. This parameter is a reserved parameter.
        shared_ptr<string> ext_ {};
        // The number of rows pulled by the CNs of the PolarDB-X 2.0 instance.
        shared_ptr<int64_t> frows_ {};
        // The IP address of the client.
        shared_ptr<string> hostAddress_ {};
        // The lock wait time. Unit: millisecond.
        shared_ptr<int64_t> lockTime_ {};
        // The number of logical reads.
        shared_ptr<int64_t> logicRead_ {};
        // The ID of the child node.
        shared_ptr<string> nodeId_ {};
        // The execution timestamp. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> originTime_ {};
        // The wait time of parallel queries in the queue in the PolarDB for MySQL instance. Unit: millisecond.
        shared_ptr<string> parallelDegree_ {};
        // The degree of parallelism (DOP) value of the PolarDB for MySQL instance.
        shared_ptr<string> parallelQueueTime_ {};
        shared_ptr<string> params_ {};
        // The number of physical asynchronous reads.
        shared_ptr<int64_t> physicAsyncRead_ {};
        // The total number of physical reads.
        shared_ptr<int64_t> physicRead_ {};
        // The number of physical synchronous reads.
        shared_ptr<int64_t> physicSyncRead_ {};
        shared_ptr<string> protected_ {};
        // The number of rows returned.
        shared_ptr<int64_t> returnRows_ {};
        shared_ptr<string> rowKey_ {};
        // The total number of rows updated or returned by the CNs of the PolarDB-X 2.0 instance.
        shared_ptr<int64_t> rows_ {};
        // The number of rows scanned.
        shared_ptr<int64_t> scanRows_ {};
        // The number of requests from the compute nodes (CNs) to the data nodes (DNs) in the PolarDB-X 2.0 instance.
        shared_ptr<int64_t> scnt_ {};
        shared_ptr<int64_t> sqlCommand_ {};
        // The ID of the SQL statement.
        shared_ptr<string> sqlId_ {};
        // The queried SQL statement.
        shared_ptr<string> sqlText_ {};
        // The type of the SQL statement. Valid values:
        // 
        // *   **SELECT**
        // *   **UPDATE**
        // *   **DELETE**
        shared_ptr<string> sqlType_ {};
        // The execution result of the SQL statement. Valid values:
        // 
        // *   **0**: The execution was successful.
        // *   **1**: The execution failed.
        shared_ptr<string> state_ {};
        shared_ptr<string> tableName_ {};
        // The thread ID.
        shared_ptr<int64_t> threadId_ {};
        // The trace ID of the PolarDB-X 2.0 instance, which is the execution ID of the SQL statement on the DN.
        shared_ptr<string> traceId_ {};
        // The transaction ID.
        shared_ptr<string> trxId_ {};
        // The number of rows updated.
        shared_ptr<int64_t> updateRows_ {};
        // Indicates whether the PolarDB for MySQL instance uses In-Memory Column Indexes (IMCIs). Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<string> useImciEngine_ {};
        // The IP address to which the endpoint used for query is resolved.
        shared_ptr<string> vip_ {};
        // The number of writes to the ApsaraDB RDS for SQL Server instance.
        shared_ptr<int64_t> writes_ {};
      };

      class Filters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Filters& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_ANY_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Filters& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_ANY_FROM_JSON(Value, value_);
        };
        Filters() = default ;
        Filters(const Filters &) = default ;
        Filters(Filters &&) = default ;
        Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Filters() = default ;
        Filters& operator=(const Filters &) = default ;
        Filters& operator=(Filters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Filters& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Filters& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The name of the filter parameter.
        // 
        // >  For more information about the filter parameters, see the **Valid values of Key** section of this topic.
        shared_ptr<string> key_ {};
        // The value of the filter parameter.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->end_ == nullptr && this->expire_ == nullptr && this->export_ == nullptr && this->filters_ == nullptr && this->name_ == nullptr
        && this->queries_ == nullptr && this->start_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskType_ == nullptr
        && this->total_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
      inline Data& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


      // expire Field Functions 
      bool hasExpire() const { return this->expire_ != nullptr;};
      void deleteExpire() { this->expire_ = nullptr;};
      inline bool getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, false) };
      inline Data& setExpire(bool expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


      // export Field Functions 
      bool hasExport() const { return this->export_ != nullptr;};
      void deleteExport() { this->export_ = nullptr;};
      inline string getExport() const { DARABONBA_PTR_GET_DEFAULT(export_, "") };
      inline Data& setExport(string _export) { DARABONBA_PTR_SET_VALUE(export_, _export) };


      // filters Field Functions 
      bool hasFilters() const { return this->filters_ != nullptr;};
      void deleteFilters() { this->filters_ = nullptr;};
      inline const vector<Data::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<Data::Filters>) };
      inline vector<Data::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<Data::Filters>) };
      inline Data& setFilters(const vector<Data::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
      inline Data& setFilters(vector<Data::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // queries Field Functions 
      bool hasQueries() const { return this->queries_ != nullptr;};
      void deleteQueries() { this->queries_ = nullptr;};
      inline const vector<Data::Queries> & getQueries() const { DARABONBA_PTR_GET_CONST(queries_, vector<Data::Queries>) };
      inline vector<Data::Queries> getQueries() { DARABONBA_PTR_GET(queries_, vector<Data::Queries>) };
      inline Data& setQueries(const vector<Data::Queries> & queries) { DARABONBA_PTR_SET_VALUE(queries_, queries) };
      inline Data& setQueries(vector<Data::Queries> && queries) { DARABONBA_PTR_SET_RVALUE(queries_, queries) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
      inline Data& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Data& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // The time when the task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The end of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> end_ {};
      // Indicates whether the task has expired. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> expire_ {};
      // The download URL of the export task.
      shared_ptr<string> export_ {};
      // The filter parameters.
      shared_ptr<vector<Data::Filters>> filters_ {};
      // The task name.
      shared_ptr<string> name_ {};
      // The results of the offline querying task.
      shared_ptr<vector<Data::Queries>> queries_ {};
      // The beginning of the time range to query. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> start_ {};
      // The task state. Valid values:
      // 
      // *   **INIT**: The task is to be scheduled.
      // *   **RUNNING**: The task is running.
      // *   **FAILED**: The task failed.
      // *   **CANCELED**: The task is canceled.
      // *   **COMPLETED**: The task is complete.
      // 
      // >  If a task is in the **COMPLETED** state, you can view the results of the task.
      shared_ptr<string> status_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task type. Valid values:
      // 
      // *   **Export**
      // *   **Query**
      shared_ptr<string> taskType_ {};
      // The total number of tasks.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSqlLogTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlLogTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlLogTaskResponseBody::Data) };
    inline DescribeSqlLogTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlLogTaskResponseBody::Data) };
    inline DescribeSqlLogTaskResponseBody& setData(const DescribeSqlLogTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlLogTaskResponseBody& setData(DescribeSqlLogTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlLogTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlLogTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSqlLogTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeSqlLogTaskResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message is returned.
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
