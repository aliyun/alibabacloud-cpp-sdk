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
    virtual bool empty() const override { this->multAccountRelSubscribe_ != nullptr
        && this->subscribeType_ != nullptr; };
    // multAccountRelSubscribe Field Functions 
    bool hasMultAccountRelSubscribe() const { return this->multAccountRelSubscribe_ != nullptr;};
    void deleteMultAccountRelSubscribe() { this->multAccountRelSubscribe_ = nullptr;};
    inline string multAccountRelSubscribe() const { DARABONBA_PTR_GET_DEFAULT(multAccountRelSubscribe_, "") };
    inline UnsubscribeBillToOSSRequest& setMultAccountRelSubscribe(string multAccountRelSubscribe) { DARABONBA_PTR_SET_VALUE(multAccountRelSubscribe_, multAccountRelSubscribe) };


    // subscribeType Field Functions 
    bool hasSubscribeType() const { return this->subscribeType_ != nullptr;};
    void deleteSubscribeType() { this->subscribeType_ = nullptr;};
    inline string subscribeType() const { DARABONBA_PTR_GET_DEFAULT(subscribeType_, "") };
    inline UnsubscribeBillToOSSRequest& setSubscribeType(string subscribeType) { DARABONBA_PTR_SET_VALUE(subscribeType_, subscribeType) };


  protected:
    // The type of accounts whose bills are to be pushed if multi-tier accounts are involved. Valid values:
    // 
    // *   MA: management account.
    // *   ACP1: member account of a virtual network operator (VNO).
    // 
    // Default value: MA.
    std::shared_ptr<string> multAccountRelSubscribe_ = nullptr;
    // The type of the bill to which you want to subscribe. Valid values:
    // 
    // *   BillingItemDetailForBillingPeriod: bills of billable items
    // *   InstanceDetailForBillingPeriod: bills of instances
    // *   BillingItemDetailMonthly: billable item-based bills summarized by billing cycle
    // *   InstanceDetailMonthly: instance-based bills summarized by billing cycle
    // *   SplitItemDetailDaily: split bills summarized by day
    // *   MonthBill: monthly bills in the PDF format You can subscribe to the monthly PDF bills only of the master account.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
