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
    virtual bool empty() const override { return this->duration_ == nullptr
        && this->effectiveDate_ == nullptr && this->instanceId_ == nullptr && this->orderType_ == nullptr && this->ownerId_ == nullptr && this->packageType_ == nullptr
        && this->pricingCycle_ == nullptr && this->productCode_ == nullptr && this->specification_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetResourcePackagePriceRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectiveDate Field Functions 
    bool hasEffectiveDate() const { return this->effectiveDate_ != nullptr;};
    void deleteEffectiveDate() { this->effectiveDate_ = nullptr;};
    inline string getEffectiveDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveDate_, "") };
    inline GetResourcePackagePriceRequest& setEffectiveDate(string effectiveDate) { DARABONBA_PTR_SET_VALUE(effectiveDate_, effectiveDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetResourcePackagePriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetResourcePackagePriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetResourcePackagePriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline GetResourcePackagePriceRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline GetResourcePackagePriceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetResourcePackagePriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline GetResourcePackagePriceRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    // The validity period of the resource plan. The value must match the available validity period of the specification size.
    // 
    // This parameter is required.
    shared_ptr<int32_t> duration_ {};
    // The effective period of the resource plan. If you do not specify this parameter, the default is immediate.
    // When the order type is **BUY**, you cannot query the price of a resource plan whose effective period is more than six months later than the current time.
    // When the order type is **UPGRADE**, the effective period must be earlier than or equal to the actual expiration time of the resource plan to be upgraded.
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> effectiveDate_ {};
    // The instance ID. **This parameter is required when the order type is renewal or upgrade.**
    shared_ptr<string> instanceId_ {};
    // The order type. Valid values:
    // - BUY: new purchase.
    // - UPGRADE: upgrade.
    // - RENEW: renewal.
    // 
    // Default value: BUY.
    shared_ptr<string> orderType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The resource plan type. The value must be the same as the Code value of **ResourcePackage** returned by the operation that describes resource plans.
    // 
    // This parameter is required.
    shared_ptr<string> packageType_ {};
    // The unit of the validity period for the resource plan. Valid values:
    // - Month: months.
    // - Year: years.
    shared_ptr<string> pricingCycle_ {};
    // The product code. You can obtain the product code by calling the **QueryProductList** operation or referring to the **Alibaba Cloud product code quick reference guide**.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The specification size of the resource plan.
    // 
    // This parameter is required.
    shared_ptr<string> specification_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
