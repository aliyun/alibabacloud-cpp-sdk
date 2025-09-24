// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODYDATAITEMSITEM_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODYDATAITEMSITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryBillOverviewResponseBodyDataItemsItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillOverviewResponseBodyDataItemsItem& obj) { 
      DARABONBA_PTR_TO_JSON(AdjustAmount, adjustAmount_);
      DARABONBA_PTR_TO_JSON(AfterTaxAmount, afterTaxAmount_);
      DARABONBA_PTR_TO_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_TO_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_TO_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(OutstandingAmount, outstandingAmount_);
      DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_TO_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_TO_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
      DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_TO_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tax, tax_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillOverviewResponseBodyDataItemsItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AdjustAmount, adjustAmount_);
      DARABONBA_PTR_FROM_JSON(AfterTaxAmount, afterTaxAmount_);
      DARABONBA_PTR_FROM_JSON(BillAccountID, billAccountID_);
      DARABONBA_PTR_FROM_JSON(BillAccountName, billAccountName_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CashAmount, cashAmount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByCoupons, deductedByCoupons_);
      DARABONBA_PTR_FROM_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
      DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(OutstandingAmount, outstandingAmount_);
      DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
      DARABONBA_PTR_FROM_JSON(PaymentAmount, paymentAmount_);
      DARABONBA_PTR_FROM_JSON(PaymentCurrency, paymentCurrency_);
      DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
      DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
      DARABONBA_PTR_FROM_JSON(PretaxAmountLocal, pretaxAmountLocal_);
      DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RoundDownDiscount, roundDownDiscount_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tax, tax_);
    };
    QueryBillOverviewResponseBodyDataItemsItem() = default ;
    QueryBillOverviewResponseBodyDataItemsItem(const QueryBillOverviewResponseBodyDataItemsItem &) = default ;
    QueryBillOverviewResponseBodyDataItemsItem(QueryBillOverviewResponseBodyDataItemsItem &&) = default ;
    QueryBillOverviewResponseBodyDataItemsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillOverviewResponseBodyDataItemsItem() = default ;
    QueryBillOverviewResponseBodyDataItemsItem& operator=(const QueryBillOverviewResponseBodyDataItemsItem &) = default ;
    QueryBillOverviewResponseBodyDataItemsItem& operator=(QueryBillOverviewResponseBodyDataItemsItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustAmount_ != nullptr
        && this->afterTaxAmount_ != nullptr && this->billAccountID_ != nullptr && this->billAccountName_ != nullptr && this->bizType_ != nullptr && this->cashAmount_ != nullptr
        && this->commodityCode_ != nullptr && this->currency_ != nullptr && this->deductedByCashCoupons_ != nullptr && this->deductedByCoupons_ != nullptr && this->deductedByPrepaidCard_ != nullptr
        && this->invoiceDiscount_ != nullptr && this->item_ != nullptr && this->outstandingAmount_ != nullptr && this->ownerID_ != nullptr && this->paymentAmount_ != nullptr
        && this->paymentCurrency_ != nullptr && this->pipCode_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxAmountLocal_ != nullptr && this->pretaxGrossAmount_ != nullptr
        && this->productCode_ != nullptr && this->productDetail_ != nullptr && this->productName_ != nullptr && this->productType_ != nullptr && this->roundDownDiscount_ != nullptr
        && this->subscriptionType_ != nullptr && this->tax_ != nullptr; };
    // adjustAmount Field Functions 
    bool hasAdjustAmount() const { return this->adjustAmount_ != nullptr;};
    void deleteAdjustAmount() { this->adjustAmount_ = nullptr;};
    inline float adjustAmount() const { DARABONBA_PTR_GET_DEFAULT(adjustAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setAdjustAmount(float adjustAmount) { DARABONBA_PTR_SET_VALUE(adjustAmount_, adjustAmount) };


    // afterTaxAmount Field Functions 
    bool hasAfterTaxAmount() const { return this->afterTaxAmount_ != nullptr;};
    void deleteAfterTaxAmount() { this->afterTaxAmount_ = nullptr;};
    inline float afterTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(afterTaxAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setAfterTaxAmount(float afterTaxAmount) { DARABONBA_PTR_SET_VALUE(afterTaxAmount_, afterTaxAmount) };


    // billAccountID Field Functions 
    bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
    void deleteBillAccountID() { this->billAccountID_ = nullptr;};
    inline string billAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setBillAccountID(string billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


    // billAccountName Field Functions 
    bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
    void deleteBillAccountName() { this->billAccountName_ = nullptr;};
    inline string billAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline float cashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setCashAmount(float cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductedByCashCoupons Field Functions 
    bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
    void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
    inline float deductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setDeductedByCashCoupons(float deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline float deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setDeductedByCoupons(float deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // deductedByPrepaidCard Field Functions 
    bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
    void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
    inline float deductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setDeductedByPrepaidCard(float deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline float invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // outstandingAmount Field Functions 
    bool hasOutstandingAmount() const { return this->outstandingAmount_ != nullptr;};
    void deleteOutstandingAmount() { this->outstandingAmount_ = nullptr;};
    inline float outstandingAmount() const { DARABONBA_PTR_GET_DEFAULT(outstandingAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setOutstandingAmount(float outstandingAmount) { DARABONBA_PTR_SET_VALUE(outstandingAmount_, outstandingAmount) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // paymentAmount Field Functions 
    bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
    void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
    inline float paymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setPaymentAmount(float paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


    // paymentCurrency Field Functions 
    bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
    void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
    inline string paymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string pipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline float pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setPretaxAmount(float pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxAmountLocal Field Functions 
    bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
    void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
    inline float pretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setPretaxAmountLocal(float pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline float pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setPretaxGrossAmount(float pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // roundDownDiscount Field Functions 
    bool hasRoundDownDiscount() const { return this->roundDownDiscount_ != nullptr;};
    void deleteRoundDownDiscount() { this->roundDownDiscount_ = nullptr;};
    inline string roundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(roundDownDiscount_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setRoundDownDiscount(string roundDownDiscount) { DARABONBA_PTR_SET_VALUE(roundDownDiscount_, roundDownDiscount) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QueryBillOverviewResponseBodyDataItemsItem& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tax Field Functions 
    bool hasTax() const { return this->tax_ != nullptr;};
    void deleteTax() { this->tax_ = nullptr;};
    inline float tax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0.0) };
    inline QueryBillOverviewResponseBodyDataItemsItem& setTax(float tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


  protected:
    // The amount deducted by using credit refunds.
    std::shared_ptr<float> adjustAmount_ = nullptr;
    // The amount paid after the tax is deducted.
    std::shared_ptr<float> afterTaxAmount_ = nullptr;
    // The ID of the account to which the bill belongs.
    std::shared_ptr<string> billAccountID_ = nullptr;
    // The name of the account to which the bill belongs.
    std::shared_ptr<string> billAccountName_ = nullptr;
    // The business type.
    std::shared_ptr<string> bizType_ = nullptr;
    // The amount paid in cash. The amount that was deducted by using credit refunds is not included.
    std::shared_ptr<float> cashAmount_ = nullptr;
    // The code of the commodity. The commodity code is the same as that displayed in User Center.
    std::shared_ptr<string> commodityCode_ = nullptr;
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
    // The type of the bill. Valid values:
    // 
    // *   SubscriptionOrder
    // *   PayAsYouGoBill
    // *   Refund
    // *   Adjustment
    std::shared_ptr<string> item_ = nullptr;
    // The unsettled amount or the amount deducted by using credits. This may be an unsettled amount of a regular user or credits consumed by a credit user.
    std::shared_ptr<float> outstandingAmount_ = nullptr;
    // The ID of the bill owner.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The amount paid in cash. The amount that was deducted by using credit refunds is included.
    std::shared_ptr<float> paymentAmount_ = nullptr;
    // The currency used for payment.
    std::shared_ptr<string> paymentCurrency_ = nullptr;
    // The code of the service. The service code is the same as that displayed in User Center.
    std::shared_ptr<string> pipCode_ = nullptr;
    // The pretax amount.
    std::shared_ptr<float> pretaxAmount_ = nullptr;
    // The pretax amount paid in local currency.
    std::shared_ptr<float> pretaxAmountLocal_ = nullptr;
    // The pretax gross amount.
    std::shared_ptr<float> pretaxGrossAmount_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
    // The details of the service.
    std::shared_ptr<string> productDetail_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> productName_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> productType_ = nullptr;
    // The round down discount.
    std::shared_ptr<string> roundDownDiscount_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   Subscription: the subscription billing method
    // *   PayAsYouGo: the pay-as-you-go billing method
    std::shared_ptr<string> subscriptionType_ = nullptr;
    // The tax.
    std::shared_ptr<float> tax_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
