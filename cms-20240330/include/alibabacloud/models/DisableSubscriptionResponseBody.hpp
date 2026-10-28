// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLESUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DisableSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
    };
    DisableSubscriptionResponseBody() = default ;
    DisableSubscriptionResponseBody(const DisableSubscriptionResponseBody &) = default ;
    DisableSubscriptionResponseBody(DisableSubscriptionResponseBody &&) = default ;
    DisableSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSubscriptionResponseBody() = default ;
    DisableSubscriptionResponseBody& operator=(const DisableSubscriptionResponseBody &) = default ;
    DisableSubscriptionResponseBody& operator=(DisableSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subscriptionId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline DisableSubscriptionResponseBody& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the subscription.
    shared_ptr<string> subscriptionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
