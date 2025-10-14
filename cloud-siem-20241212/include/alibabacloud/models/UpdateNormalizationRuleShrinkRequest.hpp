// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENORMALIZATIONRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENORMALIZATIONRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class UpdateNormalizationRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNormalizationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendContentPacked, extendContentPacked_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleIds, normalizationRuleIdsShrink_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleMode, normalizationRuleMode_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleName, normalizationRuleName_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleType, normalizationRuleType_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNormalizationRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendContentPacked, extendContentPacked_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleIds, normalizationRuleIdsShrink_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleMode, normalizationRuleMode_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleName, normalizationRuleName_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleType, normalizationRuleType_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    UpdateNormalizationRuleShrinkRequest() = default ;
    UpdateNormalizationRuleShrinkRequest(const UpdateNormalizationRuleShrinkRequest &) = default ;
    UpdateNormalizationRuleShrinkRequest(UpdateNormalizationRuleShrinkRequest &&) = default ;
    UpdateNormalizationRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNormalizationRuleShrinkRequest() = default ;
    UpdateNormalizationRuleShrinkRequest& operator=(const UpdateNormalizationRuleShrinkRequest &) = default ;
    UpdateNormalizationRuleShrinkRequest& operator=(UpdateNormalizationRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extendContentPacked_ == nullptr
        && return this->lang_ == nullptr && return this->normalizationRuleDescription_ == nullptr && return this->normalizationRuleExpression_ == nullptr && return this->normalizationRuleFormat_ == nullptr && return this->normalizationRuleId_ == nullptr
        && return this->normalizationRuleIdsShrink_ == nullptr && return this->normalizationRuleMode_ == nullptr && return this->normalizationRuleName_ == nullptr && return this->normalizationRuleType_ == nullptr && return this->normalizationSchemaId_ == nullptr
        && return this->orderField_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr && return this->vendorId_ == nullptr; };
    // extendContentPacked Field Functions 
    bool hasExtendContentPacked() const { return this->extendContentPacked_ != nullptr;};
    void deleteExtendContentPacked() { this->extendContentPacked_ = nullptr;};
    inline string extendContentPacked() const { DARABONBA_PTR_GET_DEFAULT(extendContentPacked_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setExtendContentPacked(string extendContentPacked) { DARABONBA_PTR_SET_VALUE(extendContentPacked_, extendContentPacked) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // normalizationRuleDescription Field Functions 
    bool hasNormalizationRuleDescription() const { return this->normalizationRuleDescription_ != nullptr;};
    void deleteNormalizationRuleDescription() { this->normalizationRuleDescription_ = nullptr;};
    inline string normalizationRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleDescription_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleDescription(string normalizationRuleDescription) { DARABONBA_PTR_SET_VALUE(normalizationRuleDescription_, normalizationRuleDescription) };


    // normalizationRuleExpression Field Functions 
    bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
    void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
    inline string normalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


    // normalizationRuleFormat Field Functions 
    bool hasNormalizationRuleFormat() const { return this->normalizationRuleFormat_ != nullptr;};
    void deleteNormalizationRuleFormat() { this->normalizationRuleFormat_ = nullptr;};
    inline string normalizationRuleFormat() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleFormat_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleFormat(string normalizationRuleFormat) { DARABONBA_PTR_SET_VALUE(normalizationRuleFormat_, normalizationRuleFormat) };


    // normalizationRuleId Field Functions 
    bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
    void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
    inline string normalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


    // normalizationRuleIdsShrink Field Functions 
    bool hasNormalizationRuleIdsShrink() const { return this->normalizationRuleIdsShrink_ != nullptr;};
    void deleteNormalizationRuleIdsShrink() { this->normalizationRuleIdsShrink_ = nullptr;};
    inline string normalizationRuleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleIdsShrink_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleIdsShrink(string normalizationRuleIdsShrink) { DARABONBA_PTR_SET_VALUE(normalizationRuleIdsShrink_, normalizationRuleIdsShrink) };


    // normalizationRuleMode Field Functions 
    bool hasNormalizationRuleMode() const { return this->normalizationRuleMode_ != nullptr;};
    void deleteNormalizationRuleMode() { this->normalizationRuleMode_ = nullptr;};
    inline string normalizationRuleMode() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleMode_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleMode(string normalizationRuleMode) { DARABONBA_PTR_SET_VALUE(normalizationRuleMode_, normalizationRuleMode) };


    // normalizationRuleName Field Functions 
    bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
    void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
    inline string normalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


    // normalizationRuleType Field Functions 
    bool hasNormalizationRuleType() const { return this->normalizationRuleType_ != nullptr;};
    void deleteNormalizationRuleType() { this->normalizationRuleType_ = nullptr;};
    inline string normalizationRuleType() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleType_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationRuleType(string normalizationRuleType) { DARABONBA_PTR_SET_VALUE(normalizationRuleType_, normalizationRuleType) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline UpdateNormalizationRuleShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline UpdateNormalizationRuleShrinkRequest& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    std::shared_ptr<string> extendContentPacked_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> normalizationRuleDescription_ = nullptr;
    std::shared_ptr<string> normalizationRuleExpression_ = nullptr;
    std::shared_ptr<string> normalizationRuleFormat_ = nullptr;
    std::shared_ptr<string> normalizationRuleId_ = nullptr;
    std::shared_ptr<string> normalizationRuleIdsShrink_ = nullptr;
    std::shared_ptr<string> normalizationRuleMode_ = nullptr;
    std::shared_ptr<string> normalizationRuleName_ = nullptr;
    std::shared_ptr<string> normalizationRuleType_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
    std::shared_ptr<string> orderField_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
