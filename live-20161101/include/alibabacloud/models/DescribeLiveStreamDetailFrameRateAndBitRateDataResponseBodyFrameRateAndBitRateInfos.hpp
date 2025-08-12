// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDETAILFRAMERATEANDBITRATEDATARESPONSEBODYFRAMERATEANDBITRATEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMDETAILFRAMERATEANDBITRATEDATARESPONSEBODYFRAMERATEANDBITRATEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& obj) { 
      DARABONBA_PTR_TO_JSON(AudioBitRate, audioBitRate_);
      DARABONBA_PTR_TO_JSON(AudioFrameRate, audioFrameRate_);
      DARABONBA_PTR_TO_JSON(BitRate, bitRate_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(VideoBitRate, videoBitRate_);
      DARABONBA_PTR_TO_JSON(VideoFrameRate, videoFrameRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioBitRate, audioBitRate_);
      DARABONBA_PTR_FROM_JSON(AudioFrameRate, audioFrameRate_);
      DARABONBA_PTR_FROM_JSON(BitRate, bitRate_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(VideoBitRate, videoBitRate_);
      DARABONBA_PTR_FROM_JSON(VideoFrameRate, videoFrameRate_);
    };
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos() = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos(const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos(DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &&) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos() = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& operator=(const DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &) = default ;
    DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& operator=(DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioBitRate_ != nullptr
        && this->audioFrameRate_ != nullptr && this->bitRate_ != nullptr && this->streamUrl_ != nullptr && this->time_ != nullptr && this->videoBitRate_ != nullptr
        && this->videoFrameRate_ != nullptr; };
    // audioBitRate Field Functions 
    bool hasAudioBitRate() const { return this->audioBitRate_ != nullptr;};
    void deleteAudioBitRate() { this->audioBitRate_ = nullptr;};
    inline float audioBitRate() const { DARABONBA_PTR_GET_DEFAULT(audioBitRate_, 0.0) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setAudioBitRate(float audioBitRate) { DARABONBA_PTR_SET_VALUE(audioBitRate_, audioBitRate) };


    // audioFrameRate Field Functions 
    bool hasAudioFrameRate() const { return this->audioFrameRate_ != nullptr;};
    void deleteAudioFrameRate() { this->audioFrameRate_ = nullptr;};
    inline float audioFrameRate() const { DARABONBA_PTR_GET_DEFAULT(audioFrameRate_, 0.0) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setAudioFrameRate(float audioFrameRate) { DARABONBA_PTR_SET_VALUE(audioFrameRate_, audioFrameRate) };


    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline float bitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, 0.0) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setBitRate(float bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // videoBitRate Field Functions 
    bool hasVideoBitRate() const { return this->videoBitRate_ != nullptr;};
    void deleteVideoBitRate() { this->videoBitRate_ = nullptr;};
    inline float videoBitRate() const { DARABONBA_PTR_GET_DEFAULT(videoBitRate_, 0.0) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setVideoBitRate(float videoBitRate) { DARABONBA_PTR_SET_VALUE(videoBitRate_, videoBitRate) };


    // videoFrameRate Field Functions 
    bool hasVideoFrameRate() const { return this->videoFrameRate_ != nullptr;};
    void deleteVideoFrameRate() { this->videoFrameRate_ = nullptr;};
    inline float videoFrameRate() const { DARABONBA_PTR_GET_DEFAULT(videoFrameRate_, 0.0) };
    inline DescribeLiveStreamDetailFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfos& setVideoFrameRate(float videoFrameRate) { DARABONBA_PTR_SET_VALUE(videoFrameRate_, videoFrameRate) };


  protected:
    // The audio bitrate of the live stream. Unit: bit/s.
    std::shared_ptr<float> audioBitRate_ = nullptr;
    // The audio frame rate of the live stream. Unit: FPS.
    std::shared_ptr<float> audioFrameRate_ = nullptr;
    // The bitrate of the live stream. Unit: bit/s.
    std::shared_ptr<float> bitRate_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<string> streamUrl_ = nullptr;
    // The time when the data was collected. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> time_ = nullptr;
    // The video bitrate of the live stream. Unit: bit/s.
    std::shared_ptr<float> videoBitRate_ = nullptr;
    // The video frame rate of the live stream. Unit: frames per second (FPS).
    std::shared_ptr<float> videoFrameRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
