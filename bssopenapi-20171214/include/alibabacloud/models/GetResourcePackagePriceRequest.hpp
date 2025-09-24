// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEPACKAGEPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetResourcePackagePriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourcePackagePriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourcePackagePriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
    };
    GetResourcePackagePriceRequest() = default ;
    GetResourcePackagePriceRequest(const GetResourcePackagePriceRequest &) = default ;
    GetResourcePackagePriceRequest(GetResourcePackagePriceRequest &&) = default ;
    GetResourcePackagePriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourcePackagePriceRequest() = default ;
    GetResourcePackagePriceRequest& operator=(const GetResourcePackagePriceRequest &) = default ;
    GetResourcePackagePriceRequest& operator=(GetResourcePackagePriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->effectiveDate_ != nullptr && this->instanceId_ != nullptr && this->orderType_ != nullptr && this->ownerId_ != nullptr && this->packageType_ != nullptr
        && this->pricingCycle_ != nullptr && this->productCode_ != nullptr && this->specification_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetResourcePackagePriceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectiveDate Field Functions 
    bool hasEffectiveDate() const { return this->effectiveDate_ != nullptr;};
    void deleteEffectiveDate() { this->effectiveDate_ = nullptr;};
    inline string effectiveDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveDate_, "") };
    inline GetResourcePackagePriceRequest& setEffectiveDate(string effectiveDate) { DARABONBA_PTR_SET_VALUE(effectiveDate_, effectiveDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetResourcePackagePriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetResourcePackagePriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetResourcePackagePriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline GetResourcePackagePriceRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline GetResourcePackagePriceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetResourcePackagePriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetResourcePackagePriceRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    // The validity period of the resource plan. The value must be the same as the duration of the resource plan specified in the specifications.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The time when the resource plan takes effect. If you do not specify this parameter, the resource plan immediately takes effect by default. 
    // When the **OrderType** is **BUY**, resource packs with the **EffectiveDate longer than the current time of 6 months** are not supported. 
    // If the **OrderType** is **UPGRADE**, the **EffectiveDate** **must be less than or equal to** the actual expiration time of the upgraded instance.
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> effectiveDate_ = nullptr;
    // The ID of the instance. **This parameter is required when the order type is renewal or upgrade.**
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the order. Valid values:
    // 
    // *   BUY: You place the order to purchase an instance.
    // *   UPGRADE: You place the order to upgrade an instance.
    // *   RENEW: You place the order to renew an instance.
    // 
    // Default value: BUY.
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The type of the resource plan. The value must be the same as the value of the **ProductCode** parameter that is returned when you call the **DescribeResourcePackageProduct** operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> packageType_ = nullptr;
    // The unit of validity period of the resource plan. Valid values:
    // 
    // *   Month
    // *   Year
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The code of service. You can query the service code by calling the **QueryProductList** operation or viewing **Codes of Alibaba Cloud Services**.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The specifications of the resource plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> specification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
