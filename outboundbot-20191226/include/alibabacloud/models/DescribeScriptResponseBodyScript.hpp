// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODYSCRIPT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODYSCRIPT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeScriptResponseBodyScriptNluProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeScriptResponseBodyScript : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScriptResponseBodyScript& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_TO_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_TO_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_TO_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_TO_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_TO_JSON(LabelConfig, labelConfig_);
      DARABONBA_PTR_TO_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_TO_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_TO_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_TO_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_TO_JSON(NluProfile, nluProfile_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScriptResponseBodyScript& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AgentLlm, agentLlm_);
      DARABONBA_PTR_FROM_JSON(AsrConfig, asrConfig_);
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(ChatbotId, chatbotId_);
      DARABONBA_PTR_FROM_JSON(DebugStatus, debugStatus_);
      DARABONBA_PTR_FROM_JSON(EmotionEnable, emotionEnable_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(IsDebugDrafted, isDebugDrafted_);
      DARABONBA_PTR_FROM_JSON(IsDrafted, isDrafted_);
      DARABONBA_PTR_FROM_JSON(LabelConfig, labelConfig_);
      DARABONBA_PTR_FROM_JSON(LongWaitEnable, longWaitEnable_);
      DARABONBA_PTR_FROM_JSON(MiniPlaybackEnable, miniPlaybackEnable_);
      DARABONBA_PTR_FROM_JSON(NewBargeInEnable, newBargeInEnable_);
      DARABONBA_PTR_FROM_JSON(NluEngine, nluEngine_);
      DARABONBA_PTR_FROM_JSON(NluProfile, nluProfile_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(ScriptDescription, scriptDescription_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(ScriptName, scriptName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TtsConfig, ttsConfig_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeScriptResponseBodyScript() = default ;
    DescribeScriptResponseBodyScript(const DescribeScriptResponseBodyScript &) = default ;
    DescribeScriptResponseBodyScript(DescribeScriptResponseBodyScript &&) = default ;
    DescribeScriptResponseBodyScript(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScriptResponseBodyScript() = default ;
    DescribeScriptResponseBodyScript& operator=(const DescribeScriptResponseBodyScript &) = default ;
    DescribeScriptResponseBodyScript& operator=(DescribeScriptResponseBodyScript &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentKey_ == nullptr && return this->agentLlm_ == nullptr && return this->asrConfig_ == nullptr && return this->chatConfig_ == nullptr && return this->chatbotId_ == nullptr
        && return this->debugStatus_ == nullptr && return this->emotionEnable_ == nullptr && return this->industry_ == nullptr && return this->isDebugDrafted_ == nullptr && return this->isDrafted_ == nullptr
        && return this->labelConfig_ == nullptr && return this->longWaitEnable_ == nullptr && return this->miniPlaybackEnable_ == nullptr && return this->newBargeInEnable_ == nullptr && return this->nluEngine_ == nullptr
        && return this->nluProfile_ == nullptr && return this->scene_ == nullptr && return this->scriptDescription_ == nullptr && return this->scriptId_ == nullptr && return this->scriptName_ == nullptr
        && return this->status_ == nullptr && return this->ttsConfig_ == nullptr && return this->updateTime_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline DescribeScriptResponseBodyScript& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DescribeScriptResponseBodyScript& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentLlm Field Functions 
    bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
    void deleteAgentLlm() { this->agentLlm_ = nullptr;};
    inline bool agentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
    inline DescribeScriptResponseBodyScript& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


    // asrConfig Field Functions 
    bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
    void deleteAsrConfig() { this->asrConfig_ = nullptr;};
    inline string asrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
    inline DescribeScriptResponseBodyScript& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline string chatConfig() const { DARABONBA_PTR_GET_DEFAULT(chatConfig_, "") };
    inline DescribeScriptResponseBodyScript& setChatConfig(string chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };


    // chatbotId Field Functions 
    bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
    void deleteChatbotId() { this->chatbotId_ = nullptr;};
    inline string chatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
    inline DescribeScriptResponseBodyScript& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


    // debugStatus Field Functions 
    bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
    void deleteDebugStatus() { this->debugStatus_ = nullptr;};
    inline string debugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
    inline DescribeScriptResponseBodyScript& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


    // emotionEnable Field Functions 
    bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
    void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
    inline bool emotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
    inline DescribeScriptResponseBodyScript& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline DescribeScriptResponseBodyScript& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isDebugDrafted Field Functions 
    bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
    void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
    inline bool isDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
    inline DescribeScriptResponseBodyScript& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


    // isDrafted Field Functions 
    bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
    void deleteIsDrafted() { this->isDrafted_ = nullptr;};
    inline bool isDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
    inline DescribeScriptResponseBodyScript& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


    // labelConfig Field Functions 
    bool hasLabelConfig() const { return this->labelConfig_ != nullptr;};
    void deleteLabelConfig() { this->labelConfig_ = nullptr;};
    inline string labelConfig() const { DARABONBA_PTR_GET_DEFAULT(labelConfig_, "") };
    inline DescribeScriptResponseBodyScript& setLabelConfig(string labelConfig) { DARABONBA_PTR_SET_VALUE(labelConfig_, labelConfig) };


    // longWaitEnable Field Functions 
    bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
    void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
    inline bool longWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
    inline DescribeScriptResponseBodyScript& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


    // miniPlaybackEnable Field Functions 
    bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
    void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
    inline bool miniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
    inline DescribeScriptResponseBodyScript& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


    // newBargeInEnable Field Functions 
    bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
    void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
    inline bool newBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
    inline DescribeScriptResponseBodyScript& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


    // nluEngine Field Functions 
    bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
    void deleteNluEngine() { this->nluEngine_ = nullptr;};
    inline string nluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
    inline DescribeScriptResponseBodyScript& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


    // nluProfile Field Functions 
    bool hasNluProfile() const { return this->nluProfile_ != nullptr;};
    void deleteNluProfile() { this->nluProfile_ = nullptr;};
    inline const Models::DescribeScriptResponseBodyScriptNluProfile & nluProfile() const { DARABONBA_PTR_GET_CONST(nluProfile_, Models::DescribeScriptResponseBodyScriptNluProfile) };
    inline Models::DescribeScriptResponseBodyScriptNluProfile nluProfile() { DARABONBA_PTR_GET(nluProfile_, Models::DescribeScriptResponseBodyScriptNluProfile) };
    inline DescribeScriptResponseBodyScript& setNluProfile(const Models::DescribeScriptResponseBodyScriptNluProfile & nluProfile) { DARABONBA_PTR_SET_VALUE(nluProfile_, nluProfile) };
    inline DescribeScriptResponseBodyScript& setNluProfile(Models::DescribeScriptResponseBodyScriptNluProfile && nluProfile) { DARABONBA_PTR_SET_RVALUE(nluProfile_, nluProfile) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeScriptResponseBodyScript& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // scriptDescription Field Functions 
    bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
    void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
    inline string scriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
    inline DescribeScriptResponseBodyScript& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string scriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline DescribeScriptResponseBodyScript& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // scriptName Field Functions 
    bool hasScriptName() const { return this->scriptName_ != nullptr;};
    void deleteScriptName() { this->scriptName_ = nullptr;};
    inline string scriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
    inline DescribeScriptResponseBodyScript& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeScriptResponseBodyScript& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // ttsConfig Field Functions 
    bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
    void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
    inline string ttsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
    inline DescribeScriptResponseBodyScript& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeScriptResponseBodyScript& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> agentId_ = nullptr;
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<bool> agentLlm_ = nullptr;
    std::shared_ptr<string> asrConfig_ = nullptr;
    std::shared_ptr<string> chatConfig_ = nullptr;
    std::shared_ptr<string> chatbotId_ = nullptr;
    std::shared_ptr<string> debugStatus_ = nullptr;
    std::shared_ptr<bool> emotionEnable_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<bool> isDebugDrafted_ = nullptr;
    std::shared_ptr<bool> isDrafted_ = nullptr;
    std::shared_ptr<string> labelConfig_ = nullptr;
    std::shared_ptr<bool> longWaitEnable_ = nullptr;
    std::shared_ptr<bool> miniPlaybackEnable_ = nullptr;
    std::shared_ptr<bool> newBargeInEnable_ = nullptr;
    std::shared_ptr<string> nluEngine_ = nullptr;
    std::shared_ptr<Models::DescribeScriptResponseBodyScriptNluProfile> nluProfile_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<string> scriptDescription_ = nullptr;
    std::shared_ptr<string> scriptId_ = nullptr;
    std::shared_ptr<string> scriptName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> ttsConfig_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
