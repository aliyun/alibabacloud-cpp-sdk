// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAYMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_PAYMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class PaymentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PaymentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(autoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(duration, duration_);
      DARABONBA_PTR_TO_JSON(isAutoRenew, isAutoRenew_);
      DARABONBA_PTR_TO_JSON(pricingCycle, pricingCycle_);
    };
    friend void from_json(const Darabonba::Json& j, PaymentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(duration, duration_);
      DARABONBA_PTR_FROM_JSON(isAutoRenew, isAutoRenew_);
      DARABONBA_PTR_FROM_JSON(pricingCycle, pricingCycle_);
    };
    PaymentInfo() = default ;
    PaymentInfo(const PaymentInfo &) = default ;
    PaymentInfo(PaymentInfo &&) = default ;
    PaymentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PaymentInfo() = default ;
    PaymentInfo& operator=(const PaymentInfo &) = default ;
    PaymentInfo& operator=(PaymentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRenewDuration_ != nullptr
        && this->duration_ != nullptr && this->isAutoRenew_ != nullptr && this->pricingCycle_ != nullptr; };
    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline int64_t autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, 0L) };
    inline PaymentInfo& setAutoRenewDuration(int64_t autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline PaymentInfo& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // isAutoRenew Field Functions 
    bool hasIsAutoRenew() const { return this->isAutoRenew_ != nullptr;};
    void deleteIsAutoRenew() { this->isAutoRenew_ = nullptr;};
    inline bool isAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(isAutoRenew_, false) };
    inline PaymentInfo& setIsAutoRenew(bool isAutoRenew) { DARABONBA_PTR_SET_VALUE(isAutoRenew_, isAutoRenew) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline PaymentInfo& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


  protected:
    std::shared_ptr<int64_t> autoRenewDuration_ = nullptr;
    std::shared_ptr<int64_t> duration_ = nullptr;
    std::shared_ptr<bool> isAutoRenew_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
