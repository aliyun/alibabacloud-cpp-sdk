// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTAUDIO_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
    };
    MediaConvertAudio() = default ;
    MediaConvertAudio(const MediaConvertAudio &) = default ;
    MediaConvertAudio(MediaConvertAudio &&) = default ;
    MediaConvertAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertAudio() = default ;
    MediaConvertAudio& operator=(const MediaConvertAudio &) = default ;
    MediaConvertAudio& operator=(MediaConvertAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && this->channels_ == nullptr && this->codec_ == nullptr && this->profile_ == nullptr && this->remove_ == nullptr && this->samplerate_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int64_t getBitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0L) };
    inline MediaConvertAudio& setBitrate(int64_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline int64_t getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, 0L) };
    inline MediaConvertAudio& setChannels(int64_t channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string getCodec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline MediaConvertAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline MediaConvertAudio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline bool getRemove() const { DARABONBA_PTR_GET_DEFAULT(remove_, false) };
    inline MediaConvertAudio& setRemove(bool remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string getSamplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline MediaConvertAudio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


  protected:
    // The audio bitrate of the output file.
    // 
    // *   Unit: Kbps.
    // *   Valid values: [8,1000].
    // *   Default value: 128.
    // *   Common values: 64, 128, and 256.
    shared_ptr<int64_t> bitrate_ {};
    // The number of audio channels.
    // 
    // *   Valid values: 0, 1, 2, 4, 5, 6, and 8.
    // 
    //     *   If the Codec parameter is set to MP3 or OPUS, you can set this parameter to 0, 1, or 2.
    //     *   If the Codec parameter is set to AAC or FLAC, you can set this parameter to 0, 1, 2, 4, 5, 6, or 8.
    //     *   If the Codec parameter is set to VORBIS, you can set this parameter to 2.
    //     *   If the Format parameter is set to MPD, you cannot set this parameter to 8.
    // 
    // *   Default value: 2.
    // 
    // *   Set the value to 0 to preserve the original number of channels from the source file.
    shared_ptr<int64_t> channels_ {};
    // The audio codec.
    // 
    // *   Valid values: AAC, AC3, EAC3, MP2, MP3, FLAC, OPUS, VORBIS, WMA-V1, WMA-V2, and pcm_s16le.
    // *   Default value: AAC.
    shared_ptr<string> codec_ {};
    // The audio codec profile.
    // 
    // *   This parameter takes effect only if the Codec parameter is set to AAC.
    // *   Valid values: aac_low, aac_he, aac_he_v2, aac_ld, and aac_eld.
    // *   Default value: aac_low.
    shared_ptr<string> profile_ {};
    // Specifies whether to remove the audio stream from the output.
    // 
    // *   true: deletes the audio stream. All other parameters in the Audio object are ignored.
    // *   false: retains the audio stream.
    // *   Default value: false.
    shared_ptr<bool> remove_ {};
    // The sample rate.
    // 
    // *   Unit: Hz
    // *   Valid values: 22050, 32000, 44100, 48000, and 96000.
    // *   Default value: 44100.
    // 
    // The supported sample rates vary depending on the container and codec format. For example, when the audio codec is MP3, a sample rate of 96000 is not supported. If the container format is FLV, only sample rates of 22050 and 44100 are supported.
    shared_ptr<string> samplerate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
