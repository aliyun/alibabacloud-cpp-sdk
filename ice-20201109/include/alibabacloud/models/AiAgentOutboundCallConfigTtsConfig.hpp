// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGTTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGTTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentOutboundCallConfigTtsConfigPronunciationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigTtsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigTtsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Emotion, emotion_);
      DARABONBA_PTR_TO_JSON(LanguageId, languageId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(PronunciationRules, pronunciationRules_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceIdList, voiceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigTtsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Emotion, emotion_);
      DARABONBA_PTR_FROM_JSON(LanguageId, languageId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(PronunciationRules, pronunciationRules_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceIdList, voiceIdList_);
    };
    AIAgentOutboundCallConfigTtsConfig() = default ;
    AIAgentOutboundCallConfigTtsConfig(const AIAgentOutboundCallConfigTtsConfig &) = default ;
    AIAgentOutboundCallConfigTtsConfig(AIAgentOutboundCallConfigTtsConfig &&) = default ;
    AIAgentOutboundCallConfigTtsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigTtsConfig() = default ;
    AIAgentOutboundCallConfigTtsConfig& operator=(const AIAgentOutboundCallConfigTtsConfig &) = default ;
    AIAgentOutboundCallConfigTtsConfig& operator=(AIAgentOutboundCallConfigTtsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emotion_ == nullptr
        && return this->languageId_ == nullptr && return this->modelId_ == nullptr && return this->pronunciationRules_ == nullptr && return this->speechRate_ == nullptr && return this->voiceId_ == nullptr
        && return this->voiceIdList_ == nullptr; };
    // emotion Field Functions 
    bool hasEmotion() const { return this->emotion_ != nullptr;};
    void deleteEmotion() { this->emotion_ = nullptr;};
    inline string emotion() const { DARABONBA_PTR_GET_DEFAULT(emotion_, "") };
    inline AIAgentOutboundCallConfigTtsConfig& setEmotion(string emotion) { DARABONBA_PTR_SET_VALUE(emotion_, emotion) };


    // languageId Field Functions 
    bool hasLanguageId() const { return this->languageId_ != nullptr;};
    void deleteLanguageId() { this->languageId_ = nullptr;};
    inline string languageId() const { DARABONBA_PTR_GET_DEFAULT(languageId_, "") };
    inline AIAgentOutboundCallConfigTtsConfig& setLanguageId(string languageId) { DARABONBA_PTR_SET_VALUE(languageId_, languageId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline AIAgentOutboundCallConfigTtsConfig& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // pronunciationRules Field Functions 
    bool hasPronunciationRules() const { return this->pronunciationRules_ != nullptr;};
    void deletePronunciationRules() { this->pronunciationRules_ = nullptr;};
    inline const vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules> & pronunciationRules() const { DARABONBA_PTR_GET_CONST(pronunciationRules_, vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules>) };
    inline vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules> pronunciationRules() { DARABONBA_PTR_GET(pronunciationRules_, vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules>) };
    inline AIAgentOutboundCallConfigTtsConfig& setPronunciationRules(const vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules> & pronunciationRules) { DARABONBA_PTR_SET_VALUE(pronunciationRules_, pronunciationRules) };
    inline AIAgentOutboundCallConfigTtsConfig& setPronunciationRules(vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules> && pronunciationRules) { DARABONBA_PTR_SET_RVALUE(pronunciationRules_, pronunciationRules) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline double speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0.0) };
    inline AIAgentOutboundCallConfigTtsConfig& setSpeechRate(double speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline AIAgentOutboundCallConfigTtsConfig& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceIdList Field Functions 
    bool hasVoiceIdList() const { return this->voiceIdList_ != nullptr;};
    void deleteVoiceIdList() { this->voiceIdList_ = nullptr;};
    inline const vector<string> & voiceIdList() const { DARABONBA_PTR_GET_CONST(voiceIdList_, vector<string>) };
    inline vector<string> voiceIdList() { DARABONBA_PTR_GET(voiceIdList_, vector<string>) };
    inline AIAgentOutboundCallConfigTtsConfig& setVoiceIdList(const vector<string> & voiceIdList) { DARABONBA_PTR_SET_VALUE(voiceIdList_, voiceIdList) };
    inline AIAgentOutboundCallConfigTtsConfig& setVoiceIdList(vector<string> && voiceIdList) { DARABONBA_PTR_SET_RVALUE(voiceIdList_, voiceIdList) };


  protected:
    std::shared_ptr<string> emotion_ = nullptr;
    std::shared_ptr<string> languageId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentOutboundCallConfigTtsConfigPronunciationRules>> pronunciationRules_ = nullptr;
    std::shared_ptr<double> speechRate_ = nullptr;
    std::shared_ptr<string> voiceId_ = nullptr;
    std::shared_ptr<vector<string>> voiceIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
