// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEORDERRENDERQUERY_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEORDERRENDERQUERY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddressInfo.hpp>
#include <vector>
#include <alibabacloud/models/OrderRenderProductDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class PurchaseOrderRenderQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseOrderRenderQuery& obj) { 
      DARABONBA_PTR_TO_JSON(buyerId, buyerId_);
      DARABONBA_PTR_TO_JSON(deliveryAddress, deliveryAddress_);
      DARABONBA_ANY_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(productList, productList_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseOrderRenderQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(buyerId, buyerId_);
      DARABONBA_PTR_FROM_JSON(deliveryAddress, deliveryAddress_);
      DARABONBA_ANY_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(productList, productList_);
    };
    PurchaseOrderRenderQuery() = default ;
    PurchaseOrderRenderQuery(const PurchaseOrderRenderQuery &) = default ;
    PurchaseOrderRenderQuery(PurchaseOrderRenderQuery &&) = default ;
    PurchaseOrderRenderQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseOrderRenderQuery() = default ;
    PurchaseOrderRenderQuery& operator=(const PurchaseOrderRenderQuery &) = default ;
    PurchaseOrderRenderQuery& operator=(PurchaseOrderRenderQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyerId_ == nullptr
        && this->deliveryAddress_ == nullptr && this->extInfo_ == nullptr && this->productList_ == nullptr; };
    // buyerId Field Functions 
    bool hasBuyerId() const { return this->buyerId_ != nullptr;};
    void deleteBuyerId() { this->buyerId_ = nullptr;};
    inline string getBuyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, "") };
    inline PurchaseOrderRenderQuery& setBuyerId(string buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline const AddressInfo & getDeliveryAddress() const { DARABONBA_PTR_GET_CONST(deliveryAddress_, AddressInfo) };
    inline AddressInfo getDeliveryAddress() { DARABONBA_PTR_GET(deliveryAddress_, AddressInfo) };
    inline PurchaseOrderRenderQuery& setDeliveryAddress(const AddressInfo & deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };
    inline PurchaseOrderRenderQuery& setDeliveryAddress(AddressInfo && deliveryAddress) { DARABONBA_PTR_SET_RVALUE(deliveryAddress_, deliveryAddress) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtInfo() const { DARABONBA_GET(extInfo_) };
    Darabonba::Json & getExtInfo() { DARABONBA_GET(extInfo_) };
    inline PurchaseOrderRenderQuery& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
    inline PurchaseOrderRenderQuery& setExtInfo(Darabonba::Json && extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


    // productList Field Functions 
    bool hasProductList() const { return this->productList_ != nullptr;};
    void deleteProductList() { this->productList_ = nullptr;};
    inline const vector<OrderRenderProductDTO> & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, vector<OrderRenderProductDTO>) };
    inline vector<OrderRenderProductDTO> getProductList() { DARABONBA_PTR_GET(productList_, vector<OrderRenderProductDTO>) };
    inline PurchaseOrderRenderQuery& setProductList(const vector<OrderRenderProductDTO> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
    inline PurchaseOrderRenderQuery& setProductList(vector<OrderRenderProductDTO> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


  protected:
    // This parameter is required.
    shared_ptr<string> buyerId_ {};
    // This parameter is required.
    shared_ptr<AddressInfo> deliveryAddress_ {};
    Darabonba::Json extInfo_ {};
    // This parameter is required.
    shared_ptr<vector<OrderRenderProductDTO>> productList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
