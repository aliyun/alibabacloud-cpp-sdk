// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class AssociateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Associate, associate_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Associate, associate_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    AssociateResponseBody() = default ;
    AssociateResponseBody(const AssociateResponseBody &) = default ;
    AssociateResponseBody(AssociateResponseBody &&) = default ;
    AssociateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResponseBody() = default ;
    AssociateResponseBody& operator=(const AssociateResponseBody &) = default ;
    AssociateResponseBody& operator=(AssociateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Associate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Associate& obj) { 
        DARABONBA_PTR_TO_JSON(Meta, meta_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Associate& obj) { 
        DARABONBA_PTR_FROM_JSON(Meta, meta_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Associate() = default ;
      Associate(const Associate &) = default ;
      Associate(Associate &&) = default ;
      Associate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Associate() = default ;
      Associate& operator=(const Associate &) = default ;
      Associate& operator=(Associate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->meta_ == nullptr
        && this->title_ == nullptr; };
      // meta Field Functions 
      bool hasMeta() const { return this->meta_ != nullptr;};
      void deleteMeta() { this->meta_ = nullptr;};
      inline string getMeta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
      inline Associate& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Associate& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // Additional information.
      shared_ptr<string> meta_ {};
      // The title of the suggested FAQ.
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->associate_ == nullptr
        && this->messageId_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr; };
    // associate Field Functions 
    bool hasAssociate() const { return this->associate_ != nullptr;};
    void deleteAssociate() { this->associate_ = nullptr;};
    inline const vector<AssociateResponseBody::Associate> & getAssociate() const { DARABONBA_PTR_GET_CONST(associate_, vector<AssociateResponseBody::Associate>) };
    inline vector<AssociateResponseBody::Associate> getAssociate() { DARABONBA_PTR_GET(associate_, vector<AssociateResponseBody::Associate>) };
    inline AssociateResponseBody& setAssociate(const vector<AssociateResponseBody::Associate> & associate) { DARABONBA_PTR_SET_VALUE(associate_, associate) };
    inline AssociateResponseBody& setAssociate(vector<AssociateResponseBody::Associate> && associate) { DARABONBA_PTR_SET_RVALUE(associate_, associate) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline AssociateResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AssociateResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // A list of suggested FAQs.
    shared_ptr<vector<AssociateResponseBody::Associate>> associate_ {};
    // The response message ID.
    shared_ptr<string> messageId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The session ID.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
