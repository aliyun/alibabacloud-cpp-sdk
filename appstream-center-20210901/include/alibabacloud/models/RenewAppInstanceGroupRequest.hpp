// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWAPPINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWAPPINSTANCEGROUPREQUEST_HPP_
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
  class RenewAppInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RenewAmount, renewAmount_);
      DARABONBA_PTR_TO_JSON(RenewMode, renewMode_);
      DARABONBA_PTR_TO_JSON(RenewNodes, renewNodes_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RenewAmount, renewAmount_);
      DARABONBA_PTR_FROM_JSON(RenewMode, renewMode_);
      DARABONBA_PTR_FROM_JSON(RenewNodes, renewNodes_);
    };
    RenewAppInstanceGroupRequest() = default ;
    RenewAppInstanceGroupRequest(const RenewAppInstanceGroupRequest &) = default ;
    RenewAppInstanceGroupRequest(RenewAppInstanceGroupRequest &&) = default ;
    RenewAppInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAppInstanceGroupRequest() = default ;
    RenewAppInstanceGroupRequest& operator=(const RenewAppInstanceGroupRequest &) = default ;
    RenewAppInstanceGroupRequest& operator=(RenewAppInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appInstanceGroupId_ != nullptr
        && this->autoPay_ != nullptr && this->period_ != nullptr && this->periodUnit_ != nullptr && this->productType_ != nullptr && this->promotionId_ != nullptr
        && this->renewAmount_ != nullptr && this->renewMode_ != nullptr && this->renewNodes_ != nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline RenewAppInstanceGroupRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewAppInstanceGroupRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewAppInstanceGroupRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewAppInstanceGroupRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RenewAppInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewAppInstanceGroupRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // renewAmount Field Functions 
    bool hasRenewAmount() const { return this->renewAmount_ != nullptr;};
    void deleteRenewAmount() { this->renewAmount_ = nullptr;};
    inline int32_t renewAmount() const { DARABONBA_PTR_GET_DEFAULT(renewAmount_, 0) };
    inline RenewAppInstanceGroupRequest& setRenewAmount(int32_t renewAmount) { DARABONBA_PTR_SET_VALUE(renewAmount_, renewAmount) };


    // renewMode Field Functions 
    bool hasRenewMode() const { return this->renewMode_ != nullptr;};
    void deleteRenewMode() { this->renewMode_ = nullptr;};
    inline string renewMode() const { DARABONBA_PTR_GET_DEFAULT(renewMode_, "") };
    inline RenewAppInstanceGroupRequest& setRenewMode(string renewMode) { DARABONBA_PTR_SET_VALUE(renewMode_, renewMode) };


    // renewNodes Field Functions 
    bool hasRenewNodes() const { return this->renewNodes_ != nullptr;};
    void deleteRenewNodes() { this->renewNodes_ = nullptr;};
    inline const vector<string> & renewNodes() const { DARABONBA_PTR_GET_CONST(renewNodes_, vector<string>) };
    inline vector<string> renewNodes() { DARABONBA_PTR_GET(renewNodes_, vector<string>) };
    inline RenewAppInstanceGroupRequest& setRenewNodes(const vector<string> & renewNodes) { DARABONBA_PTR_SET_VALUE(renewNodes_, renewNodes) };
    inline RenewAppInstanceGroupRequest& setRenewNodes(vector<string> && renewNodes) { DARABONBA_PTR_SET_RVALUE(renewNodes_, renewNodes) };


  protected:
    // The ID of the delivery group.
    // 
    // This parameter is required.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // Specifies whether to enable automatic payment.
    // 
    // Valid values:
    // 
    // *   true
    // *   false: manual payment. This is the default value.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The subscription duration of resources. This parameter must be configured together with `PeriodUnit`.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> period_ = nullptr;
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
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The promotion ID. You can call the [GetResourcePrice](https://help.aliyun.com/document_detail/428503.html) operation to obtain the ID.
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<int32_t> renewAmount_ = nullptr;
    std::shared_ptr<string> renewMode_ = nullptr;
    std::shared_ptr<vector<string>> renewNodes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
