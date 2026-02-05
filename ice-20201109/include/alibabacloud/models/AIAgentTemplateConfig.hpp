// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AvatarChat3D, avatarChat3D_);
      DARABONBA_PTR_TO_JSON(VisionChat, visionChat_);
      DARABONBA_PTR_TO_JSON(VoiceChat, voiceChat_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AvatarChat3D, avatarChat3D_);
      DARABONBA_PTR_FROM_JSON(VisionChat, visionChat_);
      DARABONBA_PTR_FROM_JSON(VoiceChat, voiceChat_);
    };
    AIAgentTemplateConfig() = default ;
    AIAgentTemplateConfig(const AIAgentTemplateConfig &) = default ;
    AIAgentTemplateConfig(AIAgentTemplateConfig &&) = default ;
    AIAgentTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentTemplateConfig() = default ;
    AIAgentTemplateConfig& operator=(const AIAgentTemplateConfig &) = default ;
    AIAgentTemplateConfig& operator=(AIAgentTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VoiceChat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VoiceChat& obj) { 
        DARABONBA_PTR_TO_JSON(AsrHotWords, asrHotWords_);
        DARABONBA_PTR_TO_JSON(AsrLanguageId, asrLanguageId_);
        DARABONBA_PTR_TO_JSON(AsrMaxSilence, asrMaxSilence_);
        DARABONBA_PTR_TO_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_TO_JSON(AvatarUrlType, avatarUrlType_);
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
      friend void from_json(const Darabonba::Json& j, VoiceChat& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrHotWords, asrHotWords_);
        DARABONBA_PTR_FROM_JSON(AsrLanguageId, asrLanguageId_);
        DARABONBA_PTR_FROM_JSON(AsrMaxSilence, asrMaxSilence_);
        DARABONBA_PTR_FROM_JSON(AvatarUrl, avatarUrl_);
        DARABONBA_PTR_FROM_JSON(AvatarUrlType, avatarUrlType_);
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
      VoiceChat() = default ;
      VoiceChat(const VoiceChat &) = default ;
      VoiceChat(VoiceChat &&) = default ;
      VoiceChat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VoiceChat() = default ;
      VoiceChat& operator=(const VoiceChat &) = default ;
      VoiceChat& operator=(VoiceChat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LlmHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmHistory& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, LlmHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        LlmHistory() = default ;
        LlmHistory(const LlmHistory &) = default ;
        LlmHistory(LlmHistory &&) = default ;
        LlmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmHistory() = default ;
        LlmHistory& operator=(const LlmHistory &) = default ;
        LlmHistory& operator=(LlmHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline LlmHistory& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline LlmHistory& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->asrHotWords_ == nullptr
        && this->asrLanguageId_ == nullptr && this->asrMaxSilence_ == nullptr && this->avatarUrl_ == nullptr && this->avatarUrlType_ == nullptr && this->bailianAppParams_ == nullptr
        && this->charBreak_ == nullptr && this->enableIntelligentSegment_ == nullptr && this->enablePushToTalk_ == nullptr && this->enableVoiceInterrupt_ == nullptr && this->gracefulShutdown_ == nullptr
        && this->greeting_ == nullptr && this->interruptWords_ == nullptr && this->llmHistory_ == nullptr && this->llmHistoryLimit_ == nullptr && this->llmSystemPrompt_ == nullptr
        && this->maxIdleTime_ == nullptr && this->useVoiceprint_ == nullptr && this->userOfflineTimeout_ == nullptr && this->userOnlineTimeout_ == nullptr && this->vadLevel_ == nullptr
        && this->voiceId_ == nullptr && this->voiceIdList_ == nullptr && this->voiceprintId_ == nullptr && this->volume_ == nullptr && this->wakeUpQuery_ == nullptr
        && this->workflowOverrideParams_ == nullptr; };
      // asrHotWords Field Functions 
      bool hasAsrHotWords() const { return this->asrHotWords_ != nullptr;};
      void deleteAsrHotWords() { this->asrHotWords_ = nullptr;};
      inline const vector<string> & getAsrHotWords() const { DARABONBA_PTR_GET_CONST(asrHotWords_, vector<string>) };
      inline vector<string> getAsrHotWords() { DARABONBA_PTR_GET(asrHotWords_, vector<string>) };
      inline VoiceChat& setAsrHotWords(const vector<string> & asrHotWords) { DARABONBA_PTR_SET_VALUE(asrHotWords_, asrHotWords) };
      inline VoiceChat& setAsrHotWords(vector<string> && asrHotWords) { DARABONBA_PTR_SET_RVALUE(asrHotWords_, asrHotWords) };


      // asrLanguageId Field Functions 
      bool hasAsrLanguageId() const { return this->asrLanguageId_ != nullptr;};
      void deleteAsrLanguageId() { this->asrLanguageId_ = nullptr;};
      inline string getAsrLanguageId() const { DARABONBA_PTR_GET_DEFAULT(asrLanguageId_, "") };
      inline VoiceChat& setAsrLanguageId(string asrLanguageId) { DARABONBA_PTR_SET_VALUE(asrLanguageId_, asrLanguageId) };


      // asrMaxSilence Field Functions 
      bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
      void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
      inline int32_t getAsrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
      inline VoiceChat& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


      // avatarUrl Field Functions 
      bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
      void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
      inline string getAvatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
      inline VoiceChat& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


      // avatarUrlType Field Functions 
      bool hasAvatarUrlType() const { return this->avatarUrlType_ != nullptr;};
      void deleteAvatarUrlType() { this->avatarUrlType_ = nullptr;};
      inline string getAvatarUrlType() const { DARABONBA_PTR_GET_DEFAULT(avatarUrlType_, "") };
      inline VoiceChat& setAvatarUrlType(string avatarUrlType) { DARABONBA_PTR_SET_VALUE(avatarUrlType_, avatarUrlType) };


      // bailianAppParams Field Functions 
      bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
      void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
      inline string getBailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
      inline VoiceChat& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


      // charBreak Field Functions 
      bool hasCharBreak() const { return this->charBreak_ != nullptr;};
      void deleteCharBreak() { this->charBreak_ = nullptr;};
      inline bool getCharBreak() const { DARABONBA_PTR_GET_DEFAULT(charBreak_, false) };
      inline VoiceChat& setCharBreak(bool charBreak) { DARABONBA_PTR_SET_VALUE(charBreak_, charBreak) };


      // enableIntelligentSegment Field Functions 
      bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
      void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
      inline bool getEnableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
      inline VoiceChat& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


      // enablePushToTalk Field Functions 
      bool hasEnablePushToTalk() const { return this->enablePushToTalk_ != nullptr;};
      void deleteEnablePushToTalk() { this->enablePushToTalk_ = nullptr;};
      inline bool getEnablePushToTalk() const { DARABONBA_PTR_GET_DEFAULT(enablePushToTalk_, false) };
      inline VoiceChat& setEnablePushToTalk(bool enablePushToTalk) { DARABONBA_PTR_SET_VALUE(enablePushToTalk_, enablePushToTalk) };


      // enableVoiceInterrupt Field Functions 
      bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
      void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
      inline bool getEnableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
      inline VoiceChat& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


      // gracefulShutdown Field Functions 
      bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
      void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
      inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
      inline VoiceChat& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline VoiceChat& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // interruptWords Field Functions 
      bool hasInterruptWords() const { return this->interruptWords_ != nullptr;};
      void deleteInterruptWords() { this->interruptWords_ = nullptr;};
      inline const vector<string> & getInterruptWords() const { DARABONBA_PTR_GET_CONST(interruptWords_, vector<string>) };
      inline vector<string> getInterruptWords() { DARABONBA_PTR_GET(interruptWords_, vector<string>) };
      inline VoiceChat& setInterruptWords(const vector<string> & interruptWords) { DARABONBA_PTR_SET_VALUE(interruptWords_, interruptWords) };
      inline VoiceChat& setInterruptWords(vector<string> && interruptWords) { DARABONBA_PTR_SET_RVALUE(interruptWords_, interruptWords) };


      // llmHistory Field Functions 
      bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
      void deleteLlmHistory() { this->llmHistory_ = nullptr;};
      inline const vector<VoiceChat::LlmHistory> & getLlmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<VoiceChat::LlmHistory>) };
      inline vector<VoiceChat::LlmHistory> getLlmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<VoiceChat::LlmHistory>) };
      inline VoiceChat& setLlmHistory(const vector<VoiceChat::LlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
      inline VoiceChat& setLlmHistory(vector<VoiceChat::LlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


      // llmHistoryLimit Field Functions 
      bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
      void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
      inline int32_t getLlmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
      inline VoiceChat& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


      // llmSystemPrompt Field Functions 
      bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
      void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
      inline string getLlmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
      inline VoiceChat& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


      // maxIdleTime Field Functions 
      bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
      void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
      inline int32_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0) };
      inline VoiceChat& setMaxIdleTime(int32_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


      // useVoiceprint Field Functions 
      bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
      void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
      inline bool getUseVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
      inline VoiceChat& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


      // userOfflineTimeout Field Functions 
      bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
      void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
      inline int32_t getUserOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
      inline VoiceChat& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


      // userOnlineTimeout Field Functions 
      bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
      void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
      inline int32_t getUserOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
      inline VoiceChat& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


      // vadLevel Field Functions 
      bool hasVadLevel() const { return this->vadLevel_ != nullptr;};
      void deleteVadLevel() { this->vadLevel_ = nullptr;};
      inline int32_t getVadLevel() const { DARABONBA_PTR_GET_DEFAULT(vadLevel_, 0) };
      inline VoiceChat& setVadLevel(int32_t vadLevel) { DARABONBA_PTR_SET_VALUE(vadLevel_, vadLevel) };


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline VoiceChat& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


      // voiceIdList Field Functions 
      bool hasVoiceIdList() const { return this->voiceIdList_ != nullptr;};
      void deleteVoiceIdList() { this->voiceIdList_ = nullptr;};
      inline const vector<string> & getVoiceIdList() const { DARABONBA_PTR_GET_CONST(voiceIdList_, vector<string>) };
      inline vector<string> getVoiceIdList() { DARABONBA_PTR_GET(voiceIdList_, vector<string>) };
      inline VoiceChat& setVoiceIdList(const vector<string> & voiceIdList) { DARABONBA_PTR_SET_VALUE(voiceIdList_, voiceIdList) };
      inline VoiceChat& setVoiceIdList(vector<string> && voiceIdList) { DARABONBA_PTR_SET_RVALUE(voiceIdList_, voiceIdList) };


      // voiceprintId Field Functions 
      bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
      void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
      inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
      inline VoiceChat& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int64_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
      inline VoiceChat& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      // wakeUpQuery Field Functions 
      bool hasWakeUpQuery() const { return this->wakeUpQuery_ != nullptr;};
      void deleteWakeUpQuery() { this->wakeUpQuery_ = nullptr;};
      inline string getWakeUpQuery() const { DARABONBA_PTR_GET_DEFAULT(wakeUpQuery_, "") };
      inline VoiceChat& setWakeUpQuery(string wakeUpQuery) { DARABONBA_PTR_SET_VALUE(wakeUpQuery_, wakeUpQuery) };


      // workflowOverrideParams Field Functions 
      bool hasWorkflowOverrideParams() const { return this->workflowOverrideParams_ != nullptr;};
      void deleteWorkflowOverrideParams() { this->workflowOverrideParams_ = nullptr;};
      inline string getWorkflowOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(workflowOverrideParams_, "") };
      inline VoiceChat& setWorkflowOverrideParams(string workflowOverrideParams) { DARABONBA_PTR_SET_VALUE(workflowOverrideParams_, workflowOverrideParams) };


    protected:
      shared_ptr<vector<string>> asrHotWords_ {};
      shared_ptr<string> asrLanguageId_ {};
      shared_ptr<int32_t> asrMaxSilence_ {};
      shared_ptr<string> avatarUrl_ {};
      shared_ptr<string> avatarUrlType_ {};
      shared_ptr<string> bailianAppParams_ {};
      shared_ptr<bool> charBreak_ {};
      shared_ptr<bool> enableIntelligentSegment_ {};
      shared_ptr<bool> enablePushToTalk_ {};
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<bool> gracefulShutdown_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<vector<string>> interruptWords_ {};
      shared_ptr<vector<VoiceChat::LlmHistory>> llmHistory_ {};
      shared_ptr<int32_t> llmHistoryLimit_ {};
      shared_ptr<string> llmSystemPrompt_ {};
      shared_ptr<int32_t> maxIdleTime_ {};
      shared_ptr<bool> useVoiceprint_ {};
      shared_ptr<int32_t> userOfflineTimeout_ {};
      shared_ptr<int32_t> userOnlineTimeout_ {};
      shared_ptr<int32_t> vadLevel_ {};
      shared_ptr<string> voiceId_ {};
      shared_ptr<vector<string>> voiceIdList_ {};
      shared_ptr<string> voiceprintId_ {};
      shared_ptr<int64_t> volume_ {};
      shared_ptr<string> wakeUpQuery_ {};
      shared_ptr<string> workflowOverrideParams_ {};
    };

    class VisionChat : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VisionChat& obj) { 
        DARABONBA_PTR_TO_JSON(AsrHotWords, asrHotWords_);
        DARABONBA_PTR_TO_JSON(AsrLanguageId, asrLanguageId_);
        DARABONBA_PTR_TO_JSON(AsrMaxSilence, asrMaxSilence_);
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
      friend void from_json(const Darabonba::Json& j, VisionChat& obj) { 
        DARABONBA_PTR_FROM_JSON(AsrHotWords, asrHotWords_);
        DARABONBA_PTR_FROM_JSON(AsrLanguageId, asrLanguageId_);
        DARABONBA_PTR_FROM_JSON(AsrMaxSilence, asrMaxSilence_);
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
      VisionChat() = default ;
      VisionChat(const VisionChat &) = default ;
      VisionChat(VisionChat &&) = default ;
      VisionChat(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VisionChat() = default ;
      VisionChat& operator=(const VisionChat &) = default ;
      VisionChat& operator=(VisionChat &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LlmHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmHistory& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, LlmHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        LlmHistory() = default ;
        LlmHistory(const LlmHistory &) = default ;
        LlmHistory(LlmHistory &&) = default ;
        LlmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmHistory() = default ;
        LlmHistory& operator=(const LlmHistory &) = default ;
        LlmHistory& operator=(LlmHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline LlmHistory& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline LlmHistory& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->asrHotWords_ == nullptr
        && this->asrLanguageId_ == nullptr && this->asrMaxSilence_ == nullptr && this->bailianAppParams_ == nullptr && this->charBreak_ == nullptr && this->enableIntelligentSegment_ == nullptr
        && this->enablePushToTalk_ == nullptr && this->enableVoiceInterrupt_ == nullptr && this->gracefulShutdown_ == nullptr && this->greeting_ == nullptr && this->interruptWords_ == nullptr
        && this->llmHistory_ == nullptr && this->llmHistoryLimit_ == nullptr && this->llmSystemPrompt_ == nullptr && this->maxIdleTime_ == nullptr && this->useVoiceprint_ == nullptr
        && this->userOfflineTimeout_ == nullptr && this->userOnlineTimeout_ == nullptr && this->vadLevel_ == nullptr && this->voiceId_ == nullptr && this->voiceIdList_ == nullptr
        && this->voiceprintId_ == nullptr && this->volume_ == nullptr && this->wakeUpQuery_ == nullptr && this->workflowOverrideParams_ == nullptr; };
      // asrHotWords Field Functions 
      bool hasAsrHotWords() const { return this->asrHotWords_ != nullptr;};
      void deleteAsrHotWords() { this->asrHotWords_ = nullptr;};
      inline const vector<string> & getAsrHotWords() const { DARABONBA_PTR_GET_CONST(asrHotWords_, vector<string>) };
      inline vector<string> getAsrHotWords() { DARABONBA_PTR_GET(asrHotWords_, vector<string>) };
      inline VisionChat& setAsrHotWords(const vector<string> & asrHotWords) { DARABONBA_PTR_SET_VALUE(asrHotWords_, asrHotWords) };
      inline VisionChat& setAsrHotWords(vector<string> && asrHotWords) { DARABONBA_PTR_SET_RVALUE(asrHotWords_, asrHotWords) };


      // asrLanguageId Field Functions 
      bool hasAsrLanguageId() const { return this->asrLanguageId_ != nullptr;};
      void deleteAsrLanguageId() { this->asrLanguageId_ = nullptr;};
      inline string getAsrLanguageId() const { DARABONBA_PTR_GET_DEFAULT(asrLanguageId_, "") };
      inline VisionChat& setAsrLanguageId(string asrLanguageId) { DARABONBA_PTR_SET_VALUE(asrLanguageId_, asrLanguageId) };


      // asrMaxSilence Field Functions 
      bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
      void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
      inline int32_t getAsrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
      inline VisionChat& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


      // bailianAppParams Field Functions 
      bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
      void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
      inline string getBailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
      inline VisionChat& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


      // charBreak Field Functions 
      bool hasCharBreak() const { return this->charBreak_ != nullptr;};
      void deleteCharBreak() { this->charBreak_ = nullptr;};
      inline bool getCharBreak() const { DARABONBA_PTR_GET_DEFAULT(charBreak_, false) };
      inline VisionChat& setCharBreak(bool charBreak) { DARABONBA_PTR_SET_VALUE(charBreak_, charBreak) };


      // enableIntelligentSegment Field Functions 
      bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
      void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
      inline bool getEnableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
      inline VisionChat& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


      // enablePushToTalk Field Functions 
      bool hasEnablePushToTalk() const { return this->enablePushToTalk_ != nullptr;};
      void deleteEnablePushToTalk() { this->enablePushToTalk_ = nullptr;};
      inline bool getEnablePushToTalk() const { DARABONBA_PTR_GET_DEFAULT(enablePushToTalk_, false) };
      inline VisionChat& setEnablePushToTalk(bool enablePushToTalk) { DARABONBA_PTR_SET_VALUE(enablePushToTalk_, enablePushToTalk) };


      // enableVoiceInterrupt Field Functions 
      bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
      void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
      inline bool getEnableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
      inline VisionChat& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


      // gracefulShutdown Field Functions 
      bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
      void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
      inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
      inline VisionChat& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline VisionChat& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // interruptWords Field Functions 
      bool hasInterruptWords() const { return this->interruptWords_ != nullptr;};
      void deleteInterruptWords() { this->interruptWords_ = nullptr;};
      inline const vector<string> & getInterruptWords() const { DARABONBA_PTR_GET_CONST(interruptWords_, vector<string>) };
      inline vector<string> getInterruptWords() { DARABONBA_PTR_GET(interruptWords_, vector<string>) };
      inline VisionChat& setInterruptWords(const vector<string> & interruptWords) { DARABONBA_PTR_SET_VALUE(interruptWords_, interruptWords) };
      inline VisionChat& setInterruptWords(vector<string> && interruptWords) { DARABONBA_PTR_SET_RVALUE(interruptWords_, interruptWords) };


      // llmHistory Field Functions 
      bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
      void deleteLlmHistory() { this->llmHistory_ = nullptr;};
      inline const vector<VisionChat::LlmHistory> & getLlmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<VisionChat::LlmHistory>) };
      inline vector<VisionChat::LlmHistory> getLlmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<VisionChat::LlmHistory>) };
      inline VisionChat& setLlmHistory(const vector<VisionChat::LlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
      inline VisionChat& setLlmHistory(vector<VisionChat::LlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


      // llmHistoryLimit Field Functions 
      bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
      void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
      inline int32_t getLlmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
      inline VisionChat& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


      // llmSystemPrompt Field Functions 
      bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
      void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
      inline string getLlmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
      inline VisionChat& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


      // maxIdleTime Field Functions 
      bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
      void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
      inline int32_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0) };
      inline VisionChat& setMaxIdleTime(int32_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


      // useVoiceprint Field Functions 
      bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
      void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
      inline bool getUseVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
      inline VisionChat& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


      // userOfflineTimeout Field Functions 
      bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
      void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
      inline int32_t getUserOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
      inline VisionChat& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


      // userOnlineTimeout Field Functions 
      bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
      void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
      inline int32_t getUserOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
      inline VisionChat& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


      // vadLevel Field Functions 
      bool hasVadLevel() const { return this->vadLevel_ != nullptr;};
      void deleteVadLevel() { this->vadLevel_ = nullptr;};
      inline int32_t getVadLevel() const { DARABONBA_PTR_GET_DEFAULT(vadLevel_, 0) };
      inline VisionChat& setVadLevel(int32_t vadLevel) { DARABONBA_PTR_SET_VALUE(vadLevel_, vadLevel) };


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline VisionChat& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


      // voiceIdList Field Functions 
      bool hasVoiceIdList() const { return this->voiceIdList_ != nullptr;};
      void deleteVoiceIdList() { this->voiceIdList_ = nullptr;};
      inline const vector<string> & getVoiceIdList() const { DARABONBA_PTR_GET_CONST(voiceIdList_, vector<string>) };
      inline vector<string> getVoiceIdList() { DARABONBA_PTR_GET(voiceIdList_, vector<string>) };
      inline VisionChat& setVoiceIdList(const vector<string> & voiceIdList) { DARABONBA_PTR_SET_VALUE(voiceIdList_, voiceIdList) };
      inline VisionChat& setVoiceIdList(vector<string> && voiceIdList) { DARABONBA_PTR_SET_RVALUE(voiceIdList_, voiceIdList) };


      // voiceprintId Field Functions 
      bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
      void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
      inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
      inline VisionChat& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int64_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
      inline VisionChat& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      // wakeUpQuery Field Functions 
      bool hasWakeUpQuery() const { return this->wakeUpQuery_ != nullptr;};
      void deleteWakeUpQuery() { this->wakeUpQuery_ = nullptr;};
      inline string getWakeUpQuery() const { DARABONBA_PTR_GET_DEFAULT(wakeUpQuery_, "") };
      inline VisionChat& setWakeUpQuery(string wakeUpQuery) { DARABONBA_PTR_SET_VALUE(wakeUpQuery_, wakeUpQuery) };


      // workflowOverrideParams Field Functions 
      bool hasWorkflowOverrideParams() const { return this->workflowOverrideParams_ != nullptr;};
      void deleteWorkflowOverrideParams() { this->workflowOverrideParams_ = nullptr;};
      inline string getWorkflowOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(workflowOverrideParams_, "") };
      inline VisionChat& setWorkflowOverrideParams(string workflowOverrideParams) { DARABONBA_PTR_SET_VALUE(workflowOverrideParams_, workflowOverrideParams) };


    protected:
      shared_ptr<vector<string>> asrHotWords_ {};
      shared_ptr<string> asrLanguageId_ {};
      shared_ptr<int32_t> asrMaxSilence_ {};
      shared_ptr<string> bailianAppParams_ {};
      shared_ptr<bool> charBreak_ {};
      shared_ptr<bool> enableIntelligentSegment_ {};
      shared_ptr<bool> enablePushToTalk_ {};
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<bool> gracefulShutdown_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<vector<string>> interruptWords_ {};
      shared_ptr<vector<VisionChat::LlmHistory>> llmHistory_ {};
      shared_ptr<int32_t> llmHistoryLimit_ {};
      shared_ptr<string> llmSystemPrompt_ {};
      shared_ptr<int32_t> maxIdleTime_ {};
      shared_ptr<bool> useVoiceprint_ {};
      shared_ptr<int32_t> userOfflineTimeout_ {};
      shared_ptr<int32_t> userOnlineTimeout_ {};
      shared_ptr<int32_t> vadLevel_ {};
      shared_ptr<string> voiceId_ {};
      shared_ptr<vector<string>> voiceIdList_ {};
      shared_ptr<string> voiceprintId_ {};
      shared_ptr<int64_t> volume_ {};
      shared_ptr<string> wakeUpQuery_ {};
      shared_ptr<string> workflowOverrideParams_ {};
    };

    class AvatarChat3D : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvatarChat3D& obj) { 
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
      friend void from_json(const Darabonba::Json& j, AvatarChat3D& obj) { 
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
      AvatarChat3D() = default ;
      AvatarChat3D(const AvatarChat3D &) = default ;
      AvatarChat3D(AvatarChat3D &&) = default ;
      AvatarChat3D(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvatarChat3D() = default ;
      AvatarChat3D& operator=(const AvatarChat3D &) = default ;
      AvatarChat3D& operator=(AvatarChat3D &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LlmHistory : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LlmHistory& obj) { 
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(Role, role_);
        };
        friend void from_json(const Darabonba::Json& j, LlmHistory& obj) { 
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
        };
        LlmHistory() = default ;
        LlmHistory(const LlmHistory &) = default ;
        LlmHistory(LlmHistory &&) = default ;
        LlmHistory(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LlmHistory() = default ;
        LlmHistory& operator=(const LlmHistory &) = default ;
        LlmHistory& operator=(LlmHistory &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline LlmHistory& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline LlmHistory& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      protected:
        shared_ptr<string> content_ {};
        shared_ptr<string> role_ {};
      };

      virtual bool empty() const override { return this->asrHotWords_ == nullptr
        && this->asrLanguageId_ == nullptr && this->asrMaxSilence_ == nullptr && this->avatarId_ == nullptr && this->bailianAppParams_ == nullptr && this->charBreak_ == nullptr
        && this->enableIntelligentSegment_ == nullptr && this->enablePushToTalk_ == nullptr && this->enableVoiceInterrupt_ == nullptr && this->gracefulShutdown_ == nullptr && this->greeting_ == nullptr
        && this->interruptWords_ == nullptr && this->llmHistory_ == nullptr && this->llmHistoryLimit_ == nullptr && this->llmSystemPrompt_ == nullptr && this->maxIdleTime_ == nullptr
        && this->useVoiceprint_ == nullptr && this->userOfflineTimeout_ == nullptr && this->userOnlineTimeout_ == nullptr && this->vadLevel_ == nullptr && this->voiceId_ == nullptr
        && this->voiceIdList_ == nullptr && this->voiceprintId_ == nullptr && this->volume_ == nullptr && this->wakeUpQuery_ == nullptr && this->workflowOverrideParams_ == nullptr; };
      // asrHotWords Field Functions 
      bool hasAsrHotWords() const { return this->asrHotWords_ != nullptr;};
      void deleteAsrHotWords() { this->asrHotWords_ = nullptr;};
      inline const vector<string> & getAsrHotWords() const { DARABONBA_PTR_GET_CONST(asrHotWords_, vector<string>) };
      inline vector<string> getAsrHotWords() { DARABONBA_PTR_GET(asrHotWords_, vector<string>) };
      inline AvatarChat3D& setAsrHotWords(const vector<string> & asrHotWords) { DARABONBA_PTR_SET_VALUE(asrHotWords_, asrHotWords) };
      inline AvatarChat3D& setAsrHotWords(vector<string> && asrHotWords) { DARABONBA_PTR_SET_RVALUE(asrHotWords_, asrHotWords) };


      // asrLanguageId Field Functions 
      bool hasAsrLanguageId() const { return this->asrLanguageId_ != nullptr;};
      void deleteAsrLanguageId() { this->asrLanguageId_ = nullptr;};
      inline string getAsrLanguageId() const { DARABONBA_PTR_GET_DEFAULT(asrLanguageId_, "") };
      inline AvatarChat3D& setAsrLanguageId(string asrLanguageId) { DARABONBA_PTR_SET_VALUE(asrLanguageId_, asrLanguageId) };


      // asrMaxSilence Field Functions 
      bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
      void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
      inline int32_t getAsrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
      inline AvatarChat3D& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


      // avatarId Field Functions 
      bool hasAvatarId() const { return this->avatarId_ != nullptr;};
      void deleteAvatarId() { this->avatarId_ = nullptr;};
      inline string getAvatarId() const { DARABONBA_PTR_GET_DEFAULT(avatarId_, "") };
      inline AvatarChat3D& setAvatarId(string avatarId) { DARABONBA_PTR_SET_VALUE(avatarId_, avatarId) };


      // bailianAppParams Field Functions 
      bool hasBailianAppParams() const { return this->bailianAppParams_ != nullptr;};
      void deleteBailianAppParams() { this->bailianAppParams_ = nullptr;};
      inline string getBailianAppParams() const { DARABONBA_PTR_GET_DEFAULT(bailianAppParams_, "") };
      inline AvatarChat3D& setBailianAppParams(string bailianAppParams) { DARABONBA_PTR_SET_VALUE(bailianAppParams_, bailianAppParams) };


      // charBreak Field Functions 
      bool hasCharBreak() const { return this->charBreak_ != nullptr;};
      void deleteCharBreak() { this->charBreak_ = nullptr;};
      inline bool getCharBreak() const { DARABONBA_PTR_GET_DEFAULT(charBreak_, false) };
      inline AvatarChat3D& setCharBreak(bool charBreak) { DARABONBA_PTR_SET_VALUE(charBreak_, charBreak) };


      // enableIntelligentSegment Field Functions 
      bool hasEnableIntelligentSegment() const { return this->enableIntelligentSegment_ != nullptr;};
      void deleteEnableIntelligentSegment() { this->enableIntelligentSegment_ = nullptr;};
      inline bool getEnableIntelligentSegment() const { DARABONBA_PTR_GET_DEFAULT(enableIntelligentSegment_, false) };
      inline AvatarChat3D& setEnableIntelligentSegment(bool enableIntelligentSegment) { DARABONBA_PTR_SET_VALUE(enableIntelligentSegment_, enableIntelligentSegment) };


      // enablePushToTalk Field Functions 
      bool hasEnablePushToTalk() const { return this->enablePushToTalk_ != nullptr;};
      void deleteEnablePushToTalk() { this->enablePushToTalk_ = nullptr;};
      inline bool getEnablePushToTalk() const { DARABONBA_PTR_GET_DEFAULT(enablePushToTalk_, false) };
      inline AvatarChat3D& setEnablePushToTalk(bool enablePushToTalk) { DARABONBA_PTR_SET_VALUE(enablePushToTalk_, enablePushToTalk) };


      // enableVoiceInterrupt Field Functions 
      bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
      void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
      inline bool getEnableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
      inline AvatarChat3D& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


      // gracefulShutdown Field Functions 
      bool hasGracefulShutdown() const { return this->gracefulShutdown_ != nullptr;};
      void deleteGracefulShutdown() { this->gracefulShutdown_ = nullptr;};
      inline bool getGracefulShutdown() const { DARABONBA_PTR_GET_DEFAULT(gracefulShutdown_, false) };
      inline AvatarChat3D& setGracefulShutdown(bool gracefulShutdown) { DARABONBA_PTR_SET_VALUE(gracefulShutdown_, gracefulShutdown) };


      // greeting Field Functions 
      bool hasGreeting() const { return this->greeting_ != nullptr;};
      void deleteGreeting() { this->greeting_ = nullptr;};
      inline string getGreeting() const { DARABONBA_PTR_GET_DEFAULT(greeting_, "") };
      inline AvatarChat3D& setGreeting(string greeting) { DARABONBA_PTR_SET_VALUE(greeting_, greeting) };


      // interruptWords Field Functions 
      bool hasInterruptWords() const { return this->interruptWords_ != nullptr;};
      void deleteInterruptWords() { this->interruptWords_ = nullptr;};
      inline const vector<string> & getInterruptWords() const { DARABONBA_PTR_GET_CONST(interruptWords_, vector<string>) };
      inline vector<string> getInterruptWords() { DARABONBA_PTR_GET(interruptWords_, vector<string>) };
      inline AvatarChat3D& setInterruptWords(const vector<string> & interruptWords) { DARABONBA_PTR_SET_VALUE(interruptWords_, interruptWords) };
      inline AvatarChat3D& setInterruptWords(vector<string> && interruptWords) { DARABONBA_PTR_SET_RVALUE(interruptWords_, interruptWords) };


      // llmHistory Field Functions 
      bool hasLlmHistory() const { return this->llmHistory_ != nullptr;};
      void deleteLlmHistory() { this->llmHistory_ = nullptr;};
      inline const vector<AvatarChat3D::LlmHistory> & getLlmHistory() const { DARABONBA_PTR_GET_CONST(llmHistory_, vector<AvatarChat3D::LlmHistory>) };
      inline vector<AvatarChat3D::LlmHistory> getLlmHistory() { DARABONBA_PTR_GET(llmHistory_, vector<AvatarChat3D::LlmHistory>) };
      inline AvatarChat3D& setLlmHistory(const vector<AvatarChat3D::LlmHistory> & llmHistory) { DARABONBA_PTR_SET_VALUE(llmHistory_, llmHistory) };
      inline AvatarChat3D& setLlmHistory(vector<AvatarChat3D::LlmHistory> && llmHistory) { DARABONBA_PTR_SET_RVALUE(llmHistory_, llmHistory) };


      // llmHistoryLimit Field Functions 
      bool hasLlmHistoryLimit() const { return this->llmHistoryLimit_ != nullptr;};
      void deleteLlmHistoryLimit() { this->llmHistoryLimit_ = nullptr;};
      inline int32_t getLlmHistoryLimit() const { DARABONBA_PTR_GET_DEFAULT(llmHistoryLimit_, 0) };
      inline AvatarChat3D& setLlmHistoryLimit(int32_t llmHistoryLimit) { DARABONBA_PTR_SET_VALUE(llmHistoryLimit_, llmHistoryLimit) };


      // llmSystemPrompt Field Functions 
      bool hasLlmSystemPrompt() const { return this->llmSystemPrompt_ != nullptr;};
      void deleteLlmSystemPrompt() { this->llmSystemPrompt_ = nullptr;};
      inline string getLlmSystemPrompt() const { DARABONBA_PTR_GET_DEFAULT(llmSystemPrompt_, "") };
      inline AvatarChat3D& setLlmSystemPrompt(string llmSystemPrompt) { DARABONBA_PTR_SET_VALUE(llmSystemPrompt_, llmSystemPrompt) };


      // maxIdleTime Field Functions 
      bool hasMaxIdleTime() const { return this->maxIdleTime_ != nullptr;};
      void deleteMaxIdleTime() { this->maxIdleTime_ = nullptr;};
      inline int32_t getMaxIdleTime() const { DARABONBA_PTR_GET_DEFAULT(maxIdleTime_, 0) };
      inline AvatarChat3D& setMaxIdleTime(int32_t maxIdleTime) { DARABONBA_PTR_SET_VALUE(maxIdleTime_, maxIdleTime) };


      // useVoiceprint Field Functions 
      bool hasUseVoiceprint() const { return this->useVoiceprint_ != nullptr;};
      void deleteUseVoiceprint() { this->useVoiceprint_ = nullptr;};
      inline bool getUseVoiceprint() const { DARABONBA_PTR_GET_DEFAULT(useVoiceprint_, false) };
      inline AvatarChat3D& setUseVoiceprint(bool useVoiceprint) { DARABONBA_PTR_SET_VALUE(useVoiceprint_, useVoiceprint) };


      // userOfflineTimeout Field Functions 
      bool hasUserOfflineTimeout() const { return this->userOfflineTimeout_ != nullptr;};
      void deleteUserOfflineTimeout() { this->userOfflineTimeout_ = nullptr;};
      inline int32_t getUserOfflineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOfflineTimeout_, 0) };
      inline AvatarChat3D& setUserOfflineTimeout(int32_t userOfflineTimeout) { DARABONBA_PTR_SET_VALUE(userOfflineTimeout_, userOfflineTimeout) };


      // userOnlineTimeout Field Functions 
      bool hasUserOnlineTimeout() const { return this->userOnlineTimeout_ != nullptr;};
      void deleteUserOnlineTimeout() { this->userOnlineTimeout_ = nullptr;};
      inline int32_t getUserOnlineTimeout() const { DARABONBA_PTR_GET_DEFAULT(userOnlineTimeout_, 0) };
      inline AvatarChat3D& setUserOnlineTimeout(int32_t userOnlineTimeout) { DARABONBA_PTR_SET_VALUE(userOnlineTimeout_, userOnlineTimeout) };


      // vadLevel Field Functions 
      bool hasVadLevel() const { return this->vadLevel_ != nullptr;};
      void deleteVadLevel() { this->vadLevel_ = nullptr;};
      inline int32_t getVadLevel() const { DARABONBA_PTR_GET_DEFAULT(vadLevel_, 0) };
      inline AvatarChat3D& setVadLevel(int32_t vadLevel) { DARABONBA_PTR_SET_VALUE(vadLevel_, vadLevel) };


      // voiceId Field Functions 
      bool hasVoiceId() const { return this->voiceId_ != nullptr;};
      void deleteVoiceId() { this->voiceId_ = nullptr;};
      inline string getVoiceId() const { DARABONBA_PTR_GET_DEFAULT(voiceId_, "") };
      inline AvatarChat3D& setVoiceId(string voiceId) { DARABONBA_PTR_SET_VALUE(voiceId_, voiceId) };


      // voiceIdList Field Functions 
      bool hasVoiceIdList() const { return this->voiceIdList_ != nullptr;};
      void deleteVoiceIdList() { this->voiceIdList_ = nullptr;};
      inline const vector<string> & getVoiceIdList() const { DARABONBA_PTR_GET_CONST(voiceIdList_, vector<string>) };
      inline vector<string> getVoiceIdList() { DARABONBA_PTR_GET(voiceIdList_, vector<string>) };
      inline AvatarChat3D& setVoiceIdList(const vector<string> & voiceIdList) { DARABONBA_PTR_SET_VALUE(voiceIdList_, voiceIdList) };
      inline AvatarChat3D& setVoiceIdList(vector<string> && voiceIdList) { DARABONBA_PTR_SET_RVALUE(voiceIdList_, voiceIdList) };


      // voiceprintId Field Functions 
      bool hasVoiceprintId() const { return this->voiceprintId_ != nullptr;};
      void deleteVoiceprintId() { this->voiceprintId_ = nullptr;};
      inline string getVoiceprintId() const { DARABONBA_PTR_GET_DEFAULT(voiceprintId_, "") };
      inline AvatarChat3D& setVoiceprintId(string voiceprintId) { DARABONBA_PTR_SET_VALUE(voiceprintId_, voiceprintId) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline int64_t getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0L) };
      inline AvatarChat3D& setVolume(int64_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


      // wakeUpQuery Field Functions 
      bool hasWakeUpQuery() const { return this->wakeUpQuery_ != nullptr;};
      void deleteWakeUpQuery() { this->wakeUpQuery_ = nullptr;};
      inline string getWakeUpQuery() const { DARABONBA_PTR_GET_DEFAULT(wakeUpQuery_, "") };
      inline AvatarChat3D& setWakeUpQuery(string wakeUpQuery) { DARABONBA_PTR_SET_VALUE(wakeUpQuery_, wakeUpQuery) };


      // workflowOverrideParams Field Functions 
      bool hasWorkflowOverrideParams() const { return this->workflowOverrideParams_ != nullptr;};
      void deleteWorkflowOverrideParams() { this->workflowOverrideParams_ = nullptr;};
      inline string getWorkflowOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(workflowOverrideParams_, "") };
      inline AvatarChat3D& setWorkflowOverrideParams(string workflowOverrideParams) { DARABONBA_PTR_SET_VALUE(workflowOverrideParams_, workflowOverrideParams) };


    protected:
      shared_ptr<vector<string>> asrHotWords_ {};
      shared_ptr<string> asrLanguageId_ {};
      shared_ptr<int32_t> asrMaxSilence_ {};
      shared_ptr<string> avatarId_ {};
      shared_ptr<string> bailianAppParams_ {};
      shared_ptr<bool> charBreak_ {};
      shared_ptr<bool> enableIntelligentSegment_ {};
      shared_ptr<bool> enablePushToTalk_ {};
      shared_ptr<bool> enableVoiceInterrupt_ {};
      shared_ptr<bool> gracefulShutdown_ {};
      shared_ptr<string> greeting_ {};
      shared_ptr<vector<string>> interruptWords_ {};
      shared_ptr<vector<AvatarChat3D::LlmHistory>> llmHistory_ {};
      shared_ptr<int32_t> llmHistoryLimit_ {};
      shared_ptr<string> llmSystemPrompt_ {};
      shared_ptr<int32_t> maxIdleTime_ {};
      shared_ptr<bool> useVoiceprint_ {};
      shared_ptr<int32_t> userOfflineTimeout_ {};
      shared_ptr<int32_t> userOnlineTimeout_ {};
      shared_ptr<int32_t> vadLevel_ {};
      shared_ptr<string> voiceId_ {};
      shared_ptr<vector<string>> voiceIdList_ {};
      shared_ptr<string> voiceprintId_ {};
      shared_ptr<int64_t> volume_ {};
      shared_ptr<string> wakeUpQuery_ {};
      shared_ptr<string> workflowOverrideParams_ {};
    };

    virtual bool empty() const override { return this->avatarChat3D_ == nullptr
        && this->visionChat_ == nullptr && this->voiceChat_ == nullptr; };
    // avatarChat3D Field Functions 
    bool hasAvatarChat3D() const { return this->avatarChat3D_ != nullptr;};
    void deleteAvatarChat3D() { this->avatarChat3D_ = nullptr;};
    inline const AIAgentTemplateConfig::AvatarChat3D & getAvatarChat3D() const { DARABONBA_PTR_GET_CONST(avatarChat3D_, AIAgentTemplateConfig::AvatarChat3D) };
    inline AIAgentTemplateConfig::AvatarChat3D getAvatarChat3D() { DARABONBA_PTR_GET(avatarChat3D_, AIAgentTemplateConfig::AvatarChat3D) };
    inline AIAgentTemplateConfig& setAvatarChat3D(const AIAgentTemplateConfig::AvatarChat3D & avatarChat3D) { DARABONBA_PTR_SET_VALUE(avatarChat3D_, avatarChat3D) };
    inline AIAgentTemplateConfig& setAvatarChat3D(AIAgentTemplateConfig::AvatarChat3D && avatarChat3D) { DARABONBA_PTR_SET_RVALUE(avatarChat3D_, avatarChat3D) };


    // visionChat Field Functions 
    bool hasVisionChat() const { return this->visionChat_ != nullptr;};
    void deleteVisionChat() { this->visionChat_ = nullptr;};
    inline const AIAgentTemplateConfig::VisionChat & getVisionChat() const { DARABONBA_PTR_GET_CONST(visionChat_, AIAgentTemplateConfig::VisionChat) };
    inline AIAgentTemplateConfig::VisionChat getVisionChat() { DARABONBA_PTR_GET(visionChat_, AIAgentTemplateConfig::VisionChat) };
    inline AIAgentTemplateConfig& setVisionChat(const AIAgentTemplateConfig::VisionChat & visionChat) { DARABONBA_PTR_SET_VALUE(visionChat_, visionChat) };
    inline AIAgentTemplateConfig& setVisionChat(AIAgentTemplateConfig::VisionChat && visionChat) { DARABONBA_PTR_SET_RVALUE(visionChat_, visionChat) };


    // voiceChat Field Functions 
    bool hasVoiceChat() const { return this->voiceChat_ != nullptr;};
    void deleteVoiceChat() { this->voiceChat_ = nullptr;};
    inline const AIAgentTemplateConfig::VoiceChat & getVoiceChat() const { DARABONBA_PTR_GET_CONST(voiceChat_, AIAgentTemplateConfig::VoiceChat) };
    inline AIAgentTemplateConfig::VoiceChat getVoiceChat() { DARABONBA_PTR_GET(voiceChat_, AIAgentTemplateConfig::VoiceChat) };
    inline AIAgentTemplateConfig& setVoiceChat(const AIAgentTemplateConfig::VoiceChat & voiceChat) { DARABONBA_PTR_SET_VALUE(voiceChat_, voiceChat) };
    inline AIAgentTemplateConfig& setVoiceChat(AIAgentTemplateConfig::VoiceChat && voiceChat) { DARABONBA_PTR_SET_RVALUE(voiceChat_, voiceChat) };


  protected:
    shared_ptr<AIAgentTemplateConfig::AvatarChat3D> avatarChat3D_ {};
    shared_ptr<AIAgentTemplateConfig::VisionChat> visionChat_ {};
    shared_ptr<AIAgentTemplateConfig::VoiceChat> voiceChat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
