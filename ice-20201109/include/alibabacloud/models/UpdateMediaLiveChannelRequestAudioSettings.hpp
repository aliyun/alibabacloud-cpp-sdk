// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTAUDIOSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEDIALIVECHANNELREQUESTAUDIOSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateMediaLiveChannelRequestAudioSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMediaLiveChannelRequestAudioSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_TO_JSON(AudioCodecSetting, audioCodecSetting_);
      DARABONBA_PTR_TO_JSON(AudioSelectorName, audioSelectorName_);
      DARABONBA_PTR_TO_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_TO_JSON(LanguageName, languageName_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMediaLiveChannelRequestAudioSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioCodec, audioCodec_);
      DARABONBA_PTR_FROM_JSON(AudioCodecSetting, audioCodecSetting_);
      DARABONBA_PTR_FROM_JSON(AudioSelectorName, audioSelectorName_);
      DARABONBA_PTR_FROM_JSON(LanguageCode, languageCode_);
      DARABONBA_PTR_FROM_JSON(LanguageName, languageName_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateMediaLiveChannelRequestAudioSettings() = default ;
    UpdateMediaLiveChannelRequestAudioSettings(const UpdateMediaLiveChannelRequestAudioSettings &) = default ;
    UpdateMediaLiveChannelRequestAudioSettings(UpdateMediaLiveChannelRequestAudioSettings &&) = default ;
    UpdateMediaLiveChannelRequestAudioSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMediaLiveChannelRequestAudioSettings() = default ;
    UpdateMediaLiveChannelRequestAudioSettings& operator=(const UpdateMediaLiveChannelRequestAudioSettings &) = default ;
    UpdateMediaLiveChannelRequestAudioSettings& operator=(UpdateMediaLiveChannelRequestAudioSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioCodec_ != nullptr
        && this->audioCodecSetting_ != nullptr && this->audioSelectorName_ != nullptr && this->languageCode_ != nullptr && this->languageName_ != nullptr && this->name_ != nullptr; };
    // audioCodec Field Functions 
    bool hasAudioCodec() const { return this->audioCodec_ != nullptr;};
    void deleteAudioCodec() { this->audioCodec_ = nullptr;};
    inline string audioCodec() const { DARABONBA_PTR_GET_DEFAULT(audioCodec_, "") };
    inline UpdateMediaLiveChannelRequestAudioSettings& setAudioCodec(string audioCodec) { DARABONBA_PTR_SET_VALUE(audioCodec_, audioCodec) };


    // audioCodecSetting Field Functions 
    bool hasAudioCodecSetting() const { return this->audioCodecSetting_ != nullptr;};
    void deleteAudioCodecSetting() { this->audioCodecSetting_ = nullptr;};
    inline const Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting & audioCodecSetting() const { DARABONBA_PTR_GET_CONST(audioCodecSetting_, Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting) };
    inline Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting audioCodecSetting() { DARABONBA_PTR_GET(audioCodecSetting_, Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting) };
    inline UpdateMediaLiveChannelRequestAudioSettings& setAudioCodecSetting(const Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting & audioCodecSetting) { DARABONBA_PTR_SET_VALUE(audioCodecSetting_, audioCodecSetting) };
    inline UpdateMediaLiveChannelRequestAudioSettings& setAudioCodecSetting(Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting && audioCodecSetting) { DARABONBA_PTR_SET_RVALUE(audioCodecSetting_, audioCodecSetting) };


    // audioSelectorName Field Functions 
    bool hasAudioSelectorName() const { return this->audioSelectorName_ != nullptr;};
    void deleteAudioSelectorName() { this->audioSelectorName_ = nullptr;};
    inline string audioSelectorName() const { DARABONBA_PTR_GET_DEFAULT(audioSelectorName_, "") };
    inline UpdateMediaLiveChannelRequestAudioSettings& setAudioSelectorName(string audioSelectorName) { DARABONBA_PTR_SET_VALUE(audioSelectorName_, audioSelectorName) };


    // languageCode Field Functions 
    bool hasLanguageCode() const { return this->languageCode_ != nullptr;};
    void deleteLanguageCode() { this->languageCode_ = nullptr;};
    inline string languageCode() const { DARABONBA_PTR_GET_DEFAULT(languageCode_, "") };
    inline UpdateMediaLiveChannelRequestAudioSettings& setLanguageCode(string languageCode) { DARABONBA_PTR_SET_VALUE(languageCode_, languageCode) };


    // languageName Field Functions 
    bool hasLanguageName() const { return this->languageName_ != nullptr;};
    void deleteLanguageName() { this->languageName_ = nullptr;};
    inline string languageName() const { DARABONBA_PTR_GET_DEFAULT(languageName_, "") };
    inline UpdateMediaLiveChannelRequestAudioSettings& setLanguageName(string languageName) { DARABONBA_PTR_SET_VALUE(languageName_, languageName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateMediaLiveChannelRequestAudioSettings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The audio codec. If it is not specified, the source specification is used. Valid values: aac and libfdk_aac.
    std::shared_ptr<string> audioCodec_ = nullptr;
    // The audio encoding settings.
    std::shared_ptr<Models::UpdateMediaLiveChannelRequestAudioSettingsAudioCodecSetting> audioCodecSetting_ = nullptr;
    // The name of the audio selector.
    std::shared_ptr<string> audioSelectorName_ = nullptr;
    // Enter a three-letter ISO 639-2 language code. If the audio track selected by the audio selector has a language code, the language code specified in the audio selector is used. If the selected audio track does not have a language code, or if the audio selector cannot find a track that matches its criteria, this language code is used.
    std::shared_ptr<string> languageCode_ = nullptr;
    // The tag that identifies the language of the RTMP input. It can be referenced by the output. The maximum length is 32 characters. Supported characters:
    // 
    // *   Unicode letters
    // *   Digits (0-9)
    // *   Underscore (_)
    // *   Hyphen (-)
    // *   Space (a space cannot be at the beginning or end)
    std::shared_ptr<string> languageName_ = nullptr;
    // The name of the audio settings. Letters, digits, hyphens (-), and underscores (_) are supported. It can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
