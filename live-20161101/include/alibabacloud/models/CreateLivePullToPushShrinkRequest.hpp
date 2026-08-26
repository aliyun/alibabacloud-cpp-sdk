// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVEPULLTOPUSHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVEPULLTOPUSHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateLivePullToPushShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivePullToPushShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_TO_JSON(NotifyItemSwitch, notifyItemSwitch_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_TO_JSON(ReqAuth, reqAuth_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(SourceProtocol, sourceProtocol_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrlsShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePullToPushShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_FROM_JSON(NotifyItemSwitch, notifyItemSwitch_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_FROM_JSON(ReqAuth, reqAuth_);
      DARABONBA_PTR_FROM_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_FROM_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_FROM_JSON(SourceProtocol, sourceProtocol_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrlsShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateLivePullToPushShrinkRequest() = default ;
    CreateLivePullToPushShrinkRequest(const CreateLivePullToPushShrinkRequest &) = default ;
    CreateLivePullToPushShrinkRequest(CreateLivePullToPushShrinkRequest &&) = default ;
    CreateLivePullToPushShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivePullToPushShrinkRequest() = default ;
    CreateLivePullToPushShrinkRequest& operator=(const CreateLivePullToPushShrinkRequest &) = default ;
    CreateLivePullToPushShrinkRequest& operator=(CreateLivePullToPushShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && this->callbackUrl_ == nullptr && this->dstUrl_ == nullptr && this->endTime_ == nullptr && this->fileIndex_ == nullptr && this->notifyItemSwitch_ == nullptr
        && this->offset_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr && this->repeatNumber_ == nullptr
        && this->reqAuth_ == nullptr && this->retryCount_ == nullptr && this->retryInterval_ == nullptr && this->sourceProtocol_ == nullptr && this->sourceType_ == nullptr
        && this->sourceUrlsShrink_ == nullptr && this->startTime_ == nullptr && this->taskName_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline CreateLivePullToPushShrinkRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateLivePullToPushShrinkRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // dstUrl Field Functions 
    bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
    void deleteDstUrl() { this->dstUrl_ = nullptr;};
    inline string getDstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
    inline CreateLivePullToPushShrinkRequest& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateLivePullToPushShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileIndex Field Functions 
    bool hasFileIndex() const { return this->fileIndex_ != nullptr;};
    void deleteFileIndex() { this->fileIndex_ = nullptr;};
    inline int32_t getFileIndex() const { DARABONBA_PTR_GET_DEFAULT(fileIndex_, 0) };
    inline CreateLivePullToPushShrinkRequest& setFileIndex(int32_t fileIndex) { DARABONBA_PTR_SET_VALUE(fileIndex_, fileIndex) };


    // notifyItemSwitch Field Functions 
    bool hasNotifyItemSwitch() const { return this->notifyItemSwitch_ != nullptr;};
    void deleteNotifyItemSwitch() { this->notifyItemSwitch_ = nullptr;};
    inline string getNotifyItemSwitch() const { DARABONBA_PTR_GET_DEFAULT(notifyItemSwitch_, "") };
    inline CreateLivePullToPushShrinkRequest& setNotifyItemSwitch(string notifyItemSwitch) { DARABONBA_PTR_SET_VALUE(notifyItemSwitch_, notifyItemSwitch) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline CreateLivePullToPushShrinkRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLivePullToPushShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateLivePullToPushShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLivePullToPushShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNumber Field Functions 
    bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
    void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
    inline int32_t getRepeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
    inline CreateLivePullToPushShrinkRequest& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


    // reqAuth Field Functions 
    bool hasReqAuth() const { return this->reqAuth_ != nullptr;};
    void deleteReqAuth() { this->reqAuth_ = nullptr;};
    inline string getReqAuth() const { DARABONBA_PTR_GET_DEFAULT(reqAuth_, "") };
    inline CreateLivePullToPushShrinkRequest& setReqAuth(string reqAuth) { DARABONBA_PTR_SET_VALUE(reqAuth_, reqAuth) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t getRetryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline CreateLivePullToPushShrinkRequest& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t getRetryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline CreateLivePullToPushShrinkRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // sourceProtocol Field Functions 
    bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
    void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
    inline string getSourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
    inline CreateLivePullToPushShrinkRequest& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateLivePullToPushShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceUrlsShrink Field Functions 
    bool hasSourceUrlsShrink() const { return this->sourceUrlsShrink_ != nullptr;};
    void deleteSourceUrlsShrink() { this->sourceUrlsShrink_ = nullptr;};
    inline string getSourceUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceUrlsShrink_, "") };
    inline CreateLivePullToPushShrinkRequest& setSourceUrlsShrink(string sourceUrlsShrink) { DARABONBA_PTR_SET_VALUE(sourceUrlsShrink_, sourceUrlsShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateLivePullToPushShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateLivePullToPushShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    shared_ptr<string> authKey_ {};
    // HTTP callback URL. Default value: empty.
    // 
    // > - The URL that receives task-related callbacks.
    // > - Maximum length is 2000 characters.
    // > - If this parameter is not specified, no task event callbacks will be sent.
    shared_ptr<string> callbackUrl_ {};
    // Destination URL address for pushing the stream.
    // 
    // > - The rtmp protocol is supported.
    // > - Maximum length is 2000 characters.
    // 
    // This parameter is required.
    shared_ptr<string> dstUrl_ {};
    // Task end time.
    // 
    // > - Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // > - EndTime must be later than StartTime.
    // > - EndTime must be later than the current time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // File index. Starts playback from the nth file.
    shared_ptr<int32_t> fileIndex_ {};
    shared_ptr<string> notifyItemSwitch_ {};
    // Start offset. The offset value from the beginning of the video file. Unit: seconds. Valid values: greater than 0.
    // 
    // > - Indicates the position to start reading from, relative to the first frame (applies to the first video).
    // > - This parameter applies only to VOD or third-party video streams.
    shared_ptr<int32_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies the region where the task is launched. Valid values:
    // 
    // - ap-southeast-1 (Singapore)
    // - ap-southeast-5 (Indonesia)
    // - cn-beijing (Beijing)
    // - cn-shanghai (Shanghai)
    // - cn-shenzhen (Shenzhen)
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
    // Number of times to repeat playback after the initial playback is complete. Valid values:
    // 
    // - 0 (default): no repeat playback.
    // - -1: loop indefinitely.
    // - Other positive integers: number of times to repeat playback after the initial playback is complete.
    // 
    // > This parameter applies only to VOD or third-party video streams.
    shared_ptr<int32_t> repeatNumber_ {};
    shared_ptr<string> reqAuth_ {};
    // Number of retries. Default value: 3.
    shared_ptr<int32_t> retryCount_ {};
    // Retry interval, in seconds. Valid values: [60, 300]. Default value: 60 seconds.
    shared_ptr<int32_t> retryInterval_ {};
    // Source stream protocol name.
    // 
    // Valid values:
    // - rtmp
    // - srt
    // - http-flv
    // - hls
    // > This parameter is **required only when the SourceType parameter is set to live**, and is invalid when the value is vod or url.
    shared_ptr<string> sourceProtocol_ {};
    // Source stream type. Valid values:
    // 
    // - live: live stream.
    // - vod: ApsaraVideo VOD resource.
    // - url: third-party video file resource.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // List of source stream URL addresses.
    // 
    // > - For the live type, only one complete live playback URL is supported.
    // > - For the vod and url types, a maximum of 30 URLs can be specified.
    // > - The live type supports: rtmp, srt, and http-flv protocols.
    // > - For the vod type, specify ApsaraVideo VOD media asset IDs.
    // > - The url type supports: mp4 and http-flv protocols.
    // 
    // This parameter is required.
    shared_ptr<string> sourceUrlsShrink_ {};
    // Task start time.
    // 
    // > - Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC time).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // Task name, used to support fuzzy query. Default value: "".
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
