// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELSUBSCRIPTIONBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELSUBSCRIPTIONBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CancelSubscriptionBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelSubscriptionBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, CancelSubscriptionBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
    };
    CancelSubscriptionBillRequest() = default ;
    CancelSubscriptionBillRequest(const CancelSubscriptionBillRequest &) = default ;
    CancelSubscriptionBillRequest(CancelSubscriptionBillRequest &&) = default ;
    CancelSubscriptionBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelSubscriptionBillRequest() = default ;
    CancelSubscriptionBillRequest& operator=(const CancelSubscriptionBillRequest &) = default ;
    CancelSubscriptionBillRequest& operator=(CancelSubscriptionBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subscribeType_ == nullptr; };
    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline CancelSubscriptionBillRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // The type of the bill to which you want to cancel the subscription. Valid values: PartnerBillingItemDetailForBillingPeriod, PartnerBillingItemDetailMonthly, PartnerInstanceDetailForBillingPeriod, and PartnerInstanceDetailMonthly.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
