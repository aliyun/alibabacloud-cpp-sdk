// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATENORMALIZATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ValidateNormalizationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateNormalizationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ExtendFieldStoreMode, extendFieldStoreMode_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LogSample, logSample_);
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleMode, normalizationRuleMode_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateNormalizationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ExtendFieldStoreMode, extendFieldStoreMode_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LogSample, logSample_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleMode, normalizationRuleMode_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    ValidateNormalizationRuleRequest() = default ;
    ValidateNormalizationRuleRequest(const ValidateNormalizationRuleRequest &) = default ;
    ValidateNormalizationRuleRequest(ValidateNormalizationRuleRequest &&) = default ;
    ValidateNormalizationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateNormalizationRuleRequest() = default ;
    ValidateNormalizationRuleRequest& operator=(const ValidateNormalizationRuleRequest &) = default ;
    ValidateNormalizationRuleRequest& operator=(ValidateNormalizationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->extendFieldStoreMode_ == nullptr && this->lang_ == nullptr && this->logSample_ == nullptr && this->normalizationCategoryId_ == nullptr && this->normalizationRuleExpression_ == nullptr
        && this->normalizationRuleMode_ == nullptr && this->normalizationSchemaId_ == nullptr && this->productId_ == nullptr && this->regionId_ == nullptr && this->roleFor_ == nullptr
        && this->vendorId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ValidateNormalizationRuleRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // extendFieldStoreMode Field Functions 
    bool hasExtendFieldStoreMode() const { return this->extendFieldStoreMode_ != nullptr;};
    void deleteExtendFieldStoreMode() { this->extendFieldStoreMode_ = nullptr;};
    inline string getExtendFieldStoreMode() const { DARABONBA_PTR_GET_DEFAULT(extendFieldStoreMode_, "") };
    inline ValidateNormalizationRuleRequest& setExtendFieldStoreMode(string extendFieldStoreMode) { DARABONBA_PTR_SET_VALUE(extendFieldStoreMode_, extendFieldStoreMode) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ValidateNormalizationRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // logSample Field Functions 
    bool hasLogSample() const { return this->logSample_ != nullptr;};
    void deleteLogSample() { this->logSample_ = nullptr;};
    inline string getLogSample() const { DARABONBA_PTR_GET_DEFAULT(logSample_, "") };
    inline ValidateNormalizationRuleRequest& setLogSample(string logSample) { DARABONBA_PTR_SET_VALUE(logSample_, logSample) };


    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline ValidateNormalizationRuleRequest& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationRuleExpression Field Functions 
    bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
    void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
    inline string getNormalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
    inline ValidateNormalizationRuleRequest& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


    // normalizationRuleMode Field Functions 
    bool hasNormalizationRuleMode() const { return this->normalizationRuleMode_ != nullptr;};
    void deleteNormalizationRuleMode() { this->normalizationRuleMode_ = nullptr;};
    inline string getNormalizationRuleMode() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleMode_, "") };
    inline ValidateNormalizationRuleRequest& setNormalizationRuleMode(string normalizationRuleMode) { DARABONBA_PTR_SET_VALUE(normalizationRuleMode_, normalizationRuleMode) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline ValidateNormalizationRuleRequest& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ValidateNormalizationRuleRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ValidateNormalizationRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ValidateNormalizationRuleRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline ValidateNormalizationRuleRequest& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    shared_ptr<string> data_ {};
    shared_ptr<string> extendFieldStoreMode_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> logSample_ {};
    shared_ptr<string> normalizationCategoryId_ {};
    shared_ptr<string> normalizationRuleExpression_ {};
    shared_ptr<string> normalizationRuleMode_ {};
    shared_ptr<string> normalizationSchemaId_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> roleFor_ {};
    shared_ptr<string> vendorId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
