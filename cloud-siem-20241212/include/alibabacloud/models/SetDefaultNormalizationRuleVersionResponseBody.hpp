// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDEFAULTNORMALIZATIONRULEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETDEFAULTNORMALIZATIONRULEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class SetDefaultNormalizationRuleVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDefaultNormalizationRuleVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SetDefaultNormalizationRuleVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SetDefaultNormalizationRuleVersionResponseBody() = default ;
    SetDefaultNormalizationRuleVersionResponseBody(const SetDefaultNormalizationRuleVersionResponseBody &) = default ;
    SetDefaultNormalizationRuleVersionResponseBody(SetDefaultNormalizationRuleVersionResponseBody &&) = default ;
    SetDefaultNormalizationRuleVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDefaultNormalizationRuleVersionResponseBody() = default ;
    SetDefaultNormalizationRuleVersionResponseBody& operator=(const SetDefaultNormalizationRuleVersionResponseBody &) = default ;
    SetDefaultNormalizationRuleVersionResponseBody& operator=(SetDefaultNormalizationRuleVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationRuleVersion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationRuleVersion& obj) { 
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
        DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationRuleVersion& obj) { 
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
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
      };
      NormalizationRuleVersion() = default ;
      NormalizationRuleVersion(const NormalizationRuleVersion &) = default ;
      NormalizationRuleVersion(NormalizationRuleVersion &&) = default ;
      NormalizationRuleVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationRuleVersion() = default ;
      NormalizationRuleVersion& operator=(const NormalizationRuleVersion &) = default ;
      NormalizationRuleVersion& operator=(NormalizationRuleVersion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->normalizationCategoryId_ == nullptr && this->normalizationRuleDescription_ == nullptr && this->normalizationRuleExpression_ == nullptr && this->normalizationRuleFormat_ == nullptr && this->normalizationRuleId_ == nullptr
        && this->normalizationRuleName_ == nullptr && this->normalizationRuleStatus_ == nullptr && this->normalizationRuleType_ == nullptr && this->normalizationRuleVersion_ == nullptr && this->normalizationSchemaId_ == nullptr
        && this->productId_ == nullptr && this->updateTime_ == nullptr && this->vendorId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NormalizationRuleVersion& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // normalizationCategoryId Field Functions 
      bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
      void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
      inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
      inline NormalizationRuleVersion& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


      // normalizationRuleDescription Field Functions 
      bool hasNormalizationRuleDescription() const { return this->normalizationRuleDescription_ != nullptr;};
      void deleteNormalizationRuleDescription() { this->normalizationRuleDescription_ = nullptr;};
      inline string getNormalizationRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleDescription_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleDescription(string normalizationRuleDescription) { DARABONBA_PTR_SET_VALUE(normalizationRuleDescription_, normalizationRuleDescription) };


      // normalizationRuleExpression Field Functions 
      bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
      void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
      inline string getNormalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


      // normalizationRuleFormat Field Functions 
      bool hasNormalizationRuleFormat() const { return this->normalizationRuleFormat_ != nullptr;};
      void deleteNormalizationRuleFormat() { this->normalizationRuleFormat_ = nullptr;};
      inline string getNormalizationRuleFormat() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleFormat_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleFormat(string normalizationRuleFormat) { DARABONBA_PTR_SET_VALUE(normalizationRuleFormat_, normalizationRuleFormat) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      // normalizationRuleName Field Functions 
      bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
      void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
      inline string getNormalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


      // normalizationRuleStatus Field Functions 
      bool hasNormalizationRuleStatus() const { return this->normalizationRuleStatus_ != nullptr;};
      void deleteNormalizationRuleStatus() { this->normalizationRuleStatus_ = nullptr;};
      inline string getNormalizationRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleStatus_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleStatus(string normalizationRuleStatus) { DARABONBA_PTR_SET_VALUE(normalizationRuleStatus_, normalizationRuleStatus) };


      // normalizationRuleType Field Functions 
      bool hasNormalizationRuleType() const { return this->normalizationRuleType_ != nullptr;};
      void deleteNormalizationRuleType() { this->normalizationRuleType_ = nullptr;};
      inline string getNormalizationRuleType() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleType_, "") };
      inline NormalizationRuleVersion& setNormalizationRuleType(string normalizationRuleType) { DARABONBA_PTR_SET_VALUE(normalizationRuleType_, normalizationRuleType) };


      // normalizationRuleVersion Field Functions 
      bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
      void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
      inline int32_t getNormalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, 0) };
      inline NormalizationRuleVersion& setNormalizationRuleVersion(int32_t normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


      // normalizationSchemaId Field Functions 
      bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
      void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
      inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
      inline NormalizationRuleVersion& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline NormalizationRuleVersion& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NormalizationRuleVersion& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vendorId Field Functions 
      bool hasVendorId() const { return this->vendorId_ != nullptr;};
      void deleteVendorId() { this->vendorId_ = nullptr;};
      inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
      inline NormalizationRuleVersion& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> normalizationCategoryId_ {};
      shared_ptr<string> normalizationRuleDescription_ {};
      shared_ptr<string> normalizationRuleExpression_ {};
      shared_ptr<string> normalizationRuleFormat_ {};
      shared_ptr<string> normalizationRuleId_ {};
      shared_ptr<string> normalizationRuleName_ {};
      shared_ptr<string> normalizationRuleStatus_ {};
      shared_ptr<string> normalizationRuleType_ {};
      shared_ptr<int32_t> normalizationRuleVersion_ {};
      shared_ptr<string> normalizationSchemaId_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> vendorId_ {};
    };

    virtual bool empty() const override { return this->normalizationRuleVersion_ == nullptr
        && this->requestId_ == nullptr; };
    // normalizationRuleVersion Field Functions 
    bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
    void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
    inline const SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion & getNormalizationRuleVersion() const { DARABONBA_PTR_GET_CONST(normalizationRuleVersion_, SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion) };
    inline SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion getNormalizationRuleVersion() { DARABONBA_PTR_GET(normalizationRuleVersion_, SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion) };
    inline SetDefaultNormalizationRuleVersionResponseBody& setNormalizationRuleVersion(const SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion & normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };
    inline SetDefaultNormalizationRuleVersionResponseBody& setNormalizationRuleVersion(SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion && normalizationRuleVersion) { DARABONBA_PTR_SET_RVALUE(normalizationRuleVersion_, normalizationRuleVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetDefaultNormalizationRuleVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SetDefaultNormalizationRuleVersionResponseBody::NormalizationRuleVersion> normalizationRuleVersion_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
