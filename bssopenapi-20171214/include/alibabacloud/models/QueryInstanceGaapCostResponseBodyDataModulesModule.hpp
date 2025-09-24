// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODYDATAMODULESMODULE_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODYDATAMODULESMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceGaapCostResponseBodyDataModulesModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceGaapCostResponseBodyDataModulesModule& obj) { 
      DARABONBA_PTR_TO_JSON(AccountingUnit, accountingUnit_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(GaapDeductedByCashCoupons, gaapDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(GaapDeductedByCoupons, gaapDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(GaapDeductedByPrepaidCard, gaapDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(GaapPaymentAmount, gaapPaymentAmount_);
      DARABONBA_PTR_TO_JSON(GaapPretaxAmount, gaapPretaxAmount_);
      DARABONBA_PTR_TO_JSON(GaapPretaxAmountLocal, gaapPretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(GaapPretaxGrossAmount, gaapPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(GaapPricingDiscount, gaapPricingDiscount_);
      DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_TO_JSON(MonthGaapDeductedByCashCoupons, monthGaapDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(MonthGaapDeductedByCoupons, monthGaapDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(MonthGaapDeductedByPrepaidCard, monthGaapDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(MonthGaapPaymentAmount, monthGaapPaymentAmount_);
      DARABONBA_PTR_TO_JSON(MonthGaapPretaxAmount, monthGaapPretaxAmount_);
      DARABONBA_PTR_TO_JSON(MonthGaapPretaxAmountLocal, monthGaapPretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(MonthGaapPretaxGrossAmount, monthGaapPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(MonthGaapPricingDiscount, monthGaapPricingDiscount_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(PayTime, payTime_);
      DARABONBA_PTR_TO_JSON(PayerAccount, payerAccount_);
      DARABONBA_PTR_TO_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_TO_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(PricingDiscount, pricingDiscount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(SubOrderId, subOrderId_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnallocatedDeductedByCashCoupons, unallocatedDeductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(UnallocatedDeductedByCoupons, unallocatedDeductedByCoupons_);
      DARABONBA_PTR_TO_JSON(UnallocatedDeductedByPrepaidCard, unallocatedDeductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(UnallocatedPaymentAmount, unallocatedPaymentAmount_);
      DARABONBA_PTR_TO_JSON(UnallocatedPretaxAmount, unallocatedPretaxAmount_);
      DARABONBA_PTR_TO_JSON(UnallocatedPretaxAmountLocal, unallocatedPretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(UnallocatedPretaxGrossAmount, unallocatedPretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(UnallocatedPricingDiscount, unallocatedPricingDiscount_);
      DARABONBA_PTR_TO_JSON(UsageEndDate, usageEndDate_);
      DARABONBA_PTR_TO_JSON(UsageStartDate, usageStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceGaapCostResponseBodyDataModulesModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountingUnit, accountingUnit_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(GaapDeductedByCashCoupons, gaapDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(GaapDeductedByCoupons, gaapDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(GaapDeductedByPrepaidCard, gaapDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(GaapPaymentAmount, gaapPaymentAmount_);
      DARABONBA_PTR_FROM_JSON(GaapPretaxAmount, gaapPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(GaapPretaxAmountLocal, gaapPretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(GaapPretaxGrossAmount, gaapPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(GaapPricingDiscount, gaapPricingDiscount_);
      DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
      DARABONBA_PTR_FROM_JSON(MonthGaapDeductedByCashCoupons, monthGaapDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(MonthGaapDeductedByCoupons, monthGaapDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(MonthGaapDeductedByPrepaidCard, monthGaapDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(MonthGaapPaymentAmount, monthGaapPaymentAmount_);
      DARABONBA_PTR_FROM_JSON(MonthGaapPretaxAmount, monthGaapPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(MonthGaapPretaxAmountLocal, monthGaapPretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(MonthGaapPretaxGrossAmount, monthGaapPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(MonthGaapPricingDiscount, monthGaapPricingDiscount_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(PayTime, payTime_);
      DARABONBA_PTR_FROM_JSON(PayerAccount, payerAccount_);
      DARABONBA_PTR_FROM_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_FROM_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(PricingDiscount, pricingDiscount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(SubOrderId, subOrderId_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnallocatedDeductedByCashCoupons, unallocatedDeductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(UnallocatedDeductedByCoupons, unallocatedDeductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(UnallocatedDeductedByPrepaidCard, unallocatedDeductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(UnallocatedPaymentAmount, unallocatedPaymentAmount_);
      DARABONBA_PTR_FROM_JSON(UnallocatedPretaxAmount, unallocatedPretaxAmount_);
      DARABONBA_PTR_FROM_JSON(UnallocatedPretaxAmountLocal, unallocatedPretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(UnallocatedPretaxGrossAmount, unallocatedPretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(UnallocatedPricingDiscount, unallocatedPricingDiscount_);
      DARABONBA_PTR_FROM_JSON(UsageEndDate, usageEndDate_);
      DARABONBA_PTR_FROM_JSON(UsageStartDate, usageStartDate_);
    };
    QueryInstanceGaapCostResponseBodyDataModulesModule() = default ;
    QueryInstanceGaapCostResponseBodyDataModulesModule(const QueryInstanceGaapCostResponseBodyDataModulesModule &) = default ;
    QueryInstanceGaapCostResponseBodyDataModulesModule(QueryInstanceGaapCostResponseBodyDataModulesModule &&) = default ;
    QueryInstanceGaapCostResponseBodyDataModulesModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceGaapCostResponseBodyDataModulesModule() = default ;
    QueryInstanceGaapCostResponseBodyDataModulesModule& operator=(const QueryInstanceGaapCostResponseBodyDataModulesModule &) = default ;
    QueryInstanceGaapCostResponseBodyDataModulesModule& operator=(QueryInstanceGaapCostResponseBodyDataModulesModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountingUnit_ != nullptr
        && this->billType_ != nullptr && this->billingCycle_ != nullptr && this->currency_ != nullptr && this->deductedByCashCoupons_ != nullptr && this->deductedByCoupons_ != nullptr
        && this->deductedByPrepaidCard_ != nullptr && this->gaapDeductedByCashCoupons_ != nullptr && this->gaapDeductedByCoupons_ != nullptr && this->gaapDeductedByPrepaidCard_ != nullptr && this->gaapPaymentAmount_ != nullptr
        && this->gaapPretaxAmount_ != nullptr && this->gaapPretaxAmountLocal_ != nullptr && this->gaapPretaxGrossAmount_ != nullptr && this->gaapPricingDiscount_ != nullptr && this->instanceID_ != nullptr
        && this->monthGaapDeductedByCashCoupons_ != nullptr && this->monthGaapDeductedByCoupons_ != nullptr && this->monthGaapDeductedByPrepaidCard_ != nullptr && this->monthGaapPaymentAmount_ != nullptr && this->monthGaapPretaxAmount_ != nullptr
        && this->monthGaapPretaxAmountLocal_ != nullptr && this->monthGaapPretaxGrossAmount_ != nullptr && this->monthGaapPricingDiscount_ != nullptr && this->orderId_ != nullptr && this->orderType_ != nullptr
        && this->ownerID_ != nullptr && this->payTime_ != nullptr && this->payerAccount_ != nullptr && this->paymentAmount_ != nullptr && this->paymentCurrency_ != nullptr
        && this->pretaxAmount_ != nullptr && this->pretaxAmountLocal_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->pricingDiscount_ != nullptr && this->productCode_ != nullptr
        && this->productType_ != nullptr && this->region_ != nullptr && this->resourceGroup_ != nullptr && this->subOrderId_ != nullptr && this->subscriptionType_ != nullptr
        && this->tag_ != nullptr && this->unallocatedDeductedByCashCoupons_ != nullptr && this->unallocatedDeductedByCoupons_ != nullptr && this->unallocatedDeductedByPrepaidCard_ != nullptr && this->unallocatedPaymentAmount_ != nullptr
        && this->unallocatedPretaxAmount_ != nullptr && this->unallocatedPretaxAmountLocal_ != nullptr && this->unallocatedPretaxGrossAmount_ != nullptr && this->unallocatedPricingDiscount_ != nullptr && this->usageEndDate_ != nullptr
        && this->usageStartDate_ != nullptr; };
    // accountingUnit Field Functions 
    bool hasAccountingUnit() const { return this->accountingUnit_ != nullptr;};
    void deleteAccountingUnit() { this->accountingUnit_ = nullptr;};
    inline string accountingUnit() const { DARABONBA_PTR_GET_DEFAULT(accountingUnit_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setAccountingUnit(string accountingUnit) { DARABONBA_PTR_SET_VALUE(accountingUnit_, accountingUnit) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductedByCashCoupons Field Functions 
    bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
    void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
    inline string deductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setDeductedByCashCoupons(string deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline string deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setDeductedByCoupons(string deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // deductedByPrepaidCard Field Functions 
    bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
    void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
    inline string deductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setDeductedByPrepaidCard(string deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


    // gaapDeductedByCashCoupons Field Functions 
    bool hasGaapDeductedByCashCoupons() const { return this->gaapDeductedByCashCoupons_ != nullptr;};
    void deleteGaapDeductedByCashCoupons() { this->gaapDeductedByCashCoupons_ = nullptr;};
    inline string gaapDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(gaapDeductedByCashCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapDeductedByCashCoupons(string gaapDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(gaapDeductedByCashCoupons_, gaapDeductedByCashCoupons) };


    // gaapDeductedByCoupons Field Functions 
    bool hasGaapDeductedByCoupons() const { return this->gaapDeductedByCoupons_ != nullptr;};
    void deleteGaapDeductedByCoupons() { this->gaapDeductedByCoupons_ = nullptr;};
    inline string gaapDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(gaapDeductedByCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapDeductedByCoupons(string gaapDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(gaapDeductedByCoupons_, gaapDeductedByCoupons) };


    // gaapDeductedByPrepaidCard Field Functions 
    bool hasGaapDeductedByPrepaidCard() const { return this->gaapDeductedByPrepaidCard_ != nullptr;};
    void deleteGaapDeductedByPrepaidCard() { this->gaapDeductedByPrepaidCard_ = nullptr;};
    inline string gaapDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(gaapDeductedByPrepaidCard_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapDeductedByPrepaidCard(string gaapDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(gaapDeductedByPrepaidCard_, gaapDeductedByPrepaidCard) };


    // gaapPaymentAmount Field Functions 
    bool hasGaapPaymentAmount() const { return this->gaapPaymentAmount_ != nullptr;};
    void deleteGaapPaymentAmount() { this->gaapPaymentAmount_ = nullptr;};
    inline string gaapPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(gaapPaymentAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapPaymentAmount(string gaapPaymentAmount) { DARABONBA_PTR_SET_VALUE(gaapPaymentAmount_, gaapPaymentAmount) };


    // gaapPretaxAmount Field Functions 
    bool hasGaapPretaxAmount() const { return this->gaapPretaxAmount_ != nullptr;};
    void deleteGaapPretaxAmount() { this->gaapPretaxAmount_ = nullptr;};
    inline string gaapPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(gaapPretaxAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapPretaxAmount(string gaapPretaxAmount) { DARABONBA_PTR_SET_VALUE(gaapPretaxAmount_, gaapPretaxAmount) };


    // gaapPretaxAmountLocal Field Functions 
    bool hasGaapPretaxAmountLocal() const { return this->gaapPretaxAmountLocal_ != nullptr;};
    void deleteGaapPretaxAmountLocal() { this->gaapPretaxAmountLocal_ = nullptr;};
    inline string gaapPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(gaapPretaxAmountLocal_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapPretaxAmountLocal(string gaapPretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(gaapPretaxAmountLocal_, gaapPretaxAmountLocal) };


    // gaapPretaxGrossAmount Field Functions 
    bool hasGaapPretaxGrossAmount() const { return this->gaapPretaxGrossAmount_ != nullptr;};
    void deleteGaapPretaxGrossAmount() { this->gaapPretaxGrossAmount_ = nullptr;};
    inline string gaapPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(gaapPretaxGrossAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapPretaxGrossAmount(string gaapPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(gaapPretaxGrossAmount_, gaapPretaxGrossAmount) };


    // gaapPricingDiscount Field Functions 
    bool hasGaapPricingDiscount() const { return this->gaapPricingDiscount_ != nullptr;};
    void deleteGaapPricingDiscount() { this->gaapPricingDiscount_ = nullptr;};
    inline string gaapPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(gaapPricingDiscount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setGaapPricingDiscount(string gaapPricingDiscount) { DARABONBA_PTR_SET_VALUE(gaapPricingDiscount_, gaapPricingDiscount) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // monthGaapDeductedByCashCoupons Field Functions 
    bool hasMonthGaapDeductedByCashCoupons() const { return this->monthGaapDeductedByCashCoupons_ != nullptr;};
    void deleteMonthGaapDeductedByCashCoupons() { this->monthGaapDeductedByCashCoupons_ = nullptr;};
    inline string monthGaapDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(monthGaapDeductedByCashCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapDeductedByCashCoupons(string monthGaapDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(monthGaapDeductedByCashCoupons_, monthGaapDeductedByCashCoupons) };


    // monthGaapDeductedByCoupons Field Functions 
    bool hasMonthGaapDeductedByCoupons() const { return this->monthGaapDeductedByCoupons_ != nullptr;};
    void deleteMonthGaapDeductedByCoupons() { this->monthGaapDeductedByCoupons_ = nullptr;};
    inline string monthGaapDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(monthGaapDeductedByCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapDeductedByCoupons(string monthGaapDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(monthGaapDeductedByCoupons_, monthGaapDeductedByCoupons) };


    // monthGaapDeductedByPrepaidCard Field Functions 
    bool hasMonthGaapDeductedByPrepaidCard() const { return this->monthGaapDeductedByPrepaidCard_ != nullptr;};
    void deleteMonthGaapDeductedByPrepaidCard() { this->monthGaapDeductedByPrepaidCard_ = nullptr;};
    inline string monthGaapDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(monthGaapDeductedByPrepaidCard_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapDeductedByPrepaidCard(string monthGaapDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(monthGaapDeductedByPrepaidCard_, monthGaapDeductedByPrepaidCard) };


    // monthGaapPaymentAmount Field Functions 
    bool hasMonthGaapPaymentAmount() const { return this->monthGaapPaymentAmount_ != nullptr;};
    void deleteMonthGaapPaymentAmount() { this->monthGaapPaymentAmount_ = nullptr;};
    inline string monthGaapPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPaymentAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapPaymentAmount(string monthGaapPaymentAmount) { DARABONBA_PTR_SET_VALUE(monthGaapPaymentAmount_, monthGaapPaymentAmount) };


    // monthGaapPretaxAmount Field Functions 
    bool hasMonthGaapPretaxAmount() const { return this->monthGaapPretaxAmount_ != nullptr;};
    void deleteMonthGaapPretaxAmount() { this->monthGaapPretaxAmount_ = nullptr;};
    inline string monthGaapPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPretaxAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapPretaxAmount(string monthGaapPretaxAmount) { DARABONBA_PTR_SET_VALUE(monthGaapPretaxAmount_, monthGaapPretaxAmount) };


    // monthGaapPretaxAmountLocal Field Functions 
    bool hasMonthGaapPretaxAmountLocal() const { return this->monthGaapPretaxAmountLocal_ != nullptr;};
    void deleteMonthGaapPretaxAmountLocal() { this->monthGaapPretaxAmountLocal_ = nullptr;};
    inline string monthGaapPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPretaxAmountLocal_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapPretaxAmountLocal(string monthGaapPretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(monthGaapPretaxAmountLocal_, monthGaapPretaxAmountLocal) };


    // monthGaapPretaxGrossAmount Field Functions 
    bool hasMonthGaapPretaxGrossAmount() const { return this->monthGaapPretaxGrossAmount_ != nullptr;};
    void deleteMonthGaapPretaxGrossAmount() { this->monthGaapPretaxGrossAmount_ = nullptr;};
    inline string monthGaapPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPretaxGrossAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapPretaxGrossAmount(string monthGaapPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(monthGaapPretaxGrossAmount_, monthGaapPretaxGrossAmount) };


    // monthGaapPricingDiscount Field Functions 
    bool hasMonthGaapPricingDiscount() const { return this->monthGaapPricingDiscount_ != nullptr;};
    void deleteMonthGaapPricingDiscount() { this->monthGaapPricingDiscount_ = nullptr;};
    inline string monthGaapPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPricingDiscount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setMonthGaapPricingDiscount(string monthGaapPricingDiscount) { DARABONBA_PTR_SET_VALUE(monthGaapPricingDiscount_, monthGaapPricingDiscount) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // payerAccount Field Functions 
    bool hasPayerAccount() const { return this->payerAccount_ != nullptr;};
    void deletePayerAccount() { this->payerAccount_ = nullptr;};
    inline string payerAccount() const { DARABONBA_PTR_GET_DEFAULT(payerAccount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPayerAccount(string payerAccount) { DARABONBA_PTR_SET_VALUE(payerAccount_, payerAccount) };


    // paymentAmount Field Functions 
    bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
    void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
    inline string paymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPaymentAmount(string paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


    // paymentCurrency Field Functions 
    bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
    void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
    inline string paymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline string pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxAmountLocal Field Functions 
    bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
    void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
    inline string pretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPretaxAmountLocal(string pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline string pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // pricingDiscount Field Functions 
    bool hasPricingDiscount() const { return this->pricingDiscount_ != nullptr;};
    void deletePricingDiscount() { this->pricingDiscount_ = nullptr;};
    inline string pricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(pricingDiscount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setPricingDiscount(string pricingDiscount) { DARABONBA_PTR_SET_VALUE(pricingDiscount_, pricingDiscount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // unallocatedDeductedByCashCoupons Field Functions 
    bool hasUnallocatedDeductedByCashCoupons() const { return this->unallocatedDeductedByCashCoupons_ != nullptr;};
    void deleteUnallocatedDeductedByCashCoupons() { this->unallocatedDeductedByCashCoupons_ = nullptr;};
    inline string unallocatedDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(unallocatedDeductedByCashCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedDeductedByCashCoupons(string unallocatedDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(unallocatedDeductedByCashCoupons_, unallocatedDeductedByCashCoupons) };


    // unallocatedDeductedByCoupons Field Functions 
    bool hasUnallocatedDeductedByCoupons() const { return this->unallocatedDeductedByCoupons_ != nullptr;};
    void deleteUnallocatedDeductedByCoupons() { this->unallocatedDeductedByCoupons_ = nullptr;};
    inline string unallocatedDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(unallocatedDeductedByCoupons_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedDeductedByCoupons(string unallocatedDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(unallocatedDeductedByCoupons_, unallocatedDeductedByCoupons) };


    // unallocatedDeductedByPrepaidCard Field Functions 
    bool hasUnallocatedDeductedByPrepaidCard() const { return this->unallocatedDeductedByPrepaidCard_ != nullptr;};
    void deleteUnallocatedDeductedByPrepaidCard() { this->unallocatedDeductedByPrepaidCard_ = nullptr;};
    inline string unallocatedDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(unallocatedDeductedByPrepaidCard_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedDeductedByPrepaidCard(string unallocatedDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(unallocatedDeductedByPrepaidCard_, unallocatedDeductedByPrepaidCard) };


    // unallocatedPaymentAmount Field Functions 
    bool hasUnallocatedPaymentAmount() const { return this->unallocatedPaymentAmount_ != nullptr;};
    void deleteUnallocatedPaymentAmount() { this->unallocatedPaymentAmount_ = nullptr;};
    inline string unallocatedPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPaymentAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedPaymentAmount(string unallocatedPaymentAmount) { DARABONBA_PTR_SET_VALUE(unallocatedPaymentAmount_, unallocatedPaymentAmount) };


    // unallocatedPretaxAmount Field Functions 
    bool hasUnallocatedPretaxAmount() const { return this->unallocatedPretaxAmount_ != nullptr;};
    void deleteUnallocatedPretaxAmount() { this->unallocatedPretaxAmount_ = nullptr;};
    inline string unallocatedPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPretaxAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedPretaxAmount(string unallocatedPretaxAmount) { DARABONBA_PTR_SET_VALUE(unallocatedPretaxAmount_, unallocatedPretaxAmount) };


    // unallocatedPretaxAmountLocal Field Functions 
    bool hasUnallocatedPretaxAmountLocal() const { return this->unallocatedPretaxAmountLocal_ != nullptr;};
    void deleteUnallocatedPretaxAmountLocal() { this->unallocatedPretaxAmountLocal_ = nullptr;};
    inline string unallocatedPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPretaxAmountLocal_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedPretaxAmountLocal(string unallocatedPretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(unallocatedPretaxAmountLocal_, unallocatedPretaxAmountLocal) };


    // unallocatedPretaxGrossAmount Field Functions 
    bool hasUnallocatedPretaxGrossAmount() const { return this->unallocatedPretaxGrossAmount_ != nullptr;};
    void deleteUnallocatedPretaxGrossAmount() { this->unallocatedPretaxGrossAmount_ = nullptr;};
    inline string unallocatedPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPretaxGrossAmount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedPretaxGrossAmount(string unallocatedPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(unallocatedPretaxGrossAmount_, unallocatedPretaxGrossAmount) };


    // unallocatedPricingDiscount Field Functions 
    bool hasUnallocatedPricingDiscount() const { return this->unallocatedPricingDiscount_ != nullptr;};
    void deleteUnallocatedPricingDiscount() { this->unallocatedPricingDiscount_ = nullptr;};
    inline string unallocatedPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPricingDiscount_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUnallocatedPricingDiscount(string unallocatedPricingDiscount) { DARABONBA_PTR_SET_VALUE(unallocatedPricingDiscount_, unallocatedPricingDiscount) };


    // usageEndDate Field Functions 
    bool hasUsageEndDate() const { return this->usageEndDate_ != nullptr;};
    void deleteUsageEndDate() { this->usageEndDate_ = nullptr;};
    inline string usageEndDate() const { DARABONBA_PTR_GET_DEFAULT(usageEndDate_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUsageEndDate(string usageEndDate) { DARABONBA_PTR_SET_VALUE(usageEndDate_, usageEndDate) };


    // usageStartDate Field Functions 
    bool hasUsageStartDate() const { return this->usageStartDate_ != nullptr;};
    void deleteUsageStartDate() { this->usageStartDate_ = nullptr;};
    inline string usageStartDate() const { DARABONBA_PTR_GET_DEFAULT(usageStartDate_, "") };
    inline QueryInstanceGaapCostResponseBodyDataModulesModule& setUsageStartDate(string usageStartDate) { DARABONBA_PTR_SET_VALUE(usageStartDate_, usageStartDate) };


  protected:
    std::shared_ptr<string> accountingUnit_ = nullptr;
    std::shared_ptr<string> billType_ = nullptr;
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> deductedByCashCoupons_ = nullptr;
    std::shared_ptr<string> deductedByCoupons_ = nullptr;
    std::shared_ptr<string> deductedByPrepaidCard_ = nullptr;
    std::shared_ptr<string> gaapDeductedByCashCoupons_ = nullptr;
    std::shared_ptr<string> gaapDeductedByCoupons_ = nullptr;
    std::shared_ptr<string> gaapDeductedByPrepaidCard_ = nullptr;
    std::shared_ptr<string> gaapPaymentAmount_ = nullptr;
    std::shared_ptr<string> gaapPretaxAmount_ = nullptr;
    std::shared_ptr<string> gaapPretaxAmountLocal_ = nullptr;
    std::shared_ptr<string> gaapPretaxGrossAmount_ = nullptr;
    std::shared_ptr<string> gaapPricingDiscount_ = nullptr;
    std::shared_ptr<string> instanceID_ = nullptr;
    std::shared_ptr<string> monthGaapDeductedByCashCoupons_ = nullptr;
    std::shared_ptr<string> monthGaapDeductedByCoupons_ = nullptr;
    std::shared_ptr<string> monthGaapDeductedByPrepaidCard_ = nullptr;
    std::shared_ptr<string> monthGaapPaymentAmount_ = nullptr;
    std::shared_ptr<string> monthGaapPretaxAmount_ = nullptr;
    std::shared_ptr<string> monthGaapPretaxAmountLocal_ = nullptr;
    std::shared_ptr<string> monthGaapPretaxGrossAmount_ = nullptr;
    std::shared_ptr<string> monthGaapPricingDiscount_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<string> ownerID_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<string> payerAccount_ = nullptr;
    std::shared_ptr<string> paymentAmount_ = nullptr;
    std::shared_ptr<string> paymentCurrency_ = nullptr;
    std::shared_ptr<string> pretaxAmount_ = nullptr;
    std::shared_ptr<string> pretaxAmountLocal_ = nullptr;
    std::shared_ptr<string> pretaxGrossAmount_ = nullptr;
    std::shared_ptr<string> pricingDiscount_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroup_ = nullptr;
    std::shared_ptr<string> subOrderId_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> unallocatedDeductedByCashCoupons_ = nullptr;
    std::shared_ptr<string> unallocatedDeductedByCoupons_ = nullptr;
    std::shared_ptr<string> unallocatedDeductedByPrepaidCard_ = nullptr;
    std::shared_ptr<string> unallocatedPaymentAmount_ = nullptr;
    std::shared_ptr<string> unallocatedPretaxAmount_ = nullptr;
    std::shared_ptr<string> unallocatedPretaxAmountLocal_ = nullptr;
    std::shared_ptr<string> unallocatedPretaxGrossAmount_ = nullptr;
    std::shared_ptr<string> unallocatedPricingDiscount_ = nullptr;
    std::shared_ptr<string> usageEndDate_ = nullptr;
    std::shared_ptr<string> usageStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
