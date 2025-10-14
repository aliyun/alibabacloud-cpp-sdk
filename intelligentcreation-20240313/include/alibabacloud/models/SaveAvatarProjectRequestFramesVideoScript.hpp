// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMESVIDEOSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMESVIDEOSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SaveAvatarProjectRequestFramesVideoScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAvatarProjectRequestFramesVideoScript& obj) { 
      DARABONBA_PTR_TO_JSON(emotion, emotion_);
      DARABONBA_PTR_TO_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(speedRate, speedRate_);
      DARABONBA_PTR_TO_JSON(textContent, textContent_);
      DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_TO_JSON(voiceTemplateId, voiceTemplateId_);
      DARABONBA_PTR_TO_JSON(volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAvatarProjectRequestFramesVideoScript& obj) { 
      DARABONBA_PTR_FROM_JSON(emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(speedRate, speedRate_);
      DARABONBA_PTR_FROM_JSON(textContent, textContent_);
      DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_FROM_JSON(voiceTemplateId, voiceTemplateId_);
      DARABONBA_PTR_FROM_JSON(volume, volume_);
    };
    SaveAvatarProjectRequestFramesVideoScript() = default ;
    SaveAvatarProjectRequestFramesVideoScript(const SaveAvatarProjectRequestFramesVideoScript &) = default ;
    SaveAvatarProjectRequestFramesVideoScript(SaveAvatarProjectRequestFramesVideoScript &&) = default ;
    SaveAvatarProjectRequestFramesVideoScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAvatarProjectRequestFramesVideoScript() = default ;
    SaveAvatarProjectRequestFramesVideoScript& operator=(const SaveAvatarProjectRequestFramesVideoScript &) = default ;
    SaveAvatarProjectRequestFramesVideoScript& operator=(SaveAvatarProjectRequestFramesVideoScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emotion_ == nullptr
        && return this->pitchRate_ == nullptr && return this->speedRate_ == nullptr && return this->textContent_ == nullptr && return this->voiceLanguage_ == nullptr && return this->voiceTemplateId_ == nullptr
        && return this->volume_ == nullptr; };
    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string emotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline string pitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setPitchRate(string pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // speedRate Field Functions 
    bool hasSpeedRate() const { return this->speedRate_ != nullptr;};
    void deleteSpeedRate() { this->speedRate_ = nullptr;};
    inline string speedRate() const { DARABONBA_PTR_GET_DEFAULT(speedRate_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setSpeedRate(string speedRate) { DARABONBA_PTR_SET_VALUE(speedRate_, speedRate) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string textContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string voiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // voiceTemplateId Field Functions 
    bool hasVoiceTemplateId() const { return this->voiceTemplateId_ != nullptr;};
    void deleteVoiceTemplateId() { this->voiceTemplateId_ = nullptr;};
    inline string voiceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(voiceTemplateId_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setVoiceTemplateId(string voiceTemplateId) { DARABONBA_PTR_SET_VALUE(voiceTemplateId_, voiceTemplateId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline string volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
    inline SaveAvatarProjectRequestFramesVideoScript& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> emotion_ = nullptr;
    std::shared_ptr<string> pitchRate_ = nullptr;
    std::shared_ptr<string> speedRate_ = nullptr;
    std::shared_ptr<string> textContent_ = nullptr;
    std::shared_ptr<string> voiceLanguage_ = nullptr;
    std::shared_ptr<string> voiceTemplateId_ = nullptr;
    std::shared_ptr<string> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
