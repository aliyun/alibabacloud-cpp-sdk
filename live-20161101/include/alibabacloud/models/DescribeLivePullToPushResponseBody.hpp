// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePullToPushResponseBodyTaskInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePullToPushResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullToPushResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentFileIndex, currentFileIndex_);
      DARABONBA_PTR_TO_JSON(CurrentOffset, currentOffset_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetCode, retCode_);
      DARABONBA_PTR_TO_JSON(TaskExitReason, taskExitReason_);
      DARABONBA_PTR_TO_JSON(TaskExitTime, taskExitTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_TO_JSON(TaskInvalidReason, taskInvalidReason_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullToPushResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentFileIndex, currentFileIndex_);
      DARABONBA_PTR_FROM_JSON(CurrentOffset, currentOffset_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetCode, retCode_);
      DARABONBA_PTR_FROM_JSON(TaskExitReason, taskExitReason_);
      DARABONBA_PTR_FROM_JSON(TaskExitTime, taskExitTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
      DARABONBA_PTR_FROM_JSON(TaskInvalidReason, taskInvalidReason_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
    };
    DescribeLivePullToPushResponseBody() = default ;
    DescribeLivePullToPushResponseBody(const DescribeLivePullToPushResponseBody &) = default ;
    DescribeLivePullToPushResponseBody(DescribeLivePullToPushResponseBody &&) = default ;
    DescribeLivePullToPushResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullToPushResponseBody() = default ;
    DescribeLivePullToPushResponseBody& operator=(const DescribeLivePullToPushResponseBody &) = default ;
    DescribeLivePullToPushResponseBody& operator=(DescribeLivePullToPushResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentFileIndex_ != nullptr
        && this->currentOffset_ != nullptr && this->description_ != nullptr && this->requestId_ != nullptr && this->retCode_ != nullptr && this->taskExitReason_ != nullptr
        && this->taskExitTime_ != nullptr && this->taskId_ != nullptr && this->taskInfo_ != nullptr && this->taskInvalidReason_ != nullptr && this->taskStatus_ != nullptr; };
    // currentFileIndex Field Functions 
    bool hasCurrentFileIndex() const { return this->currentFileIndex_ != nullptr;};
    void deleteCurrentFileIndex() { this->currentFileIndex_ = nullptr;};
    inline int32_t currentFileIndex() const { DARABONBA_PTR_GET_DEFAULT(currentFileIndex_, 0) };
    inline DescribeLivePullToPushResponseBody& setCurrentFileIndex(int32_t currentFileIndex) { DARABONBA_PTR_SET_VALUE(currentFileIndex_, currentFileIndex) };


    // currentOffset Field Functions 
    bool hasCurrentOffset() const { return this->currentOffset_ != nullptr;};
    void deleteCurrentOffset() { this->currentOffset_ = nullptr;};
    inline int32_t currentOffset() const { DARABONBA_PTR_GET_DEFAULT(currentOffset_, 0) };
    inline DescribeLivePullToPushResponseBody& setCurrentOffset(int32_t currentOffset) { DARABONBA_PTR_SET_VALUE(currentOffset_, currentOffset) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLivePullToPushResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePullToPushResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t retCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline DescribeLivePullToPushResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // taskExitReason Field Functions 
    bool hasTaskExitReason() const { return this->taskExitReason_ != nullptr;};
    void deleteTaskExitReason() { this->taskExitReason_ = nullptr;};
    inline string taskExitReason() const { DARABONBA_PTR_GET_DEFAULT(taskExitReason_, "") };
    inline DescribeLivePullToPushResponseBody& setTaskExitReason(string taskExitReason) { DARABONBA_PTR_SET_VALUE(taskExitReason_, taskExitReason) };


    // taskExitTime Field Functions 
    bool hasTaskExitTime() const { return this->taskExitTime_ != nullptr;};
    void deleteTaskExitTime() { this->taskExitTime_ = nullptr;};
    inline int32_t taskExitTime() const { DARABONBA_PTR_GET_DEFAULT(taskExitTime_, 0) };
    inline DescribeLivePullToPushResponseBody& setTaskExitTime(int32_t taskExitTime) { DARABONBA_PTR_SET_VALUE(taskExitTime_, taskExitTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLivePullToPushResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeLivePullToPushResponseBodyTaskInfo & taskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeLivePullToPushResponseBodyTaskInfo) };
    inline DescribeLivePullToPushResponseBodyTaskInfo taskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeLivePullToPushResponseBodyTaskInfo) };
    inline DescribeLivePullToPushResponseBody& setTaskInfo(const DescribeLivePullToPushResponseBodyTaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeLivePullToPushResponseBody& setTaskInfo(DescribeLivePullToPushResponseBodyTaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // taskInvalidReason Field Functions 
    bool hasTaskInvalidReason() const { return this->taskInvalidReason_ != nullptr;};
    void deleteTaskInvalidReason() { this->taskInvalidReason_ = nullptr;};
    inline string taskInvalidReason() const { DARABONBA_PTR_GET_DEFAULT(taskInvalidReason_, "") };
    inline DescribeLivePullToPushResponseBody& setTaskInvalidReason(string taskInvalidReason) { DARABONBA_PTR_SET_VALUE(taskInvalidReason_, taskInvalidReason) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline DescribeLivePullToPushResponseBody& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The current file index.
    std::shared_ptr<int32_t> currentFileIndex_ = nullptr;
    // The current offset for video playback.
    std::shared_ptr<int32_t> currentOffset_ = nullptr;
    // The error description.
    std::shared_ptr<string> description_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The code that is returned for the request.
    // 
    // > 
    // 
    // *   0 is returned if the request is normal.
    // 
    // *   For information about codes that are returned when exceptions occur, see the following Error codes table.
    std::shared_ptr<int32_t> retCode_ = nullptr;
    // The reason why the task is stopped.
    // 
    // *   TriggerByUser: You proactively stopped the task.
    // *   OverEndTime: The specified end time was exceeded.
    // 
    // >  This parameter is returned only if the task is stopped.
    std::shared_ptr<string> taskExitReason_ = nullptr;
    // The time when the task was exited. The value is a Unix timestamp in seconds.
    // 
    // >  This parameter is returned only if the task status is exited.
    std::shared_ptr<int32_t> taskExitTime_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The information about the task.
    std::shared_ptr<DescribeLivePullToPushResponseBodyTaskInfo> taskInfo_ = nullptr;
    // The reason why the task was stopped.
    // 
    // *   PullStreamFailed: An exception occurred while pulling the source stream. A retry is in progress.
    // *   PushStreamFailed: An exception occurred while ingesting the stream. A retry is in progress.
    // *   UnknownError: An unknown exception occurred.
    // 
    // >  This parameter is returned only if the task status is stopped.
    std::shared_ptr<string> taskInvalidReason_ = nullptr;
    // The current status of the task.
    // 
    // *   0: not started.
    // *   1: running. Stream pulling and stream relay are normal.
    // *   2: abnormal.
    // *   3: stopped. It may be because exceptions occur during stream pulling or stream relay or you proactively call the StopLivePullToPush operation.
    // *   \\-1: exited.
    std::shared_ptr<int32_t> taskStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
