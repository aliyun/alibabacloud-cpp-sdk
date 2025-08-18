// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASECACHERESERVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURCHASECACHERESERVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurchaseCacheReserveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseCacheReserveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CrRegion, crRegion_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(QuotaGb, quotaGb_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseCacheReserveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CrRegion, crRegion_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(QuotaGb, quotaGb_);
    };
    PurchaseCacheReserveRequest() = default ;
    PurchaseCacheReserveRequest(const PurchaseCacheReserveRequest &) = default ;
    PurchaseCacheReserveRequest(PurchaseCacheReserveRequest &&) = default ;
    PurchaseCacheReserveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseCacheReserveRequest() = default ;
    PurchaseCacheReserveRequest& operator=(const PurchaseCacheReserveRequest &) = default ;
    PurchaseCacheReserveRequest& operator=(PurchaseCacheReserveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->autoRenew_ != nullptr && this->chargeType_ != nullptr && this->crRegion_ != nullptr && this->period_ != nullptr && this->quotaGb_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline PurchaseCacheReserveRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline PurchaseCacheReserveRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline PurchaseCacheReserveRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // crRegion Field Functions 
    bool hasCrRegion() const { return this->crRegion_ != nullptr;};
    void deleteCrRegion() { this->crRegion_ = nullptr;};
    inline string crRegion() const { DARABONBA_PTR_GET_DEFAULT(crRegion_, "") };
    inline PurchaseCacheReserveRequest& setCrRegion(string crRegion) { DARABONBA_PTR_SET_VALUE(crRegion_, crRegion) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline PurchaseCacheReserveRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // quotaGb Field Functions 
    bool hasQuotaGb() const { return this->quotaGb_ != nullptr;};
    void deleteQuotaGb() { this->quotaGb_ = nullptr;};
    inline int64_t quotaGb() const { DARABONBA_PTR_GET_DEFAULT(quotaGb_, 0L) };
    inline PurchaseCacheReserveRequest& setQuotaGb(int64_t quotaGb) { DARABONBA_PTR_SET_VALUE(quotaGb_, quotaGb) };


  protected:
    // Whether to automatically pay. The default value is false.
    // - true: Automatically pay.
    // - false: Do not automatically pay.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Whether to auto-renew:
    // - true: Auto-renew.
    // - false: Do not auto-renew.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // Billing type
    // - PREPAY: Prepaid.
    // - POSTPAY: Postpaid.
    std::shared_ptr<string> chargeType_ = nullptr;
    // Cache retention region
    // - HK: Hong Kong, China
    // - CN-beijing: Mainland China - Beijing
    std::shared_ptr<string> crRegion_ = nullptr;
    // Purchase period (unit: month).
    std::shared_ptr<int32_t> period_ = nullptr;
    // Cache retention specification (unit: GB).
    std::shared_ptr<int64_t> quotaGb_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
