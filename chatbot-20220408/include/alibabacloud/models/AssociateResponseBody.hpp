// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AssociateResponseBodyAssociate.hpp>
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
    virtual bool empty() const override { this->associate_ != nullptr
        && this->messageId_ != nullptr && this->requestId_ != nullptr && this->sessionId_ != nullptr; };
    // associate Field Functions 
    bool hasAssociate() const { return this->associate_ != nullptr;};
    void deleteAssociate() { this->associate_ = nullptr;};
    inline const vector<AssociateResponseBodyAssociate> & associate() const { DARABONBA_PTR_GET_CONST(associate_, vector<AssociateResponseBodyAssociate>) };
    inline vector<AssociateResponseBodyAssociate> associate() { DARABONBA_PTR_GET(associate_, vector<AssociateResponseBodyAssociate>) };
    inline AssociateResponseBody& setAssociate(const vector<AssociateResponseBodyAssociate> & associate) { DARABONBA_PTR_SET_VALUE(associate_, associate) };
    inline AssociateResponseBody& setAssociate(vector<AssociateResponseBodyAssociate> && associate) { DARABONBA_PTR_SET_RVALUE(associate_, associate) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline AssociateResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AssociateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline AssociateResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<vector<AssociateResponseBodyAssociate>> associate_ = nullptr;
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
