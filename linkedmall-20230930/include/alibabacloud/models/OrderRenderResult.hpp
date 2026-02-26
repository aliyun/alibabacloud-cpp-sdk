// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERRENDERRESULT_HPP_
#define ALIBABACLOUD_MODELS_ORDERRENDERRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeliveryInfo.hpp>
#include <alibabacloud/models/OrderProductResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderRenderResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderRenderResult& obj) { 
      DARABONBA_PTR_TO_JSON(canSell, canSell_);
      DARABONBA_PTR_TO_JSON(deliveryInfoList, deliveryInfoList_);
      DARABONBA_ANY_TO_JSON(extInfo, extInfo_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(productList, productList_);
    };
    friend void from_json(const Darabonba::Json& j, OrderRenderResult& obj) { 
      DARABONBA_PTR_FROM_JSON(canSell, canSell_);
      DARABONBA_PTR_FROM_JSON(deliveryInfoList, deliveryInfoList_);
      DARABONBA_ANY_FROM_JSON(extInfo, extInfo_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(productList, productList_);
    };
    OrderRenderResult() = default ;
    OrderRenderResult(const OrderRenderResult &) = default ;
    OrderRenderResult(OrderRenderResult &&) = default ;
    OrderRenderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderRenderResult() = default ;
    OrderRenderResult& operator=(const OrderRenderResult &) = default ;
    OrderRenderResult& operator=(OrderRenderResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->canSell_ == nullptr
        && this->deliveryInfoList_ == nullptr && this->extInfo_ == nullptr && this->message_ == nullptr && this->productList_ == nullptr; };
    // canSell Field Functions 
    bool hasCanSell() const { return this->canSell_ != nullptr;};
    void deleteCanSell() { this->canSell_ = nullptr;};
    inline bool getCanSell() const { DARABONBA_PTR_GET_DEFAULT(canSell_, false) };
    inline OrderRenderResult& setCanSell(bool canSell) { DARABONBA_PTR_SET_VALUE(canSell_, canSell) };


    // deliveryInfoList Field Functions 
    bool hasDeliveryInfoList() const { return this->deliveryInfoList_ != nullptr;};
    void deleteDeliveryInfoList() { this->deliveryInfoList_ = nullptr;};
    inline const vector<DeliveryInfo> & getDeliveryInfoList() const { DARABONBA_PTR_GET_CONST(deliveryInfoList_, vector<DeliveryInfo>) };
    inline vector<DeliveryInfo> getDeliveryInfoList() { DARABONBA_PTR_GET(deliveryInfoList_, vector<DeliveryInfo>) };
    inline OrderRenderResult& setDeliveryInfoList(const vector<DeliveryInfo> & deliveryInfoList) { DARABONBA_PTR_SET_VALUE(deliveryInfoList_, deliveryInfoList) };
    inline OrderRenderResult& setDeliveryInfoList(vector<DeliveryInfo> && deliveryInfoList) { DARABONBA_PTR_SET_RVALUE(deliveryInfoList_, deliveryInfoList) };


    // extInfo Field Functions 
    bool hasExtInfo() const { return this->extInfo_ != nullptr;};
    void deleteExtInfo() { this->extInfo_ = nullptr;};
    inline     const Darabonba::Json & getExtInfo() const { DARABONBA_GET(extInfo_) };
    Darabonba::Json & getExtInfo() { DARABONBA_GET(extInfo_) };
    inline OrderRenderResult& setExtInfo(const Darabonba::Json & extInfo) { DARABONBA_SET_VALUE(extInfo_, extInfo) };
    inline OrderRenderResult& setExtInfo(Darabonba::Json && extInfo) { DARABONBA_SET_RVALUE(extInfo_, extInfo) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline OrderRenderResult& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // productList Field Functions 
    bool hasProductList() const { return this->productList_ != nullptr;};
    void deleteProductList() { this->productList_ = nullptr;};
    inline const vector<OrderProductResult> & getProductList() const { DARABONBA_PTR_GET_CONST(productList_, vector<OrderProductResult>) };
    inline vector<OrderProductResult> getProductList() { DARABONBA_PTR_GET(productList_, vector<OrderProductResult>) };
    inline OrderRenderResult& setProductList(const vector<OrderProductResult> & productList) { DARABONBA_PTR_SET_VALUE(productList_, productList) };
    inline OrderRenderResult& setProductList(vector<OrderProductResult> && productList) { DARABONBA_PTR_SET_RVALUE(productList_, productList) };


  protected:
    shared_ptr<bool> canSell_ {};
    shared_ptr<vector<DeliveryInfo>> deliveryInfoList_ {};
    Darabonba::Json extInfo_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<OrderProductResult>> productList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
