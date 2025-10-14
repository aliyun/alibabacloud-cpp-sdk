// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESVIDEOSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMESVIDEOSCRIPT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequestFramesVideoScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequestFramesVideoScript& obj) { 
      DARABONBA_PTR_TO_JSON(audioUrl, audioUrl_);
      DARABONBA_PTR_TO_JSON(emotion, emotion_);
      DARABONBA_PTR_TO_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(speechOpen, speechOpen_);
      DARABONBA_PTR_TO_JSON(speedRate, speedRate_);
      DARABONBA_PTR_TO_JSON(textContent, textContent_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_TO_JSON(voiceTemplateId, voiceTemplateId_);
      DARABONBA_PTR_TO_JSON(volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequestFramesVideoScript& obj) { 
      DARABONBA_PTR_FROM_JSON(audioUrl, audioUrl_);
      DARABONBA_PTR_FROM_JSON(emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(pitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(speechOpen, speechOpen_);
      DARABONBA_PTR_FROM_JSON(speedRate, speedRate_);
      DARABONBA_PTR_FROM_JSON(textContent, textContent_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(voiceLanguage, voiceLanguage_);
      DARABONBA_PTR_FROM_JSON(voiceTemplateId, voiceTemplateId_);
      DARABONBA_PTR_FROM_JSON(volume, volume_);
    };
    SubmitProjectTaskRequestFramesVideoScript() = default ;
    SubmitProjectTaskRequestFramesVideoScript(const SubmitProjectTaskRequestFramesVideoScript &) = default ;
    SubmitProjectTaskRequestFramesVideoScript(SubmitProjectTaskRequestFramesVideoScript &&) = default ;
    SubmitProjectTaskRequestFramesVideoScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequestFramesVideoScript() = default ;
    SubmitProjectTaskRequestFramesVideoScript& operator=(const SubmitProjectTaskRequestFramesVideoScript &) = default ;
    SubmitProjectTaskRequestFramesVideoScript& operator=(SubmitProjectTaskRequestFramesVideoScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioUrl_ == nullptr
        && return this->emotion_ == nullptr && return this->pitchRate_ == nullptr && return this->speechOpen_ == nullptr && return this->speedRate_ == nullptr && return this->textContent_ == nullptr
        && return this->type_ == nullptr && return this->voiceLanguage_ == nullptr && return this->voiceTemplateId_ == nullptr && return this->volume_ == nullptr; };
    // audioUrl Field Functions 
    bool hasAudioUrl() const { return this->audioUrl_ != nullptr;};
    void deleteAudioUrl() { this->audioUrl_ = nullptr;};
    inline string audioUrl() const { DARABONBA_PTR_GET_DEFAULT(audioUrl_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setAudioUrl(string audioUrl) { DARABONBA_PTR_SET_VALUE(audioUrl_, audioUrl) };


    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string emotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline string pitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setPitchRate(string pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // speechOpen Field Functions 
    bool hasSpeechOpen() const { return this->speechOpen_ != nullptr;};
    void deleteSpeechOpen() { this->speechOpen_ = nullptr;};
    inline bool speechOpen() const { DARABONBA_PTR_GET_DEFAULT(speechOpen_, false) };
    inline SubmitProjectTaskRequestFramesVideoScript& setSpeechOpen(bool speechOpen) { DARABONBA_PTR_SET_VALUE(speechOpen_, speechOpen) };


    // speedRate Field Functions 
    bool hasSpeedRate() const { return this->speedRate_ != nullptr;};
    void deleteSpeedRate() { this->speedRate_ = nullptr;};
    inline string speedRate() const { DARABONBA_PTR_GET_DEFAULT(speedRate_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setSpeedRate(string speedRate) { DARABONBA_PTR_SET_VALUE(speedRate_, speedRate) };


    // textContent Field Functions 
    bool hasTextContent() const { return this->textContent_ != nullptr;};
    void deleteTextContent() { this->textContent_ = nullptr;};
    inline string textContent() const { DARABONBA_PTR_GET_DEFAULT(textContent_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setTextContent(string textContent) { DARABONBA_PTR_SET_VALUE(textContent_, textContent) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // voiceLanguage Field Functions 
    bool hasVoiceLanguage() const { return this->voiceLanguage_ != nullptr;};
    void deleteVoiceLanguage() { this->voiceLanguage_ = nullptr;};
    inline string voiceLanguage() const { DARABONBA_PTR_GET_DEFAULT(voiceLanguage_, "") };
    inline SubmitProjectTaskRequestFramesVideoScript& setVoiceLanguage(string voiceLanguage) { DARABONBA_PTR_SET_VALUE(voiceLanguage_, voiceLanguage) };


    // voiceTemplateId Field Functions 
    bool hasVoiceTemplateId() const { return this->voiceTemplateId_ != nullptr;};
    void deleteVoiceTemplateId() { this->voiceTemplateId_ = nullptr;};
    inline int64_t voiceTemplateId() const { DARABONBA_PTR_GET_DEFAULT(voiceTemplateId_, 0L) };
    inline SubmitProjectTaskRequestFramesVideoScript& setVoiceTemplateId(int64_t voiceTemplateId) { DARABONBA_PTR_SET_VALUE(voiceTemplateId_, voiceTemplateId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SubmitProjectTaskRequestFramesVideoScript& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> audioUrl_ = nullptr;
    std::shared_ptr<string> emotion_ = nullptr;
    std::shared_ptr<string> pitchRate_ = nullptr;
    std::shared_ptr<bool> speechOpen_ = nullptr;
    std::shared_ptr<string> speedRate_ = nullptr;
    std::shared_ptr<string> textContent_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> voiceLanguage_ = nullptr;
    std::shared_ptr<int64_t> voiceTemplateId_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
