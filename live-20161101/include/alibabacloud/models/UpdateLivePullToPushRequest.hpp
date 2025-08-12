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
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrls_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePullToPushRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
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
    virtual bool empty() const override { this->callbackUrl_ != nullptr
        && this->endTime_ != nullptr && this->fileIndex_ != nullptr && this->offset_ != nullptr && this->ownerId_ != nullptr && this->region_ != nullptr
        && this->regionId_ != nullptr && this->repeatNumber_ != nullptr && this->sourceUrls_ != nullptr && this->startTime_ != nullptr && this->taskId_ != nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline UpdateLivePullToPushRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateLivePullToPushRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileIndex Field Functions 
    bool hasFileIndex() const { return this->fileIndex_ != nullptr;};
    void deleteFileIndex() { this->fileIndex_ = nullptr;};
    inline int32_t fileIndex() const { DARABONBA_PTR_GET_DEFAULT(fileIndex_, 0) };
    inline UpdateLivePullToPushRequest& setFileIndex(int32_t fileIndex) { DARABONBA_PTR_SET_VALUE(fileIndex_, fileIndex) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline UpdateLivePullToPushRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateLivePullToPushRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline UpdateLivePullToPushRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLivePullToPushRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNumber Field Functions 
    bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
    void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
    inline int32_t repeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
    inline UpdateLivePullToPushRequest& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


    // sourceUrls Field Functions 
    bool hasSourceUrls() const { return this->sourceUrls_ != nullptr;};
    void deleteSourceUrls() { this->sourceUrls_ = nullptr;};
    inline const vector<string> & sourceUrls() const { DARABONBA_PTR_GET_CONST(sourceUrls_, vector<string>) };
    inline vector<string> sourceUrls() { DARABONBA_PTR_GET(sourceUrls_, vector<string>) };
    inline UpdateLivePullToPushRequest& setSourceUrls(const vector<string> & sourceUrls) { DARABONBA_PTR_SET_VALUE(sourceUrls_, sourceUrls) };
    inline UpdateLivePullToPushRequest& setSourceUrls(vector<string> && sourceUrls) { DARABONBA_PTR_SET_RVALUE(sourceUrls_, sourceUrls) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateLivePullToPushRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateLivePullToPushRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The callback URL. By default, this parameter is left empty.
    // 
    // > 
    // 
    // *   The URL is used to receive callbacks related to the task.
    // 
    // *   The URL can be up to 2,000 characters in length.
    // 
    // *   If you do not specify this parameter, no callbacks are returned for events related to the task.
    // 
    // *   The update takes effect for subsequent events that occur.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The end time of the task.
    // 
    // > 
    // 
    // *   Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // *   The time range specified by the StartTime and EndTime parameters cannot exceed seven days.
    // 
    // *   The end time must be later than the start time.
    // 
    // *   The end time must be later than the current time.
    // 
    // *   If the task has ended, the update does not take effect.
    std::shared_ptr<string> endTime_ = nullptr;
    // The file index. Default value: 0.
    // 
    // >  You can modify this parameter only if the task is stopped. The update takes effect after you restart the task.
    std::shared_ptr<int32_t> fileIndex_ = nullptr;
    // The offset of the position where the system starts to read the video resource. Unit: seconds. Valid values: positive numbers.
    // 
    // > 
    // 
    // *   This parameter indicates an offset from the first frame.
    // 
    // *   This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
    // 
    // *   The update takes effect only for the first video in a video list.
    // 
    // *   You can modify this parameter only if the task is stopped. The update takes effect immediately.
    std::shared_ptr<int32_t> offset_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region where the task is started. Valid values:
    // 
    // *   ap-southeast-1: Singapore
    // *   ap-southeast-5: Indonesia (Jakarta)
    // *   cn-beijing: China (Beijing)
    // *   cn-shanghai: China (Shanghai)
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of playbacks after the first playback is complete. Valid values:
    // 
    // *   0 (default): specifies that the video list is played only once.
    // *   \\-1: specifies that the video list is played in loop mode.
    // *   Positive integer: specifies the number of times the video list repeats after the first playback is complete.
    // 
    // > 
    // 
    // *   This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
    // 
    // *   The update can take effect immediately.
    std::shared_ptr<int32_t> repeatNumber_ = nullptr;
    // The source URLs.
    // 
    // > 
    // 
    // *   If SourceType is set to live, you can specify only one streaming URL.
    // 
    // *   If SourceType is set to vod or url, you can specify up to 30 IDs or URLs.
    // 
    // *   If SourceType is set to live, the supported protocols for URLs are Real-Time Messaging Protocol (RTMP), Real-Time Streaming Protocol (RTSP), Secure Reliable Transport Protocol (SRT), and HTTP-FLV.
    // 
    // *   If SourceType is set to vod, specify the IDs of media assets from ApsaraVideo VOD.
    // 
    // *   If SourceType is set to url, the supported protocols for URLs are MP4 and HTTP-FLV.
    // 
    // *   If the source is a live stream, the update takes effect immediately. If the source is a list of video resources from ApsaraVideo VOD or a third party, the update does not take effect until the playback of the current video ends. After the update takes effect, the video list starts to play from the beginning.
    // 
    // *   You can modify this parameter only if the task is stopped. The update takes effect immediately.
    std::shared_ptr<vector<string>> sourceUrls_ = nullptr;
    // The start time of the task.
    // 
    // > 
    // 
    // *   Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // *   The time range specified by the StartTime and EndTime parameters cannot exceed seven days.
    // 
    // *   If the task has already started, the update does not take effect.
    std::shared_ptr<string> startTime_ = nullptr;
    // The task ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
