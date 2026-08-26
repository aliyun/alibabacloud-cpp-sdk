// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHLISTRESPONSEBODY_HPP_
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
  class DescribeLivePullToPushListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullToPushListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePullToPushListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLivePullToPushListResponseBody() = default ;
    DescribeLivePullToPushListResponseBody(const DescribeLivePullToPushListResponseBody &) = default ;
    DescribeLivePullToPushListResponseBody(DescribeLivePullToPushListResponseBody &&) = default ;
    DescribeLivePullToPushListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullToPushListResponseBody() = default ;
    DescribeLivePullToPushListResponseBody& operator=(const DescribeLivePullToPushListResponseBody &) = default ;
    DescribeLivePullToPushListResponseBody& operator=(DescribeLivePullToPushListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskList& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentFileIndex, currentFileIndex_);
        DARABONBA_PTR_TO_JSON(CurrentOffset, currentOffset_);
        DARABONBA_PTR_TO_JSON(TaskExitReason, taskExitReason_);
        DARABONBA_PTR_TO_JSON(TaskExitTime, taskExitTime_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskInfo, taskInfo_);
        DARABONBA_PTR_TO_JSON(TaskInvalidReason, taskInvalidReason_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, TaskList& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentFileIndex, currentFileIndex_);
        DARABONBA_PTR_FROM_JSON(CurrentOffset, currentOffset_);
        DARABONBA_PTR_FROM_JSON(TaskExitReason, taskExitReason_);
        DARABONBA_PTR_FROM_JSON(TaskExitTime, taskExitTime_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskInfo, taskInfo_);
        DARABONBA_PTR_FROM_JSON(TaskInvalidReason, taskInvalidReason_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
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
        // The task end time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
        shared_ptr<string> endTime_ {};
        // The file index. Playback starts from the nth file.
        shared_ptr<int32_t> fileIndex_ {};
        shared_ptr<string> notifyItemSwitch_ {};
        // The start offset, which is the start offset value of the video file. Unit: seconds. The value must be greater than 0.
        // > - Indicates the position to start reading from, relative to the first frame.
        // > - Valid only for video-on-demand resources or video files.
        shared_ptr<int32_t> offset_ {};
        // The number of times to repeat playback after the playlist finishes. Valid values:
        // - 0 (default): Do not repeat.
        // - -1: Loop indefinitely.
        // - Other positive integers: The number of times to repeat playback after the playlist finishes.
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
        // The source stream URL addresses.
        shared_ptr<vector<string>> sourceUrls_ {};
        // The task start time. Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
        shared_ptr<string> startTime_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The task name.
        shared_ptr<string> taskName_ {};
      };

      virtual bool empty() const override { return this->currentFileIndex_ == nullptr
        && this->currentOffset_ == nullptr && this->taskExitReason_ == nullptr && this->taskExitTime_ == nullptr && this->taskId_ == nullptr && this->taskInfo_ == nullptr
        && this->taskInvalidReason_ == nullptr && this->taskStatus_ == nullptr; };
      // currentFileIndex Field Functions 
      bool hasCurrentFileIndex() const { return this->currentFileIndex_ != nullptr;};
      void deleteCurrentFileIndex() { this->currentFileIndex_ = nullptr;};
      inline int32_t getCurrentFileIndex() const { DARABONBA_PTR_GET_DEFAULT(currentFileIndex_, 0) };
      inline TaskList& setCurrentFileIndex(int32_t currentFileIndex) { DARABONBA_PTR_SET_VALUE(currentFileIndex_, currentFileIndex) };


      // currentOffset Field Functions 
      bool hasCurrentOffset() const { return this->currentOffset_ != nullptr;};
      void deleteCurrentOffset() { this->currentOffset_ = nullptr;};
      inline int32_t getCurrentOffset() const { DARABONBA_PTR_GET_DEFAULT(currentOffset_, 0) };
      inline TaskList& setCurrentOffset(int32_t currentOffset) { DARABONBA_PTR_SET_VALUE(currentOffset_, currentOffset) };


      // taskExitReason Field Functions 
      bool hasTaskExitReason() const { return this->taskExitReason_ != nullptr;};
      void deleteTaskExitReason() { this->taskExitReason_ = nullptr;};
      inline string getTaskExitReason() const { DARABONBA_PTR_GET_DEFAULT(taskExitReason_, "") };
      inline TaskList& setTaskExitReason(string taskExitReason) { DARABONBA_PTR_SET_VALUE(taskExitReason_, taskExitReason) };


      // taskExitTime Field Functions 
      bool hasTaskExitTime() const { return this->taskExitTime_ != nullptr;};
      void deleteTaskExitTime() { this->taskExitTime_ = nullptr;};
      inline int32_t getTaskExitTime() const { DARABONBA_PTR_GET_DEFAULT(taskExitTime_, 0) };
      inline TaskList& setTaskExitTime(int32_t taskExitTime) { DARABONBA_PTR_SET_VALUE(taskExitTime_, taskExitTime) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TaskList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskInfo Field Functions 
      bool hasTaskInfo() const { return this->taskInfo_ != nullptr;};
      void deleteTaskInfo() { this->taskInfo_ = nullptr;};
      inline const TaskList::TaskInfo & getTaskInfo() const { DARABONBA_PTR_GET_CONST(taskInfo_, TaskList::TaskInfo) };
      inline TaskList::TaskInfo getTaskInfo() { DARABONBA_PTR_GET(taskInfo_, TaskList::TaskInfo) };
      inline TaskList& setTaskInfo(const TaskList::TaskInfo & taskInfo) { DARABONBA_PTR_SET_VALUE(taskInfo_, taskInfo) };
      inline TaskList& setTaskInfo(TaskList::TaskInfo && taskInfo) { DARABONBA_PTR_SET_RVALUE(taskInfo_, taskInfo) };


      // taskInvalidReason Field Functions 
      bool hasTaskInvalidReason() const { return this->taskInvalidReason_ != nullptr;};
      void deleteTaskInvalidReason() { this->taskInvalidReason_ = nullptr;};
      inline string getTaskInvalidReason() const { DARABONBA_PTR_GET_DEFAULT(taskInvalidReason_, "") };
      inline TaskList& setTaskInvalidReason(string taskInvalidReason) { DARABONBA_PTR_SET_VALUE(taskInvalidReason_, taskInvalidReason) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline TaskList& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // The currently effective playlist sequence offset.
      shared_ptr<int32_t> currentFileIndex_ {};
      // The currently effective video playback offset.
      shared_ptr<int32_t> currentOffset_ {};
      // The reason why the task exited. Valid values:
      // 
      // - TriggerByUser: Actively ended by the user.
      // - OverEndTime: Exceeded the preset end time.
      // 
      // > Returned only when the task is in the exited state.
      shared_ptr<string> taskExitReason_ {};
      // The task exit time, in Unix seconds timestamp.
      // > Returned only when the task is in the exited state.
      shared_ptr<int32_t> taskExitTime_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task information.
      shared_ptr<TaskList::TaskInfo> taskInfo_ {};
      // The reason why the task stopped running. Valid values:
      // 
      // - PullStreamFailed: Source stream pulling exception. Retrying.
      // - PushStreamFailed: Destination stream pushing exception. Retrying.
      // - UnknownError: Unknown exception.
      // 
      // > Returned only when the task is in the stopped state.
      shared_ptr<string> taskInvalidReason_ {};
      // The current task status. Valid values:
      // - 0: Not started (the start time has not been reached).
      // - 1: Running normally (stream pulling and pushing are normal).
      // - 2: Running abnormally.
      // - 3: Stopped (stream pulling or pushing is abnormal, or the task was actively stopped by calling an operation).
      // - -1: Exited.
      shared_ptr<int32_t> taskStatus_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->taskList_ == nullptr && this->total_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLivePullToPushListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLivePullToPushListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePullToPushListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<DescribeLivePullToPushListResponseBody::TaskList> & getTaskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<DescribeLivePullToPushListResponseBody::TaskList>) };
    inline vector<DescribeLivePullToPushListResponseBody::TaskList> getTaskList() { DARABONBA_PTR_GET(taskList_, vector<DescribeLivePullToPushListResponseBody::TaskList>) };
    inline DescribeLivePullToPushListResponseBody& setTaskList(const vector<DescribeLivePullToPushListResponseBody::TaskList> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeLivePullToPushListResponseBody& setTaskList(vector<DescribeLivePullToPushListResponseBody::TaskList> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLivePullToPushListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of task information.
    shared_ptr<vector<DescribeLivePullToPushListResponseBody::TaskList>> taskList_ {};
    // The total number of query results.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
