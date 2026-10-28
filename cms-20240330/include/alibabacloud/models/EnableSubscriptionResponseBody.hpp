// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESUBSCRIPTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLESUBSCRIPTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EnableSubscriptionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSubscriptionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
    };
    EnableSubscriptionResponseBody() = default ;
    EnableSubscriptionResponseBody(const EnableSubscriptionResponseBody &) = default ;
    EnableSubscriptionResponseBody(EnableSubscriptionResponseBody &&) = default ;
    EnableSubscriptionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSubscriptionResponseBody() = default ;
    EnableSubscriptionResponseBody& operator=(const EnableSubscriptionResponseBody &) = default ;
    EnableSubscriptionResponseBody& operator=(EnableSubscriptionResponseBody &&) = default ;
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
    inline EnableSubscriptionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline EnableSubscriptionResponseBody& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The subscription ID.
    shared_ptr<string> subscriptionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
