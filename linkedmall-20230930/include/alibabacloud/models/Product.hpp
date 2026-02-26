// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCT_HPP_
#define ALIBABACLOUD_MODELS_PRODUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Category.hpp>
#include <alibabacloud/models/ProductExtendProperty.hpp>
#include <alibabacloud/models/LimitRule.hpp>
#include <alibabacloud/models/ProductSpec.hpp>
#include <alibabacloud/models/ProductProperty.hpp>
#include <alibabacloud/models/Sku.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class Product : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Product& obj) { 
      DARABONBA_PTR_TO_JSON(brandName, brandName_);
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_PTR_TO_JSON(categoryChain, categoryChain_);
      DARABONBA_PTR_TO_JSON(categoryLeafId, categoryLeafId_);
      DARABONBA_PTR_TO_JSON(descPath, descPath_);
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(extendProperties, extendProperties_);
      DARABONBA_PTR_TO_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(inGroup, inGroup_);
      DARABONBA_PTR_TO_JSON(limitRules, limitRules_);
      DARABONBA_PTR_TO_JSON(lmItemId, lmItemId_);
      DARABONBA_PTR_TO_JSON(picUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productSpecs, productSpecs_);
      DARABONBA_PTR_TO_JSON(productStatus, productStatus_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(servicePromises, servicePromises_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(skus, skus_);
      DARABONBA_PTR_TO_JSON(soldQuantity, soldQuantity_);
      DARABONBA_PTR_TO_JSON(taxCode, taxCode_);
      DARABONBA_PTR_TO_JSON(taxRate, taxRate_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, Product& obj) { 
      DARABONBA_PTR_FROM_JSON(brandName, brandName_);
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_PTR_FROM_JSON(categoryChain, categoryChain_);
      DARABONBA_PTR_FROM_JSON(categoryLeafId, categoryLeafId_);
      DARABONBA_PTR_FROM_JSON(descPath, descPath_);
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(extendProperties, extendProperties_);
      DARABONBA_PTR_FROM_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(inGroup, inGroup_);
      DARABONBA_PTR_FROM_JSON(limitRules, limitRules_);
      DARABONBA_PTR_FROM_JSON(lmItemId, lmItemId_);
      DARABONBA_PTR_FROM_JSON(picUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productSpecs, productSpecs_);
      DARABONBA_PTR_FROM_JSON(productStatus, productStatus_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(servicePromises, servicePromises_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(skus, skus_);
      DARABONBA_PTR_FROM_JSON(soldQuantity, soldQuantity_);
      DARABONBA_PTR_FROM_JSON(taxCode, taxCode_);
      DARABONBA_PTR_FROM_JSON(taxRate, taxRate_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    Product() = default ;
    Product(const Product &) = default ;
    Product(Product &&) = default ;
    Product(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Product() = default ;
    Product& operator=(const Product &) = default ;
    Product& operator=(Product &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brandName_ == nullptr
        && this->canSell_ == nullptr && this->categoryChain_ == nullptr && this->categoryLeafId_ == nullptr && this->descPath_ == nullptr && this->divisionCode_ == nullptr
        && this->extendProperties_ == nullptr && this->fuzzyQuantity_ == nullptr && this->images_ == nullptr && this->inGroup_ == nullptr && this->limitRules_ == nullptr
        && this->lmItemId_ == nullptr && this->picUrl_ == nullptr && this->productId_ == nullptr && this->productSpecs_ == nullptr && this->productStatus_ == nullptr
        && this->productType_ == nullptr && this->properties_ == nullptr && this->quantity_ == nullptr && this->requestId_ == nullptr && this->servicePromises_ == nullptr
        && this->shopId_ == nullptr && this->skus_ == nullptr && this->soldQuantity_ == nullptr && this->taxCode_ == nullptr && this->taxRate_ == nullptr
        && this->title_ == nullptr; };
    // brandName Field Functions 
    bool hasBrandName() const { return this->brandName_ != nullptr;};
    void deleteBrandName() { this->brandName_ = nullptr;};
    inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
    inline Product& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline Product& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // categoryChain Field Functions 
    bool hasCategoryChain() const { return this->categoryChain_ != nullptr;};
    void deleteCategoryChain() { this->categoryChain_ = nullptr;};
    inline const vector<Category> & getCategoryChain() const { DARABONBA_PTR_GET_CONST(categoryChain_, vector<Category>) };
    inline vector<Category> getCategoryChain() { DARABONBA_PTR_GET(categoryChain_, vector<Category>) };
    inline Product& setCategoryChain(const vector<Category> & categoryChain) { DARABONBA_PTR_SET_VALUE(categoryChain_, categoryChain) };
    inline Product& setCategoryChain(vector<Category> && categoryChain) { DARABONBA_PTR_SET_RVALUE(categoryChain_, categoryChain) };


    // categoryLeafId Field Functions 
    bool hasCategoryLeafId() const { return this->categoryLeafId_ != nullptr;};
    void deleteCategoryLeafId() { this->categoryLeafId_ = nullptr;};
    inline int64_t getCategoryLeafId() const { DARABONBA_PTR_GET_DEFAULT(categoryLeafId_, 0L) };
    inline Product& setCategoryLeafId(int64_t categoryLeafId) { DARABONBA_PTR_SET_VALUE(categoryLeafId_, categoryLeafId) };


    // descPath Field Functions 
    bool hasDescPath() const { return this->descPath_ != nullptr;};
    void deleteDescPath() { this->descPath_ = nullptr;};
    inline string getDescPath() const { DARABONBA_PTR_GET_DEFAULT(descPath_, "") };
    inline Product& setDescPath(string descPath) { DARABONBA_PTR_SET_VALUE(descPath_, descPath) };


    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline Product& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // extendProperties Field Functions 
    bool hasExtendProperties() const { return this->extendProperties_ != nullptr;};
    void deleteExtendProperties() { this->extendProperties_ = nullptr;};
    inline const vector<ProductExtendProperty> & getExtendProperties() const { DARABONBA_PTR_GET_CONST(extendProperties_, vector<ProductExtendProperty>) };
    inline vector<ProductExtendProperty> getExtendProperties() { DARABONBA_PTR_GET(extendProperties_, vector<ProductExtendProperty>) };
    inline Product& setExtendProperties(const vector<ProductExtendProperty> & extendProperties) { DARABONBA_PTR_SET_VALUE(extendProperties_, extendProperties) };
    inline Product& setExtendProperties(vector<ProductExtendProperty> && extendProperties) { DARABONBA_PTR_SET_RVALUE(extendProperties_, extendProperties) };


    // fuzzyQuantity Field Functions 
    bool hasFuzzyQuantity() const { return this->fuzzyQuantity_ != nullptr;};
    void deleteFuzzyQuantity() { this->fuzzyQuantity_ = nullptr;};
    inline string getFuzzyQuantity() const { DARABONBA_PTR_GET_DEFAULT(fuzzyQuantity_, "") };
    inline Product& setFuzzyQuantity(string fuzzyQuantity) { DARABONBA_PTR_SET_VALUE(fuzzyQuantity_, fuzzyQuantity) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> getImages() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline Product& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline Product& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // inGroup Field Functions 
    bool hasInGroup() const { return this->inGroup_ != nullptr;};
    void deleteInGroup() { this->inGroup_ = nullptr;};
    inline bool getInGroup() const { DARABONBA_PTR_GET_DEFAULT(inGroup_, false) };
    inline Product& setInGroup(bool inGroup) { DARABONBA_PTR_SET_VALUE(inGroup_, inGroup) };


    // limitRules Field Functions 
    bool hasLimitRules() const { return this->limitRules_ != nullptr;};
    void deleteLimitRules() { this->limitRules_ = nullptr;};
    inline const vector<LimitRule> & getLimitRules() const { DARABONBA_PTR_GET_CONST(limitRules_, vector<LimitRule>) };
    inline vector<LimitRule> getLimitRules() { DARABONBA_PTR_GET(limitRules_, vector<LimitRule>) };
    inline Product& setLimitRules(const vector<LimitRule> & limitRules) { DARABONBA_PTR_SET_VALUE(limitRules_, limitRules) };
    inline Product& setLimitRules(vector<LimitRule> && limitRules) { DARABONBA_PTR_SET_RVALUE(limitRules_, limitRules) };


    // lmItemId Field Functions 
    bool hasLmItemId() const { return this->lmItemId_ != nullptr;};
    void deleteLmItemId() { this->lmItemId_ = nullptr;};
    inline string getLmItemId() const { DARABONBA_PTR_GET_DEFAULT(lmItemId_, "") };
    inline Product& setLmItemId(string lmItemId) { DARABONBA_PTR_SET_VALUE(lmItemId_, lmItemId) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline Product& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline Product& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productSpecs Field Functions 
    bool hasProductSpecs() const { return this->productSpecs_ != nullptr;};
    void deleteProductSpecs() { this->productSpecs_ = nullptr;};
    inline const vector<ProductSpec> & getProductSpecs() const { DARABONBA_PTR_GET_CONST(productSpecs_, vector<ProductSpec>) };
    inline vector<ProductSpec> getProductSpecs() { DARABONBA_PTR_GET(productSpecs_, vector<ProductSpec>) };
    inline Product& setProductSpecs(const vector<ProductSpec> & productSpecs) { DARABONBA_PTR_SET_VALUE(productSpecs_, productSpecs) };
    inline Product& setProductSpecs(vector<ProductSpec> && productSpecs) { DARABONBA_PTR_SET_RVALUE(productSpecs_, productSpecs) };


    // productStatus Field Functions 
    bool hasProductStatus() const { return this->productStatus_ != nullptr;};
    void deleteProductStatus() { this->productStatus_ = nullptr;};
    inline string getProductStatus() const { DARABONBA_PTR_GET_DEFAULT(productStatus_, "") };
    inline Product& setProductStatus(string productStatus) { DARABONBA_PTR_SET_VALUE(productStatus_, productStatus) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline Product& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline const vector<ProductProperty> & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, vector<ProductProperty>) };
    inline vector<ProductProperty> getProperties() { DARABONBA_PTR_GET(properties_, vector<ProductProperty>) };
    inline Product& setProperties(const vector<ProductProperty> & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
    inline Product& setProperties(vector<ProductProperty> && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline Product& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Product& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servicePromises Field Functions 
    bool hasServicePromises() const { return this->servicePromises_ != nullptr;};
    void deleteServicePromises() { this->servicePromises_ = nullptr;};
    inline const vector<string> & getServicePromises() const { DARABONBA_PTR_GET_CONST(servicePromises_, vector<string>) };
    inline vector<string> getServicePromises() { DARABONBA_PTR_GET(servicePromises_, vector<string>) };
    inline Product& setServicePromises(const vector<string> & servicePromises) { DARABONBA_PTR_SET_VALUE(servicePromises_, servicePromises) };
    inline Product& setServicePromises(vector<string> && servicePromises) { DARABONBA_PTR_SET_RVALUE(servicePromises_, servicePromises) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline Product& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // skus Field Functions 
    bool hasSkus() const { return this->skus_ != nullptr;};
    void deleteSkus() { this->skus_ = nullptr;};
    inline const vector<Sku> & getSkus() const { DARABONBA_PTR_GET_CONST(skus_, vector<Sku>) };
    inline vector<Sku> getSkus() { DARABONBA_PTR_GET(skus_, vector<Sku>) };
    inline Product& setSkus(const vector<Sku> & skus) { DARABONBA_PTR_SET_VALUE(skus_, skus) };
    inline Product& setSkus(vector<Sku> && skus) { DARABONBA_PTR_SET_RVALUE(skus_, skus) };


    // soldQuantity Field Functions 
    bool hasSoldQuantity() const { return this->soldQuantity_ != nullptr;};
    void deleteSoldQuantity() { this->soldQuantity_ = nullptr;};
    inline string getSoldQuantity() const { DARABONBA_PTR_GET_DEFAULT(soldQuantity_, "") };
    inline Product& setSoldQuantity(string soldQuantity) { DARABONBA_PTR_SET_VALUE(soldQuantity_, soldQuantity) };


    // taxCode Field Functions 
    bool hasTaxCode() const { return this->taxCode_ != nullptr;};
    void deleteTaxCode() { this->taxCode_ = nullptr;};
    inline string getTaxCode() const { DARABONBA_PTR_GET_DEFAULT(taxCode_, "") };
    inline Product& setTaxCode(string taxCode) { DARABONBA_PTR_SET_VALUE(taxCode_, taxCode) };


    // taxRate Field Functions 
    bool hasTaxRate() const { return this->taxRate_ != nullptr;};
    void deleteTaxRate() { this->taxRate_ = nullptr;};
    inline int32_t getTaxRate() const { DARABONBA_PTR_GET_DEFAULT(taxRate_, 0) };
    inline Product& setTaxRate(int32_t taxRate) { DARABONBA_PTR_SET_VALUE(taxRate_, taxRate) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline Product& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> brandName_ {};
    shared_ptr<bool> canSell_ {};
    shared_ptr<vector<Category>> categoryChain_ {};
    shared_ptr<int64_t> categoryLeafId_ {};
    shared_ptr<string> descPath_ {};
    shared_ptr<string> divisionCode_ {};
    shared_ptr<vector<ProductExtendProperty>> extendProperties_ {};
    shared_ptr<string> fuzzyQuantity_ {};
    // images
    shared_ptr<vector<string>> images_ {};
    shared_ptr<bool> inGroup_ {};
    shared_ptr<vector<LimitRule>> limitRules_ {};
    shared_ptr<string> lmItemId_ {};
    shared_ptr<string> picUrl_ {};
    shared_ptr<string> productId_ {};
    // productSpecs
    shared_ptr<vector<ProductSpec>> productSpecs_ {};
    shared_ptr<string> productStatus_ {};
    shared_ptr<string> productType_ {};
    shared_ptr<vector<ProductProperty>> properties_ {};
    shared_ptr<int64_t> quantity_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> servicePromises_ {};
    shared_ptr<string> shopId_ {};
    // skus
    shared_ptr<vector<Sku>> skus_ {};
    shared_ptr<string> soldQuantity_ {};
    shared_ptr<string> taxCode_ {};
    shared_ptr<int32_t> taxRate_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
