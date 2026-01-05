// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TaskInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileIndex, fileIndex_);
        DARABONBA_PTR_TO_JSON(Offset, offset_);
        DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
        DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
        DARABONBA_PTR_TO_JSON(SourceProtocol, sourceProtocol_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileIndex, fileIndex_);
        DARABONBA_PTR_FROM_JSON(Offset, offset_);
        DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
        DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
        DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
        DARABONBA_PTR_FROM_JSON(SourceProtocol, sourceProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      };
      TaskInfo() = default ;
      TaskInfo(const TaskInfo &) = default ;
      TaskInfo(TaskInfo &&) = default ;
      TaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInfo() = default ;
      TaskInfo& operator=(const TaskInfo &) = default ;
      TaskInfo& operator=(TaskInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callbackURL_ == nullptr
        && this->dstUrl_ == nullptr && this->endTime_ == nullptr && this->fileIndex_ == nullptr && this->offset_ == nullptr && this->repeatNumber_ == nullptr
        && this->retryCount_ == nullptr && this->retryInterval_ == nullptr && this->sourceProtocol_ == nullptr && this->sourceType_ == nullptr && this->sourceUrls_ == nullptr
        && this->startTime_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr; };
      // callbackURL Field Functions 
      bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
      void deleteCallbackURL() { this->callbackURL_ = nullptr;};
      inline string getCallbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
      inline TaskInfo& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


      // dstUrl Field Functions 
      bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
      void deleteDstUrl() { this->dstUrl_ = nullptr;};
      inline string getDstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
      inline TaskInfo& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline TaskInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // fileIndex Field Functions 
      bool hasFileIndex() const { return this->fileIndex_ != nullptr;};
      void deleteFileIndex() { this->fileIndex_ = nullptr;};
      inline int32_t getFileIndex() const { DARABONBA_PTR_GET_DEFAULT(fileIndex_, 0) };
      inline TaskInfo& setFileIndex(int32_t fileIndex) { DARABONBA_PTR_SET_VALUE(fileIndex_, fileIndex) };


      // offset Field Functions 
      bool hasOffset() const { return this->offset_ != nullptr;};
      void deleteOffset() { this->offset_ = nullptr;};
      inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
      inline TaskInfo& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      // repeatNumber Field Functions 
      bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
      void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
      inline int32_t getRepeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
      inline TaskInfo& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


      // retryCount Field Functions 
      bool hasRetryCount() const { return this->retryCount_ != nullptr;};
      void deleteRetryCount() { this->retryCount_ = nullptr;};
      inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
      inline TaskInfo& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


      // retryInterval Field Functions 
      bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
      void deleteRetryInterval() { this->retryInterval_ = nullptr;};
      inline int32_t getRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
      inline TaskInfo& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


      // sourceProtocol Field Functions 
      bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
      void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
      inline string getSourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
      inline TaskInfo& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline TaskInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // sourceUrls Field Functions 
      bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
      void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
      inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
      inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
      inline TaskInfo& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
      inline TaskInfo& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline TaskInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline TaskInfo& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    protected:
      // The HTTP callback URL.
      shared_ptr<string> callbackURL_ {};
      // The destination URL to which the stream is relayed.
      shared_ptr<string> dstUrl_ {};
      // The end time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> endTime_ {};
      // The file index, which indicates the sequence of the file where the playback starts.
      shared_ptr<int32_t> fileIndex_ {};
      // The offset of the position where the system starts to read the video resource. Unit: seconds. Valid values: positive numbers.
      // 
      // > 
      // 
      // *   This parameter indicates an offset from the first frame.
      // 
      // *   This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
      shared_ptr<int32_t> offset_ {};
      // The number of playbacks after the first playback is complete. Valid values:
      // 
      // *   0 (default): specifies that the video list is played only once.
      // *   \\-1: specifies that the video list is played in loop mode.
      // *   Positive integer: specifies the number of times the video list repeats after the first playback is complete.
      // 
      // >  This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
      shared_ptr<int32_t> repeatNumber_ {};
      // The number of retries allowed.
      shared_ptr<int32_t> retryCount_ {};
      // The retry interval. Unit: seconds.
      shared_ptr<int32_t> retryInterval_ {};
      // The protocol of the source stream.
      shared_ptr<string> sourceProtocol_ {};
      // The type of the source stream. Valid values:
      // 
      // *   live: a live stream
      // *   vod: a list of ApsaraVideo VOD resources
      // *   url: a list of video resources from a third party
      shared_ptr<string> sourceType_ {};
      // The source URLs.
      shared_ptr<vector<string>> sourceUrls_ {};
      // The start time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> startTime_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task name.
      shared_ptr<string> taskName_ {};
    };

    virtual bool empty() const override { return this->currentFileIndex_ == nullptr
        && this->currentOffset_ == nullptr && this->description_ == nullptr && this->requestId_ == nullptr && this->retCode_ == nullptr && this->taskExitReason_ == nullptr
        && this->taskExitTime_ == nullptr && this->taskId_ == nullptr && this->taskInfo_ == nullptr && this->taskInvalidReason_ == nullptr && this->taskStatus_ == nullptr; };
    // currentFileIndex Field Functions 
    bool hasCurrentFileIndex() const { return this->currentFileIndex_ != nullptr;};
    void deleteCurrentFileIndex() { this->currentFileIndex_ = nullptr;};
    inline int32_t getCurrentFileIndex() const { DARABONBA_PTR_GET_DEFAULT(currentFileIndex_, 0) };
    inline DescribeLivePullToPushResponseBody& setCurrentFileIndex(int32_t currentFileIndex) { DARABONBA_PTR_SET_VALUE(currentFileIndex_, currentFileIndex) };


    // currentOffset Field Functions 
    bool hasCurrentOffset() const { return this->currentOffset_ != nullptr;};
    void deleteCurrentOffset() { this->currentOffset_ = nullptr;};
    inline int32_t getCurrentOffset() const { DARABONBA_PTR_GET_DEFAULT(currentOffset_, 0) };
    inline DescribeLivePullToPushResponseBody& setCurrentOffset(int32_t currentOffset) { DARABONBA_PTR_SET_VALUE(currentOffset_, currentOffset) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLivePullToPushResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePullToPushResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retCode Field Functions 
    bool hasRetCode() const { return this->retCode_ != nullptr;};
    void deleteRetCode() { this->retCode_ = nullptr;};
    inline int32_t getRetCode() const { DARABONBA_PTR_GET_DEFAULT(retCode_, 0) };
    inline DescribeLivePullToPushResponseBody& setRetCode(int32_t retCode) { DARABONBA_PTR_SET_VALUE(retCode_, retCode) };


    // taskExitReason Field Functions 
    bool hasTaskExitReason() const { return this->taskExitReason_ != nullptr;};
    void deleteTaskExitReason() { this->taskExitReason_ = nullptr;};
    inline string getTaskExitReason() const { DARABONBA_PTR_GET_DEFAULT(taskExitReason_, "") };
    inline DescribeLivePullToPushResponseBody& setTaskExitReason(string taskExitReason) { DARABONBA_PTR_SET_VALUE(taskExitReason_, taskExitReason) };


    // taskExitTime Field Functions 
    bool hasTaskExitTime() const { return this->taskExitTime_ != nullptr;};
    void deleteTaskExitTime() { this->taskExitTime_ = nullptr;};
    inline int32_t getTaskExitTime() const { DARABONBA_PTR_GET_DEFAULT(taskExitTime_, 0) };
    inline DescribeLivePullToPushResponseBody& setTaskExitTime(int32_t taskExitTime) { DARABONBA_PTR_SET_VALUE(taskExitTime_, taskExitTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLivePullToPushResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskInfo Field Functions 
    bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
    void deleteTaskInfo() { this->taskInfo_ = nullptr;};
    inline const DescribeLivePullToPushResponseBody::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, DescribeLivePullToPushResponseBody::TaskInfo) };
    inline DescribeLivePullToPushResponseBody::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, DescribeLivePullToPushResponseBody::TaskInfo) };
    inline DescribeLivePullToPushResponseBody& setTaskInfo(const DescribeLivePullToPushResponseBody::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
    inline DescribeLivePullToPushResponseBody& setTaskInfo(DescribeLivePullToPushResponseBody::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


    // taskInvalidReason Field Functions 
    bool hasTaskInvalidReason() const { return this->taskInvalidReason_ != nullptr;};
    void deleteTaskInvalidReason() { this->taskInvalidReason_ = nullptr;};
    inline string getTaskInvalidReason() const { DARABONBA_PTR_GET_DEFAULT(taskInvalidReason_, "") };
    inline DescribeLivePullToPushResponseBody& setTaskInvalidReason(string taskInvalidReason) { DARABONBA_PTR_SET_VALUE(taskInvalidReason_, taskInvalidReason) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
    inline DescribeLivePullToPushResponseBody& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


  protected:
    // The current file index.
    shared_ptr<int32_t> currentFileIndex_ {};
    // The current offset for video playback.
    shared_ptr<int32_t> currentOffset_ {};
    // The error description.
    shared_ptr<string> description_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The code that is returned for the request.
    // 
    // > 
    // 
    // *   0 is returned if the request is normal.
    // 
    // *   For information about codes that are returned when exceptions occur, see the following Error codes table.
    shared_ptr<int32_t> retCode_ {};
    // The reason why the task is stopped.
    // 
    // *   TriggerByUser: You proactively stopped the task.
    // *   OverEndTime: The specified end time was exceeded.
    // 
    // >  This parameter is returned only if the task is stopped.
    shared_ptr<string> taskExitReason_ {};
    // The time when the task was exited. The value is a Unix timestamp in seconds.
    // 
    // >  This parameter is returned only if the task status is exited.
    shared_ptr<int32_t> taskExitTime_ {};
    // The task ID.
    shared_ptr<string> taskId_ {};
    // The information about the task.
    shared_ptr<DescribeLivePullToPushResponseBody::TaskInfo> taskInfo_ {};
    // The reason why the task was stopped.
    // 
    // *   PullStreamFailed: An exception occurred while pulling the source stream. A retry is in progress.
    // *   PushStreamFailed: An exception occurred while ingesting the stream. A retry is in progress.
    // *   UnknownError: An unknown exception occurred.
    // 
    // >  This parameter is returned only if the task status is stopped.
    shared_ptr<string> taskInvalidReason_ {};
    // The current status of the task.
    // 
    // *   0: not started.
    // *   1: running. Stream pulling and stream relay are normal.
    // *   2: abnormal.
    // *   3: stopped. It may be because exceptions occur during stream pulling or stream relay or you proactively call the StopLivePullToPush operation.
    // *   \\-1: exited.
    shared_ptr<int32_t> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
