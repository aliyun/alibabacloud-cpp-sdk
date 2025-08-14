// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSAUDIO_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMSAUDIO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->channels_ != nullptr && this->codec_ != nullptr && this->profile_ != nullptr && this->remove_ != nullptr && this->samplerate_ != nullptr
        && this->volume_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string samplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume & volume() const { DARABONBA_PTR_GET_CONST(volume_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume volume() { DARABONBA_PTR_GET(volume_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setVolume(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio& setVolume(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


  protected:
    // The audio bitrate of the output file.
    // 
    // *   Valid values: [8,1000].
    // *   Unit: Kbit/s.
    // *   Default value: 128.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The number of sound channels. Default value: 2.
    std::shared_ptr<string> channels_ = nullptr;
    // The audio codec. Valid values: AAC, MP3, VORBIS, and FLAC. Default value: AAC.
    std::shared_ptr<string> codec_ = nullptr;
    // The audio codec profile. If the Codec parameter is set to AAC, the valid values are aac_low, aac_he, aac_he_v2, aac_ld, and aac_eld.
    std::shared_ptr<string> profile_ = nullptr;
    // Indicates whether the audio stream is deleted.
    std::shared_ptr<string> remove_ = nullptr;
    // The sampling rate.
    // 
    // *   Default value: 44100.
    // *   Valid values: 22050, 32000, 44100, 48000, and 96000.
    // *   Unit: Hz.
    std::shared_ptr<string> samplerate_ = nullptr;
    // The volume configurations.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudioVolume> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
