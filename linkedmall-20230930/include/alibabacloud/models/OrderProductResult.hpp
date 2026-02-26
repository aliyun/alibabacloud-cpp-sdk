// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERPRODUCTRESULT_HPP_
#define ALIBABACLOUD_MODELS_ORDERPRODUCTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderProductResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderProductResult& obj) { 
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_ANY_TO_JSON(features, features_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productPicUrl, productPicUrl_);
      DARABONBA_PTR_TO_JSON(productTitle, productTitle_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
      DARABONBA_PTR_TO_JSON(skuTitle, skuTitle_);
    };
    friend void from_json(const Darabonba::Json& j, OrderProductResult& obj) { 
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_ANY_FROM_JSON(features, features_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productPicUrl, productPicUrl_);
      DARABONBA_PTR_FROM_JSON(productTitle, productTitle_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
      DARABONBA_PTR_FROM_JSON(skuTitle, skuTitle_);
    };
    OrderProductResult() = default ;
    OrderProductResult(const OrderProductResult &) = default ;
    OrderProductResult(OrderProductResult &&) = default ;
    OrderProductResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderProductResult() = default ;
    OrderProductResult& operator=(const OrderProductResult &) = default ;
    OrderProductResult& operator=(OrderProductResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canSell_ == nullptr
        && this->features_ == nullptr && this->message_ == nullptr && this->price_ == nullptr && this->productId_ == nullptr && this->productPicUrl_ == nullptr
        && this->productTitle_ == nullptr && this->purchaserId_ == nullptr && this->quantity_ == nullptr && this->skuId_ == nullptr && this->skuTitle_ == nullptr; };
    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline OrderProductResult& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // features Field Functions 
    bool hasFeatures() const { return this->features_ != nullptr;};
    void deleteFeatures() { this->features_ = nullptr;};
    inline     const Darabonba::Json & getFeatures() const { DARABONBA_GET(features_) };
    Darabonba::Json & getFeatures() { DARABONBA_GET(features_) };
    inline OrderProductResult& setFeatures(const Darabonba::Json & features) { DARABONBA_SET_VALUE(features_, features) };
    inline OrderProductResult& setFeatures(Darabonba::Json && features) { DARABONBA_SET_RVALUE(features_, features) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OrderProductResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline OrderProductResult& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline OrderProductResult& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productPicUrl Field Functions 
    bool hasProductPicUrl() const { return this->productPicUrl_ != nullptr;};
    void deleteProductPicUrl() { this->productPicUrl_ = nullptr;};
    inline string getProductPicUrl() const { DARABONBA_PTR_GET_DEFAULT(productPicUrl_, "") };
    inline OrderProductResult& setProductPicUrl(string productPicUrl) { DARABONBA_PTR_SET_VALUE(productPicUrl_, productPicUrl) };


    // productTitle Field Functions 
    bool hasProductTitle() const { return this->productTitle_ != nullptr;};
    void deleteProductTitle() { this->productTitle_ = nullptr;};
    inline string getProductTitle() const { DARABONBA_PTR_GET_DEFAULT(productTitle_, "") };
    inline OrderProductResult& setProductTitle(string productTitle) { DARABONBA_PTR_SET_VALUE(productTitle_, productTitle) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline OrderProductResult& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline OrderProductResult& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline OrderProductResult& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuTitle Field Functions 
    bool hasSkuTitle() const { return this->skuTitle_ != nullptr;};
    void deleteSkuTitle() { this->skuTitle_ = nullptr;};
    inline string getSkuTitle() const { DARABONBA_PTR_GET_DEFAULT(skuTitle_, "") };
    inline OrderProductResult& setSkuTitle(string skuTitle) { DARABONBA_PTR_SET_VALUE(skuTitle_, skuTitle) };


  protected:
    shared_ptr<bool> canSell_ {};
    Darabonba::Json features_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int64_t> price_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> productPicUrl_ {};
    shared_ptr<string> productTitle_ {};
    shared_ptr<string> purchaserId_ {};
    shared_ptr<int32_t> quantity_ {};
    // SKUID
    shared_ptr<string> skuId_ {};
    shared_ptr<string> skuTitle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
