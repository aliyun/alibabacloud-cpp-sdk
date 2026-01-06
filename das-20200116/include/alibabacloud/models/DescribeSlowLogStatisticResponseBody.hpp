// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSTATISTICRESPONSEBODY_HPP_
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
  class DescribeSlowLogStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSlowLogStatisticResponseBody() = default ;
    DescribeSlowLogStatisticResponseBody(const DescribeSlowLogStatisticResponseBody &) = default ;
    DescribeSlowLogStatisticResponseBody(DescribeSlowLogStatisticResponseBody &&) = default ;
    DescribeSlowLogStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogStatisticResponseBody() = default ;
    DescribeSlowLogStatisticResponseBody& operator=(const DescribeSlowLogStatisticResponseBody &) = default ;
    DescribeSlowLogStatisticResponseBody& operator=(DescribeSlowLogStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_TO_JSON(ResultId, resultId_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RequestKey, requestKey_);
        DARABONBA_PTR_FROM_JSON(ResultId, resultId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
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
      class DataItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataItem& obj) { 
          DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_TO_JSON(DbInstanceName, dbInstanceName_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(ItemsNumbers, itemsNumbers_);
          DARABONBA_PTR_TO_JSON(Logs, logs_);
          DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
        };
        friend void from_json(const Darabonba::Json& j, DataItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
          DARABONBA_PTR_FROM_JSON(DbInstanceName, dbInstanceName_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(ItemsNumbers, itemsNumbers_);
          DARABONBA_PTR_FROM_JSON(Logs, logs_);
          DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
        };
        DataItem() = default ;
        DataItem(const DataItem &) = default ;
        DataItem(DataItem &&) = default ;
        DataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataItem() = default ;
        DataItem& operator=(const DataItem &) = default ;
        DataItem& operator=(DataItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Logs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Logs& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Logs& obj) { 
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
          Logs() = default ;
          Logs(const Logs &) = default ;
          Logs(Logs &&) = default ;
          Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Logs() = default ;
          Logs& operator=(const Logs &) = default ;
          Logs& operator=(Logs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Trend : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Trend& obj) { 
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_ANY_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Trend& obj) { 
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_ANY_FROM_JSON(Value, value_);
            };
            Trend() = default ;
            Trend(const Trend &) = default ;
            Trend(Trend &&) = default ;
            Trend(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Trend() = default ;
            Trend& operator=(const Trend &) = default ;
            Trend& operator=(Trend &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
            // timestamp Field Functions 
            bool hasTimestamp() const { return this->timestamp_ != nullptr;};
            void deleteTimestamp() { this->timestamp_ = nullptr;};
            inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
            inline Trend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline             const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
            Darabonba::Json & getValue() { DARABONBA_GET(value_) };
            inline Trend& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
            inline Trend& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


          protected:
            shared_ptr<int64_t> timestamp_ {};
            Darabonba::Json value_ {};
          };

          class SqlTag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SqlTag& obj) { 
              DARABONBA_PTR_TO_JSON(Comments, comments_);
              DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
              DARABONBA_PTR_TO_JSON(Tags, tags_);
            };
            friend void from_json(const Darabonba::Json& j, SqlTag& obj) { 
              DARABONBA_PTR_FROM_JSON(Comments, comments_);
              DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
              DARABONBA_PTR_FROM_JSON(Tags, tags_);
            };
            SqlTag() = default ;
            SqlTag(const SqlTag &) = default ;
            SqlTag(SqlTag &&) = default ;
            SqlTag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SqlTag() = default ;
            SqlTag& operator=(const SqlTag &) = default ;
            SqlTag& operator=(SqlTag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->comments_ == nullptr
        && this->sqlId_ == nullptr && this->tags_ == nullptr; };
            // comments Field Functions 
            bool hasComments() const { return this->comments_ != nullptr;};
            void deleteComments() { this->comments_ = nullptr;};
            inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
            inline SqlTag& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


            // sqlId Field Functions 
            bool hasSqlId() const { return this->sqlId_ != nullptr;};
            void deleteSqlId() { this->sqlId_ = nullptr;};
            inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
            inline SqlTag& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


            // tags Field Functions 
            bool hasTags() const { return this->tags_ != nullptr;};
            void deleteTags() { this->tags_ = nullptr;};
            inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
            inline SqlTag& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


          protected:
            shared_ptr<string> comments_ {};
            // SQL ID。
            shared_ptr<string> sqlId_ {};
            shared_ptr<string> tags_ {};
          };

          class Histogram : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Histogram& obj) { 
              DARABONBA_PTR_TO_JSON(AvgLockTime, avgLockTime_);
              DARABONBA_PTR_TO_JSON(AvgRowsExamined, avgRowsExamined_);
              DARABONBA_PTR_TO_JSON(AvgRowsSent, avgRowsSent_);
              DARABONBA_PTR_TO_JSON(AvgRt, avgRt_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Item, item_);
              DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
              DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
              DARABONBA_PTR_TO_JSON(MaxRowsExamined, maxRowsExamined_);
              DARABONBA_PTR_TO_JSON(MaxRowsSent, maxRowsSent_);
              DARABONBA_PTR_TO_JSON(MaxRt, maxRt_);
              DARABONBA_PTR_TO_JSON(RowsExamined, rowsExamined_);
              DARABONBA_PTR_TO_JSON(RowsSent, rowsSent_);
              DARABONBA_PTR_TO_JSON(Rt, rt_);
              DARABONBA_PTR_TO_JSON(Total, total_);
              DARABONBA_PTR_TO_JSON(Ts, ts_);
              DARABONBA_PTR_TO_JSON(TsEnd, tsEnd_);
            };
            friend void from_json(const Darabonba::Json& j, Histogram& obj) { 
              DARABONBA_PTR_FROM_JSON(AvgLockTime, avgLockTime_);
              DARABONBA_PTR_FROM_JSON(AvgRowsExamined, avgRowsExamined_);
              DARABONBA_PTR_FROM_JSON(AvgRowsSent, avgRowsSent_);
              DARABONBA_PTR_FROM_JSON(AvgRt, avgRt_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Item, item_);
              DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
              DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
              DARABONBA_PTR_FROM_JSON(MaxRowsExamined, maxRowsExamined_);
              DARABONBA_PTR_FROM_JSON(MaxRowsSent, maxRowsSent_);
              DARABONBA_PTR_FROM_JSON(MaxRt, maxRt_);
              DARABONBA_PTR_FROM_JSON(RowsExamined, rowsExamined_);
              DARABONBA_PTR_FROM_JSON(RowsSent, rowsSent_);
              DARABONBA_PTR_FROM_JSON(Rt, rt_);
              DARABONBA_PTR_FROM_JSON(Total, total_);
              DARABONBA_PTR_FROM_JSON(Ts, ts_);
              DARABONBA_PTR_FROM_JSON(TsEnd, tsEnd_);
            };
            Histogram() = default ;
            Histogram(const Histogram &) = default ;
            Histogram(Histogram &&) = default ;
            Histogram(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Histogram() = default ;
            Histogram& operator=(const Histogram &) = default ;
            Histogram& operator=(Histogram &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Item : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Item& obj) { 
                DARABONBA_PTR_TO_JSON(Count, count_);
                DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
              };
              friend void from_json(const Darabonba::Json& j, Item& obj) { 
                DARABONBA_PTR_FROM_JSON(Count, count_);
                DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
              };
              Item() = default ;
              Item(const Item &) = default ;
              Item(Item &&) = default ;
              Item(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Item() = default ;
              Item& operator=(const Item &) = default ;
              Item& operator=(Item &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->count_ == nullptr
        && this->nodeId_ == nullptr; };
              // count Field Functions 
              bool hasCount() const { return this->count_ != nullptr;};
              void deleteCount() { this->count_ = nullptr;};
              inline const vector<int64_t> & getCount() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
              inline vector<int64_t> getCount() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
              inline Item& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
              inline Item& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


              // nodeId Field Functions 
              bool hasNodeId() const { return this->nodeId_ != nullptr;};
              void deleteNodeId() { this->nodeId_ = nullptr;};
              inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
              inline Item& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


            protected:
              shared_ptr<vector<int64_t>> count_ {};
              shared_ptr<string> nodeId_ {};
            };

            virtual bool empty() const override { return this->avgLockTime_ == nullptr
        && this->avgRowsExamined_ == nullptr && this->avgRowsSent_ == nullptr && this->avgRt_ == nullptr && this->count_ == nullptr && this->item_ == nullptr
        && this->lockTime_ == nullptr && this->maxLockTime_ == nullptr && this->maxRowsExamined_ == nullptr && this->maxRowsSent_ == nullptr && this->maxRt_ == nullptr
        && this->rowsExamined_ == nullptr && this->rowsSent_ == nullptr && this->rt_ == nullptr && this->total_ == nullptr && this->ts_ == nullptr
        && this->tsEnd_ == nullptr; };
            // avgLockTime Field Functions 
            bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
            void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
            inline const vector<double> & getAvgLockTime() const { DARABONBA_PTR_GET_CONST(avgLockTime_, vector<double>) };
            inline vector<double> getAvgLockTime() { DARABONBA_PTR_GET(avgLockTime_, vector<double>) };
            inline Histogram& setAvgLockTime(const vector<double> & avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };
            inline Histogram& setAvgLockTime(vector<double> && avgLockTime) { DARABONBA_PTR_SET_RVALUE(avgLockTime_, avgLockTime) };


            // avgRowsExamined Field Functions 
            bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
            void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
            inline const vector<double> & getAvgRowsExamined() const { DARABONBA_PTR_GET_CONST(avgRowsExamined_, vector<double>) };
            inline vector<double> getAvgRowsExamined() { DARABONBA_PTR_GET(avgRowsExamined_, vector<double>) };
            inline Histogram& setAvgRowsExamined(const vector<double> & avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };
            inline Histogram& setAvgRowsExamined(vector<double> && avgRowsExamined) { DARABONBA_PTR_SET_RVALUE(avgRowsExamined_, avgRowsExamined) };


            // avgRowsSent Field Functions 
            bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
            void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
            inline const vector<double> & getAvgRowsSent() const { DARABONBA_PTR_GET_CONST(avgRowsSent_, vector<double>) };
            inline vector<double> getAvgRowsSent() { DARABONBA_PTR_GET(avgRowsSent_, vector<double>) };
            inline Histogram& setAvgRowsSent(const vector<double> & avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };
            inline Histogram& setAvgRowsSent(vector<double> && avgRowsSent) { DARABONBA_PTR_SET_RVALUE(avgRowsSent_, avgRowsSent) };


            // avgRt Field Functions 
            bool hasAvgRt() const { return this->avgRt_ != nullptr;};
            void deleteAvgRt() { this->avgRt_ = nullptr;};
            inline const vector<double> & getAvgRt() const { DARABONBA_PTR_GET_CONST(avgRt_, vector<double>) };
            inline vector<double> getAvgRt() { DARABONBA_PTR_GET(avgRt_, vector<double>) };
            inline Histogram& setAvgRt(const vector<double> & avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };
            inline Histogram& setAvgRt(vector<double> && avgRt) { DARABONBA_PTR_SET_RVALUE(avgRt_, avgRt) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline const vector<int64_t> & getCount() const { DARABONBA_PTR_GET_CONST(count_, vector<int64_t>) };
            inline vector<int64_t> getCount() { DARABONBA_PTR_GET(count_, vector<int64_t>) };
            inline Histogram& setCount(const vector<int64_t> & count) { DARABONBA_PTR_SET_VALUE(count_, count) };
            inline Histogram& setCount(vector<int64_t> && count) { DARABONBA_PTR_SET_RVALUE(count_, count) };


            // item Field Functions 
            bool hasItem() const { return this->item_ != nullptr;};
            void deleteItem() { this->item_ = nullptr;};
            inline const vector<Histogram::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Histogram::Item>) };
            inline vector<Histogram::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Histogram::Item>) };
            inline Histogram& setItem(const vector<Histogram::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
            inline Histogram& setItem(vector<Histogram::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


            // lockTime Field Functions 
            bool hasLockTime() const { return this->lockTime_ != nullptr;};
            void deleteLockTime() { this->lockTime_ = nullptr;};
            inline const vector<double> & getLockTime() const { DARABONBA_PTR_GET_CONST(lockTime_, vector<double>) };
            inline vector<double> getLockTime() { DARABONBA_PTR_GET(lockTime_, vector<double>) };
            inline Histogram& setLockTime(const vector<double> & lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };
            inline Histogram& setLockTime(vector<double> && lockTime) { DARABONBA_PTR_SET_RVALUE(lockTime_, lockTime) };


            // maxLockTime Field Functions 
            bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
            void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
            inline const vector<double> & getMaxLockTime() const { DARABONBA_PTR_GET_CONST(maxLockTime_, vector<double>) };
            inline vector<double> getMaxLockTime() { DARABONBA_PTR_GET(maxLockTime_, vector<double>) };
            inline Histogram& setMaxLockTime(const vector<double> & maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };
            inline Histogram& setMaxLockTime(vector<double> && maxLockTime) { DARABONBA_PTR_SET_RVALUE(maxLockTime_, maxLockTime) };


            // maxRowsExamined Field Functions 
            bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
            void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
            inline const vector<int64_t> & getMaxRowsExamined() const { DARABONBA_PTR_GET_CONST(maxRowsExamined_, vector<int64_t>) };
            inline vector<int64_t> getMaxRowsExamined() { DARABONBA_PTR_GET(maxRowsExamined_, vector<int64_t>) };
            inline Histogram& setMaxRowsExamined(const vector<int64_t> & maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };
            inline Histogram& setMaxRowsExamined(vector<int64_t> && maxRowsExamined) { DARABONBA_PTR_SET_RVALUE(maxRowsExamined_, maxRowsExamined) };


            // maxRowsSent Field Functions 
            bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
            void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
            inline const vector<int64_t> & getMaxRowsSent() const { DARABONBA_PTR_GET_CONST(maxRowsSent_, vector<int64_t>) };
            inline vector<int64_t> getMaxRowsSent() { DARABONBA_PTR_GET(maxRowsSent_, vector<int64_t>) };
            inline Histogram& setMaxRowsSent(const vector<int64_t> & maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };
            inline Histogram& setMaxRowsSent(vector<int64_t> && maxRowsSent) { DARABONBA_PTR_SET_RVALUE(maxRowsSent_, maxRowsSent) };


            // maxRt Field Functions 
            bool hasMaxRt() const { return this->maxRt_ != nullptr;};
            void deleteMaxRt() { this->maxRt_ = nullptr;};
            inline const vector<double> & getMaxRt() const { DARABONBA_PTR_GET_CONST(maxRt_, vector<double>) };
            inline vector<double> getMaxRt() { DARABONBA_PTR_GET(maxRt_, vector<double>) };
            inline Histogram& setMaxRt(const vector<double> & maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };
            inline Histogram& setMaxRt(vector<double> && maxRt) { DARABONBA_PTR_SET_RVALUE(maxRt_, maxRt) };


            // rowsExamined Field Functions 
            bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
            void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
            inline const vector<int64_t> & getRowsExamined() const { DARABONBA_PTR_GET_CONST(rowsExamined_, vector<int64_t>) };
            inline vector<int64_t> getRowsExamined() { DARABONBA_PTR_GET(rowsExamined_, vector<int64_t>) };
            inline Histogram& setRowsExamined(const vector<int64_t> & rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };
            inline Histogram& setRowsExamined(vector<int64_t> && rowsExamined) { DARABONBA_PTR_SET_RVALUE(rowsExamined_, rowsExamined) };


            // rowsSent Field Functions 
            bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
            void deleteRowsSent() { this->rowsSent_ = nullptr;};
            inline const vector<int64_t> & getRowsSent() const { DARABONBA_PTR_GET_CONST(rowsSent_, vector<int64_t>) };
            inline vector<int64_t> getRowsSent() { DARABONBA_PTR_GET(rowsSent_, vector<int64_t>) };
            inline Histogram& setRowsSent(const vector<int64_t> & rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };
            inline Histogram& setRowsSent(vector<int64_t> && rowsSent) { DARABONBA_PTR_SET_RVALUE(rowsSent_, rowsSent) };


            // rt Field Functions 
            bool hasRt() const { return this->rt_ != nullptr;};
            void deleteRt() { this->rt_ = nullptr;};
            inline const vector<double> & getRt() const { DARABONBA_PTR_GET_CONST(rt_, vector<double>) };
            inline vector<double> getRt() { DARABONBA_PTR_GET(rt_, vector<double>) };
            inline Histogram& setRt(const vector<double> & rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };
            inline Histogram& setRt(vector<double> && rt) { DARABONBA_PTR_SET_RVALUE(rt_, rt) };


            // total Field Functions 
            bool hasTotal() const { return this->total_ != nullptr;};
            void deleteTotal() { this->total_ = nullptr;};
            inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
            inline Histogram& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


            // ts Field Functions 
            bool hasTs() const { return this->ts_ != nullptr;};
            void deleteTs() { this->ts_ = nullptr;};
            inline const vector<int64_t> & getTs() const { DARABONBA_PTR_GET_CONST(ts_, vector<int64_t>) };
            inline vector<int64_t> getTs() { DARABONBA_PTR_GET(ts_, vector<int64_t>) };
            inline Histogram& setTs(const vector<int64_t> & ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };
            inline Histogram& setTs(vector<int64_t> && ts) { DARABONBA_PTR_SET_RVALUE(ts_, ts) };


            // tsEnd Field Functions 
            bool hasTsEnd() const { return this->tsEnd_ != nullptr;};
            void deleteTsEnd() { this->tsEnd_ = nullptr;};
            inline const vector<int64_t> & getTsEnd() const { DARABONBA_PTR_GET_CONST(tsEnd_, vector<int64_t>) };
            inline vector<int64_t> getTsEnd() { DARABONBA_PTR_GET(tsEnd_, vector<int64_t>) };
            inline Histogram& setTsEnd(const vector<int64_t> & tsEnd) { DARABONBA_PTR_SET_VALUE(tsEnd_, tsEnd) };
            inline Histogram& setTsEnd(vector<int64_t> && tsEnd) { DARABONBA_PTR_SET_RVALUE(tsEnd_, tsEnd) };


          protected:
            shared_ptr<vector<double>> avgLockTime_ {};
            shared_ptr<vector<double>> avgRowsExamined_ {};
            shared_ptr<vector<double>> avgRowsSent_ {};
            shared_ptr<vector<double>> avgRt_ {};
            shared_ptr<vector<int64_t>> count_ {};
            shared_ptr<vector<Histogram::Item>> item_ {};
            shared_ptr<vector<double>> lockTime_ {};
            shared_ptr<vector<double>> maxLockTime_ {};
            shared_ptr<vector<int64_t>> maxRowsExamined_ {};
            shared_ptr<vector<int64_t>> maxRowsSent_ {};
            shared_ptr<vector<double>> maxRt_ {};
            shared_ptr<vector<int64_t>> rowsExamined_ {};
            shared_ptr<vector<int64_t>> rowsSent_ {};
            shared_ptr<vector<double>> rt_ {};
            shared_ptr<int64_t> total_ {};
            shared_ptr<vector<int64_t>> ts_ {};
            shared_ptr<vector<int64_t>> tsEnd_ {};
          };

          virtual bool empty() const override { return this->accountName_ == nullptr
        && this->avgCPUTime_ == nullptr && this->avgCPUTimeSeconds_ == nullptr && this->avgDocExamined_ == nullptr && this->avgFrows_ == nullptr && this->avgIOWrites_ == nullptr
        && this->avgKeysExamined_ == nullptr && this->avgLastRowsCountAffected_ == nullptr && this->avgLockTime_ == nullptr && this->avgLockTimeSeconds_ == nullptr && this->avgLogicalIOReads_ == nullptr
        && this->avgPhysicalIOReads_ == nullptr && this->avgQueryTime_ == nullptr && this->avgQueryTimeSeconds_ == nullptr && this->avgRequestSize_ == nullptr && this->avgResponseSize_ == nullptr
        && this->avgReturnNum_ == nullptr && this->avgRows_ == nullptr && this->avgRowsCountAffected_ == nullptr && this->avgRowsExamined_ == nullptr && this->avgRowsSent_ == nullptr
        && this->avgRt_ == nullptr && this->avgScnt_ == nullptr && this->CPUTime_ == nullptr && this->CPUTimeSeconds_ == nullptr && this->clientIp_ == nullptr
        && this->cmd_ == nullptr && this->command_ == nullptr && this->count_ == nullptr && this->countRate_ == nullptr && this->DBName_ == nullptr
        && this->database_ == nullptr && this->dbId_ == nullptr && this->dbInstanceName_ == nullptr && this->docExamined_ == nullptr && this->docsExamined_ == nullptr
        && this->frows_ == nullptr && this->histogram_ == nullptr && this->hostAddress_ == nullptr && this->hostInsId_ == nullptr && this->IOWrites_ == nullptr
        && this->insName_ == nullptr && this->insRole_ == nullptr && this->keysExamined_ == nullptr && this->lastRowsCountAffected_ == nullptr && this->lockTime_ == nullptr
        && this->lockTimeSeconds_ == nullptr && this->logicalIOReads_ == nullptr && this->maxCPUTime_ == nullptr && this->maxCPUTimeSeconds_ == nullptr && this->maxDocExamined_ == nullptr
        && this->maxFrows_ == nullptr && this->maxIOWrites_ == nullptr && this->maxKeysExamined_ == nullptr && this->maxLastRowsCountAffected_ == nullptr && this->maxLockTime_ == nullptr
        && this->maxLockTimeSeconds_ == nullptr && this->maxLogicalIOReads_ == nullptr && this->maxPhysicalIOReads_ == nullptr && this->maxQueryTime_ == nullptr && this->maxQueryTimeSeconds_ == nullptr
        && this->maxRequestSize_ == nullptr && this->maxResponseSize_ == nullptr && this->maxReturnNum_ == nullptr && this->maxRows_ == nullptr && this->maxRowsCountAffected_ == nullptr
        && this->maxRowsExamined_ == nullptr && this->maxRowsSent_ == nullptr && this->maxRt_ == nullptr && this->maxScnt_ == nullptr && this->namespace_ == nullptr
        && this->nodeType_ == nullptr && this->opType_ == nullptr && this->originAlias_ == nullptr && this->physicalIOReads_ == nullptr && this->psql_ == nullptr
        && this->queryId_ == nullptr && this->queryStartTime_ == nullptr && this->queryTime_ == nullptr && this->queryTimeRate_ == nullptr && this->queryTimeSeconds_ == nullptr
        && this->returnItemNumbers_ == nullptr && this->returnNum_ == nullptr && this->rows_ == nullptr && this->rowsCountAffected_ == nullptr && this->rowsExamined_ == nullptr
        && this->rowsSent_ == nullptr && this->ruleId_ == nullptr && this->SQLText_ == nullptr && this->scheme_ == nullptr && this->scnt_ == nullptr
        && this->sqlId_ == nullptr && this->sqlTag_ == nullptr && this->sqlType_ == nullptr && this->subInstanceId_ == nullptr && this->tableName_ == nullptr
        && this->threadId_ == nullptr && this->timestamp_ == nullptr && this->totalCount_ == nullptr && this->trend_ == nullptr && this->user_ == nullptr; };
          // accountName Field Functions 
          bool hasAccountName() const { return this->accountName_ != nullptr;};
          void deleteAccountName() { this->accountName_ = nullptr;};
          inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
          inline Logs& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // avgCPUTime Field Functions 
          bool hasAvgCPUTime() const { return this->avgCPUTime_ != nullptr;};
          void deleteAvgCPUTime() { this->avgCPUTime_ = nullptr;};
          inline double getAvgCPUTime() const { DARABONBA_PTR_GET_DEFAULT(avgCPUTime_, 0.0) };
          inline Logs& setAvgCPUTime(double avgCPUTime) { DARABONBA_PTR_SET_VALUE(avgCPUTime_, avgCPUTime) };


          // avgCPUTimeSeconds Field Functions 
          bool hasAvgCPUTimeSeconds() const { return this->avgCPUTimeSeconds_ != nullptr;};
          void deleteAvgCPUTimeSeconds() { this->avgCPUTimeSeconds_ = nullptr;};
          inline double getAvgCPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(avgCPUTimeSeconds_, 0.0) };
          inline Logs& setAvgCPUTimeSeconds(double avgCPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(avgCPUTimeSeconds_, avgCPUTimeSeconds) };


          // avgDocExamined Field Functions 
          bool hasAvgDocExamined() const { return this->avgDocExamined_ != nullptr;};
          void deleteAvgDocExamined() { this->avgDocExamined_ = nullptr;};
          inline double getAvgDocExamined() const { DARABONBA_PTR_GET_DEFAULT(avgDocExamined_, 0.0) };
          inline Logs& setAvgDocExamined(double avgDocExamined) { DARABONBA_PTR_SET_VALUE(avgDocExamined_, avgDocExamined) };


          // avgFrows Field Functions 
          bool hasAvgFrows() const { return this->avgFrows_ != nullptr;};
          void deleteAvgFrows() { this->avgFrows_ = nullptr;};
          inline double getAvgFrows() const { DARABONBA_PTR_GET_DEFAULT(avgFrows_, 0.0) };
          inline Logs& setAvgFrows(double avgFrows) { DARABONBA_PTR_SET_VALUE(avgFrows_, avgFrows) };


          // avgIOWrites Field Functions 
          bool hasAvgIOWrites() const { return this->avgIOWrites_ != nullptr;};
          void deleteAvgIOWrites() { this->avgIOWrites_ = nullptr;};
          inline double getAvgIOWrites() const { DARABONBA_PTR_GET_DEFAULT(avgIOWrites_, 0.0) };
          inline Logs& setAvgIOWrites(double avgIOWrites) { DARABONBA_PTR_SET_VALUE(avgIOWrites_, avgIOWrites) };


          // avgKeysExamined Field Functions 
          bool hasAvgKeysExamined() const { return this->avgKeysExamined_ != nullptr;};
          void deleteAvgKeysExamined() { this->avgKeysExamined_ = nullptr;};
          inline double getAvgKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(avgKeysExamined_, 0.0) };
          inline Logs& setAvgKeysExamined(double avgKeysExamined) { DARABONBA_PTR_SET_VALUE(avgKeysExamined_, avgKeysExamined) };


          // avgLastRowsCountAffected Field Functions 
          bool hasAvgLastRowsCountAffected() const { return this->avgLastRowsCountAffected_ != nullptr;};
          void deleteAvgLastRowsCountAffected() { this->avgLastRowsCountAffected_ = nullptr;};
          inline double getAvgLastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(avgLastRowsCountAffected_, 0.0) };
          inline Logs& setAvgLastRowsCountAffected(double avgLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgLastRowsCountAffected_, avgLastRowsCountAffected) };


          // avgLockTime Field Functions 
          bool hasAvgLockTime() const { return this->avgLockTime_ != nullptr;};
          void deleteAvgLockTime() { this->avgLockTime_ = nullptr;};
          inline double getAvgLockTime() const { DARABONBA_PTR_GET_DEFAULT(avgLockTime_, 0.0) };
          inline Logs& setAvgLockTime(double avgLockTime) { DARABONBA_PTR_SET_VALUE(avgLockTime_, avgLockTime) };


          // avgLockTimeSeconds Field Functions 
          bool hasAvgLockTimeSeconds() const { return this->avgLockTimeSeconds_ != nullptr;};
          void deleteAvgLockTimeSeconds() { this->avgLockTimeSeconds_ = nullptr;};
          inline double getAvgLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(avgLockTimeSeconds_, 0.0) };
          inline Logs& setAvgLockTimeSeconds(double avgLockTimeSeconds) { DARABONBA_PTR_SET_VALUE(avgLockTimeSeconds_, avgLockTimeSeconds) };


          // avgLogicalIOReads Field Functions 
          bool hasAvgLogicalIOReads() const { return this->avgLogicalIOReads_ != nullptr;};
          void deleteAvgLogicalIOReads() { this->avgLogicalIOReads_ = nullptr;};
          inline double getAvgLogicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(avgLogicalIOReads_, 0.0) };
          inline Logs& setAvgLogicalIOReads(double avgLogicalIOReads) { DARABONBA_PTR_SET_VALUE(avgLogicalIOReads_, avgLogicalIOReads) };


          // avgPhysicalIOReads Field Functions 
          bool hasAvgPhysicalIOReads() const { return this->avgPhysicalIOReads_ != nullptr;};
          void deleteAvgPhysicalIOReads() { this->avgPhysicalIOReads_ = nullptr;};
          inline double getAvgPhysicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(avgPhysicalIOReads_, 0.0) };
          inline Logs& setAvgPhysicalIOReads(double avgPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(avgPhysicalIOReads_, avgPhysicalIOReads) };


          // avgQueryTime Field Functions 
          bool hasAvgQueryTime() const { return this->avgQueryTime_ != nullptr;};
          void deleteAvgQueryTime() { this->avgQueryTime_ = nullptr;};
          inline double getAvgQueryTime() const { DARABONBA_PTR_GET_DEFAULT(avgQueryTime_, 0.0) };
          inline Logs& setAvgQueryTime(double avgQueryTime) { DARABONBA_PTR_SET_VALUE(avgQueryTime_, avgQueryTime) };


          // avgQueryTimeSeconds Field Functions 
          bool hasAvgQueryTimeSeconds() const { return this->avgQueryTimeSeconds_ != nullptr;};
          void deleteAvgQueryTimeSeconds() { this->avgQueryTimeSeconds_ = nullptr;};
          inline double getAvgQueryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(avgQueryTimeSeconds_, 0.0) };
          inline Logs& setAvgQueryTimeSeconds(double avgQueryTimeSeconds) { DARABONBA_PTR_SET_VALUE(avgQueryTimeSeconds_, avgQueryTimeSeconds) };


          // avgRequestSize Field Functions 
          bool hasAvgRequestSize() const { return this->avgRequestSize_ != nullptr;};
          void deleteAvgRequestSize() { this->avgRequestSize_ = nullptr;};
          inline double getAvgRequestSize() const { DARABONBA_PTR_GET_DEFAULT(avgRequestSize_, 0.0) };
          inline Logs& setAvgRequestSize(double avgRequestSize) { DARABONBA_PTR_SET_VALUE(avgRequestSize_, avgRequestSize) };


          // avgResponseSize Field Functions 
          bool hasAvgResponseSize() const { return this->avgResponseSize_ != nullptr;};
          void deleteAvgResponseSize() { this->avgResponseSize_ = nullptr;};
          inline double getAvgResponseSize() const { DARABONBA_PTR_GET_DEFAULT(avgResponseSize_, 0.0) };
          inline Logs& setAvgResponseSize(double avgResponseSize) { DARABONBA_PTR_SET_VALUE(avgResponseSize_, avgResponseSize) };


          // avgReturnNum Field Functions 
          bool hasAvgReturnNum() const { return this->avgReturnNum_ != nullptr;};
          void deleteAvgReturnNum() { this->avgReturnNum_ = nullptr;};
          inline double getAvgReturnNum() const { DARABONBA_PTR_GET_DEFAULT(avgReturnNum_, 0.0) };
          inline Logs& setAvgReturnNum(double avgReturnNum) { DARABONBA_PTR_SET_VALUE(avgReturnNum_, avgReturnNum) };


          // avgRows Field Functions 
          bool hasAvgRows() const { return this->avgRows_ != nullptr;};
          void deleteAvgRows() { this->avgRows_ = nullptr;};
          inline double getAvgRows() const { DARABONBA_PTR_GET_DEFAULT(avgRows_, 0.0) };
          inline Logs& setAvgRows(double avgRows) { DARABONBA_PTR_SET_VALUE(avgRows_, avgRows) };


          // avgRowsCountAffected Field Functions 
          bool hasAvgRowsCountAffected() const { return this->avgRowsCountAffected_ != nullptr;};
          void deleteAvgRowsCountAffected() { this->avgRowsCountAffected_ = nullptr;};
          inline double getAvgRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(avgRowsCountAffected_, 0.0) };
          inline Logs& setAvgRowsCountAffected(double avgRowsCountAffected) { DARABONBA_PTR_SET_VALUE(avgRowsCountAffected_, avgRowsCountAffected) };


          // avgRowsExamined Field Functions 
          bool hasAvgRowsExamined() const { return this->avgRowsExamined_ != nullptr;};
          void deleteAvgRowsExamined() { this->avgRowsExamined_ = nullptr;};
          inline double getAvgRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(avgRowsExamined_, 0.0) };
          inline Logs& setAvgRowsExamined(double avgRowsExamined) { DARABONBA_PTR_SET_VALUE(avgRowsExamined_, avgRowsExamined) };


          // avgRowsSent Field Functions 
          bool hasAvgRowsSent() const { return this->avgRowsSent_ != nullptr;};
          void deleteAvgRowsSent() { this->avgRowsSent_ = nullptr;};
          inline double getAvgRowsSent() const { DARABONBA_PTR_GET_DEFAULT(avgRowsSent_, 0.0) };
          inline Logs& setAvgRowsSent(double avgRowsSent) { DARABONBA_PTR_SET_VALUE(avgRowsSent_, avgRowsSent) };


          // avgRt Field Functions 
          bool hasAvgRt() const { return this->avgRt_ != nullptr;};
          void deleteAvgRt() { this->avgRt_ = nullptr;};
          inline double getAvgRt() const { DARABONBA_PTR_GET_DEFAULT(avgRt_, 0.0) };
          inline Logs& setAvgRt(double avgRt) { DARABONBA_PTR_SET_VALUE(avgRt_, avgRt) };


          // avgScnt Field Functions 
          bool hasAvgScnt() const { return this->avgScnt_ != nullptr;};
          void deleteAvgScnt() { this->avgScnt_ = nullptr;};
          inline double getAvgScnt() const { DARABONBA_PTR_GET_DEFAULT(avgScnt_, 0.0) };
          inline Logs& setAvgScnt(double avgScnt) { DARABONBA_PTR_SET_VALUE(avgScnt_, avgScnt) };


          // CPUTime Field Functions 
          bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
          void deleteCPUTime() { this->CPUTime_ = nullptr;};
          inline double getCPUTime() const { DARABONBA_PTR_GET_DEFAULT(CPUTime_, 0.0) };
          inline Logs& setCPUTime(double CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };


          // CPUTimeSeconds Field Functions 
          bool hasCPUTimeSeconds() const { return this->CPUTimeSeconds_ != nullptr;};
          void deleteCPUTimeSeconds() { this->CPUTimeSeconds_ = nullptr;};
          inline double getCPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeSeconds_, 0.0) };
          inline Logs& setCPUTimeSeconds(double CPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(CPUTimeSeconds_, CPUTimeSeconds) };


          // clientIp Field Functions 
          bool hasClientIp() const { return this->clientIp_ != nullptr;};
          void deleteClientIp() { this->clientIp_ = nullptr;};
          inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
          inline Logs& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


          // cmd Field Functions 
          bool hasCmd() const { return this->cmd_ != nullptr;};
          void deleteCmd() { this->cmd_ = nullptr;};
          inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
          inline Logs& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


          // command Field Functions 
          bool hasCommand() const { return this->command_ != nullptr;};
          void deleteCommand() { this->command_ = nullptr;};
          inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
          inline Logs& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline Logs& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // countRate Field Functions 
          bool hasCountRate() const { return this->countRate_ != nullptr;};
          void deleteCountRate() { this->countRate_ = nullptr;};
          inline double getCountRate() const { DARABONBA_PTR_GET_DEFAULT(countRate_, 0.0) };
          inline Logs& setCountRate(double countRate) { DARABONBA_PTR_SET_VALUE(countRate_, countRate) };


          // DBName Field Functions 
          bool hasDBName() const { return this->DBName_ != nullptr;};
          void deleteDBName() { this->DBName_ = nullptr;};
          inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
          inline Logs& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


          // database Field Functions 
          bool hasDatabase() const { return this->database_ != nullptr;};
          void deleteDatabase() { this->database_ = nullptr;};
          inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
          inline Logs& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


          // dbId Field Functions 
          bool hasDbId() const { return this->dbId_ != nullptr;};
          void deleteDbId() { this->dbId_ = nullptr;};
          inline string getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
          inline Logs& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


          // dbInstanceName Field Functions 
          bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
          void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
          inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
          inline Logs& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


          // docExamined Field Functions 
          bool hasDocExamined() const { return this->docExamined_ != nullptr;};
          void deleteDocExamined() { this->docExamined_ = nullptr;};
          inline int64_t getDocExamined() const { DARABONBA_PTR_GET_DEFAULT(docExamined_, 0L) };
          inline Logs& setDocExamined(int64_t docExamined) { DARABONBA_PTR_SET_VALUE(docExamined_, docExamined) };


          // docsExamined Field Functions 
          bool hasDocsExamined() const { return this->docsExamined_ != nullptr;};
          void deleteDocsExamined() { this->docsExamined_ = nullptr;};
          inline int64_t getDocsExamined() const { DARABONBA_PTR_GET_DEFAULT(docsExamined_, 0L) };
          inline Logs& setDocsExamined(int64_t docsExamined) { DARABONBA_PTR_SET_VALUE(docsExamined_, docsExamined) };


          // frows Field Functions 
          bool hasFrows() const { return this->frows_ != nullptr;};
          void deleteFrows() { this->frows_ = nullptr;};
          inline int64_t getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
          inline Logs& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


          // histogram Field Functions 
          bool hasHistogram() const { return this->histogram_ != nullptr;};
          void deleteHistogram() { this->histogram_ = nullptr;};
          inline const Logs::Histogram & getHistogram() const { DARABONBA_PTR_GET_CONST(histogram_, Logs::Histogram) };
          inline Logs::Histogram getHistogram() { DARABONBA_PTR_GET(histogram_, Logs::Histogram) };
          inline Logs& setHistogram(const Logs::Histogram & histogram) { DARABONBA_PTR_SET_VALUE(histogram_, histogram) };
          inline Logs& setHistogram(Logs::Histogram && histogram) { DARABONBA_PTR_SET_RVALUE(histogram_, histogram) };


          // hostAddress Field Functions 
          bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
          void deleteHostAddress() { this->hostAddress_ = nullptr;};
          inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
          inline Logs& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


          // hostInsId Field Functions 
          bool hasHostInsId() const { return this->hostInsId_ != nullptr;};
          void deleteHostInsId() { this->hostInsId_ = nullptr;};
          inline string getHostInsId() const { DARABONBA_PTR_GET_DEFAULT(hostInsId_, "") };
          inline Logs& setHostInsId(string hostInsId) { DARABONBA_PTR_SET_VALUE(hostInsId_, hostInsId) };


          // IOWrites Field Functions 
          bool hasIOWrites() const { return this->IOWrites_ != nullptr;};
          void deleteIOWrites() { this->IOWrites_ = nullptr;};
          inline int64_t getIOWrites() const { DARABONBA_PTR_GET_DEFAULT(IOWrites_, 0L) };
          inline Logs& setIOWrites(int64_t IOWrites) { DARABONBA_PTR_SET_VALUE(IOWrites_, IOWrites) };


          // insName Field Functions 
          bool hasInsName() const { return this->insName_ != nullptr;};
          void deleteInsName() { this->insName_ = nullptr;};
          inline string getInsName() const { DARABONBA_PTR_GET_DEFAULT(insName_, "") };
          inline Logs& setInsName(string insName) { DARABONBA_PTR_SET_VALUE(insName_, insName) };


          // insRole Field Functions 
          bool hasInsRole() const { return this->insRole_ != nullptr;};
          void deleteInsRole() { this->insRole_ = nullptr;};
          inline string getInsRole() const { DARABONBA_PTR_GET_DEFAULT(insRole_, "") };
          inline Logs& setInsRole(string insRole) { DARABONBA_PTR_SET_VALUE(insRole_, insRole) };


          // keysExamined Field Functions 
          bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
          void deleteKeysExamined() { this->keysExamined_ = nullptr;};
          inline int64_t getKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(keysExamined_, 0L) };
          inline Logs& setKeysExamined(int64_t keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };


          // lastRowsCountAffected Field Functions 
          bool hasLastRowsCountAffected() const { return this->lastRowsCountAffected_ != nullptr;};
          void deleteLastRowsCountAffected() { this->lastRowsCountAffected_ = nullptr;};
          inline int64_t getLastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(lastRowsCountAffected_, 0L) };
          inline Logs& setLastRowsCountAffected(int64_t lastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(lastRowsCountAffected_, lastRowsCountAffected) };


          // lockTime Field Functions 
          bool hasLockTime() const { return this->lockTime_ != nullptr;};
          void deleteLockTime() { this->lockTime_ = nullptr;};
          inline double getLockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0.0) };
          inline Logs& setLockTime(double lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


          // lockTimeSeconds Field Functions 
          bool hasLockTimeSeconds() const { return this->lockTimeSeconds_ != nullptr;};
          void deleteLockTimeSeconds() { this->lockTimeSeconds_ = nullptr;};
          inline double getLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(lockTimeSeconds_, 0.0) };
          inline Logs& setLockTimeSeconds(double lockTimeSeconds) { DARABONBA_PTR_SET_VALUE(lockTimeSeconds_, lockTimeSeconds) };


          // logicalIOReads Field Functions 
          bool hasLogicalIOReads() const { return this->logicalIOReads_ != nullptr;};
          void deleteLogicalIOReads() { this->logicalIOReads_ = nullptr;};
          inline int64_t getLogicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(logicalIOReads_, 0L) };
          inline Logs& setLogicalIOReads(int64_t logicalIOReads) { DARABONBA_PTR_SET_VALUE(logicalIOReads_, logicalIOReads) };


          // maxCPUTime Field Functions 
          bool hasMaxCPUTime() const { return this->maxCPUTime_ != nullptr;};
          void deleteMaxCPUTime() { this->maxCPUTime_ = nullptr;};
          inline double getMaxCPUTime() const { DARABONBA_PTR_GET_DEFAULT(maxCPUTime_, 0.0) };
          inline Logs& setMaxCPUTime(double maxCPUTime) { DARABONBA_PTR_SET_VALUE(maxCPUTime_, maxCPUTime) };


          // maxCPUTimeSeconds Field Functions 
          bool hasMaxCPUTimeSeconds() const { return this->maxCPUTimeSeconds_ != nullptr;};
          void deleteMaxCPUTimeSeconds() { this->maxCPUTimeSeconds_ = nullptr;};
          inline double getMaxCPUTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxCPUTimeSeconds_, 0.0) };
          inline Logs& setMaxCPUTimeSeconds(double maxCPUTimeSeconds) { DARABONBA_PTR_SET_VALUE(maxCPUTimeSeconds_, maxCPUTimeSeconds) };


          // maxDocExamined Field Functions 
          bool hasMaxDocExamined() const { return this->maxDocExamined_ != nullptr;};
          void deleteMaxDocExamined() { this->maxDocExamined_ = nullptr;};
          inline int64_t getMaxDocExamined() const { DARABONBA_PTR_GET_DEFAULT(maxDocExamined_, 0L) };
          inline Logs& setMaxDocExamined(int64_t maxDocExamined) { DARABONBA_PTR_SET_VALUE(maxDocExamined_, maxDocExamined) };


          // maxFrows Field Functions 
          bool hasMaxFrows() const { return this->maxFrows_ != nullptr;};
          void deleteMaxFrows() { this->maxFrows_ = nullptr;};
          inline int64_t getMaxFrows() const { DARABONBA_PTR_GET_DEFAULT(maxFrows_, 0L) };
          inline Logs& setMaxFrows(int64_t maxFrows) { DARABONBA_PTR_SET_VALUE(maxFrows_, maxFrows) };


          // maxIOWrites Field Functions 
          bool hasMaxIOWrites() const { return this->maxIOWrites_ != nullptr;};
          void deleteMaxIOWrites() { this->maxIOWrites_ = nullptr;};
          inline int64_t getMaxIOWrites() const { DARABONBA_PTR_GET_DEFAULT(maxIOWrites_, 0L) };
          inline Logs& setMaxIOWrites(int64_t maxIOWrites) { DARABONBA_PTR_SET_VALUE(maxIOWrites_, maxIOWrites) };


          // maxKeysExamined Field Functions 
          bool hasMaxKeysExamined() const { return this->maxKeysExamined_ != nullptr;};
          void deleteMaxKeysExamined() { this->maxKeysExamined_ = nullptr;};
          inline int64_t getMaxKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(maxKeysExamined_, 0L) };
          inline Logs& setMaxKeysExamined(int64_t maxKeysExamined) { DARABONBA_PTR_SET_VALUE(maxKeysExamined_, maxKeysExamined) };


          // maxLastRowsCountAffected Field Functions 
          bool hasMaxLastRowsCountAffected() const { return this->maxLastRowsCountAffected_ != nullptr;};
          void deleteMaxLastRowsCountAffected() { this->maxLastRowsCountAffected_ = nullptr;};
          inline int64_t getMaxLastRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(maxLastRowsCountAffected_, 0L) };
          inline Logs& setMaxLastRowsCountAffected(int64_t maxLastRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxLastRowsCountAffected_, maxLastRowsCountAffected) };


          // maxLockTime Field Functions 
          bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
          void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
          inline double getMaxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0.0) };
          inline Logs& setMaxLockTime(double maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


          // maxLockTimeSeconds Field Functions 
          bool hasMaxLockTimeSeconds() const { return this->maxLockTimeSeconds_ != nullptr;};
          void deleteMaxLockTimeSeconds() { this->maxLockTimeSeconds_ = nullptr;};
          inline double getMaxLockTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxLockTimeSeconds_, 0.0) };
          inline Logs& setMaxLockTimeSeconds(double maxLockTimeSeconds) { DARABONBA_PTR_SET_VALUE(maxLockTimeSeconds_, maxLockTimeSeconds) };


          // maxLogicalIOReads Field Functions 
          bool hasMaxLogicalIOReads() const { return this->maxLogicalIOReads_ != nullptr;};
          void deleteMaxLogicalIOReads() { this->maxLogicalIOReads_ = nullptr;};
          inline int64_t getMaxLogicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(maxLogicalIOReads_, 0L) };
          inline Logs& setMaxLogicalIOReads(int64_t maxLogicalIOReads) { DARABONBA_PTR_SET_VALUE(maxLogicalIOReads_, maxLogicalIOReads) };


          // maxPhysicalIOReads Field Functions 
          bool hasMaxPhysicalIOReads() const { return this->maxPhysicalIOReads_ != nullptr;};
          void deleteMaxPhysicalIOReads() { this->maxPhysicalIOReads_ = nullptr;};
          inline int64_t getMaxPhysicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(maxPhysicalIOReads_, 0L) };
          inline Logs& setMaxPhysicalIOReads(int64_t maxPhysicalIOReads) { DARABONBA_PTR_SET_VALUE(maxPhysicalIOReads_, maxPhysicalIOReads) };


          // maxQueryTime Field Functions 
          bool hasMaxQueryTime() const { return this->maxQueryTime_ != nullptr;};
          void deleteMaxQueryTime() { this->maxQueryTime_ = nullptr;};
          inline double getMaxQueryTime() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTime_, 0.0) };
          inline Logs& setMaxQueryTime(double maxQueryTime) { DARABONBA_PTR_SET_VALUE(maxQueryTime_, maxQueryTime) };


          // maxQueryTimeSeconds Field Functions 
          bool hasMaxQueryTimeSeconds() const { return this->maxQueryTimeSeconds_ != nullptr;};
          void deleteMaxQueryTimeSeconds() { this->maxQueryTimeSeconds_ = nullptr;};
          inline double getMaxQueryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxQueryTimeSeconds_, 0.0) };
          inline Logs& setMaxQueryTimeSeconds(double maxQueryTimeSeconds) { DARABONBA_PTR_SET_VALUE(maxQueryTimeSeconds_, maxQueryTimeSeconds) };


          // maxRequestSize Field Functions 
          bool hasMaxRequestSize() const { return this->maxRequestSize_ != nullptr;};
          void deleteMaxRequestSize() { this->maxRequestSize_ = nullptr;};
          inline double getMaxRequestSize() const { DARABONBA_PTR_GET_DEFAULT(maxRequestSize_, 0.0) };
          inline Logs& setMaxRequestSize(double maxRequestSize) { DARABONBA_PTR_SET_VALUE(maxRequestSize_, maxRequestSize) };


          // maxResponseSize Field Functions 
          bool hasMaxResponseSize() const { return this->maxResponseSize_ != nullptr;};
          void deleteMaxResponseSize() { this->maxResponseSize_ = nullptr;};
          inline double getMaxResponseSize() const { DARABONBA_PTR_GET_DEFAULT(maxResponseSize_, 0.0) };
          inline Logs& setMaxResponseSize(double maxResponseSize) { DARABONBA_PTR_SET_VALUE(maxResponseSize_, maxResponseSize) };


          // maxReturnNum Field Functions 
          bool hasMaxReturnNum() const { return this->maxReturnNum_ != nullptr;};
          void deleteMaxReturnNum() { this->maxReturnNum_ = nullptr;};
          inline int64_t getMaxReturnNum() const { DARABONBA_PTR_GET_DEFAULT(maxReturnNum_, 0L) };
          inline Logs& setMaxReturnNum(int64_t maxReturnNum) { DARABONBA_PTR_SET_VALUE(maxReturnNum_, maxReturnNum) };


          // maxRows Field Functions 
          bool hasMaxRows() const { return this->maxRows_ != nullptr;};
          void deleteMaxRows() { this->maxRows_ = nullptr;};
          inline int64_t getMaxRows() const { DARABONBA_PTR_GET_DEFAULT(maxRows_, 0L) };
          inline Logs& setMaxRows(int64_t maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };


          // maxRowsCountAffected Field Functions 
          bool hasMaxRowsCountAffected() const { return this->maxRowsCountAffected_ != nullptr;};
          void deleteMaxRowsCountAffected() { this->maxRowsCountAffected_ = nullptr;};
          inline int64_t getMaxRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(maxRowsCountAffected_, 0L) };
          inline Logs& setMaxRowsCountAffected(int64_t maxRowsCountAffected) { DARABONBA_PTR_SET_VALUE(maxRowsCountAffected_, maxRowsCountAffected) };


          // maxRowsExamined Field Functions 
          bool hasMaxRowsExamined() const { return this->maxRowsExamined_ != nullptr;};
          void deleteMaxRowsExamined() { this->maxRowsExamined_ = nullptr;};
          inline int64_t getMaxRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(maxRowsExamined_, 0L) };
          inline Logs& setMaxRowsExamined(int64_t maxRowsExamined) { DARABONBA_PTR_SET_VALUE(maxRowsExamined_, maxRowsExamined) };


          // maxRowsSent Field Functions 
          bool hasMaxRowsSent() const { return this->maxRowsSent_ != nullptr;};
          void deleteMaxRowsSent() { this->maxRowsSent_ = nullptr;};
          inline int64_t getMaxRowsSent() const { DARABONBA_PTR_GET_DEFAULT(maxRowsSent_, 0L) };
          inline Logs& setMaxRowsSent(int64_t maxRowsSent) { DARABONBA_PTR_SET_VALUE(maxRowsSent_, maxRowsSent) };


          // maxRt Field Functions 
          bool hasMaxRt() const { return this->maxRt_ != nullptr;};
          void deleteMaxRt() { this->maxRt_ = nullptr;};
          inline double getMaxRt() const { DARABONBA_PTR_GET_DEFAULT(maxRt_, 0.0) };
          inline Logs& setMaxRt(double maxRt) { DARABONBA_PTR_SET_VALUE(maxRt_, maxRt) };


          // maxScnt Field Functions 
          bool hasMaxScnt() const { return this->maxScnt_ != nullptr;};
          void deleteMaxScnt() { this->maxScnt_ = nullptr;};
          inline int64_t getMaxScnt() const { DARABONBA_PTR_GET_DEFAULT(maxScnt_, 0L) };
          inline Logs& setMaxScnt(int64_t maxScnt) { DARABONBA_PTR_SET_VALUE(maxScnt_, maxScnt) };


          // namespace Field Functions 
          bool hasNamespace() const { return this->namespace_ != nullptr;};
          void deleteNamespace() { this->namespace_ = nullptr;};
          inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
          inline Logs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


          // nodeType Field Functions 
          bool hasNodeType() const { return this->nodeType_ != nullptr;};
          void deleteNodeType() { this->nodeType_ = nullptr;};
          inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
          inline Logs& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


          // opType Field Functions 
          bool hasOpType() const { return this->opType_ != nullptr;};
          void deleteOpType() { this->opType_ = nullptr;};
          inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
          inline Logs& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


          // originAlias Field Functions 
          bool hasOriginAlias() const { return this->originAlias_ != nullptr;};
          void deleteOriginAlias() { this->originAlias_ = nullptr;};
          inline string getOriginAlias() const { DARABONBA_PTR_GET_DEFAULT(originAlias_, "") };
          inline Logs& setOriginAlias(string originAlias) { DARABONBA_PTR_SET_VALUE(originAlias_, originAlias) };


          // physicalIOReads Field Functions 
          bool hasPhysicalIOReads() const { return this->physicalIOReads_ != nullptr;};
          void deletePhysicalIOReads() { this->physicalIOReads_ = nullptr;};
          inline int64_t getPhysicalIOReads() const { DARABONBA_PTR_GET_DEFAULT(physicalIOReads_, 0L) };
          inline Logs& setPhysicalIOReads(int64_t physicalIOReads) { DARABONBA_PTR_SET_VALUE(physicalIOReads_, physicalIOReads) };


          // psql Field Functions 
          bool hasPsql() const { return this->psql_ != nullptr;};
          void deletePsql() { this->psql_ = nullptr;};
          inline string getPsql() const { DARABONBA_PTR_GET_DEFAULT(psql_, "") };
          inline Logs& setPsql(string psql) { DARABONBA_PTR_SET_VALUE(psql_, psql) };


          // queryId Field Functions 
          bool hasQueryId() const { return this->queryId_ != nullptr;};
          void deleteQueryId() { this->queryId_ = nullptr;};
          inline string getQueryId() const { DARABONBA_PTR_GET_DEFAULT(queryId_, "") };
          inline Logs& setQueryId(string queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };


          // queryStartTime Field Functions 
          bool hasQueryStartTime() const { return this->queryStartTime_ != nullptr;};
          void deleteQueryStartTime() { this->queryStartTime_ = nullptr;};
          inline string getQueryStartTime() const { DARABONBA_PTR_GET_DEFAULT(queryStartTime_, "") };
          inline Logs& setQueryStartTime(string queryStartTime) { DARABONBA_PTR_SET_VALUE(queryStartTime_, queryStartTime) };


          // queryTime Field Functions 
          bool hasQueryTime() const { return this->queryTime_ != nullptr;};
          void deleteQueryTime() { this->queryTime_ = nullptr;};
          inline int64_t getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, 0L) };
          inline Logs& setQueryTime(int64_t queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


          // queryTimeRate Field Functions 
          bool hasQueryTimeRate() const { return this->queryTimeRate_ != nullptr;};
          void deleteQueryTimeRate() { this->queryTimeRate_ = nullptr;};
          inline double getQueryTimeRate() const { DARABONBA_PTR_GET_DEFAULT(queryTimeRate_, 0.0) };
          inline Logs& setQueryTimeRate(double queryTimeRate) { DARABONBA_PTR_SET_VALUE(queryTimeRate_, queryTimeRate) };


          // queryTimeSeconds Field Functions 
          bool hasQueryTimeSeconds() const { return this->queryTimeSeconds_ != nullptr;};
          void deleteQueryTimeSeconds() { this->queryTimeSeconds_ = nullptr;};
          inline double getQueryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(queryTimeSeconds_, 0.0) };
          inline Logs& setQueryTimeSeconds(double queryTimeSeconds) { DARABONBA_PTR_SET_VALUE(queryTimeSeconds_, queryTimeSeconds) };


          // returnItemNumbers Field Functions 
          bool hasReturnItemNumbers() const { return this->returnItemNumbers_ != nullptr;};
          void deleteReturnItemNumbers() { this->returnItemNumbers_ = nullptr;};
          inline string getReturnItemNumbers() const { DARABONBA_PTR_GET_DEFAULT(returnItemNumbers_, "") };
          inline Logs& setReturnItemNumbers(string returnItemNumbers) { DARABONBA_PTR_SET_VALUE(returnItemNumbers_, returnItemNumbers) };


          // returnNum Field Functions 
          bool hasReturnNum() const { return this->returnNum_ != nullptr;};
          void deleteReturnNum() { this->returnNum_ = nullptr;};
          inline int64_t getReturnNum() const { DARABONBA_PTR_GET_DEFAULT(returnNum_, 0L) };
          inline Logs& setReturnNum(int64_t returnNum) { DARABONBA_PTR_SET_VALUE(returnNum_, returnNum) };


          // rows Field Functions 
          bool hasRows() const { return this->rows_ != nullptr;};
          void deleteRows() { this->rows_ = nullptr;};
          inline int64_t getRows() const { DARABONBA_PTR_GET_DEFAULT(rows_, 0L) };
          inline Logs& setRows(int64_t rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };


          // rowsCountAffected Field Functions 
          bool hasRowsCountAffected() const { return this->rowsCountAffected_ != nullptr;};
          void deleteRowsCountAffected() { this->rowsCountAffected_ = nullptr;};
          inline int64_t getRowsCountAffected() const { DARABONBA_PTR_GET_DEFAULT(rowsCountAffected_, 0L) };
          inline Logs& setRowsCountAffected(int64_t rowsCountAffected) { DARABONBA_PTR_SET_VALUE(rowsCountAffected_, rowsCountAffected) };


          // rowsExamined Field Functions 
          bool hasRowsExamined() const { return this->rowsExamined_ != nullptr;};
          void deleteRowsExamined() { this->rowsExamined_ = nullptr;};
          inline int64_t getRowsExamined() const { DARABONBA_PTR_GET_DEFAULT(rowsExamined_, 0L) };
          inline Logs& setRowsExamined(int64_t rowsExamined) { DARABONBA_PTR_SET_VALUE(rowsExamined_, rowsExamined) };


          // rowsSent Field Functions 
          bool hasRowsSent() const { return this->rowsSent_ != nullptr;};
          void deleteRowsSent() { this->rowsSent_ = nullptr;};
          inline int64_t getRowsSent() const { DARABONBA_PTR_GET_DEFAULT(rowsSent_, 0L) };
          inline Logs& setRowsSent(int64_t rowsSent) { DARABONBA_PTR_SET_VALUE(rowsSent_, rowsSent) };


          // ruleId Field Functions 
          bool hasRuleId() const { return this->ruleId_ != nullptr;};
          void deleteRuleId() { this->ruleId_ = nullptr;};
          inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
          inline Logs& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


          // SQLText Field Functions 
          bool hasSQLText() const { return this->SQLText_ != nullptr;};
          void deleteSQLText() { this->SQLText_ = nullptr;};
          inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
          inline Logs& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


          // scheme Field Functions 
          bool hasScheme() const { return this->scheme_ != nullptr;};
          void deleteScheme() { this->scheme_ = nullptr;};
          inline string getScheme() const { DARABONBA_PTR_GET_DEFAULT(scheme_, "") };
          inline Logs& setScheme(string scheme) { DARABONBA_PTR_SET_VALUE(scheme_, scheme) };


          // scnt Field Functions 
          bool hasScnt() const { return this->scnt_ != nullptr;};
          void deleteScnt() { this->scnt_ = nullptr;};
          inline int64_t getScnt() const { DARABONBA_PTR_GET_DEFAULT(scnt_, 0L) };
          inline Logs& setScnt(int64_t scnt) { DARABONBA_PTR_SET_VALUE(scnt_, scnt) };


          // sqlId Field Functions 
          bool hasSqlId() const { return this->sqlId_ != nullptr;};
          void deleteSqlId() { this->sqlId_ = nullptr;};
          inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
          inline Logs& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


          // sqlTag Field Functions 
          bool hasSqlTag() const { return this->sqlTag_ != nullptr;};
          void deleteSqlTag() { this->sqlTag_ = nullptr;};
          inline const Logs::SqlTag & getSqlTag() const { DARABONBA_PTR_GET_CONST(sqlTag_, Logs::SqlTag) };
          inline Logs::SqlTag getSqlTag() { DARABONBA_PTR_GET(sqlTag_, Logs::SqlTag) };
          inline Logs& setSqlTag(const Logs::SqlTag & sqlTag) { DARABONBA_PTR_SET_VALUE(sqlTag_, sqlTag) };
          inline Logs& setSqlTag(Logs::SqlTag && sqlTag) { DARABONBA_PTR_SET_RVALUE(sqlTag_, sqlTag) };


          // sqlType Field Functions 
          bool hasSqlType() const { return this->sqlType_ != nullptr;};
          void deleteSqlType() { this->sqlType_ = nullptr;};
          inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
          inline Logs& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


          // subInstanceId Field Functions 
          bool hasSubInstanceId() const { return this->subInstanceId_ != nullptr;};
          void deleteSubInstanceId() { this->subInstanceId_ = nullptr;};
          inline string getSubInstanceId() const { DARABONBA_PTR_GET_DEFAULT(subInstanceId_, "") };
          inline Logs& setSubInstanceId(string subInstanceId) { DARABONBA_PTR_SET_VALUE(subInstanceId_, subInstanceId) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline Logs& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // threadId Field Functions 
          bool hasThreadId() const { return this->threadId_ != nullptr;};
          void deleteThreadId() { this->threadId_ = nullptr;};
          inline string getThreadId() const { DARABONBA_PTR_GET_DEFAULT(threadId_, "") };
          inline Logs& setThreadId(string threadId) { DARABONBA_PTR_SET_VALUE(threadId_, threadId) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline Logs& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


          // totalCount Field Functions 
          bool hasTotalCount() const { return this->totalCount_ != nullptr;};
          void deleteTotalCount() { this->totalCount_ = nullptr;};
          inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
          inline Logs& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


          // trend Field Functions 
          bool hasTrend() const { return this->trend_ != nullptr;};
          void deleteTrend() { this->trend_ = nullptr;};
          inline const vector<Logs::Trend> & getTrend() const { DARABONBA_PTR_GET_CONST(trend_, vector<Logs::Trend>) };
          inline vector<Logs::Trend> getTrend() { DARABONBA_PTR_GET(trend_, vector<Logs::Trend>) };
          inline Logs& setTrend(const vector<Logs::Trend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
          inline Logs& setTrend(vector<Logs::Trend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


          // user Field Functions 
          bool hasUser() const { return this->user_ != nullptr;};
          void deleteUser() { this->user_ = nullptr;};
          inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
          inline Logs& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


        protected:
          shared_ptr<string> accountName_ {};
          shared_ptr<double> avgCPUTime_ {};
          shared_ptr<double> avgCPUTimeSeconds_ {};
          shared_ptr<double> avgDocExamined_ {};
          shared_ptr<double> avgFrows_ {};
          shared_ptr<double> avgIOWrites_ {};
          shared_ptr<double> avgKeysExamined_ {};
          shared_ptr<double> avgLastRowsCountAffected_ {};
          shared_ptr<double> avgLockTime_ {};
          shared_ptr<double> avgLockTimeSeconds_ {};
          shared_ptr<double> avgLogicalIOReads_ {};
          shared_ptr<double> avgPhysicalIOReads_ {};
          shared_ptr<double> avgQueryTime_ {};
          shared_ptr<double> avgQueryTimeSeconds_ {};
          shared_ptr<double> avgRequestSize_ {};
          shared_ptr<double> avgResponseSize_ {};
          shared_ptr<double> avgReturnNum_ {};
          shared_ptr<double> avgRows_ {};
          shared_ptr<double> avgRowsCountAffected_ {};
          shared_ptr<double> avgRowsExamined_ {};
          shared_ptr<double> avgRowsSent_ {};
          shared_ptr<double> avgRt_ {};
          shared_ptr<double> avgScnt_ {};
          shared_ptr<double> CPUTime_ {};
          shared_ptr<double> CPUTimeSeconds_ {};
          shared_ptr<string> clientIp_ {};
          shared_ptr<string> cmd_ {};
          shared_ptr<string> command_ {};
          shared_ptr<int64_t> count_ {};
          shared_ptr<double> countRate_ {};
          shared_ptr<string> DBName_ {};
          shared_ptr<string> database_ {};
          shared_ptr<string> dbId_ {};
          shared_ptr<string> dbInstanceName_ {};
          shared_ptr<int64_t> docExamined_ {};
          shared_ptr<int64_t> docsExamined_ {};
          shared_ptr<int64_t> frows_ {};
          shared_ptr<Logs::Histogram> histogram_ {};
          shared_ptr<string> hostAddress_ {};
          shared_ptr<string> hostInsId_ {};
          shared_ptr<int64_t> IOWrites_ {};
          shared_ptr<string> insName_ {};
          shared_ptr<string> insRole_ {};
          shared_ptr<int64_t> keysExamined_ {};
          shared_ptr<int64_t> lastRowsCountAffected_ {};
          shared_ptr<double> lockTime_ {};
          shared_ptr<double> lockTimeSeconds_ {};
          shared_ptr<int64_t> logicalIOReads_ {};
          shared_ptr<double> maxCPUTime_ {};
          shared_ptr<double> maxCPUTimeSeconds_ {};
          shared_ptr<int64_t> maxDocExamined_ {};
          shared_ptr<int64_t> maxFrows_ {};
          shared_ptr<int64_t> maxIOWrites_ {};
          shared_ptr<int64_t> maxKeysExamined_ {};
          shared_ptr<int64_t> maxLastRowsCountAffected_ {};
          shared_ptr<double> maxLockTime_ {};
          shared_ptr<double> maxLockTimeSeconds_ {};
          shared_ptr<int64_t> maxLogicalIOReads_ {};
          shared_ptr<int64_t> maxPhysicalIOReads_ {};
          shared_ptr<double> maxQueryTime_ {};
          shared_ptr<double> maxQueryTimeSeconds_ {};
          shared_ptr<double> maxRequestSize_ {};
          shared_ptr<double> maxResponseSize_ {};
          shared_ptr<int64_t> maxReturnNum_ {};
          shared_ptr<int64_t> maxRows_ {};
          shared_ptr<int64_t> maxRowsCountAffected_ {};
          shared_ptr<int64_t> maxRowsExamined_ {};
          shared_ptr<int64_t> maxRowsSent_ {};
          shared_ptr<double> maxRt_ {};
          shared_ptr<int64_t> maxScnt_ {};
          shared_ptr<string> namespace_ {};
          shared_ptr<string> nodeType_ {};
          shared_ptr<string> opType_ {};
          shared_ptr<string> originAlias_ {};
          shared_ptr<int64_t> physicalIOReads_ {};
          shared_ptr<string> psql_ {};
          shared_ptr<string> queryId_ {};
          shared_ptr<string> queryStartTime_ {};
          shared_ptr<int64_t> queryTime_ {};
          shared_ptr<double> queryTimeRate_ {};
          shared_ptr<double> queryTimeSeconds_ {};
          shared_ptr<string> returnItemNumbers_ {};
          shared_ptr<int64_t> returnNum_ {};
          shared_ptr<int64_t> rows_ {};
          shared_ptr<int64_t> rowsCountAffected_ {};
          shared_ptr<int64_t> rowsExamined_ {};
          shared_ptr<int64_t> rowsSent_ {};
          shared_ptr<string> ruleId_ {};
          shared_ptr<string> SQLText_ {};
          shared_ptr<string> scheme_ {};
          shared_ptr<int64_t> scnt_ {};
          // SQL ID。
          shared_ptr<string> sqlId_ {};
          shared_ptr<Logs::SqlTag> sqlTag_ {};
          shared_ptr<string> sqlType_ {};
          shared_ptr<string> subInstanceId_ {};
          shared_ptr<string> tableName_ {};
          shared_ptr<string> threadId_ {};
          shared_ptr<int64_t> timestamp_ {};
          shared_ptr<int64_t> totalCount_ {};
          shared_ptr<vector<Logs::Trend>> trend_ {};
          shared_ptr<string> user_ {};
        };

        virtual bool empty() const override { return this->dbInstanceId_ == nullptr
        && this->dbInstanceName_ == nullptr && this->endTime_ == nullptr && this->itemsNumbers_ == nullptr && this->logs_ == nullptr && this->maxRecordsPerPage_ == nullptr
        && this->nodeId_ == nullptr && this->pageNumbers_ == nullptr && this->startTime_ == nullptr && this->totalRecords_ == nullptr; };
        // dbInstanceId Field Functions 
        bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
        void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
        inline int64_t getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, 0L) };
        inline DataItem& setDbInstanceId(int64_t dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


        // dbInstanceName Field Functions 
        bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
        void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
        inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
        inline DataItem& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline DataItem& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // itemsNumbers Field Functions 
        bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
        void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
        inline int64_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0L) };
        inline DataItem& setItemsNumbers(int64_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


        // logs Field Functions 
        bool hasLogs() const { return this->logs_ != nullptr;};
        void deleteLogs() { this->logs_ = nullptr;};
        inline const vector<DataItem::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<DataItem::Logs>) };
        inline vector<DataItem::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<DataItem::Logs>) };
        inline DataItem& setLogs(const vector<DataItem::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
        inline DataItem& setLogs(vector<DataItem::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


        // maxRecordsPerPage Field Functions 
        bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
        void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
        inline int32_t getMaxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
        inline DataItem& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline DataItem& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // pageNumbers Field Functions 
        bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
        void deletePageNumbers() { this->pageNumbers_ = nullptr;};
        inline int32_t getPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
        inline DataItem& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline DataItem& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // totalRecords Field Functions 
        bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
        void deleteTotalRecords() { this->totalRecords_ = nullptr;};
        inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
        inline DataItem& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


      protected:
        shared_ptr<int64_t> dbInstanceId_ {};
        shared_ptr<string> dbInstanceName_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<int64_t> itemsNumbers_ {};
        shared_ptr<vector<DataItem::Logs>> logs_ {};
        shared_ptr<int32_t> maxRecordsPerPage_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<int32_t> pageNumbers_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<int64_t> totalRecords_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->isFinish_ == nullptr && this->message_ == nullptr && this->requestKey_ == nullptr && this->resultId_ == nullptr
        && this->state_ == nullptr && this->timestamp_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const Data::DataItem & getData() const { DARABONBA_PTR_GET_CONST(data_, Data::DataItem) };
      inline Data::DataItem getData() { DARABONBA_PTR_GET(data_, Data::DataItem) };
      inline Data& setData(const Data::DataItem & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Data& setData(Data::DataItem && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
      inline Data& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Data& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // requestKey Field Functions 
      bool hasRequestKey() const { return this->requestKey_ != nullptr;};
      void deleteRequestKey() { this->requestKey_ = nullptr;};
      inline string getRequestKey() const { DARABONBA_PTR_GET_DEFAULT(requestKey_, "") };
      inline Data& setRequestKey(string requestKey) { DARABONBA_PTR_SET_VALUE(requestKey_, requestKey) };


      // resultId Field Functions 
      bool hasResultId() const { return this->resultId_ != nullptr;};
      void deleteResultId() { this->resultId_ = nullptr;};
      inline string getResultId() const { DARABONBA_PTR_GET_DEFAULT(resultId_, "") };
      inline Data& setResultId(string resultId) { DARABONBA_PTR_SET_VALUE(resultId_, resultId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      shared_ptr<Data::DataItem> data_ {};
      shared_ptr<int32_t> errorCode_ {};
      shared_ptr<bool> isFinish_ {};
      shared_ptr<string> message_ {};
      shared_ptr<string> requestKey_ {};
      shared_ptr<string> resultId_ {};
      shared_ptr<string> state_ {};
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSlowLogStatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSlowLogStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSlowLogStatisticResponseBody::Data) };
    inline DescribeSlowLogStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSlowLogStatisticResponseBody::Data) };
    inline DescribeSlowLogStatisticResponseBody& setData(const DescribeSlowLogStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogStatisticResponseBody& setData(DescribeSlowLogStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSlowLogStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSlowLogStatisticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // AsyncResult<DBLogRecords<SlowLogStat>>
    shared_ptr<DescribeSlowLogStatisticResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
