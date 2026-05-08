// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPLANRESPONSEBODY_HPP_
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
  class DescribeSQLPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(OriginInfo, originInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageList, stageList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(OriginInfo, originInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageList, stageList_);
    };
    DescribeSQLPlanResponseBody() = default ;
    DescribeSQLPlanResponseBody(const DescribeSQLPlanResponseBody &) = default ;
    DescribeSQLPlanResponseBody(DescribeSQLPlanResponseBody &&) = default ;
    DescribeSQLPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPlanResponseBody() = default ;
    DescribeSQLPlanResponseBody& operator=(const DescribeSQLPlanResponseBody &) = default ;
    DescribeSQLPlanResponseBody& operator=(DescribeSQLPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StageList& obj) { 
        DARABONBA_PTR_TO_JSON(CPUTimeAvg, CPUTimeAvg_);
        DARABONBA_PTR_TO_JSON(CPUTimeMax, CPUTimeMax_);
        DARABONBA_PTR_TO_JSON(CPUTimeMin, CPUTimeMin_);
        DARABONBA_PTR_TO_JSON(InputSizeAvg, inputSizeAvg_);
        DARABONBA_PTR_TO_JSON(InputSizeMax, inputSizeMax_);
        DARABONBA_PTR_TO_JSON(InputSizeMin, inputSizeMin_);
        DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(ScanSizeAvg, scanSizeAvg_);
        DARABONBA_PTR_TO_JSON(ScanSizeMax, scanSizeMax_);
        DARABONBA_PTR_TO_JSON(ScanSizeMin, scanSizeMin_);
        DARABONBA_PTR_TO_JSON(ScanTimeAvg, scanTimeAvg_);
        DARABONBA_PTR_TO_JSON(ScanTimeMax, scanTimeMax_);
        DARABONBA_PTR_TO_JSON(ScanTimeMin, scanTimeMin_);
        DARABONBA_PTR_TO_JSON(StageId, stageId_);
        DARABONBA_PTR_TO_JSON(State, state_);
      };
      friend void from_json(const Darabonba::Json& j, StageList& obj) { 
        DARABONBA_PTR_FROM_JSON(CPUTimeAvg, CPUTimeAvg_);
        DARABONBA_PTR_FROM_JSON(CPUTimeMax, CPUTimeMax_);
        DARABONBA_PTR_FROM_JSON(CPUTimeMin, CPUTimeMin_);
        DARABONBA_PTR_FROM_JSON(InputSizeAvg, inputSizeAvg_);
        DARABONBA_PTR_FROM_JSON(InputSizeMax, inputSizeMax_);
        DARABONBA_PTR_FROM_JSON(InputSizeMin, inputSizeMin_);
        DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(ScanSizeAvg, scanSizeAvg_);
        DARABONBA_PTR_FROM_JSON(ScanSizeMax, scanSizeMax_);
        DARABONBA_PTR_FROM_JSON(ScanSizeMin, scanSizeMin_);
        DARABONBA_PTR_FROM_JSON(ScanTimeAvg, scanTimeAvg_);
        DARABONBA_PTR_FROM_JSON(ScanTimeMax, scanTimeMax_);
        DARABONBA_PTR_FROM_JSON(ScanTimeMin, scanTimeMin_);
        DARABONBA_PTR_FROM_JSON(StageId, stageId_);
        DARABONBA_PTR_FROM_JSON(State, state_);
      };
      StageList() = default ;
      StageList(const StageList &) = default ;
      StageList(StageList &&) = default ;
      StageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StageList() = default ;
      StageList& operator=(const StageList &) = default ;
      StageList& operator=(StageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPUTimeAvg_ == nullptr
        && this->CPUTimeMax_ == nullptr && this->CPUTimeMin_ == nullptr && this->inputSizeAvg_ == nullptr && this->inputSizeMax_ == nullptr && this->inputSizeMin_ == nullptr
        && this->operatorCost_ == nullptr && this->peakMemory_ == nullptr && this->scanSizeAvg_ == nullptr && this->scanSizeMax_ == nullptr && this->scanSizeMin_ == nullptr
        && this->scanTimeAvg_ == nullptr && this->scanTimeMax_ == nullptr && this->scanTimeMin_ == nullptr && this->stageId_ == nullptr && this->state_ == nullptr; };
      // CPUTimeAvg Field Functions 
      bool hasCPUTimeAvg() const { return this->CPUTimeAvg_ != nullptr;};
      void deleteCPUTimeAvg() { this->CPUTimeAvg_ = nullptr;};
      inline int64_t getCPUTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeAvg_, 0L) };
      inline StageList& setCPUTimeAvg(int64_t CPUTimeAvg) { DARABONBA_PTR_SET_VALUE(CPUTimeAvg_, CPUTimeAvg) };


      // CPUTimeMax Field Functions 
      bool hasCPUTimeMax() const { return this->CPUTimeMax_ != nullptr;};
      void deleteCPUTimeMax() { this->CPUTimeMax_ = nullptr;};
      inline int64_t getCPUTimeMax() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeMax_, 0L) };
      inline StageList& setCPUTimeMax(int64_t CPUTimeMax) { DARABONBA_PTR_SET_VALUE(CPUTimeMax_, CPUTimeMax) };


      // CPUTimeMin Field Functions 
      bool hasCPUTimeMin() const { return this->CPUTimeMin_ != nullptr;};
      void deleteCPUTimeMin() { this->CPUTimeMin_ = nullptr;};
      inline int64_t getCPUTimeMin() const { DARABONBA_PTR_GET_DEFAULT(CPUTimeMin_, 0L) };
      inline StageList& setCPUTimeMin(int64_t CPUTimeMin) { DARABONBA_PTR_SET_VALUE(CPUTimeMin_, CPUTimeMin) };


      // inputSizeAvg Field Functions 
      bool hasInputSizeAvg() const { return this->inputSizeAvg_ != nullptr;};
      void deleteInputSizeAvg() { this->inputSizeAvg_ = nullptr;};
      inline int64_t getInputSizeAvg() const { DARABONBA_PTR_GET_DEFAULT(inputSizeAvg_, 0L) };
      inline StageList& setInputSizeAvg(int64_t inputSizeAvg) { DARABONBA_PTR_SET_VALUE(inputSizeAvg_, inputSizeAvg) };


      // inputSizeMax Field Functions 
      bool hasInputSizeMax() const { return this->inputSizeMax_ != nullptr;};
      void deleteInputSizeMax() { this->inputSizeMax_ = nullptr;};
      inline int64_t getInputSizeMax() const { DARABONBA_PTR_GET_DEFAULT(inputSizeMax_, 0L) };
      inline StageList& setInputSizeMax(int64_t inputSizeMax) { DARABONBA_PTR_SET_VALUE(inputSizeMax_, inputSizeMax) };


      // inputSizeMin Field Functions 
      bool hasInputSizeMin() const { return this->inputSizeMin_ != nullptr;};
      void deleteInputSizeMin() { this->inputSizeMin_ = nullptr;};
      inline int64_t getInputSizeMin() const { DARABONBA_PTR_GET_DEFAULT(inputSizeMin_, 0L) };
      inline StageList& setInputSizeMin(int64_t inputSizeMin) { DARABONBA_PTR_SET_VALUE(inputSizeMin_, inputSizeMin) };


      // operatorCost Field Functions 
      bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
      void deleteOperatorCost() { this->operatorCost_ = nullptr;};
      inline int64_t getOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
      inline StageList& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline StageList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // scanSizeAvg Field Functions 
      bool hasScanSizeAvg() const { return this->scanSizeAvg_ != nullptr;};
      void deleteScanSizeAvg() { this->scanSizeAvg_ = nullptr;};
      inline int64_t getScanSizeAvg() const { DARABONBA_PTR_GET_DEFAULT(scanSizeAvg_, 0L) };
      inline StageList& setScanSizeAvg(int64_t scanSizeAvg) { DARABONBA_PTR_SET_VALUE(scanSizeAvg_, scanSizeAvg) };


      // scanSizeMax Field Functions 
      bool hasScanSizeMax() const { return this->scanSizeMax_ != nullptr;};
      void deleteScanSizeMax() { this->scanSizeMax_ = nullptr;};
      inline int64_t getScanSizeMax() const { DARABONBA_PTR_GET_DEFAULT(scanSizeMax_, 0L) };
      inline StageList& setScanSizeMax(int64_t scanSizeMax) { DARABONBA_PTR_SET_VALUE(scanSizeMax_, scanSizeMax) };


      // scanSizeMin Field Functions 
      bool hasScanSizeMin() const { return this->scanSizeMin_ != nullptr;};
      void deleteScanSizeMin() { this->scanSizeMin_ = nullptr;};
      inline int64_t getScanSizeMin() const { DARABONBA_PTR_GET_DEFAULT(scanSizeMin_, 0L) };
      inline StageList& setScanSizeMin(int64_t scanSizeMin) { DARABONBA_PTR_SET_VALUE(scanSizeMin_, scanSizeMin) };


      // scanTimeAvg Field Functions 
      bool hasScanTimeAvg() const { return this->scanTimeAvg_ != nullptr;};
      void deleteScanTimeAvg() { this->scanTimeAvg_ = nullptr;};
      inline int64_t getScanTimeAvg() const { DARABONBA_PTR_GET_DEFAULT(scanTimeAvg_, 0L) };
      inline StageList& setScanTimeAvg(int64_t scanTimeAvg) { DARABONBA_PTR_SET_VALUE(scanTimeAvg_, scanTimeAvg) };


      // scanTimeMax Field Functions 
      bool hasScanTimeMax() const { return this->scanTimeMax_ != nullptr;};
      void deleteScanTimeMax() { this->scanTimeMax_ = nullptr;};
      inline int64_t getScanTimeMax() const { DARABONBA_PTR_GET_DEFAULT(scanTimeMax_, 0L) };
      inline StageList& setScanTimeMax(int64_t scanTimeMax) { DARABONBA_PTR_SET_VALUE(scanTimeMax_, scanTimeMax) };


      // scanTimeMin Field Functions 
      bool hasScanTimeMin() const { return this->scanTimeMin_ != nullptr;};
      void deleteScanTimeMin() { this->scanTimeMin_ = nullptr;};
      inline int64_t getScanTimeMin() const { DARABONBA_PTR_GET_DEFAULT(scanTimeMin_, 0L) };
      inline StageList& setScanTimeMin(int64_t scanTimeMin) { DARABONBA_PTR_SET_VALUE(scanTimeMin_, scanTimeMin) };


      // stageId Field Functions 
      bool hasStageId() const { return this->stageId_ != nullptr;};
      void deleteStageId() { this->stageId_ = nullptr;};
      inline int32_t getStageId() const { DARABONBA_PTR_GET_DEFAULT(stageId_, 0) };
      inline StageList& setStageId(int32_t stageId) { DARABONBA_PTR_SET_VALUE(stageId_, stageId) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline StageList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The average `CPU Time` value on each compute node in the stage. Unit: milliseconds.
      shared_ptr<int64_t> CPUTimeAvg_ {};
      // The maximum `CPU Time` value on each compute node in the stage. Unit: milliseconds.
      shared_ptr<int64_t> CPUTimeMax_ {};
      // The minimum `CPU Time` value on each compute node in the stage. Unit: milliseconds.
      shared_ptr<int64_t> CPUTimeMin_ {};
      // The average amount of input data on each compute node in the stage. Unit: bytes.
      shared_ptr<int64_t> inputSizeAvg_ {};
      // The maximum amount of input data on each compute node in the stage. Unit: byte.
      shared_ptr<int64_t> inputSizeMax_ {};
      // The minimum amount of input data on each compute node in the stage. Unit: bytes.
      shared_ptr<int64_t> inputSizeMin_ {};
      // The total CPU time consumed by all operators in the stage, which is equivalent to the total CPU time of the stage. You can use this parameter to determine which parts of the stage consume a large amount of computing resources. Unit: milliseconds.
      shared_ptr<int64_t> operatorCost_ {};
      // The maximum memory usage when the SQL statement is executed. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The average amount of data scanned by a scan operator on each storage node in the stage. Unit: bytes.
      shared_ptr<int64_t> scanSizeAvg_ {};
      // The maximum amount of data scanned by a scan operator on each storage node in the stage. Unit: bytes.
      shared_ptr<int64_t> scanSizeMax_ {};
      // The minimum amount of data scanned by a scan operator on each storage node in the stage. Unit: bytes.
      shared_ptr<int64_t> scanSizeMin_ {};
      // The average amount of time consumed by a scan operator to read data on each storage node in the stage. Unit: milliseconds.
      shared_ptr<int64_t> scanTimeAvg_ {};
      // The maximum amount of time consumed by a scan operator to read data on each storage node in the stage. Unit: milliseconds.
      shared_ptr<int64_t> scanTimeMax_ {};
      // The minimum amount of time consumed by a scan operator to read data on each storage node in the stage. Unit: milliseconds.
      shared_ptr<int64_t> scanTimeMin_ {};
      // The stage ID.
      shared_ptr<int32_t> stageId_ {};
      // The final execution state of the stage. Valid values:
      // 
      // *   FINISHED
      // *   CANCELED
      // *   ABORTED
      // *   FAILED
      shared_ptr<string> state_ {};
    };

    class Detail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Detail& obj) { 
        DARABONBA_PTR_TO_JSON(CPUTime, CPUTime_);
        DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_TO_JSON(Database, database_);
        DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
        DARABONBA_PTR_TO_JSON(OutputSize, outputSize_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(PlanningTime, planningTime_);
        DARABONBA_PTR_TO_JSON(QueuedTime, queuedTime_);
        DARABONBA_PTR_TO_JSON(SQL, SQL_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TotalStage, totalStage_);
        DARABONBA_PTR_TO_JSON(TotalTask, totalTask_);
        DARABONBA_PTR_TO_JSON(TotalTime, totalTime_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Detail& obj) { 
        DARABONBA_PTR_FROM_JSON(CPUTime, CPUTime_);
        DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
        DARABONBA_PTR_FROM_JSON(Database, database_);
        DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
        DARABONBA_PTR_FROM_JSON(OutputSize, outputSize_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(PlanningTime, planningTime_);
        DARABONBA_PTR_FROM_JSON(QueuedTime, queuedTime_);
        DARABONBA_PTR_FROM_JSON(SQL, SQL_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TotalStage, totalStage_);
        DARABONBA_PTR_FROM_JSON(TotalTask, totalTask_);
        DARABONBA_PTR_FROM_JSON(TotalTime, totalTime_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      Detail() = default ;
      Detail(const Detail &) = default ;
      Detail(Detail &&) = default ;
      Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Detail() = default ;
      Detail& operator=(const Detail &) = default ;
      Detail& operator=(Detail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->CPUTime_ == nullptr
        && this->clientIP_ == nullptr && this->database_ == nullptr && this->outputRows_ == nullptr && this->outputSize_ == nullptr && this->peakMemory_ == nullptr
        && this->planningTime_ == nullptr && this->queuedTime_ == nullptr && this->SQL_ == nullptr && this->startTime_ == nullptr && this->state_ == nullptr
        && this->totalStage_ == nullptr && this->totalTask_ == nullptr && this->totalTime_ == nullptr && this->user_ == nullptr; };
      // CPUTime Field Functions 
      bool hasCPUTime() const { return this->CPUTime_ != nullptr;};
      void deleteCPUTime() { this->CPUTime_ = nullptr;};
      inline int64_t getCPUTime() const { DARABONBA_PTR_GET_DEFAULT(CPUTime_, 0L) };
      inline Detail& setCPUTime(int64_t CPUTime) { DARABONBA_PTR_SET_VALUE(CPUTime_, CPUTime) };


      // clientIP Field Functions 
      bool hasClientIP() const { return this->clientIP_ != nullptr;};
      void deleteClientIP() { this->clientIP_ = nullptr;};
      inline string getClientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
      inline Detail& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


      // database Field Functions 
      bool hasDatabase() const { return this->database_ != nullptr;};
      void deleteDatabase() { this->database_ = nullptr;};
      inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
      inline Detail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


      // outputRows Field Functions 
      bool hasOutputRows() const { return this->outputRows_ != nullptr;};
      void deleteOutputRows() { this->outputRows_ = nullptr;};
      inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
      inline Detail& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


      // outputSize Field Functions 
      bool hasOutputSize() const { return this->outputSize_ != nullptr;};
      void deleteOutputSize() { this->outputSize_ = nullptr;};
      inline int64_t getOutputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, 0L) };
      inline Detail& setOutputSize(int64_t outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline Detail& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // planningTime Field Functions 
      bool hasPlanningTime() const { return this->planningTime_ != nullptr;};
      void deletePlanningTime() { this->planningTime_ = nullptr;};
      inline int64_t getPlanningTime() const { DARABONBA_PTR_GET_DEFAULT(planningTime_, 0L) };
      inline Detail& setPlanningTime(int64_t planningTime) { DARABONBA_PTR_SET_VALUE(planningTime_, planningTime) };


      // queuedTime Field Functions 
      bool hasQueuedTime() const { return this->queuedTime_ != nullptr;};
      void deleteQueuedTime() { this->queuedTime_ = nullptr;};
      inline int64_t getQueuedTime() const { DARABONBA_PTR_GET_DEFAULT(queuedTime_, 0L) };
      inline Detail& setQueuedTime(int64_t queuedTime) { DARABONBA_PTR_SET_VALUE(queuedTime_, queuedTime) };


      // SQL Field Functions 
      bool hasSQL() const { return this->SQL_ != nullptr;};
      void deleteSQL() { this->SQL_ = nullptr;};
      inline string getSQL() const { DARABONBA_PTR_GET_DEFAULT(SQL_, "") };
      inline Detail& setSQL(string SQL) { DARABONBA_PTR_SET_VALUE(SQL_, SQL) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Detail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Detail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // totalStage Field Functions 
      bool hasTotalStage() const { return this->totalStage_ != nullptr;};
      void deleteTotalStage() { this->totalStage_ = nullptr;};
      inline int64_t getTotalStage() const { DARABONBA_PTR_GET_DEFAULT(totalStage_, 0L) };
      inline Detail& setTotalStage(int64_t totalStage) { DARABONBA_PTR_SET_VALUE(totalStage_, totalStage) };


      // totalTask Field Functions 
      bool hasTotalTask() const { return this->totalTask_ != nullptr;};
      void deleteTotalTask() { this->totalTask_ = nullptr;};
      inline int64_t getTotalTask() const { DARABONBA_PTR_GET_DEFAULT(totalTask_, 0L) };
      inline Detail& setTotalTask(int64_t totalTask) { DARABONBA_PTR_SET_VALUE(totalTask_, totalTask) };


      // totalTime Field Functions 
      bool hasTotalTime() const { return this->totalTime_ != nullptr;};
      void deleteTotalTime() { this->totalTime_ = nullptr;};
      inline int64_t getTotalTime() const { DARABONBA_PTR_GET_DEFAULT(totalTime_, 0L) };
      inline Detail& setTotalTime(int64_t totalTime) { DARABONBA_PTR_SET_VALUE(totalTime_, totalTime) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Detail& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The total CPU time consumed by all operators on multithreaded servers when the SQL statement is executed. Unit: milliseconds.
      shared_ptr<int64_t> CPUTime_ {};
      // The IP address of the client that is used to execute the SQL statement.
      shared_ptr<string> clientIP_ {};
      // The name of the database on which the SQL statement was executed.
      shared_ptr<string> database_ {};
      // The total number of rows generated by the SQL statement.
      shared_ptr<int64_t> outputRows_ {};
      // The total amount of data generated by the SQL statement. Unit: bytes.
      shared_ptr<int64_t> outputSize_ {};
      // The maximum memory usage when the SQL statement is executed. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The amount of time consumed to generate the execution plan of the SQL statement. Unit: milliseconds.
      shared_ptr<int64_t> planningTime_ {};
      // The amount of time consumed to queue the SQL statement. Unit: milliseconds.
      shared_ptr<int64_t> queuedTime_ {};
      // The SQL statement.
      shared_ptr<string> SQL_ {};
      // The execution start time of the SQL statement. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<string> startTime_ {};
      // The final execution state of the SQL statement. Valid values:
      // 
      // *   FINISHED
      // *   FAILED
      shared_ptr<string> state_ {};
      // The total number of stages in the SQL statement.
      shared_ptr<int64_t> totalStage_ {};
      // The total number of tasks in the SQL statement.
      shared_ptr<int64_t> totalTask_ {};
      // The total amount of time consumed to execute the SQL statement. Unit: milliseconds.
      shared_ptr<int64_t> totalTime_ {};
      // The name of the user who submitted the SQL statement.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->detail_ == nullptr
        && this->originInfo_ == nullptr && this->requestId_ == nullptr && this->stageList_ == nullptr; };
    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const DescribeSQLPlanResponseBody::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, DescribeSQLPlanResponseBody::Detail) };
    inline DescribeSQLPlanResponseBody::Detail getDetail() { DARABONBA_PTR_GET(detail_, DescribeSQLPlanResponseBody::Detail) };
    inline DescribeSQLPlanResponseBody& setDetail(const DescribeSQLPlanResponseBody::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeSQLPlanResponseBody& setDetail(DescribeSQLPlanResponseBody::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // originInfo Field Functions 
    bool hasOriginInfo() const { return this->originInfo_ != nullptr;};
    void deleteOriginInfo() { this->originInfo_ = nullptr;};
    inline string getOriginInfo() const { DARABONBA_PTR_GET_DEFAULT(originInfo_, "") };
    inline DescribeSQLPlanResponseBody& setOriginInfo(string originInfo) { DARABONBA_PTR_SET_VALUE(originInfo_, originInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageList Field Functions 
    bool hasStageList() const { return this->stageList_ != nullptr;};
    void deleteStageList() { this->stageList_ = nullptr;};
    inline const vector<DescribeSQLPlanResponseBody::StageList> & getStageList() const { DARABONBA_PTR_GET_CONST(stageList_, vector<DescribeSQLPlanResponseBody::StageList>) };
    inline vector<DescribeSQLPlanResponseBody::StageList> getStageList() { DARABONBA_PTR_GET(stageList_, vector<DescribeSQLPlanResponseBody::StageList>) };
    inline DescribeSQLPlanResponseBody& setStageList(const vector<DescribeSQLPlanResponseBody::StageList> & stageList) { DARABONBA_PTR_SET_VALUE(stageList_, stageList) };
    inline DescribeSQLPlanResponseBody& setStageList(vector<DescribeSQLPlanResponseBody::StageList> && stageList) { DARABONBA_PTR_SET_RVALUE(stageList_, stageList) };


  protected:
    // The execution information about the SQL statement.
    shared_ptr<DescribeSQLPlanResponseBody::Detail> detail_ {};
    // The original information about the SQL statement.
    shared_ptr<string> originInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried plan in different stages.
    shared_ptr<vector<DescribeSQLPlanResponseBody::StageList>> stageList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
