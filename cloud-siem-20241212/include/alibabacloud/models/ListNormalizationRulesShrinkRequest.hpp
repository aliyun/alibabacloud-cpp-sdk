// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleIds, normalizationRuleIdsShrink_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleName, normalizationRuleName_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleType, normalizationRuleType_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_TO_JSON(OrderField, orderField_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleIds, normalizationRuleIdsShrink_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleName, normalizationRuleName_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleType, normalizationRuleType_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
      DARABONBA_PTR_FROM_JSON(OrderField, orderField_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
    };
    ListNormalizationRulesShrinkRequest() = default ;
    ListNormalizationRulesShrinkRequest(const ListNormalizationRulesShrinkRequest &) = default ;
    ListNormalizationRulesShrinkRequest(ListNormalizationRulesShrinkRequest &&) = default ;
    ListNormalizationRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRulesShrinkRequest() = default ;
    ListNormalizationRulesShrinkRequest& operator=(const ListNormalizationRulesShrinkRequest &) = default ;
    ListNormalizationRulesShrinkRequest& operator=(ListNormalizationRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->normalizationCategoryId_ == nullptr && return this->normalizationRuleIdsShrink_ == nullptr && return this->normalizationRuleName_ == nullptr
        && return this->normalizationRuleType_ == nullptr && return this->normalizationSchemaId_ == nullptr && return this->orderField_ == nullptr && return this->orderType_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->productId_ == nullptr && return this->regionId_ == nullptr && return this->roleFor_ == nullptr && return this->vendorId_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListNormalizationRulesShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRulesShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRulesShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationCategoryId Field Functions 
    bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
    void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
    inline string normalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
    inline ListNormalizationRulesShrinkRequest& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


    // normalizationRuleIdsShrink Field Functions 
    bool hasNormalizationRuleIdsShrink() const { return this->normalizationRuleIdsShrink_ != nullptr;};
    void deleteNormalizationRuleIdsShrink() { this->normalizationRuleIdsShrink_ = nullptr;};
    inline string normalizationRuleIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleIdsShrink_, "") };
    inline ListNormalizationRulesShrinkRequest& setNormalizationRuleIdsShrink(string normalizationRuleIdsShrink) { DARABONBA_PTR_SET_VALUE(normalizationRuleIdsShrink_, normalizationRuleIdsShrink) };


    // normalizationRuleName Field Functions 
    bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
    void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
    inline string normalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
    inline ListNormalizationRulesShrinkRequest& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


    // normalizationRuleType Field Functions 
    bool hasNormalizationRuleType() const { return this->normalizationRuleType_ != nullptr;};
    void deleteNormalizationRuleType() { this->normalizationRuleType_ = nullptr;};
    inline string normalizationRuleType() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleType_, "") };
    inline ListNormalizationRulesShrinkRequest& setNormalizationRuleType(string normalizationRuleType) { DARABONBA_PTR_SET_VALUE(normalizationRuleType_, normalizationRuleType) };


    // normalizationSchemaId Field Functions 
    bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
    void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
    inline string normalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
    inline ListNormalizationRulesShrinkRequest& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


    // orderField Field Functions 
    bool hasOrderField() const { return this->orderField_ != nullptr;};
    void deleteOrderField() { this->orderField_ = nullptr;};
    inline string orderField() const { DARABONBA_PTR_GET_DEFAULT(orderField_, "") };
    inline ListNormalizationRulesShrinkRequest& setOrderField(string orderField) { DARABONBA_PTR_SET_VALUE(orderField_, orderField) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListNormalizationRulesShrinkRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNormalizationRulesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNormalizationRulesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListNormalizationRulesShrinkRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNormalizationRulesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t roleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline ListNormalizationRulesShrinkRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline ListNormalizationRulesShrinkRequest& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


  protected:
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> normalizationCategoryId_ = nullptr;
    std::shared_ptr<string> normalizationRuleIdsShrink_ = nullptr;
    std::shared_ptr<string> normalizationRuleName_ = nullptr;
    std::shared_ptr<string> normalizationRuleType_ = nullptr;
    std::shared_ptr<string> normalizationSchemaId_ = nullptr;
    std::shared_ptr<string> orderField_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> roleFor_ = nullptr;
    std::shared_ptr<string> vendorId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
