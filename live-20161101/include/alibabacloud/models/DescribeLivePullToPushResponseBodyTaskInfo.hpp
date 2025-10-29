// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHRESPONSEBODYTASKINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPULLTOPUSHRESPONSEBODYTASKINFO_HPP_
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
  class DescribeLivePullToPushResponseBodyTaskInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePullToPushResponseBodyTaskInfo& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeLivePullToPushResponseBodyTaskInfo& obj) { 
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
    DescribeLivePullToPushResponseBodyTaskInfo() = default ;
    DescribeLivePullToPushResponseBodyTaskInfo(const DescribeLivePullToPushResponseBodyTaskInfo &) = default ;
    DescribeLivePullToPushResponseBodyTaskInfo(DescribeLivePullToPushResponseBodyTaskInfo &&) = default ;
    DescribeLivePullToPushResponseBodyTaskInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePullToPushResponseBodyTaskInfo() = default ;
    DescribeLivePullToPushResponseBodyTaskInfo& operator=(const DescribeLivePullToPushResponseBodyTaskInfo &) = default ;
    DescribeLivePullToPushResponseBodyTaskInfo& operator=(DescribeLivePullToPushResponseBodyTaskInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackURL_ == nullptr
        && return this->dstUrl_ == nullptr && return this->endTime_ == nullptr && return this->fileIndex_ == nullptr && return this->offset_ == nullptr && return this->repeatNumber_ == nullptr
        && return this->retryCount_ == nullptr && return this->retryInterval_ == nullptr && return this->sourceProtocol_ == nullptr && return this->sourceType_ == nullptr && return this->sourceUrls_ == nullptr
        && return this->startTime_ == nullptr && return this->taskId_ == nullptr && return this->taskName_ == nullptr; };
    // callbackURL Field Functions 
    bool hasCallbackURL() const { return this->callbackURL_ != nullptr;};
    void deleteCallbackURL() { this->callbackURL_ = nullptr;};
    inline string callbackURL() const { DARABONBA_PTR_GET_DEFAULT(callbackURL_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setCallbackURL(string callbackURL) { DARABONBA_PTR_SET_VALUE(callbackURL_, callbackURL) };


    // dstUrl Field Functions 
    bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
    void deleteDstUrl() { this->dstUrl_ = nullptr;};
    inline string dstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileIndex Field Functions 
    bool hasFileIndex() const { return this->fileIndex_ != nullptr;};
    void deleteFileIndex() { this->fileIndex_ = nullptr;};
    inline int32_t fileIndex() const { DARABONBA_PTR_GET_DEFAULT(fileIndex_, 0) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setFileIndex(int32_t fileIndex) { DARABONBA_PTR_SET_VALUE(fileIndex_, fileIndex) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // repeatNumber Field Functions 
    bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
    void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
    inline int32_t repeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // sourceProtocol Field Functions 
    bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
    void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
    inline string sourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceUrls Field Functions 
    bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
    void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
    inline const vector<string> & sourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
    inline vector<string> sourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeLivePullToPushResponseBodyTaskInfo& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The HTTP callback URL.
    std::shared_ptr<string> callbackURL_ = nullptr;
    // The destination URL to which the stream is relayed.
    std::shared_ptr<string> dstUrl_ = nullptr;
    // The end time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The file index, which indicates the sequence of the file where the playback starts.
    std::shared_ptr<int32_t> fileIndex_ = nullptr;
    // The offset of the position where the system starts to read the video resource. Unit: seconds. Valid values: positive numbers.
    // 
    // > 
    // 
    // *   This parameter indicates an offset from the first frame.
    // 
    // *   This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
    std::shared_ptr<int32_t> offset_ = nullptr;
    // The number of playbacks after the first playback is complete. Valid values:
    // 
    // *   0 (default): specifies that the video list is played only once.
    // *   \\-1: specifies that the video list is played in loop mode.
    // *   Positive integer: specifies the number of times the video list repeats after the first playback is complete.
    // 
    // >  This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
    std::shared_ptr<int32_t> repeatNumber_ = nullptr;
    // The number of retries allowed.
    std::shared_ptr<int32_t> retryCount_ = nullptr;
    // The retry interval. Unit: seconds.
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    // The protocol of the source stream.
    std::shared_ptr<string> sourceProtocol_ = nullptr;
    // The type of the source stream. Valid values:
    // 
    // *   live: a live stream
    // *   vod: a list of ApsaraVideo VOD resources
    // *   url: a list of video resources from a third party
    std::shared_ptr<string> sourceType_ = nullptr;
    // The source URLs.
    std::shared_ptr<vector<string>> sourceUrls_ = nullptr;
    // The start time of the task. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The task name.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
