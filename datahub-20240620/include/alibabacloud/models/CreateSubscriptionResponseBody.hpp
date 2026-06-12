// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20240620
{
namespace Models
{
  class CreateSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateSubscriptionResponseBody() = default ;
    CreateSubscriptionResponseBody(const CreateSubscriptionResponseBody &) = default ;
    CreateSubscriptionResponseBody(CreateSubscriptionResponseBody &&) = default ;
    CreateSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionResponseBody() = default ;
    CreateSubscriptionResponseBody& operator=(const CreateSubscriptionResponseBody &) = default ;
    CreateSubscriptionResponseBody& operator=(CreateSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subscriptionId_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline CreateSubscriptionResponseBody& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateSubscriptionResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> subscriptionId_ {};
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Datahub20240620
#endif
