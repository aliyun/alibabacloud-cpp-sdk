// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONRULEVERSIONRESPONSEBODYNORMALIZATIONRULEVERSION_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONRULEVERSIONRESPONSEBODYNORMALIZATIONRULEVERSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleName, normalizationRuleName_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleStatus, normalizationRuleStatus_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleType, normalizationRuleType_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersionName, normalizationRuleVersionName_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleName, normalizationRuleName_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleStatus, normalizationRuleStatus_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleType, normalizationRuleType_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersionName, normalizationRuleVersionName_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion() = default ;
    GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion(const GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion &) = default ;
    GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion(GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion &&) = default ;
    GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion() = default ;
    GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& operator=(const GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion &) = default ;
    GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& operator=(GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->normalizationCategoryId_ == nullptr && return this->normalizationRuleDescription_ == nullptr && return this->normalizationRuleExpression_ == nullptr && return this->normalizationRuleFormat_ == nullptr && return this->normalizationRuleId_ == nullptr
        && return this->normalizationRuleName_ == nullptr && return this->normalizationRuleStatus_ == nullptr && return this->normalizationRuleType_ == nullptr && return this->normalizationRuleVersion_ == nullptr && return this->normalizationRuleVersionName_ == nullptr
        && return this->normalizationSchemaId_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->updateTime_ == nullptr && return this->vendorId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string normalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationRuleDescription Field Functions 
    bool hasNormalizationRuleDescription() const { return this->normalizationRuleDescription_ != nullptr;};
    void deleteNormalizationRuleDescription() { this->normalizationRuleDescription_ = nullptr;};
    inline string normalizationRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleDescription_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleDescription(string normalizationRuleDescription) { DARABONBA_PTR_SET_VALUE(normalizationRuleDescription_, normalizationRuleDescription) };


    // normalizationRuleExpression Field Functions 
    bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
    void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
    inline string normalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


    // normalizationRuleFormat Field Functions 
    bool hasNormalizationRuleFormat() const { return this->normalizationRuleFormat_ != nullptr;};
    void deleteNormalizationRuleFormat() { this->normalizationRuleFormat_ = nullptr;};
    inline string normalizationRuleFormat() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleFormat_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleFormat(string normalizationRuleFormat) { DARABONBA_PTR_SET_VALUE(normalizationRuleFormat_, normalizationRuleFormat) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // normalizationRuleName Field Functions 
    bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
    void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
    inline string normalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


    // normalizationRuleStatus Field Functions 
    bool hasNormalizationRuleStatus() const { return this->normalizationRuleStatus_ != nullptr;};
    void deleteNormalizationRuleStatus() { this->normalizationRuleStatus_ = nullptr;};
    inline string normalizationRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleStatus_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleStatus(string normalizationRuleStatus) { DARABONBA_PTR_SET_VALUE(normalizationRuleStatus_, normalizationRuleStatus) };


    // normalizationRuleType Field Functions 
    bool hasNormalizationRuleType() const { return this->normalizationRuleType_ != nullptr;};
    void deleteNormalizationRuleType() { this->normalizationRuleType_ = nullptr;};
    inline string normalizationRuleType() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleType_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleType(string normalizationRuleType) { DARABONBA_PTR_SET_VALUE(normalizationRuleType_, normalizationRuleType) };


    // normalizationRuleVersion Field Functions 
    bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
    void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
    inline int32_t normalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, 0) };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleVersion(int32_t normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


    // normalizationRuleVersionName Field Functions 
    bool hasNormalizationRuleVersionName() const { return this->normalizationRuleVersionName_ != nullptr;};
    void deleteNormalizationRuleVersionName() { this->normalizationRuleVersionName_ = nullptr;};
    inline string normalizationRuleVersionName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersionName_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationRuleVersionName(string normalizationRuleVersionName) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersionName_, normalizationRuleVersionName) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline GetNormalizationRuleVersionResponseBodyNormalizationRuleVersion& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> normalizationCategoryId_ = nullptr;
    std::shared_ptr<string> normalizationRuleDescription_ = nullptr;
    std::shared_ptr<string> normalizationRuleExpression_ = nullptr;
    std::shared_ptr<string> normalizationRuleFormat_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> normalizationRuleName_ = nullptr;
    std::shared_ptr<string> normalizationRuleStatus_ = nullptr;
    std::shared_ptr<string> normalizationRuleType_ = nullptr;
    std::shared_ptr<int32_t> normalizationRuleVersion_ = nullptr;
    std::shared_ptr<string> normalizationRuleVersionName_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
