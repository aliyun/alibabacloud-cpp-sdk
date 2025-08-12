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
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatNumber, repeatNumber_);
      DARABONBA_PTR_TO_JSON(RetryCount, retryCount_);
      DARABONBA_PTR_TO_JSON(RetryInterval, retryInterval_);
      DARABONBA_PTR_TO_JSON(SourceProtocol, sourceProtocol_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SourceUrls, sourceUrlsShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivePullToPushShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(DstUrl, dstUrl_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FileIndex, fileIndex_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatNumber, repeatNumber_);
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
    virtual bool empty() const override { this->callbackUrl_ != nullptr
        && this->dstUrl_ != nullptr && this->endTime_ != nullptr && this->fileIndex_ != nullptr && this->offset_ != nullptr && this->ownerId_ != nullptr
        && this->region_ != nullptr && this->regionId_ != nullptr && this->repeatNumber_ != nullptr && this->retryCount_ != nullptr && this->retryInterval_ != nullptr
        && this->sourceProtocol_ != nullptr && this->sourceType_ != nullptr && this->sourceUrlsShrink_ != nullptr && this->startTime_ != nullptr && this->taskName_ != nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateLivePullToPushShrinkRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // dstUrl Field Functions 
    bool hasDstUrl() const { return this->dstUrl_ != nullptr;};
    void deleteDstUrl() { this->dstUrl_ = nullptr;};
    inline string dstUrl() const { DARABONBA_PTR_GET_DEFAULT(dstUrl_, "") };
    inline CreateLivePullToPushShrinkRequest& setDstUrl(string dstUrl) { DARABONBA_PTR_SET_VALUE(dstUrl_, dstUrl) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CreateLivePullToPushShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fileIndex Field Functions 
    bool hasFileIndex() const { return this->fileIndex_ != nullptr;};
    void deleteFileIndex() { this->fileIndex_ = nullptr;};
    inline int32_t fileIndex() const { DARABONBA_PTR_GET_DEFAULT(fileIndex_, 0) };
    inline CreateLivePullToPushShrinkRequest& setFileIndex(int32_t fileIndex) { DARABONBA_PTR_SET_VALUE(fileIndex_, fileIndex) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline CreateLivePullToPushShrinkRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLivePullToPushShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateLivePullToPushShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLivePullToPushShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatNumber Field Functions 
    bool hasRepeatNumber() const { return this->repeatNumber_ != nullptr;};
    void deleteRepeatNumber() { this->repeatNumber_ = nullptr;};
    inline int32_t repeatNumber() const { DARABONBA_PTR_GET_DEFAULT(repeatNumber_, 0) };
    inline CreateLivePullToPushShrinkRequest& setRepeatNumber(int32_t repeatNumber) { DARABONBA_PTR_SET_VALUE(repeatNumber_, repeatNumber) };


    // retryCount Field Functions 
    bool hasRetryCount() const { return this->retryCount_ != nullptr;};
    void deleteRetryCount() { this->retryCount_ = nullptr;};
    inline int32_t retryCount() const { DARABONBA_PTR_GET_DEFAULT(retryCount_, 0) };
    inline CreateLivePullToPushShrinkRequest& setRetryCount(int32_t retryCount) { DARABONBA_PTR_SET_VALUE(retryCount_, retryCount) };


    // retryInterval Field Functions 
    bool hasRetryInterval() const { return this->retryInterval_ != nullptr;};
    void deleteRetryInterval() { this->retryInterval_ = nullptr;};
    inline int32_t retryInterval() const { DARABONBA_PTR_GET_DEFAULT(retryInterval_, 0) };
    inline CreateLivePullToPushShrinkRequest& setRetryInterval(int32_t retryInterval) { DARABONBA_PTR_SET_VALUE(retryInterval_, retryInterval) };


    // sourceProtocol Field Functions 
    bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
    void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
    inline string sourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
    inline CreateLivePullToPushShrinkRequest& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateLivePullToPushShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceUrlsShrink Field Functions 
    bool hasSourceUrlsShrink() const { return this->sourceUrlsShrink_ != nullptr;};
    void deleteSourceUrlsShrink() { this->sourceUrlsShrink_ = nullptr;};
    inline string sourceUrlsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceUrlsShrink_, "") };
    inline CreateLivePullToPushShrinkRequest& setSourceUrlsShrink(string sourceUrlsShrink) { DARABONBA_PTR_SET_VALUE(sourceUrlsShrink_, sourceUrlsShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateLivePullToPushShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateLivePullToPushShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The HTTP callback URL. By default, this parameter is left empty.
    // 
    // > 
    // 
    // *   The URL is used to receive callbacks related to the task.
    // 
    // *   The URL can be up to 2,000 characters in length.
    // 
    // *   If you do not specify this parameter, no callbacks are returned for events related to the task.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The destination URL to which the stream is relayed.
    // 
    // > 
    // 
    // *   The supported protocol for the URL is RTMP.
    // 
    // *   The URL can be up to 2,000 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> dstUrl_ = nullptr;
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
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The file index, which specifies the sequence of the file where the playback starts.
    std::shared_ptr<int32_t> fileIndex_ = nullptr;
    // The offset of the position where the system starts to read the video resource. Unit: seconds. Valid values: positive numbers.
    // 
    // > 
    // 
    // *   This parameter indicates an offset from the first frame of the first video resource in the list.
    // 
    // *   This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
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
    // >  This parameter is applicable to only video resources from ApsaraVideo VOD or a third party.
    std::shared_ptr<int32_t> repeatNumber_ = nullptr;
    // The number of retries allowed. Default value: 3.
    std::shared_ptr<int32_t> retryCount_ = nullptr;
    // The retry interval. Unit: seconds. Valid values: [60,300]. Default value: 60.
    std::shared_ptr<int32_t> retryInterval_ = nullptr;
    // The protocol of the source stream.
    // 
    // Valid values:
    // 
    // *   rtmp
    // *   rtsp
    // *   srt
    // *   http-flv
    // *   flv
    // 
    // >  This parameter is required if you set the **SourceType** parameter to live, but does not take effect if you set the SourceType parameter to vod or url.
    std::shared_ptr<string> sourceProtocol_ = nullptr;
    // The type of the source stream. Valid values:
    // 
    // *   live: a live stream
    // *   vod: a list of ApsaraVideo VOD resources
    // *   url: a list of video resources from a third party
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
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
    // This parameter is required.
    std::shared_ptr<string> sourceUrlsShrink_ = nullptr;
    // The start time of the task.
    // 
    // > 
    // 
    // *   Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // *   The time range specified by the StartTime and EndTime parameters cannot exceed seven days.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The name of the task. Default value: "". Fuzzy search for task names is supported.
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
