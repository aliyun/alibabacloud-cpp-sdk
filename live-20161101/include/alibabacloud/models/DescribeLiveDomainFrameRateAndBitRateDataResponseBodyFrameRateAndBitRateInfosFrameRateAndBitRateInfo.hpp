// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINFRAMERATEANDBITRATEDATARESPONSEBODYFRAMERATEANDBITRATEINFOSFRAMERATEANDBITRATEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINFRAMERATEANDBITRATEDATARESPONSEBODYFRAMERATEANDBITRATEINFOSFRAMERATEANDBITRATEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AudioFrameRate, audioFrameRate_);
      DARABONBA_PTR_TO_JSON(BitRate, bitRate_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_TO_JSON(VideoFrameRate, videoFrameRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioFrameRate, audioFrameRate_);
      DARABONBA_PTR_FROM_JSON(BitRate, bitRate_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
      DARABONBA_PTR_FROM_JSON(VideoFrameRate, videoFrameRate_);
    };
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo() = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo(const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo &) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo(DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo &&) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo() = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& operator=(const DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo &) = default ;
    DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& operator=(DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioFrameRate_ != nullptr
        && this->bitRate_ != nullptr && this->streamUrl_ != nullptr && this->videoFrameRate_ != nullptr; };
    // audioFrameRate Field Functions 
    bool hasAudioFrameRate() const { return this->audioFrameRate_ != nullptr;};
    void deleteAudioFrameRate() { this->audioFrameRate_ = nullptr;};
    inline float audioFrameRate() const { DARABONBA_PTR_GET_DEFAULT(audioFrameRate_, 0.0) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& setAudioFrameRate(float audioFrameRate) { DARABONBA_PTR_SET_VALUE(audioFrameRate_, audioFrameRate) };


    // bitRate Field Functions 
    bool hasBitRate() const { return this->bitRate_ != nullptr;};
    void deleteBitRate() { this->bitRate_ = nullptr;};
    inline float bitRate() const { DARABONBA_PTR_GET_DEFAULT(bitRate_, 0.0) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& setBitRate(float bitRate) { DARABONBA_PTR_SET_VALUE(bitRate_, bitRate) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


    // videoFrameRate Field Functions 
    bool hasVideoFrameRate() const { return this->videoFrameRate_ != nullptr;};
    void deleteVideoFrameRate() { this->videoFrameRate_ = nullptr;};
    inline float videoFrameRate() const { DARABONBA_PTR_GET_DEFAULT(videoFrameRate_, 0.0) };
    inline DescribeLiveDomainFrameRateAndBitRateDataResponseBodyFrameRateAndBitRateInfosFrameRateAndBitRateInfo& setVideoFrameRate(float videoFrameRate) { DARABONBA_PTR_SET_VALUE(videoFrameRate_, videoFrameRate) };


  protected:
    // The audio frame rate of the live stream. Unit: FPS.
    std::shared_ptr<float> audioFrameRate_ = nullptr;
    // The bitrate of the live stream. Unit: bit/s.
    std::shared_ptr<float> bitRate_ = nullptr;
    // The URL of the live stream.
    std::shared_ptr<string> streamUrl_ = nullptr;
    // The video frame rate of the live stream. Unit: frames per second (FPS).
    std::shared_ptr<float> videoFrameRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
