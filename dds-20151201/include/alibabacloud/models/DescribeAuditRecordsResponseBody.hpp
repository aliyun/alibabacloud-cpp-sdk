// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUDITRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUDITRECORDSRESPONSEBODY_HPP_
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
  class DescribeAuditRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAuditRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAuditRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeAuditRecordsResponseBody() = default ;
    DescribeAuditRecordsResponseBody(const DescribeAuditRecordsResponseBody &) = default ;
    DescribeAuditRecordsResponseBody(DescribeAuditRecordsResponseBody &&) = default ;
    DescribeAuditRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAuditRecordsResponseBody() = default ;
    DescribeAuditRecordsResponseBody& operator=(const DescribeAuditRecordsResponseBody &) = default ;
    DescribeAuditRecordsResponseBody& operator=(DescribeAuditRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(SQLRecord, SQLRecord_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SQLRecord, SQLRecord_);
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
      class SQLRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SQLRecord& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_TO_JSON(Syntax, syntax_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
          DARABONBA_PTR_TO_JSON(ThreadID, threadID_);
          DARABONBA_PTR_TO_JSON(TotalExecutionTimes, totalExecutionTimes_);
        };
        friend void from_json(const Darabonba::Json& j, SQLRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
          DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_FROM_JSON(Syntax, syntax_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          DARABONBA_PTR_FROM_JSON(ThreadID, threadID_);
          DARABONBA_PTR_FROM_JSON(TotalExecutionTimes, totalExecutionTimes_);
        };
        SQLRecord() = default ;
        SQLRecord(const SQLRecord &) = default ;
        SQLRecord(SQLRecord &&) = default ;
        SQLRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SQLRecord() = default ;
        SQLRecord& operator=(const SQLRecord &) = default ;
        SQLRecord& operator=(SQLRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBName_ == nullptr && this->executeTime_ == nullptr && this->hostAddress_ == nullptr && this->returnRowCounts_ == nullptr && this->syntax_ == nullptr
        && this->tableName_ == nullptr && this->threadID_ == nullptr && this->totalExecutionTimes_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline SQLRecord& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline SQLRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
        inline SQLRecord& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline SQLRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


        // returnRowCounts Field Functions 
        bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
        void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
        inline int64_t getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
        inline SQLRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


        // syntax Field Functions 
        bool hasSyntax() const { return this->syntax_ != nullptr;};
        void deleteSyntax() { this->syntax_ = nullptr;};
        inline string getSyntax() const { DARABONBA_PTR_GET_DEFAULT(syntax_, "") };
        inline SQLRecord& setSyntax(string syntax) { DARABONBA_PTR_SET_VALUE(syntax_, syntax) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline SQLRecord& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // threadID Field Functions 
        bool hasThreadID() const { return this->threadID_ != nullptr;};
        void deleteThreadID() { this->threadID_ = nullptr;};
        inline string getThreadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, "") };
        inline SQLRecord& setThreadID(string threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


        // totalExecutionTimes Field Functions 
        bool hasTotalExecutionTimes() const { return this->totalExecutionTimes_ != nullptr;};
        void deleteTotalExecutionTimes() { this->totalExecutionTimes_ = nullptr;};
        inline int64_t getTotalExecutionTimes() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionTimes_, 0L) };
        inline SQLRecord& setTotalExecutionTimes(int64_t totalExecutionTimes) { DARABONBA_PTR_SET_VALUE(totalExecutionTimes_, totalExecutionTimes) };


      protected:
        // The account of the database.
        shared_ptr<string> accountName_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The time when the statement was executed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
        shared_ptr<string> executeTime_ {};
        // The IP addresses of the client.
        shared_ptr<string> hostAddress_ {};
        // The number of SQL audit log entries that are returned.
        shared_ptr<int64_t> returnRowCounts_ {};
        // The statement that was executed.
        shared_ptr<string> syntax_ {};
        // The name of the collection.
        shared_ptr<string> tableName_ {};
        // The ID of the thread.
        shared_ptr<string> threadID_ {};
        // The duration of the statement execution. Unit: microseconds.
        shared_ptr<int64_t> totalExecutionTimes_ {};
      };

      virtual bool empty() const override { return this->SQLRecord_ == nullptr; };
      // SQLRecord Field Functions 
      bool hasSQLRecord() const { return this->SQLRecord_ != nullptr;};
      void deleteSQLRecord() { this->SQLRecord_ = nullptr;};
      inline const vector<Items::SQLRecord> & getSQLRecord() const { DARABONBA_PTR_GET_CONST(SQLRecord_, vector<Items::SQLRecord>) };
      inline vector<Items::SQLRecord> getSQLRecord() { DARABONBA_PTR_GET(SQLRecord_, vector<Items::SQLRecord>) };
      inline Items& setSQLRecord(const vector<Items::SQLRecord> & sQLRecord) { DARABONBA_PTR_SET_VALUE(SQLRecord_, sQLRecord) };
      inline Items& setSQLRecord(vector<Items::SQLRecord> && sQLRecord) { DARABONBA_PTR_SET_RVALUE(SQLRecord_, sQLRecord) };


    protected:
      shared_ptr<vector<Items::SQLRecord>> SQLRecord_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeAuditRecordsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeAuditRecordsResponseBody::Items) };
    inline DescribeAuditRecordsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeAuditRecordsResponseBody::Items) };
    inline DescribeAuditRecordsResponseBody& setItems(const DescribeAuditRecordsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAuditRecordsResponseBody& setItems(DescribeAuditRecordsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAuditRecordsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAuditRecordsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAuditRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeAuditRecordsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // An array that consists of the information of audit log entries.
    shared_ptr<DescribeAuditRecordsResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of entries on the current page.
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
