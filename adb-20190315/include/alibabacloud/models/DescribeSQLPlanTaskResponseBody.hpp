// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLPLANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLPLANTASKRESPONSEBODY_HPP_
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
  class DescribeSQLPlanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLPlanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLPlanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
    };
    DescribeSQLPlanTaskResponseBody() = default ;
    DescribeSQLPlanTaskResponseBody(const DescribeSQLPlanTaskResponseBody &) = default ;
    DescribeSQLPlanTaskResponseBody(DescribeSQLPlanTaskResponseBody &&) = default ;
    DescribeSQLPlanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLPlanTaskResponseBody() = default ;
    DescribeSQLPlanTaskResponseBody& operator=(const DescribeSQLPlanTaskResponseBody &) = default ;
    DescribeSQLPlanTaskResponseBody& operator=(DescribeSQLPlanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_TO_JSON(InputRows, inputRows_);
        DARABONBA_PTR_TO_JSON(InputSize, inputSize_);
        DARABONBA_PTR_TO_JSON(OperatorCost, operatorCost_);
        DARABONBA_PTR_TO_JSON(OutputRows, outputRows_);
        DARABONBA_PTR_TO_JSON(OutputSize, outputSize_);
        DARABONBA_PTR_TO_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_TO_JSON(ScanCost, scanCost_);
        DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_TO_JSON(ScanSize, scanSize_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(ElapsedTime, elapsedTime_);
        DARABONBA_PTR_FROM_JSON(InputRows, inputRows_);
        DARABONBA_PTR_FROM_JSON(InputSize, inputSize_);
        DARABONBA_PTR_FROM_JSON(OperatorCost, operatorCost_);
        DARABONBA_PTR_FROM_JSON(OutputRows, outputRows_);
        DARABONBA_PTR_FROM_JSON(OutputSize, outputSize_);
        DARABONBA_PTR_FROM_JSON(PeakMemory, peakMemory_);
        DARABONBA_PTR_FROM_JSON(ScanCost, scanCost_);
        DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
        DARABONBA_PTR_FROM_JSON(ScanSize, scanSize_);
        DARABONBA_PTR_FROM_JSON(State, state_);
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
      virtual bool empty() const override { return this->elapsedTime_ == nullptr
        && this->inputRows_ == nullptr && this->inputSize_ == nullptr && this->operatorCost_ == nullptr && this->outputRows_ == nullptr && this->outputSize_ == nullptr
        && this->peakMemory_ == nullptr && this->scanCost_ == nullptr && this->scanRows_ == nullptr && this->scanSize_ == nullptr && this->state_ == nullptr
        && this->taskId_ == nullptr; };
      // elapsedTime Field Functions 
      bool hasElapsedTime() const { return this->elapsedTime_ != nullptr;};
      void deleteElapsedTime() { this->elapsedTime_ = nullptr;};
      inline int64_t getElapsedTime() const { DARABONBA_PTR_GET_DEFAULT(elapsedTime_, 0L) };
      inline TaskList& setElapsedTime(int64_t elapsedTime) { DARABONBA_PTR_SET_VALUE(elapsedTime_, elapsedTime) };


      // inputRows Field Functions 
      bool hasInputRows() const { return this->inputRows_ != nullptr;};
      void deleteInputRows() { this->inputRows_ = nullptr;};
      inline int64_t getInputRows() const { DARABONBA_PTR_GET_DEFAULT(inputRows_, 0L) };
      inline TaskList& setInputRows(int64_t inputRows) { DARABONBA_PTR_SET_VALUE(inputRows_, inputRows) };


      // inputSize Field Functions 
      bool hasInputSize() const { return this->inputSize_ != nullptr;};
      void deleteInputSize() { this->inputSize_ = nullptr;};
      inline int64_t getInputSize() const { DARABONBA_PTR_GET_DEFAULT(inputSize_, 0L) };
      inline TaskList& setInputSize(int64_t inputSize) { DARABONBA_PTR_SET_VALUE(inputSize_, inputSize) };


      // operatorCost Field Functions 
      bool hasOperatorCost() const { return this->operatorCost_ != nullptr;};
      void deleteOperatorCost() { this->operatorCost_ = nullptr;};
      inline int64_t getOperatorCost() const { DARABONBA_PTR_GET_DEFAULT(operatorCost_, 0L) };
      inline TaskList& setOperatorCost(int64_t operatorCost) { DARABONBA_PTR_SET_VALUE(operatorCost_, operatorCost) };


      // outputRows Field Functions 
      bool hasOutputRows() const { return this->outputRows_ != nullptr;};
      void deleteOutputRows() { this->outputRows_ = nullptr;};
      inline int64_t getOutputRows() const { DARABONBA_PTR_GET_DEFAULT(outputRows_, 0L) };
      inline TaskList& setOutputRows(int64_t outputRows) { DARABONBA_PTR_SET_VALUE(outputRows_, outputRows) };


      // outputSize Field Functions 
      bool hasOutputSize() const { return this->outputSize_ != nullptr;};
      void deleteOutputSize() { this->outputSize_ = nullptr;};
      inline int64_t getOutputSize() const { DARABONBA_PTR_GET_DEFAULT(outputSize_, 0L) };
      inline TaskList& setOutputSize(int64_t outputSize) { DARABONBA_PTR_SET_VALUE(outputSize_, outputSize) };


      // peakMemory Field Functions 
      bool hasPeakMemory() const { return this->peakMemory_ != nullptr;};
      void deletePeakMemory() { this->peakMemory_ = nullptr;};
      inline int64_t getPeakMemory() const { DARABONBA_PTR_GET_DEFAULT(peakMemory_, 0L) };
      inline TaskList& setPeakMemory(int64_t peakMemory) { DARABONBA_PTR_SET_VALUE(peakMemory_, peakMemory) };


      // scanCost Field Functions 
      bool hasScanCost() const { return this->scanCost_ != nullptr;};
      void deleteScanCost() { this->scanCost_ = nullptr;};
      inline int64_t getScanCost() const { DARABONBA_PTR_GET_DEFAULT(scanCost_, 0L) };
      inline TaskList& setScanCost(int64_t scanCost) { DARABONBA_PTR_SET_VALUE(scanCost_, scanCost) };


      // scanRows Field Functions 
      bool hasScanRows() const { return this->scanRows_ != nullptr;};
      void deleteScanRows() { this->scanRows_ = nullptr;};
      inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
      inline TaskList& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


      // scanSize Field Functions 
      bool hasScanSize() const { return this->scanSize_ != nullptr;};
      void deleteScanSize() { this->scanSize_ = nullptr;};
      inline int64_t getScanSize() const { DARABONBA_PTR_GET_DEFAULT(scanSize_, 0L) };
      inline TaskList& setScanSize(int64_t scanSize) { DARABONBA_PTR_SET_VALUE(scanSize_, scanSize) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline TaskList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline TaskList& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The time elapsed from when the task was created to when the task was complete. Unit: milliseconds.
      shared_ptr<int64_t> elapsedTime_ {};
      // The number of input rows in the task.
      shared_ptr<int64_t> inputRows_ {};
      // The amount of input data in the task. Unit: bytes.
      shared_ptr<int64_t> inputSize_ {};
      // The total amount of time consumed by all operators in the task on a specific node. This parameter can be used to determine whether long tails occur in computing. Unit: milliseconds.
      shared_ptr<int64_t> operatorCost_ {};
      // The number of output rows in the task.
      shared_ptr<int64_t> outputRows_ {};
      // The amount of output data in the task. Unit: bytes.
      shared_ptr<int64_t> outputSize_ {};
      // The peak memory of the task on a specific node. Unit: bytes.
      shared_ptr<int64_t> peakMemory_ {};
      // The amount of time consumed to scan data from a data source in the task. Unit: milliseconds.
      shared_ptr<int64_t> scanCost_ {};
      // The number of rows scanned from a data source in the task.
      shared_ptr<int64_t> scanRows_ {};
      // The amount of data scanned from a data source in the task. Unit: bytes.
      shared_ptr<int64_t> scanSize_ {};
      // The final execution status of the task. Valid values:
      // 
      // *   FINISHED
      // *   CANCELED
      // *   ABORTED
      // *   FAILED
      shared_ptr<string> state_ {};
      // The task ID.
      shared_ptr<int32_t> taskId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->taskList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLPlanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeSQLPlanTaskResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeSQLPlanTaskResponseBody::TaskList>) };
    inline vector<DescribeSQLPlanTaskResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeSQLPlanTaskResponseBody::TaskList>) };
    inline DescribeSQLPlanTaskResponseBody& setTaskList(const vector<DescribeSQLPlanTaskResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeSQLPlanTaskResponseBody& setTaskList(vector<DescribeSQLPlanTaskResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried task.
    shared_ptr<vector<DescribeSQLPlanTaskResponseBody::TaskList>> taskList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
