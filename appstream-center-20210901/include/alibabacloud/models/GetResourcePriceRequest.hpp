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
        && return this->appInstanceType_ == nullptr && return this->bizRegionId_ == nullptr && return this->chargeType_ == nullptr && return this->nodeInstanceType_ == nullptr && return this->period_ == nullptr
        && return this->periodUnit_ == nullptr && return this->productType_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int64_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
    inline GetResourcePriceRequest& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // appInstanceType Field Functions 
    bool hasAppInstanceType() const { return this->appInstanceType_ != nullptr;};
    void deleteAppInstanceType() { this->appInstanceType_ = nullptr;};
    inline string appInstanceType() const { DARABONBA_PTR_GET_DEFAULT(appInstanceType_, "") };
    inline GetResourcePriceRequest& setAppInstanceType(string appInstanceType) { DARABONBA_PTR_SET_VALUE(appInstanceType_, appInstanceType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline GetResourcePriceRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetResourcePriceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline GetResourcePriceRequest& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline GetResourcePriceRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline GetResourcePriceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetResourcePriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The number of resources to purchase.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> amount_ = nullptr;
    // The type ID of the sessions that you purchase. You can call the `ListAppInstanceType` operation to obtain the ID.
    // 
    // You must specify one of AppInstanceType and NodeInstanceType. If you specify both of the parameters, the value of NodeInstanceType takes effect.
    std::shared_ptr<string> appInstanceType_ = nullptr;
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai).
    // *   cn-hangzhou: China (Hangzhou)
    // 
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go
    // *   PrePaid: subscription
    // 
    // This parameter is required.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The ID of the resource type that you purchase. You can call the [ListNodeInstanceType](https://help.aliyun.com/document_detail/428502.html) to obtain the ID.
    // 
    // You must specify one of AppInstanceType and NodeInstanceType. If you specify both of the parameters, the value of NodeInstanceType takes effect.
    // 
    // Valid values:
    // 
    // *   appstreaming.vgpu.8c16g.4g: WUYING - Graphics - 8 vCPUs, 16 GiB Memory, 4 GiB GPU Memory
    // *   appstreaming.general.8c16g: WUYING - General - 8 vCPUs, 16 GiB Memory
    // *   appstreaming.general.4c8g: WUYING - General - 4 vCPUs, 8 GiB Memory
    // *   appstreaming.vgpu.14c93g.12g: WUYING - Graphics - 14 vCPUs, 93 GiB Memory, 12 GiB GPU Memory.
    // *   appstreaming.vgpu.8c31g.16g: WUYING - Graphics - 8 vCPUs, 31 GiB Memory, 16 GiB GPU Memory
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    // The subscription duration of resources. This parameter must be configured together with `PeriodUnit`.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> period_ = nullptr;
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
