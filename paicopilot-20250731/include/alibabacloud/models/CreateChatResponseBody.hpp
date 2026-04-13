// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ChatDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
namespace Models
{
  class CreateChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateChatResponseBody() = default ;
    CreateChatResponseBody(const CreateChatResponseBody &) = default ;
    CreateChatResponseBody(CreateChatResponseBody &&) = default ;
    CreateChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChatResponseBody() = default ;
    CreateChatResponseBody& operator=(const CreateChatResponseBody &) = default ;
    CreateChatResponseBody& operator=(CreateChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->chatId_ == nullptr && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->gmtCreateTime_ == nullptr && this->requestId_ == nullptr
        && this->sessionId_ == nullptr && this->status_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline const ChatDetail & getAnswer() const { DARABONBA_PTR_GET_CONST(answer_, ChatDetail) };
    inline ChatDetail getAnswer() { DARABONBA_PTR_GET(answer_, ChatDetail) };
    inline CreateChatResponseBody& setAnswer(const ChatDetail & answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };
    inline CreateChatResponseBody& setAnswer(ChatDetail && answer) { DARABONBA_PTR_SET_RVALUE(answer_, answer) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline CreateChatResponseBody& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateChatResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateChatResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline CreateChatResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateChatResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateChatResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<ChatDetail> answer_ {};
    shared_ptr<string> chatId_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMessage_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
    shared_ptr<string> gmtCreateTime_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
