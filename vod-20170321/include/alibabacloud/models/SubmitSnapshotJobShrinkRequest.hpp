// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitSnapshotJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(SnapshotTemplateId, snapshotTemplateId_);
      DARABONBA_PTR_TO_JSON(SpecifiedOffsetTime, specifiedOffsetTime_);
      DARABONBA_PTR_TO_JSON(SpecifiedOffsetTimes, specifiedOffsetTimesShrink_);
      DARABONBA_PTR_TO_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_FROM_JSON(SnapshotTemplateId, snapshotTemplateId_);
      DARABONBA_PTR_FROM_JSON(SpecifiedOffsetTime, specifiedOffsetTime_);
      DARABONBA_PTR_FROM_JSON(SpecifiedOffsetTimes, specifiedOffsetTimesShrink_);
      DARABONBA_PTR_FROM_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitSnapshotJobShrinkRequest() = default ;
    SubmitSnapshotJobShrinkRequest(const SubmitSnapshotJobShrinkRequest &) = default ;
    SubmitSnapshotJobShrinkRequest(SubmitSnapshotJobShrinkRequest &&) = default ;
    SubmitSnapshotJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobShrinkRequest() = default ;
    SubmitSnapshotJobShrinkRequest& operator=(const SubmitSnapshotJobShrinkRequest &) = default ;
    SubmitSnapshotJobShrinkRequest& operator=(SubmitSnapshotJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && this->height_ == nullptr && this->interval_ == nullptr && this->referenceId_ == nullptr && this->snapshotTemplateId_ == nullptr && this->specifiedOffsetTime_ == nullptr
        && this->specifiedOffsetTimesShrink_ == nullptr && this->spriteSnapshotConfig_ == nullptr && this->userData_ == nullptr && this->videoId_ == nullptr && this->width_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline SubmitSnapshotJobShrinkRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitSnapshotJobShrinkRequest& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline SubmitSnapshotJobShrinkRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline SubmitSnapshotJobShrinkRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // snapshotTemplateId Field Functions 
    bool hasSnapshotTemplateId() const { return this->snapshotTemplateId_ != nullptr;};
    void deleteSnapshotTemplateId() { this->snapshotTemplateId_ = nullptr;};
    inline string getSnapshotTemplateId() const { DARABONBA_PTR_GET_DEFAULT(snapshotTemplateId_, "") };
    inline SubmitSnapshotJobShrinkRequest& setSnapshotTemplateId(string snapshotTemplateId) { DARABONBA_PTR_SET_VALUE(snapshotTemplateId_, snapshotTemplateId) };


    // specifiedOffsetTime Field Functions 
    bool hasSpecifiedOffsetTime() const { return this->specifiedOffsetTime_ != nullptr;};
    void deleteSpecifiedOffsetTime() { this->specifiedOffsetTime_ = nullptr;};
    inline int64_t getSpecifiedOffsetTime() const { DARABONBA_PTR_GET_DEFAULT(specifiedOffsetTime_, 0L) };
    inline SubmitSnapshotJobShrinkRequest& setSpecifiedOffsetTime(int64_t specifiedOffsetTime) { DARABONBA_PTR_SET_VALUE(specifiedOffsetTime_, specifiedOffsetTime) };


    // specifiedOffsetTimesShrink Field Functions 
    bool hasSpecifiedOffsetTimesShrink() const { return this->specifiedOffsetTimesShrink_ != nullptr;};
    void deleteSpecifiedOffsetTimesShrink() { this->specifiedOffsetTimesShrink_ = nullptr;};
    inline string getSpecifiedOffsetTimesShrink() const { DARABONBA_PTR_GET_DEFAULT(specifiedOffsetTimesShrink_, "") };
    inline SubmitSnapshotJobShrinkRequest& setSpecifiedOffsetTimesShrink(string specifiedOffsetTimesShrink) { DARABONBA_PTR_SET_VALUE(specifiedOffsetTimesShrink_, specifiedOffsetTimesShrink) };


    // spriteSnapshotConfig Field Functions 
    bool hasSpriteSnapshotConfig() const { return this->spriteSnapshotConfig_ != nullptr;};
    void deleteSpriteSnapshotConfig() { this->spriteSnapshotConfig_ = nullptr;};
    inline string getSpriteSnapshotConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteSnapshotConfig_, "") };
    inline SubmitSnapshotJobShrinkRequest& setSpriteSnapshotConfig(string spriteSnapshotConfig) { DARABONBA_PTR_SET_VALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitSnapshotJobShrinkRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitSnapshotJobShrinkRequest& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The maximum number of snapshots. Default value: **1**.
    shared_ptr<int64_t> count_ {};
    // The height of each snapshot. Valid values: `[8,4096]`. By default, the height of the video source is used. Unit: pixels.
    shared_ptr<string> height_ {};
    // The snapshot interval. The value must be **greater than or equal to 0**.
    // 
    // *   Unit: seconds.
    // *   Default value: **1**.
    // *   If you set this parameter to **0**, snapshots are captured at even intervals based on the video duration divided by the value of the Count parameter.
    shared_ptr<int64_t> interval_ {};
    shared_ptr<string> referenceId_ {};
    // The ID of the snapshot template.
    // 
    // *   We recommend that you create a snapshot template before you specify the template ID. For more information about how to create a snapshot template, see [AddVodTemplate](https://help.aliyun.com/document_detail/99406.html).
    // *   If you set the SnapshotTemplateId parameter, all the other request parameters except the Action and VideoId parameters are ignored.
    shared_ptr<string> snapshotTemplateId_ {};
    // The point in time when the first snapshot is captured.
    // 
    // *   Unit: milliseconds.
    // *   Default value: **0**.
    shared_ptr<int64_t> specifiedOffsetTime_ {};
    // The playback positions at which you want to capture snapshots. Unit: milliseconds. You can specify up to 30 playback positions in a request.
    shared_ptr<string> specifiedOffsetTimesShrink_ {};
    // The sprite snapshot configuration. If you set this parameter, sprite snapshots are generated. For more information, see [SpriteSnapshotConfig](https://help.aliyun.com/document_detail/86952.html).
    shared_ptr<string> spriteSnapshotConfig_ {};
    // The custom configurations including the configuration of transparent data transmission and callback configurations. The value must be a JSON string. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // >  To use the message callback feature, you must specify an HTTP callback URL and the callback events in the ApsaraVideo VOD console. Otherwise, the callback settings do not take effect.
    shared_ptr<string> userData_ {};
    // The ID of the video. You can use one of the following methods to obtain the ID:
    // 
    // *   After you upload a video in the ApsaraVideo VOD console, you can log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the ID of the video.
    // *   Obtain the video ID from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you called to obtain the upload URL and credential.
    // *   Obtain the video ID from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you called to query media information after the audio or video file is uploaded.
    shared_ptr<string> videoId_ {};
    // The width of each snapshot. Valid values: `[8,4096]`. By default, the width of the video source is used. Unit: pixels.
    shared_ptr<string> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
