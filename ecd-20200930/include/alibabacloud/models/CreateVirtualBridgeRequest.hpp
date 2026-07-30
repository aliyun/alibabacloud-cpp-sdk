// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVIRTUALBRIDGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVIRTUALBRIDGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateVirtualBridgeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVirtualBridgeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BridgeLevel, bridgeLevel_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PaidCallBackUrl, paidCallBackUrl_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVirtualBridgeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BridgeLevel, bridgeLevel_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PaidCallBackUrl, paidCallBackUrl_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateVirtualBridgeRequest() = default ;
    CreateVirtualBridgeRequest(const CreateVirtualBridgeRequest &) = default ;
    CreateVirtualBridgeRequest(CreateVirtualBridgeRequest &&) = default ;
    CreateVirtualBridgeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVirtualBridgeRequest() = default ;
    CreateVirtualBridgeRequest& operator=(const CreateVirtualBridgeRequest &) = default ;
    CreateVirtualBridgeRequest& operator=(CreateVirtualBridgeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bridgeLevel_ == nullptr && this->officeSiteId_ == nullptr && this->paidCallBackUrl_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->promotionId_ == nullptr && this->regionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateVirtualBridgeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateVirtualBridgeRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bridgeLevel Field Functions 
    bool hasBridgeLevel() const { return this->bridgeLevel_ != nullptr;};
    void deleteBridgeLevel() { this->bridgeLevel_ = nullptr;};
    inline string getBridgeLevel() const { DARABONBA_PTR_GET_DEFAULT(bridgeLevel_, "") };
    inline CreateVirtualBridgeRequest& setBridgeLevel(string bridgeLevel) { DARABONBA_PTR_SET_VALUE(bridgeLevel_, bridgeLevel) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateVirtualBridgeRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // paidCallBackUrl Field Functions 
    bool hasPaidCallBackUrl() const { return this->paidCallBackUrl_ != nullptr;};
    void deletePaidCallBackUrl() { this->paidCallBackUrl_ = nullptr;};
    inline string getPaidCallBackUrl() const { DARABONBA_PTR_GET_DEFAULT(paidCallBackUrl_, "") };
    inline CreateVirtualBridgeRequest& setPaidCallBackUrl(string paidCallBackUrl) { DARABONBA_PTR_SET_VALUE(paidCallBackUrl_, paidCallBackUrl) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateVirtualBridgeRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateVirtualBridgeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateVirtualBridgeRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVirtualBridgeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The bridge specifications.
    shared_ptr<string> bridgeLevel_ {};
    // The office network ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The payment callback URL.
    shared_ptr<string> paidCallBackUrl_ {};
    // The duration for which you want to purchase the resource. The unit is specified by `PeriodUnit`. This parameter takes effect and is required only when `ChargeType` is set to `PrePaid`.
    // 
    // - If `PeriodUnit` is set to `Month`, valid values:
    // 
    //      - 1
    //     -  2
    //     - 3
    //     - 6
    // 
    // - If `PeriodUnit` is set to `Year`, valid values:
    // 
    //     - 1
    //     - 2
    //     - 3
    //     - 4
    //     - 5
    shared_ptr<int32_t> period_ {};
    // The unit of duration for the subscription billable methods.
    shared_ptr<string> periodUnit_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // The region ID. This feature is not region-specific. Set this parameter to cn-shanghai.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
