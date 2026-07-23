// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATCONVERSATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATCONVERSATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ChatConversationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatConversationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Func, func_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SkillName, skillName_);
    };
    friend void from_json(const Darabonba::Json& j, ChatConversationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Func, func_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SkillName, skillName_);
    };
    ChatConversationResponseBody() = default ;
    ChatConversationResponseBody(const ChatConversationResponseBody &) = default ;
    ChatConversationResponseBody(ChatConversationResponseBody &&) = default ;
    ChatConversationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatConversationResponseBody() = default ;
    ChatConversationResponseBody& operator=(const ChatConversationResponseBody &) = default ;
    ChatConversationResponseBody& operator=(ChatConversationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->callId_ == nullptr && this->conversationId_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->event_ == nullptr
        && this->func_ == nullptr && this->gmtCreateTime_ == nullptr && this->messageId_ == nullptr && this->requestId_ == nullptr && this->skillName_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
    inline ChatConversationResponseBody& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline ChatConversationResponseBody& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ChatConversationResponseBody& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ChatConversationResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ChatConversationResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ChatConversationResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // func Field Functions 
    bool hasFunc() const { return this->func_ != nullptr;};
    void deleteFunc() { this->func_ = nullptr;};
    inline string getFunc() const { DARABONBA_PTR_GET_DEFAULT(func_, "") };
    inline ChatConversationResponseBody& setFunc(string func) { DARABONBA_PTR_SET_VALUE(func_, func) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ChatConversationResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ChatConversationResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatConversationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skillName Field Functions 
    bool hasSkillName() const { return this->skillName_ != nullptr;};
    void deleteSkillName() { this->skillName_ = nullptr;};
    inline string getSkillName() const { DARABONBA_PTR_GET_DEFAULT(skillName_, "") };
    inline ChatConversationResponseBody& setSkillName(string skillName) { DARABONBA_PTR_SET_VALUE(skillName_, skillName) };


  protected:
    // The reply content.
    shared_ptr<string> answer_ {};
    // The call ID.
    shared_ptr<string> callId_ {};
    // The session ID.
    shared_ptr<string> conversationId_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The event.
    shared_ptr<string> event_ {};
    // The function name.
    shared_ptr<string> func_ {};
    // The creation time.
    shared_ptr<string> gmtCreateTime_ {};
    // The message ID.
    shared_ptr<string> messageId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The skill name.
    shared_ptr<string> skillName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
