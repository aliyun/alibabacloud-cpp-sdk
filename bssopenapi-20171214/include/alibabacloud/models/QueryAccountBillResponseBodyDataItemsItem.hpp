// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTBILLRESPONSEBODYDATAITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTBILLRESPONSEBODYDATAITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryAccountBillResponseBodyDataItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountBillResponseBodyDataItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustAmount, adjustAmount_);
      DARABONBA_PTR_TO_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_TO_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_TO_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(OutstandingAmount, outstandingAmount_);
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_TO_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountBillResponseBodyDataItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustAmount, adjustAmount_);
      DARABONBA_PTR_FROM_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_FROM_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_FROM_JSON(CostUnit, costUnit_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(OutstandingAmount, outstandingAmount_);
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(OwnerName, ownerName_);
      DARABONBA_PTR_FROM_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    QueryAccountBillResponseBodyDataItemsItem() = default ;
    QueryAccountBillResponseBodyDataItemsItem(const QueryAccountBillResponseBodyDataItemsItem &) = default ;
    QueryAccountBillResponseBodyDataItemsItem(QueryAccountBillResponseBodyDataItemsItem &&) = default ;
    QueryAccountBillResponseBodyDataItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountBillResponseBodyDataItemsItem() = default ;
    QueryAccountBillResponseBodyDataItemsItem& operator=(const QueryAccountBillResponseBodyDataItemsItem &) = default ;
    QueryAccountBillResponseBodyDataItemsItem& operator=(QueryAccountBillResponseBodyDataItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustAmount_ != nullptr
        && this->billAccountID_ != nullptr && this->billAccountName_ != nullptr && this->billingDate_ != nullptr && this->bizType_ != nullptr && this->cashAmount_ != nullptr
        && this->costUnit_ != nullptr && this->currency_ != nullptr && this->deductedByCashCoupons_ != nullptr && this->deductedByCoupons_ != nullptr && this->deductedByPrepaidCard_ != nullptr
        && this->invoiceDiscount_ != nullptr && this->outstandingAmount_ != nullptr && this->ownerID_ != nullptr && this->ownerName_ != nullptr && this->paymentAmount_ != nullptr
        && this->pipCode_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr
        && this->subscriptionType_ != nullptr; };
    // adjustAmount Field Functions 
    bool hasAdjustAmount() const { return this->adjustAmount_ != nullptr;};
    void deleteAdjustAmount() { this->adjustAmount_ = nullptr;};
    inline float adjustAmount() const { DARABONBA_PTR_GET_DEFAULT(adjustAmount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setAdjustAmount(float adjustAmount) { DARABONBA_PTR_SET_VALUE(adjustAmount_, adjustAmount) };


    // billAccountID Field Functions 
    bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
    void deleteBillAccountID() { this->billAccountID_ = nullptr;};
    inline string billAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setBillAccountID(string billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


    // billAccountName Field Functions 
    bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
    void deleteBillAccountName() { this->billAccountName_ = nullptr;};
    inline string billAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string billingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline float cashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setCashAmount(float cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // costUnit Field Functions 
    bool hasCostUnit() const { return this->costUnit_ != nullptr;};
    void deleteCostUnit() { this->costUnit_ = nullptr;};
    inline string costUnit() const { DARABONBA_PTR_GET_DEFAULT(costUnit_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setCostUnit(string costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductedByCashCoupons Field Functions 
    bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
    void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
    inline float deductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setDeductedByCashCoupons(float deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline float deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setDeductedByCoupons(float deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // deductedByPrepaidCard Field Functions 
    bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
    void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
    inline float deductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setDeductedByPrepaidCard(float deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline float invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // outstandingAmount Field Functions 
    bool hasOutstandingAmount() const { return this->outstandingAmount_ != nullptr;};
    void deleteOutstandingAmount() { this->outstandingAmount_ = nullptr;};
    inline float outstandingAmount() const { DARABONBA_PTR_GET_DEFAULT(outstandingAmount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setOutstandingAmount(float outstandingAmount) { DARABONBA_PTR_SET_VALUE(outstandingAmount_, outstandingAmount) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // ownerName Field Functions 
    bool hasOwnerName() const { return this->ownerName_ != nullptr;};
    void deleteOwnerName() { this->ownerName_ = nullptr;};
    inline string ownerName() const { DARABONBA_PTR_GET_DEFAULT(ownerName_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setOwnerName(string ownerName) { DARABONBA_PTR_SET_VALUE(ownerName_, ownerName) };


    // paymentAmount Field Functions 
    bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
    void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
    inline float paymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setPaymentAmount(float paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string pipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline float pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setPretaxAmount(float pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline float pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
    inline QueryAccountBillResponseBodyDataItemsItem& setPretaxGrossAmount(float pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryAccountBillResponseBodyDataItemsItem& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The amount deducted by using credit refunds.
    std::shared_ptr<float> adjustAmount_ = nullptr;
    // The ID of the account to which the bill belongs.
    std::shared_ptr<string> billAccountID_ = nullptr;
    // The name of the account to which the bill belongs.
    std::shared_ptr<string> billAccountName_ = nullptr;
    // The billing date.
    std::shared_ptr<string> billingDate_ = nullptr;
    // The business type.
    std::shared_ptr<string> bizType_ = nullptr;
    // The amount paid in cash. The amount that was deducted by using credit refunds is not included.
    std::shared_ptr<float> cashAmount_ = nullptr;
    // The cost center.
    std::shared_ptr<string> costUnit_ = nullptr;
    // The type of the currency. Valid values:
    // 
    // *   CNY
    // *   USD
    // *   JPY
    std::shared_ptr<string> currency_ = nullptr;
    // The amount deducted by using vouchers.
    std::shared_ptr<float> deductedByCashCoupons_ = nullptr;
    // The amount deducted by using coupons.
    std::shared_ptr<float> deductedByCoupons_ = nullptr;
    // The amount deducted by using prepaid cards.
    std::shared_ptr<float> deductedByPrepaidCard_ = nullptr;
    // The discount amount.
    std::shared_ptr<float> invoiceDiscount_ = nullptr;
    // The unsettled amount or the amount settled with credits.
    std::shared_ptr<float> outstandingAmount_ = nullptr;
    // The ID of the member.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The name of the member.
    std::shared_ptr<string> ownerName_ = nullptr;
    // The amount paid in cash. The amount that was deducted by using credit refunds is included.
    std::shared_ptr<float> paymentAmount_ = nullptr;
    // The code of the service. The service code is consistent with that displayed in User Center.
    std::shared_ptr<string> pipCode_ = nullptr;
    // The pretax amount.
    std::shared_ptr<float> pretaxAmount_ = nullptr;
    // The pretax gross amount.
    std::shared_ptr<float> pretaxGrossAmount_ = nullptr;
    // The code of the service.
    // 
    // > A value is returned only if the **IsGroupByProduct** parameter is set to true.
    std::shared_ptr<string> productCode_ = nullptr;
    // The name of the service.
    // 
    // > A value is returned only if the **IsGroupByProduct** parameter is set to true.
    std::shared_ptr<string> productName_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method
    // *   PayAsYouGo: the pay-as-you-go billing method
    // 
    // > A value is returned only if the IsGroupByProduct parameter is set to true.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
