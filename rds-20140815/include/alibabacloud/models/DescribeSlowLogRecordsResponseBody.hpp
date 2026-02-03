// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
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
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(SQLSlowRecord, SQLSlowRecord_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SQLSlowRecord, SQLSlowRecord_);
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
      class SQLSlowRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SQLSlowRecord& obj) { 
          DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_TO_JSON(ClientHostName, clientHostName_);
          DARABONBA_PTR_TO_JSON(CpuTime, cpuTime_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_TO_JSON(LastRowsAffectedCount, lastRowsAffectedCount_);
          DARABONBA_PTR_TO_JSON(LockTimeMS, lockTimeMS_);
          DARABONBA_PTR_TO_JSON(LockTimes, lockTimes_);
          DARABONBA_PTR_TO_JSON(LogicalIORead, logicalIORead_);
          DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
          DARABONBA_PTR_TO_JSON(PhysicalIORead, physicalIORead_);
          DARABONBA_PTR_TO_JSON(QueryTimeMS, queryTimeMS_);
          DARABONBA_PTR_TO_JSON(QueryTimes, queryTimes_);
          DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_TO_JSON(RowsAffectedCount, rowsAffectedCount_);
          DARABONBA_PTR_TO_JSON(SQLHash, SQLHash_);
          DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(WriteIOCount, writeIOCount_);
        };
        friend void from_json(const Darabonba::Json& j, SQLSlowRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
          DARABONBA_PTR_FROM_JSON(ClientHostName, clientHostName_);
          DARABONBA_PTR_FROM_JSON(CpuTime, cpuTime_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_FROM_JSON(LastRowsAffectedCount, lastRowsAffectedCount_);
          DARABONBA_PTR_FROM_JSON(LockTimeMS, lockTimeMS_);
          DARABONBA_PTR_FROM_JSON(LockTimes, lockTimes_);
          DARABONBA_PTR_FROM_JSON(LogicalIORead, logicalIORead_);
          DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
          DARABONBA_PTR_FROM_JSON(PhysicalIORead, physicalIORead_);
          DARABONBA_PTR_FROM_JSON(QueryTimeMS, queryTimeMS_);
          DARABONBA_PTR_FROM_JSON(QueryTimes, queryTimes_);
          DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_FROM_JSON(RowsAffectedCount, rowsAffectedCount_);
          DARABONBA_PTR_FROM_JSON(SQLHash, SQLHash_);
          DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(WriteIOCount, writeIOCount_);
        };
        SQLSlowRecord() = default ;
        SQLSlowRecord(const SQLSlowRecord &) = default ;
        SQLSlowRecord(SQLSlowRecord &&) = default ;
        SQLSlowRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SQLSlowRecord() = default ;
        SQLSlowRecord& operator=(const SQLSlowRecord &) = default ;
        SQLSlowRecord& operator=(SQLSlowRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->clientHostName_ == nullptr && this->cpuTime_ == nullptr && this->DBName_ == nullptr && this->executionStartTime_ == nullptr && this->hostAddress_ == nullptr
        && this->lastRowsAffectedCount_ == nullptr && this->lockTimeMS_ == nullptr && this->lockTimes_ == nullptr && this->logicalIORead_ == nullptr && this->parseRowCounts_ == nullptr
        && this->physicalIORead_ == nullptr && this->queryTimeMS_ == nullptr && this->queryTimes_ == nullptr && this->returnRowCounts_ == nullptr && this->rowsAffectedCount_ == nullptr
        && this->SQLHash_ == nullptr && this->SQLText_ == nullptr && this->userName_ == nullptr && this->writeIOCount_ == nullptr; };
        // applicationName Field Functions 
        bool hasApplicationName() const { return this->applicationName_ != nullptr;};
        void deleteApplicationName() { this->applicationName_ = nullptr;};
        inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
        inline SQLSlowRecord& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


        // clientHostName Field Functions 
        bool hasClientHostName() const { return this->clientHostName_ != nullptr;};
        void deleteClientHostName() { this->clientHostName_ = nullptr;};
        inline string getClientHostName() const { DARABONBA_PTR_GET_DEFAULT(clientHostName_, "") };
        inline SQLSlowRecord& setClientHostName(string clientHostName) { DARABONBA_PTR_SET_VALUE(clientHostName_, clientHostName) };


        // cpuTime Field Functions 
        bool hasCpuTime() const { return this->cpuTime_ != nullptr;};
        void deleteCpuTime() { this->cpuTime_ = nullptr;};
        inline int64_t getCpuTime() const { DARABONBA_PTR_GET_DEFAULT(cpuTime_, 0L) };
        inline SQLSlowRecord& setCpuTime(int64_t cpuTime) { DARABONBA_PTR_SET_VALUE(cpuTime_, cpuTime) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline SQLSlowRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // executionStartTime Field Functions 
        bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
        void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
        inline string getExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
        inline SQLSlowRecord& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline SQLSlowRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


        // lastRowsAffectedCount Field Functions 
        bool hasLastRowsAffectedCount() const { return this->lastRowsAffectedCount_ != nullptr;};
        void deleteLastRowsAffectedCount() { this->lastRowsAffectedCount_ = nullptr;};
        inline int64_t getLastRowsAffectedCount() const { DARABONBA_PTR_GET_DEFAULT(lastRowsAffectedCount_, 0L) };
        inline SQLSlowRecord& setLastRowsAffectedCount(int64_t lastRowsAffectedCount) { DARABONBA_PTR_SET_VALUE(lastRowsAffectedCount_, lastRowsAffectedCount) };


        // lockTimeMS Field Functions 
        bool hasLockTimeMS() const { return this->lockTimeMS_ != nullptr;};
        void deleteLockTimeMS() { this->lockTimeMS_ = nullptr;};
        inline int64_t getLockTimeMS() const { DARABONBA_PTR_GET_DEFAULT(lockTimeMS_, 0L) };
        inline SQLSlowRecord& setLockTimeMS(int64_t lockTimeMS) { DARABONBA_PTR_SET_VALUE(lockTimeMS_, lockTimeMS) };


        // lockTimes Field Functions 
        bool hasLockTimes() const { return this->lockTimes_ != nullptr;};
        void deleteLockTimes() { this->lockTimes_ = nullptr;};
        inline int64_t getLockTimes() const { DARABONBA_PTR_GET_DEFAULT(lockTimes_, 0L) };
        inline SQLSlowRecord& setLockTimes(int64_t lockTimes) { DARABONBA_PTR_SET_VALUE(lockTimes_, lockTimes) };


        // logicalIORead Field Functions 
        bool hasLogicalIORead() const { return this->logicalIORead_ != nullptr;};
        void deleteLogicalIORead() { this->logicalIORead_ = nullptr;};
        inline int64_t getLogicalIORead() const { DARABONBA_PTR_GET_DEFAULT(logicalIORead_, 0L) };
        inline SQLSlowRecord& setLogicalIORead(int64_t logicalIORead) { DARABONBA_PTR_SET_VALUE(logicalIORead_, logicalIORead) };


        // parseRowCounts Field Functions 
        bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
        void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
        inline int64_t getParseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
        inline SQLSlowRecord& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


        // physicalIORead Field Functions 
        bool hasPhysicalIORead() const { return this->physicalIORead_ != nullptr;};
        void deletePhysicalIORead() { this->physicalIORead_ = nullptr;};
        inline int64_t getPhysicalIORead() const { DARABONBA_PTR_GET_DEFAULT(physicalIORead_, 0L) };
        inline SQLSlowRecord& setPhysicalIORead(int64_t physicalIORead) { DARABONBA_PTR_SET_VALUE(physicalIORead_, physicalIORead) };


        // queryTimeMS Field Functions 
        bool hasQueryTimeMS() const { return this->queryTimeMS_ != nullptr;};
        void deleteQueryTimeMS() { this->queryTimeMS_ = nullptr;};
        inline int64_t getQueryTimeMS() const { DARABONBA_PTR_GET_DEFAULT(queryTimeMS_, 0L) };
        inline SQLSlowRecord& setQueryTimeMS(int64_t queryTimeMS) { DARABONBA_PTR_SET_VALUE(queryTimeMS_, queryTimeMS) };


        // queryTimes Field Functions 
        bool hasQueryTimes() const { return this->queryTimes_ != nullptr;};
        void deleteQueryTimes() { this->queryTimes_ = nullptr;};
        inline int64_t getQueryTimes() const { DARABONBA_PTR_GET_DEFAULT(queryTimes_, 0L) };
        inline SQLSlowRecord& setQueryTimes(int64_t queryTimes) { DARABONBA_PTR_SET_VALUE(queryTimes_, queryTimes) };


        // returnRowCounts Field Functions 
        bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
        void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
        inline int64_t getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
        inline SQLSlowRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


        // rowsAffectedCount Field Functions 
        bool hasRowsAffectedCount() const { return this->rowsAffectedCount_ != nullptr;};
        void deleteRowsAffectedCount() { this->rowsAffectedCount_ = nullptr;};
        inline int64_t getRowsAffectedCount() const { DARABONBA_PTR_GET_DEFAULT(rowsAffectedCount_, 0L) };
        inline SQLSlowRecord& setRowsAffectedCount(int64_t rowsAffectedCount) { DARABONBA_PTR_SET_VALUE(rowsAffectedCount_, rowsAffectedCount) };


        // SQLHash Field Functions 
        bool hasSQLHash() const { return this->SQLHash_ != nullptr;};
        void deleteSQLHash() { this->SQLHash_ = nullptr;};
        inline string getSQLHash() const { DARABONBA_PTR_GET_DEFAULT(SQLHash_, "") };
        inline SQLSlowRecord& setSQLHash(string SQLHash) { DARABONBA_PTR_SET_VALUE(SQLHash_, SQLHash) };


        // SQLText Field Functions 
        bool hasSQLText() const { return this->SQLText_ != nullptr;};
        void deleteSQLText() { this->SQLText_ = nullptr;};
        inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
        inline SQLSlowRecord& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SQLSlowRecord& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // writeIOCount Field Functions 
        bool hasWriteIOCount() const { return this->writeIOCount_ != nullptr;};
        void deleteWriteIOCount() { this->writeIOCount_ = nullptr;};
        inline int64_t getWriteIOCount() const { DARABONBA_PTR_GET_DEFAULT(writeIOCount_, 0L) };
        inline SQLSlowRecord& setWriteIOCount(int64_t writeIOCount) { DARABONBA_PTR_SET_VALUE(writeIOCount_, writeIOCount) };


      protected:
        // The name of the application that is connected to the instance.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<string> applicationName_ {};
        // The hostname of the client.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<string> clientHostName_ {};
        // The duration during which the SQL statement is processed by the CPU. Unit: milliseconds.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> cpuTime_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The time when the execution of the SQL statement started. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> executionStartTime_ {};
        // The name and IP address of the client that is connected to the database.
        shared_ptr<string> hostAddress_ {};
        // The number of rows that are affected by the last SQL statement.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> lastRowsAffectedCount_ {};
        shared_ptr<int64_t> lockTimeMS_ {};
        // The lock duration of the query. Unit: seconds.
        shared_ptr<int64_t> lockTimes_ {};
        // The number of logical reads.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> logicalIORead_ {};
        // The number of parsed rows.
        shared_ptr<int64_t> parseRowCounts_ {};
        // The number of physical reads.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> physicalIORead_ {};
        // The execution duration of the query. Unit: milliseconds.
        shared_ptr<int64_t> queryTimeMS_ {};
        // The execution duration of the query. Unit: seconds.
        shared_ptr<int64_t> queryTimes_ {};
        // The number of rows returned.
        shared_ptr<int64_t> returnRowCounts_ {};
        // The number of affected rows.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> rowsAffectedCount_ {};
        // The unique ID of the SQL statement.
        shared_ptr<string> SQLHash_ {};
        // The details of the SQL statement.
        shared_ptr<string> SQLText_ {};
        // The name of the user.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<string> userName_ {};
        // The number of I/O writes.
        // 
        // > This parameter is returned only for instances that run SQL Server.
        shared_ptr<int64_t> writeIOCount_ {};
      };

      virtual bool empty() const override { return this->SQLSlowRecord_ == nullptr; };
      // SQLSlowRecord Field Functions 
      bool hasSQLSlowRecord() const { return this->SQLSlowRecord_ != nullptr;};
      void deleteSQLSlowRecord() { this->SQLSlowRecord_ = nullptr;};
      inline const vector<Items::SQLSlowRecord> & getSQLSlowRecord() const { DARABONBA_PTR_GET_CONST(SQLSlowRecord_, vector<Items::SQLSlowRecord>) };
      inline vector<Items::SQLSlowRecord> getSQLSlowRecord() { DARABONBA_PTR_GET(SQLSlowRecord_, vector<Items::SQLSlowRecord>) };
      inline Items& setSQLSlowRecord(const vector<Items::SQLSlowRecord> & sQLSlowRecord) { DARABONBA_PTR_SET_VALUE(SQLSlowRecord_, sQLSlowRecord) };
      inline Items& setSQLSlowRecord(vector<Items::SQLSlowRecord> && sQLSlowRecord) { DARABONBA_PTR_SET_RVALUE(SQLSlowRecord_, sQLSlowRecord) };


    protected:
      shared_ptr<vector<Items::SQLSlowRecord>> SQLSlowRecord_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->engine_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeSlowLogRecordsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSlowLogRecordsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSlowLogRecordsResponseBody::Items) };
    inline DescribeSlowLogRecordsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSlowLogRecordsResponseBody::Items) };
    inline DescribeSlowLogRecordsResponseBody& setItems(const DescribeSlowLogRecordsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSlowLogRecordsResponseBody& setItems(DescribeSlowLogRecordsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSlowLogRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSlowLogRecordsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeSlowLogRecordsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The ID of the instance.
    shared_ptr<string> DBInstanceId_ {};
    // The type of the database engine.
    shared_ptr<string> engine_ {};
    // An array that consists of the information about each slow log.
    shared_ptr<DescribeSlowLogRecordsResponseBody::Items> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of SQL log reports on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
