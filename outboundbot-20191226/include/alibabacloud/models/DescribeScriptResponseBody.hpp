// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NlsConfig, nlsConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Script, script_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NlsConfig, nlsConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Script, script_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeScriptResponseBody() = default ;
    DescribeScriptResponseBody(const DescribeScriptResponseBody &) = default ;
    DescribeScriptResponseBody(DescribeScriptResponseBody &&) = default ;
    DescribeScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScriptResponseBody() = default ;
    DescribeScriptResponseBody& operator=(const DescribeScriptResponseBody &) = default ;
    DescribeScriptResponseBody& operator=(DescribeScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Script : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Script& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Script& obj) { 
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
      Script() = default ;
      Script(const Script &) = default ;
      Script(Script &&) = default ;
      Script(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Script() = default ;
      Script& operator=(const Script &) = default ;
      Script& operator=(Script &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NluProfile : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NluProfile& obj) { 
          DARABONBA_PTR_TO_JSON(FcFunction, fcFunction_);
          DARABONBA_PTR_TO_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
          DARABONBA_PTR_TO_JSON(FcRegion, fcRegion_);
          DARABONBA_PTR_TO_JSON(SupportBeebotPrompts, supportBeebotPrompts_);
        };
        friend void from_json(const Darabonba::Json& j, NluProfile& obj) { 
          DARABONBA_PTR_FROM_JSON(FcFunction, fcFunction_);
          DARABONBA_PTR_FROM_JSON(FcHttpTriggerUrl, fcHttpTriggerUrl_);
          DARABONBA_PTR_FROM_JSON(FcRegion, fcRegion_);
          DARABONBA_PTR_FROM_JSON(SupportBeebotPrompts, supportBeebotPrompts_);
        };
        NluProfile() = default ;
        NluProfile(const NluProfile &) = default ;
        NluProfile(NluProfile &&) = default ;
        NluProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NluProfile() = default ;
        NluProfile& operator=(const NluProfile &) = default ;
        NluProfile& operator=(NluProfile &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->fcFunction_ == nullptr
        && this->fcHttpTriggerUrl_ == nullptr && this->fcRegion_ == nullptr && this->supportBeebotPrompts_ == nullptr; };
        // fcFunction Field Functions 
        bool hasFcFunction() const { return this->fcFunction_ != nullptr;};
        void deleteFcFunction() { this->fcFunction_ = nullptr;};
        inline string getFcFunction() const { DARABONBA_PTR_GET_DEFAULT(fcFunction_, "") };
        inline NluProfile& setFcFunction(string fcFunction) { DARABONBA_PTR_SET_VALUE(fcFunction_, fcFunction) };


        // fcHttpTriggerUrl Field Functions 
        bool hasFcHttpTriggerUrl() const { return this->fcHttpTriggerUrl_ != nullptr;};
        void deleteFcHttpTriggerUrl() { this->fcHttpTriggerUrl_ = nullptr;};
        inline string getFcHttpTriggerUrl() const { DARABONBA_PTR_GET_DEFAULT(fcHttpTriggerUrl_, "") };
        inline NluProfile& setFcHttpTriggerUrl(string fcHttpTriggerUrl) { DARABONBA_PTR_SET_VALUE(fcHttpTriggerUrl_, fcHttpTriggerUrl) };


        // fcRegion Field Functions 
        bool hasFcRegion() const { return this->fcRegion_ != nullptr;};
        void deleteFcRegion() { this->fcRegion_ = nullptr;};
        inline string getFcRegion() const { DARABONBA_PTR_GET_DEFAULT(fcRegion_, "") };
        inline NluProfile& setFcRegion(string fcRegion) { DARABONBA_PTR_SET_VALUE(fcRegion_, fcRegion) };


        // supportBeebotPrompts Field Functions 
        bool hasSupportBeebotPrompts() const { return this->supportBeebotPrompts_ != nullptr;};
        void deleteSupportBeebotPrompts() { this->supportBeebotPrompts_ = nullptr;};
        inline bool getSupportBeebotPrompts() const { DARABONBA_PTR_GET_DEFAULT(supportBeebotPrompts_, false) };
        inline NluProfile& setSupportBeebotPrompts(bool supportBeebotPrompts) { DARABONBA_PTR_SET_VALUE(supportBeebotPrompts_, supportBeebotPrompts) };


      protected:
        shared_ptr<string> fcFunction_ {};
        shared_ptr<string> fcHttpTriggerUrl_ {};
        shared_ptr<string> fcRegion_ {};
        shared_ptr<bool> supportBeebotPrompts_ {};
      };

      virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentKey_ == nullptr && this->agentLlm_ == nullptr && this->asrConfig_ == nullptr && this->chatConfig_ == nullptr && this->chatbotId_ == nullptr
        && this->debugStatus_ == nullptr && this->emotionEnable_ == nullptr && this->industry_ == nullptr && this->isDebugDrafted_ == nullptr && this->isDrafted_ == nullptr
        && this->labelConfig_ == nullptr && this->longWaitEnable_ == nullptr && this->miniPlaybackEnable_ == nullptr && this->newBargeInEnable_ == nullptr && this->nluEngine_ == nullptr
        && this->nluProfile_ == nullptr && this->scene_ == nullptr && this->scriptDescription_ == nullptr && this->scriptId_ == nullptr && this->scriptName_ == nullptr
        && this->status_ == nullptr && this->ttsConfig_ == nullptr && this->updateTime_ == nullptr; };
      // agentId Field Functions 
      bool hasAgentId() const { return this->agentId_ != nullptr;};
      void deleteAgentId() { this->agentId_ = nullptr;};
      inline int64_t getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
      inline Script& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


      // agentKey Field Functions 
      bool hasAgentKey() const { return this->agentKey_ != nullptr;};
      void deleteAgentKey() { this->agentKey_ = nullptr;};
      inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
      inline Script& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


      // agentLlm Field Functions 
      bool hasAgentLlm() const { return this->agentLlm_ != nullptr;};
      void deleteAgentLlm() { this->agentLlm_ = nullptr;};
      inline bool getAgentLlm() const { DARABONBA_PTR_GET_DEFAULT(agentLlm_, false) };
      inline Script& setAgentLlm(bool agentLlm) { DARABONBA_PTR_SET_VALUE(agentLlm_, agentLlm) };


      // asrConfig Field Functions 
      bool hasAsrConfig() const { return this->asrConfig_ != nullptr;};
      void deleteAsrConfig() { this->asrConfig_ = nullptr;};
      inline string getAsrConfig() const { DARABONBA_PTR_GET_DEFAULT(asrConfig_, "") };
      inline Script& setAsrConfig(string asrConfig) { DARABONBA_PTR_SET_VALUE(asrConfig_, asrConfig) };


      // chatConfig Field Functions 
      bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
      void deleteChatConfig() { this->chatConfig_ = nullptr;};
      inline string getChatConfig() const { DARABONBA_PTR_GET_DEFAULT(chatConfig_, "") };
      inline Script& setChatConfig(string chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };


      // chatbotId Field Functions 
      bool hasChatbotId() const { return this->chatbotId_ != nullptr;};
      void deleteChatbotId() { this->chatbotId_ = nullptr;};
      inline string getChatbotId() const { DARABONBA_PTR_GET_DEFAULT(chatbotId_, "") };
      inline Script& setChatbotId(string chatbotId) { DARABONBA_PTR_SET_VALUE(chatbotId_, chatbotId) };


      // debugStatus Field Functions 
      bool hasDebugStatus() const { return this->debugStatus_ != nullptr;};
      void deleteDebugStatus() { this->debugStatus_ = nullptr;};
      inline string getDebugStatus() const { DARABONBA_PTR_GET_DEFAULT(debugStatus_, "") };
      inline Script& setDebugStatus(string debugStatus) { DARABONBA_PTR_SET_VALUE(debugStatus_, debugStatus) };


      // emotionEnable Field Functions 
      bool hasEmotionEnable() const { return this->emotionEnable_ != nullptr;};
      void deleteEmotionEnable() { this->emotionEnable_ = nullptr;};
      inline bool getEmotionEnable() const { DARABONBA_PTR_GET_DEFAULT(emotionEnable_, false) };
      inline Script& setEmotionEnable(bool emotionEnable) { DARABONBA_PTR_SET_VALUE(emotionEnable_, emotionEnable) };


      // industry Field Functions 
      bool hasIndustry() const { return this->industry_ != nullptr;};
      void deleteIndustry() { this->industry_ = nullptr;};
      inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
      inline Script& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


      // isDebugDrafted Field Functions 
      bool hasIsDebugDrafted() const { return this->isDebugDrafted_ != nullptr;};
      void deleteIsDebugDrafted() { this->isDebugDrafted_ = nullptr;};
      inline bool getIsDebugDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDebugDrafted_, false) };
      inline Script& setIsDebugDrafted(bool isDebugDrafted) { DARABONBA_PTR_SET_VALUE(isDebugDrafted_, isDebugDrafted) };


      // isDrafted Field Functions 
      bool hasIsDrafted() const { return this->isDrafted_ != nullptr;};
      void deleteIsDrafted() { this->isDrafted_ = nullptr;};
      inline bool getIsDrafted() const { DARABONBA_PTR_GET_DEFAULT(isDrafted_, false) };
      inline Script& setIsDrafted(bool isDrafted) { DARABONBA_PTR_SET_VALUE(isDrafted_, isDrafted) };


      // labelConfig Field Functions 
      bool hasLabelConfig() const { return this->labelConfig_ != nullptr;};
      void deleteLabelConfig() { this->labelConfig_ = nullptr;};
      inline string getLabelConfig() const { DARABONBA_PTR_GET_DEFAULT(labelConfig_, "") };
      inline Script& setLabelConfig(string labelConfig) { DARABONBA_PTR_SET_VALUE(labelConfig_, labelConfig) };


      // longWaitEnable Field Functions 
      bool hasLongWaitEnable() const { return this->longWaitEnable_ != nullptr;};
      void deleteLongWaitEnable() { this->longWaitEnable_ = nullptr;};
      inline bool getLongWaitEnable() const { DARABONBA_PTR_GET_DEFAULT(longWaitEnable_, false) };
      inline Script& setLongWaitEnable(bool longWaitEnable) { DARABONBA_PTR_SET_VALUE(longWaitEnable_, longWaitEnable) };


      // miniPlaybackEnable Field Functions 
      bool hasMiniPlaybackEnable() const { return this->miniPlaybackEnable_ != nullptr;};
      void deleteMiniPlaybackEnable() { this->miniPlaybackEnable_ = nullptr;};
      inline bool getMiniPlaybackEnable() const { DARABONBA_PTR_GET_DEFAULT(miniPlaybackEnable_, false) };
      inline Script& setMiniPlaybackEnable(bool miniPlaybackEnable) { DARABONBA_PTR_SET_VALUE(miniPlaybackEnable_, miniPlaybackEnable) };


      // newBargeInEnable Field Functions 
      bool hasNewBargeInEnable() const { return this->newBargeInEnable_ != nullptr;};
      void deleteNewBargeInEnable() { this->newBargeInEnable_ = nullptr;};
      inline bool getNewBargeInEnable() const { DARABONBA_PTR_GET_DEFAULT(newBargeInEnable_, false) };
      inline Script& setNewBargeInEnable(bool newBargeInEnable) { DARABONBA_PTR_SET_VALUE(newBargeInEnable_, newBargeInEnable) };


      // nluEngine Field Functions 
      bool hasNluEngine() const { return this->nluEngine_ != nullptr;};
      void deleteNluEngine() { this->nluEngine_ = nullptr;};
      inline string getNluEngine() const { DARABONBA_PTR_GET_DEFAULT(nluEngine_, "") };
      inline Script& setNluEngine(string nluEngine) { DARABONBA_PTR_SET_VALUE(nluEngine_, nluEngine) };


      // nluProfile Field Functions 
      bool hasNluProfile() const { return this->nluProfile_ != nullptr;};
      void deleteNluProfile() { this->nluProfile_ = nullptr;};
      inline const Script::NluProfile & getNluProfile() const { DARABONBA_PTR_GET_CONST(nluProfile_, Script::NluProfile) };
      inline Script::NluProfile getNluProfile() { DARABONBA_PTR_GET(nluProfile_, Script::NluProfile) };
      inline Script& setNluProfile(const Script::NluProfile & nluProfile) { DARABONBA_PTR_SET_VALUE(nluProfile_, nluProfile) };
      inline Script& setNluProfile(Script::NluProfile && nluProfile) { DARABONBA_PTR_SET_RVALUE(nluProfile_, nluProfile) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline Script& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // scriptDescription Field Functions 
      bool hasScriptDescription() const { return this->scriptDescription_ != nullptr;};
      void deleteScriptDescription() { this->scriptDescription_ = nullptr;};
      inline string getScriptDescription() const { DARABONBA_PTR_GET_DEFAULT(scriptDescription_, "") };
      inline Script& setScriptDescription(string scriptDescription) { DARABONBA_PTR_SET_VALUE(scriptDescription_, scriptDescription) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Script& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline Script& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Script& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // ttsConfig Field Functions 
      bool hasTtsConfig() const { return this->ttsConfig_ != nullptr;};
      void deleteTtsConfig() { this->ttsConfig_ = nullptr;};
      inline string getTtsConfig() const { DARABONBA_PTR_GET_DEFAULT(ttsConfig_, "") };
      inline Script& setTtsConfig(string ttsConfig) { DARABONBA_PTR_SET_VALUE(ttsConfig_, ttsConfig) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Script& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> agentId_ {};
      shared_ptr<string> agentKey_ {};
      shared_ptr<bool> agentLlm_ {};
      shared_ptr<string> asrConfig_ {};
      shared_ptr<string> chatConfig_ {};
      shared_ptr<string> chatbotId_ {};
      shared_ptr<string> debugStatus_ {};
      shared_ptr<bool> emotionEnable_ {};
      shared_ptr<string> industry_ {};
      shared_ptr<bool> isDebugDrafted_ {};
      shared_ptr<bool> isDrafted_ {};
      shared_ptr<string> labelConfig_ {};
      shared_ptr<bool> longWaitEnable_ {};
      shared_ptr<bool> miniPlaybackEnable_ {};
      shared_ptr<bool> newBargeInEnable_ {};
      shared_ptr<string> nluEngine_ {};
      shared_ptr<Script::NluProfile> nluProfile_ {};
      shared_ptr<string> scene_ {};
      shared_ptr<string> scriptDescription_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> scriptName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> ttsConfig_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->nlsConfig_ == nullptr && this->requestId_ == nullptr && this->script_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeScriptResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeScriptResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeScriptResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nlsConfig Field Functions 
    bool hasNlsConfig() const { return this->nlsConfig_ != nullptr;};
    void deleteNlsConfig() { this->nlsConfig_ = nullptr;};
    inline string getNlsConfig() const { DARABONBA_PTR_GET_DEFAULT(nlsConfig_, "") };
    inline DescribeScriptResponseBody& setNlsConfig(string nlsConfig) { DARABONBA_PTR_SET_VALUE(nlsConfig_, nlsConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // script Field Functions 
    bool hasScript() const { return this->script_ != nullptr;};
    void deleteScript() { this->script_ = nullptr;};
    inline const DescribeScriptResponseBody::Script & getScript() const { DARABONBA_PTR_GET_CONST(script_, DescribeScriptResponseBody::Script) };
    inline DescribeScriptResponseBody::Script getScript() { DARABONBA_PTR_GET(script_, DescribeScriptResponseBody::Script) };
    inline DescribeScriptResponseBody& setScript(const DescribeScriptResponseBody::Script & script) { DARABONBA_PTR_SET_VALUE(script_, script) };
    inline DescribeScriptResponseBody& setScript(DescribeScriptResponseBody::Script && script) { DARABONBA_PTR_SET_RVALUE(script_, script) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeScriptResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nlsConfig_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeScriptResponseBody::Script> script_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
