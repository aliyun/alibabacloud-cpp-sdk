// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubscriptionForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(subscription, subscription_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(subscription, subscription_);
    };
    GetSubscriptionResponseBody() = default ;
    GetSubscriptionResponseBody(const GetSubscriptionResponseBody &) = default ;
    GetSubscriptionResponseBody(GetSubscriptionResponseBody &&) = default ;
    GetSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionResponseBody() = default ;
    GetSubscriptionResponseBody& operator=(const GetSubscriptionResponseBody &) = default ;
    GetSubscriptionResponseBody& operator=(GetSubscriptionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subscription_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline const SubscriptionForView & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, SubscriptionForView) };
    inline SubscriptionForView getSubscription() { DARABONBA_PTR_GET(subscription_, SubscriptionForView) };
    inline GetSubscriptionResponseBody& setSubscription(const SubscriptionForView & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
    inline GetSubscriptionResponseBody& setSubscription(SubscriptionForView && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The subscription object.
    shared_ptr<SubscriptionForView> subscription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
