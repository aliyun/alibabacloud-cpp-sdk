// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEAUDIO_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEAUDIO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateAudioVolume.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateResponseBodyTemplateAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplateAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Qscale, qscale_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplateAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Qscale, qscale_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    AddTemplateResponseBodyTemplateAudio() = default ;
    AddTemplateResponseBodyTemplateAudio(const AddTemplateResponseBodyTemplateAudio &) = default ;
    AddTemplateResponseBodyTemplateAudio(AddTemplateResponseBodyTemplateAudio &&) = default ;
    AddTemplateResponseBodyTemplateAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplateAudio() = default ;
    AddTemplateResponseBodyTemplateAudio& operator=(const AddTemplateResponseBodyTemplateAudio &) = default ;
    AddTemplateResponseBodyTemplateAudio& operator=(AddTemplateResponseBodyTemplateAudio &&) = default ;
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
    inline AddTemplateResponseBodyTemplateAudio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline AddTemplateResponseBodyTemplateAudio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline AddTemplateResponseBodyTemplateAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline AddTemplateResponseBodyTemplateAudio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // qscale Field Functions 
    bool hasQscale() const { return this->qscale_ != nullptr;};
    void deleteQscale() { this->qscale_ = nullptr;};
    inline string qscale() const { DARABONBA_PTR_GET_DEFAULT(qscale_, "") };
    inline AddTemplateResponseBodyTemplateAudio& setQscale(string qscale) { DARABONBA_PTR_SET_VALUE(qscale_, qscale) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline AddTemplateResponseBodyTemplateAudio& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string samplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline AddTemplateResponseBodyTemplateAudio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateAudioVolume & volume() const { DARABONBA_PTR_GET_CONST(volume_, Models::AddTemplateResponseBodyTemplateAudioVolume) };
    inline Models::AddTemplateResponseBodyTemplateAudioVolume volume() { DARABONBA_PTR_GET(volume_, Models::AddTemplateResponseBodyTemplateAudioVolume) };
    inline AddTemplateResponseBodyTemplateAudio& setVolume(const Models::AddTemplateResponseBodyTemplateAudioVolume & volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };
    inline AddTemplateResponseBodyTemplateAudio& setVolume(Models::AddTemplateResponseBodyTemplateAudioVolume && volume) { DARABONBA_PTR_SET_RVALUE(volume_, volume) };


  protected:
    // The audio bitrate of the output file.
    // 
    // *   Unit: Kbit/s.
    // *   Default value: **128**.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The number of sound channels. Default value: **2**.
    std::shared_ptr<string> channels_ = nullptr;
    // The audio codec format. Default value: **aac**. Valid values:
    // 
    // *   **aac**
    // *   **mp3**
    // *   **vorbis**
    // *   **flac**
    std::shared_ptr<string> codec_ = nullptr;
    // The codec profile of the audio. Valid values if the **Codec** parameter is set to **AAC**:
    // 
    // *   **aac_low**
    // *   **aac_he**
    // *   **aac_he_v2**
    // *   **aac_ld**
    // *   **aac_eld**
    std::shared_ptr<string> profile_ = nullptr;
    // The level of the independent denoising algorithm.
    std::shared_ptr<string> qscale_ = nullptr;
    // Indicates whether the audio stream is deleted.
    // 
    // *   **true**: The audio stream is deleted.
    // *   **false**: The audio stream is retained.
    // *   Default value: **false**.
    std::shared_ptr<string> remove_ = nullptr;
    // The sampling rate.
    // 
    // *   Unit: Hz.
    // *   Default value: **44100**.
    std::shared_ptr<string> samplerate_ = nullptr;
    // The volume control configurations
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateAudioVolume> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
