// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPULLTOPUSHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPULLTOPUSHREQUEST_HPP_
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
  class UpdateLivePullToPushRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePullToPushRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_TO_JSON(NotifyItemSwitch, notifyItemSwitch_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_TO_JSON(ReqAuth, reqAuth_);
      DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePullToPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_FROM_JSON(NotifyItemSwitch, notifyItemSwitch_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_FROM_JSON(ReqAuth, reqAuth_);
      DARABONBA_PTR_FROM_JSON(SourceUrls, sourceUrls_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateLivePullToPushRequest() = default ;
    UpdateLivePullToPushRequest(const UpdateLivePullToPushRequest &) = default ;
    UpdateLivePullToPushRequest(UpdateLivePullToPushRequest &&) = default ;
    UpdateLivePullToPushRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePullToPushRequest() = default ;
    UpdateLivePullToPushRequest& operator=(const UpdateLivePullToPushRequest &) = default ;
    UpdateLivePullToPushRequest& operator=(UpdateLivePullToPushRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authKey_ == nullptr
        && this->callbackUrl_ == nullptr && this->endTime_ == nullptr && this->fileIndex_ == nullptr && this->notifyItemSwitch_ == nullptr && this->offset_ == nullptr
        && this->ownerId_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr && this->repeatNumber_ == nullptr && this->reqAuth_ == nullptr
        && this->sourceUrls_ == nullptr && this->startTime_ == nullptr && this->taskId_ == nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline UpdateLivePullToPushRequest& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline UpdateLivePullToPushRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateLivePullToPushRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileIndex Field Functions 
    bool hasFileIndex() const { return this->fileIndex_ != nullptr;};
    void deleteFileIndex() { this->fileIndex_ = nullptr;};
    inline int32_t getFileIndex() const { DARABONBA_PTR_GET_DEFAULT(fileIndex_, 0) };
    inline UpdateLivePullToPushRequest& setFileIndex(int32_t fileIndex) { DARABONBA_PTR_SET_VALUE(fileIndex_, fileIndex) };


    // notifyItemSwitch Field Functions 
    bool hasNotifyItemSwitch() const { return this->notifyItemSwitch_ != nullptr;};
    void deleteNotifyItemSwitch() { this->notifyItemSwitch_ = nullptr;};
    inline string getNotifyItemSwitch() const { DARABONBA_PTR_GET_DEFAULT(notifyItemSwitch_, "") };
    inline UpdateLivePullToPushRequest& setNotifyItemSwitch(string notifyItemSwitch) { DARABONBA_PTR_SET_VALUE(notifyItemSwitch_, notifyItemSwitch) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline UpdateLivePullToPushRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLivePullToPushRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateLivePullToPushRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLivePullToPushRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNumber Field Functions 
    bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
    void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
    inline int32_t getRepeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
    inline UpdateLivePullToPushRequest& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


    // reqAuth Field Functions 
    bool hasReqAuth() const { return this->reqAuth_ != nullptr;};
    void deleteReqAuth() { this->reqAuth_ = nullptr;};
    inline string getReqAuth() const { DARABONBA_PTR_GET_DEFAULT(reqAuth_, "") };
    inline UpdateLivePullToPushRequest& setReqAuth(string reqAuth) { DARABONBA_PTR_SET_VALUE(reqAuth_, reqAuth) };


    // sourceUrls Field Functions 
    bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
    void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
    inline const vector<string> & getSourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
    inline vector<string> getSourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
    inline UpdateLivePullToPushRequest& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
    inline UpdateLivePullToPushRequest& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateLivePullToPushRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateLivePullToPushRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> authKey_ {};
    // The callback URL. Default value: empty.
    // > - The URL that receives task-related callbacks.
    // > - Maximum length: 2000 characters.
    // > - If this parameter is not specified, task events are not sent as callbacks.
    // > - The update takes effect only when the next event is triggered.
    shared_ptr<string> callbackUrl_ {};
    // The end time of the task.
    // > - Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // > - EndTime must be later than StartTime.
    // > - EndTime must be later than the current time.
    // > - If the task has ended, the update does not take effect.
    shared_ptr<string> endTime_ {};
    // The video index. Default value: 0.
    // > The update must be performed when the task is stopped and takes effect after the task is restarted.
    shared_ptr<int32_t> fileIndex_ {};
    shared_ptr<string> notifyItemSwitch_ {};
    // The start offset of the video file, in seconds. Valid values: greater than 0.
    // > - Specifies the position to start reading from, relative to the first frame.
    // > - This parameter applies only to video-on-demand or third-party video streams.
    // > - This parameter takes effect only when the first video in the playlist is played.
    // > - The update must be performed when the task is stopped and takes effect after the task is restarted.
    shared_ptr<int32_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region where the task is started. Valid values:
    // 
    // - ap-southeast-1 (Singapore)
    // - ap-southeast-5 (Indonesia)
    // - cn-beijing (Beijing)
    // - cn-shanghai (Shanghai)
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The number of times playback repeats after the playlist finishes. Valid values:
    // 
    // - 0 (default): No repeat playback.
    // - -1: Loops indefinitely.
    // - Other positive integers: The number of times playback repeats after the playlist finishes.
    // 
    // > - This parameter applies only to video-on-demand or third-party video streams.
    // > - The update takes effect immediately.
    shared_ptr<int32_t> repeatNumber_ {};
    shared_ptr<string> reqAuth_ {};
    // The list of source stream URLs.
    // 
    // > - For the live type, only one complete live streaming URL is supported.
    // > - For the vod and url types, up to 30 URLs can be specified.
    // > - The live type supports RTMP, SRT, and HTTP-FLV protocols.
    // > - For the vod type, specify ApsaraVideo VOD media asset IDs.
    // > - The url type supports MP4 and HTTP-FLV protocols.
    // > - For live source streams, the update takes effect immediately. For video file source streams, the update takes effect after the currently playing video ends, and playback restarts from the beginning of the updated video list.
    // > - The update must be performed when the task is stopped and takes effect after the task is restarted.
    shared_ptr<vector<string>> sourceUrls_ {};
    // The start time of the task.
    // > - Format: <i>yyyy-MM-dd</i>T<i>HH:mm:ss</i>Z (UTC).
    // > - If the task has already started running, the update does not take effect.
    shared_ptr<string> startTime_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
