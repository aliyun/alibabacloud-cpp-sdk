// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNSUBSCRIBEBILLTOOSSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNSUBSCRIBEBILLTOOSSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class UnsubscribeBillToOSSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnsubscribeBillToOSSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MultAccountRelSubscribe, multAccountRelSubscribe_);
      DARABONBA_PTR_TO_JSON(SubscribeType, subscribeType_);
    };
    friend void from_json(const Darabonba::Json& j, UnsubscribeBillToOSSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MultAccountRelSubscribe, multAccountRelSubscribe_);
      DARABONBA_PTR_FROM_JSON(SubscribeType, subscribeType_);
    };
    UnsubscribeBillToOSSRequest() = default ;
    UnsubscribeBillToOSSRequest(const UnsubscribeBillToOSSRequest &) = default ;
    UnsubscribeBillToOSSRequest(UnsubscribeBillToOSSRequest &&) = default ;
    UnsubscribeBillToOSSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnsubscribeBillToOSSRequest() = default ;
    UnsubscribeBillToOSSRequest& operator=(const UnsubscribeBillToOSSRequest &) = default ;
    UnsubscribeBillToOSSRequest& operator=(UnsubscribeBillToOSSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->multAccountRelSubscribe_ == nullptr
        && this->subscribeType_ == nullptr; };
    // multAccountRelSubscribe Field Functions 
    bool hasMultAccountRelSubscribe() const { return this->multAccountRelSubscribe_ != nullptr;};
    void deleteMultAccountRelSubscribe() { this->multAccountRelSubscribe_ = nullptr;};
    inline string getMultAccountRelSubscribe() const { DARABONBA_PTR_GET_DEFAULT(multAccountRelSubscribe_, "") };
    inline UnsubscribeBillToOSSRequest& setMultAccountRelSubscribe(string multAccountRelSubscribe) { DARABONBA_PTR_SET_VALUE(multAccountRelSubscribe_, multAccountRelSubscribe) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string getSubscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline UnsubscribeBillToOSSRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // For multi-level accounts, specifies the type of bill to push. Valid values:
    // 
    // - MA: Pushes the bill of the main account.
    // - ACP1: Pushes the bill of the Partner Platform V2.0 sub-account.
    // 
    // Default value: MA.
    shared_ptr<string> multAccountRelSubscribe_ {};
    // The subscription type. Valid values:
    // - BillingItemDetailForBillingPeriod: billable item-level consumption details.
    // - InstanceDetailForBillingPeriod: instance-level consumption details.
    // - BillingItemDetailMonthly: billable item-level consumption summary by billing cycle.
    // - InstanceDetailMonthly: instance-level consumption summary by billing cycle.
    // - SplitItemDetailDaily: split bill summarized by day.
    // - MonthBill: monthly bill in PDF format. Only MA subscriptions are supported.
    // 
    // This parameter is required.
    shared_ptr<string> subscribeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
