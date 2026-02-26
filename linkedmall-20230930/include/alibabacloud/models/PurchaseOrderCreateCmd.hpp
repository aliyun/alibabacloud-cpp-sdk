// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEORDERCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEORDERCREATECMD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddressInfo.hpp>
#include <vector>
#include <alibabacloud/models/ProductDTO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class PurchaseOrderCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseOrderCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(buyerId, buyerId_);
      DARABONBA_PTR_TO_JSON(deliveryAddress, deliveryAddress_);
      DARABONBA_ANY_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(outerPurchaseOrderId, outerPurchaseOrderId_);
      DARABONBA_PTR_TO_JSON(productList, productList_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseOrderCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(buyerId, buyerId_);
      DARABONBA_PTR_FROM_JSON(deliveryAddress, deliveryAddress_);
      DARABONBA_ANY_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(outerPurchaseOrderId, outerPurchaseOrderId_);
      DARABONBA_PTR_FROM_JSON(productList, productList_);
    };
    PurchaseOrderCreateCmd() = default ;
    PurchaseOrderCreateCmd(const PurchaseOrderCreateCmd &) = default ;
    PurchaseOrderCreateCmd(PurchaseOrderCreateCmd &&) = default ;
    PurchaseOrderCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseOrderCreateCmd() = default ;
    PurchaseOrderCreateCmd& operator=(const PurchaseOrderCreateCmd &) = default ;
    PurchaseOrderCreateCmd& operator=(PurchaseOrderCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyerId_ == nullptr
        && this->deliveryAddress_ == nullptr && this->extInfo_ == nullptr && this->outerPurchaseOrderId_ == nullptr && this->productList_ == nullptr; };
    // buyerId Field Functions 
    bool hasBuyerId() const { return this->buyerId_ != nullptr;};
    void deleteBuyerId() { this->buyerId_ = nullptr;};
    inline string getBuyerId() const { DARABONBA_PTR_GET_DEFAULT(buyerId_, "") };
    inline PurchaseOrderCreateCmd& setBuyerId(string buyerId) { DARABONBA_PTR_SET_VALUE(buyerId_, buyerId) };


    // deliveryAddress Field Functions 
    bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
    void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
    inline const AddressInfo & getDeliveryAddress() const { DARABONBA_PTR_GET_CONST(deliveryAddress_, AddressInfo) };
    inline AddressInfo getDeliveryAddress() { DARABONBA_PTR_GET(deliveryAddress_, AddressInfo) };
    inline PurchaseOrderCreateCmd& setDeliveryAddress(const AddressInfo & deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };
    inline PurchaseOrderCreateCmd& setDeliveryAddress(AddressInfo && deliveryAddress) { DARABONBA_PTR_SET_RVALUE(deliveryAddress_, deliveryAddress) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtInfo() const { DARABONBA_GET(extInfo_) };
    Darabonba::Json & getExtInfo() { DARABONBA_GET(extInfo_) };
    inline PurchaseOrderCreateCmd& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
    inline PurchaseOrderCreateCmd& setExtInfo(Darabonba::Json && extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


    // outerPurchaseOrderId Field Functions 
    bool hasOuterPurchaseOrderId() const { return this->outerPurchaseOrderId_ != nullptr;};
    void deleteOuterPurchaseOrderId() { this->outerPurchaseOrderId_ = nullptr;};
    inline string getOuterPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(outerPurchaseOrderId_, "") };
    inline PurchaseOrderCreateCmd& setOuterPurchaseOrderId(string outerPurchaseOrderId) { DARABONBA_PTR_SET_VALUE(outerPurchaseOrderId_, outerPurchaseOrderId) };


    // productList Field Functions 
    bool hasProductList() const { return this->productList_ != nullptr;};
    void deleteProductList() { this->productList_ = nullptr;};
    inline const vector<ProductDTO> & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, vector<ProductDTO>) };
    inline vector<ProductDTO> getProductList() { DARABONBA_PTR_GET(productList_, vector<ProductDTO>) };
    inline PurchaseOrderCreateCmd& setProductList(const vector<ProductDTO> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
    inline PurchaseOrderCreateCmd& setProductList(vector<ProductDTO> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


  protected:
    // This parameter is required.
    shared_ptr<string> buyerId_ {};
    // This parameter is required.
    shared_ptr<AddressInfo> deliveryAddress_ {};
    Darabonba::Json extInfo_ {};
    // This parameter is required.
    shared_ptr<string> outerPurchaseOrderId_ {};
    // This parameter is required.
    shared_ptr<vector<ProductDTO>> productList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
