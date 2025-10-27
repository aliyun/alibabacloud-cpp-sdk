// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEONCETASKRESPONSEBODYTASKMANAGERESPONSELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEONCETASKRESPONSEBODYTASKMANAGERESPONSELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeOnceTaskResponseBodyTaskManageResponseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOnceTaskResponseBodyTaskManageResponseList& obj) { 
      DARABONBA_PTR_TO_JSON(DetailData, detailData_);
      DARABONBA_PTR_TO_JSON(FailCount, failCount_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(ResultInfo, resultInfo_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(TaskEndTime, taskEndTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TaskStatusText, taskStatusText_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOnceTaskResponseBodyTaskManageResponseList& obj) { 
      DARABONBA_PTR_FROM_JSON(DetailData, detailData_);
      DARABONBA_PTR_FROM_JSON(FailCount, failCount_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(ResultInfo, resultInfo_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(TaskEndTime, taskEndTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskStartTime, taskStartTime_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TaskStatusText, taskStatusText_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    DescribeOnceTaskResponseBodyTaskManageResponseList() = default ;
    DescribeOnceTaskResponseBodyTaskManageResponseList(const DescribeOnceTaskResponseBodyTaskManageResponseList &) = default ;
    DescribeOnceTaskResponseBodyTaskManageResponseList(DescribeOnceTaskResponseBodyTaskManageResponseList &&) = default ;
    DescribeOnceTaskResponseBodyTaskManageResponseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOnceTaskResponseBodyTaskManageResponseList() = default ;
    DescribeOnceTaskResponseBodyTaskManageResponseList& operator=(const DescribeOnceTaskResponseBodyTaskManageResponseList &) = default ;
    DescribeOnceTaskResponseBodyTaskManageResponseList& operator=(DescribeOnceTaskResponseBodyTaskManageResponseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->detailData_ == nullptr
        && return this->failCount_ == nullptr && return this->progress_ == nullptr && return this->resultInfo_ == nullptr && return this->successCount_ == nullptr && return this->taskEndTime_ == nullptr
        && return this->taskId_ == nullptr && return this->taskName_ == nullptr && return this->taskStartTime_ == nullptr && return this->taskStatus_ == nullptr && return this->taskStatusText_ == nullptr
        && return this->taskType_ == nullptr; };
    // detailData Field Functions 
    bool hasDetailData() const { return this->detailData_ != nullptr;};
    void deleteDetailData() { this->detailData_ = nullptr;};
    inline string detailData() const { DARABONBA_PTR_GET_DEFAULT(detailData_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setDetailData(string detailData) { DARABONBA_PTR_SET_VALUE(detailData_, detailData) };


    // failCount Field Functions 
    bool hasFailCount() const { return this->failCount_ != nullptr;};
    void deleteFailCount() { this->failCount_ = nullptr;};
    inline int32_t failCount() const { DARABONBA_PTR_GET_DEFAULT(failCount_, 0) };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setFailCount(int32_t failCount) { DARABONBA_PTR_SET_VALUE(failCount_, failCount) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // resultInfo Field Functions 
    bool hasResultInfo() const { return this->resultInfo_ != nullptr;};
    void deleteResultInfo() { this->resultInfo_ = nullptr;};
    inline string resultInfo() const { DARABONBA_PTR_GET_DEFAULT(resultInfo_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setResultInfo(string resultInfo) { DARABONBA_PTR_SET_VALUE(resultInfo_, resultInfo) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // taskEndTime Field Functions 
    bool hasTaskEndTime() const { return this->taskEndTime_ != nullptr;};
    void deleteTaskEndTime() { this->taskEndTime_ = nullptr;};
    inline int64_t taskEndTime() const { DARABONBA_PTR_GET_DEFAULT(taskEndTime_, 0L) };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskEndTime(int64_t taskEndTime) { DARABONBA_PTR_SET_VALUE(taskEndTime_, taskEndTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskStartTime Field Functions 
    bool hasTaskStartTime() const { return this->taskStartTime_ != nullptr;};
    void deleteTaskStartTime() { this->taskStartTime_ = nullptr;};
    inline int64_t taskStartTime() const { DARABONBA_PTR_GET_DEFAULT(taskStartTime_, 0L) };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskStartTime(int64_t taskStartTime) { DARABONBA_PTR_SET_VALUE(taskStartTime_, taskStartTime) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // taskStatusText Field Functions 
    bool hasTaskStatusText() const { return this->taskStatusText_ != nullptr;};
    void deleteTaskStatusText() { this->taskStatusText_ = nullptr;};
    inline string taskStatusText() const { DARABONBA_PTR_GET_DEFAULT(taskStatusText_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskStatusText(string taskStatusText) { DARABONBA_PTR_SET_VALUE(taskStatusText_, taskStatusText) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline DescribeOnceTaskResponseBodyTaskManageResponseList& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The execution details of the task. The value of this parameter is in the JSON format.
    // 
    // *   **causeCode**: the returned code for the cause.
    // *   **causeMsg**: the returned message for the cause.
    // *   **resCode**: the returned code for troubleshooting.
    // *   **resMsg**: the returned message for troubleshooting.
    // *   **problemType**: the type of the issue.
    // *   **dispatchType**: the task delivery method.
    // *   **uuid**: the UUID of the server.
    // *   **instanceId**: the instance ID of the server.
    // *   **internetIp**: the public IP address of the server.
    // *   **intranetIp**: the private IP address of the server.
    // *   **instanceName**: the instance name of the server.
    // *   **url**: the download URL of the troubleshooting log.
    std::shared_ptr<string> detailData_ = nullptr;
    // The number of tasks that fail to be executed.
    std::shared_ptr<int32_t> failCount_ = nullptr;
    // The progress of the task. Unit: percent (%).
    std::shared_ptr<string> progress_ = nullptr;
    // The execution result of the task.
    std::shared_ptr<string> resultInfo_ = nullptr;
    // The number of tasks that are executed.
    std::shared_ptr<int32_t> successCount_ = nullptr;
    // The timestamp that indicates the time when the task ends. Unit: milliseconds.
    std::shared_ptr<int64_t> taskEndTime_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> taskName_ = nullptr;
    // The timestamp that indicates the time when the task starts. Unit: milliseconds.
    std::shared_ptr<int64_t> taskStartTime_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   **1**: The task is started.
    // *   **2**: The task is complete.
    // *   **3**: The task fails.
    // *   **4**: The task times out.
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
    // The text description of the status for the task. Valid values:
    // 
    // *   **INIT**: The task is pending start.
    // *   **START**: The task is started.
    // *   **DISPATCH**: The self-check command is issued.
    // *   **SUCCESS**: The self-check is complete.
    // *   **FAIL**: The task fails.
    // *   **TIMEOUT**: The task times out.
    std::shared_ptr<string> taskStatusText_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **CLIENT_PROBLEM_CHECK**: a task of the Security Center client
    // *   **CLIENT_DEV_OPS**: an O\\&M task of Cloud Assistant
    // *   **ASSET_SECURITY_CHECK**: a task for asset information collection
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
