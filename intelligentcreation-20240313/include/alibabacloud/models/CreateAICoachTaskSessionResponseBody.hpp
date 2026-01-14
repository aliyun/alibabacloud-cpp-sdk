// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAICOACHTASKSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class CreateAICoachTaskSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAICoachTaskSessionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(channelToken, channelToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(scriptInfo, scriptInfo_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(webSocketUrl, webSocketUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAICoachTaskSessionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(channelToken, channelToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(scriptInfo, scriptInfo_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sessionStatus, sessionStatus_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(webSocketUrl, webSocketUrl_);
    };
    CreateAICoachTaskSessionResponseBody() = default ;
    CreateAICoachTaskSessionResponseBody(const CreateAICoachTaskSessionResponseBody &) = default ;
    CreateAICoachTaskSessionResponseBody(CreateAICoachTaskSessionResponseBody &&) = default ;
    CreateAICoachTaskSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAICoachTaskSessionResponseBody() = default ;
    CreateAICoachTaskSessionResponseBody& operator=(const CreateAICoachTaskSessionResponseBody &) = default ;
    CreateAICoachTaskSessionResponseBody& operator=(CreateAICoachTaskSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScriptInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScriptInfo& obj) { 
        DARABONBA_PTR_TO_JSON(agentIconUrl, agentIconUrl_);
        DARABONBA_PTR_TO_JSON(characterName, characterName_);
        DARABONBA_PTR_TO_JSON(dialogueTextFlag, dialogueTextFlag_);
        DARABONBA_PTR_TO_JSON(dialogueTipFlag, dialogueTipFlag_);
        DARABONBA_PTR_TO_JSON(initiator, initiator_);
        DARABONBA_PTR_TO_JSON(inputTypeList, inputTypeList_);
        DARABONBA_PTR_TO_JSON(maxDuration, maxDuration_);
        DARABONBA_PTR_TO_JSON(scriptDesc, scriptDesc_);
        DARABONBA_PTR_TO_JSON(scriptName, scriptName_);
        DARABONBA_PTR_TO_JSON(scriptRecordId, scriptRecordId_);
        DARABONBA_PTR_TO_JSON(scriptType, scriptType_);
        DARABONBA_PTR_TO_JSON(sparringTipContent, sparringTipContent_);
        DARABONBA_PTR_TO_JSON(sparringTipTitle, sparringTipTitle_);
        DARABONBA_PTR_TO_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
        DARABONBA_PTR_TO_JSON(studentThinkTimeLimit, studentThinkTimeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, ScriptInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(agentIconUrl, agentIconUrl_);
        DARABONBA_PTR_FROM_JSON(characterName, characterName_);
        DARABONBA_PTR_FROM_JSON(dialogueTextFlag, dialogueTextFlag_);
        DARABONBA_PTR_FROM_JSON(dialogueTipFlag, dialogueTipFlag_);
        DARABONBA_PTR_FROM_JSON(initiator, initiator_);
        DARABONBA_PTR_FROM_JSON(inputTypeList, inputTypeList_);
        DARABONBA_PTR_FROM_JSON(maxDuration, maxDuration_);
        DARABONBA_PTR_FROM_JSON(scriptDesc, scriptDesc_);
        DARABONBA_PTR_FROM_JSON(scriptName, scriptName_);
        DARABONBA_PTR_FROM_JSON(scriptRecordId, scriptRecordId_);
        DARABONBA_PTR_FROM_JSON(scriptType, scriptType_);
        DARABONBA_PTR_FROM_JSON(sparringTipContent, sparringTipContent_);
        DARABONBA_PTR_FROM_JSON(sparringTipTitle, sparringTipTitle_);
        DARABONBA_PTR_FROM_JSON(studentThinkTimeFlag, studentThinkTimeFlag_);
        DARABONBA_PTR_FROM_JSON(studentThinkTimeLimit, studentThinkTimeLimit_);
      };
      ScriptInfo() = default ;
      ScriptInfo(const ScriptInfo &) = default ;
      ScriptInfo(ScriptInfo &&) = default ;
      ScriptInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScriptInfo() = default ;
      ScriptInfo& operator=(const ScriptInfo &) = default ;
      ScriptInfo& operator=(ScriptInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentIconUrl_ == nullptr
        && this->characterName_ == nullptr && this->dialogueTextFlag_ == nullptr && this->dialogueTipFlag_ == nullptr && this->initiator_ == nullptr && this->inputTypeList_ == nullptr
        && this->maxDuration_ == nullptr && this->scriptDesc_ == nullptr && this->scriptName_ == nullptr && this->scriptRecordId_ == nullptr && this->scriptType_ == nullptr
        && this->sparringTipContent_ == nullptr && this->sparringTipTitle_ == nullptr && this->studentThinkTimeFlag_ == nullptr && this->studentThinkTimeLimit_ == nullptr; };
      // agentIconUrl Field Functions 
      bool hasAgentIconUrl() const { return this->agentIconUrl_ != nullptr;};
      void deleteAgentIconUrl() { this->agentIconUrl_ = nullptr;};
      inline string getAgentIconUrl() const { DARABONBA_PTR_GET_DEFAULT(agentIconUrl_, "") };
      inline ScriptInfo& setAgentIconUrl(string agentIconUrl) { DARABONBA_PTR_SET_VALUE(agentIconUrl_, agentIconUrl) };


      // characterName Field Functions 
      bool hasCharacterName() const { return this->characterName_ != nullptr;};
      void deleteCharacterName() { this->characterName_ = nullptr;};
      inline string getCharacterName() const { DARABONBA_PTR_GET_DEFAULT(characterName_, "") };
      inline ScriptInfo& setCharacterName(string characterName) { DARABONBA_PTR_SET_VALUE(characterName_, characterName) };


      // dialogueTextFlag Field Functions 
      bool hasDialogueTextFlag() const { return this->dialogueTextFlag_ != nullptr;};
      void deleteDialogueTextFlag() { this->dialogueTextFlag_ = nullptr;};
      inline bool getDialogueTextFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTextFlag_, false) };
      inline ScriptInfo& setDialogueTextFlag(bool dialogueTextFlag) { DARABONBA_PTR_SET_VALUE(dialogueTextFlag_, dialogueTextFlag) };


      // dialogueTipFlag Field Functions 
      bool hasDialogueTipFlag() const { return this->dialogueTipFlag_ != nullptr;};
      void deleteDialogueTipFlag() { this->dialogueTipFlag_ = nullptr;};
      inline bool getDialogueTipFlag() const { DARABONBA_PTR_GET_DEFAULT(dialogueTipFlag_, false) };
      inline ScriptInfo& setDialogueTipFlag(bool dialogueTipFlag) { DARABONBA_PTR_SET_VALUE(dialogueTipFlag_, dialogueTipFlag) };


      // initiator Field Functions 
      bool hasInitiator() const { return this->initiator_ != nullptr;};
      void deleteInitiator() { this->initiator_ = nullptr;};
      inline string getInitiator() const { DARABONBA_PTR_GET_DEFAULT(initiator_, "") };
      inline ScriptInfo& setInitiator(string initiator) { DARABONBA_PTR_SET_VALUE(initiator_, initiator) };


      // inputTypeList Field Functions 
      bool hasInputTypeList() const { return this->inputTypeList_ != nullptr;};
      void deleteInputTypeList() { this->inputTypeList_ = nullptr;};
      inline const vector<string> & getInputTypeList() const { DARABONBA_PTR_GET_CONST(inputTypeList_, vector<string>) };
      inline vector<string> getInputTypeList() { DARABONBA_PTR_GET(inputTypeList_, vector<string>) };
      inline ScriptInfo& setInputTypeList(const vector<string> & inputTypeList) { DARABONBA_PTR_SET_VALUE(inputTypeList_, inputTypeList) };
      inline ScriptInfo& setInputTypeList(vector<string> && inputTypeList) { DARABONBA_PTR_SET_RVALUE(inputTypeList_, inputTypeList) };


      // maxDuration Field Functions 
      bool hasMaxDuration() const { return this->maxDuration_ != nullptr;};
      void deleteMaxDuration() { this->maxDuration_ = nullptr;};
      inline int64_t getMaxDuration() const { DARABONBA_PTR_GET_DEFAULT(maxDuration_, 0L) };
      inline ScriptInfo& setMaxDuration(int64_t maxDuration) { DARABONBA_PTR_SET_VALUE(maxDuration_, maxDuration) };


      // scriptDesc Field Functions 
      bool hasScriptDesc() const { return this->scriptDesc_ != nullptr;};
      void deleteScriptDesc() { this->scriptDesc_ = nullptr;};
      inline string getScriptDesc() const { DARABONBA_PTR_GET_DEFAULT(scriptDesc_, "") };
      inline ScriptInfo& setScriptDesc(string scriptDesc) { DARABONBA_PTR_SET_VALUE(scriptDesc_, scriptDesc) };


      // scriptName Field Functions 
      bool hasScriptName() const { return this->scriptName_ != nullptr;};
      void deleteScriptName() { this->scriptName_ = nullptr;};
      inline string getScriptName() const { DARABONBA_PTR_GET_DEFAULT(scriptName_, "") };
      inline ScriptInfo& setScriptName(string scriptName) { DARABONBA_PTR_SET_VALUE(scriptName_, scriptName) };


      // scriptRecordId Field Functions 
      bool hasScriptRecordId() const { return this->scriptRecordId_ != nullptr;};
      void deleteScriptRecordId() { this->scriptRecordId_ = nullptr;};
      inline string getScriptRecordId() const { DARABONBA_PTR_GET_DEFAULT(scriptRecordId_, "") };
      inline ScriptInfo& setScriptRecordId(string scriptRecordId) { DARABONBA_PTR_SET_VALUE(scriptRecordId_, scriptRecordId) };


      // scriptType Field Functions 
      bool hasScriptType() const { return this->scriptType_ != nullptr;};
      void deleteScriptType() { this->scriptType_ = nullptr;};
      inline int64_t getScriptType() const { DARABONBA_PTR_GET_DEFAULT(scriptType_, 0L) };
      inline ScriptInfo& setScriptType(int64_t scriptType) { DARABONBA_PTR_SET_VALUE(scriptType_, scriptType) };


      // sparringTipContent Field Functions 
      bool hasSparringTipContent() const { return this->sparringTipContent_ != nullptr;};
      void deleteSparringTipContent() { this->sparringTipContent_ = nullptr;};
      inline string getSparringTipContent() const { DARABONBA_PTR_GET_DEFAULT(sparringTipContent_, "") };
      inline ScriptInfo& setSparringTipContent(string sparringTipContent) { DARABONBA_PTR_SET_VALUE(sparringTipContent_, sparringTipContent) };


      // sparringTipTitle Field Functions 
      bool hasSparringTipTitle() const { return this->sparringTipTitle_ != nullptr;};
      void deleteSparringTipTitle() { this->sparringTipTitle_ = nullptr;};
      inline string getSparringTipTitle() const { DARABONBA_PTR_GET_DEFAULT(sparringTipTitle_, "") };
      inline ScriptInfo& setSparringTipTitle(string sparringTipTitle) { DARABONBA_PTR_SET_VALUE(sparringTipTitle_, sparringTipTitle) };


      // studentThinkTimeFlag Field Functions 
      bool hasStudentThinkTimeFlag() const { return this->studentThinkTimeFlag_ != nullptr;};
      void deleteStudentThinkTimeFlag() { this->studentThinkTimeFlag_ = nullptr;};
      inline bool getStudentThinkTimeFlag() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeFlag_, false) };
      inline ScriptInfo& setStudentThinkTimeFlag(bool studentThinkTimeFlag) { DARABONBA_PTR_SET_VALUE(studentThinkTimeFlag_, studentThinkTimeFlag) };


      // studentThinkTimeLimit Field Functions 
      bool hasStudentThinkTimeLimit() const { return this->studentThinkTimeLimit_ != nullptr;};
      void deleteStudentThinkTimeLimit() { this->studentThinkTimeLimit_ = nullptr;};
      inline int64_t getStudentThinkTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(studentThinkTimeLimit_, 0L) };
      inline ScriptInfo& setStudentThinkTimeLimit(int64_t studentThinkTimeLimit) { DARABONBA_PTR_SET_VALUE(studentThinkTimeLimit_, studentThinkTimeLimit) };


    protected:
      shared_ptr<string> agentIconUrl_ {};
      shared_ptr<string> characterName_ {};
      shared_ptr<bool> dialogueTextFlag_ {};
      shared_ptr<bool> dialogueTipFlag_ {};
      shared_ptr<string> initiator_ {};
      shared_ptr<vector<string>> inputTypeList_ {};
      shared_ptr<int64_t> maxDuration_ {};
      shared_ptr<string> scriptDesc_ {};
      shared_ptr<string> scriptName_ {};
      shared_ptr<string> scriptRecordId_ {};
      shared_ptr<int64_t> scriptType_ {};
      shared_ptr<string> sparringTipContent_ {};
      shared_ptr<string> sparringTipTitle_ {};
      shared_ptr<bool> studentThinkTimeFlag_ {};
      shared_ptr<int64_t> studentThinkTimeLimit_ {};
    };

    virtual bool empty() const override { return this->channelToken_ == nullptr
        && this->requestId_ == nullptr && this->scriptInfo_ == nullptr && this->sessionId_ == nullptr && this->sessionStatus_ == nullptr && this->token_ == nullptr
        && this->webSocketUrl_ == nullptr; };
    // channelToken Field Functions 
    bool hasChannelToken() const { return this->channelToken_ != nullptr;};
    void deleteChannelToken() { this->channelToken_ = nullptr;};
    inline string getChannelToken() const { DARABONBA_PTR_GET_DEFAULT(channelToken_, "") };
    inline CreateAICoachTaskSessionResponseBody& setChannelToken(string channelToken) { DARABONBA_PTR_SET_VALUE(channelToken_, channelToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAICoachTaskSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scriptInfo Field Functions 
    bool hasScriptInfo() const { return this->scriptInfo_ != nullptr;};
    void deleteScriptInfo() { this->scriptInfo_ = nullptr;};
    inline const CreateAICoachTaskSessionResponseBody::ScriptInfo & getScriptInfo() const { DARABONBA_PTR_GET_CONST(scriptInfo_, CreateAICoachTaskSessionResponseBody::ScriptInfo) };
    inline CreateAICoachTaskSessionResponseBody::ScriptInfo getScriptInfo() { DARABONBA_PTR_GET(scriptInfo_, CreateAICoachTaskSessionResponseBody::ScriptInfo) };
    inline CreateAICoachTaskSessionResponseBody& setScriptInfo(const CreateAICoachTaskSessionResponseBody::ScriptInfo & scriptInfo) { DARABONBA_PTR_SET_VALUE(scriptInfo_, scriptInfo) };
    inline CreateAICoachTaskSessionResponseBody& setScriptInfo(CreateAICoachTaskSessionResponseBody::ScriptInfo && scriptInfo) { DARABONBA_PTR_SET_RVALUE(scriptInfo_, scriptInfo) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateAICoachTaskSessionResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionStatus Field Functions 
    bool hasSessionStatus() const { return this->sessionStatus_ != nullptr;};
    void deleteSessionStatus() { this->sessionStatus_ = nullptr;};
    inline int64_t getSessionStatus() const { DARABONBA_PTR_GET_DEFAULT(sessionStatus_, 0L) };
    inline CreateAICoachTaskSessionResponseBody& setSessionStatus(int64_t sessionStatus) { DARABONBA_PTR_SET_VALUE(sessionStatus_, sessionStatus) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateAICoachTaskSessionResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // webSocketUrl Field Functions 
    bool hasWebSocketUrl() const { return this->webSocketUrl_ != nullptr;};
    void deleteWebSocketUrl() { this->webSocketUrl_ = nullptr;};
    inline string getWebSocketUrl() const { DARABONBA_PTR_GET_DEFAULT(webSocketUrl_, "") };
    inline CreateAICoachTaskSessionResponseBody& setWebSocketUrl(string webSocketUrl) { DARABONBA_PTR_SET_VALUE(webSocketUrl_, webSocketUrl) };


  protected:
    // rtctoken
    shared_ptr<string> channelToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateAICoachTaskSessionResponseBody::ScriptInfo> scriptInfo_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<int64_t> sessionStatus_ {};
    // Token
    shared_ptr<string> token_ {};
    shared_ptr<string> webSocketUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
