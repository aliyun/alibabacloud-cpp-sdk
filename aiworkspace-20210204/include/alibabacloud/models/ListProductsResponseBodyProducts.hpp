// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListProductsResponseBodyProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_TO_JSON(HasPermissionToPurchase, hasPermissionToPurchase_);
      DARABONBA_PTR_TO_JSON(IsPurchased, isPurchased_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(PurchaseUrl, purchaseUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(HasPermissionToPurchase, hasPermissionToPurchase_);
      DARABONBA_PTR_FROM_JSON(IsPurchased, isPurchased_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(PurchaseUrl, purchaseUrl_);
    };
    ListProductsResponseBodyProducts() = default ;
    ListProductsResponseBodyProducts(const ListProductsResponseBodyProducts &) = default ;
    ListProductsResponseBodyProducts(ListProductsResponseBodyProducts &&) = default ;
    ListProductsResponseBodyProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyProducts() = default ;
    ListProductsResponseBodyProducts& operator=(const ListProductsResponseBodyProducts &) = default ;
    ListProductsResponseBodyProducts& operator=(ListProductsResponseBodyProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hasPermissionToPurchase_ != nullptr
        && this->isPurchased_ != nullptr && this->productCode_ != nullptr && this->productId_ != nullptr && this->purchaseUrl_ != nullptr; };
    // hasPermissionToPurchase Field Functions 
    bool hasHasPermissionToPurchase() const { return this->hasPermissionToPurchase_ != nullptr;};
    void deleteHasPermissionToPurchase() { this->hasPermissionToPurchase_ = nullptr;};
    inline bool hasPermissionToPurchase() const { DARABONBA_PTR_GET_DEFAULT(hasPermissionToPurchase_, false) };
    inline ListProductsResponseBodyProducts& setHasPermissionToPurchase(bool hasPermissionToPurchase) { DARABONBA_PTR_SET_VALUE(hasPermissionToPurchase_, hasPermissionToPurchase) };


    // isPurchased Field Functions 
    bool hasIsPurchased() const { return this->isPurchased_ != nullptr;};
    void deleteIsPurchased() { this->isPurchased_ = nullptr;};
    inline bool isPurchased() const { DARABONBA_PTR_GET_DEFAULT(isPurchased_, false) };
    inline ListProductsResponseBodyProducts& setIsPurchased(bool isPurchased) { DARABONBA_PTR_SET_VALUE(isPurchased_, isPurchased) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductsResponseBodyProducts& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListProductsResponseBodyProducts& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // purchaseUrl Field Functions 
    bool hasPurchaseUrl() const { return this->purchaseUrl_ != nullptr;};
    void deletePurchaseUrl() { this->purchaseUrl_ = nullptr;};
    inline string purchaseUrl() const { DARABONBA_PTR_GET_DEFAULT(purchaseUrl_, "") };
    inline ListProductsResponseBodyProducts& setPurchaseUrl(string purchaseUrl) { DARABONBA_PTR_SET_VALUE(purchaseUrl_, purchaseUrl) };


  protected:
    std::shared_ptr<bool> hasPermissionToPurchase_ = nullptr;
    std::shared_ptr<bool> isPurchased_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> purchaseUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
