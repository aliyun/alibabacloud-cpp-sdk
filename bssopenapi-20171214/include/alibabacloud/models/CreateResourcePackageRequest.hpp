// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEPACKAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEPACKAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateResourcePackageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourcePackageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourcePackageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EffectiveDate, effectiveDate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
    };
    CreateResourcePackageRequest() = default ;
    CreateResourcePackageRequest(const CreateResourcePackageRequest &) = default ;
    CreateResourcePackageRequest(CreateResourcePackageRequest &&) = default ;
    CreateResourcePackageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourcePackageRequest() = default ;
    CreateResourcePackageRequest& operator=(const CreateResourcePackageRequest &) = default ;
    CreateResourcePackageRequest& operator=(CreateResourcePackageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->effectiveDate_ != nullptr && this->ownerId_ != nullptr && this->packageType_ != nullptr && this->pricingCycle_ != nullptr && this->productCode_ != nullptr
        && this->specification_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateResourcePackageRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // effectiveDate Field Functions 
    bool hasEffectiveDate() const { return this->effectiveDate_ != nullptr;};
    void deleteEffectiveDate() { this->effectiveDate_ = nullptr;};
    inline string effectiveDate() const { DARABONBA_PTR_GET_DEFAULT(effectiveDate_, "") };
    inline CreateResourcePackageRequest& setEffectiveDate(string effectiveDate) { DARABONBA_PTR_SET_VALUE(effectiveDate_, effectiveDate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateResourcePackageRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packageType Field Functions 
    bool hasPackageType() const { return this->packageType_ != nullptr;};
    void deletePackageType() { this->packageType_ = nullptr;};
    inline string packageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
    inline CreateResourcePackageRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateResourcePackageRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateResourcePackageRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline string specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
    inline CreateResourcePackageRequest& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


  protected:
    // The ID of the resource plan.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The data returned.
    std::shared_ptr<string> effectiveDate_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the order.
    // 
    // This parameter is required.
    std::shared_ptr<string> packageType_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // Indicates whether the request is successful.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the order.
    // 
    // This parameter is required.
    std::shared_ptr<string> specification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
