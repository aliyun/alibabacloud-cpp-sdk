// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYDATALOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYDATALOGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodyDataLogsSqlTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyDataLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyDataLogs& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_TO_JSON(CPUTimeSeconds, CPUTimeSeconds_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Cmd, cmd_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(DocsExamined, docsExamined_);
      DARABONBA_PTR_TO_JSON(Frows, frows_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(IOWrites, IOWrites_);
      DARABONBA_PTR_TO_JSON(InsName, insName_);
      DARABONBA_PTR_TO_JSON(KeysExamined, keysExamined_);
      DARABONBA_PTR_TO_JSON(LastRowsCountAffected, lastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(LockTimeSeconds, lockTimeSeconds_);
      DARABONBA_PTR_TO_JSON(LogicalIOReads, logicalIOReads_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(OriginTime, originTime_);
      DARABONBA_PTR_TO_JSON(PhysicalIOReads, physicalIOReads_);
      DARABONBA_PTR_TO_JSON(Psql, psql_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_TO_JSON(QueryTimeSeconds, queryTimeSeconds_);
      DARABONBA_PTR_TO_JSON(RequestSize, requestSize_);
      DARABONBA_PTR_TO_JSON(ResponseSize, responseSize_);
      DARABONBA_PTR_TO_JSON(ReturnItemNumbers, returnItemNumbers_);
      DARABONBA_PTR_TO_JSON(ReturnNum, returnNum_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RowsCountAffected, rowsCountAffected_);
      DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(Scnt, scnt_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlTag, sqlTag_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(SubInstanceId, subInstanceId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyDataLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_FROM_JSON(CPUTimeSeconds, CPUTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(DocsExamined, docsExamined_);
      DARABONBA_PTR_FROM_JSON(Frows, frows_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(IOWrites, IOWrites_);
      DARABONBA_PTR_FROM_JSON(InsName, insName_);
      DARABONBA_PTR_FROM_JSON(KeysExamined, keysExamined_);
      DARABONBA_PTR_FROM_JSON(LastRowsCountAffected, lastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(LockTimeSeconds, lockTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(LogicalIOReads, logicalIOReads_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(OriginTime, originTime_);
      DARABONBA_PTR_FROM_JSON(PhysicalIOReads, physicalIOReads_);
      DARABONBA_PTR_FROM_JSON(Psql, psql_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_FROM_JSON(QueryTimeSeconds, queryTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(RequestSize, requestSize_);
      DARABONBA_PTR_FROM_JSON(ResponseSize, responseSize_);
      DARABONBA_PTR_FROM_JSON(ReturnItemNumbers, returnItemNumbers_);
      DARABONBA_PTR_FROM_JSON(ReturnNum, returnNum_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RowsCountAffected, rowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlTag, sqlTag_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(SubInstanceId, subInstanceId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeSlowLogRecordsResponseBodyDataLogs() = default ;
    DescribeSlowLogRecordsResponseBodyDataLogs(const DescribeSlowLogRecordsResponseBodyDataLogs &) = default ;
    DescribeSlowLogRecordsResponseBodyDataLogs(DescribeSlowLogRecordsResponseBodyDataLogs &&) = default ;
    DescribeSlowLogRecordsResponseBodyDataLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyDataLogs() = default ;
    DescribeSlowLogRecordsResponseBodyDataLogs& operator=(const DescribeSlowLogRecordsResponseBodyDataLogs &) = default ;
    DescribeSlowLogRecordsResponseBodyDataLogs& operator=(DescribeSlowLogRecordsResponseBodyDataLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->applicationName_ == nullptr && return this->CPUTime_ == nullptr && return this->CPUTimeSeconds_ == nullptr && return this->clientIp_ == nullptr && return this->cmd_ == nullptr
        && return this->command_ == nullptr && return this->DBName_ == nullptr && return this->dbId_ == nullptr && return this->dbInstanceName_ == nullptr && return this->docsExamined_ == nullptr
        && return this->frows_ == nullptr && return this->hostAddress_ == nullptr && return this->IOWrites_ == nullptr && return this->insName_ == nullptr && return this->keysExamined_ == nullptr
        && return this->lastRowsCountAffected_ == nullptr && return this->lockTime_ == nullptr && return this->lockTimeSeconds_ == nullptr && return this->logicalIOReads_ == nullptr && return this->namespace_ == nullptr
        && return this->nodeId_ == nullptr && return this->opType_ == nullptr && return this->originTime_ == nullptr && return this->physicalIOReads_ == nullptr && return this->psql_ == nullptr
        && return this->queryId_ == nullptr && return this->queryStartTime_ == nullptr && return this->queryTime_ == nullptr && return this->queryTimeSeconds_ == nullptr && return this->requestSize_ == nullptr
        && return this->responseSize_ == nullptr && return this->returnItemNumbers_ == nullptr && return this->returnNum_ == nullptr && return this->rows_ == nullptr && return this->rowsCountAffected_ == nullptr
        && return this->rowsExamined_ == nullptr && return this->rowsSent_ == nullptr && return this->rt_ == nullptr && return this->SQLText_ == nullptr && return this->scheme_ == nullptr
        && return this->scnt_ == nullptr && return this->sqlId_ == nullptr && return this->sqlTag_ == nullptr && return this->sqlType_ == nullptr && return this->subInstanceId_ == nullptr
        && return this->tableName_ == nullptr && return this->templateId_ == nullptr && return this->threadId_ == nullptr && return this->timestamp_ == nullptr && return this->traceId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string applicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // CPUTime Field Functions 
    bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
    void deleteCPUTime() { this->CPUTime_ = nullptr;};
    inline double CPUTime() const { DARABONBA_PTR_GET_DEFAULT(CPUTime_, 0.0) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setCPUTime(double CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };


    // CPUTimeSeconds Field Functions 
    bool hasCPUTimeSeconds() const { return this->CPUTimeSeconds_ != nullptr;};
    void deleteCPUTimeSeconds() { this->CPUTimeSeconds_ = nullptr;};
    inline double CPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeSeconds_, 0.0) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setCPUTimeSeconds(double CPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(CPUTimeSeconds_, CPUTimeSeconds) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // docsExamined Field Functions 
    bool hasDocsExamined() const { return this->docsExamined_ != nullptr;};
    void deleteDocsExamined() { this->docsExamined_ = nullptr;};
    inline string docsExamined() const { DARABONBA_PTR_GET_DEFAULT(docsExamined_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setDocsExamined(string docsExamined) { DARABONBA_PTR_SET_VALUE(docsExamined_, docsExamined) };


    // frows Field Functions 
    bool hasFrows() const { return this->frows_ != nullptr;};
    void deleteFrows() { this->frows_ = nullptr;};
    inline int64_t frows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // IOWrites Field Functions 
    bool hasIOWrites() const { return this->IOWrites_ != nullptr;};
    void deleteIOWrites() { this->IOWrites_ = nullptr;};
    inline int64_t IOWrites() const { DARABONBA_PTR_GET_DEFAULT(IOWrites_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setIOWrites(int64_t IOWrites) { DARABONBA_PTR_SET_VALUE(IOWrites_, IOWrites) };


    // insName Field Functions 
    bool hasInsName() const { return this->insName_ != nullptr;};
    void deleteInsName() { this->insName_ = nullptr;};
    inline string insName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


    // keysExamined Field Functions 
    bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
    void deleteKeysExamined() { this->keysExamined_ = nullptr;};
    inline string keysExamined() const { DARABONBA_PTR_GET_DEFAULT(keysExamined_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setKeysExamined(string keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };


    // lastRowsCountAffected Field Functions 
    bool hasLastRowsCountAffected() const { return this->lastRowsCountAffected_ != nullptr;};
    void deleteLastRowsCountAffected() { this->lastRowsCountAffected_ = nullptr;};
    inline int64_t lastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(lastRowsCountAffected_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setLastRowsCountAffected(int64_t lastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(lastRowsCountAffected_, lastRowsCountAffected) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline double lockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0.0) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setLockTime(double lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


    // lockTimeSeconds Field Functions 
    bool hasLockTimeSeconds() const { return this->lockTimeSeconds_ != nullptr;};
    void deleteLockTimeSeconds() { this->lockTimeSeconds_ = nullptr;};
    inline double lockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(lockTimeSeconds_, 0.0) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setLockTimeSeconds(double lockTimeSeconds) { DARABONBA_PTR_SET_VALUE(lockTimeSeconds_, lockTimeSeconds) };


    // logicalIOReads Field Functions 
    bool hasLogicalIOReads() const { return this->logicalIOReads_ != nullptr;};
    void deleteLogicalIOReads() { this->logicalIOReads_ = nullptr;};
    inline int64_t logicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(logicalIOReads_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setLogicalIOReads(int64_t logicalIOReads) { DARABONBA_PTR_SET_VALUE(logicalIOReads_, logicalIOReads) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // originTime Field Functions 
    bool hasOriginTime() const { return this->originTime_ != nullptr;};
    void deleteOriginTime() { this->originTime_ = nullptr;};
    inline string originTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setOriginTime(string originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


    // physicalIOReads Field Functions 
    bool hasPhysicalIOReads() const { return this->physicalIOReads_ != nullptr;};
    void deletePhysicalIOReads() { this->physicalIOReads_ = nullptr;};
    inline int64_t physicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(physicalIOReads_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setPhysicalIOReads(int64_t physicalIOReads) { DARABONBA_PTR_SET_VALUE(physicalIOReads_, physicalIOReads) };


    // psql Field Functions 
    bool hasPsql() const { return this->psql_ != nullptr;};
    void deletePsql() { this->psql_ = nullptr;};
    inline string psql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline int64_t queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setQueryTime(int64_t queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // queryTimeSeconds Field Functions 
    bool hasQueryTimeSeconds() const { return this->queryTimeSeconds_ != nullptr;};
    void deleteQueryTimeSeconds() { this->queryTimeSeconds_ = nullptr;};
    inline double queryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(queryTimeSeconds_, 0.0) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setQueryTimeSeconds(double queryTimeSeconds) { DARABONBA_PTR_SET_VALUE(queryTimeSeconds_, queryTimeSeconds) };


    // requestSize Field Functions 
    bool hasRequestSize() const { return this->requestSize_ != nullptr;};
    void deleteRequestSize() { this->requestSize_ = nullptr;};
    inline int64_t requestSize() const { DARABONBA_PTR_GET_DEFAULT(requestSize_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setRequestSize(int64_t requestSize) { DARABONBA_PTR_SET_VALUE(requestSize_, requestSize) };


    // responseSize Field Functions 
    bool hasResponseSize() const { return this->responseSize_ != nullptr;};
    void deleteResponseSize() { this->responseSize_ = nullptr;};
    inline int64_t responseSize() const { DARABONBA_PTR_GET_DEFAULT(responseSize_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setResponseSize(int64_t responseSize) { DARABONBA_PTR_SET_VALUE(responseSize_, responseSize) };


    // returnItemNumbers Field Functions 
    bool hasReturnItemNumbers() const { return this->returnItemNumbers_ != nullptr;};
    void deleteReturnItemNumbers() { this->returnItemNumbers_ = nullptr;};
    inline string returnItemNumbers() const { DARABONBA_PTR_GET_DEFAULT(returnItemNumbers_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setReturnItemNumbers(string returnItemNumbers) { DARABONBA_PTR_SET_VALUE(returnItemNumbers_, returnItemNumbers) };


    // returnNum Field Functions 
    bool hasReturnNum() const { return this->returnNum_ != nullptr;};
    void deleteReturnNum() { this->returnNum_ = nullptr;};
    inline string returnNum() const { DARABONBA_PTR_GET_DEFAULT(returnNum_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setReturnNum(string returnNum) { DARABONBA_PTR_SET_VALUE(returnNum_, returnNum) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline int64_t rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsCountAffected Field Functions 
    bool hasRowsCountAffected() const { return this->rowsCountAffected_ != nullptr;};
    void deleteRowsCountAffected() { this->rowsCountAffected_ = nullptr;};
    inline int64_t rowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(rowsCountAffected_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setRowsCountAffected(int64_t rowsCountAffected) { DARABONBA_PTR_SET_VALUE(rowsCountAffected_, rowsCountAffected) };


    // rowsExamined Field Functions 
    bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
    void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
    inline int64_t rowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


    // rowsSent Field Functions 
    bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
    void deleteRowsSent() { this->rowsSent_ = nullptr;};
    inline int64_t rowsSent() const { DARABONBA_PTR_GET_DEFAULT(rowsSent_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setRowsSent(int64_t rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline int64_t rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setRt(int64_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string scheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // scnt Field Functions 
    bool hasScnt() const { return this->scnt_ != nullptr;};
    void deleteScnt() { this->scnt_ = nullptr;};
    inline int64_t scnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlTag Field Functions 
    bool hasSqlTag() const { return this->sqlTag_ != nullptr;};
    void deleteSqlTag() { this->sqlTag_ = nullptr;};
    inline const Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag & sqlTag() const { DARABONBA_PTR_GET_CONST(sqlTag_, Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag) };
    inline Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag sqlTag() { DARABONBA_PTR_GET(sqlTag_, Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setSqlTag(const Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag & sqlTag) { DARABONBA_PTR_SET_VALUE(sqlTag_, sqlTag) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setSqlTag(Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag && sqlTag) { DARABONBA_PTR_SET_RVALUE(sqlTag_, sqlTag) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // subInstanceId Field Functions 
    bool hasSubInstanceId() const { return this->subInstanceId_ != nullptr;};
    void deleteSubInstanceId() { this->subInstanceId_ = nullptr;};
    inline string subInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subInstanceId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setSubInstanceId(string subInstanceId) { DARABONBA_PTR_SET_VALUE(subInstanceId_, subInstanceId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeSlowLogRecordsResponseBodyDataLogs& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> applicationName_ = nullptr;
    std::shared_ptr<double> CPUTime_ = nullptr;
    std::shared_ptr<double> CPUTimeSeconds_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<string> cmd_ = nullptr;
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> dbId_ = nullptr;
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    std::shared_ptr<string> docsExamined_ = nullptr;
    std::shared_ptr<int64_t> frows_ = nullptr;
    std::shared_ptr<string> hostAddress_ = nullptr;
    std::shared_ptr<int64_t> IOWrites_ = nullptr;
    std::shared_ptr<string> insName_ = nullptr;
    std::shared_ptr<string> keysExamined_ = nullptr;
    std::shared_ptr<int64_t> lastRowsCountAffected_ = nullptr;
    std::shared_ptr<double> lockTime_ = nullptr;
    std::shared_ptr<double> lockTimeSeconds_ = nullptr;
    std::shared_ptr<int64_t> logicalIOReads_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> opType_ = nullptr;
    std::shared_ptr<string> originTime_ = nullptr;
    std::shared_ptr<int64_t> physicalIOReads_ = nullptr;
    std::shared_ptr<string> psql_ = nullptr;
    std::shared_ptr<string> queryId_ = nullptr;
    std::shared_ptr<string> queryStartTime_ = nullptr;
    std::shared_ptr<int64_t> queryTime_ = nullptr;
    std::shared_ptr<double> queryTimeSeconds_ = nullptr;
    std::shared_ptr<int64_t> requestSize_ = nullptr;
    std::shared_ptr<int64_t> responseSize_ = nullptr;
    std::shared_ptr<string> returnItemNumbers_ = nullptr;
    std::shared_ptr<string> returnNum_ = nullptr;
    std::shared_ptr<int64_t> rows_ = nullptr;
    std::shared_ptr<int64_t> rowsCountAffected_ = nullptr;
    std::shared_ptr<int64_t> rowsExamined_ = nullptr;
    std::shared_ptr<int64_t> rowsSent_ = nullptr;
    std::shared_ptr<int64_t> rt_ = nullptr;
    std::shared_ptr<string> SQLText_ = nullptr;
    std::shared_ptr<string> scheme_ = nullptr;
    std::shared_ptr<int64_t> scnt_ = nullptr;
    std::shared_ptr<string> sqlId_ = nullptr;
    std::shared_ptr<Models::DescribeSlowLogRecordsResponseBodyDataLogsSqlTag> sqlTag_ = nullptr;
    std::shared_ptr<string> sqlType_ = nullptr;
    std::shared_ptr<string> subInstanceId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
