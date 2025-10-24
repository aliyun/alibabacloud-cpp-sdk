// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTAUDIO_HPP_
#define ALIBABACLOUD_MODELS_QUERYJOBLISTRESPONSEBODYJOBLISTJOBOUTPUTAUDIO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryJobListResponseBodyJobListJobOutputAudioVolume.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryJobListResponseBodyJobListJobOutputAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryJobListResponseBodyJobListJobOutputAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Qscale, qscale_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, QueryJobListResponseBodyJobListJobOutputAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    QueryJobListResponseBodyJobListJobOutputAudio() = default ;
    QueryJobListResponseBodyJobListJobOutputAudio(const QueryJobListResponseBodyJobListJobOutputAudio &) = default ;
    QueryJobListResponseBodyJobListJobOutputAudio(QueryJobListResponseBodyJobListJobOutputAudio &&) = default ;
    QueryJobListResponseBodyJobListJobOutputAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryJobListResponseBodyJobListJobOutputAudio() = default ;
    QueryJobListResponseBodyJobListJobOutputAudio& operator=(const QueryJobListResponseBodyJobListJobOutputAudio &) = default ;
    QueryJobListResponseBodyJobListJobOutputAudio& operator=(QueryJobListResponseBodyJobListJobOutputAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->channels_ == nullptr && return this->codec_ == nullptr && return this->profile_ == nullptr && return this->qscale_ == nullptr && return this->samplerate_ == nullptr
        && return this->volume_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline string qscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string samplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline const Models::QueryJobListResponseBodyJobListJobOutputAudioVolume & volume() const { DARABONBA_PTR_GET_CONST(volume_, Models::QueryJobListResponseBodyJobListJobOutputAudioVolume) };
    inline Models::QueryJobListResponseBodyJobListJobOutputAudioVolume volume() { DARABONBA_PTR_GET(volume_, Models::QueryJobListResponseBodyJobListJobOutputAudioVolume) };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setVolume(const Models::QueryJobListResponseBodyJobListJobOutputAudioVolume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
    inline QueryJobListResponseBodyJobListJobOutputAudio& setVolume(Models::QueryJobListResponseBodyJobListJobOutputAudioVolume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


  protected:
    // The audio bitrate of the output file.
    // 
    // *   Unit: Kbit/s.
    // *   Default value: **128**.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The number of sound channels.
    // 
    // *   Valid values: 1, 2, 3, 4, 5, 6, 7, and 8.
    // *   Default value: **2**.
    std::shared_ptr<string> channels_ = nullptr;
    // The audio codec.
    // 
    // *   Valid values: aac, mp3, vorbis, and flac.
    // *   Default value: **aac**.
    std::shared_ptr<string> codec_ = nullptr;
    // The codec profile of the audio. Valid values when the value of Codec is aac: aaclow, aache, aachev2, aacld, and aaceld.
    std::shared_ptr<string> profile_ = nullptr;
    // The level of quality control on the audio.
    std::shared_ptr<string> qscale_ = nullptr;
    // The sampling rate.
    // 
    // *   Valid values: 22050, 32000, 44100, 48000, and 96000.
    // *   Unit: Hz.
    // *   Default value: 44100.
    // 
    // >  If the video container format is FLV and the audio codec is MP3, the value of this parameter cannot be 32000, 48000, or 96000. If the audio codec is MP3, the value of this parameter cannot be 96000.
    std::shared_ptr<string> samplerate_ = nullptr;
    // The volume configurations.
    std::shared_ptr<Models::QueryJobListResponseBodyJobListJobOutputAudioVolume> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
