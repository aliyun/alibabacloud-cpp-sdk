// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWMOBILEAGENTPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWMOBILEAGENTPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RenewMobileAgentPackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(MobileAgentPackageIds, mobileAgentPackageIds_);
      DARABONBA_PTR_TO_JSON(PaidCallbackUrl, paidCallbackUrl_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewMobileAgentPackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(MobileAgentPackageIds, mobileAgentPackageIds_);
      DARABONBA_PTR_FROM_JSON(PaidCallbackUrl, paidCallbackUrl_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    RenewMobileAgentPackageRequest() = default ;
    RenewMobileAgentPackageRequest(const RenewMobileAgentPackageRequest &) = default ;
    RenewMobileAgentPackageRequest(RenewMobileAgentPackageRequest &&) = default ;
    RenewMobileAgentPackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewMobileAgentPackageRequest() = default ;
    RenewMobileAgentPackageRequest& operator=(const RenewMobileAgentPackageRequest &) = default ;
    RenewMobileAgentPackageRequest& operator=(RenewMobileAgentPackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->mobileAgentPackageIds_ == nullptr && this->paidCallbackUrl_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->promotionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewMobileAgentPackageRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RenewMobileAgentPackageRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // mobileAgentPackageIds Field Functions 
    bool hasMobileAgentPackageIds() const { return this->mobileAgentPackageIds_ != nullptr;};
    void deleteMobileAgentPackageIds() { this->mobileAgentPackageIds_ = nullptr;};
    inline const vector<string> & getMobileAgentPackageIds() const { DARABONBA_PTR_GET_CONST(mobileAgentPackageIds_, vector<string>) };
    inline vector<string> getMobileAgentPackageIds() { DARABONBA_PTR_GET(mobileAgentPackageIds_, vector<string>) };
    inline RenewMobileAgentPackageRequest& setMobileAgentPackageIds(const vector<string> & mobileAgentPackageIds) { DARABONBA_PTR_SET_VALUE(mobileAgentPackageIds_, mobileAgentPackageIds) };
    inline RenewMobileAgentPackageRequest& setMobileAgentPackageIds(vector<string> && mobileAgentPackageIds) { DARABONBA_PTR_SET_RVALUE(mobileAgentPackageIds_, mobileAgentPackageIds) };


    // paidCallbackUrl Field Functions 
    bool hasPaidCallbackUrl() const { return this->paidCallbackUrl_ != nullptr;};
    void deletePaidCallbackUrl() { this->paidCallbackUrl_ = nullptr;};
    inline string getPaidCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(paidCallbackUrl_, "") };
    inline RenewMobileAgentPackageRequest& setPaidCallbackUrl(string paidCallbackUrl) { DARABONBA_PTR_SET_VALUE(paidCallbackUrl_, paidCallbackUrl) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewMobileAgentPackageRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewMobileAgentPackageRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewMobileAgentPackageRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    shared_ptr<bool> autoPay_ {};
    shared_ptr<bool> autoRenew_ {};
    shared_ptr<vector<string>> mobileAgentPackageIds_ {};
    shared_ptr<string> paidCallbackUrl_ {};
    shared_ptr<int32_t> period_ {};
    shared_ptr<string> periodUnit_ {};
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
