// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AIAgentConfigAmbientSoundConfig.hpp>
#include <alibabacloud/models/AIAgentConfigAsrConfig.hpp>
#include <alibabacloud/models/AIAgentConfigAutoSpeechConfig.hpp>
#include <alibabacloud/models/AIAgentConfigAvatarConfig.hpp>
#include <alibabacloud/models/AIAgentConfigInterruptConfig.hpp>
#include <alibabacloud/models/AIAgentConfigLlmConfig.hpp>
#include <alibabacloud/models/AIAgentConfigTtsConfig.hpp>
#include <alibabacloud/models/AIAgentConfigTurnDetectionConfig.hpp>
#include <alibabacloud/models/AIAgentConfigVcrConfig.hpp>
#include <alibabacloud/models/AIAgentConfigVoiceprintConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(AutoSpeechConfig, autoSpeechConfig_);
      DARABONBA_PTR_TO_JSON(AvatarConfig, avatarConfig_);
      DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(AvatarUrlType, avatarUrlType_);
      DARABONBA_PTR_TO_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_TO_JSON(EnablePushToTalk, enablePushToTalk_);
      DARABONBA_PTR_TO_JSON(ExperimentalConfig, experimentalConfig_);
      DARABONBA_PTR_TO_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_TO_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(TurnDetectionConfig, turnDetectionConfig_);
      DARABONBA_PTR_TO_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_TO_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_TO_JSON(VcrConfig, vcrConfig_);
      DARABONBA_PTR_TO_JSON(VoiceprintConfig, voiceprintConfig_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
      DARABONBA_PTR_TO_JSON(WakeUpQuery, wakeUpQuery_);
      DARABONBA_PTR_TO_JSON(WorkflowOverrideParams, workflowOverrideParams_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AmbientSoundConfig, ambientSoundConfig_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(AutoSpeechConfig, autoSpeechConfig_);
      DARABONBA_PTR_FROM_JSON(AvatarConfig, avatarConfig_);
      DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(AvatarUrlType, avatarUrlType_);
      DARABONBA_PTR_FROM_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_FROM_JSON(EnablePushToTalk, enablePushToTalk_);
      DARABONBA_PTR_FROM_JSON(ExperimentalConfig, experimentalConfig_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(InterruptConfig, interruptConfig_);
      DARABONBA_PTR_FROM_JSON(LlmConfig, llmConfig_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(TurnDetectionConfig, turnDetectionConfig_);
      DARABONBA_PTR_FROM_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_FROM_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_FROM_JSON(VcrConfig, vcrConfig_);
      DARABONBA_PTR_FROM_JSON(VoiceprintConfig, voiceprintConfig_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
      DARABONBA_PTR_FROM_JSON(WakeUpQuery, wakeUpQuery_);
      DARABONBA_PTR_FROM_JSON(WorkflowOverrideParams, workflowOverrideParams_);
    };
    AIAgentConfig() = default ;
    AIAgentConfig(const AIAgentConfig &) = default ;
    AIAgentConfig(AIAgentConfig &&) = default ;
    AIAgentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfig() = default ;
    AIAgentConfig& operator=(const AIAgentConfig &) = default ;
    AIAgentConfig& operator=(AIAgentConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ambientSoundConfig_ == nullptr
        && return this->asrConfig_ == nullptr && return this->autoSpeechConfig_ == nullptr && return this->avatarConfig_ == nullptr && return this->avatarUrl_ == nullptr && return this->avatarUrlType_ == nullptr
        && return this->enableIntelligentSegment_ == nullptr && return this->enablePushToTalk_ == nullptr && return this->experimentalConfig_ == nullptr && return this->gracefulShutdown_ == nullptr && return this->greeting_ == nullptr
        && return this->interruptConfig_ == nullptr && return this->llmConfig_ == nullptr && return this->maxIdleTime_ == nullptr && return this->ttsConfig_ == nullptr && return this->turnDetectionConfig_ == nullptr
        && return this->userOfflineTimeout_ == nullptr && return this->userOnlineTimeout_ == nullptr && return this->vcrConfig_ == nullptr && return this->voiceprintConfig_ == nullptr && return this->volume_ == nullptr
        && return this->wakeUpQuery_ == nullptr && return this->workflowOverrideParams_ == nullptr; };
    // ambientSoundConfig Field Functions 
    bool hasAmbientSoundConfig() const { return this->ambientSoundConfig_ != nullptr;};
    void deleteAmbientSoundConfig() { this->ambientSoundConfig_ = nullptr;};
    inline const AIAgentConfigAmbientSoundConfig & ambientSoundConfig() const { DARABONBA_PTR_GET_CONST(ambientSoundConfig_, AIAgentConfigAmbientSoundConfig) };
    inline AIAgentConfigAmbientSoundConfig ambientSoundConfig() { DARABONBA_PTR_GET(ambientSoundConfig_, AIAgentConfigAmbientSoundConfig) };
    inline AIAgentConfig& setAmbientSoundConfig(const AIAgentConfigAmbientSoundConfig & ambientSoundConfig) { DARABONBA_PTR_SET_VALUE(ambientSoundConfig_, ambientSoundConfig) };
    inline AIAgentConfig& setAmbientSoundConfig(AIAgentConfigAmbientSoundConfig && ambientSoundConfig) { DARABONBA_PTR_SET_RVALUE(ambientSoundConfig_, ambientSoundConfig) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline const AIAgentConfigAsrConfig & asrConfig() const { DARABONBA_PTR_GET_CONST(asrConfig_, AIAgentConfigAsrConfig) };
    inline AIAgentConfigAsrConfig asrConfig() { DARABONBA_PTR_GET(asrConfig_, AIAgentConfigAsrConfig) };
    inline AIAgentConfig& setAsrConfig(const AIAgentConfigAsrConfig & asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };
    inline AIAgentConfig& setAsrConfig(AIAgentConfigAsrConfig && asrConfig) { DARABONBA_PTR_SET_RVALUE(asrConfig_, asrConfig) };


    // autoSpeechConfig Field Functions 
    bool hasAutoSpeechConfig() const { return this->autoSpeechConfig_ != nullptr;};
    void deleteAutoSpeechConfig() { this->autoSpeechConfig_ = nullptr;};
    inline const AIAgentConfigAutoSpeechConfig & autoSpeechConfig() const { DARABONBA_PTR_GET_CONST(autoSpeechConfig_, AIAgentConfigAutoSpeechConfig) };
    inline AIAgentConfigAutoSpeechConfig autoSpeechConfig() { DARABONBA_PTR_GET(autoSpeechConfig_, AIAgentConfigAutoSpeechConfig) };
    inline AIAgentConfig& setAutoSpeechConfig(const AIAgentConfigAutoSpeechConfig & autoSpeechConfig) { DARABONBA_PTR_SET_VALUE(autoSpeechConfig_, autoSpeechConfig) };
    inline AIAgentConfig& setAutoSpeechConfig(AIAgentConfigAutoSpeechConfig && autoSpeechConfig) { DARABONBA_PTR_SET_RVALUE(autoSpeechConfig_, autoSpeechConfig) };


    // avatarConfig Field Functions 
    bool hasAvatarConfig() const { return this->avatarConfig_ != nullptr;};
    void deleteAvatarConfig() { this->avatarConfig_ = nullptr;};
    inline const AIAgentConfigAvatarConfig & avatarConfig() const { DARABONBA_PTR_GET_CONST(avatarConfig_, AIAgentConfigAvatarConfig) };
    inline AIAgentConfigAvatarConfig avatarConfig() { DARABONBA_PTR_GET(avatarConfig_, AIAgentConfigAvatarConfig) };
    inline AIAgentConfig& setAvatarConfig(const AIAgentConfigAvatarConfig & avatarConfig) { DARABONBA_PTR_SET_VALUE(avatarConfig_, avatarConfig) };
    inline AIAgentConfig& setAvatarConfig(AIAgentConfigAvatarConfig && avatarConfig) { DARABONBA_PTR_SET_RVALUE(avatarConfig_, avatarConfig) };


    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline AIAgentConfig& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // avatarUrlType Field Functions 
    bool hasAvatarUrlType() const { return this->avatarUrlType_ != nullptr;};
    void deleteAvatarUrlType() { this->avatarUrlType_ = nullptr;};
    inline string avatarUrlType() const { DARABONBA_PTR_GET_DEFAULT(avatarUrlType_, "") };
    inline AIAgentConfig& setAvatarUrlType(string avatarUrlType) { DARABONBA_PTR_SET_VALUE(avatarUrlType_, avatarUrlType) };


    // enableIntelligentSegment Field Functions 
    bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
    void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
    inline bool enableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
    inline AIAgentConfig& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


    // enablePushToTalk Field Functions 
    bool hasEnablePushToTalk() const { return this->enablePushToTalk_ != nullptr;};
    void deleteEnablePushToTalk() { this->enablePushToTalk_ = nullptr;};
    inline bool enablePushToTalk() const { DARABONBA_PTR_GET_DEFAULT(enablePushToTalk_, false) };
    inline AIAgentConfig& setEnablePushToTalk(bool enablePushToTalk) { DARABONBA_PTR_SET_VALUE(enablePushToTalk_, enablePushToTalk) };


    // experimentalConfig Field Functions 
    bool hasExperimentalConfig() const { return this->experimentalConfig_ != nullptr;};
    void deleteExperimentalConfig() { this->experimentalConfig_ = nullptr;};
    inline string experimentalConfig() const { DARABONBA_PTR_GET_DEFAULT(experimentalConfig_, "") };
    inline AIAgentConfig& setExperimentalConfig(string experimentalConfig) { DARABONBA_PTR_SET_VALUE(experimentalConfig_, experimentalConfig) };


    // gracefulShutdown Field Functions 
    bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
    void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
    inline bool gracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
    inline AIAgentConfig& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline AIAgentConfig& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // interruptConfig Field Functions 
    bool hasInterruptConfig() const { return this->interruptConfig_ != nullptr;};
    void deleteInterruptConfig() { this->interruptConfig_ = nullptr;};
    inline const AIAgentConfigInterruptConfig & interruptConfig() const { DARABONBA_PTR_GET_CONST(interruptConfig_, AIAgentConfigInterruptConfig) };
    inline AIAgentConfigInterruptConfig interruptConfig() { DARABONBA_PTR_GET(interruptConfig_, AIAgentConfigInterruptConfig) };
    inline AIAgentConfig& setInterruptConfig(const AIAgentConfigInterruptConfig & interruptConfig) { DARABONBA_PTR_SET_VALUE(interruptConfig_, interruptConfig) };
    inline AIAgentConfig& setInterruptConfig(AIAgentConfigInterruptConfig && interruptConfig) { DARABONBA_PTR_SET_RVALUE(interruptConfig_, interruptConfig) };


    // llmConfig Field Functions 
    bool hasLlmConfig() const { return this->llmConfig_ != nullptr;};
    void deleteLlmConfig() { this->llmConfig_ = nullptr;};
    inline const AIAgentConfigLlmConfig & llmConfig() const { DARABONBA_PTR_GET_CONST(llmConfig_, AIAgentConfigLlmConfig) };
    inline AIAgentConfigLlmConfig llmConfig() { DARABONBA_PTR_GET(llmConfig_, AIAgentConfigLlmConfig) };
    inline AIAgentConfig& setLlmConfig(const AIAgentConfigLlmConfig & llmConfig) { DARABONBA_PTR_SET_VALUE(llmConfig_, llmConfig) };
    inline AIAgentConfig& setLlmConfig(AIAgentConfigLlmConfig && llmConfig) { DARABONBA_PTR_SET_RVALUE(llmConfig_, llmConfig) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int32_t maxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0) };
    inline AIAgentConfig& setMaxIdleTime(int32_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline const AIAgentConfigTtsConfig & ttsConfig() const { DARABONBA_PTR_GET_CONST(ttsConfig_, AIAgentConfigTtsConfig) };
    inline AIAgentConfigTtsConfig ttsConfig() { DARABONBA_PTR_GET(ttsConfig_, AIAgentConfigTtsConfig) };
    inline AIAgentConfig& setTtsConfig(const AIAgentConfigTtsConfig & ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };
    inline AIAgentConfig& setTtsConfig(AIAgentConfigTtsConfig && ttsConfig) { DARABONBA_PTR_SET_RVALUE(ttsConfig_, ttsConfig) };


    // turnDetectionConfig Field Functions 
    bool hasTurnDetectionConfig() const { return this->turnDetectionConfig_ != nullptr;};
    void deleteTurnDetectionConfig() { this->turnDetectionConfig_ = nullptr;};
    inline const AIAgentConfigTurnDetectionConfig & turnDetectionConfig() const { DARABONBA_PTR_GET_CONST(turnDetectionConfig_, AIAgentConfigTurnDetectionConfig) };
    inline AIAgentConfigTurnDetectionConfig turnDetectionConfig() { DARABONBA_PTR_GET(turnDetectionConfig_, AIAgentConfigTurnDetectionConfig) };
    inline AIAgentConfig& setTurnDetectionConfig(const AIAgentConfigTurnDetectionConfig & turnDetectionConfig) { DARABONBA_PTR_SET_VALUE(turnDetectionConfig_, turnDetectionConfig) };
    inline AIAgentConfig& setTurnDetectionConfig(AIAgentConfigTurnDetectionConfig && turnDetectionConfig) { DARABONBA_PTR_SET_RVALUE(turnDetectionConfig_, turnDetectionConfig) };


    // userOfflineTimeout Field Functions 
    bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
    void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
    inline int32_t userOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
    inline AIAgentConfig& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


    // userOnlineTimeout Field Functions 
    bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
    void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
    inline int32_t userOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
    inline AIAgentConfig& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


    // vcrConfig Field Functions 
    bool hasVcrConfig() const { return this->vcrConfig_ != nullptr;};
    void deleteVcrConfig() { this->vcrConfig_ = nullptr;};
    inline const AIAgentConfigVcrConfig & vcrConfig() const { DARABONBA_PTR_GET_CONST(vcrConfig_, AIAgentConfigVcrConfig) };
    inline AIAgentConfigVcrConfig vcrConfig() { DARABONBA_PTR_GET(vcrConfig_, AIAgentConfigVcrConfig) };
    inline AIAgentConfig& setVcrConfig(const AIAgentConfigVcrConfig & vcrConfig) { DARABONBA_PTR_SET_VALUE(vcrConfig_, vcrConfig) };
    inline AIAgentConfig& setVcrConfig(AIAgentConfigVcrConfig && vcrConfig) { DARABONBA_PTR_SET_RVALUE(vcrConfig_, vcrConfig) };


    // voiceprintConfig Field Functions 
    bool hasVoiceprintConfig() const { return this->voiceprintConfig_ != nullptr;};
    void deleteVoiceprintConfig() { this->voiceprintConfig_ = nullptr;};
    inline const AIAgentConfigVoiceprintConfig & voiceprintConfig() const { DARABONBA_PTR_GET_CONST(voiceprintConfig_, AIAgentConfigVoiceprintConfig) };
    inline AIAgentConfigVoiceprintConfig voiceprintConfig() { DARABONBA_PTR_GET(voiceprintConfig_, AIAgentConfigVoiceprintConfig) };
    inline AIAgentConfig& setVoiceprintConfig(const AIAgentConfigVoiceprintConfig & voiceprintConfig) { DARABONBA_PTR_SET_VALUE(voiceprintConfig_, voiceprintConfig) };
    inline AIAgentConfig& setVoiceprintConfig(AIAgentConfigVoiceprintConfig && voiceprintConfig) { DARABONBA_PTR_SET_RVALUE(voiceprintConfig_, voiceprintConfig) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int64_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
    inline AIAgentConfig& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    // wakeUpQuery Field Functions 
    bool hasWakeUpQuery() const { return this->wakeUpQuery_ != nullptr;};
    void deleteWakeUpQuery() { this->wakeUpQuery_ = nullptr;};
    inline string wakeUpQuery() const { DARABONBA_PTR_GET_DEFAULT(wakeUpQuery_, "") };
    inline AIAgentConfig& setWakeUpQuery(string wakeUpQuery) { DARABONBA_PTR_SET_VALUE(wakeUpQuery_, wakeUpQuery) };


    // workflowOverrideParams Field Functions 
    bool hasWorkflowOverrideParams() const { return this->workflowOverrideParams_ != nullptr;};
    void deleteWorkflowOverrideParams() { this->workflowOverrideParams_ = nullptr;};
    inline string workflowOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(workflowOverrideParams_, "") };
    inline AIAgentConfig& setWorkflowOverrideParams(string workflowOverrideParams) { DARABONBA_PTR_SET_VALUE(workflowOverrideParams_, workflowOverrideParams) };


  protected:
    std::shared_ptr<AIAgentConfigAmbientSoundConfig> ambientSoundConfig_ = nullptr;
    std::shared_ptr<AIAgentConfigAsrConfig> asrConfig_ = nullptr;
    std::shared_ptr<AIAgentConfigAutoSpeechConfig> autoSpeechConfig_ = nullptr;
    std::shared_ptr<AIAgentConfigAvatarConfig> avatarConfig_ = nullptr;
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> avatarUrlType_ = nullptr;
    std::shared_ptr<bool> enableIntelligentSegment_ = nullptr;
    std::shared_ptr<bool> enablePushToTalk_ = nullptr;
    std::shared_ptr<string> experimentalConfig_ = nullptr;
    std::shared_ptr<bool> gracefulShutdown_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<AIAgentConfigInterruptConfig> interruptConfig_ = nullptr;
    std::shared_ptr<AIAgentConfigLlmConfig> llmConfig_ = nullptr;
    std::shared_ptr<int32_t> maxIdleTime_ = nullptr;
    std::shared_ptr<AIAgentConfigTtsConfig> ttsConfig_ = nullptr;
    std::shared_ptr<AIAgentConfigTurnDetectionConfig> turnDetectionConfig_ = nullptr;
    std::shared_ptr<int32_t> userOfflineTimeout_ = nullptr;
    std::shared_ptr<int32_t> userOnlineTimeout_ = nullptr;
    std::shared_ptr<AIAgentConfigVcrConfig> vcrConfig_ = nullptr;
    std::shared_ptr<AIAgentConfigVoiceprintConfig> voiceprintConfig_ = nullptr;
    std::shared_ptr<int64_t> volume_ = nullptr;
    std::shared_ptr<string> wakeUpQuery_ = nullptr;
    std::shared_ptr<string> workflowOverrideParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
