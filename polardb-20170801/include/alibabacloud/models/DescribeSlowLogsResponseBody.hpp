// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODY_HPP_
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
  class DescribeSlowLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeSlowLogsResponseBody() = default ;
    DescribeSlowLogsResponseBody(const DescribeSlowLogsResponseBody &) = default ;
    DescribeSlowLogsResponseBody(DescribeSlowLogsResponseBody &&) = default ;
    DescribeSlowLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogsResponseBody() = default ;
    DescribeSlowLogsResponseBody& operator=(const DescribeSlowLogsResponseBody &) = default ;
    DescribeSlowLogsResponseBody& operator=(DescribeSlowLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(SQLSlowLog, SQLSlowLog_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SQLSlowLog, SQLSlowLog_);
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
      class SQLSlowLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SQLSlowLog& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_TO_JSON(MaxExecutionTime, maxExecutionTime_);
          DARABONBA_PTR_TO_JSON(MaxExecutionTimeMs, maxExecutionTimeMs_);
          DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
          DARABONBA_PTR_TO_JSON(ParseMaxRowCount, parseMaxRowCount_);
          DARABONBA_PTR_TO_JSON(ParseTotalRowCounts, parseTotalRowCounts_);
          DARABONBA_PTR_TO_JSON(ReturnMaxRowCount, returnMaxRowCount_);
          DARABONBA_PTR_TO_JSON(ReturnTotalRowCounts, returnTotalRowCounts_);
          DARABONBA_PTR_TO_JSON(SQLHASH, SQLHASH_);
          DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
          DARABONBA_PTR_TO_JSON(TotalExecutionCounts, totalExecutionCounts_);
          DARABONBA_PTR_TO_JSON(TotalExecutionTimes, totalExecutionTimes_);
          DARABONBA_PTR_TO_JSON(TotalLockTimes, totalLockTimes_);
        };
        friend void from_json(const Darabonba::Json& j, SQLSlowLog& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_FROM_JSON(MaxExecutionTime, maxExecutionTime_);
          DARABONBA_PTR_FROM_JSON(MaxExecutionTimeMs, maxExecutionTimeMs_);
          DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
          DARABONBA_PTR_FROM_JSON(ParseMaxRowCount, parseMaxRowCount_);
          DARABONBA_PTR_FROM_JSON(ParseTotalRowCounts, parseTotalRowCounts_);
          DARABONBA_PTR_FROM_JSON(ReturnMaxRowCount, returnMaxRowCount_);
          DARABONBA_PTR_FROM_JSON(ReturnTotalRowCounts, returnTotalRowCounts_);
          DARABONBA_PTR_FROM_JSON(SQLHASH, SQLHASH_);
          DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
          DARABONBA_PTR_FROM_JSON(TotalExecutionCounts, totalExecutionCounts_);
          DARABONBA_PTR_FROM_JSON(TotalExecutionTimes, totalExecutionTimes_);
          DARABONBA_PTR_FROM_JSON(TotalLockTimes, totalLockTimes_);
        };
        SQLSlowLog() = default ;
        SQLSlowLog(const SQLSlowLog &) = default ;
        SQLSlowLog(SQLSlowLog &&) = default ;
        SQLSlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SQLSlowLog() = default ;
        SQLSlowLog& operator=(const SQLSlowLog &) = default ;
        SQLSlowLog& operator=(SQLSlowLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBName_ == nullptr && this->DBNodeId_ == nullptr && this->maxExecutionTime_ == nullptr && this->maxExecutionTimeMs_ == nullptr && this->maxLockTime_ == nullptr
        && this->parseMaxRowCount_ == nullptr && this->parseTotalRowCounts_ == nullptr && this->returnMaxRowCount_ == nullptr && this->returnTotalRowCounts_ == nullptr && this->SQLHASH_ == nullptr
        && this->SQLText_ == nullptr && this->totalExecutionCounts_ == nullptr && this->totalExecutionTimes_ == nullptr && this->totalLockTimes_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline SQLSlowLog& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline SQLSlowLog& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // DBNodeId Field Functions 
        bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
        void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
        inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
        inline SQLSlowLog& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


        // maxExecutionTime Field Functions 
        bool hasMaxExecutionTime() const { return this->maxExecutionTime_ != nullptr;};
        void deleteMaxExecutionTime() { this->maxExecutionTime_ = nullptr;};
        inline int64_t getMaxExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTime_, 0L) };
        inline SQLSlowLog& setMaxExecutionTime(int64_t maxExecutionTime) { DARABONBA_PTR_SET_VALUE(maxExecutionTime_, maxExecutionTime) };


        // maxExecutionTimeMs Field Functions 
        bool hasMaxExecutionTimeMs() const { return this->maxExecutionTimeMs_ != nullptr;};
        void deleteMaxExecutionTimeMs() { this->maxExecutionTimeMs_ = nullptr;};
        inline string getMaxExecutionTimeMs() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTimeMs_, "") };
        inline SQLSlowLog& setMaxExecutionTimeMs(string maxExecutionTimeMs) { DARABONBA_PTR_SET_VALUE(maxExecutionTimeMs_, maxExecutionTimeMs) };


        // maxLockTime Field Functions 
        bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
        void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
        inline int64_t getMaxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0L) };
        inline SQLSlowLog& setMaxLockTime(int64_t maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


        // parseMaxRowCount Field Functions 
        bool hasParseMaxRowCount() const { return this->parseMaxRowCount_ != nullptr;};
        void deleteParseMaxRowCount() { this->parseMaxRowCount_ = nullptr;};
        inline int64_t getParseMaxRowCount() const { DARABONBA_PTR_GET_DEFAULT(parseMaxRowCount_, 0L) };
        inline SQLSlowLog& setParseMaxRowCount(int64_t parseMaxRowCount) { DARABONBA_PTR_SET_VALUE(parseMaxRowCount_, parseMaxRowCount) };


        // parseTotalRowCounts Field Functions 
        bool hasParseTotalRowCounts() const { return this->parseTotalRowCounts_ != nullptr;};
        void deleteParseTotalRowCounts() { this->parseTotalRowCounts_ = nullptr;};
        inline int64_t getParseTotalRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseTotalRowCounts_, 0L) };
        inline SQLSlowLog& setParseTotalRowCounts(int64_t parseTotalRowCounts) { DARABONBA_PTR_SET_VALUE(parseTotalRowCounts_, parseTotalRowCounts) };


        // returnMaxRowCount Field Functions 
        bool hasReturnMaxRowCount() const { return this->returnMaxRowCount_ != nullptr;};
        void deleteReturnMaxRowCount() { this->returnMaxRowCount_ = nullptr;};
        inline int64_t getReturnMaxRowCount() const { DARABONBA_PTR_GET_DEFAULT(returnMaxRowCount_, 0L) };
        inline SQLSlowLog& setReturnMaxRowCount(int64_t returnMaxRowCount) { DARABONBA_PTR_SET_VALUE(returnMaxRowCount_, returnMaxRowCount) };


        // returnTotalRowCounts Field Functions 
        bool hasReturnTotalRowCounts() const { return this->returnTotalRowCounts_ != nullptr;};
        void deleteReturnTotalRowCounts() { this->returnTotalRowCounts_ = nullptr;};
        inline int64_t getReturnTotalRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnTotalRowCounts_, 0L) };
        inline SQLSlowLog& setReturnTotalRowCounts(int64_t returnTotalRowCounts) { DARABONBA_PTR_SET_VALUE(returnTotalRowCounts_, returnTotalRowCounts) };


        // SQLHASH Field Functions 
        bool hasSQLHASH() const { return this->SQLHASH_ != nullptr;};
        void deleteSQLHASH() { this->SQLHASH_ = nullptr;};
        inline string getSQLHASH() const { DARABONBA_PTR_GET_DEFAULT(SQLHASH_, "") };
        inline SQLSlowLog& setSQLHASH(string SQLHASH) { DARABONBA_PTR_SET_VALUE(SQLHASH_, SQLHASH) };


        // SQLText Field Functions 
        bool hasSQLText() const { return this->SQLText_ != nullptr;};
        void deleteSQLText() { this->SQLText_ = nullptr;};
        inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
        inline SQLSlowLog& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


        // totalExecutionCounts Field Functions 
        bool hasTotalExecutionCounts() const { return this->totalExecutionCounts_ != nullptr;};
        void deleteTotalExecutionCounts() { this->totalExecutionCounts_ = nullptr;};
        inline int64_t getTotalExecutionCounts() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionCounts_, 0L) };
        inline SQLSlowLog& setTotalExecutionCounts(int64_t totalExecutionCounts) { DARABONBA_PTR_SET_VALUE(totalExecutionCounts_, totalExecutionCounts) };


        // totalExecutionTimes Field Functions 
        bool hasTotalExecutionTimes() const { return this->totalExecutionTimes_ != nullptr;};
        void deleteTotalExecutionTimes() { this->totalExecutionTimes_ = nullptr;};
        inline int64_t getTotalExecutionTimes() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionTimes_, 0L) };
        inline SQLSlowLog& setTotalExecutionTimes(int64_t totalExecutionTimes) { DARABONBA_PTR_SET_VALUE(totalExecutionTimes_, totalExecutionTimes) };


        // totalLockTimes Field Functions 
        bool hasTotalLockTimes() const { return this->totalLockTimes_ != nullptr;};
        void deleteTotalLockTimes() { this->totalLockTimes_ = nullptr;};
        inline int64_t getTotalLockTimes() const { DARABONBA_PTR_GET_DEFAULT(totalLockTimes_, 0L) };
        inline SQLSlowLog& setTotalLockTimes(int64_t totalLockTimes) { DARABONBA_PTR_SET_VALUE(totalLockTimes_, totalLockTimes) };


      protected:
        // The date when the data was generated.
        shared_ptr<string> createTime_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The ID of the node.
        shared_ptr<string> DBNodeId_ {};
        // The longest execution duration of a specific SQL statement in the query. Unit: seconds.
        shared_ptr<int64_t> maxExecutionTime_ {};
        shared_ptr<string> maxExecutionTimeMs_ {};
        // The longest lock duration that was caused by a specific SQL statement in the query. Unit: seconds.
        shared_ptr<int64_t> maxLockTime_ {};
        // The largest number of rows that were parsed by a specific SQL statement in the query.
        shared_ptr<int64_t> parseMaxRowCount_ {};
        // The total number of rows that were parsed by all SQL statements in the query.
        shared_ptr<int64_t> parseTotalRowCounts_ {};
        // The largest number of rows that were returned by a specific SQL statement in the query.
        shared_ptr<int64_t> returnMaxRowCount_ {};
        // The total number of rows that were returned by all SQL statements in the query.
        shared_ptr<int64_t> returnTotalRowCounts_ {};
        // The unique ID of the SQL statement. The ID is used to obtain the slow query logs of the SQL statement.
        shared_ptr<string> SQLHASH_ {};
        // The SQL statement that is executed in the query.
        shared_ptr<string> SQLText_ {};
        // The total number of executions of the SQL statements.
        shared_ptr<int64_t> totalExecutionCounts_ {};
        // The total duration that was caused by all SQL statements in the query. Unit: seconds.
        shared_ptr<int64_t> totalExecutionTimes_ {};
        // The total lock duration that was caused by all SQL statements in the query. Unit: seconds.
        shared_ptr<int64_t> totalLockTimes_ {};
      };

      virtual bool empty() const override { return this->SQLSlowLog_ == nullptr; };
      // SQLSlowLog Field Functions 
      bool hasSQLSlowLog() const { return this->SQLSlowLog_ != nullptr;};
      void deleteSQLSlowLog() { this->SQLSlowLog_ = nullptr;};
      inline const vector<Items::SQLSlowLog> & getSQLSlowLog() const { DARABONBA_PTR_GET_CONST(SQLSlowLog_, vector<Items::SQLSlowLog>) };
      inline vector<Items::SQLSlowLog> getSQLSlowLog() { DARABONBA_PTR_GET(SQLSlowLog_, vector<Items::SQLSlowLog>) };
      inline Items& setSQLSlowLog(const vector<Items::SQLSlowLog> & sQLSlowLog) { DARABONBA_PTR_SET_VALUE(SQLSlowLog_, sQLSlowLog) };
      inline Items& setSQLSlowLog(vector<Items::SQLSlowLog> && sQLSlowLog) { DARABONBA_PTR_SET_RVALUE(SQLSlowLog_, sQLSlowLog) };


    protected:
      shared_ptr<vector<Items::SQLSlowLog>> SQLSlowLog_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->engine_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->totalRecordCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSlowLogsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSlowLogsResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeSlowLogsResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSlowLogsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSlowLogsResponseBody::Items) };
    inline DescribeSlowLogsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSlowLogsResponseBody::Items) };
    inline DescribeSlowLogsResponseBody& setItems(const DescribeSlowLogsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSlowLogsResponseBody& setItems(DescribeSlowLogsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSlowLogsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeSlowLogsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSlowLogsResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeSlowLogsResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The ID of cluster.
    shared_ptr<string> DBClusterId_ {};
    // The end date of the query.
    shared_ptr<string> endTime_ {};
    // The type of the database engine.
    shared_ptr<string> engine_ {};
    // Details about slow query logs.
    shared_ptr<DescribeSlowLogsResponseBody::Items> items_ {};
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of SQL statements that are returned on the current page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start date of the query.
    shared_ptr<string> startTime_ {};
    // The total number of returned entries.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
