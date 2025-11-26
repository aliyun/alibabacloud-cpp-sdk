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
        && return this->agentKey_ == nullptr && return this->agentLlm_ == nullptr && return this->asrConfig_ == nullptr && return this->chatConfig_ == nullptr && return this->chatbotId_ == nullptr
        && return this->emotionEnable_ == nullptr && return this->industry_ == nullptr && return this->instanceId_ == nullptr && return this->labelConfig_ == nullptr && return this->longWaitEnable_ == nullptr
        && return this->miniPlaybackConfigListJsonString_ == nullptr && return this->miniPlaybackEnable_ == nullptr && return this->newBargeInEnable_ == nullptr && return this->nlsConfig_ == nullptr && return this->nluAccessType_ == nullptr
        && return this->nluEngine_ == nullptr && return this->scene_ == nullptr && return this->scriptContent_ == nullptr && return this->scriptDescription_ == nullptr && return this->scriptId_ == nullptr
        && return this->scriptName_ == nullptr && return this->scriptWaveform_ == nullptr && return this->ttsConfig_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline ModifyScriptRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ModifyScriptRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentLlm Field Functions 
    bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
    void deleteAgentLlm() { this->agentLlm_ = nullptr;};
    inline bool agentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
    inline ModifyScriptRequest& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline string asrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
    inline ModifyScriptRequest& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline string chatConfig() const { DARABONBA_PTR_GET_DEFAULT(chatConfig_, "") };
    inline ModifyScriptRequest& setChatConfig(string chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string chatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline ModifyScriptRequest& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // emotionEnable Field Functions 
    bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
    void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
    inline bool emotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
    inline ModifyScriptRequest& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline ModifyScriptRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // labelConfig Field Functions 
    bool hasLabelConfig() const { return this->labelConfig_ != nullptr;};
    void deleteLabelConfig() { this->labelConfig_ = nullptr;};
    inline string labelConfig() const { DARABONBA_PTR_GET_DEFAULT(labelConfig_, "") };
    inline ModifyScriptRequest& setLabelConfig(string labelConfig) { DARABONBA_PTR_SET_VALUE(labelConfig_, labelConfig) };


    // longWaitEnable Field Functions 
    bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
    void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
    inline bool longWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
    inline ModifyScriptRequest& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


    // miniPlaybackConfigListJsonString Field Functions 
    bool hasMiniPlaybackConfigListJsonString() const { return this->miniPlaybackConfigListJsonString_ != nullptr;};
    void deleteMiniPlaybackConfigListJsonString() { this->miniPlaybackConfigListJsonString_ = nullptr;};
    inline string miniPlaybackConfigListJsonString() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackConfigListJsonString_, "") };
    inline ModifyScriptRequest& setMiniPlaybackConfigListJsonString(string miniPlaybackConfigListJsonString) { DARABONBA_PTR_SET_VALUE(miniPlaybackConfigListJsonString_, miniPlaybackConfigListJsonString) };


    // miniPlaybackEnable Field Functions 
    bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
    void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
    inline bool miniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
    inline ModifyScriptRequest& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


    // newBargeInEnable Field Functions 
    bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
    void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
    inline bool newBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
    inline ModifyScriptRequest& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


    // nlsConfig Field Functions 
    bool hasNlsConfig() const { return this->nlsConfig_ != nullptr;};
    void deleteNlsConfig() { this->nlsConfig_ = nullptr;};
    inline string nlsConfig() const { DARABONBA_PTR_GET_DEFAULT(nlsConfig_, "") };
    inline ModifyScriptRequest& setNlsConfig(string nlsConfig) { DARABONBA_PTR_SET_VALUE(nlsConfig_, nlsConfig) };


    // nluAccessType Field Functions 
    bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
    void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
    inline string nluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
    inline ModifyScriptRequest& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string nluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline ModifyScriptRequest& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ModifyScriptRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline const vector<string> & scriptContent() const { DARABONBA_PTR_GET_CONST(scriptContent_, vector<string>) };
    inline vector<string> scriptContent() { DARABONBA_PTR_GET(scriptContent_, vector<string>) };
    inline ModifyScriptRequest& setScriptContent(const vector<string> & scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };
    inline ModifyScriptRequest& setScriptContent(vector<string> && scriptContent) { DARABONBA_PTR_SET_RVALUE(scriptContent_, scriptContent) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string scriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline ModifyScriptRequest& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline ModifyScriptRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline ModifyScriptRequest& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptWaveform Field Functions 
    bool hasScriptWaveform() const { return this->scriptWaveform_ != nullptr;};
    void deleteScriptWaveform() { this->scriptWaveform_ = nullptr;};
    inline const vector<string> & scriptWaveform() const { DARABONBA_PTR_GET_CONST(scriptWaveform_, vector<string>) };
    inline vector<string> scriptWaveform() { DARABONBA_PTR_GET(scriptWaveform_, vector<string>) };
    inline ModifyScriptRequest& setScriptWaveform(const vector<string> & scriptWaveform) { DARABONBA_PTR_SET_VALUE(scriptWaveform_, scriptWaveform) };
    inline ModifyScriptRequest& setScriptWaveform(vector<string> && scriptWaveform) { DARABONBA_PTR_SET_RVALUE(scriptWaveform_, scriptWaveform) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline string ttsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
    inline ModifyScriptRequest& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


  protected:
    std::shared_ptr<int64_t> agentId_ = nullptr;
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<bool> agentLlm_ = nullptr;
    std::shared_ptr<string> asrConfig_ = nullptr;
    std::shared_ptr<string> chatConfig_ = nullptr;
    std::shared_ptr<string> chatbotId_ = nullptr;
    std::shared_ptr<bool> emotionEnable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> industry_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> labelConfig_ = nullptr;
    std::shared_ptr<bool> longWaitEnable_ = nullptr;
    std::shared_ptr<string> miniPlaybackConfigListJsonString_ = nullptr;
    std::shared_ptr<bool> miniPlaybackEnable_ = nullptr;
    std::shared_ptr<bool> newBargeInEnable_ = nullptr;
    std::shared_ptr<string> nlsConfig_ = nullptr;
    std::shared_ptr<string> nluAccessType_ = nullptr;
    std::shared_ptr<string> nluEngine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<vector<string>> scriptContent_ = nullptr;
    std::shared_ptr<string> scriptDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<vector<string>> scriptWaveform_ = nullptr;
    std::shared_ptr<string> ttsConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
