// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATEAUDIO_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATEAUDIO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateAudioVolume.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBodyTemplateAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBodyTemplateAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Qscale, qscale_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBodyTemplateAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    UpdateTemplateResponseBodyTemplateAudio() = default ;
    UpdateTemplateResponseBodyTemplateAudio(const UpdateTemplateResponseBodyTemplateAudio &) = default ;
    UpdateTemplateResponseBodyTemplateAudio(UpdateTemplateResponseBodyTemplateAudio &&) = default ;
    UpdateTemplateResponseBodyTemplateAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBodyTemplateAudio() = default ;
    UpdateTemplateResponseBodyTemplateAudio& operator=(const UpdateTemplateResponseBodyTemplateAudio &) = default ;
    UpdateTemplateResponseBodyTemplateAudio& operator=(UpdateTemplateResponseBodyTemplateAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->channels_ == nullptr && return this->codec_ == nullptr && return this->profile_ == nullptr && return this->qscale_ == nullptr && return this->remove_ == nullptr
        && return this->samplerate_ == nullptr && return this->volume_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline string qscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string samplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline UpdateTemplateResponseBodyTemplateAudio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateAudioVolume & volume() const { DARABONBA_PTR_GET_CONST(volume_, Models::UpdateTemplateResponseBodyTemplateAudioVolume) };
    inline Models::UpdateTemplateResponseBodyTemplateAudioVolume volume() { DARABONBA_PTR_GET(volume_, Models::UpdateTemplateResponseBodyTemplateAudioVolume) };
    inline UpdateTemplateResponseBodyTemplateAudio& setVolume(const Models::UpdateTemplateResponseBodyTemplateAudioVolume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
    inline UpdateTemplateResponseBodyTemplateAudio& setVolume(Models::UpdateTemplateResponseBodyTemplateAudioVolume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


  protected:
    // The ID of the transcoding template.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The audio bitrate of the output file.
    // 
    // *   Valid values: 8 to 1000.****
    // *   Unit: Kbit/s.
    // *   Default value: **128**.
    std::shared_ptr<string> channels_ = nullptr;
    // The sampling rate.
    // 
    // *   Unit: Hz.
    // *   Default value: **44100**.
    std::shared_ptr<string> codec_ = nullptr;
    // Indicates whether the audio stream is deleted.
    // 
    // *   **true**: The audio stream is deleted.
    // *   **false**: The audio stream is retained.
    // *   Default value: **false**.
    std::shared_ptr<string> profile_ = nullptr;
    // The number of sound channels. Default value: **2**.
    std::shared_ptr<string> qscale_ = nullptr;
    // The audio codec format. Default value: **aac**. Valid values:
    // 
    // *   **aac**
    // *   **mp3**
    // *   **vorbis**
    // *   **flac**
    std::shared_ptr<string> remove_ = nullptr;
    // The level of the independent denoising algorithm.
    std::shared_ptr<string> samplerate_ = nullptr;
    // The volume control configurations.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateAudioVolume> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
