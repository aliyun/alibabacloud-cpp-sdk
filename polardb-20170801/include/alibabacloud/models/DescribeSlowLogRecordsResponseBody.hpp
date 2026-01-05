// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
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
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_TO_JSON(LockTimes, lockTimes_);
          DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
          DARABONBA_PTR_TO_JSON(QueryTimeMS, queryTimeMS_);
          DARABONBA_PTR_TO_JSON(QueryTimes, queryTimes_);
          DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_TO_JSON(SQLHash, SQLHash_);
          DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
        };
        friend void from_json(const Darabonba::Json& j, SQLSlowRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_FROM_JSON(LockTimes, lockTimes_);
          DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
          DARABONBA_PTR_FROM_JSON(QueryTimeMS, queryTimeMS_);
          DARABONBA_PTR_FROM_JSON(QueryTimes, queryTimes_);
          DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_FROM_JSON(SQLHash, SQLHash_);
          DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
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
        virtual bool empty() const override { return this->DBName_ == nullptr
        && this->DBNodeId_ == nullptr && this->executionStartTime_ == nullptr && this->hostAddress_ == nullptr && this->lockTimes_ == nullptr && this->parseRowCounts_ == nullptr
        && this->queryTimeMS_ == nullptr && this->queryTimes_ == nullptr && this->returnRowCounts_ == nullptr && this->SQLHash_ == nullptr && this->SQLText_ == nullptr; };
        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline SQLSlowRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // DBNodeId Field Functions 
        bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
        void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
        inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
        inline SQLSlowRecord& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


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


        // lockTimes Field Functions 
        bool hasLockTimes() const { return this->lockTimes_ != nullptr;};
        void deleteLockTimes() { this->lockTimes_ = nullptr;};
        inline int64_t getLockTimes() const { DARABONBA_PTR_GET_DEFAULT(lockTimes_, 0L) };
        inline SQLSlowRecord& setLockTimes(int64_t lockTimes) { DARABONBA_PTR_SET_VALUE(lockTimes_, lockTimes) };


        // parseRowCounts Field Functions 
        bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
        void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
        inline int64_t getParseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
        inline SQLSlowRecord& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


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


      protected:
        // Database name.
        shared_ptr<string> DBName_ {};
        // Node ID.
        shared_ptr<string> DBNodeId_ {};
        // Time when the SQL starts execution. The format is `YYYY-MM-DDThh:mmZ` (UTC time).
        shared_ptr<string> executionStartTime_ {};
        // Client address connecting to the database.
        shared_ptr<string> hostAddress_ {};
        // SQL lock duration in seconds.
        shared_ptr<int64_t> lockTimes_ {};
        // Number of rows parsed.
        shared_ptr<int64_t> parseRowCounts_ {};
        // Query time. Unit: milliseconds.
        shared_ptr<int64_t> queryTimeMS_ {};
        // SQL execution duration, in seconds.
        shared_ptr<int64_t> queryTimes_ {};
        // Number of rows returned.
        shared_ptr<int64_t> returnRowCounts_ {};
        // Unique identifier for the SQL statement in slow log statistics.
        shared_ptr<string> SQLHash_ {};
        // Query statement.
        shared_ptr<string> SQLText_ {};
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

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->engine_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


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
    // Cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // Database engine.
    shared_ptr<string> engine_ {};
    // List of slow log details.
    shared_ptr<DescribeSlowLogRecordsResponseBody::Items> items_ {};
    // Page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of records on this page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total number of SQL statements.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
