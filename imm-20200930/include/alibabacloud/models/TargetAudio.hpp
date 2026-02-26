// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TARGETAUDIO_HPP_
#define ALIBABACLOUD_MODELS_TARGETAUDIO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class TargetAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TargetAudio& obj) { 
      DARABONBA_PTR_TO_JSON(DisableAudio, disableAudio_);
      DARABONBA_PTR_TO_JSON(FilterAudio, filterAudio_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TranscodeAudio, transcodeAudio_);
    };
    friend void from_json(const Darabonba::Json& j, TargetAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableAudio, disableAudio_);
      DARABONBA_PTR_FROM_JSON(FilterAudio, filterAudio_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TranscodeAudio, transcodeAudio_);
    };
    TargetAudio() = default ;
    TargetAudio(const TargetAudio &) = default ;
    TargetAudio(TargetAudio &&) = default ;
    TargetAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TargetAudio() = default ;
    TargetAudio& operator=(const TargetAudio &) = default ;
    TargetAudio& operator=(TargetAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TranscodeAudio : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TranscodeAudio& obj) { 
        DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_TO_JSON(BitrateOption, bitrateOption_);
        DARABONBA_PTR_TO_JSON(BitsPerSample, bitsPerSample_);
        DARABONBA_PTR_TO_JSON(Channel, channel_);
        DARABONBA_PTR_TO_JSON(Codec, codec_);
        DARABONBA_PTR_TO_JSON(Quality, quality_);
        DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
        DARABONBA_PTR_TO_JSON(SampleRateOption, sampleRateOption_);
      };
      friend void from_json(const Darabonba::Json& j, TranscodeAudio& obj) { 
        DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
        DARABONBA_PTR_FROM_JSON(BitrateOption, bitrateOption_);
        DARABONBA_PTR_FROM_JSON(BitsPerSample, bitsPerSample_);
        DARABONBA_PTR_FROM_JSON(Channel, channel_);
        DARABONBA_PTR_FROM_JSON(Codec, codec_);
        DARABONBA_PTR_FROM_JSON(Quality, quality_);
        DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
        DARABONBA_PTR_FROM_JSON(SampleRateOption, sampleRateOption_);
      };
      TranscodeAudio() = default ;
      TranscodeAudio(const TranscodeAudio &) = default ;
      TranscodeAudio(TranscodeAudio &&) = default ;
      TranscodeAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TranscodeAudio() = default ;
      TranscodeAudio& operator=(const TranscodeAudio &) = default ;
      TranscodeAudio& operator=(TranscodeAudio &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->bitrateOption_ == nullptr && this->bitsPerSample_ == nullptr && this->channel_ == nullptr && this->codec_ == nullptr && this->quality_ == nullptr
        && this->sampleRate_ == nullptr && this->sampleRateOption_ == nullptr; };
      // bitrate Field Functions 
      bool hasBitrate() const { return this->bitrate_ != nullptr;};
      void deleteBitrate() { this->bitrate_ = nullptr;};
      inline int32_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
      inline TranscodeAudio& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


      // bitrateOption Field Functions 
      bool hasBitrateOption() const { return this->bitrateOption_ != nullptr;};
      void deleteBitrateOption() { this->bitrateOption_ = nullptr;};
      inline string getBitrateOption() const { DARABONBA_PTR_GET_DEFAULT(bitrateOption_, "") };
      inline TranscodeAudio& setBitrateOption(string bitrateOption) { DARABONBA_PTR_SET_VALUE(bitrateOption_, bitrateOption) };


      // bitsPerSample Field Functions 
      bool hasBitsPerSample() const { return this->bitsPerSample_ != nullptr;};
      void deleteBitsPerSample() { this->bitsPerSample_ = nullptr;};
      inline int32_t getBitsPerSample() const { DARABONBA_PTR_GET_DEFAULT(bitsPerSample_, 0) };
      inline TranscodeAudio& setBitsPerSample(int32_t bitsPerSample) { DARABONBA_PTR_SET_VALUE(bitsPerSample_, bitsPerSample) };


      // channel Field Functions 
      bool hasChannel() const { return this->channel_ != nullptr;};
      void deleteChannel() { this->channel_ = nullptr;};
      inline int32_t getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, 0) };
      inline TranscodeAudio& setChannel(int32_t channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


      // codec Field Functions 
      bool hasCodec() const { return this->codec_ != nullptr;};
      void deleteCodec() { this->codec_ = nullptr;};
      inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
      inline TranscodeAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


      // quality Field Functions 
      bool hasQuality() const { return this->quality_ != nullptr;};
      void deleteQuality() { this->quality_ = nullptr;};
      inline int32_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
      inline TranscodeAudio& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


      // sampleRate Field Functions 
      bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
      void deleteSampleRate() { this->sampleRate_ = nullptr;};
      inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
      inline TranscodeAudio& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


      // sampleRateOption Field Functions 
      bool hasSampleRateOption() const { return this->sampleRateOption_ != nullptr;};
      void deleteSampleRateOption() { this->sampleRateOption_ = nullptr;};
      inline string getSampleRateOption() const { DARABONBA_PTR_GET_DEFAULT(sampleRateOption_, "") };
      inline TranscodeAudio& setSampleRateOption(string sampleRateOption) { DARABONBA_PTR_SET_VALUE(sampleRateOption_, sampleRateOption) };


    protected:
      // The bitrate of the audio stream. Unit: bit/s. This parameter and the **Quality** parameter are mutually exclusive. Valid values: 1000 to 10000000.
      shared_ptr<int32_t> bitrate_ {};
      // The audio bitrate option. Valid values:
      // 
      // *   fixed: always uses the target bitrate.
      // *   adaptive: uses the source bitrate when the source bitrate is smaller than the target bitrate.
      // *   fall: returns a failure when the source bitrate is smaller than the target bitrate.
      // 
      // Default values:
      // 
      // *   fixed for the CreateMediaConvert operation.
      // *   adaptive for the GenerateVideoPlaylist operation.
      // 
      // >  This parameter must be used in conjunction with the **Bitrate** parameter.
      shared_ptr<string> bitrateOption_ {};
      // The audio bit depth. Valid values: 16 and 24.
      // 
      // >  This parameter takes effect only when Codec is set to flac.
      shared_ptr<int32_t> bitsPerSample_ {};
      // The number of sound channels. By default, the audio stream has the same number of sound channels as the source audio. Valid values: [1,8].
      // 
      // >  The number of sound channels varies with audio formats: one or two for MP3, up to six for AC3 5.1, and one for AMR.
      shared_ptr<int32_t> channel_ {};
      // The codec. Valid values:
      // 
      // *   copy, mp3, vorbis, aac, flac, ac3, opus, and amr for the CreateMediaConvert operation. The default value is copy.
      // *   aac for the GenerateVideoPlaylist operation. The default value is aac.
      // 
      // >  When you set the parameter to copy, the audio stream is directly copied into the output file and all other parameters in **TranscodeAudio** do not take effect. The copy value is commonly used in container format conversion scenarios. You cannot use this value in audio merging scenarios.
      shared_ptr<string> codec_ {};
      // The audio quality. Valid values: 0 to 100. The greater the value, the higher the quality. This parameter and the **Bitrate** parameter are mutually exclusive.
      shared_ptr<int32_t> quality_ {};
      // The sampling rate option. Unit: Hz. By default, the source sampling rate is used. Valid values: 8000, 12025, 12000, 16000, 22050, 24000, 32000, 44100, 48000, 64000, 88200, and 96000.
      // 
      // >  Supported sampling rates vary with formats: 48 kHz and lower for MP3, 8 kHz, 12 kHz, 16 kHz, 24 kHz, and 48 kHz for Opus, 32 kHz, 44.1 kHz, and 48 kHz for AC3, and 8 kHz and 16 kHz for AMR.
      shared_ptr<int32_t> sampleRate_ {};
      // The sampling rate option. Valid values:
      // 
      // *   fixed: always uses the target sampling rate.
      // *   adaptive: uses the source sampling rate when the source sampling rate is smaller than the target sampling rate.
      // *   fall: returns a failure when the source sampling rate is smaller than the target sampling rate.
      // 
      // Default values:
      // 
      // *   fixed for the CreateMediaConvert operation.
      // *   adaptive for the GenerateVideoPlaylist operation.
      // 
      // >  This parameter must be used in conjunction with the **SampleRate** parameter.
      shared_ptr<string> sampleRateOption_ {};
    };

    class FilterAudio : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterAudio& obj) { 
        DARABONBA_PTR_TO_JSON(Mixing, mixing_);
      };
      friend void from_json(const Darabonba::Json& j, FilterAudio& obj) { 
        DARABONBA_PTR_FROM_JSON(Mixing, mixing_);
      };
      FilterAudio() = default ;
      FilterAudio(const FilterAudio &) = default ;
      FilterAudio(FilterAudio &&) = default ;
      FilterAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterAudio() = default ;
      FilterAudio& operator=(const FilterAudio &) = default ;
      FilterAudio& operator=(FilterAudio &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mixing_ == nullptr; };
      // mixing Field Functions 
      bool hasMixing() const { return this->mixing_ != nullptr;};
      void deleteMixing() { this->mixing_ = nullptr;};
      inline bool getMixing() const { DARABONBA_PTR_GET_DEFAULT(mixing_, false) };
      inline FilterAudio& setMixing(bool mixing) { DARABONBA_PTR_SET_VALUE(mixing_, mixing) };


    protected:
      // Specifies whether to mix all sound tracks into a single track. Valid values:
      // 
      // *   false (default)
      // *   true
      shared_ptr<bool> mixing_ {};
    };

    virtual bool empty() const override { return this->disableAudio_ == nullptr
        && this->filterAudio_ == nullptr && this->stream_ == nullptr && this->transcodeAudio_ == nullptr; };
    // disableAudio Field Functions 
    bool hasDisableAudio() const { return this->disableAudio_ != nullptr;};
    void deleteDisableAudio() { this->disableAudio_ = nullptr;};
    inline bool getDisableAudio() const { DARABONBA_PTR_GET_DEFAULT(disableAudio_, false) };
    inline TargetAudio& setDisableAudio(bool disableAudio) { DARABONBA_PTR_SET_VALUE(disableAudio_, disableAudio) };


    // filterAudio Field Functions 
    bool hasFilterAudio() const { return this->filterAudio_ != nullptr;};
    void deleteFilterAudio() { this->filterAudio_ = nullptr;};
    inline const TargetAudio::FilterAudio & getFilterAudio() const { DARABONBA_PTR_GET_CONST(filterAudio_, TargetAudio::FilterAudio) };
    inline TargetAudio::FilterAudio getFilterAudio() { DARABONBA_PTR_GET(filterAudio_, TargetAudio::FilterAudio) };
    inline TargetAudio& setFilterAudio(const TargetAudio::FilterAudio & filterAudio) { DARABONBA_PTR_SET_VALUE(filterAudio_, filterAudio) };
    inline TargetAudio& setFilterAudio(TargetAudio::FilterAudio && filterAudio) { DARABONBA_PTR_SET_RVALUE(filterAudio_, filterAudio) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline const vector<int64_t> & getStream() const { DARABONBA_PTR_GET_CONST(stream_, vector<int64_t>) };
    inline vector<int64_t> getStream() { DARABONBA_PTR_GET(stream_, vector<int64_t>) };
    inline TargetAudio& setStream(const vector<int64_t> & stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };
    inline TargetAudio& setStream(vector<int64_t> && stream) { DARABONBA_PTR_SET_RVALUE(stream_, stream) };


    // transcodeAudio Field Functions 
    bool hasTranscodeAudio() const { return this->transcodeAudio_ != nullptr;};
    void deleteTranscodeAudio() { this->transcodeAudio_ = nullptr;};
    inline const TargetAudio::TranscodeAudio & getTranscodeAudio() const { DARABONBA_PTR_GET_CONST(transcodeAudio_, TargetAudio::TranscodeAudio) };
    inline TargetAudio::TranscodeAudio getTranscodeAudio() { DARABONBA_PTR_GET(transcodeAudio_, TargetAudio::TranscodeAudio) };
    inline TargetAudio& setTranscodeAudio(const TargetAudio::TranscodeAudio & transcodeAudio) { DARABONBA_PTR_SET_VALUE(transcodeAudio_, transcodeAudio) };
    inline TargetAudio& setTranscodeAudio(TargetAudio::TranscodeAudio && transcodeAudio) { DARABONBA_PTR_SET_RVALUE(transcodeAudio_, transcodeAudio) };


  protected:
    // Specifies whether to disable audio stream generation. Valid values:
    // 
    // *   true: disables audio stream generation. No audio stream is included in the output file.
    // *   false: does not disable audio stream generation. This is the default value.
    shared_ptr<bool> disableAudio_ {};
    // The audio processing settings. This parameter is invalid if **TranscodeAudio** is left empty or **TranscodeAudio.Codec** is set to copy.
    // 
    // >  This parameter is not available to the GenerateVideoPlaylist operation.
    shared_ptr<TargetAudio::FilterAudio> filterAudio_ {};
    // The index numbers of audio streams. If you do not specify this parameter, the first audio stream (the one with the smallest index number) is processed. If the array contains an element greater than 100, all audio streams are processed.
    // 
    // *   For example, you can set the parameter to `[0,1]` to process audio streams with index numbers 0 and 1, `[1]` to process only the audio stream with the index number 1, or `[101]` to process all audio streams.
    // 
    // >  If you specify an index number but no audio stream with the index number is found, the index number is ignored.
    shared_ptr<vector<int64_t>> stream_ {};
    // The audio transcoding settings. If you do not specify this parameter, no audio streams are included in the output file.
    // 
    // >  We recommend that you do not use this parameter to disable audio stream generation.
    shared_ptr<TargetAudio::TranscodeAudio> transcodeAudio_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
