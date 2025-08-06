// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(streamEnd, streamEnd_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(streamEnd, streamEnd_);
    };
    InvokeAssistantResponseBody() = default ;
    InvokeAssistantResponseBody(const InvokeAssistantResponseBody &) = default ;
    InvokeAssistantResponseBody(InvokeAssistantResponseBody &&) = default ;
    InvokeAssistantResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBody() = default ;
    InvokeAssistantResponseBody& operator=(const InvokeAssistantResponseBody &) = default ;
    InvokeAssistantResponseBody& operator=(InvokeAssistantResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messages_ != nullptr
        && this->requestId_ != nullptr && this->sessionId_ != nullptr && this->streamEnd_ != nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<InvokeAssistantResponseBodyMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<InvokeAssistantResponseBodyMessages>) };
    inline vector<InvokeAssistantResponseBodyMessages> messages() { DARABONBA_PTR_GET(messages_, vector<InvokeAssistantResponseBodyMessages>) };
    inline InvokeAssistantResponseBody& setMessages(const vector<InvokeAssistantResponseBodyMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline InvokeAssistantResponseBody& setMessages(vector<InvokeAssistantResponseBodyMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InvokeAssistantResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InvokeAssistantResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // streamEnd Field Functions 
    bool hasStreamEnd() const { return this->streamEnd_ != nullptr;};
    void deleteStreamEnd() { this->streamEnd_ = nullptr;};
    inline bool streamEnd() const { DARABONBA_PTR_GET_DEFAULT(streamEnd_, false) };
    inline InvokeAssistantResponseBody& setStreamEnd(bool streamEnd) { DARABONBA_PTR_SET_VALUE(streamEnd_, streamEnd) };


  protected:
    std::shared_ptr<vector<InvokeAssistantResponseBodyMessages>> messages_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<bool> streamEnd_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
