// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class SubscriptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDurationUnit, autoRenewDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
    };
    SubscriptionConfig() = default ;
    SubscriptionConfig(const SubscriptionConfig &) = default ;
    SubscriptionConfig(SubscriptionConfig &&) = default ;
    SubscriptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionConfig() = default ;
    SubscriptionConfig& operator=(const SubscriptionConfig &) = default ;
    SubscriptionConfig& operator=(SubscriptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->autoRenewDuration_ == nullptr && this->autoRenewDurationUnit_ == nullptr && this->paymentDuration_ == nullptr && this->paymentDurationUnit_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline SubscriptionConfig& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int32_t getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0) };
    inline SubscriptionConfig& setAutoRenewDuration(int32_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewDurationUnit Field Functions 
    bool hasAutoRenewDurationUnit() const { return this->autoRenewDurationUnit_ != nullptr;};
    void deleteAutoRenewDurationUnit() { this->autoRenewDurationUnit_ = nullptr;};
    inline string getAutoRenewDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDurationUnit_, "") };
    inline SubscriptionConfig& setAutoRenewDurationUnit(string autoRenewDurationUnit) { DARABONBA_PTR_SET_VALUE(autoRenewDurationUnit_, autoRenewDurationUnit) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t getPaymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline SubscriptionConfig& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline SubscriptionConfig& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


  protected:
    // Specifies whether auto-renewal is enabled. Valid values:
    // 
    // - true: Auto-renewal is enabled.
    // 
    // - false: Auto-renewal is disabled (default).
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal duration. This parameter takes effect only when AutoRenew is set to true. When AutoRenewDurationUnit is Month, valid values are: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    shared_ptr<int32_t> autoRenewDuration_ {};
    // The auto-renewal duration unit. Valid value:
    // 
    // - Month
    shared_ptr<string> autoRenewDurationUnit_ {};
    // The payment duration. When PaymentDurationUnit is Month, valid values are: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    // 
    // This parameter is required.
    shared_ptr<int32_t> paymentDuration_ {};
    // The payment duration unit. Valid value:
    // 
    // - Month
    // 
    // This parameter is required.
    shared_ptr<string> paymentDurationUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
