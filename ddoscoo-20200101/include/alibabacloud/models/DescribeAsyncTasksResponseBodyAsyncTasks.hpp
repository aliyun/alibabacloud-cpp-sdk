// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASYNCTASKSRESPONSEBODYASYNCTASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASYNCTASKSRESPONSEBODYASYNCTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeAsyncTasksResponseBodyAsyncTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAsyncTasksResponseBodyAsyncTasks& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_TO_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAsyncTasksResponseBodyAsyncTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskParams, taskParams_);
      DARABONBA_PTR_FROM_JSON(TaskResult, taskResult_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeAsyncTasksResponseBodyAsyncTasks() = default ;
    DescribeAsyncTasksResponseBodyAsyncTasks(const DescribeAsyncTasksResponseBodyAsyncTasks &) = default ;
    DescribeAsyncTasksResponseBodyAsyncTasks(DescribeAsyncTasksResponseBodyAsyncTasks &&) = default ;
    DescribeAsyncTasksResponseBodyAsyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAsyncTasksResponseBodyAsyncTasks() = default ;
    DescribeAsyncTasksResponseBodyAsyncTasks& operator=(const DescribeAsyncTasksResponseBodyAsyncTasks &) = default ;
    DescribeAsyncTasksResponseBodyAsyncTasks& operator=(DescribeAsyncTasksResponseBodyAsyncTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->startTime_ == nullptr && return this->taskId_ == nullptr && return this->taskParams_ == nullptr && return this->taskResult_ == nullptr && return this->taskStatus_ == nullptr
        && return this->taskType_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskParams Field Functions 
    bool hasTaskParams() const { return this->taskParams_ != nullptr;};
    void deleteTaskParams() { this->taskParams_ = nullptr;};
    inline string taskParams() const { DARABONBA_PTR_GET_DEFAULT(taskParams_, "") };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setTaskParams(string taskParams) { DARABONBA_PTR_SET_VALUE(taskParams_, taskParams) };


    // taskResult Field Functions 
    bool hasTaskResult() const { return this->taskResult_ != nullptr;};
    void deleteTaskResult() { this->taskResult_ = nullptr;};
    inline string taskResult() const { DARABONBA_PTR_GET_DEFAULT(taskResult_, "") };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setTaskResult(string taskResult) { DARABONBA_PTR_SET_VALUE(taskResult_, taskResult) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline int32_t taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
    inline DescribeAsyncTasksResponseBodyAsyncTasks& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The end time of the task. This value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The start time of the task. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The ID of the job.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The task parameter. The value is a JSON string. The returned field in the value varies based on the value of **TaskType**.
    // 
    // If **TaskType** is set to **1**, **3**, **4**, **5**, or **6**, the following filed is returned:
    // 
    // *   **instanceId**: the ID of the instance. Data type: string.
    // 
    // If **TaskType** is set to **2**, the following field is returned:
    // 
    // *   **domain**: the domain name of the website. Data type: string.
    std::shared_ptr<string> taskParams_ = nullptr;
    // The execution result of the task. The value is a JSON string. The returned fields in the value vary based on the value of **TaskType**.
    // 
    // If **TaskType** is set to **1**, **3**, **4**, **5**, or **6**, the following fields are returned:
    // 
    // *   **instanceId**: the ID of the instance. Data type: string.
    // *   **url**: the URL to download the exported file from Object Storage Service (OSS). Data type: string.
    // 
    // If **TaskType** is set to **2**, the following fields are returned:
    // 
    // *   **domain**: the domain name of the website. Data type: string.
    // *   **url**: the URL to download the exported file from OSS. Data type: string.
    std::shared_ptr<string> taskResult_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **0**: indicates that the task is being initialized.
    // *   **1**: indicates that the task is in progress.
    // *   **2**: indicates that the task is successful.
    // *   **3**: indicates that the task failed.
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **1**: the task to export the port forwarding rules of an instance
    // *   **2**: the task to export the forwarding rules of a website protected by an instance
    // *   **3**: the task to export the sessions and health check settings of an instance
    // *   **4**: the task to export the mitigation policies of an instance
    // *   **5**: the task to download the blacklist for destination IP addresses of an instance
    // *   **6**: the task to download the whitelist for destination IP addresses of an instance
    std::shared_ptr<int32_t> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
