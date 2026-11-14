// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPCHARGETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCEGROUPCHARGETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyAppInstanceGroupChargeTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceGroupChargeTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupIds, appInstanceGroupIds_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceGroupChargeTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupIds, appInstanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    ModifyAppInstanceGroupChargeTypeRequest() = default ;
    ModifyAppInstanceGroupChargeTypeRequest(const ModifyAppInstanceGroupChargeTypeRequest &) = default ;
    ModifyAppInstanceGroupChargeTypeRequest(ModifyAppInstanceGroupChargeTypeRequest &&) = default ;
    ModifyAppInstanceGroupChargeTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceGroupChargeTypeRequest() = default ;
    ModifyAppInstanceGroupChargeTypeRequest& operator=(const ModifyAppInstanceGroupChargeTypeRequest &) = default ;
    ModifyAppInstanceGroupChargeTypeRequest& operator=(ModifyAppInstanceGroupChargeTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupIds_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->productType_ == nullptr && this->promotionId_ == nullptr; };
    // appInstanceGroupIds Field Functions 
    bool hasAppInstanceGroupIds() const { return this->appInstanceGroupIds_ != nullptr;};
    void deleteAppInstanceGroupIds() { this->appInstanceGroupIds_ = nullptr;};
    inline const vector<string> & getAppInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(appInstanceGroupIds_, vector<string>) };
    inline vector<string> getAppInstanceGroupIds() { DARABONBA_PTR_GET(appInstanceGroupIds_, vector<string>) };
    inline ModifyAppInstanceGroupChargeTypeRequest& setAppInstanceGroupIds(const vector<string> & appInstanceGroupIds) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIds_, appInstanceGroupIds) };
    inline ModifyAppInstanceGroupChargeTypeRequest& setAppInstanceGroupIds(vector<string> && appInstanceGroupIds) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupIds_, appInstanceGroupIds) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyAppInstanceGroupChargeTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ModifyAppInstanceGroupChargeTypeRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ModifyAppInstanceGroupChargeTypeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ModifyAppInstanceGroupChargeTypeRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyAppInstanceGroupChargeTypeRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline ModifyAppInstanceGroupChargeTypeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyAppInstanceGroupChargeTypeRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyAppInstanceGroupChargeTypeRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // The list of IDs of the app instance groups to be modified, in JSON array format. **You must and can only specify one item at a time**. The resources must belong to the current account, the specified product, and the business region.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> appInstanceGroupIds_ {};
    // Specifies whether to allow automatic payment for this conversion order. Default value: `false`.
    // 
    // - `true`: allows automatic payment for the conversion order.
    // - `false`: does not allow automatic payment. If an unpaid order is generated, you must complete the payment separately.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal for this order. We recommend that you explicitly specify this parameter for subscription orders to determine whether to enable auto-renewal.
    // 
    // - `true`: enables auto-renewal.
    // - `false`: disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The ID of the business region where the target app instance group is located. It must be the same as the actual region to which the resource belongs.
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The target billing method after conversion. It must be different from the current billing method.
    // 
    // - `PrePaid`: subscription.
    // - `PostPaid`: pay-as-you-go.
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The numeric part of the purchase duration, used together with `PeriodUnit`. When converting to subscription and a purchase duration is required, you must specify both parameters. For example, `1` and `Month` indicate a purchase duration of one month. The specific available purchase durations are determined by the sales rules of the target resource.
    shared_ptr<int32_t> period_ {};
    // The unit of the purchase duration, used together with `Period`. This parameter is case-sensitive. The defined units are as follows:
    // 
    // - `Hour`: hour.
    // - `Day`: day.
    // - `Week`: week.
    // - `Month`: month.
    // - `Year`: year.
    // 
    // These units do not mean that any combination can be purchased for every product. When converting to subscription, select a period supported by the target resource. For example, for a resource that supports monthly purchases, you can set `Period` to `1` and `PeriodUnit` to `Month`.
    shared_ptr<string> periodUnit_ {};
    // The product type. Set this parameter to the following fixed value when you call the operation:
    // 
    // - `CloudApp`: Wuying Cloud App.
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
