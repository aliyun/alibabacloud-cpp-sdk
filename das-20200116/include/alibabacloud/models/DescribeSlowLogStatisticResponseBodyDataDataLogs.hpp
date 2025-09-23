// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODYDATADATALOGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram.hpp>
#include <alibabacloud/models/DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSlowLogStatisticResponseBodyDataDataLogsTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSlowLogStatisticResponseBodyDataDataLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBodyDataDataLogs& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AvgCPUTime, avgCPUTime_);
      DARABONBA_PTR_TO_JSON(AvgCPUTimeSeconds, avgCPUTimeSeconds_);
      DARABONBA_PTR_TO_JSON(AvgDocExamined, avgDocExamined_);
      DARABONBA_PTR_TO_JSON(AvgFrows, avgFrows_);
      DARABONBA_PTR_TO_JSON(AvgIOWrites, avgIOWrites_);
      DARABONBA_PTR_TO_JSON(AvgKeysExamined, avgKeysExamined_);
      DARABONBA_PTR_TO_JSON(AvgLastRowsCountAffected, avgLastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(AvgLockTime, avgLockTime_);
      DARABONBA_PTR_TO_JSON(AvgLockTimeSeconds, avgLockTimeSeconds_);
      DARABONBA_PTR_TO_JSON(AvgLogicalIOReads, avgLogicalIOReads_);
      DARABONBA_PTR_TO_JSON(AvgPhysicalIOReads, avgPhysicalIOReads_);
      DARABONBA_PTR_TO_JSON(AvgQueryTime, avgQueryTime_);
      DARABONBA_PTR_TO_JSON(AvgQueryTimeSeconds, avgQueryTimeSeconds_);
      DARABONBA_PTR_TO_JSON(AvgRequestSize, avgRequestSize_);
      DARABONBA_PTR_TO_JSON(AvgResponseSize, avgResponseSize_);
      DARABONBA_PTR_TO_JSON(AvgReturnNum, avgReturnNum_);
      DARABONBA_PTR_TO_JSON(AvgRows, avgRows_);
      DARABONBA_PTR_TO_JSON(AvgRowsCountAffected, avgRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(AvgRowsExamined, avgRowsExamined_);
      DARABONBA_PTR_TO_JSON(AvgRowsSent, avgRowsSent_);
      DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_TO_JSON(AvgScnt, avgScnt_);
      DARABONBA_PTR_TO_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_TO_JSON(CPUTimeSeconds, CPUTimeSeconds_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(Cmd, cmd_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CountRate, countRate_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_TO_JSON(DocExamined, docExamined_);
      DARABONBA_PTR_TO_JSON(DocsExamined, docsExamined_);
      DARABONBA_PTR_TO_JSON(Frows, frows_);
      DARABONBA_PTR_TO_JSON(Histogram, histogram_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(HostInsId, hostInsId_);
      DARABONBA_PTR_TO_JSON(IOWrites, IOWrites_);
      DARABONBA_PTR_TO_JSON(InsName, insName_);
      DARABONBA_PTR_TO_JSON(InsRole, insRole_);
      DARABONBA_PTR_TO_JSON(KeysExamined, keysExamined_);
      DARABONBA_PTR_TO_JSON(LastRowsCountAffected, lastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(LockTimeSeconds, lockTimeSeconds_);
      DARABONBA_PTR_TO_JSON(LogicalIOReads, logicalIOReads_);
      DARABONBA_PTR_TO_JSON(MaxCPUTime, maxCPUTime_);
      DARABONBA_PTR_TO_JSON(MaxCPUTimeSeconds, maxCPUTimeSeconds_);
      DARABONBA_PTR_TO_JSON(MaxDocExamined, maxDocExamined_);
      DARABONBA_PTR_TO_JSON(MaxFrows, maxFrows_);
      DARABONBA_PTR_TO_JSON(MaxIOWrites, maxIOWrites_);
      DARABONBA_PTR_TO_JSON(MaxKeysExamined, maxKeysExamined_);
      DARABONBA_PTR_TO_JSON(MaxLastRowsCountAffected, maxLastRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_TO_JSON(MaxLockTimeSeconds, maxLockTimeSeconds_);
      DARABONBA_PTR_TO_JSON(MaxLogicalIOReads, maxLogicalIOReads_);
      DARABONBA_PTR_TO_JSON(MaxPhysicalIOReads, maxPhysicalIOReads_);
      DARABONBA_PTR_TO_JSON(MaxQueryTime, maxQueryTime_);
      DARABONBA_PTR_TO_JSON(MaxQueryTimeSeconds, maxQueryTimeSeconds_);
      DARABONBA_PTR_TO_JSON(MaxRequestSize, maxRequestSize_);
      DARABONBA_PTR_TO_JSON(MaxResponseSize, maxResponseSize_);
      DARABONBA_PTR_TO_JSON(MaxReturnNum, maxReturnNum_);
      DARABONBA_PTR_TO_JSON(MaxRows, maxRows_);
      DARABONBA_PTR_TO_JSON(MaxRowsCountAffected, maxRowsCountAffected_);
      DARABONBA_PTR_TO_JSON(MaxRowsExamined, maxRowsExamined_);
      DARABONBA_PTR_TO_JSON(MaxRowsSent, maxRowsSent_);
      DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_TO_JSON(MaxScnt, maxScnt_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(OriginAlias, originAlias_);
      DARABONBA_PTR_TO_JSON(PhysicalIOReads, physicalIOReads_);
      DARABONBA_PTR_TO_JSON(Psql, psql_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
      DARABONBA_PTR_TO_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_TO_JSON(QueryTimeRate, queryTimeRate_);
      DARABONBA_PTR_TO_JSON(QueryTimeSeconds, queryTimeSeconds_);
      DARABONBA_PTR_TO_JSON(ReturnItemNumbers, returnItemNumbers_);
      DARABONBA_PTR_TO_JSON(ReturnNum, returnNum_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(RowsCountAffected, rowsCountAffected_);
      DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(Scheme, scheme_);
      DARABONBA_PTR_TO_JSON(Scnt, scnt_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlTag, sqlTag_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(SubInstanceId, subInstanceId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(ThreadId, threadId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBodyDataDataLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AvgCPUTime, avgCPUTime_);
      DARABONBA_PTR_FROM_JSON(AvgCPUTimeSeconds, avgCPUTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(AvgDocExamined, avgDocExamined_);
      DARABONBA_PTR_FROM_JSON(AvgFrows, avgFrows_);
      DARABONBA_PTR_FROM_JSON(AvgIOWrites, avgIOWrites_);
      DARABONBA_PTR_FROM_JSON(AvgKeysExamined, avgKeysExamined_);
      DARABONBA_PTR_FROM_JSON(AvgLastRowsCountAffected, avgLastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(AvgLockTime, avgLockTime_);
      DARABONBA_PTR_FROM_JSON(AvgLockTimeSeconds, avgLockTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(AvgLogicalIOReads, avgLogicalIOReads_);
      DARABONBA_PTR_FROM_JSON(AvgPhysicalIOReads, avgPhysicalIOReads_);
      DARABONBA_PTR_FROM_JSON(AvgQueryTime, avgQueryTime_);
      DARABONBA_PTR_FROM_JSON(AvgQueryTimeSeconds, avgQueryTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(AvgRequestSize, avgRequestSize_);
      DARABONBA_PTR_FROM_JSON(AvgResponseSize, avgResponseSize_);
      DARABONBA_PTR_FROM_JSON(AvgReturnNum, avgReturnNum_);
      DARABONBA_PTR_FROM_JSON(AvgRows, avgRows_);
      DARABONBA_PTR_FROM_JSON(AvgRowsCountAffected, avgRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(AvgRowsExamined, avgRowsExamined_);
      DARABONBA_PTR_FROM_JSON(AvgRowsSent, avgRowsSent_);
      DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
      DARABONBA_PTR_FROM_JSON(AvgScnt, avgScnt_);
      DARABONBA_PTR_FROM_JSON(CPUTime, CPUTime_);
      DARABONBA_PTR_FROM_JSON(CPUTimeSeconds, CPUTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CountRate, countRate_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
      DARABONBA_PTR_FROM_JSON(DocExamined, docExamined_);
      DARABONBA_PTR_FROM_JSON(DocsExamined, docsExamined_);
      DARABONBA_PTR_FROM_JSON(Frows, frows_);
      DARABONBA_PTR_FROM_JSON(Histogram, histogram_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(HostInsId, hostInsId_);
      DARABONBA_PTR_FROM_JSON(IOWrites, IOWrites_);
      DARABONBA_PTR_FROM_JSON(InsName, insName_);
      DARABONBA_PTR_FROM_JSON(InsRole, insRole_);
      DARABONBA_PTR_FROM_JSON(KeysExamined, keysExamined_);
      DARABONBA_PTR_FROM_JSON(LastRowsCountAffected, lastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(LockTimeSeconds, lockTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(LogicalIOReads, logicalIOReads_);
      DARABONBA_PTR_FROM_JSON(MaxCPUTime, maxCPUTime_);
      DARABONBA_PTR_FROM_JSON(MaxCPUTimeSeconds, maxCPUTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(MaxDocExamined, maxDocExamined_);
      DARABONBA_PTR_FROM_JSON(MaxFrows, maxFrows_);
      DARABONBA_PTR_FROM_JSON(MaxIOWrites, maxIOWrites_);
      DARABONBA_PTR_FROM_JSON(MaxKeysExamined, maxKeysExamined_);
      DARABONBA_PTR_FROM_JSON(MaxLastRowsCountAffected, maxLastRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_FROM_JSON(MaxLockTimeSeconds, maxLockTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(MaxLogicalIOReads, maxLogicalIOReads_);
      DARABONBA_PTR_FROM_JSON(MaxPhysicalIOReads, maxPhysicalIOReads_);
      DARABONBA_PTR_FROM_JSON(MaxQueryTime, maxQueryTime_);
      DARABONBA_PTR_FROM_JSON(MaxQueryTimeSeconds, maxQueryTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(MaxRequestSize, maxRequestSize_);
      DARABONBA_PTR_FROM_JSON(MaxResponseSize, maxResponseSize_);
      DARABONBA_PTR_FROM_JSON(MaxReturnNum, maxReturnNum_);
      DARABONBA_PTR_FROM_JSON(MaxRows, maxRows_);
      DARABONBA_PTR_FROM_JSON(MaxRowsCountAffected, maxRowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(MaxRowsExamined, maxRowsExamined_);
      DARABONBA_PTR_FROM_JSON(MaxRowsSent, maxRowsSent_);
      DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
      DARABONBA_PTR_FROM_JSON(MaxScnt, maxScnt_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(OriginAlias, originAlias_);
      DARABONBA_PTR_FROM_JSON(PhysicalIOReads, physicalIOReads_);
      DARABONBA_PTR_FROM_JSON(Psql, psql_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
      DARABONBA_PTR_FROM_JSON(QueryStartTime, queryStartTime_);
      DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
      DARABONBA_PTR_FROM_JSON(QueryTimeRate, queryTimeRate_);
      DARABONBA_PTR_FROM_JSON(QueryTimeSeconds, queryTimeSeconds_);
      DARABONBA_PTR_FROM_JSON(ReturnItemNumbers, returnItemNumbers_);
      DARABONBA_PTR_FROM_JSON(ReturnNum, returnNum_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(RowsCountAffected, rowsCountAffected_);
      DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
      DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(Scheme, scheme_);
      DARABONBA_PTR_FROM_JSON(Scnt, scnt_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlTag, sqlTag_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(SubInstanceId, subInstanceId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(ThreadId, threadId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribeSlowLogStatisticResponseBodyDataDataLogs() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogs(const DescribeSlowLogStatisticResponseBodyDataDataLogs &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogs(DescribeSlowLogStatisticResponseBodyDataDataLogs &&) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBodyDataDataLogs() = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogs& operator=(const DescribeSlowLogStatisticResponseBodyDataDataLogs &) = default ;
    DescribeSlowLogStatisticResponseBodyDataDataLogs& operator=(DescribeSlowLogStatisticResponseBodyDataDataLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->avgCPUTime_ != nullptr && this->avgCPUTimeSeconds_ != nullptr && this->avgDocExamined_ != nullptr && this->avgFrows_ != nullptr && this->avgIOWrites_ != nullptr
        && this->avgKeysExamined_ != nullptr && this->avgLastRowsCountAffected_ != nullptr && this->avgLockTime_ != nullptr && this->avgLockTimeSeconds_ != nullptr && this->avgLogicalIOReads_ != nullptr
        && this->avgPhysicalIOReads_ != nullptr && this->avgQueryTime_ != nullptr && this->avgQueryTimeSeconds_ != nullptr && this->avgRequestSize_ != nullptr && this->avgResponseSize_ != nullptr
        && this->avgReturnNum_ != nullptr && this->avgRows_ != nullptr && this->avgRowsCountAffected_ != nullptr && this->avgRowsExamined_ != nullptr && this->avgRowsSent_ != nullptr
        && this->avgRt_ != nullptr && this->avgScnt_ != nullptr && this->CPUTime_ != nullptr && this->CPUTimeSeconds_ != nullptr && this->clientIp_ != nullptr
        && this->cmd_ != nullptr && this->command_ != nullptr && this->count_ != nullptr && this->countRate_ != nullptr && this->DBName_ != nullptr
        && this->database_ != nullptr && this->dbId_ != nullptr && this->dbInstanceName_ != nullptr && this->docExamined_ != nullptr && this->docsExamined_ != nullptr
        && this->frows_ != nullptr && this->histogram_ != nullptr && this->hostAddress_ != nullptr && this->hostInsId_ != nullptr && this->IOWrites_ != nullptr
        && this->insName_ != nullptr && this->insRole_ != nullptr && this->keysExamined_ != nullptr && this->lastRowsCountAffected_ != nullptr && this->lockTime_ != nullptr
        && this->lockTimeSeconds_ != nullptr && this->logicalIOReads_ != nullptr && this->maxCPUTime_ != nullptr && this->maxCPUTimeSeconds_ != nullptr && this->maxDocExamined_ != nullptr
        && this->maxFrows_ != nullptr && this->maxIOWrites_ != nullptr && this->maxKeysExamined_ != nullptr && this->maxLastRowsCountAffected_ != nullptr && this->maxLockTime_ != nullptr
        && this->maxLockTimeSeconds_ != nullptr && this->maxLogicalIOReads_ != nullptr && this->maxPhysicalIOReads_ != nullptr && this->maxQueryTime_ != nullptr && this->maxQueryTimeSeconds_ != nullptr
        && this->maxRequestSize_ != nullptr && this->maxResponseSize_ != nullptr && this->maxReturnNum_ != nullptr && this->maxRows_ != nullptr && this->maxRowsCountAffected_ != nullptr
        && this->maxRowsExamined_ != nullptr && this->maxRowsSent_ != nullptr && this->maxRt_ != nullptr && this->maxScnt_ != nullptr && this->namespace_ != nullptr
        && this->nodeType_ != nullptr && this->opType_ != nullptr && this->originAlias_ != nullptr && this->physicalIOReads_ != nullptr && this->psql_ != nullptr
        && this->queryId_ != nullptr && this->queryStartTime_ != nullptr && this->queryTime_ != nullptr && this->queryTimeRate_ != nullptr && this->queryTimeSeconds_ != nullptr
        && this->returnItemNumbers_ != nullptr && this->returnNum_ != nullptr && this->rows_ != nullptr && this->rowsCountAffected_ != nullptr && this->rowsExamined_ != nullptr
        && this->rowsSent_ != nullptr && this->ruleId_ != nullptr && this->SQLText_ != nullptr && this->scheme_ != nullptr && this->scnt_ != nullptr
        && this->sqlId_ != nullptr && this->sqlTag_ != nullptr && this->sqlType_ != nullptr && this->subInstanceId_ != nullptr && this->tableName_ != nullptr
        && this->threadId_ != nullptr && this->timestamp_ != nullptr && this->totalCount_ != nullptr && this->trend_ != nullptr && this->user_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // avgCPUTime Field Functions 
    bool hasAvgCPUTime() const { return this->avgCPUTime_ != nullptr;};
    void deleteAvgCPUTime() { this->avgCPUTime_ = nullptr;};
    inline double avgCPUTime() const { DARABONBA_PTR_GET_DEFAULT(avgCPUTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgCPUTime(double avgCPUTime) { DARABONBA_PTR_SET_VALUE(avgCPUTime_, avgCPUTime) };


    // avgCPUTimeSeconds Field Functions 
    bool hasAvgCPUTimeSeconds() const { return this->avgCPUTimeSeconds_ != nullptr;};
    void deleteAvgCPUTimeSeconds() { this->avgCPUTimeSeconds_ = nullptr;};
    inline double avgCPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(avgCPUTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgCPUTimeSeconds(double avgCPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(avgCPUTimeSeconds_, avgCPUTimeSeconds) };


    // avgDocExamined Field Functions 
    bool hasAvgDocExamined() const { return this->avgDocExamined_ != nullptr;};
    void deleteAvgDocExamined() { this->avgDocExamined_ = nullptr;};
    inline double avgDocExamined() const { DARABONBA_PTR_GET_DEFAULT(avgDocExamined_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgDocExamined(double avgDocExamined) { DARABONBA_PTR_SET_VALUE(avgDocExamined_, avgDocExamined) };


    // avgFrows Field Functions 
    bool hasAvgFrows() const { return this->avgFrows_ != nullptr;};
    void deleteAvgFrows() { this->avgFrows_ = nullptr;};
    inline double avgFrows() const { DARABONBA_PTR_GET_DEFAULT(avgFrows_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgFrows(double avgFrows) { DARABONBA_PTR_SET_VALUE(avgFrows_, avgFrows) };


    // avgIOWrites Field Functions 
    bool hasAvgIOWrites() const { return this->avgIOWrites_ != nullptr;};
    void deleteAvgIOWrites() { this->avgIOWrites_ = nullptr;};
    inline double avgIOWrites() const { DARABONBA_PTR_GET_DEFAULT(avgIOWrites_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgIOWrites(double avgIOWrites) { DARABONBA_PTR_SET_VALUE(avgIOWrites_, avgIOWrites) };


    // avgKeysExamined Field Functions 
    bool hasAvgKeysExamined() const { return this->avgKeysExamined_ != nullptr;};
    void deleteAvgKeysExamined() { this->avgKeysExamined_ = nullptr;};
    inline double avgKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(avgKeysExamined_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgKeysExamined(double avgKeysExamined) { DARABONBA_PTR_SET_VALUE(avgKeysExamined_, avgKeysExamined) };


    // avgLastRowsCountAffected Field Functions 
    bool hasAvgLastRowsCountAffected() const { return this->avgLastRowsCountAffected_ != nullptr;};
    void deleteAvgLastRowsCountAffected() { this->avgLastRowsCountAffected_ = nullptr;};
    inline double avgLastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(avgLastRowsCountAffected_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgLastRowsCountAffected(double avgLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgLastRowsCountAffected_, avgLastRowsCountAffected) };


    // avgLockTime Field Functions 
    bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
    void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
    inline double avgLockTime() const { DARABONBA_PTR_GET_DEFAULT(avgLockTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgLockTime(double avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };


    // avgLockTimeSeconds Field Functions 
    bool hasAvgLockTimeSeconds() const { return this->avgLockTimeSeconds_ != nullptr;};
    void deleteAvgLockTimeSeconds() { this->avgLockTimeSeconds_ = nullptr;};
    inline double avgLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(avgLockTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgLockTimeSeconds(double avgLockTimeSeconds) { DARABONBA_PTR_SET_VALUE(avgLockTimeSeconds_, avgLockTimeSeconds) };


    // avgLogicalIOReads Field Functions 
    bool hasAvgLogicalIOReads() const { return this->avgLogicalIOReads_ != nullptr;};
    void deleteAvgLogicalIOReads() { this->avgLogicalIOReads_ = nullptr;};
    inline double avgLogicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(avgLogicalIOReads_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgLogicalIOReads(double avgLogicalIOReads) { DARABONBA_PTR_SET_VALUE(avgLogicalIOReads_, avgLogicalIOReads) };


    // avgPhysicalIOReads Field Functions 
    bool hasAvgPhysicalIOReads() const { return this->avgPhysicalIOReads_ != nullptr;};
    void deleteAvgPhysicalIOReads() { this->avgPhysicalIOReads_ = nullptr;};
    inline double avgPhysicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalIOReads_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgPhysicalIOReads(double avgPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(avgPhysicalIOReads_, avgPhysicalIOReads) };


    // avgQueryTime Field Functions 
    bool hasAvgQueryTime() const { return this->avgQueryTime_ != nullptr;};
    void deleteAvgQueryTime() { this->avgQueryTime_ = nullptr;};
    inline double avgQueryTime() const { DARABONBA_PTR_GET_DEFAULT(avgQueryTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgQueryTime(double avgQueryTime) { DARABONBA_PTR_SET_VALUE(avgQueryTime_, avgQueryTime) };


    // avgQueryTimeSeconds Field Functions 
    bool hasAvgQueryTimeSeconds() const { return this->avgQueryTimeSeconds_ != nullptr;};
    void deleteAvgQueryTimeSeconds() { this->avgQueryTimeSeconds_ = nullptr;};
    inline double avgQueryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(avgQueryTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgQueryTimeSeconds(double avgQueryTimeSeconds) { DARABONBA_PTR_SET_VALUE(avgQueryTimeSeconds_, avgQueryTimeSeconds) };


    // avgRequestSize Field Functions 
    bool hasAvgRequestSize() const { return this->avgRequestSize_ != nullptr;};
    void deleteAvgRequestSize() { this->avgRequestSize_ = nullptr;};
    inline double avgRequestSize() const { DARABONBA_PTR_GET_DEFAULT(avgRequestSize_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgRequestSize(double avgRequestSize) { DARABONBA_PTR_SET_VALUE(avgRequestSize_, avgRequestSize) };


    // avgResponseSize Field Functions 
    bool hasAvgResponseSize() const { return this->avgResponseSize_ != nullptr;};
    void deleteAvgResponseSize() { this->avgResponseSize_ = nullptr;};
    inline double avgResponseSize() const { DARABONBA_PTR_GET_DEFAULT(avgResponseSize_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgResponseSize(double avgResponseSize) { DARABONBA_PTR_SET_VALUE(avgResponseSize_, avgResponseSize) };


    // avgReturnNum Field Functions 
    bool hasAvgReturnNum() const { return this->avgReturnNum_ != nullptr;};
    void deleteAvgReturnNum() { this->avgReturnNum_ = nullptr;};
    inline double avgReturnNum() const { DARABONBA_PTR_GET_DEFAULT(avgReturnNum_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgReturnNum(double avgReturnNum) { DARABONBA_PTR_SET_VALUE(avgReturnNum_, avgReturnNum) };


    // avgRows Field Functions 
    bool hasAvgRows() const { return this->avgRows_ != nullptr;};
    void deleteAvgRows() { this->avgRows_ = nullptr;};
    inline double avgRows() const { DARABONBA_PTR_GET_DEFAULT(avgRows_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgRows(double avgRows) { DARABONBA_PTR_SET_VALUE(avgRows_, avgRows) };


    // avgRowsCountAffected Field Functions 
    bool hasAvgRowsCountAffected() const { return this->avgRowsCountAffected_ != nullptr;};
    void deleteAvgRowsCountAffected() { this->avgRowsCountAffected_ = nullptr;};
    inline double avgRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(avgRowsCountAffected_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgRowsCountAffected(double avgRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgRowsCountAffected_, avgRowsCountAffected) };


    // avgRowsExamined Field Functions 
    bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
    void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
    inline double avgRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(avgRowsExamined_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgRowsExamined(double avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };


    // avgRowsSent Field Functions 
    bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
    void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
    inline double avgRowsSent() const { DARABONBA_PTR_GET_DEFAULT(avgRowsSent_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgRowsSent(double avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };


    // avgRt Field Functions 
    bool hasAvgRt() const { return this->avgRt_ != nullptr;};
    void deleteAvgRt() { this->avgRt_ = nullptr;};
    inline double avgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgRt(double avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


    // avgScnt Field Functions 
    bool hasAvgScnt() const { return this->avgScnt_ != nullptr;};
    void deleteAvgScnt() { this->avgScnt_ = nullptr;};
    inline double avgScnt() const { DARABONBA_PTR_GET_DEFAULT(avgScnt_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setAvgScnt(double avgScnt) { DARABONBA_PTR_SET_VALUE(avgScnt_, avgScnt) };


    // CPUTime Field Functions 
    bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
    void deleteCPUTime() { this->CPUTime_ = nullptr;};
    inline double CPUTime() const { DARABONBA_PTR_GET_DEFAULT(CPUTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setCPUTime(double CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };


    // CPUTimeSeconds Field Functions 
    bool hasCPUTimeSeconds() const { return this->CPUTimeSeconds_ != nullptr;};
    void deleteCPUTimeSeconds() { this->CPUTimeSeconds_ = nullptr;};
    inline double CPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setCPUTimeSeconds(double CPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(CPUTimeSeconds_, CPUTimeSeconds) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // cmd Field Functions 
    bool hasCmd() const { return this->cmd_ != nullptr;};
    void deleteCmd() { this->cmd_ = nullptr;};
    inline string cmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // countRate Field Functions 
    bool hasCountRate() const { return this->countRate_ != nullptr;};
    void deleteCountRate() { this->countRate_ = nullptr;};
    inline double countRate() const { DARABONBA_PTR_GET_DEFAULT(countRate_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setCountRate(double countRate) { DARABONBA_PTR_SET_VALUE(countRate_, countRate) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbInstanceName Field Functions 
    bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
    void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
    inline string dbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


    // docExamined Field Functions 
    bool hasDocExamined() const { return this->docExamined_ != nullptr;};
    void deleteDocExamined() { this->docExamined_ = nullptr;};
    inline int64_t docExamined() const { DARABONBA_PTR_GET_DEFAULT(docExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setDocExamined(int64_t docExamined) { DARABONBA_PTR_SET_VALUE(docExamined_, docExamined) };


    // docsExamined Field Functions 
    bool hasDocsExamined() const { return this->docsExamined_ != nullptr;};
    void deleteDocsExamined() { this->docsExamined_ = nullptr;};
    inline int64_t docsExamined() const { DARABONBA_PTR_GET_DEFAULT(docsExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setDocsExamined(int64_t docsExamined) { DARABONBA_PTR_SET_VALUE(docsExamined_, docsExamined) };


    // frows Field Functions 
    bool hasFrows() const { return this->frows_ != nullptr;};
    void deleteFrows() { this->frows_ = nullptr;};
    inline int64_t frows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


    // histogram Field Functions 
    bool hasHistogram() const { return this->histogram_ != nullptr;};
    void deleteHistogram() { this->histogram_ = nullptr;};
    inline const Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram & histogram() const { DARABONBA_PTR_GET_CONST(histogram_, Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram) };
    inline Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram histogram() { DARABONBA_PTR_GET(histogram_, Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setHistogram(const Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram & histogram) { DARABONBA_PTR_SET_VALUE(histogram_, histogram) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setHistogram(Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram && histogram) { DARABONBA_PTR_SET_RVALUE(histogram_, histogram) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // hostInsId Field Functions 
    bool hasHostInsId() const { return this->hostInsId_ != nullptr;};
    void deleteHostInsId() { this->hostInsId_ = nullptr;};
    inline string hostInsId() const { DARABONBA_PTR_GET_DEFAULT(hostInsId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setHostInsId(string hostInsId) { DARABONBA_PTR_SET_VALUE(hostInsId_, hostInsId) };


    // IOWrites Field Functions 
    bool hasIOWrites() const { return this->IOWrites_ != nullptr;};
    void deleteIOWrites() { this->IOWrites_ = nullptr;};
    inline int64_t IOWrites() const { DARABONBA_PTR_GET_DEFAULT(IOWrites_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setIOWrites(int64_t IOWrites) { DARABONBA_PTR_SET_VALUE(IOWrites_, IOWrites) };


    // insName Field Functions 
    bool hasInsName() const { return this->insName_ != nullptr;};
    void deleteInsName() { this->insName_ = nullptr;};
    inline string insName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


    // insRole Field Functions 
    bool hasInsRole() const { return this->insRole_ != nullptr;};
    void deleteInsRole() { this->insRole_ = nullptr;};
    inline string insRole() const { DARABONBA_PTR_GET_DEFAULT(insRole_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setInsRole(string insRole) { DARABONBA_PTR_SET_VALUE(insRole_, insRole) };


    // keysExamined Field Functions 
    bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
    void deleteKeysExamined() { this->keysExamined_ = nullptr;};
    inline int64_t keysExamined() const { DARABONBA_PTR_GET_DEFAULT(keysExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setKeysExamined(int64_t keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };


    // lastRowsCountAffected Field Functions 
    bool hasLastRowsCountAffected() const { return this->lastRowsCountAffected_ != nullptr;};
    void deleteLastRowsCountAffected() { this->lastRowsCountAffected_ = nullptr;};
    inline int64_t lastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(lastRowsCountAffected_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setLastRowsCountAffected(int64_t lastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(lastRowsCountAffected_, lastRowsCountAffected) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline double lockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setLockTime(double lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


    // lockTimeSeconds Field Functions 
    bool hasLockTimeSeconds() const { return this->lockTimeSeconds_ != nullptr;};
    void deleteLockTimeSeconds() { this->lockTimeSeconds_ = nullptr;};
    inline double lockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(lockTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setLockTimeSeconds(double lockTimeSeconds) { DARABONBA_PTR_SET_VALUE(lockTimeSeconds_, lockTimeSeconds) };


    // logicalIOReads Field Functions 
    bool hasLogicalIOReads() const { return this->logicalIOReads_ != nullptr;};
    void deleteLogicalIOReads() { this->logicalIOReads_ = nullptr;};
    inline int64_t logicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(logicalIOReads_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setLogicalIOReads(int64_t logicalIOReads) { DARABONBA_PTR_SET_VALUE(logicalIOReads_, logicalIOReads) };


    // maxCPUTime Field Functions 
    bool hasMaxCPUTime() const { return this->maxCPUTime_ != nullptr;};
    void deleteMaxCPUTime() { this->maxCPUTime_ = nullptr;};
    inline double maxCPUTime() const { DARABONBA_PTR_GET_DEFAULT(maxCPUTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxCPUTime(double maxCPUTime) { DARABONBA_PTR_SET_VALUE(maxCPUTime_, maxCPUTime) };


    // maxCPUTimeSeconds Field Functions 
    bool hasMaxCPUTimeSeconds() const { return this->maxCPUTimeSeconds_ != nullptr;};
    void deleteMaxCPUTimeSeconds() { this->maxCPUTimeSeconds_ = nullptr;};
    inline double maxCPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxCPUTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxCPUTimeSeconds(double maxCPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(maxCPUTimeSeconds_, maxCPUTimeSeconds) };


    // maxDocExamined Field Functions 
    bool hasMaxDocExamined() const { return this->maxDocExamined_ != nullptr;};
    void deleteMaxDocExamined() { this->maxDocExamined_ = nullptr;};
    inline int64_t maxDocExamined() const { DARABONBA_PTR_GET_DEFAULT(maxDocExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxDocExamined(int64_t maxDocExamined) { DARABONBA_PTR_SET_VALUE(maxDocExamined_, maxDocExamined) };


    // maxFrows Field Functions 
    bool hasMaxFrows() const { return this->maxFrows_ != nullptr;};
    void deleteMaxFrows() { this->maxFrows_ = nullptr;};
    inline int64_t maxFrows() const { DARABONBA_PTR_GET_DEFAULT(maxFrows_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxFrows(int64_t maxFrows) { DARABONBA_PTR_SET_VALUE(maxFrows_, maxFrows) };


    // maxIOWrites Field Functions 
    bool hasMaxIOWrites() const { return this->maxIOWrites_ != nullptr;};
    void deleteMaxIOWrites() { this->maxIOWrites_ = nullptr;};
    inline int64_t maxIOWrites() const { DARABONBA_PTR_GET_DEFAULT(maxIOWrites_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxIOWrites(int64_t maxIOWrites) { DARABONBA_PTR_SET_VALUE(maxIOWrites_, maxIOWrites) };


    // maxKeysExamined Field Functions 
    bool hasMaxKeysExamined() const { return this->maxKeysExamined_ != nullptr;};
    void deleteMaxKeysExamined() { this->maxKeysExamined_ = nullptr;};
    inline int64_t maxKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(maxKeysExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxKeysExamined(int64_t maxKeysExamined) { DARABONBA_PTR_SET_VALUE(maxKeysExamined_, maxKeysExamined) };


    // maxLastRowsCountAffected Field Functions 
    bool hasMaxLastRowsCountAffected() const { return this->maxLastRowsCountAffected_ != nullptr;};
    void deleteMaxLastRowsCountAffected() { this->maxLastRowsCountAffected_ = nullptr;};
    inline int64_t maxLastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(maxLastRowsCountAffected_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxLastRowsCountAffected(int64_t maxLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxLastRowsCountAffected_, maxLastRowsCountAffected) };


    // maxLockTime Field Functions 
    bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
    void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
    inline double maxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxLockTime(double maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


    // maxLockTimeSeconds Field Functions 
    bool hasMaxLockTimeSeconds() const { return this->maxLockTimeSeconds_ != nullptr;};
    void deleteMaxLockTimeSeconds() { this->maxLockTimeSeconds_ = nullptr;};
    inline double maxLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxLockTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxLockTimeSeconds(double maxLockTimeSeconds) { DARABONBA_PTR_SET_VALUE(maxLockTimeSeconds_, maxLockTimeSeconds) };


    // maxLogicalIOReads Field Functions 
    bool hasMaxLogicalIOReads() const { return this->maxLogicalIOReads_ != nullptr;};
    void deleteMaxLogicalIOReads() { this->maxLogicalIOReads_ = nullptr;};
    inline int64_t maxLogicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(maxLogicalIOReads_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxLogicalIOReads(int64_t maxLogicalIOReads) { DARABONBA_PTR_SET_VALUE(maxLogicalIOReads_, maxLogicalIOReads) };


    // maxPhysicalIOReads Field Functions 
    bool hasMaxPhysicalIOReads() const { return this->maxPhysicalIOReads_ != nullptr;};
    void deleteMaxPhysicalIOReads() { this->maxPhysicalIOReads_ = nullptr;};
    inline int64_t maxPhysicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(maxPhysicalIOReads_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxPhysicalIOReads(int64_t maxPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(maxPhysicalIOReads_, maxPhysicalIOReads) };


    // maxQueryTime Field Functions 
    bool hasMaxQueryTime() const { return this->maxQueryTime_ != nullptr;};
    void deleteMaxQueryTime() { this->maxQueryTime_ = nullptr;};
    inline double maxQueryTime() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTime_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxQueryTime(double maxQueryTime) { DARABONBA_PTR_SET_VALUE(maxQueryTime_, maxQueryTime) };


    // maxQueryTimeSeconds Field Functions 
    bool hasMaxQueryTimeSeconds() const { return this->maxQueryTimeSeconds_ != nullptr;};
    void deleteMaxQueryTimeSeconds() { this->maxQueryTimeSeconds_ = nullptr;};
    inline double maxQueryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxQueryTimeSeconds(double maxQueryTimeSeconds) { DARABONBA_PTR_SET_VALUE(maxQueryTimeSeconds_, maxQueryTimeSeconds) };


    // maxRequestSize Field Functions 
    bool hasMaxRequestSize() const { return this->maxRequestSize_ != nullptr;};
    void deleteMaxRequestSize() { this->maxRequestSize_ = nullptr;};
    inline double maxRequestSize() const { DARABONBA_PTR_GET_DEFAULT(maxRequestSize_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxRequestSize(double maxRequestSize) { DARABONBA_PTR_SET_VALUE(maxRequestSize_, maxRequestSize) };


    // maxResponseSize Field Functions 
    bool hasMaxResponseSize() const { return this->maxResponseSize_ != nullptr;};
    void deleteMaxResponseSize() { this->maxResponseSize_ = nullptr;};
    inline double maxResponseSize() const { DARABONBA_PTR_GET_DEFAULT(maxResponseSize_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxResponseSize(double maxResponseSize) { DARABONBA_PTR_SET_VALUE(maxResponseSize_, maxResponseSize) };


    // maxReturnNum Field Functions 
    bool hasMaxReturnNum() const { return this->maxReturnNum_ != nullptr;};
    void deleteMaxReturnNum() { this->maxReturnNum_ = nullptr;};
    inline int64_t maxReturnNum() const { DARABONBA_PTR_GET_DEFAULT(maxReturnNum_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxReturnNum(int64_t maxReturnNum) { DARABONBA_PTR_SET_VALUE(maxReturnNum_, maxReturnNum) };


    // maxRows Field Functions 
    bool hasMaxRows() const { return this->maxRows_ != nullptr;};
    void deleteMaxRows() { this->maxRows_ = nullptr;};
    inline int64_t maxRows() const { DARABONBA_PTR_GET_DEFAULT(maxRows_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxRows(int64_t maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };


    // maxRowsCountAffected Field Functions 
    bool hasMaxRowsCountAffected() const { return this->maxRowsCountAffected_ != nullptr;};
    void deleteMaxRowsCountAffected() { this->maxRowsCountAffected_ = nullptr;};
    inline int64_t maxRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(maxRowsCountAffected_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxRowsCountAffected(int64_t maxRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxRowsCountAffected_, maxRowsCountAffected) };


    // maxRowsExamined Field Functions 
    bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
    void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
    inline int64_t maxRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(maxRowsExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxRowsExamined(int64_t maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };


    // maxRowsSent Field Functions 
    bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
    void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
    inline int64_t maxRowsSent() const { DARABONBA_PTR_GET_DEFAULT(maxRowsSent_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxRowsSent(int64_t maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };


    // maxRt Field Functions 
    bool hasMaxRt() const { return this->maxRt_ != nullptr;};
    void deleteMaxRt() { this->maxRt_ = nullptr;};
    inline double maxRt() const { DARABONBA_PTR_GET_DEFAULT(maxRt_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxRt(double maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };


    // maxScnt Field Functions 
    bool hasMaxScnt() const { return this->maxScnt_ != nullptr;};
    void deleteMaxScnt() { this->maxScnt_ = nullptr;};
    inline int64_t maxScnt() const { DARABONBA_PTR_GET_DEFAULT(maxScnt_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setMaxScnt(int64_t maxScnt) { DARABONBA_PTR_SET_VALUE(maxScnt_, maxScnt) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // originAlias Field Functions 
    bool hasOriginAlias() const { return this->originAlias_ != nullptr;};
    void deleteOriginAlias() { this->originAlias_ = nullptr;};
    inline string originAlias() const { DARABONBA_PTR_GET_DEFAULT(originAlias_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setOriginAlias(string originAlias) { DARABONBA_PTR_SET_VALUE(originAlias_, originAlias) };


    // physicalIOReads Field Functions 
    bool hasPhysicalIOReads() const { return this->physicalIOReads_ != nullptr;};
    void deletePhysicalIOReads() { this->physicalIOReads_ = nullptr;};
    inline int64_t physicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(physicalIOReads_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setPhysicalIOReads(int64_t physicalIOReads) { DARABONBA_PTR_SET_VALUE(physicalIOReads_, physicalIOReads) };


    // psql Field Functions 
    bool hasPsql() const { return this->psql_ != nullptr;};
    void deletePsql() { this->psql_ = nullptr;};
    inline string psql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline string queryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


    // queryStartTime Field Functions 
    bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
    void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
    inline string queryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline int64_t queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setQueryTime(int64_t queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // queryTimeRate Field Functions 
    bool hasQueryTimeRate() const { return this->queryTimeRate_ != nullptr;};
    void deleteQueryTimeRate() { this->queryTimeRate_ = nullptr;};
    inline double queryTimeRate() const { DARABONBA_PTR_GET_DEFAULT(queryTimeRate_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setQueryTimeRate(double queryTimeRate) { DARABONBA_PTR_SET_VALUE(queryTimeRate_, queryTimeRate) };


    // queryTimeSeconds Field Functions 
    bool hasQueryTimeSeconds() const { return this->queryTimeSeconds_ != nullptr;};
    void deleteQueryTimeSeconds() { this->queryTimeSeconds_ = nullptr;};
    inline double queryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(queryTimeSeconds_, 0.0) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setQueryTimeSeconds(double queryTimeSeconds) { DARABONBA_PTR_SET_VALUE(queryTimeSeconds_, queryTimeSeconds) };


    // returnItemNumbers Field Functions 
    bool hasReturnItemNumbers() const { return this->returnItemNumbers_ != nullptr;};
    void deleteReturnItemNumbers() { this->returnItemNumbers_ = nullptr;};
    inline string returnItemNumbers() const { DARABONBA_PTR_GET_DEFAULT(returnItemNumbers_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setReturnItemNumbers(string returnItemNumbers) { DARABONBA_PTR_SET_VALUE(returnItemNumbers_, returnItemNumbers) };


    // returnNum Field Functions 
    bool hasReturnNum() const { return this->returnNum_ != nullptr;};
    void deleteReturnNum() { this->returnNum_ = nullptr;};
    inline int64_t returnNum() const { DARABONBA_PTR_GET_DEFAULT(returnNum_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setReturnNum(int64_t returnNum) { DARABONBA_PTR_SET_VALUE(returnNum_, returnNum) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline int64_t rows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


    // rowsCountAffected Field Functions 
    bool hasRowsCountAffected() const { return this->rowsCountAffected_ != nullptr;};
    void deleteRowsCountAffected() { this->rowsCountAffected_ = nullptr;};
    inline int64_t rowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(rowsCountAffected_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setRowsCountAffected(int64_t rowsCountAffected) { DARABONBA_PTR_SET_VALUE(rowsCountAffected_, rowsCountAffected) };


    // rowsExamined Field Functions 
    bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
    void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
    inline int64_t rowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


    // rowsSent Field Functions 
    bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
    void deleteRowsSent() { this->rowsSent_ = nullptr;};
    inline int64_t rowsSent() const { DARABONBA_PTR_GET_DEFAULT(rowsSent_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setRowsSent(int64_t rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // scheme Field Functions 
    bool hasScheme() const { return this->scheme_ != nullptr;};
    void deleteScheme() { this->scheme_ = nullptr;};
    inline string scheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


    // scnt Field Functions 
    bool hasScnt() const { return this->scnt_ != nullptr;};
    void deleteScnt() { this->scnt_ = nullptr;};
    inline int64_t scnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline string sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlTag Field Functions 
    bool hasSqlTag() const { return this->sqlTag_ != nullptr;};
    void deleteSqlTag() { this->sqlTag_ = nullptr;};
    inline const Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag & sqlTag() const { DARABONBA_PTR_GET_CONST(sqlTag_, Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag) };
    inline Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag sqlTag() { DARABONBA_PTR_GET(sqlTag_, Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setSqlTag(const Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag & sqlTag) { DARABONBA_PTR_SET_VALUE(sqlTag_, sqlTag) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setSqlTag(Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag && sqlTag) { DARABONBA_PTR_SET_RVALUE(sqlTag_, sqlTag) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // subInstanceId Field Functions 
    bool hasSubInstanceId() const { return this->subInstanceId_ != nullptr;};
    void deleteSubInstanceId() { this->subInstanceId_ = nullptr;};
    inline string subInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subInstanceId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setSubInstanceId(string subInstanceId) { DARABONBA_PTR_SET_VALUE(subInstanceId_, subInstanceId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // threadId Field Functions 
    bool hasThreadId() const { return this->threadId_ != nullptr;};
    void deleteThreadId() { this->threadId_ = nullptr;};
    inline string threadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline const vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend> & trend() const { DARABONBA_PTR_GET_CONST(trend_, vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend>) };
    inline vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend> trend() { DARABONBA_PTR_GET(trend_, vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend>) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setTrend(const vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setTrend(vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribeSlowLogStatisticResponseBodyDataDataLogs& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<double> avgCPUTime_ = nullptr;
    std::shared_ptr<double> avgCPUTimeSeconds_ = nullptr;
    std::shared_ptr<double> avgDocExamined_ = nullptr;
    std::shared_ptr<double> avgFrows_ = nullptr;
    std::shared_ptr<double> avgIOWrites_ = nullptr;
    std::shared_ptr<double> avgKeysExamined_ = nullptr;
    std::shared_ptr<double> avgLastRowsCountAffected_ = nullptr;
    std::shared_ptr<double> avgLockTime_ = nullptr;
    std::shared_ptr<double> avgLockTimeSeconds_ = nullptr;
    std::shared_ptr<double> avgLogicalIOReads_ = nullptr;
    std::shared_ptr<double> avgPhysicalIOReads_ = nullptr;
    std::shared_ptr<double> avgQueryTime_ = nullptr;
    std::shared_ptr<double> avgQueryTimeSeconds_ = nullptr;
    std::shared_ptr<double> avgRequestSize_ = nullptr;
    std::shared_ptr<double> avgResponseSize_ = nullptr;
    std::shared_ptr<double> avgReturnNum_ = nullptr;
    std::shared_ptr<double> avgRows_ = nullptr;
    std::shared_ptr<double> avgRowsCountAffected_ = nullptr;
    std::shared_ptr<double> avgRowsExamined_ = nullptr;
    std::shared_ptr<double> avgRowsSent_ = nullptr;
    std::shared_ptr<double> avgRt_ = nullptr;
    std::shared_ptr<double> avgScnt_ = nullptr;
    std::shared_ptr<double> CPUTime_ = nullptr;
    std::shared_ptr<double> CPUTimeSeconds_ = nullptr;
    std::shared_ptr<string> clientIp_ = nullptr;
    std::shared_ptr<string> cmd_ = nullptr;
    std::shared_ptr<string> command_ = nullptr;
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<double> countRate_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
    std::shared_ptr<string> database_ = nullptr;
    std::shared_ptr<string> dbId_ = nullptr;
    std::shared_ptr<string> dbInstanceName_ = nullptr;
    std::shared_ptr<int64_t> docExamined_ = nullptr;
    std::shared_ptr<int64_t> docsExamined_ = nullptr;
    std::shared_ptr<int64_t> frows_ = nullptr;
    std::shared_ptr<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsHistogram> histogram_ = nullptr;
    std::shared_ptr<string> hostAddress_ = nullptr;
    std::shared_ptr<string> hostInsId_ = nullptr;
    std::shared_ptr<int64_t> IOWrites_ = nullptr;
    std::shared_ptr<string> insName_ = nullptr;
    std::shared_ptr<string> insRole_ = nullptr;
    std::shared_ptr<int64_t> keysExamined_ = nullptr;
    std::shared_ptr<int64_t> lastRowsCountAffected_ = nullptr;
    std::shared_ptr<double> lockTime_ = nullptr;
    std::shared_ptr<double> lockTimeSeconds_ = nullptr;
    std::shared_ptr<int64_t> logicalIOReads_ = nullptr;
    std::shared_ptr<double> maxCPUTime_ = nullptr;
    std::shared_ptr<double> maxCPUTimeSeconds_ = nullptr;
    std::shared_ptr<int64_t> maxDocExamined_ = nullptr;
    std::shared_ptr<int64_t> maxFrows_ = nullptr;
    std::shared_ptr<int64_t> maxIOWrites_ = nullptr;
    std::shared_ptr<int64_t> maxKeysExamined_ = nullptr;
    std::shared_ptr<int64_t> maxLastRowsCountAffected_ = nullptr;
    std::shared_ptr<double> maxLockTime_ = nullptr;
    std::shared_ptr<double> maxLockTimeSeconds_ = nullptr;
    std::shared_ptr<int64_t> maxLogicalIOReads_ = nullptr;
    std::shared_ptr<int64_t> maxPhysicalIOReads_ = nullptr;
    std::shared_ptr<double> maxQueryTime_ = nullptr;
    std::shared_ptr<double> maxQueryTimeSeconds_ = nullptr;
    std::shared_ptr<double> maxRequestSize_ = nullptr;
    std::shared_ptr<double> maxResponseSize_ = nullptr;
    std::shared_ptr<int64_t> maxReturnNum_ = nullptr;
    std::shared_ptr<int64_t> maxRows_ = nullptr;
    std::shared_ptr<int64_t> maxRowsCountAffected_ = nullptr;
    std::shared_ptr<int64_t> maxRowsExamined_ = nullptr;
    std::shared_ptr<int64_t> maxRowsSent_ = nullptr;
    std::shared_ptr<double> maxRt_ = nullptr;
    std::shared_ptr<int64_t> maxScnt_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> opType_ = nullptr;
    std::shared_ptr<string> originAlias_ = nullptr;
    std::shared_ptr<int64_t> physicalIOReads_ = nullptr;
    std::shared_ptr<string> psql_ = nullptr;
    std::shared_ptr<string> queryId_ = nullptr;
    std::shared_ptr<string> queryStartTime_ = nullptr;
    std::shared_ptr<int64_t> queryTime_ = nullptr;
    std::shared_ptr<double> queryTimeRate_ = nullptr;
    std::shared_ptr<double> queryTimeSeconds_ = nullptr;
    std::shared_ptr<string> returnItemNumbers_ = nullptr;
    std::shared_ptr<int64_t> returnNum_ = nullptr;
    std::shared_ptr<int64_t> rows_ = nullptr;
    std::shared_ptr<int64_t> rowsCountAffected_ = nullptr;
    std::shared_ptr<int64_t> rowsExamined_ = nullptr;
    std::shared_ptr<int64_t> rowsSent_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
    std::shared_ptr<string> SQLText_ = nullptr;
    std::shared_ptr<string> scheme_ = nullptr;
    std::shared_ptr<int64_t> scnt_ = nullptr;
    // SQL ID。
    std::shared_ptr<string> sqlId_ = nullptr;
    std::shared_ptr<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsSqlTag> sqlTag_ = nullptr;
    std::shared_ptr<string> sqlType_ = nullptr;
    std::shared_ptr<string> subInstanceId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> threadId_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    std::shared_ptr<vector<Models::DescribeSlowLogStatisticResponseBodyDataDataLogsTrend>> trend_ = nullptr;
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
