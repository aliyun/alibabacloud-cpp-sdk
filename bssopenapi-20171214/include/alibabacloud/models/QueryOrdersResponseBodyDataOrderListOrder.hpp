// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORDERSRESPONSEBODYDATAORDERLISTORDER_HPP_
#define ALIBABACLOUD_MODELS_QUERYORDERSRESPONSEBODYDATAORDERLISTORDER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryOrdersResponseBodyDataOrderListOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrdersResponseBodyDataOrderListOrder& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTaxAmount, afterTaxAmount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_TO_JSON(PaymentStatus, paymentStatus_);
      DARABONBA_PTR_TO_JSON(PaymentTime, paymentTime_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RelatedOrderId, relatedOrderId_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tax, tax_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrdersResponseBodyDataOrderListOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTaxAmount, afterTaxAmount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_FROM_JSON(PaymentStatus, paymentStatus_);
      DARABONBA_PTR_FROM_JSON(PaymentTime, paymentTime_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RelatedOrderId, relatedOrderId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tax, tax_);
    };
    QueryOrdersResponseBodyDataOrderListOrder() = default ;
    QueryOrdersResponseBodyDataOrderListOrder(const QueryOrdersResponseBodyDataOrderListOrder &) = default ;
    QueryOrdersResponseBodyDataOrderListOrder(QueryOrdersResponseBodyDataOrderListOrder &&) = default ;
    QueryOrdersResponseBodyDataOrderListOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrdersResponseBodyDataOrderListOrder() = default ;
    QueryOrdersResponseBodyDataOrderListOrder& operator=(const QueryOrdersResponseBodyDataOrderListOrder &) = default ;
    QueryOrdersResponseBodyDataOrderListOrder& operator=(QueryOrdersResponseBodyDataOrderListOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterTaxAmount_ != nullptr
        && this->commodityCode_ != nullptr && this->createTime_ != nullptr && this->currency_ != nullptr && this->orderId_ != nullptr && this->orderType_ != nullptr
        && this->paymentCurrency_ != nullptr && this->paymentStatus_ != nullptr && this->paymentTime_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxAmountLocal_ != nullptr
        && this->pretaxGrossAmount_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->relatedOrderId_ != nullptr && this->subscriptionType_ != nullptr
        && this->tax_ != nullptr; };
    // afterTaxAmount Field Functions 
    bool hasAfterTaxAmount() const { return this->afterTaxAmount_ != nullptr;};
    void deleteAfterTaxAmount() { this->afterTaxAmount_ = nullptr;};
    inline string afterTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(afterTaxAmount_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setAfterTaxAmount(string afterTaxAmount) { DARABONBA_PTR_SET_VALUE(afterTaxAmount_, afterTaxAmount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // paymentCurrency Field Functions 
    bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
    void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
    inline string paymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


    // paymentStatus Field Functions 
    bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
    void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
    inline string paymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


    // paymentTime Field Functions 
    bool hasPaymentTime() const { return this->paymentTime_ != nullptr;};
    void deletePaymentTime() { this->paymentTime_ = nullptr;};
    inline string paymentTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTime_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setPaymentTime(string paymentTime) { DARABONBA_PTR_SET_VALUE(paymentTime_, paymentTime) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline string pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxAmountLocal Field Functions 
    bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
    void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
    inline string pretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setPretaxAmountLocal(string pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline string pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // relatedOrderId Field Functions 
    bool hasRelatedOrderId() const { return this->relatedOrderId_ != nullptr;};
    void deleteRelatedOrderId() { this->relatedOrderId_ = nullptr;};
    inline string relatedOrderId() const { DARABONBA_PTR_GET_DEFAULT(relatedOrderId_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setRelatedOrderId(string relatedOrderId) { DARABONBA_PTR_SET_VALUE(relatedOrderId_, relatedOrderId) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline string tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
    inline QueryOrdersResponseBodyDataOrderListOrder& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


  protected:
    // The aftertax amount of the order.
    std::shared_ptr<string> afterTaxAmount_ = nullptr;
    // The service code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the order was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The currency.
    std::shared_ptr<string> currency_ = nullptr;
    // The ID of the order.
    std::shared_ptr<string> orderId_ = nullptr;
    // The type of the order. Valid values:
    // 
    // *   New: purchases an instance.
    // *   Renew: renews an instance.
    // *   Upgrade: upgrades the configurations of an instance.
    // *   Refund: applies for a refund.
    std::shared_ptr<string> orderType_ = nullptr;
    // The currency of payment.
    std::shared_ptr<string> paymentCurrency_ = nullptr;
    // The status of payment. Valid values for a non-refund order:
    // 
    // *   Unpaid: The order is not paid.
    // *   Paid: The order is paid.
    // *   Cancelled: The order is canceled.
    // 
    // > : The value is NULL for a refund order.
    std::shared_ptr<string> paymentStatus_ = nullptr;
    // The time of payment.
    std::shared_ptr<string> paymentTime_ = nullptr;
    // The pretax amount of the order.
    std::shared_ptr<string> pretaxAmount_ = nullptr;
    // The pretax amount of the order in local currency.
    std::shared_ptr<string> pretaxAmountLocal_ = nullptr;
    // The pretax gross amount of the order.
    std::shared_ptr<string> pretaxGrossAmount_ = nullptr;
    // The code of the main service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the main service.
    std::shared_ptr<string> productType_ = nullptr;
    // The ID of the associated order.
    std::shared_ptr<string> relatedOrderId_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: subscription
    // *   PayAsYouGo: pay-as-you-go
    std::shared_ptr<string> subscriptionType_ = nullptr;
    // The tax of the order.
    std::shared_ptr<string> tax_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
