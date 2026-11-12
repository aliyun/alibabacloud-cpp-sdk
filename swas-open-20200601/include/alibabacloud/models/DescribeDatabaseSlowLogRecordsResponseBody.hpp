// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DescribeDatabaseSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabaseSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PhysicalIORead, physicalIORead_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlowLogs, slowLogs_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabaseSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PhysicalIORead, physicalIORead_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlowLogs, slowLogs_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatabaseSlowLogRecordsResponseBody() = default ;
    DescribeDatabaseSlowLogRecordsResponseBody(const DescribeDatabaseSlowLogRecordsResponseBody &) = default ;
    DescribeDatabaseSlowLogRecordsResponseBody(DescribeDatabaseSlowLogRecordsResponseBody &&) = default ;
    DescribeDatabaseSlowLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabaseSlowLogRecordsResponseBody() = default ;
    DescribeDatabaseSlowLogRecordsResponseBody& operator=(const DescribeDatabaseSlowLogRecordsResponseBody &) = default ;
    DescribeDatabaseSlowLogRecordsResponseBody& operator=(DescribeDatabaseSlowLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlowLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlowLogs& obj) { 
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
        DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
        DARABONBA_PTR_TO_JSON(LockTimes, lockTimes_);
        DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
        DARABONBA_PTR_TO_JSON(QueryTimeMS, queryTimeMS_);
        DARABONBA_PTR_TO_JSON(QueryTimes, queryTimes_);
        DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
        DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      };
      friend void from_json(const Darabonba::Json& j, SlowLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
        DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
        DARABONBA_PTR_FROM_JSON(LockTimes, lockTimes_);
        DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
        DARABONBA_PTR_FROM_JSON(QueryTimeMS, queryTimeMS_);
        DARABONBA_PTR_FROM_JSON(QueryTimes, queryTimes_);
        DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
        DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      };
      SlowLogs() = default ;
      SlowLogs(const SlowLogs &) = default ;
      SlowLogs(SlowLogs &&) = default ;
      SlowLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlowLogs() = default ;
      SlowLogs& operator=(const SlowLogs &) = default ;
      SlowLogs& operator=(SlowLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->DBName_ == nullptr
        && this->executionStartTime_ == nullptr && this->hostAddress_ == nullptr && this->lockTimes_ == nullptr && this->parseRowCounts_ == nullptr && this->queryTimeMS_ == nullptr
        && this->queryTimes_ == nullptr && this->returnRowCounts_ == nullptr && this->SQLText_ == nullptr; };
      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline SlowLogs& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // executionStartTime Field Functions 
      bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
      void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
      inline string getExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
      inline SlowLogs& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


      // hostAddress Field Functions 
      bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
      void deleteHostAddress() { this->hostAddress_ = nullptr;};
      inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
      inline SlowLogs& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


      // lockTimes Field Functions 
      bool hasLockTimes() const { return this->lockTimes_ != nullptr;};
      void deleteLockTimes() { this->lockTimes_ = nullptr;};
      inline int64_t getLockTimes() const { DARABONBA_PTR_GET_DEFAULT(lockTimes_, 0L) };
      inline SlowLogs& setLockTimes(int64_t lockTimes) { DARABONBA_PTR_SET_VALUE(lockTimes_, lockTimes) };


      // parseRowCounts Field Functions 
      bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
      void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
      inline int64_t getParseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
      inline SlowLogs& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


      // queryTimeMS Field Functions 
      bool hasQueryTimeMS() const { return this->queryTimeMS_ != nullptr;};
      void deleteQueryTimeMS() { this->queryTimeMS_ = nullptr;};
      inline int64_t getQueryTimeMS() const { DARABONBA_PTR_GET_DEFAULT(queryTimeMS_, 0L) };
      inline SlowLogs& setQueryTimeMS(int64_t queryTimeMS) { DARABONBA_PTR_SET_VALUE(queryTimeMS_, queryTimeMS) };


      // queryTimes Field Functions 
      bool hasQueryTimes() const { return this->queryTimes_ != nullptr;};
      void deleteQueryTimes() { this->queryTimes_ = nullptr;};
      inline int64_t getQueryTimes() const { DARABONBA_PTR_GET_DEFAULT(queryTimes_, 0L) };
      inline SlowLogs& setQueryTimes(int64_t queryTimes) { DARABONBA_PTR_SET_VALUE(queryTimes_, queryTimes) };


      // returnRowCounts Field Functions 
      bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
      void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
      inline int64_t getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
      inline SlowLogs& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


      // SQLText Field Functions 
      bool hasSQLText() const { return this->SQLText_ != nullptr;};
      void deleteSQLText() { this->SQLText_ = nullptr;};
      inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
      inline SlowLogs& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    protected:
      // The database name.
      shared_ptr<string> DBName_ {};
      // The start time of the execution. The time is displayed in UTC and is in the `yyyy-MM-ddTHH:mm:ssZ` format.
      // 
      // > The time displayed in the console is in the UTC+8 time zone, which is 8 hours later than the time in UTC.
      shared_ptr<string> executionStartTime_ {};
      // The IP address of the client that is used to connect to the database.
      shared_ptr<string> hostAddress_ {};
      // The lock duration. Unit: seconds.
      shared_ptr<int64_t> lockTimes_ {};
      // The number of parsed rows.
      shared_ptr<int64_t> parseRowCounts_ {};
      // The execution duration. Unit: milliseconds.
      shared_ptr<int64_t> queryTimeMS_ {};
      // The execution duration. Unit: seconds.
      shared_ptr<int64_t> queryTimes_ {};
      // The number of returned rows.
      shared_ptr<int64_t> returnRowCounts_ {};
      // The details of the SQL statement.
      shared_ptr<string> SQLText_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->physicalIORead_ == nullptr && this->requestId_ == nullptr && this->slowLogs_ == nullptr
        && this->totalCount_ == nullptr; };
    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // physicalIORead Field Functions 
    bool hasPhysicalIORead() const { return this->physicalIORead_ != nullptr;};
    void deletePhysicalIORead() { this->physicalIORead_ = nullptr;};
    inline int64_t getPhysicalIORead() const { DARABONBA_PTR_GET_DEFAULT(physicalIORead_, 0L) };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setPhysicalIORead(int64_t physicalIORead) { DARABONBA_PTR_SET_VALUE(physicalIORead_, physicalIORead) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slowLogs Field Functions 
    bool hasSlowLogs() const { return this->slowLogs_ != nullptr;};
    void deleteSlowLogs() { this->slowLogs_ = nullptr;};
    inline const vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs> & getSlowLogs() const { DARABONBA_PTR_GET_CONST(slowLogs_, vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs>) };
    inline vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs> getSlowLogs() { DARABONBA_PTR_GET(slowLogs_, vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs>) };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setSlowLogs(const vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs> & slowLogs) { DARABONBA_PTR_SET_VALUE(slowLogs_, slowLogs) };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setSlowLogs(vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs> && slowLogs) { DARABONBA_PTR_SET_RVALUE(slowLogs_, slowLogs) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatabaseSlowLogRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The database engine.
    shared_ptr<string> engine_ {};
    // The page number of the returned page.
    // 
    // Starts from 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: 30 to 100.
    // 
    // Default value: 30.
    shared_ptr<int32_t> pageSize_ {};
    // The number of logical reads.
    shared_ptr<int64_t> physicalIORead_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The slow query logs.
    shared_ptr<vector<DescribeDatabaseSlowLogRecordsResponseBody::SlowLogs>> slowLogs_ {};
    // The total number of slow query logs.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
