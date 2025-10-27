// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISTASKSRESPONSEBODYTASKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSISTASKSRESPONSEBODYTASKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeDiagnosisTasksResponseBodyTaskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosisTasksResponseBodyTaskList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosisTasksResponseBodyTaskList& obj) { 
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
    DescribeDiagnosisTasksResponseBodyTaskList() = default ;
    DescribeDiagnosisTasksResponseBodyTaskList(const DescribeDiagnosisTasksResponseBodyTaskList &) = default ;
    DescribeDiagnosisTasksResponseBodyTaskList(DescribeDiagnosisTasksResponseBodyTaskList &&) = default ;
    DescribeDiagnosisTasksResponseBodyTaskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosisTasksResponseBodyTaskList() = default ;
    DescribeDiagnosisTasksResponseBodyTaskList& operator=(const DescribeDiagnosisTasksResponseBodyTaskList &) = default ;
    DescribeDiagnosisTasksResponseBodyTaskList& operator=(DescribeDiagnosisTasksResponseBodyTaskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->computeTimeRatio_ == nullptr
        && return this->drivers_ == nullptr && return this->elapsedTime_ == nullptr && return this->inputDataSize_ == nullptr && return this->inputRows_ == nullptr && return this->operatorCost_ == nullptr
        && return this->outputDataSize_ == nullptr && return this->outputRows_ == nullptr && return this->peakMemory_ == nullptr && return this->queuedTime_ == nullptr && return this->scanCost_ == nullptr
        && return this->scanDataSize_ == nullptr && return this->scanRows_ == nullptr && return this->state_ == nullptr && return this->taskCreateTime_ == nullptr && return this->taskEndTime_ == nullptr
        && return this->taskHost_ == nullptr && return this->taskId_ == nullptr; };
    // computeTimeRatio Field Functions 
    bool hasComputeTimeRatio() const { return this->computeTimeRatio_ != nullptr;};
    void deleteComputeTimeRatio() { this->computeTimeRatio_ = nullptr;};
    inline string computeTimeRatio() const { DARABONBA_PTR_GET_DEFAULT(computeTimeRatio_, "") };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setComputeTimeRatio(string computeTimeRatio) { DARABONBA_PTR_SET_VALUE(computeTimeRatio_, computeTimeRatio) };


    // drivers Field Functions 
    bool hasDrivers() const { return this->drivers_ != nullptr;};
    void deleteDrivers() { this->drivers_ = nullptr;};
    inline string drivers() const { DARABONBA_PTR_GET_DEFAULT(drivers_, "") };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setDrivers(string drivers) { DARABONBA_PTR_SET_VALUE(drivers_, drivers) };


    // elapsedTime Field Functions 
    bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
    void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
    inline int64_t elapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


    // inputDataSize Field Functions 
    bool hasInputDataSize() const { return this->inputDataSize_ != nullptr;};
    void deleteInputDataSize() { this->inputDataSize_ = nullptr;};
    inline int64_t inputDataSize() const { DARABONBA_PTR_GET_DEFAULT(inputDataSize_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setInputDataSize(int64_t inputDataSize) { DARABONBA_PTR_SET_VALUE(inputDataSize_, inputDataSize) };


    // inputRows Field Functions 
    bool hasInputRows() const { return this->inputRows_ != nullptr;};
    void deleteInputRows() { this->inputRows_ = nullptr;};
    inline int64_t inputRows() const { DARABONBA_PTR_GET_DEFAULT(inputRows_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setInputRows(int64_t inputRows) { DARABONBA_PTR_SET_VALUE(inputRows_, inputRows) };


    // operatorCost Field Functions 
    bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
    void deleteOperatorCost() { this->operatorCost_ = nullptr;};
    inline int64_t operatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


    // outputDataSize Field Functions 
    bool hasOutputDataSize() const { return this->outputDataSize_ != nullptr;};
    void deleteOutputDataSize() { this->outputDataSize_ = nullptr;};
    inline int64_t outputDataSize() const { DARABONBA_PTR_GET_DEFAULT(outputDataSize_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setOutputDataSize(int64_t outputDataSize) { DARABONBA_PTR_SET_VALUE(outputDataSize_, outputDataSize) };


    // outputRows Field Functions 
    bool hasOutputRows() const { return this->outputRows_ != nullptr;};
    void deleteOutputRows() { this->outputRows_ = nullptr;};
    inline int64_t outputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


    // peakMemory Field Functions 
    bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
    void deletePeakMemory() { this->peakMemory_ = nullptr;};
    inline int64_t peakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


    // queuedTime Field Functions 
    bool hasQueuedTime() const { return this->queuedTime_ != nullptr;};
    void deleteQueuedTime() { this->queuedTime_ = nullptr;};
    inline string queuedTime() const { DARABONBA_PTR_GET_DEFAULT(queuedTime_, "") };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setQueuedTime(string queuedTime) { DARABONBA_PTR_SET_VALUE(queuedTime_, queuedTime) };


    // scanCost Field Functions 
    bool hasScanCost() const { return this->scanCost_ != nullptr;};
    void deleteScanCost() { this->scanCost_ = nullptr;};
    inline int64_t scanCost() const { DARABONBA_PTR_GET_DEFAULT(scanCost_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setScanCost(int64_t scanCost) { DARABONBA_PTR_SET_VALUE(scanCost_, scanCost) };


    // scanDataSize Field Functions 
    bool hasScanDataSize() const { return this->scanDataSize_ != nullptr;};
    void deleteScanDataSize() { this->scanDataSize_ = nullptr;};
    inline int64_t scanDataSize() const { DARABONBA_PTR_GET_DEFAULT(scanDataSize_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setScanDataSize(int64_t scanDataSize) { DARABONBA_PTR_SET_VALUE(scanDataSize_, scanDataSize) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskCreateTime Field Functions 
    bool hasTaskCreateTime() const { return this->taskCreateTime_ != nullptr;};
    void deleteTaskCreateTime() { this->taskCreateTime_ = nullptr;};
    inline int64_t taskCreateTime() const { DARABONBA_PTR_GET_DEFAULT(taskCreateTime_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setTaskCreateTime(int64_t taskCreateTime) { DARABONBA_PTR_SET_VALUE(taskCreateTime_, taskCreateTime) };


    // taskEndTime Field Functions 
    bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
    void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
    inline int64_t taskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, 0L) };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setTaskEndTime(int64_t taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


    // taskHost Field Functions 
    bool hasTaskHost() const { return this->taskHost_ != nullptr;};
    void deleteTaskHost() { this->taskHost_ = nullptr;};
    inline string taskHost() const { DARABONBA_PTR_GET_DEFAULT(taskHost_, "") };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setTaskHost(string taskHost) { DARABONBA_PTR_SET_VALUE(taskHost_, taskHost) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeDiagnosisTasksResponseBodyTaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The compute time ratio, which can be used to determine whether the task is really time-consuming. This parameter can be calculated by using the following formula: OperatorCost/Drivers/ElapsedTime. A greater value indicates that the task was executed for computing for most of the task time. A less value indicates that the task was waiting for scheduling or blocked due to other reasons for most of the task time.
    std::shared_ptr<string> computeTimeRatio_ = nullptr;
    // The number of tasks that can be executed concurrently.
    std::shared_ptr<string> drivers_ = nullptr;
    // The amount of time that elapsed from when the task was created to when the task was completed. Unit: milliseconds.
    std::shared_ptr<int64_t> elapsedTime_ = nullptr;
    // The amount of input data in the task. Unit: bytes.
    std::shared_ptr<int64_t> inputDataSize_ = nullptr;
    // The number of input rows in the task.
    std::shared_ptr<int64_t> inputRows_ = nullptr;
    // The total amount of time that is consumed by all operators in the task on a node. This parameter can be used to determine whether long tails occur in computing. Unit: milliseconds.
    std::shared_ptr<int64_t> operatorCost_ = nullptr;
    // The amount of output data in the task. Unit: bytes.
    std::shared_ptr<int64_t> outputDataSize_ = nullptr;
    // The number of output rows in the task.
    std::shared_ptr<int64_t> outputRows_ = nullptr;
    // The peak memory of the task. Unit: bytes.
    std::shared_ptr<int64_t> peakMemory_ = nullptr;
    // The queuing duration of the task. Unit: milliseconds.
    std::shared_ptr<string> queuedTime_ = nullptr;
    // The amount of time that is consumed to scan data from a data source in the task. Unit: milliseconds.
    std::shared_ptr<int64_t> scanCost_ = nullptr;
    // The amount of scanned data in the task. Unit: bytes.
    std::shared_ptr<int64_t> scanDataSize_ = nullptr;
    // The number of rows that are scanned from a data source in the task.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The final execution state of the task. Valid values:
    // 
    // *   FINISHED
    // *   CANCELED
    // *   ABORTED
    // *   FAILED
    std::shared_ptr<string> state_ = nullptr;
    // The timestamp when the task was created.
    std::shared_ptr<int64_t> taskCreateTime_ = nullptr;
    // The timestamp when the task ends.
    std::shared_ptr<int64_t> taskEndTime_ = nullptr;
    // The IP address of the host where the task was executed.
    std::shared_ptr<string> taskHost_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
