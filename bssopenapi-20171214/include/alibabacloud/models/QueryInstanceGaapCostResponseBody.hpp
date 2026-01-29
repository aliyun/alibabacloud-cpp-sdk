// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEGAAPCOSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryInstanceGaapCostResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceGaapCostResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceGaapCostResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryInstanceGaapCostResponseBody() = default ;
    QueryInstanceGaapCostResponseBody(const QueryInstanceGaapCostResponseBody &) = default ;
    QueryInstanceGaapCostResponseBody(QueryInstanceGaapCostResponseBody &&) = default ;
    QueryInstanceGaapCostResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceGaapCostResponseBody() = default ;
    QueryInstanceGaapCostResponseBody& operator=(const QueryInstanceGaapCostResponseBody &) = default ;
    QueryInstanceGaapCostResponseBody& operator=(QueryInstanceGaapCostResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(HostId, hostId_);
        DARABONBA_PTR_TO_JSON(Modules, modules_);
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(HostId, hostId_);
        DARABONBA_PTR_FROM_JSON(Modules, modules_);
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Modules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Modules& obj) { 
          DARABONBA_PTR_TO_JSON(Module, module_);
        };
        friend void from_json(const Darabonba::Json& j, Modules& obj) { 
          DARABONBA_PTR_FROM_JSON(Module, module_);
        };
        Modules() = default ;
        Modules(const Modules &) = default ;
        Modules(Modules &&) = default ;
        Modules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Modules() = default ;
        Modules& operator=(const Modules &) = default ;
        Modules& operator=(Modules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Module : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Module& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Module& obj) { 
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
          Module() = default ;
          Module(const Module &) = default ;
          Module(Module &&) = default ;
          Module(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Module() = default ;
          Module& operator=(const Module &) = default ;
          Module& operator=(Module &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountingUnit_ == nullptr
        && this->billType_ == nullptr && this->billingCycle_ == nullptr && this->currency_ == nullptr && this->deductedByCashCoupons_ == nullptr && this->deductedByCoupons_ == nullptr
        && this->deductedByPrepaidCard_ == nullptr && this->gaapDeductedByCashCoupons_ == nullptr && this->gaapDeductedByCoupons_ == nullptr && this->gaapDeductedByPrepaidCard_ == nullptr && this->gaapPaymentAmount_ == nullptr
        && this->gaapPretaxAmount_ == nullptr && this->gaapPretaxAmountLocal_ == nullptr && this->gaapPretaxGrossAmount_ == nullptr && this->gaapPricingDiscount_ == nullptr && this->instanceID_ == nullptr
        && this->monthGaapDeductedByCashCoupons_ == nullptr && this->monthGaapDeductedByCoupons_ == nullptr && this->monthGaapDeductedByPrepaidCard_ == nullptr && this->monthGaapPaymentAmount_ == nullptr && this->monthGaapPretaxAmount_ == nullptr
        && this->monthGaapPretaxAmountLocal_ == nullptr && this->monthGaapPretaxGrossAmount_ == nullptr && this->monthGaapPricingDiscount_ == nullptr && this->orderId_ == nullptr && this->orderType_ == nullptr
        && this->ownerID_ == nullptr && this->payTime_ == nullptr && this->payerAccount_ == nullptr && this->paymentAmount_ == nullptr && this->paymentCurrency_ == nullptr
        && this->pretaxAmount_ == nullptr && this->pretaxAmountLocal_ == nullptr && this->pretaxGrossAmount_ == nullptr && this->pricingDiscount_ == nullptr && this->productCode_ == nullptr
        && this->productType_ == nullptr && this->region_ == nullptr && this->resourceGroup_ == nullptr && this->subOrderId_ == nullptr && this->subscriptionType_ == nullptr
        && this->tag_ == nullptr && this->unallocatedDeductedByCashCoupons_ == nullptr && this->unallocatedDeductedByCoupons_ == nullptr && this->unallocatedDeductedByPrepaidCard_ == nullptr && this->unallocatedPaymentAmount_ == nullptr
        && this->unallocatedPretaxAmount_ == nullptr && this->unallocatedPretaxAmountLocal_ == nullptr && this->unallocatedPretaxGrossAmount_ == nullptr && this->unallocatedPricingDiscount_ == nullptr && this->usageEndDate_ == nullptr
        && this->usageStartDate_ == nullptr; };
          // accountingUnit Field Functions 
          bool hasAccountingUnit() const { return this->accountingUnit_ != nullptr;};
          void deleteAccountingUnit() { this->accountingUnit_ = nullptr;};
          inline string getAccountingUnit() const { DARABONBA_PTR_GET_DEFAULT(accountingUnit_, "") };
          inline Module& setAccountingUnit(string accountingUnit) { DARABONBA_PTR_SET_VALUE(accountingUnit_, accountingUnit) };


          // billType Field Functions 
          bool hasBillType() const { return this->billType_ != nullptr;};
          void deleteBillType() { this->billType_ = nullptr;};
          inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
          inline Module& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


          // billingCycle Field Functions 
          bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
          void deleteBillingCycle() { this->billingCycle_ = nullptr;};
          inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
          inline Module& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Module& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // deductedByCashCoupons Field Functions 
          bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
          void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
          inline string getDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, "") };
          inline Module& setDeductedByCashCoupons(string deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


          // deductedByCoupons Field Functions 
          bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
          void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
          inline string getDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, "") };
          inline Module& setDeductedByCoupons(string deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


          // deductedByPrepaidCard Field Functions 
          bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
          void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
          inline string getDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, "") };
          inline Module& setDeductedByPrepaidCard(string deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


          // gaapDeductedByCashCoupons Field Functions 
          bool hasGaapDeductedByCashCoupons() const { return this->gaapDeductedByCashCoupons_ != nullptr;};
          void deleteGaapDeductedByCashCoupons() { this->gaapDeductedByCashCoupons_ = nullptr;};
          inline string getGaapDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(gaapDeductedByCashCoupons_, "") };
          inline Module& setGaapDeductedByCashCoupons(string gaapDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(gaapDeductedByCashCoupons_, gaapDeductedByCashCoupons) };


          // gaapDeductedByCoupons Field Functions 
          bool hasGaapDeductedByCoupons() const { return this->gaapDeductedByCoupons_ != nullptr;};
          void deleteGaapDeductedByCoupons() { this->gaapDeductedByCoupons_ = nullptr;};
          inline string getGaapDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(gaapDeductedByCoupons_, "") };
          inline Module& setGaapDeductedByCoupons(string gaapDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(gaapDeductedByCoupons_, gaapDeductedByCoupons) };


          // gaapDeductedByPrepaidCard Field Functions 
          bool hasGaapDeductedByPrepaidCard() const { return this->gaapDeductedByPrepaidCard_ != nullptr;};
          void deleteGaapDeductedByPrepaidCard() { this->gaapDeductedByPrepaidCard_ = nullptr;};
          inline string getGaapDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(gaapDeductedByPrepaidCard_, "") };
          inline Module& setGaapDeductedByPrepaidCard(string gaapDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(gaapDeductedByPrepaidCard_, gaapDeductedByPrepaidCard) };


          // gaapPaymentAmount Field Functions 
          bool hasGaapPaymentAmount() const { return this->gaapPaymentAmount_ != nullptr;};
          void deleteGaapPaymentAmount() { this->gaapPaymentAmount_ = nullptr;};
          inline string getGaapPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(gaapPaymentAmount_, "") };
          inline Module& setGaapPaymentAmount(string gaapPaymentAmount) { DARABONBA_PTR_SET_VALUE(gaapPaymentAmount_, gaapPaymentAmount) };


          // gaapPretaxAmount Field Functions 
          bool hasGaapPretaxAmount() const { return this->gaapPretaxAmount_ != nullptr;};
          void deleteGaapPretaxAmount() { this->gaapPretaxAmount_ = nullptr;};
          inline string getGaapPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(gaapPretaxAmount_, "") };
          inline Module& setGaapPretaxAmount(string gaapPretaxAmount) { DARABONBA_PTR_SET_VALUE(gaapPretaxAmount_, gaapPretaxAmount) };


          // gaapPretaxAmountLocal Field Functions 
          bool hasGaapPretaxAmountLocal() const { return this->gaapPretaxAmountLocal_ != nullptr;};
          void deleteGaapPretaxAmountLocal() { this->gaapPretaxAmountLocal_ = nullptr;};
          inline string getGaapPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(gaapPretaxAmountLocal_, "") };
          inline Module& setGaapPretaxAmountLocal(string gaapPretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(gaapPretaxAmountLocal_, gaapPretaxAmountLocal) };


          // gaapPretaxGrossAmount Field Functions 
          bool hasGaapPretaxGrossAmount() const { return this->gaapPretaxGrossAmount_ != nullptr;};
          void deleteGaapPretaxGrossAmount() { this->gaapPretaxGrossAmount_ = nullptr;};
          inline string getGaapPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(gaapPretaxGrossAmount_, "") };
          inline Module& setGaapPretaxGrossAmount(string gaapPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(gaapPretaxGrossAmount_, gaapPretaxGrossAmount) };


          // gaapPricingDiscount Field Functions 
          bool hasGaapPricingDiscount() const { return this->gaapPricingDiscount_ != nullptr;};
          void deleteGaapPricingDiscount() { this->gaapPricingDiscount_ = nullptr;};
          inline string getGaapPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(gaapPricingDiscount_, "") };
          inline Module& setGaapPricingDiscount(string gaapPricingDiscount) { DARABONBA_PTR_SET_VALUE(gaapPricingDiscount_, gaapPricingDiscount) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline Module& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // monthGaapDeductedByCashCoupons Field Functions 
          bool hasMonthGaapDeductedByCashCoupons() const { return this->monthGaapDeductedByCashCoupons_ != nullptr;};
          void deleteMonthGaapDeductedByCashCoupons() { this->monthGaapDeductedByCashCoupons_ = nullptr;};
          inline string getMonthGaapDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(monthGaapDeductedByCashCoupons_, "") };
          inline Module& setMonthGaapDeductedByCashCoupons(string monthGaapDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(monthGaapDeductedByCashCoupons_, monthGaapDeductedByCashCoupons) };


          // monthGaapDeductedByCoupons Field Functions 
          bool hasMonthGaapDeductedByCoupons() const { return this->monthGaapDeductedByCoupons_ != nullptr;};
          void deleteMonthGaapDeductedByCoupons() { this->monthGaapDeductedByCoupons_ = nullptr;};
          inline string getMonthGaapDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(monthGaapDeductedByCoupons_, "") };
          inline Module& setMonthGaapDeductedByCoupons(string monthGaapDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(monthGaapDeductedByCoupons_, monthGaapDeductedByCoupons) };


          // monthGaapDeductedByPrepaidCard Field Functions 
          bool hasMonthGaapDeductedByPrepaidCard() const { return this->monthGaapDeductedByPrepaidCard_ != nullptr;};
          void deleteMonthGaapDeductedByPrepaidCard() { this->monthGaapDeductedByPrepaidCard_ = nullptr;};
          inline string getMonthGaapDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(monthGaapDeductedByPrepaidCard_, "") };
          inline Module& setMonthGaapDeductedByPrepaidCard(string monthGaapDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(monthGaapDeductedByPrepaidCard_, monthGaapDeductedByPrepaidCard) };


          // monthGaapPaymentAmount Field Functions 
          bool hasMonthGaapPaymentAmount() const { return this->monthGaapPaymentAmount_ != nullptr;};
          void deleteMonthGaapPaymentAmount() { this->monthGaapPaymentAmount_ = nullptr;};
          inline string getMonthGaapPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPaymentAmount_, "") };
          inline Module& setMonthGaapPaymentAmount(string monthGaapPaymentAmount) { DARABONBA_PTR_SET_VALUE(monthGaapPaymentAmount_, monthGaapPaymentAmount) };


          // monthGaapPretaxAmount Field Functions 
          bool hasMonthGaapPretaxAmount() const { return this->monthGaapPretaxAmount_ != nullptr;};
          void deleteMonthGaapPretaxAmount() { this->monthGaapPretaxAmount_ = nullptr;};
          inline string getMonthGaapPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPretaxAmount_, "") };
          inline Module& setMonthGaapPretaxAmount(string monthGaapPretaxAmount) { DARABONBA_PTR_SET_VALUE(monthGaapPretaxAmount_, monthGaapPretaxAmount) };


          // monthGaapPretaxAmountLocal Field Functions 
          bool hasMonthGaapPretaxAmountLocal() const { return this->monthGaapPretaxAmountLocal_ != nullptr;};
          void deleteMonthGaapPretaxAmountLocal() { this->monthGaapPretaxAmountLocal_ = nullptr;};
          inline string getMonthGaapPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPretaxAmountLocal_, "") };
          inline Module& setMonthGaapPretaxAmountLocal(string monthGaapPretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(monthGaapPretaxAmountLocal_, monthGaapPretaxAmountLocal) };


          // monthGaapPretaxGrossAmount Field Functions 
          bool hasMonthGaapPretaxGrossAmount() const { return this->monthGaapPretaxGrossAmount_ != nullptr;};
          void deleteMonthGaapPretaxGrossAmount() { this->monthGaapPretaxGrossAmount_ = nullptr;};
          inline string getMonthGaapPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPretaxGrossAmount_, "") };
          inline Module& setMonthGaapPretaxGrossAmount(string monthGaapPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(monthGaapPretaxGrossAmount_, monthGaapPretaxGrossAmount) };


          // monthGaapPricingDiscount Field Functions 
          bool hasMonthGaapPricingDiscount() const { return this->monthGaapPricingDiscount_ != nullptr;};
          void deleteMonthGaapPricingDiscount() { this->monthGaapPricingDiscount_ = nullptr;};
          inline string getMonthGaapPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(monthGaapPricingDiscount_, "") };
          inline Module& setMonthGaapPricingDiscount(string monthGaapPricingDiscount) { DARABONBA_PTR_SET_VALUE(monthGaapPricingDiscount_, monthGaapPricingDiscount) };


          // orderId Field Functions 
          bool hasOrderId() const { return this->orderId_ != nullptr;};
          void deleteOrderId() { this->orderId_ = nullptr;};
          inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
          inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


          // orderType Field Functions 
          bool hasOrderType() const { return this->orderType_ != nullptr;};
          void deleteOrderType() { this->orderType_ = nullptr;};
          inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
          inline Module& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


          // ownerID Field Functions 
          bool hasOwnerID() const { return this->ownerID_ != nullptr;};
          void deleteOwnerID() { this->ownerID_ = nullptr;};
          inline string getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
          inline Module& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


          // payTime Field Functions 
          bool hasPayTime() const { return this->payTime_ != nullptr;};
          void deletePayTime() { this->payTime_ = nullptr;};
          inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
          inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


          // payerAccount Field Functions 
          bool hasPayerAccount() const { return this->payerAccount_ != nullptr;};
          void deletePayerAccount() { this->payerAccount_ = nullptr;};
          inline string getPayerAccount() const { DARABONBA_PTR_GET_DEFAULT(payerAccount_, "") };
          inline Module& setPayerAccount(string payerAccount) { DARABONBA_PTR_SET_VALUE(payerAccount_, payerAccount) };


          // paymentAmount Field Functions 
          bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
          void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
          inline string getPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, "") };
          inline Module& setPaymentAmount(string paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


          // paymentCurrency Field Functions 
          bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
          void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
          inline string getPaymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
          inline Module& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


          // pretaxAmount Field Functions 
          bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
          void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
          inline string getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, "") };
          inline Module& setPretaxAmount(string pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


          // pretaxAmountLocal Field Functions 
          bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
          void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
          inline string getPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, "") };
          inline Module& setPretaxAmountLocal(string pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


          // pretaxGrossAmount Field Functions 
          bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
          void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
          inline string getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, "") };
          inline Module& setPretaxGrossAmount(string pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


          // pricingDiscount Field Functions 
          bool hasPricingDiscount() const { return this->pricingDiscount_ != nullptr;};
          void deletePricingDiscount() { this->pricingDiscount_ = nullptr;};
          inline string getPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(pricingDiscount_, "") };
          inline Module& setPricingDiscount(string pricingDiscount) { DARABONBA_PTR_SET_VALUE(pricingDiscount_, pricingDiscount) };


          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline Module& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline Module& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Module& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // resourceGroup Field Functions 
          bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
          void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
          inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
          inline Module& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


          // subOrderId Field Functions 
          bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
          void deleteSubOrderId() { this->subOrderId_ = nullptr;};
          inline string getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
          inline Module& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


          // subscriptionType Field Functions 
          bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
          void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
          inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
          inline Module& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Module& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // unallocatedDeductedByCashCoupons Field Functions 
          bool hasUnallocatedDeductedByCashCoupons() const { return this->unallocatedDeductedByCashCoupons_ != nullptr;};
          void deleteUnallocatedDeductedByCashCoupons() { this->unallocatedDeductedByCashCoupons_ = nullptr;};
          inline string getUnallocatedDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(unallocatedDeductedByCashCoupons_, "") };
          inline Module& setUnallocatedDeductedByCashCoupons(string unallocatedDeductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(unallocatedDeductedByCashCoupons_, unallocatedDeductedByCashCoupons) };


          // unallocatedDeductedByCoupons Field Functions 
          bool hasUnallocatedDeductedByCoupons() const { return this->unallocatedDeductedByCoupons_ != nullptr;};
          void deleteUnallocatedDeductedByCoupons() { this->unallocatedDeductedByCoupons_ = nullptr;};
          inline string getUnallocatedDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(unallocatedDeductedByCoupons_, "") };
          inline Module& setUnallocatedDeductedByCoupons(string unallocatedDeductedByCoupons) { DARABONBA_PTR_SET_VALUE(unallocatedDeductedByCoupons_, unallocatedDeductedByCoupons) };


          // unallocatedDeductedByPrepaidCard Field Functions 
          bool hasUnallocatedDeductedByPrepaidCard() const { return this->unallocatedDeductedByPrepaidCard_ != nullptr;};
          void deleteUnallocatedDeductedByPrepaidCard() { this->unallocatedDeductedByPrepaidCard_ = nullptr;};
          inline string getUnallocatedDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(unallocatedDeductedByPrepaidCard_, "") };
          inline Module& setUnallocatedDeductedByPrepaidCard(string unallocatedDeductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(unallocatedDeductedByPrepaidCard_, unallocatedDeductedByPrepaidCard) };


          // unallocatedPaymentAmount Field Functions 
          bool hasUnallocatedPaymentAmount() const { return this->unallocatedPaymentAmount_ != nullptr;};
          void deleteUnallocatedPaymentAmount() { this->unallocatedPaymentAmount_ = nullptr;};
          inline string getUnallocatedPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPaymentAmount_, "") };
          inline Module& setUnallocatedPaymentAmount(string unallocatedPaymentAmount) { DARABONBA_PTR_SET_VALUE(unallocatedPaymentAmount_, unallocatedPaymentAmount) };


          // unallocatedPretaxAmount Field Functions 
          bool hasUnallocatedPretaxAmount() const { return this->unallocatedPretaxAmount_ != nullptr;};
          void deleteUnallocatedPretaxAmount() { this->unallocatedPretaxAmount_ = nullptr;};
          inline string getUnallocatedPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPretaxAmount_, "") };
          inline Module& setUnallocatedPretaxAmount(string unallocatedPretaxAmount) { DARABONBA_PTR_SET_VALUE(unallocatedPretaxAmount_, unallocatedPretaxAmount) };


          // unallocatedPretaxAmountLocal Field Functions 
          bool hasUnallocatedPretaxAmountLocal() const { return this->unallocatedPretaxAmountLocal_ != nullptr;};
          void deleteUnallocatedPretaxAmountLocal() { this->unallocatedPretaxAmountLocal_ = nullptr;};
          inline string getUnallocatedPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPretaxAmountLocal_, "") };
          inline Module& setUnallocatedPretaxAmountLocal(string unallocatedPretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(unallocatedPretaxAmountLocal_, unallocatedPretaxAmountLocal) };


          // unallocatedPretaxGrossAmount Field Functions 
          bool hasUnallocatedPretaxGrossAmount() const { return this->unallocatedPretaxGrossAmount_ != nullptr;};
          void deleteUnallocatedPretaxGrossAmount() { this->unallocatedPretaxGrossAmount_ = nullptr;};
          inline string getUnallocatedPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPretaxGrossAmount_, "") };
          inline Module& setUnallocatedPretaxGrossAmount(string unallocatedPretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(unallocatedPretaxGrossAmount_, unallocatedPretaxGrossAmount) };


          // unallocatedPricingDiscount Field Functions 
          bool hasUnallocatedPricingDiscount() const { return this->unallocatedPricingDiscount_ != nullptr;};
          void deleteUnallocatedPricingDiscount() { this->unallocatedPricingDiscount_ = nullptr;};
          inline string getUnallocatedPricingDiscount() const { DARABONBA_PTR_GET_DEFAULT(unallocatedPricingDiscount_, "") };
          inline Module& setUnallocatedPricingDiscount(string unallocatedPricingDiscount) { DARABONBA_PTR_SET_VALUE(unallocatedPricingDiscount_, unallocatedPricingDiscount) };


          // usageEndDate Field Functions 
          bool hasUsageEndDate() const { return this->usageEndDate_ != nullptr;};
          void deleteUsageEndDate() { this->usageEndDate_ = nullptr;};
          inline string getUsageEndDate() const { DARABONBA_PTR_GET_DEFAULT(usageEndDate_, "") };
          inline Module& setUsageEndDate(string usageEndDate) { DARABONBA_PTR_SET_VALUE(usageEndDate_, usageEndDate) };


          // usageStartDate Field Functions 
          bool hasUsageStartDate() const { return this->usageStartDate_ != nullptr;};
          void deleteUsageStartDate() { this->usageStartDate_ = nullptr;};
          inline string getUsageStartDate() const { DARABONBA_PTR_GET_DEFAULT(usageStartDate_, "") };
          inline Module& setUsageStartDate(string usageStartDate) { DARABONBA_PTR_SET_VALUE(usageStartDate_, usageStartDate) };


        protected:
          shared_ptr<string> accountingUnit_ {};
          shared_ptr<string> billType_ {};
          shared_ptr<string> billingCycle_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> deductedByCashCoupons_ {};
          shared_ptr<string> deductedByCoupons_ {};
          shared_ptr<string> deductedByPrepaidCard_ {};
          shared_ptr<string> gaapDeductedByCashCoupons_ {};
          shared_ptr<string> gaapDeductedByCoupons_ {};
          shared_ptr<string> gaapDeductedByPrepaidCard_ {};
          shared_ptr<string> gaapPaymentAmount_ {};
          shared_ptr<string> gaapPretaxAmount_ {};
          shared_ptr<string> gaapPretaxAmountLocal_ {};
          shared_ptr<string> gaapPretaxGrossAmount_ {};
          shared_ptr<string> gaapPricingDiscount_ {};
          shared_ptr<string> instanceID_ {};
          shared_ptr<string> monthGaapDeductedByCashCoupons_ {};
          shared_ptr<string> monthGaapDeductedByCoupons_ {};
          shared_ptr<string> monthGaapDeductedByPrepaidCard_ {};
          shared_ptr<string> monthGaapPaymentAmount_ {};
          shared_ptr<string> monthGaapPretaxAmount_ {};
          shared_ptr<string> monthGaapPretaxAmountLocal_ {};
          shared_ptr<string> monthGaapPretaxGrossAmount_ {};
          shared_ptr<string> monthGaapPricingDiscount_ {};
          shared_ptr<string> orderId_ {};
          shared_ptr<string> orderType_ {};
          shared_ptr<string> ownerID_ {};
          shared_ptr<string> payTime_ {};
          shared_ptr<string> payerAccount_ {};
          shared_ptr<string> paymentAmount_ {};
          shared_ptr<string> paymentCurrency_ {};
          shared_ptr<string> pretaxAmount_ {};
          shared_ptr<string> pretaxAmountLocal_ {};
          shared_ptr<string> pretaxGrossAmount_ {};
          shared_ptr<string> pricingDiscount_ {};
          shared_ptr<string> productCode_ {};
          shared_ptr<string> productType_ {};
          shared_ptr<string> region_ {};
          shared_ptr<string> resourceGroup_ {};
          shared_ptr<string> subOrderId_ {};
          shared_ptr<string> subscriptionType_ {};
          shared_ptr<string> tag_ {};
          shared_ptr<string> unallocatedDeductedByCashCoupons_ {};
          shared_ptr<string> unallocatedDeductedByCoupons_ {};
          shared_ptr<string> unallocatedDeductedByPrepaidCard_ {};
          shared_ptr<string> unallocatedPaymentAmount_ {};
          shared_ptr<string> unallocatedPretaxAmount_ {};
          shared_ptr<string> unallocatedPretaxAmountLocal_ {};
          shared_ptr<string> unallocatedPretaxGrossAmount_ {};
          shared_ptr<string> unallocatedPricingDiscount_ {};
          shared_ptr<string> usageEndDate_ {};
          shared_ptr<string> usageStartDate_ {};
        };

        virtual bool empty() const override { return this->module_ == nullptr; };
        // module Field Functions 
        bool hasModule() const { return this->module_ != nullptr;};
        void deleteModule() { this->module_ = nullptr;};
        inline const vector<Modules::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<Modules::Module>) };
        inline vector<Modules::Module> getModule() { DARABONBA_PTR_GET(module_, vector<Modules::Module>) };
        inline Modules& setModule(const vector<Modules::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
        inline Modules& setModule(vector<Modules::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


      protected:
        shared_ptr<vector<Modules::Module>> module_ {};
      };

      virtual bool empty() const override { return this->hostId_ == nullptr
        && this->modules_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // hostId Field Functions 
      bool hasHostId() const { return this->hostId_ != nullptr;};
      void deleteHostId() { this->hostId_ = nullptr;};
      inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
      inline Data& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


      // modules Field Functions 
      bool hasModules() const { return this->modules_ != nullptr;};
      void deleteModules() { this->modules_ = nullptr;};
      inline const Data::Modules & getModules() const { DARABONBA_PTR_GET_CONST(modules_, Data::Modules) };
      inline Data::Modules getModules() { DARABONBA_PTR_GET(modules_, Data::Modules) };
      inline Data& setModules(const Data::Modules & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
      inline Data& setModules(Data::Modules && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline Data& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<string> hostId_ {};
      shared_ptr<Data::Modules> modules_ {};
      shared_ptr<int32_t> pageNum_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryInstanceGaapCostResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInstanceGaapCostResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryInstanceGaapCostResponseBody::Data) };
    inline QueryInstanceGaapCostResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryInstanceGaapCostResponseBody::Data) };
    inline QueryInstanceGaapCostResponseBody& setData(const QueryInstanceGaapCostResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInstanceGaapCostResponseBody& setData(QueryInstanceGaapCostResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInstanceGaapCostResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInstanceGaapCostResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryInstanceGaapCostResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryInstanceGaapCostResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
