// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ChatResponseBodyMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(QuerySegList, querySegList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(QuerySegList, querySegList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    ChatResponseBody() = default ;
    ChatResponseBody(const ChatResponseBody &) = default ;
    ChatResponseBody(ChatResponseBody &&) = default ;
    ChatResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatResponseBody() = default ;
    ChatResponseBody& operator=(const ChatResponseBody &) = default ;
    ChatResponseBody& operator=(ChatResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageId_ != nullptr
        && this->messages_ != nullptr && this->querySegList_ != nullptr && this->requestId_ != nullptr && this->sessionId_ != nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline ChatResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<ChatResponseBodyMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ChatResponseBodyMessages>) };
    inline vector<ChatResponseBodyMessages> messages() { DARABONBA_PTR_GET(messages_, vector<ChatResponseBodyMessages>) };
    inline ChatResponseBody& setMessages(const vector<ChatResponseBodyMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ChatResponseBody& setMessages(vector<ChatResponseBodyMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // querySegList Field Functions 
    bool hasQuerySegList() const { return this->querySegList_ != nullptr;};
    void deleteQuerySegList() { this->querySegList_ = nullptr;};
    inline const vector<string> & querySegList() const { DARABONBA_PTR_GET_CONST(querySegList_, vector<string>) };
    inline vector<string> querySegList() { DARABONBA_PTR_GET(querySegList_, vector<string>) };
    inline ChatResponseBody& setQuerySegList(const vector<string> & querySegList) { DARABONBA_PTR_SET_VALUE(querySegList_, querySegList) };
    inline ChatResponseBody& setQuerySegList(vector<string> && querySegList) { DARABONBA_PTR_SET_RVALUE(querySegList_, querySegList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<vector<ChatResponseBodyMessages>> messages_ = nullptr;
    std::shared_ptr<vector<string>> querySegList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
