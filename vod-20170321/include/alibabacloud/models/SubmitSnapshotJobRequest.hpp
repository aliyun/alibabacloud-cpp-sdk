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
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
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
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
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
    virtual bool empty() const override { return this->count_ == nullptr
        && this->height_ == nullptr && this->interval_ == nullptr && this->referenceId_ == nullptr && this->snapshotTemplateId_ == nullptr && this->specifiedOffsetTime_ == nullptr
        && this->specifiedOffsetTimes_ == nullptr && this->spriteSnapshotConfig_ == nullptr && this->userData_ == nullptr && this->videoId_ == nullptr && this->width_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline SubmitSnapshotJobRequest& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitSnapshotJobRequest& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
    inline SubmitSnapshotJobRequest& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline SubmitSnapshotJobRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // snapshotTemplateId Field Functions 
    bool hasSnapshotTemplateId() const { return this->snapshotTemplateId_ != nullptr;};
    void deleteSnapshotTemplateId() { this->snapshotTemplateId_ = nullptr;};
    inline string getSnapshotTemplateId() const { DARABONBA_PTR_GET_DEFAULT(snapshotTemplateId_, "") };
    inline SubmitSnapshotJobRequest& setSnapshotTemplateId(string snapshotTemplateId) { DARABONBA_PTR_SET_VALUE(snapshotTemplateId_, snapshotTemplateId) };


    // specifiedOffsetTime Field Functions 
    bool hasSpecifiedOffsetTime() const { return this->specifiedOffsetTime_ != nullptr;};
    void deleteSpecifiedOffsetTime() { this->specifiedOffsetTime_ = nullptr;};
    inline int64_t getSpecifiedOffsetTime() const { DARABONBA_PTR_GET_DEFAULT(specifiedOffsetTime_, 0L) };
    inline SubmitSnapshotJobRequest& setSpecifiedOffsetTime(int64_t specifiedOffsetTime) { DARABONBA_PTR_SET_VALUE(specifiedOffsetTime_, specifiedOffsetTime) };


    // specifiedOffsetTimes Field Functions 
    bool hasSpecifiedOffsetTimes() const { return this->specifiedOffsetTimes_ != nullptr;};
    void deleteSpecifiedOffsetTimes() { this->specifiedOffsetTimes_ = nullptr;};
    inline const vector<int64_t> & getSpecifiedOffsetTimes() const { DARABONBA_PTR_GET_CONST(specifiedOffsetTimes_, vector<int64_t>) };
    inline vector<int64_t> getSpecifiedOffsetTimes() { DARABONBA_PTR_GET(specifiedOffsetTimes_, vector<int64_t>) };
    inline SubmitSnapshotJobRequest& setSpecifiedOffsetTimes(const vector<int64_t> & specifiedOffsetTimes) { DARABONBA_PTR_SET_VALUE(specifiedOffsetTimes_, specifiedOffsetTimes) };
    inline SubmitSnapshotJobRequest& setSpecifiedOffsetTimes(vector<int64_t> && specifiedOffsetTimes) { DARABONBA_PTR_SET_RVALUE(specifiedOffsetTimes_, specifiedOffsetTimes) };


    // spriteSnapshotConfig Field Functions 
    bool hasSpriteSnapshotConfig() const { return this->spriteSnapshotConfig_ != nullptr;};
    void deleteSpriteSnapshotConfig() { this->spriteSnapshotConfig_ = nullptr;};
    inline string getSpriteSnapshotConfig() const { DARABONBA_PTR_GET_DEFAULT(spriteSnapshotConfig_, "") };
    inline SubmitSnapshotJobRequest& setSpriteSnapshotConfig(string spriteSnapshotConfig) { DARABONBA_PTR_SET_VALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline SubmitSnapshotJobRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitSnapshotJobRequest& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The maximum number of snapshots. Default value: **1**.
    shared_ptr<int64_t> count_ {};
    // The snapshot height. Valid values: `[8,4096]`. Default value: the source video height. Unit: px.
    shared_ptr<string> height_ {};
    // The snapshot interval. The value must be **greater than or equal to 0**.
    // - Unit: seconds.
    // - Default value: **1**.
    // - If Interval is set to **0**, snapshots are evenly captured based on the value of Count and the video duration.
    shared_ptr<int64_t> interval_ {};
    // The custom ID. Only lowercase letters, uppercase letters, digits, hyphens, and underscores are supported. Length: 6 to 64 characters. The value must be unique at the user level.
    shared_ptr<string> referenceId_ {};
    // The snapshot template ID.
    // - We recommend that you create a snapshot template first and then pass the snapshot template ID. For more information about how to create a snapshot template, see [Add a snapshot template](https://help.aliyun.com/document_detail/99406.html).
    // - If you pass the snapshot template ID, all request parameters except Action and VideoId are ignored.
    shared_ptr<string> snapshotTemplateId_ {};
    // The start time for the snapshot.
    // 
    // - Unit: milliseconds.
    // - Default value: **0**.
    shared_ptr<int64_t> specifiedOffsetTime_ {};
    // The points in time at which snapshots are captured. Unit: milliseconds. You can specify up to 30 points in time at a time.
    shared_ptr<vector<int64_t>> specifiedOffsetTimes_ {};
    // The sprite configuration. If this parameter is not empty, a sprite is generated. For more information about the parameter structure, see [SpriteSnapshotConfig](https://help.aliyun.com/document_detail/86952.html).
    shared_ptr<string> spriteSnapshotConfig_ {};
    // The custom settings. Only JSON strings are supported. You can use this parameter to pass through custom data and specify callback URL settings. For more information about the parameter structure, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    // 
    // > To use the message callback in this parameter, configure the HTTP callback URL and select the corresponding callback event types in the console. Otherwise, the callback settings do not take effect.
    shared_ptr<string> userData_ {};
    // The video ID. You can obtain the video ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the video ID.
    // - Obtain the video ID from the value of the VideoId response parameter when you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential.
    // - After the video is uploaded, call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the video ID, which is the value of the VideoId response parameter.
    shared_ptr<string> videoId_ {};
    // The snapshot width. Valid values: `[8,4096]`. Default value: the source video width. Unit: px.
    shared_ptr<string> width_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
