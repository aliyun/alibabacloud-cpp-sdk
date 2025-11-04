// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTAUDIOSETTINGSAUDIOCODECSETTING_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEDIALIVECHANNELREQUESTAUDIOSETTINGSAUDIOCODECSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting() = default ;
    CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting(const CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting &) = default ;
    CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting(CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting &&) = default ;
    CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting() = default ;
    CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& operator=(const CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting &) = default ;
    CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& operator=(CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->profile_ == nullptr && return this->sampleRate_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline CreateMediaLiveChannelRequestAudioSettingsAudioCodecSetting& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    // The audio bitrate. Unit: bit/s. Valid values: 8000 to 1000000. The value must be divisible by 1000.
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    // The audio codec profile. When AudioCodec is set to aac, AAC-LOW and AAC-MAIN are supported. When AudioCodec is set to libfdk_aac, AAC-LOW, AAC-HE, and AAC-HEV2 are supported.
    std::shared_ptr<string> profile_ = nullptr;
    // The audio sample rate. Unit: Hz. Valid values: 22050, 32000, 44100, 48000, and 96000.
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
