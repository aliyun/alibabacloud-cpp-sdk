// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMSSLOWLOGRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMSSLOWLOGRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& obj) { 
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
    DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord() = default ;
    DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord(const DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord &) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord(DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord &&) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord() = default ;
    DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& operator=(const DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord &) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& operator=(DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBName_ == nullptr
        && return this->executionStartTime_ == nullptr && return this->hostAddress_ == nullptr && return this->outputSize_ == nullptr && return this->parseRowCounts_ == nullptr && return this->peakMemoryUsage_ == nullptr
        && return this->planningTime_ == nullptr && return this->processID_ == nullptr && return this->queryTime_ == nullptr && return this->queueTime_ == nullptr && return this->returnRowCounts_ == nullptr
        && return this->SQLText_ == nullptr && return this->scanRows_ == nullptr && return this->scanSize_ == nullptr && return this->scanTime_ == nullptr && return this->state_ == nullptr
        && return this->userName_ == nullptr && return this->wallTime_ == nullptr; };
    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // executionStartTime Field Functions 
    bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
    void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
    inline string executionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // outputSize Field Functions 
    bool hasOutputSize() const { return this->outputSize_ != nullptr;};
    void deleteOutputSize() { this->outputSize_ = nullptr;};
    inline string outputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setOutputSize(string outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


    // parseRowCounts Field Functions 
    bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
    void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
    inline int64_t parseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


    // peakMemoryUsage Field Functions 
    bool hasPeakMemoryUsage() const { return this->peakMemoryUsage_ != nullptr;};
    void deletePeakMemoryUsage() { this->peakMemoryUsage_ = nullptr;};
    inline string peakMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(peakMemoryUsage_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setPeakMemoryUsage(string peakMemoryUsage) { DARABONBA_PTR_SET_VALUE(peakMemoryUsage_, peakMemoryUsage) };


    // planningTime Field Functions 
    bool hasPlanningTime() const { return this->planningTime_ != nullptr;};
    void deletePlanningTime() { this->planningTime_ = nullptr;};
    inline int64_t planningTime() const { DARABONBA_PTR_GET_DEFAULT(planningTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setPlanningTime(int64_t planningTime) { DARABONBA_PTR_SET_VALUE(planningTime_, planningTime) };


    // processID Field Functions 
    bool hasProcessID() const { return this->processID_ != nullptr;};
    void deleteProcessID() { this->processID_ = nullptr;};
    inline string processID() const { DARABONBA_PTR_GET_DEFAULT(processID_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setProcessID(string processID) { DARABONBA_PTR_SET_VALUE(processID_, processID) };


    // queryTime Field Functions 
    bool hasQueryTime() const { return this->queryTime_ != nullptr;};
    void deleteQueryTime() { this->queryTime_ = nullptr;};
    inline int64_t queryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setQueryTime(int64_t queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


    // queueTime Field Functions 
    bool hasQueueTime() const { return this->queueTime_ != nullptr;};
    void deleteQueueTime() { this->queueTime_ = nullptr;};
    inline int64_t queueTime() const { DARABONBA_PTR_GET_DEFAULT(queueTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setQueueTime(int64_t queueTime) { DARABONBA_PTR_SET_VALUE(queueTime_, queueTime) };


    // returnRowCounts Field Functions 
    bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
    void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
    inline int64_t returnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // scanSize Field Functions 
    bool hasScanSize() const { return this->scanSize_ != nullptr;};
    void deleteScanSize() { this->scanSize_ = nullptr;};
    inline string scanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setScanSize(string scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


    // scanTime Field Functions 
    bool hasScanTime() const { return this->scanTime_ != nullptr;};
    void deleteScanTime() { this->scanTime_ = nullptr;};
    inline int64_t scanTime() const { DARABONBA_PTR_GET_DEFAULT(scanTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setScanTime(int64_t scanTime) { DARABONBA_PTR_SET_VALUE(scanTime_, scanTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // wallTime Field Functions 
    bool hasWallTime() const { return this->wallTime_ != nullptr;};
    void deleteWallTime() { this->wallTime_ = nullptr;};
    inline int64_t wallTime() const { DARABONBA_PTR_GET_DEFAULT(wallTime_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSlowLogRecord& setWallTime(int64_t wallTime) { DARABONBA_PTR_SET_VALUE(wallTime_, wallTime) };


  protected:
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The time when the execution started. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ssZ* format. The time is displayed in UTC.
    std::shared_ptr<string> executionStartTime_ = nullptr;
    // The IP address of the client that is used to connect to the database.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The amount of output data in the task. Unit: bytes.
    std::shared_ptr<string> outputSize_ = nullptr;
    // The number of rows parsed by the SQL statement.
    std::shared_ptr<int64_t> parseRowCounts_ = nullptr;
    // The maximum memory usage when the SQL statement is executed. Unit: KB.
    std::shared_ptr<string> peakMemoryUsage_ = nullptr;
    // The amount of time consumed to generate execution plans. Unit: milliseconds.
    std::shared_ptr<int64_t> planningTime_ = nullptr;
    // The ID of the process.
    std::shared_ptr<string> processID_ = nullptr;
    // The time consumed to execute the SQL statement. Unit: milliseconds.
    std::shared_ptr<int64_t> queryTime_ = nullptr;
    // The queuing duration before the query is executed. Unit: milliseconds.
    std::shared_ptr<int64_t> queueTime_ = nullptr;
    // The number of rows returned by the SQL statement.
    std::shared_ptr<int64_t> returnRowCounts_ = nullptr;
    // Details of the SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The number of rows scanned from a data source in the task.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The amount of scanned data. Unit: KB.
    std::shared_ptr<string> scanSize_ = nullptr;
    // The total amount of time consumed to scan data. It is an accumulated value collected from multiple TableScanNode nodes. Unit: milliseconds.
    std::shared_ptr<int64_t> scanTime_ = nullptr;
    // The execution state of the SQL statement.
    std::shared_ptr<string> state_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
    // The accumulated CPU Time value of all operators collected from all nodes. Unit: milliseconds.
    std::shared_ptr<int64_t> wallTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
