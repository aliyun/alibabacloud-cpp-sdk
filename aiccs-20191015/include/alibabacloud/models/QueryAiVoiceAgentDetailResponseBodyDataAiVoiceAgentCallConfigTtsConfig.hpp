// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIGTTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYAIVOICEAGENTDETAILRESPONSEBODYDATAAIVOICEAGENTCALLCONFIGTTSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundEnabled, backgroundEnabled_);
      DARABONBA_PTR_TO_JSON(BackgroundSound, backgroundSound_);
      DARABONBA_PTR_TO_JSON(BackgroundVolume, backgroundVolume_);
      DARABONBA_PTR_TO_JSON(MixingEnabled, mixingEnabled_);
      DARABONBA_PTR_TO_JSON(MixingTemplate, mixingTemplate_);
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
      DARABONBA_PTR_TO_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundEnabled, backgroundEnabled_);
      DARABONBA_PTR_FROM_JSON(BackgroundSound, backgroundSound_);
      DARABONBA_PTR_FROM_JSON(BackgroundVolume, backgroundVolume_);
      DARABONBA_PTR_FROM_JSON(MixingEnabled, mixingEnabled_);
      DARABONBA_PTR_FROM_JSON(MixingTemplate, mixingTemplate_);
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
      DARABONBA_PTR_FROM_JSON(VoiceCode, voiceCode_);
      DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
    };
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &&) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig() = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& operator=(const QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &) = default ;
    QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& operator=(QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundEnabled_ == nullptr
        && return this->backgroundSound_ == nullptr && return this->backgroundVolume_ == nullptr && return this->mixingEnabled_ == nullptr && return this->mixingTemplate_ == nullptr && return this->ttsSpeed_ == nullptr
        && return this->ttsStyle_ == nullptr && return this->ttsVolume_ == nullptr && return this->voiceCode_ == nullptr && return this->voiceType_ == nullptr; };
    // backgroundEnabled Field Functions 
    bool hasBackgroundEnabled() const { return this->backgroundEnabled_ != nullptr;};
    void deleteBackgroundEnabled() { this->backgroundEnabled_ = nullptr;};
    inline bool backgroundEnabled() const { DARABONBA_PTR_GET_DEFAULT(backgroundEnabled_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setBackgroundEnabled(bool backgroundEnabled) { DARABONBA_PTR_SET_VALUE(backgroundEnabled_, backgroundEnabled) };


    // backgroundSound Field Functions 
    bool hasBackgroundSound() const { return this->backgroundSound_ != nullptr;};
    void deleteBackgroundSound() { this->backgroundSound_ = nullptr;};
    inline int64_t backgroundSound() const { DARABONBA_PTR_GET_DEFAULT(backgroundSound_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setBackgroundSound(int64_t backgroundSound) { DARABONBA_PTR_SET_VALUE(backgroundSound_, backgroundSound) };


    // backgroundVolume Field Functions 
    bool hasBackgroundVolume() const { return this->backgroundVolume_ != nullptr;};
    void deleteBackgroundVolume() { this->backgroundVolume_ = nullptr;};
    inline int64_t backgroundVolume() const { DARABONBA_PTR_GET_DEFAULT(backgroundVolume_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setBackgroundVolume(int64_t backgroundVolume) { DARABONBA_PTR_SET_VALUE(backgroundVolume_, backgroundVolume) };


    // mixingEnabled Field Functions 
    bool hasMixingEnabled() const { return this->mixingEnabled_ != nullptr;};
    void deleteMixingEnabled() { this->mixingEnabled_ = nullptr;};
    inline bool mixingEnabled() const { DARABONBA_PTR_GET_DEFAULT(mixingEnabled_, false) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setMixingEnabled(bool mixingEnabled) { DARABONBA_PTR_SET_VALUE(mixingEnabled_, mixingEnabled) };


    // mixingTemplate Field Functions 
    bool hasMixingTemplate() const { return this->mixingTemplate_ != nullptr;};
    void deleteMixingTemplate() { this->mixingTemplate_ = nullptr;};
    inline int64_t mixingTemplate() const { DARABONBA_PTR_GET_DEFAULT(mixingTemplate_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setMixingTemplate(int64_t mixingTemplate) { DARABONBA_PTR_SET_VALUE(mixingTemplate_, mixingTemplate) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int64_t ttsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setTtsSpeed(int64_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsStyle Field Functions 
    bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
    void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
    inline string ttsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int64_t ttsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0L) };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setTtsVolume(int64_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


    // voiceCode Field Functions 
    bool hasVoiceCode() const { return this->voiceCode_ != nullptr;};
    void deleteVoiceCode() { this->voiceCode_ = nullptr;};
    inline string voiceCode() const { DARABONBA_PTR_GET_DEFAULT(voiceCode_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setVoiceCode(string voiceCode) { DARABONBA_PTR_SET_VALUE(voiceCode_, voiceCode) };


    // voiceType Field Functions 
    bool hasVoiceType() const { return this->voiceType_ != nullptr;};
    void deleteVoiceType() { this->voiceType_ = nullptr;};
    inline string voiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
    inline QueryAiVoiceAgentDetailResponseBodyDataAiVoiceAgentCallConfigTtsConfig& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


  protected:
    std::shared_ptr<bool> backgroundEnabled_ = nullptr;
    std::shared_ptr<int64_t> backgroundSound_ = nullptr;
    std::shared_ptr<int64_t> backgroundVolume_ = nullptr;
    std::shared_ptr<bool> mixingEnabled_ = nullptr;
    std::shared_ptr<int64_t> mixingTemplate_ = nullptr;
    std::shared_ptr<int64_t> ttsSpeed_ = nullptr;
    std::shared_ptr<string> ttsStyle_ = nullptr;
    std::shared_ptr<int64_t> ttsVolume_ = nullptr;
    std::shared_ptr<string> voiceCode_ = nullptr;
    std::shared_ptr<string> voiceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
