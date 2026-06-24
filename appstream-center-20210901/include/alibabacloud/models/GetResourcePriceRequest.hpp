// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetResourcePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AppInstanceType, appInstanceType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
    };
    GetResourcePriceRequest() = default ;
    GetResourcePriceRequest(const GetResourcePriceRequest &) = default ;
    GetResourcePriceRequest(GetResourcePriceRequest &&) = default ;
    GetResourcePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePriceRequest() = default ;
    GetResourcePriceRequest& operator=(const GetResourcePriceRequest &) = default ;
    GetResourcePriceRequest& operator=(GetResourcePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && this->appInstanceType_ == nullptr && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr && this->nodeInstanceType_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->productType_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline GetResourcePriceRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appInstanceType Field Functions 
    bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
    void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
    inline string getAppInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
    inline GetResourcePriceRequest& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetResourcePriceRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetResourcePriceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string getNodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline GetResourcePriceRequest& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline GetResourcePriceRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetResourcePriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetResourcePriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The quantity of resources to purchase.
    // 
    // This parameter is required.
    shared_ptr<int64_t> amount_ {};
    // The ID of the session instance type to purchase. You can call the `ListAppInstanceType` operation to obtain the ID.
    // 
    // Either AppInstanceType or NodeInstanceType must have a value. If both have values, NodeInstanceType is used.
    shared_ptr<string> appInstanceType_ {};
    // The region ID of the delivery group. For more information about supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // This parameter is required.
    shared_ptr<string> bizRegionId_ {};
    // The billing method.
    // 
    // This parameter is required.
    shared_ptr<string> chargeType_ {};
    // The ID of the resource instance type to purchase. You can call the [ListNodeInstanceType](https://help.aliyun.com/document_detail/428502.html) operation to obtain the ID.
    // 
    // Either AppInstanceType or NodeInstanceType must have a value. If both have values, NodeInstanceType is used.
    shared_ptr<string> nodeInstanceType_ {};
    // The numeric part of the purchase duration. This parameter is used together with PeriodUnit to specify the complete purchase duration.
    // 
    // This parameter is required.
    shared_ptr<int64_t> period_ {};
    // The unit part of the purchase duration. This parameter is used together with Period to specify the complete purchase duration. The following combinations of Period and PeriodUnit are supported:
    // 
    // - 1 Week (1 week)
    // - 1 Month (1 month)
    // - 2 Month (2 months)
    // - 3 Month (3 months)
    // - 6 Month (6 months)
    // - 1 Year (1 year)
    // - 2 Year (2 years)
    // - 3 Year (3 years)
    // 
    // > This parameter is case-sensitive. For example, `Week` is valid, but `week` is invalid. If the request parameters do not match the supported combinations, such as `2 Week`, the API call succeeds but an error occurs during the order placement stage.
    // 
    // This parameter is required.
    shared_ptr<string> periodUnit_ {};
    // The product type.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
