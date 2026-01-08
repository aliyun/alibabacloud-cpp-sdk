// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWAPPINSTANCEGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWAPPINSTANCEGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RenewAppInstanceGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAppInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RenewAmount, renewAmount_);
      DARABONBA_PTR_TO_JSON(RenewMode, renewMode_);
      DARABONBA_PTR_TO_JSON(RenewNodes, renewNodesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAppInstanceGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RenewAmount, renewAmount_);
      DARABONBA_PTR_FROM_JSON(RenewMode, renewMode_);
      DARABONBA_PTR_FROM_JSON(RenewNodes, renewNodesShrink_);
    };
    RenewAppInstanceGroupShrinkRequest() = default ;
    RenewAppInstanceGroupShrinkRequest(const RenewAppInstanceGroupShrinkRequest &) = default ;
    RenewAppInstanceGroupShrinkRequest(RenewAppInstanceGroupShrinkRequest &&) = default ;
    RenewAppInstanceGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAppInstanceGroupShrinkRequest() = default ;
    RenewAppInstanceGroupShrinkRequest& operator=(const RenewAppInstanceGroupShrinkRequest &) = default ;
    RenewAppInstanceGroupShrinkRequest& operator=(RenewAppInstanceGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->autoPay_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->productType_ == nullptr && this->promotionId_ == nullptr
        && this->renewAmount_ == nullptr && this->renewMode_ == nullptr && this->renewNodesShrink_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline RenewAppInstanceGroupShrinkRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewAppInstanceGroupShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewAppInstanceGroupShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewAppInstanceGroupShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RenewAppInstanceGroupShrinkRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewAppInstanceGroupShrinkRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // renewAmount Field Functions 
    bool hasRenewAmount() const { return this->renewAmount_ != nullptr;};
    void deleteRenewAmount() { this->renewAmount_ = nullptr;};
    inline int32_t getRenewAmount() const { DARABONBA_PTR_GET_DEFAULT(renewAmount_, 0) };
    inline RenewAppInstanceGroupShrinkRequest& setRenewAmount(int32_t renewAmount) { DARABONBA_PTR_SET_VALUE(renewAmount_, renewAmount) };


    // renewMode Field Functions 
    bool hasRenewMode() const { return this->renewMode_ != nullptr;};
    void deleteRenewMode() { this->renewMode_ = nullptr;};
    inline string getRenewMode() const { DARABONBA_PTR_GET_DEFAULT(renewMode_, "") };
    inline RenewAppInstanceGroupShrinkRequest& setRenewMode(string renewMode) { DARABONBA_PTR_SET_VALUE(renewMode_, renewMode) };


    // renewNodesShrink Field Functions 
    bool hasRenewNodesShrink() const { return this->renewNodesShrink_ != nullptr;};
    void deleteRenewNodesShrink() { this->renewNodesShrink_ = nullptr;};
    inline string getRenewNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(renewNodesShrink_, "") };
    inline RenewAppInstanceGroupShrinkRequest& setRenewNodesShrink(string renewNodesShrink) { DARABONBA_PTR_SET_VALUE(renewNodesShrink_, renewNodesShrink) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    shared_ptr<string> appInstanceGroupId_ {};
    // Specifies whether to enable automatic payment.
    // 
    // Valid values:
    // 
    // *   true
    // *   false: manual payment. This is the default value.
    shared_ptr<bool> autoPay_ {};
    // The subscription duration of resources. This parameter must be configured together with `PeriodUnit`.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration. This parameter must be configured together with `Period`. The following items describe valid values for the combinations of `Period` and `PeriodUnit`:
    // 
    // *   1 Week
    // *   1 Month
    // *   2 Month
    // *   3 Month
    // *   6 Month
    // *   1 Year
    // *   2 Year
    // *   3 Year
    // 
    // >  The value of this parameter is case-insensitive. For example, `Week` is valid and `week` is invalid. If you specify a value combination other than the preceding combinations, such as `2 Week`, the operation can still be called. However, an error occurs when you place the order.
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The promotion ID. You can call the [GetResourcePrice](https://help.aliyun.com/document_detail/428503.html) operation to obtain the ID.
    shared_ptr<string> promotionId_ {};
    shared_ptr<int32_t> renewAmount_ {};
    shared_ptr<string> renewMode_ {};
    shared_ptr<string> renewNodesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
