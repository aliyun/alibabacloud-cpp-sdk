// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigAmbientSoundConfig.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigAsrConfig.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigInterruptConfig.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigLlmConfig.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigTtsConfig.hpp>
#include <alibabacloud/models/AIAgentOutboundCallConfigTurnDetectionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_TO_JSON(ExperimentalConfig, experimentalConfig_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(GreetingDelay, greetingDelay_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(TurnDetectionConfig, turnDetectionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_FROM_JSON(ExperimentalConfig, experimentalConfig_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(GreetingDelay, greetingDelay_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(TurnDetectionConfig, turnDetectionConfig_);
    };
    AIAgentOutboundCallConfig() = default ;
    AIAgentOutboundCallConfig(const AIAgentOutboundCallConfig &) = default ;
    AIAgentOutboundCallConfig(AIAgentOutboundCallConfig &&) = default ;
    AIAgentOutboundCallConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfig() = default ;
    AIAgentOutboundCallConfig& operator=(const AIAgentOutboundCallConfig &) = default ;
    AIAgentOutboundCallConfig& operator=(AIAgentOutboundCallConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ambientSoundConfig_ == nullptr
        && return this->asrConfig_ == nullptr && return this->enableIntelligentSegment_ == nullptr && return this->experimentalConfig_ == nullptr && return this->greeting_ == nullptr && return this->greetingDelay_ == nullptr
        && return this->interruptConfig_ == nullptr && return this->llmConfig_ == nullptr && return this->ttsConfig_ == nullptr && return this->turnDetectionConfig_ == nullptr; };
    // ambientSoundConfig Field Functions 
    bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
    void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
    inline const AIAgentOutboundCallConfigAmbientSoundConfig & ambientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, AIAgentOutboundCallConfigAmbientSoundConfig) };
    inline AIAgentOutboundCallConfigAmbientSoundConfig ambientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, AIAgentOutboundCallConfigAmbientSoundConfig) };
    inline AIAgentOutboundCallConfig& setAmbientSoundConfig(const AIAgentOutboundCallConfigAmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
    inline AIAgentOutboundCallConfig& setAmbientSoundConfig(AIAgentOutboundCallConfigAmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const AIAgentOutboundCallConfigAsrConfig & asrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, AIAgentOutboundCallConfigAsrConfig) };
    inline AIAgentOutboundCallConfigAsrConfig asrConfig() { DARABONBA_PTR_GET(asrConfig_, AIAgentOutboundCallConfigAsrConfig) };
    inline AIAgentOutboundCallConfig& setAsrConfig(const AIAgentOutboundCallConfigAsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline AIAgentOutboundCallConfig& setAsrConfig(AIAgentOutboundCallConfigAsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // enableIntelligentSegment Field Functions 
    bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
    void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
    inline bool enableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
    inline AIAgentOutboundCallConfig& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


    // experimentalConfig Field Functions 
    bool hasExperimentalConfig() const { return this->experimentalConfig_ != nullptr;};
    void deleteExperimentalConfig() { this->experimentalConfig_ = nullptr;};
    inline string experimentalConfig() const { DARABONBA_PTR_GET_DEFAULT(experimentalConfig_, "") };
    inline AIAgentOutboundCallConfig& setExperimentalConfig(string experimentalConfig) { DARABONBA_PTR_SET_VALUE(experimentalConfig_, experimentalConfig) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline AIAgentOutboundCallConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // greetingDelay Field Functions 
    bool hasGreetingDelay() const { return this->greetingDelay_ != nullptr;};
    void deleteGreetingDelay() { this->greetingDelay_ = nullptr;};
    inline int32_t greetingDelay() const { DARABONBA_PTR_GET_DEFAULT(greetingDelay_, 0) };
    inline AIAgentOutboundCallConfig& setGreetingDelay(int32_t greetingDelay) { DARABONBA_PTR_SET_VALUE(greetingDelay_, greetingDelay) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const AIAgentOutboundCallConfigInterruptConfig & interruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, AIAgentOutboundCallConfigInterruptConfig) };
    inline AIAgentOutboundCallConfigInterruptConfig interruptConfig() { DARABONBA_PTR_GET(interruptConfig_, AIAgentOutboundCallConfigInterruptConfig) };
    inline AIAgentOutboundCallConfig& setInterruptConfig(const AIAgentOutboundCallConfigInterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline AIAgentOutboundCallConfig& setInterruptConfig(AIAgentOutboundCallConfigInterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const AIAgentOutboundCallConfigLlmConfig & llmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, AIAgentOutboundCallConfigLlmConfig) };
    inline AIAgentOutboundCallConfigLlmConfig llmConfig() { DARABONBA_PTR_GET(llmConfig_, AIAgentOutboundCallConfigLlmConfig) };
    inline AIAgentOutboundCallConfig& setLlmConfig(const AIAgentOutboundCallConfigLlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline AIAgentOutboundCallConfig& setLlmConfig(AIAgentOutboundCallConfigLlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const AIAgentOutboundCallConfigTtsConfig & ttsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, AIAgentOutboundCallConfigTtsConfig) };
    inline AIAgentOutboundCallConfigTtsConfig ttsConfig() { DARABONBA_PTR_GET(ttsConfig_, AIAgentOutboundCallConfigTtsConfig) };
    inline AIAgentOutboundCallConfig& setTtsConfig(const AIAgentOutboundCallConfigTtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline AIAgentOutboundCallConfig& setTtsConfig(AIAgentOutboundCallConfigTtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // turnDetectionConfig Field Functions 
    bool hasTurnDetectionConfig() const { return this->turnDetectionConfig_ != nullptr;};
    void deleteTurnDetectionConfig() { this->turnDetectionConfig_ = nullptr;};
    inline const AIAgentOutboundCallConfigTurnDetectionConfig & turnDetectionConfig() const { DARABONBA_PTR_GET_CONST(turnDetectionConfig_, AIAgentOutboundCallConfigTurnDetectionConfig) };
    inline AIAgentOutboundCallConfigTurnDetectionConfig turnDetectionConfig() { DARABONBA_PTR_GET(turnDetectionConfig_, AIAgentOutboundCallConfigTurnDetectionConfig) };
    inline AIAgentOutboundCallConfig& setTurnDetectionConfig(const AIAgentOutboundCallConfigTurnDetectionConfig & turnDetectionConfig) { DARABONBA_PTR_SET_VALUE(turnDetectionConfig_, turnDetectionConfig) };
    inline AIAgentOutboundCallConfig& setTurnDetectionConfig(AIAgentOutboundCallConfigTurnDetectionConfig && turnDetectionConfig) { DARABONBA_PTR_SET_RVALUE(turnDetectionConfig_, turnDetectionConfig) };


  protected:
    std::shared_ptr<AIAgentOutboundCallConfigAmbientSoundConfig> ambientSoundConfig_ = nullptr;
    std::shared_ptr<AIAgentOutboundCallConfigAsrConfig> asrConfig_ = nullptr;
    std::shared_ptr<bool> enableIntelligentSegment_ = nullptr;
    std::shared_ptr<string> experimentalConfig_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<int32_t> greetingDelay_ = nullptr;
    std::shared_ptr<AIAgentOutboundCallConfigInterruptConfig> interruptConfig_ = nullptr;
    std::shared_ptr<AIAgentOutboundCallConfigLlmConfig> llmConfig_ = nullptr;
    std::shared_ptr<AIAgentOutboundCallConfigTtsConfig> ttsConfig_ = nullptr;
    std::shared_ptr<AIAgentOutboundCallConfigTurnDetectionConfig> turnDetectionConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
