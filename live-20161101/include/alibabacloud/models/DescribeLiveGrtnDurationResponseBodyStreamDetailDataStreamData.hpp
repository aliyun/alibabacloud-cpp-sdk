// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONRESPONSEBODYSTREAMDETAILDATASTREAMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEGRTNDURATIONRESPONSEBODYSTREAMDETAILDATASTREAMDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(MediaProfile, mediaProfile_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(MediaProfile, mediaProfile_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData() = default ;
    DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData(const DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData &) = default ;
    DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData(DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData &&) = default ;
    DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData() = default ;
    DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& operator=(const DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData &) = default ;
    DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& operator=(DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->duration_ != nullptr && this->mediaProfile_ != nullptr && this->mediaType_ != nullptr && this->timeStamp_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // mediaProfile Field Functions 
    bool hasMediaProfile() const { return this->mediaProfile_ != nullptr;};
    void deleteMediaProfile() { this->mediaProfile_ = nullptr;};
    inline string mediaProfile() const { DARABONBA_PTR_GET_DEFAULT(mediaProfile_, "") };
    inline DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& setMediaProfile(string mediaProfile) { DARABONBA_PTR_SET_VALUE(mediaProfile_, mediaProfile) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string mediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveGrtnDurationResponseBodyStreamDetailDataStreamData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The co-streaming duration. Unit: minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The media specification. Valid values:
    // 
    // *   0: audio-only. This is a basic specification.
    // *   480P: standard definition (SD). The video resolution is 640 × 480 or lower.
    // *   720P: high definition (HD). The video resolution is 1280 × 720 or lower.
    // *   1080P: full HD. The video resolution is 1920 × 1080 or lower.
    std::shared_ptr<string> mediaProfile_ = nullptr;
    // The media type. Valid values:
    // 
    // *   audio
    // *   video
    std::shared_ptr<string> mediaType_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
