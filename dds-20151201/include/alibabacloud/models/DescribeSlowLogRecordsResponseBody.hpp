// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
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
        DARABONBA_PTR_TO_JSON(LogRecords, logRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(LogRecords, logRecords_);
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
      class LogRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogRecords& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(DocsExamined, docsExamined_);
          DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_TO_JSON(KeysExamined, keysExamined_);
          DARABONBA_PTR_TO_JSON(QueryTimes, queryTimes_);
          DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, LogRecords& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(DocsExamined, docsExamined_);
          DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_FROM_JSON(KeysExamined, keysExamined_);
          DARABONBA_PTR_FROM_JSON(QueryTimes, queryTimes_);
          DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        LogRecords() = default ;
        LogRecords(const LogRecords &) = default ;
        LogRecords(LogRecords &&) = default ;
        LogRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LogRecords() = default ;
        LogRecords& operator=(const LogRecords &) = default ;
        LogRecords& operator=(LogRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBName_ == nullptr && this->docsExamined_ == nullptr && this->executionStartTime_ == nullptr && this->hostAddress_ == nullptr && this->keysExamined_ == nullptr
        && this->queryTimes_ == nullptr && this->returnRowCounts_ == nullptr && this->SQLText_ == nullptr && this->tableName_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline LogRecords& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline LogRecords& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // docsExamined Field Functions 
        bool hasDocsExamined() const { return this->docsExamined_ != nullptr;};
        void deleteDocsExamined() { this->docsExamined_ = nullptr;};
        inline int64_t getDocsExamined() const { DARABONBA_PTR_GET_DEFAULT(docsExamined_, 0L) };
        inline LogRecords& setDocsExamined(int64_t docsExamined) { DARABONBA_PTR_SET_VALUE(docsExamined_, docsExamined) };


        // executionStartTime Field Functions 
        bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
        void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
        inline string getExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
        inline LogRecords& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline LogRecords& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


        // keysExamined Field Functions 
        bool hasKeysExamined() const { return this->keysExamined_ != nullptr;};
        void deleteKeysExamined() { this->keysExamined_ = nullptr;};
        inline int64_t getKeysExamined() const { DARABONBA_PTR_GET_DEFAULT(keysExamined_, 0L) };
        inline LogRecords& setKeysExamined(int64_t keysExamined) { DARABONBA_PTR_SET_VALUE(keysExamined_, keysExamined) };


        // queryTimes Field Functions 
        bool hasQueryTimes() const { return this->queryTimes_ != nullptr;};
        void deleteQueryTimes() { this->queryTimes_ = nullptr;};
        inline string getQueryTimes() const { DARABONBA_PTR_GET_DEFAULT(queryTimes_, "") };
        inline LogRecords& setQueryTimes(string queryTimes) { DARABONBA_PTR_SET_VALUE(queryTimes_, queryTimes) };


        // returnRowCounts Field Functions 
        bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
        void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
        inline int64_t getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
        inline LogRecords& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


        // SQLText Field Functions 
        bool hasSQLText() const { return this->SQLText_ != nullptr;};
        void deleteSQLText() { this->SQLText_ = nullptr;};
        inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
        inline LogRecords& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline LogRecords& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The username of the database account that performs the operation.
        shared_ptr<string> accountName_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The number of documents that are scanned during the operation.
        shared_ptr<int64_t> docsExamined_ {};
        // The start time of the operation. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> executionStartTime_ {};
        // The host IP address that is used to connect to the database.
        shared_ptr<string> hostAddress_ {};
        // The number of rows involved in index scans.
        shared_ptr<int64_t> keysExamined_ {};
        // The execution time of the statement. Unit: milliseconds.
        shared_ptr<string> queryTimes_ {};
        // The number of rows returned by the SQL statement.
        shared_ptr<int64_t> returnRowCounts_ {};
        // The SQL statement that is executed during the slow operation.
        shared_ptr<string> SQLText_ {};
        // The name of the collection.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->logRecords_ == nullptr; };
      // logRecords Field Functions 
      bool hasLogRecords() const { return this->logRecords_ != nullptr;};
      void deleteLogRecords() { this->logRecords_ = nullptr;};
      inline const vector<Items::LogRecords> & getLogRecords() const { DARABONBA_PTR_GET_CONST(logRecords_, vector<Items::LogRecords>) };
      inline vector<Items::LogRecords> getLogRecords() { DARABONBA_PTR_GET(logRecords_, vector<Items::LogRecords>) };
      inline Items& setLogRecords(const vector<Items::LogRecords> & logRecords) { DARABONBA_PTR_SET_VALUE(logRecords_, logRecords) };
      inline Items& setLogRecords(vector<Items::LogRecords> && logRecords) { DARABONBA_PTR_SET_RVALUE(logRecords_, logRecords) };


    protected:
      shared_ptr<vector<Items::LogRecords>> logRecords_ {};
    };

    virtual bool empty() const override { return this->engine_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
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
    // The database engine.
    shared_ptr<string> engine_ {};
    // An array that consists of the information about each slow query.
    shared_ptr<DescribeSlowLogRecordsResponseBody::Items> items_ {};
    // The page number of the returned page. The value is a positive integer that does not exceed the maximum value of the INTEGER data type. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of slow query log entries returned on the page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
