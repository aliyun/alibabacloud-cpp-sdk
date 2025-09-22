// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASERATEPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PURCHASERATEPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class PurchaseRatePlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseRatePlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(Channel, channel_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PlanCode, planCode_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseRatePlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(Channel, channel_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PlanCode, planCode_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PurchaseRatePlanRequest() = default ;
    PurchaseRatePlanRequest(const PurchaseRatePlanRequest &) = default ;
    PurchaseRatePlanRequest(PurchaseRatePlanRequest &&) = default ;
    PurchaseRatePlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseRatePlanRequest() = default ;
    PurchaseRatePlanRequest& operator=(const PurchaseRatePlanRequest &) = default ;
    PurchaseRatePlanRequest& operator=(PurchaseRatePlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->autoPay_ != nullptr && this->autoRenew_ != nullptr && this->channel_ != nullptr && this->chargeType_ != nullptr && this->coverage_ != nullptr
        && this->period_ != nullptr && this->planCode_ != nullptr && this->planName_ != nullptr && this->siteName_ != nullptr && this->type_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline PurchaseRatePlanRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline PurchaseRatePlanRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline PurchaseRatePlanRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // channel Field Functions 
    bool hasChannel() const { return this->channel_ != nullptr;};
    void deleteChannel() { this->channel_ = nullptr;};
    inline string channel() const { DARABONBA_PTR_GET_DEFAULT(channel_, "") };
    inline PurchaseRatePlanRequest& setChannel(string channel) { DARABONBA_PTR_SET_VALUE(channel_, channel) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline PurchaseRatePlanRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline PurchaseRatePlanRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline PurchaseRatePlanRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // planCode Field Functions 
    bool hasPlanCode() const { return this->planCode_ != nullptr;};
    void deletePlanCode() { this->planCode_ = nullptr;};
    inline string planCode() const { DARABONBA_PTR_GET_DEFAULT(planCode_, "") };
    inline PurchaseRatePlanRequest& setPlanCode(string planCode) { DARABONBA_PTR_SET_VALUE(planCode_, planCode) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline PurchaseRatePlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline PurchaseRatePlanRequest& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PurchaseRatePlanRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    // Specifies whether to enable auto payment.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Auto-renewal:
    // - true: Enable auto-renewal.
    // - false: Disable auto-renewal.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> channel_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PREPAY: subscription.
    // *   POSTPAY: pay-as-you-go.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The service location. Valid values:
    // 
    // *   domestic: the Chinese mainland.
    // *   global: global.
    // *   overseas: outside the Chinese mainland.
    std::shared_ptr<string> coverage_ = nullptr;
    // Subscription period (in months).
    std::shared_ptr<int32_t> period_ = nullptr;
    // Package code.
    std::shared_ptr<string> planCode_ = nullptr;
    // Package name.
    std::shared_ptr<string> planName_ = nullptr;
    // Site name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The DNS setup option for the website. Valid values:
    // 
    // *   NS
    // *   CNAME
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
