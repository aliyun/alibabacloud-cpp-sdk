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
        DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        DARABONBA_PTR_TO_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(FileIndex, fileIndex_);
        DARABONBA_PTR_TO_JSON(NotifyItemSwitch, notifyItemSwitch_);
        DARABONBA_PTR_TO_JSON(Offset, offset_);
        DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
        DARABONBA_PTR_TO_JSON(ReqAuth, reqAuth_);
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
        DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
        DARABONBA_PTR_FROM_JSON(CallbackURL, callbackURL_);
        DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(FileIndex, fileIndex_);
        DARABONBA_PTR_FROM_JSON(NotifyItemSwitch, notifyItemSwitch_);
        DARABONBA_PTR_FROM_JSON(Offset, offset_);
        DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
        DARABONBA_PTR_FROM_JSON(ReqAuth, reqAuth_);
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
      virtual bool empty() const override { return this->authKey_ == nullptr
        && this->callbackURL_ == nullptr && this->dstUrl_ == nullptr && this->endTime_ == nullptr && this->fileIndex_ == nullptr && this->notifyItemSwitch_ == nullptr
        && this->offset_ == nullptr && this->repeatNumber_ == nullptr && this->reqAuth_ == nullptr && this->retryCount_ == nullptr && this->retryInterval_ == nullptr
        && this->sourceProtocol_ == nullptr && this->sourceType_ == nullptr && this->sourceUrls_ == nullptr && this->startTime_ == nullptr && this->taskId_ == nullptr
        && this->taskName_ == nullptr; };
      // authKey Field Functions 
      bool hasAuthKey() const { return this->authKey_ != nullptr;};
      void deleteAuthKey() { this->authKey_ = nullptr;};
      inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
      inline TaskInfo& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


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


      // notifyItemSwitch Field Functions 
      bool hasNotifyItemSwitch() const { return this->notifyItemSwitch_ != nullptr;};
      void deleteNotifyItemSwitch() { this->notifyItemSwitch_ = nullptr;};
      inline string getNotifyItemSwitch() const { DARABONBA_PTR_GET_DEFAULT(notifyItemSwitch_, "") };
      inline TaskInfo& setNotifyItemSwitch(string notifyItemSwitch) { DARABONBA_PTR_SET_VALUE(notifyItemSwitch_, notifyItemSwitch) };


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


      // reqAuth Field Functions 
      bool hasReqAuth() const { return this->reqAuth_ != nullptr;};
      void deleteReqAuth() { this->reqAuth_ = nullptr;};
      inline string getReqAuth() const { DARABONBA_PTR_GET_DEFAULT(reqAuth_, "") };
      inline TaskInfo& setReqAuth(string reqAuth) { DARABONBA_PTR_SET_VALUE(reqAuth_, reqAuth) };


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
      shared_ptr<string> authKey_ {};
      // The HTTP callback URL.
      shared_ptr<string> callbackURL_ {};
      // The destination ingest URL.
      shared_ptr<string> dstUrl_ {};
      // The end time of the task. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
      shared_ptr<string> endTime_ {};
      // The file index. Playback starts from the nth file.
      shared_ptr<int32_t> fileIndex_ {};
      shared_ptr<string> notifyItemSwitch_ {};
      // The start offset of the video file. Unit: seconds. The value must be greater than 0.
      // > - Indicates the position from which reading starts, relative to the first frame.
      // > - This parameter is valid only for video-on-demand resources or video files.
      shared_ptr<int32_t> offset_ {};
      // The number of times playback repeats after completion. Valid values:
      // - 0 (default): No repeat playback.
      // - -1: Infinite loop.
      // - Other positive integers: the number of times playback repeats after completion.
      // 
      // > This parameter applies only to video-on-demand or third-party video streams.
      shared_ptr<int32_t> repeatNumber_ {};
      shared_ptr<string> reqAuth_ {};
      // The number of retries.
      shared_ptr<int32_t> retryCount_ {};
      // The retry interval. Unit: seconds.
      shared_ptr<int32_t> retryInterval_ {};
      // The source stream protocol name.
      shared_ptr<string> sourceProtocol_ {};
      // The source stream type. Valid values:
      // 
      // - live: live stream.
      // - vod: ApsaraVideo VOD resource.
      // - url: third-party video file resource.
      shared_ptr<string> sourceType_ {};
      // The source stream URL.
      shared_ptr<vector<string>> sourceUrls_ {};
      // The start time of the task. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
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
    // The current effective playlist sequence offset.
    shared_ptr<int32_t> currentFileIndex_ {};
    // The current effective video playback offset.
    shared_ptr<int32_t> currentOffset_ {};
    // The error description.
    shared_ptr<string> description_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The return code.
    // > - "0" is returned in normal cases.
    // > - For error cases, refer to the error code list below.
    shared_ptr<int32_t> retCode_ {};
    // The reason why the task exited. Valid values:
    // 
    // - TriggerByUser: The task was actively ended by the user.
    // - OverEndTime: The preset end time was exceeded.
    // 
    // > This parameter is returned only when the task is in the exited state.
    shared_ptr<string> taskExitReason_ {};
    // The time when the task exited. The value is a UNIX timestamp in seconds.
    // > This parameter is returned only when the task is in the exited state.
    shared_ptr<int32_t> taskExitTime_ {};
    // The ID of the node returned when you create task.
    shared_ptr<string> taskId_ {};
    // The task information.
    shared_ptr<DescribeLivePullToPushResponseBody::TaskInfo> taskInfo_ {};
    // The reason why the task stopped running. Valid values:
    // 
    // - PullStreamFailed: Source stream pulling is abnormal. Retrying.
    // - PushStreamFailed: Destination stream pushing is abnormal. Retrying.
    // - UnknownError: Unknown error.
    // 
    // > This parameter is returned only when the task is in the stopped state.
    shared_ptr<string> taskInvalidReason_ {};
    // The current status of the task. Valid values:
    // - 0: Not started (the start time has not been reached).
    // - 1: Running normally (stream pulling and pushing are both normal).
    // - 2: Running abnormally.
    // - 3: Stopped (stream pulling or pushing is abnormal, or the task was actively stopped by calling an API operation).
    // - -1: Exited.
    shared_ptr<int32_t> taskStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
