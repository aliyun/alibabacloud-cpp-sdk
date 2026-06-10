// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCRIPTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LabelConfig, labelConfig_);
      DARABONBA_PTR_TO_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_TO_JSON(MiniPlaybackConfigListJsonString, miniPlaybackConfigListJsonString_);
      DARABONBA_PTR_TO_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_TO_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_TO_JSON(NlsConfig, nlsConfig_);
      DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptWaveform, scriptWaveform_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LabelConfig, labelConfig_);
      DARABONBA_PTR_FROM_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_FROM_JSON(MiniPlaybackConfigListJsonString, miniPlaybackConfigListJsonString_);
      DARABONBA_PTR_FROM_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_FROM_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_FROM_JSON(NlsConfig, nlsConfig_);
      DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptWaveform, scriptWaveform_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
    };
    ModifyScriptRequest() = default ;
    ModifyScriptRequest(const ModifyScriptRequest &) = default ;
    ModifyScriptRequest(ModifyScriptRequest &&) = default ;
    ModifyScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScriptRequest() = default ;
    ModifyScriptRequest& operator=(const ModifyScriptRequest &) = default ;
    ModifyScriptRequest& operator=(ModifyScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentKey_ == nullptr && this->agentLlm_ == nullptr && this->asrConfig_ == nullptr && this->chatConfig_ == nullptr && this->chatbotId_ == nullptr
        && this->emotionEnable_ == nullptr && this->industry_ == nullptr && this->instanceId_ == nullptr && this->labelConfig_ == nullptr && this->longWaitEnable_ == nullptr
        && this->miniPlaybackConfigListJsonString_ == nullptr && this->miniPlaybackEnable_ == nullptr && this->newBargeInEnable_ == nullptr && this->nlsConfig_ == nullptr && this->nluAccessType_ == nullptr
        && this->nluEngine_ == nullptr && this->scene_ == nullptr && this->scriptContent_ == nullptr && this->scriptDescription_ == nullptr && this->scriptId_ == nullptr
        && this->scriptName_ == nullptr && this->scriptWaveform_ == nullptr && this->ttsConfig_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline ModifyScriptRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ModifyScriptRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentLlm Field Functions 
    bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
    void deleteAgentLlm() { this->agentLlm_ = nullptr;};
    inline bool getAgentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
    inline ModifyScriptRequest& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline string getAsrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
    inline ModifyScriptRequest& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline string getChatConfig() const { DARABONBA_PTR_GET_DEFAULT(chatConfig_, "") };
    inline ModifyScriptRequest& setChatConfig(string chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline ModifyScriptRequest& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // emotionEnable Field Functions 
    bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
    void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
    inline bool getEmotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
    inline ModifyScriptRequest& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline ModifyScriptRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labelConfig Field Functions 
    bool hasLabelConfig() const { return this->labelConfig_ != nullptr;};
    void deleteLabelConfig() { this->labelConfig_ = nullptr;};
    inline string getLabelConfig() const { DARABONBA_PTR_GET_DEFAULT(labelConfig_, "") };
    inline ModifyScriptRequest& setLabelConfig(string labelConfig) { DARABONBA_PTR_SET_VALUE(labelConfig_, labelConfig) };


    // longWaitEnable Field Functions 
    bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
    void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
    inline bool getLongWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
    inline ModifyScriptRequest& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


    // miniPlaybackConfigListJsonString Field Functions 
    bool hasMiniPlaybackConfigListJsonString() const { return this->miniPlaybackConfigListJsonString_ != nullptr;};
    void deleteMiniPlaybackConfigListJsonString() { this->miniPlaybackConfigListJsonString_ = nullptr;};
    inline string getMiniPlaybackConfigListJsonString() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackConfigListJsonString_, "") };
    inline ModifyScriptRequest& setMiniPlaybackConfigListJsonString(string miniPlaybackConfigListJsonString) { DARABONBA_PTR_SET_VALUE(miniPlaybackConfigListJsonString_, miniPlaybackConfigListJsonString) };


    // miniPlaybackEnable Field Functions 
    bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
    void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
    inline bool getMiniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
    inline ModifyScriptRequest& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


    // newBargeInEnable Field Functions 
    bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
    void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
    inline bool getNewBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
    inline ModifyScriptRequest& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


    // nlsConfig Field Functions 
    bool hasNlsConfig() const { return this->nlsConfig_ != nullptr;};
    void deleteNlsConfig() { this->nlsConfig_ = nullptr;};
    inline string getNlsConfig() const { DARABONBA_PTR_GET_DEFAULT(nlsConfig_, "") };
    inline ModifyScriptRequest& setNlsConfig(string nlsConfig) { DARABONBA_PTR_SET_VALUE(nlsConfig_, nlsConfig) };


    // nluAccessType Field Functions 
    bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
    void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
    inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
    inline ModifyScriptRequest& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline ModifyScriptRequest& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ModifyScriptRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline const vector<string> & getScriptContent() const { DARABONBA_PTR_GET_CONST(scriptContent_, vector<string>) };
    inline vector<string> getScriptContent() { DARABONBA_PTR_GET(scriptContent_, vector<string>) };
    inline ModifyScriptRequest& setScriptContent(const vector<string> & scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };
    inline ModifyScriptRequest& setScriptContent(vector<string> && scriptContent) { DARABONBA_PTR_SET_RVALUE(scriptContent_, scriptContent) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline ModifyScriptRequest& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyScriptRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ModifyScriptRequest& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptWaveform Field Functions 
    bool hasScriptWaveform() const { return this->scriptWaveform_ != nullptr;};
    void deleteScriptWaveform() { this->scriptWaveform_ = nullptr;};
    inline const vector<string> & getScriptWaveform() const { DARABONBA_PTR_GET_CONST(scriptWaveform_, vector<string>) };
    inline vector<string> getScriptWaveform() { DARABONBA_PTR_GET(scriptWaveform_, vector<string>) };
    inline ModifyScriptRequest& setScriptWaveform(const vector<string> & scriptWaveform) { DARABONBA_PTR_SET_VALUE(scriptWaveform_, scriptWaveform) };
    inline ModifyScriptRequest& setScriptWaveform(vector<string> && scriptWaveform) { DARABONBA_PTR_SET_RVALUE(scriptWaveform_, scriptWaveform) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline string getTtsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
    inline ModifyScriptRequest& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


  protected:
    // The ID of the robot workspace.
    shared_ptr<int64_t> agentId_ {};
    // The access key for the robot workspace.
    shared_ptr<string> agentKey_ {};
    // Indicates whether the robot workspace is a Large Language Model (LLM) workspace.
    shared_ptr<bool> agentLlm_ {};
    // The ASR configuration. Parameter definitions:
    // 
    // - **appKey**: The Alibaba Cloud account appKey.
    // 
    // - **maxEndSilence**: The duration for voice endpoint detection.
    // 
    // - **silenceTimeout**: The silence timeout. Unit: seconds. The system times out after the user is silent for N seconds.
    // 
    // - **engine**: The service to invoke. Valid values: ali, xunfei.
    // 
    // - **nlsServiceType**: The type of the invoked service.
    // 
    //   - Managed: Public cloud NLS service.
    // 
    //   - Authorized: Authorized NLS service.
    // 
    //   - Provided: NLS service provided by the customer through AS/SK.
    // 
    //   - Apes: Private cloud service.
    // 
    // - **engineXunfei**: If the caller is xunfei, fill in the corresponding configuration.
    // 
    // > If engine is set to ali and nlsServiceType is set to Authorized, a custom service is used, and the service provider is ali. If engine is set to ali and nlsServiceType is set to Managed, the default service is used. If engine is set to xunfei and nlsServiceType is set to Authorized, the service provider is xunfei. You must fill in the xunfei configuration, such as {"uuid":"ed2xxxxxxxxx","globalMaxEndSilence":700,"globalMaxEndSilenceEnable":true}.
    // 
    // - **globalMaxEndSilence**: Silence detection. Unit: milliseconds.
    // 
    // - **globalMaxEndSilenceEnable**: The switch for silence detection. Default value: enabled.
    // 
    // - **speechNoiseThreshold**: The noise filtering threshold.
    shared_ptr<string> asrConfig_ {};
    // The call configuration.
    // 
    // - silenceConfig: Silence configuration.
    // 
    //   - silenceReplyTimeout: The timeout period for silence replies, in milliseconds.
    // 
    //   - silenceTimeoutMaxCount: Hang up after several rounds of silence timeout.
    // 
    //   - silenceTimeoutMaxCountEnable: Indicates whether to hang up on silence.
    // 
    // - hangupConfig: Hang-up configuration.
    // 
    //   - aiHangupEnable: AI hang-up. Valid values: true, false.
    // 
    //   - delayHangup: Delayed hang-up. Maximum value: 10.
    // 
    //   - hangupMaxRounds: Interaction rounds. Maximum value: 100.
    // 
    //   - hangupMaxRoundsBroadcast: The script for hang-up broadcast.
    // 
    //   - hangupMaxRoundsEnable: Determine the maximum number of interaction rounds. Valid values: true, false.
    // 
    // - securityInterceptConfig: Security block configuration.
    // 
    //   - broadcast: The script for block broadcast.
    // 
    // - specialInterceptConfig: Special case block.
    // 
    //   - specialInterceptEnable: The switch for special case block.
    // 
    //   - specialIntercepts: Special cases.
    // 
    //     - voiceAssistant: Voice assistant.
    // 
    //     - extensionNumberTransfer: Extension number transfer.
    // 
    // - transitionConfig: Transition phrase model configuration.
    // 
    //   - transitionSwitch: The switch for the transition phrase model.
    shared_ptr<string> chatConfig_ {};
    // The ID of the chatbot.
    shared_ptr<string> chatbotId_ {};
    // The switch for emotion detection configuration.
    shared_ptr<bool> emotionEnable_ {};
    // The industry.
    // 
    // This parameter is required.
    shared_ptr<string> industry_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> labelConfig_ {};
    // The switch for intelligent sentence segmentation configuration (small model).
    shared_ptr<bool> longWaitEnable_ {};
    // The configuration for transition phrases. Customization is not supported temporarily. Do not pass this parameter by default. This parameter is deprecated.
    shared_ptr<string> miniPlaybackConfigListJsonString_ {};
    // The switch for transition phrase configuration (small model).
    shared_ptr<bool> miniPlaybackEnable_ {};
    // The switch for graceful barge-in configuration (small model).
    shared_ptr<bool> newBargeInEnable_ {};
    // This parameter is deprecated.
    shared_ptr<string> nlsConfig_ {};
    // The NLU access method (applicable only to Large Language Model (LLM) scenarios).
    // 
    // Enumeration:
    // 
    // - Managed: Access using an Alibaba Cloud public account.
    // 
    // - This parameter is empty for non-LLM scenarios.
    shared_ptr<string> nluAccessType_ {};
    // The NLU engine (applicable only to Large Language Model (LLM) scenarios).
    // 
    // > After a scenario is created, you cannot modify the scenario mode.
    // 
    // Enumeration:
    // 
    // - Prompts: Text filling mode.
    // 
    // - SSE_FUNCTION: Function Compute mode.
    // 
    // - This parameter is empty for non-LLM scenarios.
    shared_ptr<string> nluEngine_ {};
    // The scenario information.
    // 
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // For notification instances, pass in the script list. This parameter is deprecated.
    shared_ptr<vector<string>> scriptContent_ {};
    // The description of the script.
    shared_ptr<string> scriptDescription_ {};
    // The ID of the script.
    // 
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // The name of the script.
    // 
    // This parameter is required.
    shared_ptr<string> scriptName_ {};
    // For notification instances, pass in the script voice list. This parameter is deprecated.
    shared_ptr<vector<string>> scriptWaveform_ {};
    // The TTS configuration. Parameter definitions:
    // 
    // - **voice**: The voice actor.
    // 
    // - **volume**: The volume. Valid values: 0 to 100. Default value: 50.
    // 
    // - **speechRate**: The speech rate. Valid values: -500 to 500. Default value: 0.
    // 
    // - **pitchRate**: The pitch rate. Valid values: -500 to 500. Default value: 0.
    // 
    // - **globalInterruptible**: The voice interruption configuration.
    // 
    // - **engine**
    // 
    //   **nlsServiceType**: The type of the invoked service.
    // 
    //   - Managed: Public cloud NLS service.
    // 
    //   - Authorized: Authorized NLS service.
    // 
    //   - Provided: NLS service provided by the customer through AS/SK.
    // 
    //   - Apes: Private cloud service.
    // 
    // - **engineXunfei**: The configuration when the service provider is xunfei.
    // 
    // > 1\\. If engine is set to ali and nlsServiceType is set to Authorized, a custom service is used. 2. If the service provider is ali, and engine is set to ali and nlsServiceType is set to Managed, the default service is used. 3. If engine is set to xunfei (applicable to small model scenarios) and nlsServiceType is set to Authorized, the service provider is xunfei. You must fill in the engineXunfei configuration, such as {"pitchRate":50,"speechRate":50,"voice":"aisjiuxu","volume":50}. 4. If engine is set to volc and nlsServiceType is set to Authorized, it indicates that Doubao is applicable.
    shared_ptr<string> ttsConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
