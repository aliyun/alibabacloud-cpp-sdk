// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PURCHASEORDERRENDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_PURCHASEORDERRENDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddressInfo.hpp>
#include <alibabacloud/models/OrderRenderResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class PurchaseOrderRenderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PurchaseOrderRenderResult& obj) { 
      DARABONBA_PTR_TO_JSON(addressList, addressList_);
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_ANY_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(orderList, orderList_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(unsellableOrderList, unsellableOrderList_);
    };
    friend void from_json(const Darabonba::Json& j, PurchaseOrderRenderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(addressList, addressList_);
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_ANY_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(orderList, orderList_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(unsellableOrderList, unsellableOrderList_);
    };
    PurchaseOrderRenderResult() = default ;
    PurchaseOrderRenderResult(const PurchaseOrderRenderResult &) = default ;
    PurchaseOrderRenderResult(PurchaseOrderRenderResult &&) = default ;
    PurchaseOrderRenderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PurchaseOrderRenderResult() = default ;
    PurchaseOrderRenderResult& operator=(const PurchaseOrderRenderResult &) = default ;
    PurchaseOrderRenderResult& operator=(PurchaseOrderRenderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressList_ == nullptr
        && this->canSell_ == nullptr && this->extInfo_ == nullptr && this->message_ == nullptr && this->orderList_ == nullptr && this->requestId_ == nullptr
        && this->unsellableOrderList_ == nullptr; };
    // addressList Field Functions 
    bool hasAddressList() const { return this->addressList_ != nullptr;};
    void deleteAddressList() { this->addressList_ = nullptr;};
    inline const vector<AddressInfo> & getAddressList() const { DARABONBA_PTR_GET_CONST(addressList_, vector<AddressInfo>) };
    inline vector<AddressInfo> getAddressList() { DARABONBA_PTR_GET(addressList_, vector<AddressInfo>) };
    inline PurchaseOrderRenderResult& setAddressList(const vector<AddressInfo> & addressList) { DARABONBA_PTR_SET_VALUE(addressList_, addressList) };
    inline PurchaseOrderRenderResult& setAddressList(vector<AddressInfo> && addressList) { DARABONBA_PTR_SET_RVALUE(addressList_, addressList) };


    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline PurchaseOrderRenderResult& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtInfo() const { DARABONBA_GET(extInfo_) };
    Darabonba::Json & getExtInfo() { DARABONBA_GET(extInfo_) };
    inline PurchaseOrderRenderResult& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
    inline PurchaseOrderRenderResult& setExtInfo(Darabonba::Json && extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PurchaseOrderRenderResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // orderList Field Functions 
    bool hasOrderList() const { return this->orderList_ != nullptr;};
    void deleteOrderList() { this->orderList_ = nullptr;};
    inline const vector<OrderRenderResult> & getOrderList() const { DARABONBA_PTR_GET_CONST(orderList_, vector<OrderRenderResult>) };
    inline vector<OrderRenderResult> getOrderList() { DARABONBA_PTR_GET(orderList_, vector<OrderRenderResult>) };
    inline PurchaseOrderRenderResult& setOrderList(const vector<OrderRenderResult> & orderList) { DARABONBA_PTR_SET_VALUE(orderList_, orderList) };
    inline PurchaseOrderRenderResult& setOrderList(vector<OrderRenderResult> && orderList) { DARABONBA_PTR_SET_RVALUE(orderList_, orderList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PurchaseOrderRenderResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // unsellableOrderList Field Functions 
    bool hasUnsellableOrderList() const { return this->unsellableOrderList_ != nullptr;};
    void deleteUnsellableOrderList() { this->unsellableOrderList_ = nullptr;};
    inline const vector<OrderRenderResult> & getUnsellableOrderList() const { DARABONBA_PTR_GET_CONST(unsellableOrderList_, vector<OrderRenderResult>) };
    inline vector<OrderRenderResult> getUnsellableOrderList() { DARABONBA_PTR_GET(unsellableOrderList_, vector<OrderRenderResult>) };
    inline PurchaseOrderRenderResult& setUnsellableOrderList(const vector<OrderRenderResult> & unsellableOrderList) { DARABONBA_PTR_SET_VALUE(unsellableOrderList_, unsellableOrderList) };
    inline PurchaseOrderRenderResult& setUnsellableOrderList(vector<OrderRenderResult> && unsellableOrderList) { DARABONBA_PTR_SET_RVALUE(unsellableOrderList_, unsellableOrderList) };


  protected:
    shared_ptr<vector<AddressInfo>> addressList_ {};
    shared_ptr<bool> canSell_ {};
    Darabonba::Json extInfo_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<OrderRenderResult>> orderList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<OrderRenderResult>> unsellableOrderList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
