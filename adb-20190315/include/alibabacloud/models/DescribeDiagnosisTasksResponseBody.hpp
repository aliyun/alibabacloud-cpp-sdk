// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISTASKSRESPONSEBODY_HPP_
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
  class DescribeDiagnosisTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDiagnosisTasksResponseBody() = default ;
    DescribeDiagnosisTasksResponseBody(const DescribeDiagnosisTasksResponseBody &) = default ;
    DescribeDiagnosisTasksResponseBody(DescribeDiagnosisTasksResponseBody &&) = default ;
    DescribeDiagnosisTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisTasksResponseBody() = default ;
    DescribeDiagnosisTasksResponseBody& operator=(const DescribeDiagnosisTasksResponseBody &) = default ;
    DescribeDiagnosisTasksResponseBody& operator=(DescribeDiagnosisTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(ComputeTimeRatio, computeTimeRatio_);
        DARABONBA_PTR_TO_JSON(Drivers, drivers_);
        DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(InputDataSize, inputDataSize_);
        DARABONBA_PTR_TO_JSON(InputRows, inputRows_);
        DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
        DARABONBA_PTR_TO_JSON(OutputDataSize, outputDataSize_);
        DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(QueuedTime, queuedTime_);
        DARABONBA_PTR_TO_JSON(ScanCost, scanCost_);
        DARABONBA_PTR_TO_JSON(ScanDataSize, scanDataSize_);
        DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TaskCreateTime, taskCreateTime_);
        DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_TO_JSON(TaskHost, taskHost_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(ComputeTimeRatio, computeTimeRatio_);
        DARABONBA_PTR_FROM_JSON(Drivers, drivers_);
        DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(InputDataSize, inputDataSize_);
        DARABONBA_PTR_FROM_JSON(InputRows, inputRows_);
        DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
        DARABONBA_PTR_FROM_JSON(OutputDataSize, outputDataSize_);
        DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(QueuedTime, queuedTime_);
        DARABONBA_PTR_FROM_JSON(ScanCost, scanCost_);
        DARABONBA_PTR_FROM_JSON(ScanDataSize, scanDataSize_);
        DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TaskCreateTime, taskCreateTime_);
        DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
        DARABONBA_PTR_FROM_JSON(TaskHost, taskHost_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TaskList() = default ;
      TaskList(const TaskList &) = default ;
      TaskList(TaskList &&) = default ;
      TaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskList() = default ;
      TaskList& operator=(const TaskList &) = default ;
      TaskList& operator=(TaskList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->computeTimeRatio_ == nullptr
        && this->drivers_ == nullptr && this->elapsedTime_ == nullptr && this->inputDataSize_ == nullptr && this->inputRows_ == nullptr && this->operatorCost_ == nullptr
        && this->outputDataSize_ == nullptr && this->outputRows_ == nullptr && this->peakMemory_ == nullptr && this->queuedTime_ == nullptr && this->scanCost_ == nullptr
        && this->scanDataSize_ == nullptr && this->scanRows_ == nullptr && this->state_ == nullptr && this->taskCreateTime_ == nullptr && this->taskEndTime_ == nullptr
        && this->taskHost_ == nullptr && this->taskId_ == nullptr; };
      // computeTimeRatio Field Functions 
      bool hasComputeTimeRatio() const { return this->computeTimeRatio_ != nullptr;};
      void deleteComputeTimeRatio() { this->computeTimeRatio_ = nullptr;};
      inline string getComputeTimeRatio() const { DARABONBA_PTR_GET_DEFAULT(computeTimeRatio_, "") };
      inline TaskList& setComputeTimeRatio(string computeTimeRatio) { DARABONBA_PTR_SET_VALUE(computeTimeRatio_, computeTimeRatio) };


      // drivers Field Functions 
      bool hasDrivers() const { return this->drivers_ != nullptr;};
      void deleteDrivers() { this->drivers_ = nullptr;};
      inline string getDrivers() const { DARABONBA_PTR_GET_DEFAULT(drivers_, "") };
      inline TaskList& setDrivers(string drivers) { DARABONBA_PTR_SET_VALUE(drivers_, drivers) };


      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline TaskList& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // inputDataSize Field Functions 
      bool hasInputDataSize() const { return this->inputDataSize_ != nullptr;};
      void deleteInputDataSize() { this->inputDataSize_ = nullptr;};
      inline int64_t getInputDataSize() const { DARABONBA_PTR_GET_DEFAULT(inputDataSize_, 0L) };
      inline TaskList& setInputDataSize(int64_t inputDataSize) { DARABONBA_PTR_SET_VALUE(inputDataSize_, inputDataSize) };


      // inputRows Field Functions 
      bool hasInputRows() const { return this->inputRows_ != nullptr;};
      void deleteInputRows() { this->inputRows_ = nullptr;};
      inline int64_t getInputRows() const { DARABONBA_PTR_GET_DEFAULT(inputRows_, 0L) };
      inline TaskList& setInputRows(int64_t inputRows) { DARABONBA_PTR_SET_VALUE(inputRows_, inputRows) };


      // operatorCost Field Functions 
      bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
      void deleteOperatorCost() { this->operatorCost_ = nullptr;};
      inline int64_t getOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
      inline TaskList& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


      // outputDataSize Field Functions 
      bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
      void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
      inline int64_t getOutputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
      inline TaskList& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


      // outputRows Field Functions 
      bool hasOutputRows() const { return this->outputRows_ != nullptr;};
      void deleteOutputRows() { this->outputRows_ = nullptr;};
      inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
      inline TaskList& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline TaskList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // queuedTime Field Functions 
      bool hasQueuedTime() const { return this->queuedTime_ != nullptr;};
      void deleteQueuedTime() { this->queuedTime_ = nullptr;};
      inline string getQueuedTime() const { DARABONBA_PTR_GET_DEFAULT(queuedTime_, "") };
      inline TaskList& setQueuedTime(string queuedTime) { DARABONBA_PTR_SET_VALUE(queuedTime_, queuedTime) };


      // scanCost Field Functions 
      bool hasScanCost() const { return this->scanCost_ != nullptr;};
      void deleteScanCost() { this->scanCost_ = nullptr;};
      inline int64_t getScanCost() const { DARABONBA_PTR_GET_DEFAULT(scanCost_, 0L) };
      inline TaskList& setScanCost(int64_t scanCost) { DARABONBA_PTR_SET_VALUE(scanCost_, scanCost) };


      // scanDataSize Field Functions 
      bool hasScanDataSize() const { return this->scanDataSize_ != nullptr;};
      void deleteScanDataSize() { this->scanDataSize_ = nullptr;};
      inline int64_t getScanDataSize() const { DARABONBA_PTR_GET_DEFAULT(scanDataSize_, 0L) };
      inline TaskList& setScanDataSize(int64_t scanDataSize) { DARABONBA_PTR_SET_VALUE(scanDataSize_, scanDataSize) };


      // scanRows Field Functions 
      bool hasScanRows() const { return this->scanRows_ != nullptr;};
      void deleteScanRows() { this->scanRows_ = nullptr;};
      inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
      inline TaskList& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline TaskList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // taskCreateTime Field Functions 
      bool hasTaskCreateTime() const { return this->taskCreateTime_ != nullptr;};
      void deleteTaskCreateTime() { this->taskCreateTime_ = nullptr;};
      inline int64_t getTaskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTime_, 0L) };
      inline TaskList& setTaskCreateTime(int64_t taskCreateTime) { DARABONBA_PTR_SET_VALUE(taskCreateTime_, taskCreateTime) };


      // taskEndTime Field Functions 
      bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
      void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
      inline int64_t getTaskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, 0L) };
      inline TaskList& setTaskEndTime(int64_t taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


      // taskHost Field Functions 
      bool hasTaskHost() const { return this->taskHost_ != nullptr;};
      void deleteTaskHost() { this->taskHost_ = nullptr;};
      inline string getTaskHost() const { DARABONBA_PTR_GET_DEFAULT(taskHost_, "") };
      inline TaskList& setTaskHost(string taskHost) { DARABONBA_PTR_SET_VALUE(taskHost_, taskHost) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The compute time ratio, which can be used to determine whether the task is really time-consuming. This parameter can be calculated by using the following formula: OperatorCost/Drivers/ElapsedTime. A greater value indicates that the task was executed for computing for most of the task time. A less value indicates that the task was waiting for scheduling or blocked due to other reasons for most of the task time.
      shared_ptr<string> computeTimeRatio_ {};
      // The number of tasks that can be executed concurrently.
      shared_ptr<string> drivers_ {};
      // The amount of time that elapsed from when the task was created to when the task was completed. Unit: milliseconds.
      shared_ptr<int64_t> elapsedTime_ {};
      // The amount of input data in the task. Unit: bytes.
      shared_ptr<int64_t> inputDataSize_ {};
      // The number of input rows in the task.
      shared_ptr<int64_t> inputRows_ {};
      // The total amount of time that is consumed by all operators in the task on a node. This parameter can be used to determine whether long tails occur in computing. Unit: milliseconds.
      shared_ptr<int64_t> operatorCost_ {};
      // The amount of output data in the task. Unit: bytes.
      shared_ptr<int64_t> outputDataSize_ {};
      // The number of output rows in the task.
      shared_ptr<int64_t> outputRows_ {};
      // The peak memory of the task. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The queuing duration of the task. Unit: milliseconds.
      shared_ptr<string> queuedTime_ {};
      // The amount of time that is consumed to scan data from a data source in the task. Unit: milliseconds.
      shared_ptr<int64_t> scanCost_ {};
      // The amount of scanned data in the task. Unit: bytes.
      shared_ptr<int64_t> scanDataSize_ {};
      // The number of rows that are scanned from a data source in the task.
      shared_ptr<int64_t> scanRows_ {};
      // The final execution state of the task. Valid values:
      // 
      // *   FINISHED
      // *   CANCELED
      // *   ABORTED
      // *   FAILED
      shared_ptr<string> state_ {};
      // The timestamp when the task was created.
      shared_ptr<int64_t> taskCreateTime_ {};
      // The timestamp when the task ends.
      shared_ptr<int64_t> taskEndTime_ {};
      // The IP address of the host where the task was executed.
      shared_ptr<string> taskHost_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskList_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosisTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeDiagnosisTasksResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeDiagnosisTasksResponseBody::TaskList>) };
    inline vector<DescribeDiagnosisTasksResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeDiagnosisTasksResponseBody::TaskList>) };
    inline DescribeDiagnosisTasksResponseBody& setTaskList(const vector<DescribeDiagnosisTasksResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeDiagnosisTasksResponseBody& setTaskList(vector<DescribeDiagnosisTasksResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDiagnosisTasksResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried tasks.
    shared_ptr<vector<DescribeDiagnosisTasksResponseBody::TaskList>> taskList_ {};
    // The total number of tasks in the stage.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
