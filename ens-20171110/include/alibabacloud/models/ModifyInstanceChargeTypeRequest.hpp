// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCECHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyInstanceChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(IncludeDataDisks, includeDataDisks_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(IncludeDataDisks, includeDataDisks_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
    };
    ModifyInstanceChargeTypeRequest() = default ;
    ModifyInstanceChargeTypeRequest(const ModifyInstanceChargeTypeRequest &) = default ;
    ModifyInstanceChargeTypeRequest(ModifyInstanceChargeTypeRequest &&) = default ;
    ModifyInstanceChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceChargeTypeRequest() = default ;
    ModifyInstanceChargeTypeRequest& operator=(const ModifyInstanceChargeTypeRequest &) = default ;
    ModifyInstanceChargeTypeRequest& operator=(ModifyInstanceChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->billingCycle_ == nullptr && this->includeDataDisks_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceIds_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyInstanceChargeTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ModifyInstanceChargeTypeRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline ModifyInstanceChargeTypeRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // includeDataDisks Field Functions 
    bool hasIncludeDataDisks() const { return this->includeDataDisks_ != nullptr;};
    void deleteIncludeDataDisks() { this->includeDataDisks_ = nullptr;};
    inline bool getIncludeDataDisks() const { DARABONBA_PTR_GET_DEFAULT(includeDataDisks_, false) };
    inline ModifyInstanceChargeTypeRequest& setIncludeDataDisks(bool includeDataDisks) { DARABONBA_PTR_SET_VALUE(includeDataDisks_, includeDataDisks) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ModifyInstanceChargeTypeRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ModifyInstanceChargeTypeRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ModifyInstanceChargeTypeRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline ModifyInstanceChargeTypeRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyInstanceChargeTypeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


  protected:
    // Specifies whether to automatically complete the payment when you switch the billing method of the instance from pay-as-you-go to subscription. Valid values:
    // 
    // true: The payment is automatically completed. Make sure that your account balance is sufficient.
    // 
    // false: Only an order is generated but no payment is made. This is the default value.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal when converting the instance from pay-as-you-go to subscription. Valid values:
    // 
    // - true: Auto-renewal is enabled.
    // - false: Auto-renewal is not enabled (default).
    shared_ptr<bool> autoRenew_ {};
    // The billing cycle. Valid values: Month, Day, and Hour.
    shared_ptr<string> billingCycle_ {};
    // Specifies whether to convert all pay-as-you-go data cloud disks created with the instance to subscription data cloud disks when converting an instance-level pay-as-you-go instance to a subscription instance. Valid values:
    shared_ptr<bool> includeDataDisks_ {};
    // The target billing method of the instance. Valid values:
    // 
    // This parameter is required.
    shared_ptr<string> instanceChargeType_ {};
    // The list of instance IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> instanceIds_ {};
    // The subscription duration when converting a pay-as-you-go instance to subscription. This parameter is required in this scenario. Valid values:
    // 
    // If PeriodUnit is set to Day, Period can only be set to 3.
    // 
    // If PeriodUnit is set to Month, Period can be set to 1-9 or 12.
    shared_ptr<string> period_ {};
    // The unit of the subscription duration when converting an instance-level pay-as-you-go instance to a subscription instance. This parameter is required in this scenario. Valid values:
    shared_ptr<string> periodUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
