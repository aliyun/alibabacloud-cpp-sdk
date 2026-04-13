// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHATRESPONSEBODY_HPP_
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
  class GetChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Answer, answer_);
      DARABONBA_PTR_TO_JSON(ChatId, chatId_);
      DARABONBA_PTR_TO_JSON(ExtraData, extraData_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Question, question_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Answer, answer_);
      DARABONBA_PTR_FROM_JSON(ChatId, chatId_);
      DARABONBA_PTR_FROM_JSON(ExtraData, extraData_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Question, question_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetChatResponseBody() = default ;
    GetChatResponseBody(const GetChatResponseBody &) = default ;
    GetChatResponseBody(GetChatResponseBody &&) = default ;
    GetChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChatResponseBody() = default ;
    GetChatResponseBody& operator=(const GetChatResponseBody &) = default ;
    GetChatResponseBody& operator=(GetChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->answer_ == nullptr
        && this->chatId_ == nullptr && this->extraData_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModified_ == nullptr && this->message_ == nullptr
        && this->ownerId_ == nullptr && this->question_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr && this->status_ == nullptr
        && this->title_ == nullptr && this->userId_ == nullptr; };
    // answer Field Functions 
    bool hasAnswer() const { return this->answer_ != nullptr;};
    void deleteAnswer() { this->answer_ = nullptr;};
    inline const ChatDetail & getAnswer() const { DARABONBA_PTR_GET_CONST(answer_, ChatDetail) };
    inline ChatDetail getAnswer() { DARABONBA_PTR_GET(answer_, ChatDetail) };
    inline GetChatResponseBody& setAnswer(const ChatDetail & answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };
    inline GetChatResponseBody& setAnswer(ChatDetail && answer) { DARABONBA_PTR_SET_RVALUE(answer_, answer) };


    // chatId Field Functions 
    bool hasChatId() const { return this->chatId_ != nullptr;};
    void deleteChatId() { this->chatId_ = nullptr;};
    inline string getChatId() const { DARABONBA_PTR_GET_DEFAULT(chatId_, "") };
    inline GetChatResponseBody& setChatId(string chatId) { DARABONBA_PTR_SET_VALUE(chatId_, chatId) };


    // extraData Field Functions 
    bool hasExtraData() const { return this->extraData_ != nullptr;};
    void deleteExtraData() { this->extraData_ = nullptr;};
    inline string getExtraData() const { DARABONBA_PTR_GET_DEFAULT(extraData_, "") };
    inline GetChatResponseBody& setExtraData(string extraData) { DARABONBA_PTR_SET_VALUE(extraData_, extraData) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetChatResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetChatResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetChatResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetChatResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // question Field Functions 
    bool hasQuestion() const { return this->question_ != nullptr;};
    void deleteQuestion() { this->question_ = nullptr;};
    inline const ChatDetail & getQuestion() const { DARABONBA_PTR_GET_CONST(question_, ChatDetail) };
    inline ChatDetail getQuestion() { DARABONBA_PTR_GET(question_, ChatDetail) };
    inline GetChatResponseBody& setQuestion(const ChatDetail & question) { DARABONBA_PTR_SET_VALUE(question_, question) };
    inline GetChatResponseBody& setQuestion(ChatDetail && question) { DARABONBA_PTR_SET_RVALUE(question_, question) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetChatResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetChatResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetChatResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetChatResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<ChatDetail> answer_ {};
    shared_ptr<string> chatId_ {};
    shared_ptr<string> extraData_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> gmtCreateTime_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> ownerId_ {};
    shared_ptr<ChatDetail> question_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
