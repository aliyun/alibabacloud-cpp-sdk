// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLINERESULT_HPP_
#define ALIBABACLOUD_MODELS_ORDERLINERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EticketInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class OrderLineResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderLineResult& obj) { 
      DARABONBA_PTR_TO_JSON(eticketInfos, eticketInfos_);
      DARABONBA_PTR_TO_JSON(logisticsStatus, logisticsStatus_);
      DARABONBA_PTR_TO_JSON(number, number_);
      DARABONBA_PTR_TO_JSON(orderId, orderId_);
      DARABONBA_PTR_TO_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_TO_JSON(orderLineStatus, orderLineStatus_);
      DARABONBA_PTR_TO_JSON(payFee, payFee_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productPic, productPic_);
      DARABONBA_PTR_TO_JSON(productTitle, productTitle_);
      DARABONBA_PTR_TO_JSON(skuId, skuId_);
      DARABONBA_PTR_TO_JSON(skuTitle, skuTitle_);
    };
    friend void from_json(const Darabonba::Json& j, OrderLineResult& obj) { 
      DARABONBA_PTR_FROM_JSON(eticketInfos, eticketInfos_);
      DARABONBA_PTR_FROM_JSON(logisticsStatus, logisticsStatus_);
      DARABONBA_PTR_FROM_JSON(number, number_);
      DARABONBA_PTR_FROM_JSON(orderId, orderId_);
      DARABONBA_PTR_FROM_JSON(orderLineId, orderLineId_);
      DARABONBA_PTR_FROM_JSON(orderLineStatus, orderLineStatus_);
      DARABONBA_PTR_FROM_JSON(payFee, payFee_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productPic, productPic_);
      DARABONBA_PTR_FROM_JSON(productTitle, productTitle_);
      DARABONBA_PTR_FROM_JSON(skuId, skuId_);
      DARABONBA_PTR_FROM_JSON(skuTitle, skuTitle_);
    };
    OrderLineResult() = default ;
    OrderLineResult(const OrderLineResult &) = default ;
    OrderLineResult(OrderLineResult &&) = default ;
    OrderLineResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderLineResult() = default ;
    OrderLineResult& operator=(const OrderLineResult &) = default ;
    OrderLineResult& operator=(OrderLineResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eticketInfos_ == nullptr
        && this->logisticsStatus_ == nullptr && this->number_ == nullptr && this->orderId_ == nullptr && this->orderLineId_ == nullptr && this->orderLineStatus_ == nullptr
        && this->payFee_ == nullptr && this->productId_ == nullptr && this->productPic_ == nullptr && this->productTitle_ == nullptr && this->skuId_ == nullptr
        && this->skuTitle_ == nullptr; };
    // eticketInfos Field Functions 
    bool hasEticketInfos() const { return this->eticketInfos_ != nullptr;};
    void deleteEticketInfos() { this->eticketInfos_ = nullptr;};
    inline const vector<EticketInfo> & getEticketInfos() const { DARABONBA_PTR_GET_CONST(eticketInfos_, vector<EticketInfo>) };
    inline vector<EticketInfo> getEticketInfos() { DARABONBA_PTR_GET(eticketInfos_, vector<EticketInfo>) };
    inline OrderLineResult& setEticketInfos(const vector<EticketInfo> & eticketInfos) { DARABONBA_PTR_SET_VALUE(eticketInfos_, eticketInfos) };
    inline OrderLineResult& setEticketInfos(vector<EticketInfo> && eticketInfos) { DARABONBA_PTR_SET_RVALUE(eticketInfos_, eticketInfos) };


    // logisticsStatus Field Functions 
    bool hasLogisticsStatus() const { return this->logisticsStatus_ != nullptr;};
    void deleteLogisticsStatus() { this->logisticsStatus_ = nullptr;};
    inline string getLogisticsStatus() const { DARABONBA_PTR_GET_DEFAULT(logisticsStatus_, "") };
    inline OrderLineResult& setLogisticsStatus(string logisticsStatus) { DARABONBA_PTR_SET_VALUE(logisticsStatus_, logisticsStatus) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline OrderLineResult& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline OrderLineResult& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderLineId Field Functions 
    bool hasOrderLineId() const { return this->orderLineId_ != nullptr;};
    void deleteOrderLineId() { this->orderLineId_ = nullptr;};
    inline string getOrderLineId() const { DARABONBA_PTR_GET_DEFAULT(orderLineId_, "") };
    inline OrderLineResult& setOrderLineId(string orderLineId) { DARABONBA_PTR_SET_VALUE(orderLineId_, orderLineId) };


    // orderLineStatus Field Functions 
    bool hasOrderLineStatus() const { return this->orderLineStatus_ != nullptr;};
    void deleteOrderLineStatus() { this->orderLineStatus_ = nullptr;};
    inline string getOrderLineStatus() const { DARABONBA_PTR_GET_DEFAULT(orderLineStatus_, "") };
    inline OrderLineResult& setOrderLineStatus(string orderLineStatus) { DARABONBA_PTR_SET_VALUE(orderLineStatus_, orderLineStatus) };


    // payFee Field Functions 
    bool hasPayFee() const { return this->payFee_ != nullptr;};
    void deletePayFee() { this->payFee_ = nullptr;};
    inline int64_t getPayFee() const { DARABONBA_PTR_GET_DEFAULT(payFee_, 0L) };
    inline OrderLineResult& setPayFee(int64_t payFee) { DARABONBA_PTR_SET_VALUE(payFee_, payFee) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline OrderLineResult& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productPic Field Functions 
    bool hasProductPic() const { return this->productPic_ != nullptr;};
    void deleteProductPic() { this->productPic_ = nullptr;};
    inline string getProductPic() const { DARABONBA_PTR_GET_DEFAULT(productPic_, "") };
    inline OrderLineResult& setProductPic(string productPic) { DARABONBA_PTR_SET_VALUE(productPic_, productPic) };


    // productTitle Field Functions 
    bool hasProductTitle() const { return this->productTitle_ != nullptr;};
    void deleteProductTitle() { this->productTitle_ = nullptr;};
    inline string getProductTitle() const { DARABONBA_PTR_GET_DEFAULT(productTitle_, "") };
    inline OrderLineResult& setProductTitle(string productTitle) { DARABONBA_PTR_SET_VALUE(productTitle_, productTitle) };


    // skuId Field Functions 
    bool hasSkuId() const { return this->skuId_ != nullptr;};
    void deleteSkuId() { this->skuId_ = nullptr;};
    inline string getSkuId() const { DARABONBA_PTR_GET_DEFAULT(skuId_, "") };
    inline OrderLineResult& setSkuId(string skuId) { DARABONBA_PTR_SET_VALUE(skuId_, skuId) };


    // skuTitle Field Functions 
    bool hasSkuTitle() const { return this->skuTitle_ != nullptr;};
    void deleteSkuTitle() { this->skuTitle_ = nullptr;};
    inline string getSkuTitle() const { DARABONBA_PTR_GET_DEFAULT(skuTitle_, "") };
    inline OrderLineResult& setSkuTitle(string skuTitle) { DARABONBA_PTR_SET_VALUE(skuTitle_, skuTitle) };


  protected:
    shared_ptr<vector<EticketInfo>> eticketInfos_ {};
    shared_ptr<string> logisticsStatus_ {};
    shared_ptr<string> number_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> orderLineId_ {};
    shared_ptr<string> orderLineStatus_ {};
    shared_ptr<int64_t> payFee_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> productPic_ {};
    shared_ptr<string> productTitle_ {};
    // skuId
    shared_ptr<string> skuId_ {};
    shared_ptr<string> skuTitle_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
