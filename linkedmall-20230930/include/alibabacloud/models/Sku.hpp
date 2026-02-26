// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKU_HPP_
#define ALIBABACLOUD_MODELS_SKU_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SkuSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class Sku : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Sku& obj) { 
      DARABONBA_PTR_TO_JSON(barcode, barcode_);
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_PTR_TO_JSON(discountRetailPrice, discountRetailPrice_);
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_TO_JSON(markPrice, markPrice_);
      DARABONBA_PTR_TO_JSON(picUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(platformPrice, platformPrice_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(rankValue, rankValue_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(skuAlias, skuAlias_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
      DARABONBA_PTR_TO_JSON(skuSpecs, skuSpecs_);
      DARABONBA_PTR_TO_JSON(skuSpecsCode, skuSpecsCode_);
      DARABONBA_PTR_TO_JSON(skuStatus, skuStatus_);
      DARABONBA_PTR_TO_JSON(suggestedRetailPrice, suggestedRetailPrice_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, Sku& obj) { 
      DARABONBA_PTR_FROM_JSON(barcode, barcode_);
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_PTR_FROM_JSON(discountRetailPrice, discountRetailPrice_);
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_FROM_JSON(markPrice, markPrice_);
      DARABONBA_PTR_FROM_JSON(picUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(platformPrice, platformPrice_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(rankValue, rankValue_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(skuAlias, skuAlias_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
      DARABONBA_PTR_FROM_JSON(skuSpecs, skuSpecs_);
      DARABONBA_PTR_FROM_JSON(skuSpecsCode, skuSpecsCode_);
      DARABONBA_PTR_FROM_JSON(skuStatus, skuStatus_);
      DARABONBA_PTR_FROM_JSON(suggestedRetailPrice, suggestedRetailPrice_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    Sku() = default ;
    Sku(const Sku &) = default ;
    Sku(Sku &&) = default ;
    Sku(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Sku() = default ;
    Sku& operator=(const Sku &) = default ;
    Sku& operator=(Sku &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->barcode_ == nullptr
        && this->canSell_ == nullptr && this->discountRetailPrice_ == nullptr && this->divisionCode_ == nullptr && this->fuzzyQuantity_ == nullptr && this->markPrice_ == nullptr
        && this->picUrl_ == nullptr && this->platformPrice_ == nullptr && this->price_ == nullptr && this->productId_ == nullptr && this->quantity_ == nullptr
        && this->rankValue_ == nullptr && this->shopId_ == nullptr && this->skuAlias_ == nullptr && this->skuId_ == nullptr && this->skuSpecs_ == nullptr
        && this->skuSpecsCode_ == nullptr && this->skuStatus_ == nullptr && this->suggestedRetailPrice_ == nullptr && this->title_ == nullptr; };
    // barcode Field Functions 
    bool hasBarcode() const { return this->barcode_ != nullptr;};
    void deleteBarcode() { this->barcode_ = nullptr;};
    inline string getBarcode() const { DARABONBA_PTR_GET_DEFAULT(barcode_, "") };
    inline Sku& setBarcode(string barcode) { DARABONBA_PTR_SET_VALUE(barcode_, barcode) };


    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline Sku& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // discountRetailPrice Field Functions 
    bool hasDiscountRetailPrice() const { return this->discountRetailPrice_ != nullptr;};
    void deleteDiscountRetailPrice() { this->discountRetailPrice_ = nullptr;};
    inline int64_t getDiscountRetailPrice() const { DARABONBA_PTR_GET_DEFAULT(discountRetailPrice_, 0L) };
    inline Sku& setDiscountRetailPrice(int64_t discountRetailPrice) { DARABONBA_PTR_SET_VALUE(discountRetailPrice_, discountRetailPrice) };


    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline Sku& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // fuzzyQuantity Field Functions 
    bool hasFuzzyQuantity() const { return this->fuzzyQuantity_ != nullptr;};
    void deleteFuzzyQuantity() { this->fuzzyQuantity_ = nullptr;};
    inline string getFuzzyQuantity() const { DARABONBA_PTR_GET_DEFAULT(fuzzyQuantity_, "") };
    inline Sku& setFuzzyQuantity(string fuzzyQuantity) { DARABONBA_PTR_SET_VALUE(fuzzyQuantity_, fuzzyQuantity) };


    // markPrice Field Functions 
    bool hasMarkPrice() const { return this->markPrice_ != nullptr;};
    void deleteMarkPrice() { this->markPrice_ = nullptr;};
    inline int64_t getMarkPrice() const { DARABONBA_PTR_GET_DEFAULT(markPrice_, 0L) };
    inline Sku& setMarkPrice(int64_t markPrice) { DARABONBA_PTR_SET_VALUE(markPrice_, markPrice) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline Sku& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // platformPrice Field Functions 
    bool hasPlatformPrice() const { return this->platformPrice_ != nullptr;};
    void deletePlatformPrice() { this->platformPrice_ = nullptr;};
    inline int64_t getPlatformPrice() const { DARABONBA_PTR_GET_DEFAULT(platformPrice_, 0L) };
    inline Sku& setPlatformPrice(int64_t platformPrice) { DARABONBA_PTR_SET_VALUE(platformPrice_, platformPrice) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline Sku& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline Sku& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline Sku& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // rankValue Field Functions 
    bool hasRankValue() const { return this->rankValue_ != nullptr;};
    void deleteRankValue() { this->rankValue_ = nullptr;};
    inline int64_t getRankValue() const { DARABONBA_PTR_GET_DEFAULT(rankValue_, 0L) };
    inline Sku& setRankValue(int64_t rankValue) { DARABONBA_PTR_SET_VALUE(rankValue_, rankValue) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline Sku& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // skuAlias Field Functions 
    bool hasSkuAlias() const { return this->skuAlias_ != nullptr;};
    void deleteSkuAlias() { this->skuAlias_ = nullptr;};
    inline string getSkuAlias() const { DARABONBA_PTR_GET_DEFAULT(skuAlias_, "") };
    inline Sku& setSkuAlias(string skuAlias) { DARABONBA_PTR_SET_VALUE(skuAlias_, skuAlias) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline Sku& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuSpecs Field Functions 
    bool hasSkuSpecs() const { return this->skuSpecs_ != nullptr;};
    void deleteSkuSpecs() { this->skuSpecs_ = nullptr;};
    inline const vector<SkuSpec> & getSkuSpecs() const { DARABONBA_PTR_GET_CONST(skuSpecs_, vector<SkuSpec>) };
    inline vector<SkuSpec> getSkuSpecs() { DARABONBA_PTR_GET(skuSpecs_, vector<SkuSpec>) };
    inline Sku& setSkuSpecs(const vector<SkuSpec> & skuSpecs) { DARABONBA_PTR_SET_VALUE(skuSpecs_, skuSpecs) };
    inline Sku& setSkuSpecs(vector<SkuSpec> && skuSpecs) { DARABONBA_PTR_SET_RVALUE(skuSpecs_, skuSpecs) };


    // skuSpecsCode Field Functions 
    bool hasSkuSpecsCode() const { return this->skuSpecsCode_ != nullptr;};
    void deleteSkuSpecsCode() { this->skuSpecsCode_ = nullptr;};
    inline string getSkuSpecsCode() const { DARABONBA_PTR_GET_DEFAULT(skuSpecsCode_, "") };
    inline Sku& setSkuSpecsCode(string skuSpecsCode) { DARABONBA_PTR_SET_VALUE(skuSpecsCode_, skuSpecsCode) };


    // skuStatus Field Functions 
    bool hasSkuStatus() const { return this->skuStatus_ != nullptr;};
    void deleteSkuStatus() { this->skuStatus_ = nullptr;};
    inline string getSkuStatus() const { DARABONBA_PTR_GET_DEFAULT(skuStatus_, "") };
    inline Sku& setSkuStatus(string skuStatus) { DARABONBA_PTR_SET_VALUE(skuStatus_, skuStatus) };


    // suggestedRetailPrice Field Functions 
    bool hasSuggestedRetailPrice() const { return this->suggestedRetailPrice_ != nullptr;};
    void deleteSuggestedRetailPrice() { this->suggestedRetailPrice_ = nullptr;};
    inline int64_t getSuggestedRetailPrice() const { DARABONBA_PTR_GET_DEFAULT(suggestedRetailPrice_, 0L) };
    inline Sku& setSuggestedRetailPrice(int64_t suggestedRetailPrice) { DARABONBA_PTR_SET_VALUE(suggestedRetailPrice_, suggestedRetailPrice) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline Sku& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> barcode_ {};
    shared_ptr<bool> canSell_ {};
    shared_ptr<int64_t> discountRetailPrice_ {};
    shared_ptr<string> divisionCode_ {};
    shared_ptr<string> fuzzyQuantity_ {};
    shared_ptr<int64_t> markPrice_ {};
    shared_ptr<string> picUrl_ {};
    shared_ptr<int64_t> platformPrice_ {};
    shared_ptr<int64_t> price_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<int64_t> quantity_ {};
    shared_ptr<int64_t> rankValue_ {};
    shared_ptr<string> shopId_ {};
    shared_ptr<string> skuAlias_ {};
    // skuId
    shared_ptr<string> skuId_ {};
    // sku
    shared_ptr<vector<SkuSpec>> skuSpecs_ {};
    shared_ptr<string> skuSpecsCode_ {};
    shared_ptr<string> skuStatus_ {};
    shared_ptr<int64_t> suggestedRetailPrice_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
