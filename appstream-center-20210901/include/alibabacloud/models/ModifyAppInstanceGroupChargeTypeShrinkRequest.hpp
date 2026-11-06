// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPCHARGETYPESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPCHARGETYPESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupChargeTypeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupChargeTypeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupIds, appInstanceGroupIdsShrink_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupChargeTypeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupIds, appInstanceGroupIdsShrink_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    ModifyAppInstanceGroupChargeTypeShrinkRequest() = default ;
    ModifyAppInstanceGroupChargeTypeShrinkRequest(const ModifyAppInstanceGroupChargeTypeShrinkRequest &) = default ;
    ModifyAppInstanceGroupChargeTypeShrinkRequest(ModifyAppInstanceGroupChargeTypeShrinkRequest &&) = default ;
    ModifyAppInstanceGroupChargeTypeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupChargeTypeShrinkRequest() = default ;
    ModifyAppInstanceGroupChargeTypeShrinkRequest& operator=(const ModifyAppInstanceGroupChargeTypeShrinkRequest &) = default ;
    ModifyAppInstanceGroupChargeTypeShrinkRequest& operator=(ModifyAppInstanceGroupChargeTypeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupIdsShrink_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->productType_ == nullptr && this->promotionId_ == nullptr; };
    // appInstanceGroupIdsShrink Field Functions 
    bool hasAppInstanceGroupIdsShrink() const { return this->appInstanceGroupIdsShrink_ != nullptr;};
    void deleteAppInstanceGroupIdsShrink() { this->appInstanceGroupIdsShrink_ = nullptr;};
    inline string getAppInstanceGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupIdsShrink_, "") };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setAppInstanceGroupIdsShrink(string appInstanceGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIdsShrink_, appInstanceGroupIdsShrink) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyAppInstanceGroupChargeTypeShrinkRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // The list of delivery group IDs to be modified, in JSON array format. **You must and can only specify one item at a time**. The resource must belong to the current account, the specified product, and the business region.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupIdsShrink_ {};
    // Specifies whether to allow automatic payment for this conversion order. Default value: false. Valid values:
    // 
    // - true: allows automatic payment for the conversion order.
    // - false: does not allow automatic payment. If an unpaid order is generated, you must complete the payment separately.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for this order. Explicitly specify this parameter for subscription orders to determine whether to enable auto-renewal. Valid values:
    // 
    // - true: enables auto-renewal.
    // - false: disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The business region ID of the target delivery group. It must be the same as the actual region to which the resource belongs.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The target billing method after conversion. It must be different from the current billing method. Valid values:
    // 
    // - PrePaid: subscription.
    // - PostPaid: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The numeric part of the purchase duration, used together with PeriodUnit. Specify this parameter along with PeriodUnit when converting to subscription and a purchase duration is required. For example, 1 and Month indicate a purchase duration of one month. The specific available purchase durations are determined by the sales rules of the target resource.
    shared_ptr<int32_t> period_ {};
    // The unit of the purchase duration, used together with Period. This parameter is case-sensitive. Valid values:
    // 
    // - Hour: hour.
    // - Day: day.
    // - Week: week.
    // - Month: month.
    // - Year: year.
    // 
    // These units do not mean that every product supports any combination. When converting to subscription, select a period supported by the target resource. For example, for a resource that supports monthly purchase, you can set Period=1 and PeriodUnit=Month.
    shared_ptr<string> periodUnit_ {};
    // The product type. Set this parameter to one of the following values when you call the operation:
    // 
    // - CloudApp: Wuying Cloud Application.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The ID of the promotion used for this conversion order. It takes effect only when an order is created and the promotion is applicable. If omitted, no specific coupon is specified. The availability of the promotion is subject to the order result.
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
