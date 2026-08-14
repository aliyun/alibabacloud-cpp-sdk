// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OssAgent20260622
{
namespace Models
{
  class ChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
    };
    ChatRequest() = default ;
    ChatRequest(const ChatRequest &) = default ;
    ChatRequest(ChatRequest &&) = default ;
    ChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRequest() = default ;
    ChatRequest& operator=(const ChatRequest &) = default ;
    ChatRequest& operator=(ChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Messages : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Messages& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, Messages& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      Messages() = default ;
      Messages(const Messages &) = default ;
      Messages(Messages &&) = default ;
      Messages(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Messages() = default ;
      Messages& operator=(const Messages &) = default ;
      Messages& operator=(Messages &&) = default ;
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
      inline Messages& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Messages& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      // The conversation text content.
      shared_ptr<string> content_ {};
      // The role of the message.
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->messages_ == nullptr
        && this->sessionId_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<ChatRequest::Messages> & getMessages() const { DARABONBA_PTR_GET_CONST(messages_, vector<ChatRequest::Messages>) };
    inline vector<ChatRequest::Messages> getMessages() { DARABONBA_PTR_GET(messages_, vector<ChatRequest::Messages>) };
    inline ChatRequest& setMessages(const vector<ChatRequest::Messages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline ChatRequest& setMessages(vector<ChatRequest::Messages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The messages.
    shared_ptr<vector<ChatRequest::Messages>> messages_ {};
    // The ID of the Q&A session.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OssAgent20260622
#endif
