// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCTDTO_HPP_
#define ALIBABACLOUD_MODELS_PRODUCTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ProductDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProductDTO& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
    };
    friend void from_json(const Darabonba::Json& j, ProductDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
    };
    ProductDTO() = default ;
    ProductDTO(const ProductDTO &) = default ;
    ProductDTO(ProductDTO &&) = default ;
    ProductDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProductDTO() = default ;
    ProductDTO& operator=(const ProductDTO &) = default ;
    ProductDTO& operator=(ProductDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->price_ == nullptr
        && this->productId_ == nullptr && this->purchaserId_ == nullptr && this->quantity_ == nullptr && this->skuId_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline ProductDTO& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ProductDTO& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline ProductDTO& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline ProductDTO& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline ProductDTO& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


  protected:
    shared_ptr<int64_t> price_ {};
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
    // SKUID
    // 
    // This parameter is required.
    shared_ptr<string> skuId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
