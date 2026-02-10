// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGELATESTSCANTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageLatestScanTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageLatestScanTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Task, task_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageLatestScanTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Task, task_);
    };
    DescribeImageLatestScanTaskResponseBody() = default ;
    DescribeImageLatestScanTaskResponseBody(const DescribeImageLatestScanTaskResponseBody &) = default ;
    DescribeImageLatestScanTaskResponseBody(DescribeImageLatestScanTaskResponseBody &&) = default ;
    DescribeImageLatestScanTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageLatestScanTaskResponseBody() = default ;
    DescribeImageLatestScanTaskResponseBody& operator=(const DescribeImageLatestScanTaskResponseBody &) = default ;
    DescribeImageLatestScanTaskResponseBody& operator=(DescribeImageLatestScanTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Task : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Task& obj) { 
        DARABONBA_PTR_TO_JSON(Create, create_);
        DARABONBA_PTR_TO_JSON(Finish, finish_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Modified, modified_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, Task& obj) { 
        DARABONBA_PTR_FROM_JSON(Create, create_);
        DARABONBA_PTR_FROM_JSON(Finish, finish_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Modified, modified_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      Task() = default ;
      Task(const Task &) = default ;
      Task(Task &&) = default ;
      Task(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Task() = default ;
      Task& operator=(const Task &) = default ;
      Task& operator=(Task &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->create_ == nullptr
        && this->finish_ == nullptr && this->finishTime_ == nullptr && this->id_ == nullptr && this->modified_ == nullptr && this->name_ == nullptr
        && this->source_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->target_ == nullptr && this->targetType_ == nullptr
        && this->taskId_ == nullptr && this->taskType_ == nullptr; };
      // create Field Functions 
      bool hasCreate() const { return this->create_ != nullptr;};
      void deleteCreate() { this->create_ = nullptr;};
      inline string getCreate() const { DARABONBA_PTR_GET_DEFAULT(create_, "") };
      inline Task& setCreate(string create) { DARABONBA_PTR_SET_VALUE(create_, create) };


      // finish Field Functions 
      bool hasFinish() const { return this->finish_ != nullptr;};
      void deleteFinish() { this->finish_ = nullptr;};
      inline int32_t getFinish() const { DARABONBA_PTR_GET_DEFAULT(finish_, 0) };
      inline Task& setFinish(int32_t finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline Task& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Task& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modified Field Functions 
      bool hasModified() const { return this->modified_ != nullptr;};
      void deleteModified() { this->modified_ = nullptr;};
      inline string getModified() const { DARABONBA_PTR_GET_DEFAULT(modified_, "") };
      inline Task& setModified(string modified) { DARABONBA_PTR_SET_VALUE(modified_, modified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Task& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Task& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Task& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Task& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Task& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Task& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Task& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
      inline Task& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The time when the task was created. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> create_ {};
      // The number of images that are scanned.
      shared_ptr<int32_t> finish_ {};
      // The end time of the task. A value is returned only when the task is in the Finished state. Otherwise, the returned value is empty.
      shared_ptr<int64_t> finishTime_ {};
      // The task ID.
      shared_ptr<int64_t> id_ {};
      // The time when the task was last modified. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> modified_ {};
      // The name of the task.
      shared_ptr<string> name_ {};
      // The method in which the task was created. A task can be created in the Security Center console or by calling an API operation. Valid values:
      // 
      // *   **console_batch**: The task was created in the Security Center console.
      // *   **openapi**: The task was created by calling an API operation.
      shared_ptr<string> source_ {};
      // The start time of the task.
      shared_ptr<int64_t> startTime_ {};
      // The status of the task. Valid value:
      // 
      // *   **PROCESSING**: The task is running.
      // *   **START**: The task is being started.
      // *   **MESSAGE_SEND**: The scan task is sent.
      // *   **PRE_ANALYZER**: The image is in precheck.
      // *   **SUCCESS**: The task was successful.
      // *   **FAIL**: The task failed.
      // *   **TIMOUT**: The task timed out.
      shared_ptr<string> status_ {};
      // The digest value of the image.
      shared_ptr<string> target_ {};
      // The type of the scanned asset. Valid value:
      // 
      // *   **IMAGE**
      shared_ptr<string> targetType_ {};
      // The ID of the scan task.
      shared_ptr<string> taskId_ {};
      // The type of the task. Valid value:
      // 
      // *   **IMAGE_SCAN**
      shared_ptr<string> taskType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->task_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageLatestScanTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // task Field Functions 
    bool hasTask() const { return this->task_ != nullptr;};
    void deleteTask() { this->task_ = nullptr;};
    inline const vector<DescribeImageLatestScanTaskResponseBody::Task> & getTask() const { DARABONBA_PTR_GET_CONST(task_, vector<DescribeImageLatestScanTaskResponseBody::Task>) };
    inline vector<DescribeImageLatestScanTaskResponseBody::Task> getTask() { DARABONBA_PTR_GET(task_, vector<DescribeImageLatestScanTaskResponseBody::Task>) };
    inline DescribeImageLatestScanTaskResponseBody& setTask(const vector<DescribeImageLatestScanTaskResponseBody::Task> & task) { DARABONBA_PTR_SET_VALUE(task_, task) };
    inline DescribeImageLatestScanTaskResponseBody& setTask(vector<DescribeImageLatestScanTaskResponseBody::Task> && task) { DARABONBA_PTR_SET_RVALUE(task_, task) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the information about the task.
    shared_ptr<vector<DescribeImageLatestScanTaskResponseBody::Task>> task_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
