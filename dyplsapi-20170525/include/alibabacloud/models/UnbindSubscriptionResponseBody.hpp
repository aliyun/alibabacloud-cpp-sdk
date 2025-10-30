// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UNBINDSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class UnbindSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeId, chargeId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeId, chargeId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UnbindSubscriptionResponseBody() = default ;
    UnbindSubscriptionResponseBody(const UnbindSubscriptionResponseBody &) = default ;
    UnbindSubscriptionResponseBody(UnbindSubscriptionResponseBody &&) = default ;
    UnbindSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindSubscriptionResponseBody() = default ;
    UnbindSubscriptionResponseBody& operator=(const UnbindSubscriptionResponseBody &) = default ;
    UnbindSubscriptionResponseBody& operator=(UnbindSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeId_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr; };
    // chargeId Field Functions 
    bool hasChargeId() const { return this->chargeId_ != nullptr;};
    void deleteChargeId() { this->chargeId_ = nullptr;};
    inline string chargeId() const { DARABONBA_PTR_GET_DEFAULT(chargeId_, "") };
    inline UnbindSubscriptionResponseBody& setChargeId(string chargeId) { DARABONBA_PTR_SET_VALUE(chargeId_, chargeId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UnbindSubscriptionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UnbindSubscriptionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UnbindSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A deprecated parameter.
    std::shared_ptr<string> chargeId_ = nullptr;
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/109196.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
