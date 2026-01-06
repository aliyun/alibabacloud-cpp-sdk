// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Services, services_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Services, services_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Services : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Services& obj) { 
        DARABONBA_PTR_TO_JSON(IsOpen, isOpen_);
        DARABONBA_PTR_TO_JSON(OpenUrl, openUrl_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
      };
      friend void from_json(const Darabonba::Json& j, Services& obj) { 
        DARABONBA_PTR_FROM_JSON(IsOpen, isOpen_);
        DARABONBA_PTR_FROM_JSON(OpenUrl, openUrl_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
      };
      Services() = default ;
      Services(const Services &) = default ;
      Services(Services &&) = default ;
      Services(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Services() = default ;
      Services& operator=(const Services &) = default ;
      Services& operator=(Services &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->isOpen_ == nullptr
        && this->openUrl_ == nullptr && this->serviceCode_ == nullptr; };
      // isOpen Field Functions 
      bool hasIsOpen() const { return this->isOpen_ != nullptr;};
      void deleteIsOpen() { this->isOpen_ = nullptr;};
      inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
      inline Services& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


      // openUrl Field Functions 
      bool hasOpenUrl() const { return this->openUrl_ != nullptr;};
      void deleteOpenUrl() { this->openUrl_ = nullptr;};
      inline string getOpenUrl() const { DARABONBA_PTR_GET_DEFAULT(openUrl_, "") };
      inline Services& setOpenUrl(string openUrl) { DARABONBA_PTR_SET_VALUE(openUrl_, openUrl) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline Services& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


    protected:
      shared_ptr<bool> isOpen_ {};
      shared_ptr<string> openUrl_ {};
      shared_ptr<string> serviceCode_ {};
    };

    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(HasPermissionToPurchase, hasPermissionToPurchase_);
        DARABONBA_PTR_TO_JSON(IsPurchased, isPurchased_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(PurchaseUrl, purchaseUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(HasPermissionToPurchase, hasPermissionToPurchase_);
        DARABONBA_PTR_FROM_JSON(IsPurchased, isPurchased_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(PurchaseUrl, purchaseUrl_);
      };
      Products() = default ;
      Products(const Products &) = default ;
      Products(Products &&) = default ;
      Products(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Products() = default ;
      Products& operator=(const Products &) = default ;
      Products& operator=(Products &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hasPermissionToPurchase_ == nullptr
        && this->isPurchased_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->purchaseUrl_ == nullptr; };
      // hasPermissionToPurchase Field Functions 
      bool hasHasPermissionToPurchase() const { return this->hasPermissionToPurchase_ != nullptr;};
      void deleteHasPermissionToPurchase() { this->hasPermissionToPurchase_ = nullptr;};
      inline bool getHasPermissionToPurchase() const { DARABONBA_PTR_GET_DEFAULT(hasPermissionToPurchase_, false) };
      inline Products& setHasPermissionToPurchase(bool hasPermissionToPurchase) { DARABONBA_PTR_SET_VALUE(hasPermissionToPurchase_, hasPermissionToPurchase) };


      // isPurchased Field Functions 
      bool hasIsPurchased() const { return this->isPurchased_ != nullptr;};
      void deleteIsPurchased() { this->isPurchased_ = nullptr;};
      inline bool getIsPurchased() const { DARABONBA_PTR_GET_DEFAULT(isPurchased_, false) };
      inline Products& setIsPurchased(bool isPurchased) { DARABONBA_PTR_SET_VALUE(isPurchased_, isPurchased) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Products& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Products& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // purchaseUrl Field Functions 
      bool hasPurchaseUrl() const { return this->purchaseUrl_ != nullptr;};
      void deletePurchaseUrl() { this->purchaseUrl_ = nullptr;};
      inline string getPurchaseUrl() const { DARABONBA_PTR_GET_DEFAULT(purchaseUrl_, "") };
      inline Products& setPurchaseUrl(string purchaseUrl) { DARABONBA_PTR_SET_VALUE(purchaseUrl_, purchaseUrl) };


    protected:
      shared_ptr<bool> hasPermissionToPurchase_ {};
      shared_ptr<bool> isPurchased_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<string> purchaseUrl_ {};
    };

    virtual bool empty() const override { return this->products_ == nullptr
        && this->requestId_ == nullptr && this->services_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<ListProductsResponseBody::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<ListProductsResponseBody::Products>) };
    inline vector<ListProductsResponseBody::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<ListProductsResponseBody::Products>) };
    inline ListProductsResponseBody& setProducts(const vector<ListProductsResponseBody::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ListProductsResponseBody& setProducts(vector<ListProductsResponseBody::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // services Field Functions 
    bool hasServices() const { return this->services_ != nullptr;};
    void deleteServices() { this->services_ = nullptr;};
    inline const vector<ListProductsResponseBody::Services> & getServices() const { DARABONBA_PTR_GET_CONST(services_, vector<ListProductsResponseBody::Services>) };
    inline vector<ListProductsResponseBody::Services> getServices() { DARABONBA_PTR_GET(services_, vector<ListProductsResponseBody::Services>) };
    inline ListProductsResponseBody& setServices(const vector<ListProductsResponseBody::Services> & services) { DARABONBA_PTR_SET_VALUE(services_, services) };
    inline ListProductsResponseBody& setServices(vector<ListProductsResponseBody::Services> && services) { DARABONBA_PTR_SET_RVALUE(services_, services) };


  protected:
    shared_ptr<vector<ListProductsResponseBody::Products>> products_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListProductsResponseBody::Services>> services_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
