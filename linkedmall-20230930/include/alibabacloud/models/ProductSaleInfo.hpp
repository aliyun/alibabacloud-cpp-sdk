// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTSALEINFO_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTSALEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/LimitRule.hpp>
#include <alibabacloud/models/SkuSaleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductSaleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductSaleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_TO_JSON(limitRules, limitRules_);
      DARABONBA_PTR_TO_JSON(lmItemId, lmItemId_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productStatus, productStatus_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(skus, skus_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ProductSaleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_FROM_JSON(limitRules, limitRules_);
      DARABONBA_PTR_FROM_JSON(lmItemId, lmItemId_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productStatus, productStatus_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(skus, skus_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ProductSaleInfo() = default ;
    ProductSaleInfo(const ProductSaleInfo &) = default ;
    ProductSaleInfo(ProductSaleInfo &&) = default ;
    ProductSaleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductSaleInfo() = default ;
    ProductSaleInfo& operator=(const ProductSaleInfo &) = default ;
    ProductSaleInfo& operator=(ProductSaleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canSell_ == nullptr
        && this->divisionCode_ == nullptr && this->fuzzyQuantity_ == nullptr && this->limitRules_ == nullptr && this->lmItemId_ == nullptr && this->productId_ == nullptr
        && this->productStatus_ == nullptr && this->quantity_ == nullptr && this->requestId_ == nullptr && this->shopId_ == nullptr && this->skus_ == nullptr
        && this->title_ == nullptr; };
    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline ProductSaleInfo& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline ProductSaleInfo& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // fuzzyQuantity Field Functions 
    bool hasFuzzyQuantity() const { return this->fuzzyQuantity_ != nullptr;};
    void deleteFuzzyQuantity() { this->fuzzyQuantity_ = nullptr;};
    inline string getFuzzyQuantity() const { DARABONBA_PTR_GET_DEFAULT(fuzzyQuantity_, "") };
    inline ProductSaleInfo& setFuzzyQuantity(string fuzzyQuantity) { DARABONBA_PTR_SET_VALUE(fuzzyQuantity_, fuzzyQuantity) };


    // limitRules Field Functions 
    bool hasLimitRules() const { return this->limitRules_ != nullptr;};
    void deleteLimitRules() { this->limitRules_ = nullptr;};
    inline const vector<LimitRule> & getLimitRules() const { DARABONBA_PTR_GET_CONST(limitRules_, vector<LimitRule>) };
    inline vector<LimitRule> getLimitRules() { DARABONBA_PTR_GET(limitRules_, vector<LimitRule>) };
    inline ProductSaleInfo& setLimitRules(const vector<LimitRule> & limitRules) { DARABONBA_PTR_SET_VALUE(limitRules_, limitRules) };
    inline ProductSaleInfo& setLimitRules(vector<LimitRule> && limitRules) { DARABONBA_PTR_SET_RVALUE(limitRules_, limitRules) };


    // lmItemId Field Functions 
    bool hasLmItemId() const { return this->lmItemId_ != nullptr;};
    void deleteLmItemId() { this->lmItemId_ = nullptr;};
    inline string getLmItemId() const { DARABONBA_PTR_GET_DEFAULT(lmItemId_, "") };
    inline ProductSaleInfo& setLmItemId(string lmItemId) { DARABONBA_PTR_SET_VALUE(lmItemId_, lmItemId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ProductSaleInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productStatus Field Functions 
    bool hasProductStatus() const { return this->productStatus_ != nullptr;};
    void deleteProductStatus() { this->productStatus_ = nullptr;};
    inline string getProductStatus() const { DARABONBA_PTR_GET_DEFAULT(productStatus_, "") };
    inline ProductSaleInfo& setProductStatus(string productStatus) { DARABONBA_PTR_SET_VALUE(productStatus_, productStatus) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline ProductSaleInfo& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ProductSaleInfo& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline ProductSaleInfo& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // skus Field Functions 
    bool hasSkus() const { return this->skus_ != nullptr;};
    void deleteSkus() { this->skus_ = nullptr;};
    inline const vector<SkuSaleInfo> & getSkus() const { DARABONBA_PTR_GET_CONST(skus_, vector<SkuSaleInfo>) };
    inline vector<SkuSaleInfo> getSkus() { DARABONBA_PTR_GET(skus_, vector<SkuSaleInfo>) };
    inline ProductSaleInfo& setSkus(const vector<SkuSaleInfo> & skus) { DARABONBA_PTR_SET_VALUE(skus_, skus) };
    inline ProductSaleInfo& setSkus(vector<SkuSaleInfo> && skus) { DARABONBA_PTR_SET_RVALUE(skus_, skus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ProductSaleInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<bool> canSell_ {};
    shared_ptr<string> divisionCode_ {};
    shared_ptr<string> fuzzyQuantity_ {};
    shared_ptr<vector<LimitRule>> limitRules_ {};
    shared_ptr<string> lmItemId_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> productStatus_ {};
    shared_ptr<int64_t> quantity_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> shopId_ {};
    shared_ptr<vector<SkuSaleInfo>> skus_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
