// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SubmitSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(SnapshotTemplateId, snapshotTemplateId_);
      DARABONBA_PTR_TO_JSON(SpecifiedOffsetTime, specifiedOffsetTime_);
      DARABONBA_PTR_TO_JSON(SpecifiedOffsetTimes, specifiedOffsetTimes_);
      DARABONBA_PTR_TO_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(SnapshotTemplateId, snapshotTemplateId_);
      DARABONBA_PTR_FROM_JSON(SpecifiedOffsetTime, specifiedOffsetTime_);
      DARABONBA_PTR_FROM_JSON(SpecifiedOffsetTimes, specifiedOffsetTimes_);
      DARABONBA_PTR_FROM_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest(SubmitSnapshotJobRequest &&) = default ;
    SubmitSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest& operator=(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest& operator=(SubmitSnapshotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->height_ != nullptr && this->interval_ != nullptr && this->snapshotTemplateId_ != nullptr && this->specifiedOffsetTime_ != nullptr && this->specifiedOffsetTimes_ != nullptr
        && this->spriteSnapshotConfig_ != nullptr && this->userData_ != nullptr && this->videoId_ != nullptr && this->width_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline SubmitSnapshotJobRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitSnapshotJobRequest& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline SubmitSnapshotJobRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // snapshotTemplateId Field Functions 
    bool hasSnapshotTemplateId() const { return this->snapshotTemplateId_ != nullptr;};
    void deleteSnapshotTemplateId() { this->snapshotTemplateId_ = nullptr;};
    inline string snapshotTemplateId() const { DARABONBA_PTR_GET_DEFAULT(snapshotTemplateId_, "") };
    inline SubmitSnapshotJobRequest& setSnapshotTemplateId(string snapshotTemplateId) { DARABONBA_PTR_SET_VALUE(snapshotTemplateId_, snapshotTemplateId) };


    // specifiedOffsetTime Field Functions 
    bool hasSpecifiedOffsetTime() const { return this->specifiedOffsetTime_ != nullptr;};
    void deleteSpecifiedOffsetTime() { this->specifiedOffsetTime_ = nullptr;};
    inline int64_t specifiedOffsetTime() const { DARABONBA_PTR_GET_DEFAULT(specifiedOffsetTime_, 0L) };
    inline SubmitSnapshotJobRequest& setSpecifiedOffsetTime(int64_t specifiedOffsetTime) { DARABONBA_PTR_SET_VALUE(specifiedOffsetTime_, specifiedOffsetTime) };


    // specifiedOffsetTimes Field Functions 
    bool hasSpecifiedOffsetTimes() const { return this->specifiedOffsetTimes_ != nullptr;};
    void deleteSpecifiedOffsetTimes() { this->specifiedOffsetTimes_ = nullptr;};
    inline const vector<int64_t> & specifiedOffsetTimes() const { DARABONBA_PTR_GET_CONST(specifiedOffsetTimes_, vector<int64_t>) };
    inline vector<int64_t> specifiedOffsetTimes() { DARABONBA_PTR_GET(specifiedOffsetTimes_, vector<int64_t>) };
    inline SubmitSnapshotJobRequest& setSpecifiedOffsetTimes(const vector<int64_t> & specifiedOffsetTimes) { DARABONBA_PTR_SET_VALUE(specifiedOffsetTimes_, specifiedOffsetTimes) };
    inline SubmitSnapshotJobRequest& setSpecifiedOffsetTimes(vector<int64_t> && specifiedOffsetTimes) { DARABONBA_PTR_SET_RVALUE(specifiedOffsetTimes_, specifiedOffsetTimes) };


    // spriteSnapshotConfig Field Functions 
    bool hasSpriteSnapshotConfig() const { return this->spriteSnapshotConfig_ != nullptr;};
    void deleteSpriteSnapshotConfig() { this->spriteSnapshotConfig_ = nullptr;};
    inline string spriteSnapshotConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteSnapshotConfig_, "") };
    inline SubmitSnapshotJobRequest& setSpriteSnapshotConfig(string spriteSnapshotConfig) { DARABONBA_PTR_SET_VALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitSnapshotJobRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitSnapshotJobRequest& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The maximum number of snapshots. Default value: **1**.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The height of each snapshot. Valid values: `[8,4096]`. By default, the height of the video source is used. Unit: pixels.
    std::shared_ptr<string> height_ = nullptr;
    // The snapshot interval. The value must be **greater than or equal to 0**.
    // 
    // *   Unit: seconds.
    // *   Default value: **1**.
    // *   If you set this parameter to **0**, snapshots are captured at even intervals based on the video duration divided by the value of the Count parameter.
    std::shared_ptr<int64_t> interval_ = nullptr;
    // The ID of the snapshot template.
    // 
    // *   We recommend that you create a snapshot template before you specify the template ID. For more information about how to create a snapshot template, see [AddVodTemplate](https://help.aliyun.com/document_detail/99406.html).
    // *   If you set the SnapshotTemplateId parameter, all the other request parameters except the Action and VideoId parameters are ignored.
    std::shared_ptr<string> snapshotTemplateId_ = nullptr;
    // The point in time when the first snapshot is captured.
    // 
    // *   Unit: milliseconds.
    // *   Default value: **0**.
    std::shared_ptr<int64_t> specifiedOffsetTime_ = nullptr;
    // The playback positions at which you want to capture snapshots. Unit: milliseconds. You can specify up to 30 playback positions in a request.
    std::shared_ptr<vector<int64_t>> specifiedOffsetTimes_ = nullptr;
    // The sprite snapshot configuration. If you set this parameter, sprite snapshots are generated. For more information, see [SpriteSnapshotConfig](https://help.aliyun.com/document_detail/86952.html).
    std::shared_ptr<string> spriteSnapshotConfig_ = nullptr;
    // The custom configurations including the configuration of transparent data transmission and callback configurations. The value must be a JSON string. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // >  To use the message callback feature, you must specify an HTTP callback URL and the callback events in the ApsaraVideo VOD console. Otherwise, the callback settings do not take effect.
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the video. You can use one of the following methods to obtain the ID:
    // 
    // *   After you upload a video in the ApsaraVideo VOD console, you can log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the ID of the video.
    // *   Obtain the video ID from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you called to obtain the upload URL and credential.
    // *   Obtain the video ID from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you called to query media information after the audio or video file is uploaded.
    std::shared_ptr<string> videoId_ = nullptr;
    // The width of each snapshot. Valid values: `[8,4096]`. By default, the width of the video source is used. Unit: pixels.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
