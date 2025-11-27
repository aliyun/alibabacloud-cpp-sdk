// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETAUDIOTRANSCODEAUDIO_HPP_
#define ALIBABACLOUD_MODELS_TARGETAUDIOTRANSCODEAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetAudioTranscodeAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetAudioTranscodeAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(BitrateOption, bitrateOption_);
      DARABONBA_PTR_TO_JSON(BitsPerSample, bitsPerSample_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SampleRateOption, sampleRateOption_);
    };
    friend void from_json(const Darabonba::Json& j, TargetAudioTranscodeAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(BitrateOption, bitrateOption_);
      DARABONBA_PTR_FROM_JSON(BitsPerSample, bitsPerSample_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SampleRateOption, sampleRateOption_);
    };
    TargetAudioTranscodeAudio() = default ;
    TargetAudioTranscodeAudio(const TargetAudioTranscodeAudio &) = default ;
    TargetAudioTranscodeAudio(TargetAudioTranscodeAudio &&) = default ;
    TargetAudioTranscodeAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetAudioTranscodeAudio() = default ;
    TargetAudioTranscodeAudio& operator=(const TargetAudioTranscodeAudio &) = default ;
    TargetAudioTranscodeAudio& operator=(TargetAudioTranscodeAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->bitrateOption_ == nullptr && return this->bitsPerSample_ == nullptr && return this->channel_ == nullptr && return this->codec_ == nullptr && return this->quality_ == nullptr
        && return this->sampleRate_ == nullptr && return this->sampleRateOption_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline TargetAudioTranscodeAudio& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // bitrateOption Field Functions 
    bool hasBitrateOption() const { return this->bitrateOption_ != nullptr;};
    void deleteBitrateOption() { this->bitrateOption_ = nullptr;};
    inline string bitrateOption() const { DARABONBA_PTR_GET_DEFAULT(bitrateOption_, "") };
    inline TargetAudioTranscodeAudio& setBitrateOption(string bitrateOption) { DARABONBA_PTR_SET_VALUE(bitrateOption_, bitrateOption) };


    // bitsPerSample Field Functions 
    bool hasBitsPerSample() const { return this->bitsPerSample_ != nullptr;};
    void deleteBitsPerSample() { this->bitsPerSample_ = nullptr;};
    inline int32_t bitsPerSample() const { DARABONBA_PTR_GET_DEFAULT(bitsPerSample_, 0) };
    inline TargetAudioTranscodeAudio& setBitsPerSample(int32_t bitsPerSample) { DARABONBA_PTR_SET_VALUE(bitsPerSample_, bitsPerSample) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline int32_t channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, 0) };
    inline TargetAudioTranscodeAudio& setChannel(int32_t channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline TargetAudioTranscodeAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int32_t quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
    inline TargetAudioTranscodeAudio& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline TargetAudioTranscodeAudio& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sampleRateOption Field Functions 
    bool hasSampleRateOption() const { return this->sampleRateOption_ != nullptr;};
    void deleteSampleRateOption() { this->sampleRateOption_ = nullptr;};
    inline string sampleRateOption() const { DARABONBA_PTR_GET_DEFAULT(sampleRateOption_, "") };
    inline TargetAudioTranscodeAudio& setSampleRateOption(string sampleRateOption) { DARABONBA_PTR_SET_VALUE(sampleRateOption_, sampleRateOption) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<string> bitrateOption_ = nullptr;
    std::shared_ptr<int32_t> bitsPerSample_ = nullptr;
    std::shared_ptr<int32_t> channel_ = nullptr;
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<int32_t> quality_ = nullptr;
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
    std::shared_ptr<string> sampleRateOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
