// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMessageResponseBodyMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(messages, messages_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(messages, messages_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CreateMessageResponseBody() = default ;
    CreateMessageResponseBody(const CreateMessageResponseBody &) = default ;
    CreateMessageResponseBody(CreateMessageResponseBody &&) = default ;
    CreateMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageResponseBody() = default ;
    CreateMessageResponseBody& operator=(const CreateMessageResponseBody &) = default ;
    CreateMessageResponseBody& operator=(CreateMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messages_ != nullptr
        && this->requestId_ != nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<CreateMessageResponseBodyMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<CreateMessageResponseBodyMessages>) };
    inline vector<CreateMessageResponseBodyMessages> messages() { DARABONBA_PTR_GET(messages_, vector<CreateMessageResponseBodyMessages>) };
    inline CreateMessageResponseBody& setMessages(const vector<CreateMessageResponseBodyMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline CreateMessageResponseBody& setMessages(vector<CreateMessageResponseBodyMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<CreateMessageResponseBodyMessages>> messages_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
