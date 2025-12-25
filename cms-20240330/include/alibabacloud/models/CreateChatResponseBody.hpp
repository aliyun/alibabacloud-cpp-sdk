// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECHATRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateChatResponseBodyMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateChatResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChatResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChatResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
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
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->requestId_ == nullptr && return this->traceId_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CreateChatResponseBodyMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateChatResponseBodyMessages>) };
    inline vector<CreateChatResponseBodyMessages> messages() { DARABONBA_PTR_GET(messages_, vector<CreateChatResponseBodyMessages>) };
    inline CreateChatResponseBody& setMessages(const vector<CreateChatResponseBodyMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateChatResponseBody& setMessages(vector<CreateChatResponseBodyMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateChatResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CreateChatResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    std::shared_ptr<vector<CreateChatResponseBodyMessages>> messages_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
