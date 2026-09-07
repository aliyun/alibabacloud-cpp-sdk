// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATUSERSECAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATUSERSECAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SasClaw20260626
{
namespace Models
{
  class ChatUserSecAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatUserSecAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(AttachmentStagingId, attachmentStagingId_);
      DARABONBA_PTR_TO_JSON(Attachments, attachments_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(ExtraParams, extraParams_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ResponseLanguage, responseLanguage_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Skill, skill_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
      DARABONBA_PTR_TO_JSON(TalkId, talkId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_TO_JSON(UserInputInfo, userInputInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ChatUserSecAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(AttachmentStagingId, attachmentStagingId_);
      DARABONBA_PTR_FROM_JSON(Attachments, attachments_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(ExtraParams, extraParams_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ResponseLanguage, responseLanguage_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Skill, skill_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
      DARABONBA_PTR_FROM_JSON(TalkId, talkId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      DARABONBA_PTR_FROM_JSON(UserInputInfo, userInputInfo_);
    };
    ChatUserSecAgentRequest() = default ;
    ChatUserSecAgentRequest(const ChatUserSecAgentRequest &) = default ;
    ChatUserSecAgentRequest(ChatUserSecAgentRequest &&) = default ;
    ChatUserSecAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatUserSecAgentRequest() = default ;
    ChatUserSecAgentRequest& operator=(const ChatUserSecAgentRequest &) = default ;
    ChatUserSecAgentRequest& operator=(ChatUserSecAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agent_ == nullptr
        && this->attachmentStagingId_ == nullptr && this->attachments_ == nullptr && this->channel_ == nullptr && this->executionMode_ == nullptr && this->extraParams_ == nullptr
        && this->memory_ == nullptr && this->model_ == nullptr && this->prompt_ == nullptr && this->responseLanguage_ == nullptr && this->sessionId_ == nullptr
        && this->skill_ == nullptr && this->stream_ == nullptr && this->talkId_ == nullptr && this->target_ == nullptr && this->timeZone_ == nullptr
        && this->userInputInfo_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline string getAgent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
    inline ChatUserSecAgentRequest& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


    // attachmentStagingId Field Functions 
    bool hasAttachmentStagingId() const { return this->attachmentStagingId_ != nullptr;};
    void deleteAttachmentStagingId() { this->attachmentStagingId_ = nullptr;};
    inline string getAttachmentStagingId() const { DARABONBA_PTR_GET_DEFAULT(attachmentStagingId_, "") };
    inline ChatUserSecAgentRequest& setAttachmentStagingId(string attachmentStagingId) { DARABONBA_PTR_SET_VALUE(attachmentStagingId_, attachmentStagingId) };


    // attachments Field Functions 
    bool hasAttachments() const { return this->attachments_ != nullptr;};
    void deleteAttachments() { this->attachments_ = nullptr;};
    inline string getAttachments() const { DARABONBA_PTR_GET_DEFAULT(attachments_, "") };
    inline ChatUserSecAgentRequest& setAttachments(string attachments) { DARABONBA_PTR_SET_VALUE(attachments_, attachments) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string getChannel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline ChatUserSecAgentRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline ChatUserSecAgentRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // extraParams Field Functions 
    bool hasExtraParams() const { return this->extraParams_ != nullptr;};
    void deleteExtraParams() { this->extraParams_ = nullptr;};
    inline string getExtraParams() const { DARABONBA_PTR_GET_DEFAULT(extraParams_, "") };
    inline ChatUserSecAgentRequest& setExtraParams(string extraParams) { DARABONBA_PTR_SET_VALUE(extraParams_, extraParams) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline bool getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, false) };
    inline ChatUserSecAgentRequest& setMemory(bool memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline ChatUserSecAgentRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline ChatUserSecAgentRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // responseLanguage Field Functions 
    bool hasResponseLanguage() const { return this->responseLanguage_ != nullptr;};
    void deleteResponseLanguage() { this->responseLanguage_ = nullptr;};
    inline string getResponseLanguage() const { DARABONBA_PTR_GET_DEFAULT(responseLanguage_, "") };
    inline ChatUserSecAgentRequest& setResponseLanguage(string responseLanguage) { DARABONBA_PTR_SET_VALUE(responseLanguage_, responseLanguage) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatUserSecAgentRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // skill Field Functions 
    bool hasSkill() const { return this->skill_ != nullptr;};
    void deleteSkill() { this->skill_ = nullptr;};
    inline string getSkill() const { DARABONBA_PTR_GET_DEFAULT(skill_, "") };
    inline ChatUserSecAgentRequest& setSkill(string skill) { DARABONBA_PTR_SET_VALUE(skill_, skill) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline ChatUserSecAgentRequest& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // talkId Field Functions 
    bool hasTalkId() const { return this->talkId_ != nullptr;};
    void deleteTalkId() { this->talkId_ = nullptr;};
    inline string getTalkId() const { DARABONBA_PTR_GET_DEFAULT(talkId_, "") };
    inline ChatUserSecAgentRequest& setTalkId(string talkId) { DARABONBA_PTR_SET_VALUE(talkId_, talkId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ChatUserSecAgentRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ChatUserSecAgentRequest& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    // userInputInfo Field Functions 
    bool hasUserInputInfo() const { return this->userInputInfo_ != nullptr;};
    void deleteUserInputInfo() { this->userInputInfo_ = nullptr;};
    inline string getUserInputInfo() const { DARABONBA_PTR_GET_DEFAULT(userInputInfo_, "") };
    inline ChatUserSecAgentRequest& setUserInputInfo(string userInputInfo) { DARABONBA_PTR_SET_VALUE(userInputInfo_, userInputInfo) };


  protected:
    shared_ptr<string> agent_ {};
    // 附件暂存 ID
    shared_ptr<string> attachmentStagingId_ {};
    // 附件列表 JSON 字符串
    shared_ptr<string> attachments_ {};
    // 逻辑渠道名
    shared_ptr<string> channel_ {};
    // 执行模式: single/team/role
    shared_ptr<string> executionMode_ {};
    // 扩展参数 JSON 字符串，如 execution_mode、target 等
    shared_ptr<string> extraParams_ {};
    shared_ptr<bool> memory_ {};
    shared_ptr<string> model_ {};
    // 用户提问；新会话时必填，恢复/交互时可空
    shared_ptr<string> prompt_ {};
    shared_ptr<string> responseLanguage_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> skill_ {};
    shared_ptr<bool> stream_ {};
    shared_ptr<string> talkId_ {};
    // 执行目标
    shared_ptr<string> target_ {};
    shared_ptr<string> timeZone_ {};
    // 会话恢复/交互提交信息 JSON 字符串
    shared_ptr<string> userInputInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SasClaw20260626
#endif
