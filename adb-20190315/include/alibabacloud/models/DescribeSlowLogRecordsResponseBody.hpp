// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        DARABONBA_PTR_TO_JSON(SlowLogRecord, slowLogRecord_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SlowLogRecord, slowLogRecord_);
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
      class SlowLogRecord : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlowLogRecord& obj) { 
          DARABONBA_PTR_TO_JSON(DBName, DBName_);
          DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_TO_JSON(OutputSize, outputSize_);
          DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
          DARABONBA_PTR_TO_JSON(PeakMemoryUsage, peakMemoryUsage_);
          DARABONBA_PTR_TO_JSON(PlanningTime, planningTime_);
          DARABONBA_PTR_TO_JSON(ProcessID, processID_);
          DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_TO_JSON(QueueTime, queueTime_);
          DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
          DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
          DARABONBA_PTR_TO_JSON(ScanSize, scanSize_);
          DARABONBA_PTR_TO_JSON(ScanTime, scanTime_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(WallTime, wallTime_);
        };
        friend void from_json(const Darabonba::Json& j, SlowLogRecord& obj) { 
          DARABONBA_PTR_FROM_JSON(DBName, DBName_);
          DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
          DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
          DARABONBA_PTR_FROM_JSON(OutputSize, outputSize_);
          DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
          DARABONBA_PTR_FROM_JSON(PeakMemoryUsage, peakMemoryUsage_);
          DARABONBA_PTR_FROM_JSON(PlanningTime, planningTime_);
          DARABONBA_PTR_FROM_JSON(ProcessID, processID_);
          DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
          DARABONBA_PTR_FROM_JSON(QueueTime, queueTime_);
          DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
          DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
          DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
          DARABONBA_PTR_FROM_JSON(ScanSize, scanSize_);
          DARABONBA_PTR_FROM_JSON(ScanTime, scanTime_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(WallTime, wallTime_);
        };
        SlowLogRecord() = default ;
        SlowLogRecord(const SlowLogRecord &) = default ;
        SlowLogRecord(SlowLogRecord &&) = default ;
        SlowLogRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlowLogRecord() = default ;
        SlowLogRecord& operator=(const SlowLogRecord &) = default ;
        SlowLogRecord& operator=(SlowLogRecord &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBName_ == nullptr
        && this->executionStartTime_ == nullptr && this->hostAddress_ == nullptr && this->outputSize_ == nullptr && this->parseRowCounts_ == nullptr && this->peakMemoryUsage_ == nullptr
        && this->planningTime_ == nullptr && this->processID_ == nullptr && this->queryTime_ == nullptr && this->queueTime_ == nullptr && this->returnRowCounts_ == nullptr
        && this->SQLText_ == nullptr && this->scanRows_ == nullptr && this->scanSize_ == nullptr && this->scanTime_ == nullptr && this->state_ == nullptr
        && this->userName_ == nullptr && this->wallTime_ == nullptr; };
        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline SlowLogRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // executionStartTime Field Functions 
        bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
        void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
        inline string getExecutionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
        inline SlowLogRecord& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline SlowLogRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


        // outputSize Field Functions 
        bool hasOutputSize() const { return this->outputSize_ != nullptr;};
        void deleteOutputSize() { this->outputSize_ = nullptr;};
        inline string getOutputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, "") };
        inline SlowLogRecord& setOutputSize(string outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


        // parseRowCounts Field Functions 
        bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
        void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
        inline int64_t getParseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
        inline SlowLogRecord& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


        // peakMemoryUsage Field Functions 
        bool hasPeakMemoryUsage() const { return this->peakMemoryUsage_ != nullptr;};
        void deletePeakMemoryUsage() { this->peakMemoryUsage_ = nullptr;};
        inline string getPeakMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(peakMemoryUsage_, "") };
        inline SlowLogRecord& setPeakMemoryUsage(string peakMemoryUsage) { DARABONBA_PTR_SET_VALUE(peakMemoryUsage_, peakMemoryUsage) };


        // planningTime Field Functions 
        bool hasPlanningTime() const { return this->planningTime_ != nullptr;};
        void deletePlanningTime() { this->planningTime_ = nullptr;};
        inline int64_t getPlanningTime() const { DARABONBA_PTR_GET_DEFAULT(planningTime_, 0L) };
        inline SlowLogRecord& setPlanningTime(int64_t planningTime) { DARABONBA_PTR_SET_VALUE(planningTime_, planningTime) };


        // processID Field Functions 
        bool hasProcessID() const { return this->processID_ != nullptr;};
        void deleteProcessID() { this->processID_ = nullptr;};
        inline string getProcessID() const { DARABONBA_PTR_GET_DEFAULT(processID_, "") };
        inline SlowLogRecord& setProcessID(string processID) { DARABONBA_PTR_SET_VALUE(processID_, processID) };


        // queryTime Field Functions 
        bool hasQueryTime() const { return this->queryTime_ != nullptr;};
        void deleteQueryTime() { this->queryTime_ = nullptr;};
        inline int64_t getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, 0L) };
        inline SlowLogRecord& setQueryTime(int64_t queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


        // queueTime Field Functions 
        bool hasQueueTime() const { return this->queueTime_ != nullptr;};
        void deleteQueueTime() { this->queueTime_ = nullptr;};
        inline int64_t getQueueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
        inline SlowLogRecord& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


        // returnRowCounts Field Functions 
        bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
        void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
        inline int64_t getReturnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
        inline SlowLogRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


        // SQLText Field Functions 
        bool hasSQLText() const { return this->SQLText_ != nullptr;};
        void deleteSQLText() { this->SQLText_ = nullptr;};
        inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
        inline SlowLogRecord& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


        // scanRows Field Functions 
        bool hasScanRows() const { return this->scanRows_ != nullptr;};
        void deleteScanRows() { this->scanRows_ = nullptr;};
        inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
        inline SlowLogRecord& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


        // scanSize Field Functions 
        bool hasScanSize() const { return this->scanSize_ != nullptr;};
        void deleteScanSize() { this->scanSize_ = nullptr;};
        inline string getScanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, "") };
        inline SlowLogRecord& setScanSize(string scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


        // scanTime Field Functions 
        bool hasScanTime() const { return this->scanTime_ != nullptr;};
        void deleteScanTime() { this->scanTime_ = nullptr;};
        inline int64_t getScanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
        inline SlowLogRecord& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline SlowLogRecord& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline SlowLogRecord& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // wallTime Field Functions 
        bool hasWallTime() const { return this->wallTime_ != nullptr;};
        void deleteWallTime() { this->wallTime_ = nullptr;};
        inline int64_t getWallTime() const { DARABONBA_PTR_GET_DEFAULT(wallTime_, 0L) };
        inline SlowLogRecord& setWallTime(int64_t wallTime) { DARABONBA_PTR_SET_VALUE(wallTime_, wallTime) };


      protected:
        shared_ptr<string> DBName_ {};
        shared_ptr<string> executionStartTime_ {};
        shared_ptr<string> hostAddress_ {};
        shared_ptr<string> outputSize_ {};
        shared_ptr<int64_t> parseRowCounts_ {};
        shared_ptr<string> peakMemoryUsage_ {};
        shared_ptr<int64_t> planningTime_ {};
        shared_ptr<string> processID_ {};
        shared_ptr<int64_t> queryTime_ {};
        shared_ptr<int64_t> queueTime_ {};
        shared_ptr<int64_t> returnRowCounts_ {};
        shared_ptr<string> SQLText_ {};
        shared_ptr<int64_t> scanRows_ {};
        shared_ptr<string> scanSize_ {};
        shared_ptr<int64_t> scanTime_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<int64_t> wallTime_ {};
      };

      virtual bool empty() const override { return this->slowLogRecord_ == nullptr; };
      // slowLogRecord Field Functions 
      bool hasSlowLogRecord() const { return this->slowLogRecord_ != nullptr;};
      void deleteSlowLogRecord() { this->slowLogRecord_ = nullptr;};
      inline const vector<Items::SlowLogRecord> & getSlowLogRecord() const { DARABONBA_PTR_GET_CONST(slowLogRecord_, vector<Items::SlowLogRecord>) };
      inline vector<Items::SlowLogRecord> getSlowLogRecord() { DARABONBA_PTR_GET(slowLogRecord_, vector<Items::SlowLogRecord>) };
      inline Items& setSlowLogRecord(const vector<Items::SlowLogRecord> & slowLogRecord) { DARABONBA_PTR_SET_VALUE(slowLogRecord_, slowLogRecord) };
      inline Items& setSlowLogRecord(vector<Items::SlowLogRecord> && slowLogRecord) { DARABONBA_PTR_SET_RVALUE(slowLogRecord_, slowLogRecord) };


    protected:
      shared_ptr<vector<Items::SlowLogRecord>> slowLogRecord_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


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
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeSlowLogRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeSlowLogRecordsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSlowLogRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Warehouse Edition (V3.0) cluster.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<DescribeSlowLogRecordsResponseBody::Items> items_ {};
    // The page number of the returned page.
    shared_ptr<string> pageNumber_ {};
    // The number of entries returned on the current page.
    shared_ptr<string> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
