// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNORMALIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNORMALIZATIONRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetNormalizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NormalizationRule, normalizationRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNormalizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalizationRule, normalizationRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNormalizationRuleResponseBody() = default ;
    GetNormalizationRuleResponseBody(const GetNormalizationRuleResponseBody &) = default ;
    GetNormalizationRuleResponseBody(GetNormalizationRuleResponseBody &&) = default ;
    GetNormalizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNormalizationRuleResponseBody() = default ;
    GetNormalizationRuleResponseBody& operator=(const GetNormalizationRuleResponseBody &) = default ;
    GetNormalizationRuleResponseBody& operator=(GetNormalizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationRule& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExtendContentPacked, extendContentPacked_);
        DARABONBA_PTR_TO_JSON(ExtendFieldStoreMode, extendFieldStoreMode_);
        DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleIds, normalizationRuleIds_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleMode, normalizationRuleMode_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleName, normalizationRuleName_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleStatus, normalizationRuleStatus_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleType, normalizationRuleType_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_TO_JSON(OrderField, orderField_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationRule& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExtendContentPacked, extendContentPacked_);
        DARABONBA_PTR_FROM_JSON(ExtendFieldStoreMode, extendFieldStoreMode_);
        DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleIds, normalizationRuleIds_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleMode, normalizationRuleMode_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleName, normalizationRuleName_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleStatus, normalizationRuleStatus_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleType, normalizationRuleType_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
      };
      NormalizationRule() = default ;
      NormalizationRule(const NormalizationRule &) = default ;
      NormalizationRule(NormalizationRule &&) = default ;
      NormalizationRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationRule() = default ;
      NormalizationRule& operator=(const NormalizationRule &) = default ;
      NormalizationRule& operator=(NormalizationRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->extendContentPacked_ == nullptr && this->extendFieldStoreMode_ == nullptr && this->normalizationCategoryId_ == nullptr && this->normalizationRuleDescription_ == nullptr && this->normalizationRuleExpression_ == nullptr
        && this->normalizationRuleFormat_ == nullptr && this->normalizationRuleId_ == nullptr && this->normalizationRuleIds_ == nullptr && this->normalizationRuleMode_ == nullptr && this->normalizationRuleName_ == nullptr
        && this->normalizationRuleStatus_ == nullptr && this->normalizationRuleType_ == nullptr && this->normalizationRuleVersion_ == nullptr && this->normalizationSchemaId_ == nullptr && this->orderField_ == nullptr
        && this->productId_ == nullptr && this->updateTime_ == nullptr && this->vendorId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NormalizationRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extendContentPacked Field Functions 
      bool hasExtendContentPacked() const { return this->extendContentPacked_ != nullptr;};
      void deleteExtendContentPacked() { this->extendContentPacked_ = nullptr;};
      inline string getExtendContentPacked() const { DARABONBA_PTR_GET_DEFAULT(extendContentPacked_, "") };
      inline NormalizationRule& setExtendContentPacked(string extendContentPacked) { DARABONBA_PTR_SET_VALUE(extendContentPacked_, extendContentPacked) };


      // extendFieldStoreMode Field Functions 
      bool hasExtendFieldStoreMode() const { return this->extendFieldStoreMode_ != nullptr;};
      void deleteExtendFieldStoreMode() { this->extendFieldStoreMode_ = nullptr;};
      inline string getExtendFieldStoreMode() const { DARABONBA_PTR_GET_DEFAULT(extendFieldStoreMode_, "") };
      inline NormalizationRule& setExtendFieldStoreMode(string extendFieldStoreMode) { DARABONBA_PTR_SET_VALUE(extendFieldStoreMode_, extendFieldStoreMode) };


      // normalizationCategoryId Field Functions 
      bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
      void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
      inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
      inline NormalizationRule& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


      // normalizationRuleDescription Field Functions 
      bool hasNormalizationRuleDescription() const { return this->normalizationRuleDescription_ != nullptr;};
      void deleteNormalizationRuleDescription() { this->normalizationRuleDescription_ = nullptr;};
      inline string getNormalizationRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleDescription_, "") };
      inline NormalizationRule& setNormalizationRuleDescription(string normalizationRuleDescription) { DARABONBA_PTR_SET_VALUE(normalizationRuleDescription_, normalizationRuleDescription) };


      // normalizationRuleExpression Field Functions 
      bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
      void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
      inline string getNormalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
      inline NormalizationRule& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


      // normalizationRuleFormat Field Functions 
      bool hasNormalizationRuleFormat() const { return this->normalizationRuleFormat_ != nullptr;};
      void deleteNormalizationRuleFormat() { this->normalizationRuleFormat_ = nullptr;};
      inline string getNormalizationRuleFormat() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleFormat_, "") };
      inline NormalizationRule& setNormalizationRuleFormat(string normalizationRuleFormat) { DARABONBA_PTR_SET_VALUE(normalizationRuleFormat_, normalizationRuleFormat) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline NormalizationRule& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      // normalizationRuleIds Field Functions 
      bool hasNormalizationRuleIds() const { return this->normalizationRuleIds_ != nullptr;};
      void deleteNormalizationRuleIds() { this->normalizationRuleIds_ = nullptr;};
      inline const vector<string> & getNormalizationRuleIds() const { DARABONBA_PTR_GET_CONST(normalizationRuleIds_, vector<string>) };
      inline vector<string> getNormalizationRuleIds() { DARABONBA_PTR_GET(normalizationRuleIds_, vector<string>) };
      inline NormalizationRule& setNormalizationRuleIds(const vector<string> & normalizationRuleIds) { DARABONBA_PTR_SET_VALUE(normalizationRuleIds_, normalizationRuleIds) };
      inline NormalizationRule& setNormalizationRuleIds(vector<string> && normalizationRuleIds) { DARABONBA_PTR_SET_RVALUE(normalizationRuleIds_, normalizationRuleIds) };


      // normalizationRuleMode Field Functions 
      bool hasNormalizationRuleMode() const { return this->normalizationRuleMode_ != nullptr;};
      void deleteNormalizationRuleMode() { this->normalizationRuleMode_ = nullptr;};
      inline string getNormalizationRuleMode() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleMode_, "") };
      inline NormalizationRule& setNormalizationRuleMode(string normalizationRuleMode) { DARABONBA_PTR_SET_VALUE(normalizationRuleMode_, normalizationRuleMode) };


      // normalizationRuleName Field Functions 
      bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
      void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
      inline string getNormalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
      inline NormalizationRule& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


      // normalizationRuleStatus Field Functions 
      bool hasNormalizationRuleStatus() const { return this->normalizationRuleStatus_ != nullptr;};
      void deleteNormalizationRuleStatus() { this->normalizationRuleStatus_ = nullptr;};
      inline string getNormalizationRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleStatus_, "") };
      inline NormalizationRule& setNormalizationRuleStatus(string normalizationRuleStatus) { DARABONBA_PTR_SET_VALUE(normalizationRuleStatus_, normalizationRuleStatus) };


      // normalizationRuleType Field Functions 
      bool hasNormalizationRuleType() const { return this->normalizationRuleType_ != nullptr;};
      void deleteNormalizationRuleType() { this->normalizationRuleType_ = nullptr;};
      inline string getNormalizationRuleType() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleType_, "") };
      inline NormalizationRule& setNormalizationRuleType(string normalizationRuleType) { DARABONBA_PTR_SET_VALUE(normalizationRuleType_, normalizationRuleType) };


      // normalizationRuleVersion Field Functions 
      bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
      void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
      inline int32_t getNormalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, 0) };
      inline NormalizationRule& setNormalizationRuleVersion(int32_t normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


      // normalizationSchemaId Field Functions 
      bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
      void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
      inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
      inline NormalizationRule& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


      // orderField Field Functions 
      bool hasOrderField() const { return this->orderField_ != nullptr;};
      void deleteOrderField() { this->orderField_ = nullptr;};
      inline string getOrderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
      inline NormalizationRule& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline NormalizationRule& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NormalizationRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vendorId Field Functions 
      bool hasVendorId() const { return this->vendorId_ != nullptr;};
      void deleteVendorId() { this->vendorId_ = nullptr;};
      inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
      inline NormalizationRule& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> extendContentPacked_ {};
      shared_ptr<string> extendFieldStoreMode_ {};
      shared_ptr<string> normalizationCategoryId_ {};
      shared_ptr<string> normalizationRuleDescription_ {};
      shared_ptr<string> normalizationRuleExpression_ {};
      shared_ptr<string> normalizationRuleFormat_ {};
      shared_ptr<string> normalizationRuleId_ {};
      shared_ptr<vector<string>> normalizationRuleIds_ {};
      shared_ptr<string> normalizationRuleMode_ {};
      shared_ptr<string> normalizationRuleName_ {};
      shared_ptr<string> normalizationRuleStatus_ {};
      shared_ptr<string> normalizationRuleType_ {};
      shared_ptr<int32_t> normalizationRuleVersion_ {};
      shared_ptr<string> normalizationSchemaId_ {};
      shared_ptr<string> orderField_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> vendorId_ {};
    };

    virtual bool empty() const override { return this->normalizationRule_ == nullptr
        && this->requestId_ == nullptr; };
    // normalizationRule Field Functions 
    bool hasNormalizationRule() const { return this->normalizationRule_ != nullptr;};
    void deleteNormalizationRule() { this->normalizationRule_ = nullptr;};
    inline const GetNormalizationRuleResponseBody::NormalizationRule & getNormalizationRule() const { DARABONBA_PTR_GET_CONST(normalizationRule_, GetNormalizationRuleResponseBody::NormalizationRule) };
    inline GetNormalizationRuleResponseBody::NormalizationRule getNormalizationRule() { DARABONBA_PTR_GET(normalizationRule_, GetNormalizationRuleResponseBody::NormalizationRule) };
    inline GetNormalizationRuleResponseBody& setNormalizationRule(const GetNormalizationRuleResponseBody::NormalizationRule & normalizationRule) { DARABONBA_PTR_SET_VALUE(normalizationRule_, normalizationRule) };
    inline GetNormalizationRuleResponseBody& setNormalizationRule(GetNormalizationRuleResponseBody::NormalizationRule && normalizationRule) { DARABONBA_PTR_SET_RVALUE(normalizationRule_, normalizationRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNormalizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNormalizationRuleResponseBody::NormalizationRule> normalizationRule_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
