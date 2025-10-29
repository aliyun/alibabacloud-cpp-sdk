// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETERLIVEBYPASSDURATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeMeterLiveBypassDurationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMeterLiveBypassDurationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AudioDuration, audioDuration_);
      DARABONBA_PTR_TO_JSON(Single_Audio, singleAudio_);
      DARABONBA_PTR_TO_JSON(Single_Video, singleVideo_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_TO_JSON(V1080Duration, v1080Duration_);
      DARABONBA_PTR_TO_JSON(V480Duration, v480Duration_);
      DARABONBA_PTR_TO_JSON(V720Duration, v720Duration_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMeterLiveBypassDurationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioDuration, audioDuration_);
      DARABONBA_PTR_FROM_JSON(Single_Audio, singleAudio_);
      DARABONBA_PTR_FROM_JSON(Single_Video, singleVideo_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TotalDuration, totalDuration_);
      DARABONBA_PTR_FROM_JSON(V1080Duration, v1080Duration_);
      DARABONBA_PTR_FROM_JSON(V480Duration, v480Duration_);
      DARABONBA_PTR_FROM_JSON(V720Duration, v720Duration_);
    };
    DescribeMeterLiveBypassDurationResponseBodyData() = default ;
    DescribeMeterLiveBypassDurationResponseBodyData(const DescribeMeterLiveBypassDurationResponseBodyData &) = default ;
    DescribeMeterLiveBypassDurationResponseBodyData(DescribeMeterLiveBypassDurationResponseBodyData &&) = default ;
    DescribeMeterLiveBypassDurationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMeterLiveBypassDurationResponseBodyData() = default ;
    DescribeMeterLiveBypassDurationResponseBodyData& operator=(const DescribeMeterLiveBypassDurationResponseBodyData &) = default ;
    DescribeMeterLiveBypassDurationResponseBodyData& operator=(DescribeMeterLiveBypassDurationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioDuration_ == nullptr
        && return this->singleAudio_ == nullptr && return this->singleVideo_ == nullptr && return this->timestamp_ == nullptr && return this->totalDuration_ == nullptr && return this->v1080Duration_ == nullptr
        && return this->v480Duration_ == nullptr && return this->v720Duration_ == nullptr; };
    // audioDuration Field Functions 
    bool hasAudioDuration() const { return this->audioDuration_ != nullptr;};
    void deleteAudioDuration() { this->audioDuration_ = nullptr;};
    inline int64_t audioDuration() const { DARABONBA_PTR_GET_DEFAULT(audioDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setAudioDuration(int64_t audioDuration) { DARABONBA_PTR_SET_VALUE(audioDuration_, audioDuration) };


    // singleAudio Field Functions 
    bool hasSingleAudio() const { return this->singleAudio_ != nullptr;};
    void deleteSingleAudio() { this->singleAudio_ = nullptr;};
    inline int64_t singleAudio() const { DARABONBA_PTR_GET_DEFAULT(singleAudio_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setSingleAudio(int64_t singleAudio) { DARABONBA_PTR_SET_VALUE(singleAudio_, singleAudio) };


    // singleVideo Field Functions 
    bool hasSingleVideo() const { return this->singleVideo_ != nullptr;};
    void deleteSingleVideo() { this->singleVideo_ = nullptr;};
    inline int64_t singleVideo() const { DARABONBA_PTR_GET_DEFAULT(singleVideo_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setSingleVideo(int64_t singleVideo) { DARABONBA_PTR_SET_VALUE(singleVideo_, singleVideo) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // totalDuration Field Functions 
    bool hasTotalDuration() const { return this->totalDuration_ != nullptr;};
    void deleteTotalDuration() { this->totalDuration_ = nullptr;};
    inline int64_t totalDuration() const { DARABONBA_PTR_GET_DEFAULT(totalDuration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setTotalDuration(int64_t totalDuration) { DARABONBA_PTR_SET_VALUE(totalDuration_, totalDuration) };


    // v1080Duration Field Functions 
    bool hasV1080Duration() const { return this->v1080Duration_ != nullptr;};
    void deleteV1080Duration() { this->v1080Duration_ = nullptr;};
    inline int64_t v1080Duration() const { DARABONBA_PTR_GET_DEFAULT(v1080Duration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setV1080Duration(int64_t v1080Duration) { DARABONBA_PTR_SET_VALUE(v1080Duration_, v1080Duration) };


    // v480Duration Field Functions 
    bool hasV480Duration() const { return this->v480Duration_ != nullptr;};
    void deleteV480Duration() { this->v480Duration_ = nullptr;};
    inline int64_t v480Duration() const { DARABONBA_PTR_GET_DEFAULT(v480Duration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setV480Duration(int64_t v480Duration) { DARABONBA_PTR_SET_VALUE(v480Duration_, v480Duration) };


    // v720Duration Field Functions 
    bool hasV720Duration() const { return this->v720Duration_ != nullptr;};
    void deleteV720Duration() { this->v720Duration_ = nullptr;};
    inline int64_t v720Duration() const { DARABONBA_PTR_GET_DEFAULT(v720Duration_, 0L) };
    inline DescribeMeterLiveBypassDurationResponseBodyData& setV720Duration(int64_t v720Duration) { DARABONBA_PTR_SET_VALUE(v720Duration_, v720Duration) };


  protected:
    // The audio-only duration. Audio-only is a basic specification. Unit: minutes.
    std::shared_ptr<int64_t> audioDuration_ = nullptr;
    // The single-stream relay duration for audio. Unit: minutes.
    std::shared_ptr<int64_t> singleAudio_ = nullptr;
    // The single-stream relay duration for video. Unit: minutes.
    std::shared_ptr<int64_t> singleVideo_ = nullptr;
    // The timestamp of the data returned.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The duration. Unit: minutes.
    std::shared_ptr<int64_t> totalDuration_ = nullptr;
    // The Full HD duration. The video resolution is 1920 × 1080 or lower. Unit: minutes.
    std::shared_ptr<int64_t> v1080Duration_ = nullptr;
    // The SD duration. The video resolution is 640 × 480 or lower. Unit: minutes.
    std::shared_ptr<int64_t> v480Duration_ = nullptr;
    // The HD duration. The video resolution is 1280 × 720 or lower. Unit: minutes.
    std::shared_ptr<int64_t> v720Duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
