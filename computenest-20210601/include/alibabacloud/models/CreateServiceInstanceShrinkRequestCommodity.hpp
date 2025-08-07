// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCESHRINKREQUESTCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCESHRINKREQUESTCOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateServiceInstanceShrinkRequestCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceShrinkRequestCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CouponId, couponId_);
      DARABONBA_PTR_TO_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_TO_JSON(PayPeriodUnit, payPeriodUnit_);
      DARABONBA_PTR_TO_JSON(QuotationId, quotationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceShrinkRequestCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CouponId, couponId_);
      DARABONBA_PTR_FROM_JSON(PayPeriod, payPeriod_);
      DARABONBA_PTR_FROM_JSON(PayPeriodUnit, payPeriodUnit_);
      DARABONBA_PTR_FROM_JSON(QuotationId, quotationId_);
    };
    CreateServiceInstanceShrinkRequestCommodity() = default ;
    CreateServiceInstanceShrinkRequestCommodity(const CreateServiceInstanceShrinkRequestCommodity &) = default ;
    CreateServiceInstanceShrinkRequestCommodity(CreateServiceInstanceShrinkRequestCommodity &&) = default ;
    CreateServiceInstanceShrinkRequestCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceShrinkRequestCommodity() = default ;
    CreateServiceInstanceShrinkRequestCommodity& operator=(const CreateServiceInstanceShrinkRequestCommodity &) = default ;
    CreateServiceInstanceShrinkRequestCommodity& operator=(CreateServiceInstanceShrinkRequestCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->autoRenew_ != nullptr && this->couponId_ != nullptr && this->payPeriod_ != nullptr && this->payPeriodUnit_ != nullptr && this->quotationId_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateServiceInstanceShrinkRequestCommodity& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateServiceInstanceShrinkRequestCommodity& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // couponId Field Functions 
    bool hasCouponId() const { return this->couponId_ != nullptr;};
    void deleteCouponId() { this->couponId_ = nullptr;};
    inline string couponId() const { DARABONBA_PTR_GET_DEFAULT(couponId_, "") };
    inline CreateServiceInstanceShrinkRequestCommodity& setCouponId(string couponId) { DARABONBA_PTR_SET_VALUE(couponId_, couponId) };


    // payPeriod Field Functions 
    bool hasPayPeriod() const { return this->payPeriod_ != nullptr;};
    void deletePayPeriod() { this->payPeriod_ = nullptr;};
    inline int64_t payPeriod() const { DARABONBA_PTR_GET_DEFAULT(payPeriod_, 0L) };
    inline CreateServiceInstanceShrinkRequestCommodity& setPayPeriod(int64_t payPeriod) { DARABONBA_PTR_SET_VALUE(payPeriod_, payPeriod) };


    // payPeriodUnit Field Functions 
    bool hasPayPeriodUnit() const { return this->payPeriodUnit_ != nullptr;};
    void deletePayPeriodUnit() { this->payPeriodUnit_ = nullptr;};
    inline string payPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(payPeriodUnit_, "") };
    inline CreateServiceInstanceShrinkRequestCommodity& setPayPeriodUnit(string payPeriodUnit) { DARABONBA_PTR_SET_VALUE(payPeriodUnit_, payPeriodUnit) };


    // quotationId Field Functions 
    bool hasQuotationId() const { return this->quotationId_ != nullptr;};
    void deleteQuotationId() { this->quotationId_ = nullptr;};
    inline string quotationId() const { DARABONBA_PTR_GET_DEFAULT(quotationId_, "") };
    inline CreateServiceInstanceShrinkRequestCommodity& setQuotationId(string quotationId) { DARABONBA_PTR_SET_VALUE(quotationId_, quotationId) };


  protected:
    // Specifies whether to automatically complete the payment. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable auto-renewal for the service instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The coupon ID.
    std::shared_ptr<string> couponId_ = nullptr;
    // The subscription duration.
    std::shared_ptr<int64_t> payPeriod_ = nullptr;
    // The unit of the subscription duration. Valid values:
    // 
    // *   **Year**
    // *   **Month**
    // *   **Day**
    std::shared_ptr<string> payPeriodUnit_ = nullptr;
    // privet offer Id
    std::shared_ptr<string> quotationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
