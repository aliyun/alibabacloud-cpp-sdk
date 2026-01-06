// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
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
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody(DescribeSlowLogRecordsResponseBody &&) = default ;
    DescribeSlowLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody& operator=(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody& operator=(DescribeSlowLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
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
          // sqlid。
          shared_ptr<string> sqlId_ {};
          shared_ptr<string> tags_ {};
        };

        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->applicationName_ == nullptr && this->CPUTime_ == nullptr && this->CPUTimeSeconds_ == nullptr && this->clientIp_ == nullptr && this->cmd_ == nullptr
        && this->command_ == nullptr && this->DBName_ == nullptr && this->dbId_ == nullptr && this->dbInstanceName_ == nullptr && this->docsExamined_ == nullptr
        && this->frows_ == nullptr && this->hostAddress_ == nullptr && this->IOWrites_ == nullptr && this->insName_ == nullptr && this->keysExamined_ == nullptr
        && this->lastRowsCountAffected_ == nullptr && this->lockTime_ == nullptr && this->lockTimeSeconds_ == nullptr && this->logicalIOReads_ == nullptr && this->namespace_ == nullptr
        && this->nodeId_ == nullptr && this->opType_ == nullptr && this->originTime_ == nullptr && this->physicalIOReads_ == nullptr && this->psql_ == nullptr
        && this->queryId_ == nullptr && this->queryStartTime_ == nullptr && this->queryTime_ == nullptr && this->queryTimeSeconds_ == nullptr && this->requestSize_ == nullptr
        && this->responseSize_ == nullptr && this->returnItemNumbers_ == nullptr && this->returnNum_ == nullptr && this->rows_ == nullptr && this->rowsCountAffected_ == nullptr
        && this->rowsExamined_ == nullptr && this->rowsSent_ == nullptr && this->rt_ == nullptr && this->SQLText_ == nullptr && this->scheme_ == nullptr
        && this->scnt_ == nullptr && this->sqlId_ == nullptr && this->sqlTag_ == nullptr && this->sqlType_ == nullptr && this->subInstanceId_ == nullptr
        && this->tableName_ == nullptr && this->templateId_ == nullptr && this->threadId_ == nullptr && this->timestamp_ == nullptr && this->traceId_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline Logs& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline Logs& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


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


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline Logs& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


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


        // docsExamined Field Functions 
        bool hasDocsExamined() const { return this->docsExamined_ != nullptr;};
        void deleteDocsExamined() { this->docsExamined_ = nullptr;};
        inline string getDocsExamined() const { DARABONBA_PTR_GET_DEFAULT(docsExamined_, "") };
        inline Logs& setDocsExamined(string docsExamined) { DARABONBA_PTR_SET_VALUE(docsExamined_, docsExamined) };


        // frows Field Functions 
        bool hasFrows() const { return this->frows_ != nullptr;};
        void deleteFrows() { this->frows_ = nullptr;};
        inline int64_t getFrows() const { DARABONBA_PTR_GET_DEFAULT(frows_, 0L) };
        inline Logs& setFrows(int64_t frows) { DARABONBA_PTR_SET_VALUE(frows_, frows) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline Logs& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


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


        // keysExamined Field Functions 
        bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
        void deleteKeysExamined() { this->keysExamined_ = nullptr;};
        inline string getKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(keysExamined_, "") };
        inline Logs& setKeysExamined(string keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };


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


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Logs& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Logs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // opType Field Functions 
        bool hasOpType() const { return this->opType_ != nullptr;};
        void deleteOpType() { this->opType_ = nullptr;};
        inline string getOpType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
        inline Logs& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


        // originTime Field Functions 
        bool hasOriginTime() const { return this->originTime_ != nullptr;};
        void deleteOriginTime() { this->originTime_ = nullptr;};
        inline string getOriginTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, "") };
        inline Logs& setOriginTime(string originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


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


        // queryTimeSeconds Field Functions 
        bool hasQueryTimeSeconds() const { return this->queryTimeSeconds_ != nullptr;};
        void deleteQueryTimeSeconds() { this->queryTimeSeconds_ = nullptr;};
        inline double getQueryTimeSeconds() const { DARABONBA_PTR_GET_DEFAULT(queryTimeSeconds_, 0.0) };
        inline Logs& setQueryTimeSeconds(double queryTimeSeconds) { DARABONBA_PTR_SET_VALUE(queryTimeSeconds_, queryTimeSeconds) };


        // requestSize Field Functions 
        bool hasRequestSize() const { return this->requestSize_ != nullptr;};
        void deleteRequestSize() { this->requestSize_ = nullptr;};
        inline int64_t getRequestSize() const { DARABONBA_PTR_GET_DEFAULT(requestSize_, 0L) };
        inline Logs& setRequestSize(int64_t requestSize) { DARABONBA_PTR_SET_VALUE(requestSize_, requestSize) };


        // responseSize Field Functions 
        bool hasResponseSize() const { return this->responseSize_ != nullptr;};
        void deleteResponseSize() { this->responseSize_ = nullptr;};
        inline int64_t getResponseSize() const { DARABONBA_PTR_GET_DEFAULT(responseSize_, 0L) };
        inline Logs& setResponseSize(int64_t responseSize) { DARABONBA_PTR_SET_VALUE(responseSize_, responseSize) };


        // returnItemNumbers Field Functions 
        bool hasReturnItemNumbers() const { return this->returnItemNumbers_ != nullptr;};
        void deleteReturnItemNumbers() { this->returnItemNumbers_ = nullptr;};
        inline string getReturnItemNumbers() const { DARABONBA_PTR_GET_DEFAULT(returnItemNumbers_, "") };
        inline Logs& setReturnItemNumbers(string returnItemNumbers) { DARABONBA_PTR_SET_VALUE(returnItemNumbers_, returnItemNumbers) };


        // returnNum Field Functions 
        bool hasReturnNum() const { return this->returnNum_ != nullptr;};
        void deleteReturnNum() { this->returnNum_ = nullptr;};
        inline string getReturnNum() const { DARABONBA_PTR_GET_DEFAULT(returnNum_, "") };
        inline Logs& setReturnNum(string returnNum) { DARABONBA_PTR_SET_VALUE(returnNum_, returnNum) };


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


        // rt Field Functions 
        bool hasRt() const { return this->rt_ != nullptr;};
        void deleteRt() { this->rt_ = nullptr;};
        inline int64_t getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0L) };
        inline Logs& setRt(int64_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


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


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
        inline Logs& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


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


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline Logs& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> applicationName_ {};
        shared_ptr<double> CPUTime_ {};
        shared_ptr<double> CPUTimeSeconds_ {};
        shared_ptr<string> clientIp_ {};
        shared_ptr<string> cmd_ {};
        shared_ptr<string> command_ {};
        shared_ptr<string> DBName_ {};
        shared_ptr<string> dbId_ {};
        shared_ptr<string> dbInstanceName_ {};
        shared_ptr<string> docsExamined_ {};
        shared_ptr<int64_t> frows_ {};
        shared_ptr<string> hostAddress_ {};
        shared_ptr<int64_t> IOWrites_ {};
        shared_ptr<string> insName_ {};
        shared_ptr<string> keysExamined_ {};
        shared_ptr<int64_t> lastRowsCountAffected_ {};
        shared_ptr<double> lockTime_ {};
        shared_ptr<double> lockTimeSeconds_ {};
        shared_ptr<int64_t> logicalIOReads_ {};
        shared_ptr<string> namespace_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> opType_ {};
        shared_ptr<string> originTime_ {};
        shared_ptr<int64_t> physicalIOReads_ {};
        shared_ptr<string> psql_ {};
        shared_ptr<string> queryId_ {};
        shared_ptr<string> queryStartTime_ {};
        shared_ptr<int64_t> queryTime_ {};
        shared_ptr<double> queryTimeSeconds_ {};
        shared_ptr<int64_t> requestSize_ {};
        shared_ptr<int64_t> responseSize_ {};
        shared_ptr<string> returnItemNumbers_ {};
        shared_ptr<string> returnNum_ {};
        shared_ptr<int64_t> rows_ {};
        shared_ptr<int64_t> rowsCountAffected_ {};
        shared_ptr<int64_t> rowsExamined_ {};
        shared_ptr<int64_t> rowsSent_ {};
        shared_ptr<int64_t> rt_ {};
        shared_ptr<string> SQLText_ {};
        shared_ptr<string> scheme_ {};
        shared_ptr<int64_t> scnt_ {};
        shared_ptr<string> sqlId_ {};
        shared_ptr<Logs::SqlTag> sqlTag_ {};
        shared_ptr<string> sqlType_ {};
        shared_ptr<string> subInstanceId_ {};
        shared_ptr<string> tableName_ {};
        shared_ptr<string> templateId_ {};
        shared_ptr<string> threadId_ {};
        shared_ptr<int64_t> timestamp_ {};
        shared_ptr<string> traceId_ {};
      };

      virtual bool empty() const override { return this->dbInstanceId_ == nullptr
        && this->dbInstanceName_ == nullptr && this->endTime_ == nullptr && this->itemsNumbers_ == nullptr && this->logs_ == nullptr && this->maxRecordsPerPage_ == nullptr
        && this->nodeId_ == nullptr && this->pageNumbers_ == nullptr && this->startTime_ == nullptr && this->totalRecords_ == nullptr; };
      // dbInstanceId Field Functions 
      bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
      void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
      inline int64_t getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, 0L) };
      inline Data& setDbInstanceId(int64_t dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


      // dbInstanceName Field Functions 
      bool hasDbInstanceName() const { return this->dbInstanceName_ != nullptr;};
      void deleteDbInstanceName() { this->dbInstanceName_ = nullptr;};
      inline string getDbInstanceName() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceName_, "") };
      inline Data& setDbInstanceName(string dbInstanceName) { DARABONBA_PTR_SET_VALUE(dbInstanceName_, dbInstanceName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Data& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // itemsNumbers Field Functions 
      bool hasItemsNumbers() const { return this->itemsNumbers_ != nullptr;};
      void deleteItemsNumbers() { this->itemsNumbers_ = nullptr;};
      inline int64_t getItemsNumbers() const { DARABONBA_PTR_GET_DEFAULT(itemsNumbers_, 0L) };
      inline Data& setItemsNumbers(int64_t itemsNumbers) { DARABONBA_PTR_SET_VALUE(itemsNumbers_, itemsNumbers) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<Data::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Data::Logs>) };
      inline vector<Data::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<Data::Logs>) };
      inline Data& setLogs(const vector<Data::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline Data& setLogs(vector<Data::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // maxRecordsPerPage Field Functions 
      bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
      void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
      inline int32_t getMaxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0) };
      inline Data& setMaxRecordsPerPage(int32_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // pageNumbers Field Functions 
      bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
      void deletePageNumbers() { this->pageNumbers_ = nullptr;};
      inline int32_t getPageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0) };
      inline Data& setPageNumbers(int32_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Data& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
      inline Data& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      shared_ptr<int64_t> dbInstanceId_ {};
      shared_ptr<string> dbInstanceName_ {};
      shared_ptr<string> endTime_ {};
      shared_ptr<int64_t> itemsNumbers_ {};
      shared_ptr<vector<Data::Logs>> logs_ {};
      shared_ptr<int32_t> maxRecordsPerPage_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<int32_t> pageNumbers_ {};
      shared_ptr<string> startTime_ {};
      shared_ptr<int64_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSlowLogRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSlowLogRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSlowLogRecordsResponseBody::Data) };
    inline DescribeSlowLogRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSlowLogRecordsResponseBody::Data) };
    inline DescribeSlowLogRecordsResponseBody& setData(const DescribeSlowLogRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogRecordsResponseBody& setData(DescribeSlowLogRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSlowLogRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSlowLogRecordsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    // DBLogRecords<SlowLogItem>
    shared_ptr<DescribeSlowLogRecordsResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
