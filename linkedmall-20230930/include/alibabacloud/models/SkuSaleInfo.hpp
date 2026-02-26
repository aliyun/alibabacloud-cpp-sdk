// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKUSALEINFO_HPP_
#define ALIBABACLOUD_MODELS_SKUSALEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class SkuSaleInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkuSaleInfo& obj) { 
      DARABONBA_PTR_TO_JSON(canNotSellReason, canNotSellReason_);
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_PTR_TO_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_TO_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_TO_JSON(markPrice, markPrice_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
      DARABONBA_PTR_TO_JSON(skuStatus, skuStatus_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SkuSaleInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(canNotSellReason, canNotSellReason_);
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_PTR_FROM_JSON(divisionCode, divisionCode_);
      DARABONBA_PTR_FROM_JSON(fuzzyQuantity, fuzzyQuantity_);
      DARABONBA_PTR_FROM_JSON(markPrice, markPrice_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
      DARABONBA_PTR_FROM_JSON(skuStatus, skuStatus_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    SkuSaleInfo() = default ;
    SkuSaleInfo(const SkuSaleInfo &) = default ;
    SkuSaleInfo(SkuSaleInfo &&) = default ;
    SkuSaleInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkuSaleInfo() = default ;
    SkuSaleInfo& operator=(const SkuSaleInfo &) = default ;
    SkuSaleInfo& operator=(SkuSaleInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canNotSellReason_ == nullptr
        && this->canSell_ == nullptr && this->divisionCode_ == nullptr && this->fuzzyQuantity_ == nullptr && this->markPrice_ == nullptr && this->price_ == nullptr
        && this->productId_ == nullptr && this->quantity_ == nullptr && this->shopId_ == nullptr && this->skuId_ == nullptr && this->skuStatus_ == nullptr
        && this->title_ == nullptr; };
    // canNotSellReason Field Functions 
    bool hasCanNotSellReason() const { return this->canNotSellReason_ != nullptr;};
    void deleteCanNotSellReason() { this->canNotSellReason_ = nullptr;};
    inline string getCanNotSellReason() const { DARABONBA_PTR_GET_DEFAULT(canNotSellReason_, "") };
    inline SkuSaleInfo& setCanNotSellReason(string canNotSellReason) { DARABONBA_PTR_SET_VALUE(canNotSellReason_, canNotSellReason) };


    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline SkuSaleInfo& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // divisionCode Field Functions 
    bool hasDivisionCode() const { return this->divisionCode_ != nullptr;};
    void deleteDivisionCode() { this->divisionCode_ = nullptr;};
    inline string getDivisionCode() const { DARABONBA_PTR_GET_DEFAULT(divisionCode_, "") };
    inline SkuSaleInfo& setDivisionCode(string divisionCode) { DARABONBA_PTR_SET_VALUE(divisionCode_, divisionCode) };


    // fuzzyQuantity Field Functions 
    bool hasFuzzyQuantity() const { return this->fuzzyQuantity_ != nullptr;};
    void deleteFuzzyQuantity() { this->fuzzyQuantity_ = nullptr;};
    inline string getFuzzyQuantity() const { DARABONBA_PTR_GET_DEFAULT(fuzzyQuantity_, "") };
    inline SkuSaleInfo& setFuzzyQuantity(string fuzzyQuantity) { DARABONBA_PTR_SET_VALUE(fuzzyQuantity_, fuzzyQuantity) };


    // markPrice Field Functions 
    bool hasMarkPrice() const { return this->markPrice_ != nullptr;};
    void deleteMarkPrice() { this->markPrice_ = nullptr;};
    inline int64_t getMarkPrice() const { DARABONBA_PTR_GET_DEFAULT(markPrice_, 0L) };
    inline SkuSaleInfo& setMarkPrice(int64_t markPrice) { DARABONBA_PTR_SET_VALUE(markPrice_, markPrice) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline SkuSaleInfo& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline SkuSaleInfo& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int64_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0L) };
    inline SkuSaleInfo& setQuantity(int64_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline SkuSaleInfo& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline SkuSaleInfo& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuStatus Field Functions 
    bool hasSkuStatus() const { return this->skuStatus_ != nullptr;};
    void deleteSkuStatus() { this->skuStatus_ = nullptr;};
    inline string getSkuStatus() const { DARABONBA_PTR_GET_DEFAULT(skuStatus_, "") };
    inline SkuSaleInfo& setSkuStatus(string skuStatus) { DARABONBA_PTR_SET_VALUE(skuStatus_, skuStatus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SkuSaleInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    shared_ptr<string> canNotSellReason_ {};
    shared_ptr<bool> canSell_ {};
    shared_ptr<string> divisionCode_ {};
    shared_ptr<string> fuzzyQuantity_ {};
    shared_ptr<int64_t> markPrice_ {};
    shared_ptr<int64_t> price_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<int64_t> quantity_ {};
    shared_ptr<string> shopId_ {};
    // skuId
    shared_ptr<string> skuId_ {};
    shared_ptr<string> skuStatus_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
