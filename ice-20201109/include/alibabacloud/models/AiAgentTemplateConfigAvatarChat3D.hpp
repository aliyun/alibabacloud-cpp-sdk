// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIGAVATARCHAT3D_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIGAVATARCHAT3D_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentTemplateConfigAvatarChat3DLlmHistory.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentTemplateConfigAvatarChat3D : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentTemplateConfigAvatarChat3D& obj) { 
      DARABONBA_PTR_TO_JSON(AsrHotWords, asrHotWords_);
      DARABONBA_PTR_TO_JSON(AsrLanguageId, asrLanguageId_);
      DARABONBA_PTR_TO_JSON(AsrMaxSilence, asrMaxSilence_);
      DARABONBA_PTR_TO_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_TO_JSON(BailianAppParams, bailianAppParams_);
      DARABONBA_PTR_TO_JSON(CharBreak, charBreak_);
      DARABONBA_PTR_TO_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_TO_JSON(EnablePushToTalk, enablePushToTalk_);
      DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_TO_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_TO_JSON(Greeting, greeting_);
      DARABONBA_PTR_TO_JSON(InterruptWords, interruptWords_);
      DARABONBA_PTR_TO_JSON(LlmHistory, llmHistory_);
      DARABONBA_PTR_TO_JSON(LlmHistoryLimit, llmHistoryLimit_);
      DARABONBA_PTR_TO_JSON(LlmSystemPrompt, llmSystemPrompt_);
      DARABONBA_PTR_TO_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_TO_JSON(UseVoiceprint, useVoiceprint_);
      DARABONBA_PTR_TO_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_TO_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_TO_JSON(VadLevel, vadLevel_);
      DARABONBA_PTR_TO_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_TO_JSON(VoiceIdList, voiceIdList_);
      DARABONBA_PTR_TO_JSON(VoiceprintId, voiceprintId_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
      DARABONBA_PTR_TO_JSON(WakeUpQuery, wakeUpQuery_);
      DARABONBA_PTR_TO_JSON(WorkflowOverrideParams, workflowOverrideParams_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentTemplateConfigAvatarChat3D& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrHotWords, asrHotWords_);
      DARABONBA_PTR_FROM_JSON(AsrLanguageId, asrLanguageId_);
      DARABONBA_PTR_FROM_JSON(AsrMaxSilence, asrMaxSilence_);
      DARABONBA_PTR_FROM_JSON(AvatarId, avatarId_);
      DARABONBA_PTR_FROM_JSON(BailianAppParams, bailianAppParams_);
      DARABONBA_PTR_FROM_JSON(CharBreak, charBreak_);
      DARABONBA_PTR_FROM_JSON(EnableIntelligentSegment, enableIntelligentSegment_);
      DARABONBA_PTR_FROM_JSON(EnablePushToTalk, enablePushToTalk_);
      DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_FROM_JSON(GracefulShutdown, gracefulShutdown_);
      DARABONBA_PTR_FROM_JSON(Greeting, greeting_);
      DARABONBA_PTR_FROM_JSON(InterruptWords, interruptWords_);
      DARABONBA_PTR_FROM_JSON(LlmHistory, llmHistory_);
      DARABONBA_PTR_FROM_JSON(LlmHistoryLimit, llmHistoryLimit_);
      DARABONBA_PTR_FROM_JSON(LlmSystemPrompt, llmSystemPrompt_);
      DARABONBA_PTR_FROM_JSON(MaxIdleTime, maxIdleTime_);
      DARABONBA_PTR_FROM_JSON(UseVoiceprint, useVoiceprint_);
      DARABONBA_PTR_FROM_JSON(UserOfflineTimeout, userOfflineTimeout_);
      DARABONBA_PTR_FROM_JSON(UserOnlineTimeout, userOnlineTimeout_);
      DARABONBA_PTR_FROM_JSON(VadLevel, vadLevel_);
      DARABONBA_PTR_FROM_JSON(VoiceId, voiceId_);
      DARABONBA_PTR_FROM_JSON(VoiceIdList, voiceIdList_);
      DARABONBA_PTR_FROM_JSON(VoiceprintId, voiceprintId_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
      DARABONBA_PTR_FROM_JSON(WakeUpQuery, wakeUpQuery_);
      DARABONBA_PTR_FROM_JSON(WorkflowOverrideParams, workflowOverrideParams_);
    };
    AIAgentTemplateConfigAvatarChat3D() = default ;
    AIAgentTemplateConfigAvatarChat3D(const AIAgentTemplateConfigAvatarChat3D &) = default ;
    AIAgentTemplateConfigAvatarChat3D(AIAgentTemplateConfigAvatarChat3D &&) = default ;
    AIAgentTemplateConfigAvatarChat3D(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentTemplateConfigAvatarChat3D() = default ;
    AIAgentTemplateConfigAvatarChat3D& operator=(const AIAgentTemplateConfigAvatarChat3D &) = default ;
    AIAgentTemplateConfigAvatarChat3D& operator=(AIAgentTemplateConfigAvatarChat3D &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrHotWords_ == nullptr
        && return this->asrLanguageId_ == nullptr && return this->asrMaxSilence_ == nullptr && return this->avatarId_ == nullptr && return this->bailianAppParams_ == nullptr && return this->charBreak_ == nullptr
        && return this->enableIntelligentSegment_ == nullptr && return this->enablePushToTalk_ == nullptr && return this->enableVoiceInterrupt_ == nullptr && return this->gracefulShutdown_ == nullptr && return this->greeting_ == nullptr
        && return this->interruptWords_ == nullptr && return this->llmHistory_ == nullptr && return this->llmHistoryLimit_ == nullptr && return this->llmSystemPrompt_ == nullptr && return this->maxIdleTime_ == nullptr
        && return this->useVoiceprint_ == nullptr && return this->userOfflineTimeout_ == nullptr && return this->userOnlineTimeout_ == nullptr && return this->vadLevel_ == nullptr && return this->voiceId_ == nullptr
        && return this->voiceIdList_ == nullptr && return this->voiceprintId_ == nullptr && return this->volume_ == nullptr && return this->wakeUpQuery_ == nullptr && return this->workflowOverrideParams_ == nullptr; };
    // asrHotWords Field Functions 
    bool hasAsrHotWords() const { return this->asrHotWords_ != nullptr;};
    void deleteAsrHotWords() { this->asrHotWords_ = nullptr;};
    inline const vector<string> & asrHotWords() const { DARABONBA_PTR_GET_CONST(asrHotWords_, vector<string>) };
    inline vector<string> asrHotWords() { DARABONBA_PTR_GET(asrHotWords_, vector<string>) };
    inline AIAgentTemplateConfigAvatarChat3D& setAsrHotWords(const vector<string> & asrHotWords) { DARABONBA_PTR_SET_VALUE(asrHotWords_, asrHotWords) };
    inline AIAgentTemplateConfigAvatarChat3D& setAsrHotWords(vector<string> && asrHotWords) { DARABONBA_PTR_SET_RVALUE(asrHotWords_, asrHotWords) };


    // asrLanguageId Field Functions 
    bool hasAsrLanguageId() const { return this->asrLanguageId_ != nullptr;};
    void deleteAsrLanguageId() { this->asrLanguageId_ = nullptr;};
    inline string asrLanguageId() const { DARABONBA_PTR_GET_DEFAULT(asrLanguageId_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setAsrLanguageId(string asrLanguageId) { DARABONBA_PTR_SET_VALUE(asrLanguageId_, asrLanguageId) };


    // asrMaxSilence Field Functions 
    bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
    void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
    inline int32_t asrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
    inline AIAgentTemplateConfigAvatarChat3D& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


    // avatarId Field Functions 
    bool hasAvatarId() const { return this->avatarId_ != nullptr;};
    void deleteAvatarId() { this->avatarId_ = nullptr;};
    inline string avatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


    // bailianAppParams Field Functions 
    bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
    void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
    inline string bailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


    // charBreak Field Functions 
    bool hasCharBreak() const { return this->charBreak_ != nullptr;};
    void deleteCharBreak() { this->charBreak_ = nullptr;};
    inline bool charBreak() const { DARABONBA_PTR_GET_DEFAULT(charBreak_, false) };
    inline AIAgentTemplateConfigAvatarChat3D& setCharBreak(bool charBreak) { DARABONBA_PTR_SET_VALUE(charBreak_, charBreak) };


    // enableIntelligentSegment Field Functions 
    bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
    void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
    inline bool enableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
    inline AIAgentTemplateConfigAvatarChat3D& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


    // enablePushToTalk Field Functions 
    bool hasEnablePushToTalk() const { return this->enablePushToTalk_ != nullptr;};
    void deleteEnablePushToTalk() { this->enablePushToTalk_ = nullptr;};
    inline bool enablePushToTalk() const { DARABONBA_PTR_GET_DEFAULT(enablePushToTalk_, false) };
    inline AIAgentTemplateConfigAvatarChat3D& setEnablePushToTalk(bool enablePushToTalk) { DARABONBA_PTR_SET_VALUE(enablePushToTalk_, enablePushToTalk) };


    // enableVoiceInterrupt Field Functions 
    bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
    void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
    inline bool enableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
    inline AIAgentTemplateConfigAvatarChat3D& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


    // gracefulShutdown Field Functions 
    bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
    void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
    inline bool gracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
    inline AIAgentTemplateConfigAvatarChat3D& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


    // greeting Field Functions 
    bool hasGreeting() const { return this->greeting_ != nullptr;};
    void deleteGreeting() { this->greeting_ = nullptr;};
    inline string greeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


    // interruptWords Field Functions 
    bool hasInterruptWords() const { return this->interruptWords_ != nullptr;};
    void deleteInterruptWords() { this->interruptWords_ = nullptr;};
    inline const vector<string> & interruptWords() const { DARABONBA_PTR_GET_CONST(interruptWords_, vector<string>) };
    inline vector<string> interruptWords() { DARABONBA_PTR_GET(interruptWords_, vector<string>) };
    inline AIAgentTemplateConfigAvatarChat3D& setInterruptWords(const vector<string> & interruptWords) { DARABONBA_PTR_SET_VALUE(interruptWords_, interruptWords) };
    inline AIAgentTemplateConfigAvatarChat3D& setInterruptWords(vector<string> && interruptWords) { DARABONBA_PTR_SET_RVALUE(interruptWords_, interruptWords) };


    // llmHistory Field Functions 
    bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
    void deleteLlmHistory() { this->llmHistory_ = nullptr;};
    inline const vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory> & llmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory>) };
    inline vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory> llmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory>) };
    inline AIAgentTemplateConfigAvatarChat3D& setLlmHistory(const vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
    inline AIAgentTemplateConfigAvatarChat3D& setLlmHistory(vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


    // llmHistoryLimit Field Functions 
    bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
    void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
    inline int32_t llmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
    inline AIAgentTemplateConfigAvatarChat3D& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


    // llmSystemPrompt Field Functions 
    bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
    void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
    inline string llmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


    // maxIdleTime Field Functions 
    bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
    void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
    inline int32_t maxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0) };
    inline AIAgentTemplateConfigAvatarChat3D& setMaxIdleTime(int32_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


    // useVoiceprint Field Functions 
    bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
    void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
    inline bool useVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
    inline AIAgentTemplateConfigAvatarChat3D& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


    // userOfflineTimeout Field Functions 
    bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
    void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
    inline int32_t userOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
    inline AIAgentTemplateConfigAvatarChat3D& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


    // userOnlineTimeout Field Functions 
    bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
    void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
    inline int32_t userOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
    inline AIAgentTemplateConfigAvatarChat3D& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


    // vadLevel Field Functions 
    bool hasVadLevel() const { return this->vadLevel_ != nullptr;};
    void deleteVadLevel() { this->vadLevel_ = nullptr;};
    inline int32_t vadLevel() const { DARABONBA_PTR_GET_DEFAULT(vadLevel_, 0) };
    inline AIAgentTemplateConfigAvatarChat3D& setVadLevel(int32_t vadLevel) { DARABONBA_PTR_SET_VALUE(vadLevel_, vadLevel) };


    // voiceId Field Functions 
    bool hasVoiceId() const { return this->voiceId_ != nullptr;};
    void deleteVoiceId() { this->voiceId_ = nullptr;};
    inline string voiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


    // voiceIdList Field Functions 
    bool hasVoiceIdList() const { return this->voiceIdList_ != nullptr;};
    void deleteVoiceIdList() { this->voiceIdList_ = nullptr;};
    inline const vector<string> & voiceIdList() const { DARABONBA_PTR_GET_CONST(voiceIdList_, vector<string>) };
    inline vector<string> voiceIdList() { DARABONBA_PTR_GET(voiceIdList_, vector<string>) };
    inline AIAgentTemplateConfigAvatarChat3D& setVoiceIdList(const vector<string> & voiceIdList) { DARABONBA_PTR_SET_VALUE(voiceIdList_, voiceIdList) };
    inline AIAgentTemplateConfigAvatarChat3D& setVoiceIdList(vector<string> && voiceIdList) { DARABONBA_PTR_SET_RVALUE(voiceIdList_, voiceIdList) };


    // voiceprintId Field Functions 
    bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
    void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
    inline string voiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int64_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
    inline AIAgentTemplateConfigAvatarChat3D& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    // wakeUpQuery Field Functions 
    bool hasWakeUpQuery() const { return this->wakeUpQuery_ != nullptr;};
    void deleteWakeUpQuery() { this->wakeUpQuery_ = nullptr;};
    inline string wakeUpQuery() const { DARABONBA_PTR_GET_DEFAULT(wakeUpQuery_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setWakeUpQuery(string wakeUpQuery) { DARABONBA_PTR_SET_VALUE(wakeUpQuery_, wakeUpQuery) };


    // workflowOverrideParams Field Functions 
    bool hasWorkflowOverrideParams() const { return this->workflowOverrideParams_ != nullptr;};
    void deleteWorkflowOverrideParams() { this->workflowOverrideParams_ = nullptr;};
    inline string workflowOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(workflowOverrideParams_, "") };
    inline AIAgentTemplateConfigAvatarChat3D& setWorkflowOverrideParams(string workflowOverrideParams) { DARABONBA_PTR_SET_VALUE(workflowOverrideParams_, workflowOverrideParams) };


  protected:
    std::shared_ptr<vector<string>> asrHotWords_ = nullptr;
    std::shared_ptr<string> asrLanguageId_ = nullptr;
    std::shared_ptr<int32_t> asrMaxSilence_ = nullptr;
    std::shared_ptr<string> avatarId_ = nullptr;
    std::shared_ptr<string> bailianAppParams_ = nullptr;
    std::shared_ptr<bool> charBreak_ = nullptr;
    std::shared_ptr<bool> enableIntelligentSegment_ = nullptr;
    std::shared_ptr<bool> enablePushToTalk_ = nullptr;
    std::shared_ptr<bool> enableVoiceInterrupt_ = nullptr;
    std::shared_ptr<bool> gracefulShutdown_ = nullptr;
    std::shared_ptr<string> greeting_ = nullptr;
    std::shared_ptr<vector<string>> interruptWords_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentTemplateConfigAvatarChat3DLlmHistory>> llmHistory_ = nullptr;
    std::shared_ptr<int32_t> llmHistoryLimit_ = nullptr;
    std::shared_ptr<string> llmSystemPrompt_ = nullptr;
    std::shared_ptr<int32_t> maxIdleTime_ = nullptr;
    std::shared_ptr<bool> useVoiceprint_ = nullptr;
    std::shared_ptr<int32_t> userOfflineTimeout_ = nullptr;
    std::shared_ptr<int32_t> userOnlineTimeout_ = nullptr;
    std::shared_ptr<int32_t> vadLevel_ = nullptr;
    std::shared_ptr<string> voiceId_ = nullptr;
    std::shared_ptr<vector<string>> voiceIdList_ = nullptr;
    std::shared_ptr<string> voiceprintId_ = nullptr;
    std::shared_ptr<int64_t> volume_ = nullptr;
    std::shared_ptr<string> wakeUpQuery_ = nullptr;
    std::shared_ptr<string> workflowOverrideParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
