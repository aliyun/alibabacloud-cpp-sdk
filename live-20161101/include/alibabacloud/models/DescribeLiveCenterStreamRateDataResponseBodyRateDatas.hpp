// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVECENTERSTREAMRATEDATARESPONSEBODYRATEDATAS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVECENTERSTREAMRATEDATARESPONSEBODYRATEDATAS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveCenterStreamRateDataResponseBodyRateDatas : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveCenterStreamRateDataResponseBodyRateDatas& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFps, audioFps_);
      DARABONBA_PTR_TO_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(VideoFps, videoFps_);
      DARABONBA_PTR_TO_JSON(VideoRate, videoRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveCenterStreamRateDataResponseBodyRateDatas& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFps, audioFps_);
      DARABONBA_PTR_FROM_JSON(AudioRate, audioRate_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(VideoFps, videoFps_);
      DARABONBA_PTR_FROM_JSON(VideoRate, videoRate_);
    };
    DescribeLiveCenterStreamRateDataResponseBodyRateDatas() = default ;
    DescribeLiveCenterStreamRateDataResponseBodyRateDatas(const DescribeLiveCenterStreamRateDataResponseBodyRateDatas &) = default ;
    DescribeLiveCenterStreamRateDataResponseBodyRateDatas(DescribeLiveCenterStreamRateDataResponseBodyRateDatas &&) = default ;
    DescribeLiveCenterStreamRateDataResponseBodyRateDatas(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveCenterStreamRateDataResponseBodyRateDatas() = default ;
    DescribeLiveCenterStreamRateDataResponseBodyRateDatas& operator=(const DescribeLiveCenterStreamRateDataResponseBodyRateDatas &) = default ;
    DescribeLiveCenterStreamRateDataResponseBodyRateDatas& operator=(DescribeLiveCenterStreamRateDataResponseBodyRateDatas &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioFps_ == nullptr
        && return this->audioRate_ == nullptr && return this->time_ == nullptr && return this->videoFps_ == nullptr && return this->videoRate_ == nullptr; };
    // audioFps Field Functions 
    bool hasAudioFps() const { return this->audioFps_ != nullptr;};
    void deleteAudioFps() { this->audioFps_ = nullptr;};
    inline string audioFps() const { DARABONBA_PTR_GET_DEFAULT(audioFps_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBodyRateDatas& setAudioFps(string audioFps) { DARABONBA_PTR_SET_VALUE(audioFps_, audioFps) };


    // audioRate Field Functions 
    bool hasAudioRate() const { return this->audioRate_ != nullptr;};
    void deleteAudioRate() { this->audioRate_ = nullptr;};
    inline string audioRate() const { DARABONBA_PTR_GET_DEFAULT(audioRate_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBodyRateDatas& setAudioRate(string audioRate) { DARABONBA_PTR_SET_VALUE(audioRate_, audioRate) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBodyRateDatas& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // videoFps Field Functions 
    bool hasVideoFps() const { return this->videoFps_ != nullptr;};
    void deleteVideoFps() { this->videoFps_ = nullptr;};
    inline string videoFps() const { DARABONBA_PTR_GET_DEFAULT(videoFps_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBodyRateDatas& setVideoFps(string videoFps) { DARABONBA_PTR_SET_VALUE(videoFps_, videoFps) };


    // videoRate Field Functions 
    bool hasVideoRate() const { return this->videoRate_ != nullptr;};
    void deleteVideoRate() { this->videoRate_ = nullptr;};
    inline string videoRate() const { DARABONBA_PTR_GET_DEFAULT(videoRate_, "") };
    inline DescribeLiveCenterStreamRateDataResponseBodyRateDatas& setVideoRate(string videoRate) { DARABONBA_PTR_SET_VALUE(videoRate_, videoRate) };


  protected:
    // The audio frame rate.
    std::shared_ptr<string> audioFps_ = nullptr;
    // The audio bitrate.
    std::shared_ptr<string> audioRate_ = nullptr;
    // The time when the data was collected. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> time_ = nullptr;
    // The video frame rate.
    std::shared_ptr<string> videoFps_ = nullptr;
    // The video bitrate.
    std::shared_ptr<string> videoRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
