// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDER_HPP_
#define ALIBABACLOUD_MODELS_GETORDERDETAILRESPONSEBODYDATAORDERLISTORDER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig.hpp>
#include <map>
#include <alibabacloud/models/GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetOrderDetailResponseBodyDataOrderListOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderDetailResponseBodyDataOrderListOrder& obj) { 
      DARABONBA_PTR_TO_JSON(AfterTaxAmount, afterTaxAmount_);
      DARABONBA_PTR_TO_JSON(BillModuleConfig, billModuleConfig_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(ExtendInfos, extendInfos_);
      DARABONBA_PTR_TO_JSON(InstanceIDs, instanceIDs_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderSubType, orderSubType_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OriginalConfig, originalConfig_);
      DARABONBA_PTR_TO_JSON(OriginalModuleConfig, originalModuleConfig_);
      DARABONBA_PTR_TO_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_TO_JSON(PaymentStatus, paymentStatus_);
      DARABONBA_PTR_TO_JSON(PaymentTime, paymentTime_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RelatedOrderId, relatedOrderId_);
      DARABONBA_PTR_TO_JSON(SubOrderId, subOrderId_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tax, tax_);
      DARABONBA_PTR_TO_JSON(UsageEndTime, usageEndTime_);
      DARABONBA_PTR_TO_JSON(UsageStartTime, usageStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderDetailResponseBodyDataOrderListOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterTaxAmount, afterTaxAmount_);
      DARABONBA_PTR_FROM_JSON(BillModuleConfig, billModuleConfig_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(ExtendInfos, extendInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceIDs, instanceIDs_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderSubType, orderSubType_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OriginalConfig, originalConfig_);
      DARABONBA_PTR_FROM_JSON(OriginalModuleConfig, originalModuleConfig_);
      DARABONBA_PTR_FROM_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_FROM_JSON(PaymentStatus, paymentStatus_);
      DARABONBA_PTR_FROM_JSON(PaymentTime, paymentTime_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RelatedOrderId, relatedOrderId_);
      DARABONBA_PTR_FROM_JSON(SubOrderId, subOrderId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tax, tax_);
      DARABONBA_PTR_FROM_JSON(UsageEndTime, usageEndTime_);
      DARABONBA_PTR_FROM_JSON(UsageStartTime, usageStartTime_);
    };
    GetOrderDetailResponseBodyDataOrderListOrder() = default ;
    GetOrderDetailResponseBodyDataOrderListOrder(const GetOrderDetailResponseBodyDataOrderListOrder &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrder(GetOrderDetailResponseBodyDataOrderListOrder &&) = default ;
    GetOrderDetailResponseBodyDataOrderListOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderDetailResponseBodyDataOrderListOrder() = default ;
    GetOrderDetailResponseBodyDataOrderListOrder& operator=(const GetOrderDetailResponseBodyDataOrderListOrder &) = default ;
    GetOrderDetailResponseBodyDataOrderListOrder& operator=(GetOrderDetailResponseBodyDataOrderListOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->afterTaxAmount_ != nullptr
        && this->billModuleConfig_ != nullptr && this->commodityCode_ != nullptr && this->config_ != nullptr && this->createTime_ != nullptr && this->currency_ != nullptr
        && this->extendInfos_ != nullptr && this->instanceIDs_ != nullptr && this->operator_ != nullptr && this->orderId_ != nullptr && this->orderSubType_ != nullptr
        && this->orderType_ != nullptr && this->originalConfig_ != nullptr && this->originalModuleConfig_ != nullptr && this->paymentCurrency_ != nullptr && this->paymentStatus_ != nullptr
        && this->paymentTime_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxAmountLocal_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->productCode_ != nullptr
        && this->productType_ != nullptr && this->quantity_ != nullptr && this->region_ != nullptr && this->relatedOrderId_ != nullptr && this->subOrderId_ != nullptr
        && this->subscriptionType_ != nullptr && this->tax_ != nullptr && this->usageEndTime_ != nullptr && this->usageStartTime_ != nullptr; };
    // afterTaxAmount Field Functions 
    bool hasAfterTaxAmount() const { return this->afterTaxAmount_ != nullptr;};
    void deleteAfterTaxAmount() { this->afterTaxAmount_ = nullptr;};
    inline string afterTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(afterTaxAmount_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setAfterTaxAmount(string afterTaxAmount) { DARABONBA_PTR_SET_VALUE(afterTaxAmount_, afterTaxAmount) };


    // billModuleConfig Field Functions 
    bool hasBillModuleConfig() const { return this->billModuleConfig_ != nullptr;};
    void deleteBillModuleConfig() { this->billModuleConfig_ = nullptr;};
    inline const Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig & billModuleConfig() const { DARABONBA_PTR_GET_CONST(billModuleConfig_, Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig) };
    inline Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig billModuleConfig() { DARABONBA_PTR_GET(billModuleConfig_, Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig) };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setBillModuleConfig(const Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig & billModuleConfig) { DARABONBA_PTR_SET_VALUE(billModuleConfig_, billModuleConfig) };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setBillModuleConfig(Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig && billModuleConfig) { DARABONBA_PTR_SET_RVALUE(billModuleConfig_, billModuleConfig) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // extendInfos Field Functions 
    bool hasExtendInfos() const { return this->extendInfos_ != nullptr;};
    void deleteExtendInfos() { this->extendInfos_ = nullptr;};
    inline const map<string, string> & extendInfos() const { DARABONBA_PTR_GET_CONST(extendInfos_, map<string, string>) };
    inline map<string, string> extendInfos() { DARABONBA_PTR_GET(extendInfos_, map<string, string>) };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setExtendInfos(const map<string, string> & extendInfos) { DARABONBA_PTR_SET_VALUE(extendInfos_, extendInfos) };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setExtendInfos(map<string, string> && extendInfos) { DARABONBA_PTR_SET_RVALUE(extendInfos_, extendInfos) };


    // instanceIDs Field Functions 
    bool hasInstanceIDs() const { return this->instanceIDs_ != nullptr;};
    void deleteInstanceIDs() { this->instanceIDs_ = nullptr;};
    inline string instanceIDs() const { DARABONBA_PTR_GET_DEFAULT(instanceIDs_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setInstanceIDs(string instanceIDs) { DARABONBA_PTR_SET_VALUE(instanceIDs_, instanceIDs) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderSubType Field Functions 
    bool hasOrderSubType() const { return this->orderSubType_ != nullptr;};
    void deleteOrderSubType() { this->orderSubType_ = nullptr;};
    inline string orderSubType() const { DARABONBA_PTR_GET_DEFAULT(orderSubType_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOrderSubType(string orderSubType) { DARABONBA_PTR_SET_VALUE(orderSubType_, orderSubType) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // originalConfig Field Functions 
    bool hasOriginalConfig() const { return this->originalConfig_ != nullptr;};
    void deleteOriginalConfig() { this->originalConfig_ = nullptr;};
    inline string originalConfig() const { DARABONBA_PTR_GET_DEFAULT(originalConfig_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOriginalConfig(string originalConfig) { DARABONBA_PTR_SET_VALUE(originalConfig_, originalConfig) };


    // originalModuleConfig Field Functions 
    bool hasOriginalModuleConfig() const { return this->originalModuleConfig_ != nullptr;};
    void deleteOriginalModuleConfig() { this->originalModuleConfig_ = nullptr;};
    inline const Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig & originalModuleConfig() const { DARABONBA_PTR_GET_CONST(originalModuleConfig_, Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig) };
    inline Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig originalModuleConfig() { DARABONBA_PTR_GET(originalModuleConfig_, Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig) };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOriginalModuleConfig(const Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig & originalModuleConfig) { DARABONBA_PTR_SET_VALUE(originalModuleConfig_, originalModuleConfig) };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setOriginalModuleConfig(Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig && originalModuleConfig) { DARABONBA_PTR_SET_RVALUE(originalModuleConfig_, originalModuleConfig) };


    // paymentCurrency Field Functions 
    bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
    void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
    inline string paymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


    // paymentStatus Field Functions 
    bool hasPaymentStatus() const { return this->paymentStatus_ != nullptr;};
    void deletePaymentStatus() { this->paymentStatus_ = nullptr;};
    inline string paymentStatus() const { DARABONBA_PTR_GET_DEFAULT(paymentStatus_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setPaymentStatus(string paymentStatus) { DARABONBA_PTR_SET_VALUE(paymentStatus_, paymentStatus) };


    // paymentTime Field Functions 
    bool hasPaymentTime() const { return this->paymentTime_ != nullptr;};
    void deletePaymentTime() { this->paymentTime_ = nullptr;};
    inline string paymentTime() const { DARABONBA_PTR_GET_DEFAULT(paymentTime_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setPaymentTime(string paymentTime) { DARABONBA_PTR_SET_VALUE(paymentTime_, paymentTime) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline string pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxAmountLocal Field Functions 
    bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
    void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
    inline string pretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setPretaxAmountLocal(string pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline string pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline string quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setQuantity(string quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // relatedOrderId Field Functions 
    bool hasRelatedOrderId() const { return this->relatedOrderId_ != nullptr;};
    void deleteRelatedOrderId() { this->relatedOrderId_ = nullptr;};
    inline string relatedOrderId() const { DARABONBA_PTR_GET_DEFAULT(relatedOrderId_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setRelatedOrderId(string relatedOrderId) { DARABONBA_PTR_SET_VALUE(relatedOrderId_, relatedOrderId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline string tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setTax(string tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


    // usageEndTime Field Functions 
    bool hasUsageEndTime() const { return this->usageEndTime_ != nullptr;};
    void deleteUsageEndTime() { this->usageEndTime_ = nullptr;};
    inline string usageEndTime() const { DARABONBA_PTR_GET_DEFAULT(usageEndTime_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setUsageEndTime(string usageEndTime) { DARABONBA_PTR_SET_VALUE(usageEndTime_, usageEndTime) };


    // usageStartTime Field Functions 
    bool hasUsageStartTime() const { return this->usageStartTime_ != nullptr;};
    void deleteUsageStartTime() { this->usageStartTime_ = nullptr;};
    inline string usageStartTime() const { DARABONBA_PTR_GET_DEFAULT(usageStartTime_, "") };
    inline GetOrderDetailResponseBodyDataOrderListOrder& setUsageStartTime(string usageStartTime) { DARABONBA_PTR_SET_VALUE(usageStartTime_, usageStartTime) };


  protected:
    // The aftertaxt amount of the order.
    std::shared_ptr<string> afterTaxAmount_ = nullptr;
    // The billing information about the configurations.
    std::shared_ptr<Models::GetOrderDetailResponseBodyDataOrderListOrderBillModuleConfig> billModuleConfig_ = nullptr;
    // The commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The configurations of the main service.
    std::shared_ptr<string> config_ = nullptr;
    // The time when the order was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The currency. Valid values: CNY, USD, and JPY.
    std::shared_ptr<string> currency_ = nullptr;
    // The additional information about the order.
    std::shared_ptr<map<string, string>> extendInfos_ = nullptr;
    // The instance IDs.
    std::shared_ptr<string> instanceIDs_ = nullptr;
    // The ID of the Resource Access Management (RAM) user that performs operations on the order. If no RAM user is involved, this parameter is empty.
    std::shared_ptr<string> operator_ = nullptr;
    // The order ID.
    std::shared_ptr<string> orderId_ = nullptr;
    // The type of the suborder. A value of productsuborder indicates service suborder. A value of refundsuborder indicates refund suborder.
    std::shared_ptr<string> orderSubType_ = nullptr;
    // The type of the order. Valid values: new, renew, upgrade, and refund.
    std::shared_ptr<string> orderType_ = nullptr;
    // The configuration information that is not formatted.
    std::shared_ptr<string> originalConfig_ = nullptr;
    // The information about the configurations.
    std::shared_ptr<Models::GetOrderDetailResponseBodyDataOrderListOrderOriginalModuleConfig> originalModuleConfig_ = nullptr;
    // The currency used for payment. Valid values: CNY, USD, and JPY.
    std::shared_ptr<string> paymentCurrency_ = nullptr;
    // The payment state. Valid values: unpaid, paid, and canceled.
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
    // The number of main services.
    std::shared_ptr<string> quantity_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the associated order.
    std::shared_ptr<string> relatedOrderId_ = nullptr;
    // The ID of the suborder.
    std::shared_ptr<string> subOrderId_ = nullptr;
    // The billing method. Valid values: Subscription and PayAsYouGo.
    std::shared_ptr<string> subscriptionType_ = nullptr;
    // The tax of the order.
    std::shared_ptr<string> tax_ = nullptr;
    // The time when the service ends.
    std::shared_ptr<string> usageEndTime_ = nullptr;
    // The time when the service starts.
    std::shared_ptr<string> usageStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
