// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASYNCTASKRESPONSEBODYASYNCTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTASYNCTASKRESPONSEBODYASYNCTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class ListAsyncTaskResponseBodyAsyncTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAsyncTaskResponseBodyAsyncTasks& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAsyncTaskResponseBodyAsyncTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListAsyncTaskResponseBodyAsyncTasks() = default ;
    ListAsyncTaskResponseBodyAsyncTasks(const ListAsyncTaskResponseBodyAsyncTasks &) = default ;
    ListAsyncTaskResponseBodyAsyncTasks(ListAsyncTaskResponseBodyAsyncTasks &&) = default ;
    ListAsyncTaskResponseBodyAsyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAsyncTaskResponseBodyAsyncTasks() = default ;
    ListAsyncTaskResponseBodyAsyncTasks& operator=(const ListAsyncTaskResponseBodyAsyncTasks &) = default ;
    ListAsyncTaskResponseBodyAsyncTasks& operator=(ListAsyncTaskResponseBodyAsyncTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr && this->taskId_ != nullptr && this->taskParams_ != nullptr && this->taskResult_ != nullptr && this->taskStatus_ != nullptr
        && this->taskType_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListAsyncTaskResponseBodyAsyncTasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListAsyncTaskResponseBodyAsyncTasks& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListAsyncTaskResponseBodyAsyncTasks& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline string taskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
    inline ListAsyncTaskResponseBodyAsyncTasks& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline ListAsyncTaskResponseBodyAsyncTasks& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline ListAsyncTaskResponseBodyAsyncTasks& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline ListAsyncTaskResponseBodyAsyncTasks& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
    std::shared_ptr<string> taskParams_ = nullptr;
    std::shared_ptr<string> taskResult_ = nullptr;
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
