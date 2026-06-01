// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOBILEAGENTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOBILEAGENTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateMobileAgentPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_TO_JSON(CreditConfig, creditConfig_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MobileAgentPackageSpec, mobileAgentPackageSpec_);
      DARABONBA_PTR_TO_JSON(PaidCallbackUrl, paidCallbackUrl_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(CreditAmount, creditAmount_);
      DARABONBA_PTR_FROM_JSON(CreditConfig, creditConfig_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MobileAgentPackageSpec, mobileAgentPackageSpec_);
      DARABONBA_PTR_FROM_JSON(PaidCallbackUrl, paidCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    CreateMobileAgentPackageRequest() = default ;
    CreateMobileAgentPackageRequest(const CreateMobileAgentPackageRequest &) = default ;
    CreateMobileAgentPackageRequest(CreateMobileAgentPackageRequest &&) = default ;
    CreateMobileAgentPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMobileAgentPackageRequest() = default ;
    CreateMobileAgentPackageRequest& operator=(const CreateMobileAgentPackageRequest &) = default ;
    CreateMobileAgentPackageRequest& operator=(CreateMobileAgentPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->creditAmount_ == nullptr && this->creditConfig_ == nullptr
        && this->instanceName_ == nullptr && this->mobileAgentPackageSpec_ == nullptr && this->paidCallbackUrl_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->promotionId_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline CreateMobileAgentPackageRequest& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateMobileAgentPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateMobileAgentPackageRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateMobileAgentPackageRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // creditAmount Field Functions 
    bool hasCreditAmount() const { return this->creditAmount_ != nullptr;};
    void deleteCreditAmount() { this->creditAmount_ = nullptr;};
    inline string getCreditAmount() const { DARABONBA_PTR_GET_DEFAULT(creditAmount_, "") };
    inline CreateMobileAgentPackageRequest& setCreditAmount(string creditAmount) { DARABONBA_PTR_SET_VALUE(creditAmount_, creditAmount) };


    // creditConfig Field Functions 
    bool hasCreditConfig() const { return this->creditConfig_ != nullptr;};
    void deleteCreditConfig() { this->creditConfig_ = nullptr;};
    inline string getCreditConfig() const { DARABONBA_PTR_GET_DEFAULT(creditConfig_, "") };
    inline CreateMobileAgentPackageRequest& setCreditConfig(string creditConfig) { DARABONBA_PTR_SET_VALUE(creditConfig_, creditConfig) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateMobileAgentPackageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // mobileAgentPackageSpec Field Functions 
    bool hasMobileAgentPackageSpec() const { return this->mobileAgentPackageSpec_ != nullptr;};
    void deleteMobileAgentPackageSpec() { this->mobileAgentPackageSpec_ = nullptr;};
    inline string getMobileAgentPackageSpec() const { DARABONBA_PTR_GET_DEFAULT(mobileAgentPackageSpec_, "") };
    inline CreateMobileAgentPackageRequest& setMobileAgentPackageSpec(string mobileAgentPackageSpec) { DARABONBA_PTR_SET_VALUE(mobileAgentPackageSpec_, mobileAgentPackageSpec) };


    // paidCallbackUrl Field Functions 
    bool hasPaidCallbackUrl() const { return this->paidCallbackUrl_ != nullptr;};
    void deletePaidCallbackUrl() { this->paidCallbackUrl_ = nullptr;};
    inline string getPaidCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(paidCallbackUrl_, "") };
    inline CreateMobileAgentPackageRequest& setPaidCallbackUrl(string paidCallbackUrl) { DARABONBA_PTR_SET_VALUE(paidCallbackUrl_, paidCallbackUrl) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateMobileAgentPackageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateMobileAgentPackageRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateMobileAgentPackageRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    shared_ptr<string> amount_ {};
    shared_ptr<bool> autoPay_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<string> bizRegionId_ {};
    shared_ptr<string> creditAmount_ {};
    shared_ptr<string> creditConfig_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> mobileAgentPackageSpec_ {};
    shared_ptr<string> paidCallbackUrl_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
