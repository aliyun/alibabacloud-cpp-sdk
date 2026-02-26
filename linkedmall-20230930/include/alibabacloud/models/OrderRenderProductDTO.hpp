// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERRENDERPRODUCTDTO_HPP_
#define ALIBABACLOUD_MODELS_ORDERRENDERPRODUCTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderRenderProductDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRenderProductDTO& obj) { 
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRenderProductDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
    };
    OrderRenderProductDTO() = default ;
    OrderRenderProductDTO(const OrderRenderProductDTO &) = default ;
    OrderRenderProductDTO(OrderRenderProductDTO &&) = default ;
    OrderRenderProductDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRenderProductDTO() = default ;
    OrderRenderProductDTO& operator=(const OrderRenderProductDTO &) = default ;
    OrderRenderProductDTO& operator=(OrderRenderProductDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productId_ == nullptr
        && this->purchaserId_ == nullptr && this->quantity_ == nullptr && this->skuId_ == nullptr; };
    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline OrderRenderProductDTO& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline OrderRenderProductDTO& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline OrderRenderProductDTO& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline OrderRenderProductDTO& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


  protected:
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // This parameter is required.
    shared_ptr<string> purchaserId_ {};
    // This parameter is required.
    shared_ptr<int32_t> quantity_ {};
    // skuID
    // 
    // This parameter is required.
    shared_ptr<string> skuId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
