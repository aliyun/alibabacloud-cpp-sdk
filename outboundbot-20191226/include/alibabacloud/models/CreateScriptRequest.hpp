// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCRIPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCRIPTREQUEST_HPP_
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
  class CreateScriptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScriptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_TO_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_TO_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_TO_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(ScriptNluProfileJsonString, scriptNluProfileJsonString_);
      DARABONBA_PTR_TO_JSON(ScriptWaveform, scriptWaveform_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScriptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_FROM_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_FROM_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_FROM_JSON(NluAccessType, nluAccessType_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptContent, scriptContent_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(ScriptNluProfileJsonString, scriptNluProfileJsonString_);
      DARABONBA_PTR_FROM_JSON(ScriptWaveform, scriptWaveform_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
    };
    CreateScriptRequest() = default ;
    CreateScriptRequest(const CreateScriptRequest &) = default ;
    CreateScriptRequest(CreateScriptRequest &&) = default ;
    CreateScriptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScriptRequest() = default ;
    CreateScriptRequest& operator=(const CreateScriptRequest &) = default ;
    CreateScriptRequest& operator=(CreateScriptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentKey_ == nullptr && this->agentLlm_ == nullptr && this->asrConfig_ == nullptr && this->chatbotId_ == nullptr && this->emotionEnable_ == nullptr
        && this->industry_ == nullptr && this->instanceId_ == nullptr && this->longWaitEnable_ == nullptr && this->miniPlaybackEnable_ == nullptr && this->newBargeInEnable_ == nullptr
        && this->nluAccessType_ == nullptr && this->nluEngine_ == nullptr && this->scene_ == nullptr && this->scriptContent_ == nullptr && this->scriptDescription_ == nullptr
        && this->scriptName_ == nullptr && this->scriptNluProfileJsonString_ == nullptr && this->scriptWaveform_ == nullptr && this->ttsConfig_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline CreateScriptRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateScriptRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentLlm Field Functions 
    bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
    void deleteAgentLlm() { this->agentLlm_ = nullptr;};
    inline bool getAgentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
    inline CreateScriptRequest& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline string getAsrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
    inline CreateScriptRequest& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline CreateScriptRequest& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // emotionEnable Field Functions 
    bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
    void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
    inline bool getEmotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
    inline CreateScriptRequest& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline CreateScriptRequest& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateScriptRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // longWaitEnable Field Functions 
    bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
    void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
    inline bool getLongWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
    inline CreateScriptRequest& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


    // miniPlaybackEnable Field Functions 
    bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
    void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
    inline bool getMiniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
    inline CreateScriptRequest& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


    // newBargeInEnable Field Functions 
    bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
    void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
    inline bool getNewBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
    inline CreateScriptRequest& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


    // nluAccessType Field Functions 
    bool hasNluAccessType() const { return this->nluAccessType_ != nullptr;};
    void deleteNluAccessType() { this->nluAccessType_ = nullptr;};
    inline string getNluAccessType() const { DARABONBA_PTR_GET_DEFAULT(nluAccessType_, "") };
    inline CreateScriptRequest& setNluAccessType(string nluAccessType) { DARABONBA_PTR_SET_VALUE(nluAccessType_, nluAccessType) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline CreateScriptRequest& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline CreateScriptRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptContent Field Functions 
    bool hasScriptContent() const { return this->scriptContent_ != nullptr;};
    void deleteScriptContent() { this->scriptContent_ = nullptr;};
    inline const vector<string> & getScriptContent() const { DARABONBA_PTR_GET_CONST(scriptContent_, vector<string>) };
    inline vector<string> getScriptContent() { DARABONBA_PTR_GET(scriptContent_, vector<string>) };
    inline CreateScriptRequest& setScriptContent(const vector<string> & scriptContent) { DARABONBA_PTR_SET_VALUE(scriptContent_, scriptContent) };
    inline CreateScriptRequest& setScriptContent(vector<string> && scriptContent) { DARABONBA_PTR_SET_RVALUE(scriptContent_, scriptContent) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline CreateScriptRequest& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline CreateScriptRequest& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // scriptNluProfileJsonString Field Functions 
    bool hasScriptNluProfileJsonString() const { return this->scriptNluProfileJsonString_ != nullptr;};
    void deleteScriptNluProfileJsonString() { this->scriptNluProfileJsonString_ = nullptr;};
    inline string getScriptNluProfileJsonString() const { DARABONBA_PTR_GET_DEFAULT(scriptNluProfileJsonString_, "") };
    inline CreateScriptRequest& setScriptNluProfileJsonString(string scriptNluProfileJsonString) { DARABONBA_PTR_SET_VALUE(scriptNluProfileJsonString_, scriptNluProfileJsonString) };


    // scriptWaveform Field Functions 
    bool hasScriptWaveform() const { return this->scriptWaveform_ != nullptr;};
    void deleteScriptWaveform() { this->scriptWaveform_ = nullptr;};
    inline const vector<string> & getScriptWaveform() const { DARABONBA_PTR_GET_CONST(scriptWaveform_, vector<string>) };
    inline vector<string> getScriptWaveform() { DARABONBA_PTR_GET(scriptWaveform_, vector<string>) };
    inline CreateScriptRequest& setScriptWaveform(const vector<string> & scriptWaveform) { DARABONBA_PTR_SET_VALUE(scriptWaveform_, scriptWaveform) };
    inline CreateScriptRequest& setScriptWaveform(vector<string> && scriptWaveform) { DARABONBA_PTR_SET_RVALUE(scriptWaveform_, scriptWaveform) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline string getTtsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
    inline CreateScriptRequest& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


  protected:
    shared_ptr<int64_t> agentId_ {};
    shared_ptr<string> agentKey_ {};
    shared_ptr<bool> agentLlm_ {};
    shared_ptr<string> asrConfig_ {};
    shared_ptr<string> chatbotId_ {};
    shared_ptr<bool> emotionEnable_ {};
    // This parameter is required.
    shared_ptr<string> industry_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> longWaitEnable_ {};
    shared_ptr<bool> miniPlaybackEnable_ {};
    shared_ptr<bool> newBargeInEnable_ {};
    shared_ptr<string> nluAccessType_ {};
    shared_ptr<string> nluEngine_ {};
    // This parameter is required.
    shared_ptr<string> scene_ {};
    shared_ptr<vector<string>> scriptContent_ {};
    shared_ptr<string> scriptDescription_ {};
    // This parameter is required.
    shared_ptr<string> scriptName_ {};
    shared_ptr<string> scriptNluProfileJsonString_ {};
    shared_ptr<vector<string>> scriptWaveform_ {};
    shared_ptr<string> ttsConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
