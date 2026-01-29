// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYBILLOVERVIEWRESPONSEBODY_HPP_
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
  class QueryBillOverviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryBillOverviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryBillOverviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryBillOverviewResponseBody() = default ;
    QueryBillOverviewResponseBody(const QueryBillOverviewResponseBody &) = default ;
    QueryBillOverviewResponseBody(QueryBillOverviewResponseBody &&) = default ;
    QueryBillOverviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryBillOverviewResponseBody() = default ;
    QueryBillOverviewResponseBody& operator=(const QueryBillOverviewResponseBody &) = default ;
    QueryBillOverviewResponseBody& operator=(QueryBillOverviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountID, accountID_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
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
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
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
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adjustAmount_ == nullptr
        && this->afterTaxAmount_ == nullptr && this->billAccountID_ == nullptr && this->billAccountName_ == nullptr && this->bizType_ == nullptr && this->cashAmount_ == nullptr
        && this->commodityCode_ == nullptr && this->currency_ == nullptr && this->deductedByCashCoupons_ == nullptr && this->deductedByCoupons_ == nullptr && this->deductedByPrepaidCard_ == nullptr
        && this->invoiceDiscount_ == nullptr && this->item_ == nullptr && this->outstandingAmount_ == nullptr && this->ownerID_ == nullptr && this->paymentAmount_ == nullptr
        && this->paymentCurrency_ == nullptr && this->pipCode_ == nullptr && this->pretaxAmount_ == nullptr && this->pretaxAmountLocal_ == nullptr && this->pretaxGrossAmount_ == nullptr
        && this->productCode_ == nullptr && this->productDetail_ == nullptr && this->productName_ == nullptr && this->productType_ == nullptr && this->roundDownDiscount_ == nullptr
        && this->subscriptionType_ == nullptr && this->tax_ == nullptr; };
          // adjustAmount Field Functions 
          bool hasAdjustAmount() const { return this->adjustAmount_ != nullptr;};
          void deleteAdjustAmount() { this->adjustAmount_ = nullptr;};
          inline float getAdjustAmount() const { DARABONBA_PTR_GET_DEFAULT(adjustAmount_, 0.0) };
          inline Item& setAdjustAmount(float adjustAmount) { DARABONBA_PTR_SET_VALUE(adjustAmount_, adjustAmount) };


          // afterTaxAmount Field Functions 
          bool hasAfterTaxAmount() const { return this->afterTaxAmount_ != nullptr;};
          void deleteAfterTaxAmount() { this->afterTaxAmount_ = nullptr;};
          inline float getAfterTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(afterTaxAmount_, 0.0) };
          inline Item& setAfterTaxAmount(float afterTaxAmount) { DARABONBA_PTR_SET_VALUE(afterTaxAmount_, afterTaxAmount) };


          // billAccountID Field Functions 
          bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
          void deleteBillAccountID() { this->billAccountID_ = nullptr;};
          inline string getBillAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, "") };
          inline Item& setBillAccountID(string billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


          // billAccountName Field Functions 
          bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
          void deleteBillAccountName() { this->billAccountName_ = nullptr;};
          inline string getBillAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
          inline Item& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


          // bizType Field Functions 
          bool hasBizType() const { return this->bizType_ != nullptr;};
          void deleteBizType() { this->bizType_ = nullptr;};
          inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
          inline Item& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


          // cashAmount Field Functions 
          bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
          void deleteCashAmount() { this->cashAmount_ = nullptr;};
          inline float getCashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, 0.0) };
          inline Item& setCashAmount(float cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


          // commodityCode Field Functions 
          bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
          void deleteCommodityCode() { this->commodityCode_ = nullptr;};
          inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
          inline Item& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Item& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // deductedByCashCoupons Field Functions 
          bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
          void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
          inline float getDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
          inline Item& setDeductedByCashCoupons(float deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


          // deductedByCoupons Field Functions 
          bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
          void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
          inline float getDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
          inline Item& setDeductedByCoupons(float deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


          // deductedByPrepaidCard Field Functions 
          bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
          void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
          inline float getDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
          inline Item& setDeductedByPrepaidCard(float deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


          // invoiceDiscount Field Functions 
          bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
          void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
          inline float getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
          inline Item& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


          // item Field Functions 
          bool hasItem() const { return this->item_ != nullptr;};
          void deleteItem() { this->item_ = nullptr;};
          inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
          inline Item& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


          // outstandingAmount Field Functions 
          bool hasOutstandingAmount() const { return this->outstandingAmount_ != nullptr;};
          void deleteOutstandingAmount() { this->outstandingAmount_ = nullptr;};
          inline float getOutstandingAmount() const { DARABONBA_PTR_GET_DEFAULT(outstandingAmount_, 0.0) };
          inline Item& setOutstandingAmount(float outstandingAmount) { DARABONBA_PTR_SET_VALUE(outstandingAmount_, outstandingAmount) };


          // ownerID Field Functions 
          bool hasOwnerID() const { return this->ownerID_ != nullptr;};
          void deleteOwnerID() { this->ownerID_ = nullptr;};
          inline string getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
          inline Item& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


          // paymentAmount Field Functions 
          bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
          void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
          inline float getPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, 0.0) };
          inline Item& setPaymentAmount(float paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


          // paymentCurrency Field Functions 
          bool hasPaymentCurrency() const { return this->paymentCurrency_ != nullptr;};
          void deletePaymentCurrency() { this->paymentCurrency_ = nullptr;};
          inline string getPaymentCurrency() const { DARABONBA_PTR_GET_DEFAULT(paymentCurrency_, "") };
          inline Item& setPaymentCurrency(string paymentCurrency) { DARABONBA_PTR_SET_VALUE(paymentCurrency_, paymentCurrency) };


          // pipCode Field Functions 
          bool hasPipCode() const { return this->pipCode_ != nullptr;};
          void deletePipCode() { this->pipCode_ = nullptr;};
          inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
          inline Item& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


          // pretaxAmount Field Functions 
          bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
          void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
          inline float getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
          inline Item& setPretaxAmount(float pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


          // pretaxAmountLocal Field Functions 
          bool hasPretaxAmountLocal() const { return this->pretaxAmountLocal_ != nullptr;};
          void deletePretaxAmountLocal() { this->pretaxAmountLocal_ = nullptr;};
          inline float getPretaxAmountLocal() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmountLocal_, 0.0) };
          inline Item& setPretaxAmountLocal(float pretaxAmountLocal) { DARABONBA_PTR_SET_VALUE(pretaxAmountLocal_, pretaxAmountLocal) };


          // pretaxGrossAmount Field Functions 
          bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
          void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
          inline float getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
          inline Item& setPretaxGrossAmount(float pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


          // productCode Field Functions 
          bool hasProductCode() const { return this->productCode_ != nullptr;};
          void deleteProductCode() { this->productCode_ = nullptr;};
          inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
          inline Item& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


          // productDetail Field Functions 
          bool hasProductDetail() const { return this->productDetail_ != nullptr;};
          void deleteProductDetail() { this->productDetail_ = nullptr;};
          inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
          inline Item& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


          // productName Field Functions 
          bool hasProductName() const { return this->productName_ != nullptr;};
          void deleteProductName() { this->productName_ = nullptr;};
          inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
          inline Item& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


          // productType Field Functions 
          bool hasProductType() const { return this->productType_ != nullptr;};
          void deleteProductType() { this->productType_ = nullptr;};
          inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
          inline Item& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


          // roundDownDiscount Field Functions 
          bool hasRoundDownDiscount() const { return this->roundDownDiscount_ != nullptr;};
          void deleteRoundDownDiscount() { this->roundDownDiscount_ = nullptr;};
          inline string getRoundDownDiscount() const { DARABONBA_PTR_GET_DEFAULT(roundDownDiscount_, "") };
          inline Item& setRoundDownDiscount(string roundDownDiscount) { DARABONBA_PTR_SET_VALUE(roundDownDiscount_, roundDownDiscount) };


          // subscriptionType Field Functions 
          bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
          void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
          inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
          inline Item& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


          // tax Field Functions 
          bool hasTax() const { return this->tax_ != nullptr;};
          void deleteTax() { this->tax_ = nullptr;};
          inline float getTax() const { DARABONBA_PTR_GET_DEFAULT(tax_, 0.0) };
          inline Item& setTax(float tax) { DARABONBA_PTR_SET_VALUE(tax_, tax) };


        protected:
          // The amount deducted by using credit refunds.
          shared_ptr<float> adjustAmount_ {};
          // The amount paid after the tax is deducted.
          shared_ptr<float> afterTaxAmount_ {};
          // The ID of the account to which the bill belongs.
          shared_ptr<string> billAccountID_ {};
          // The name of the account to which the bill belongs.
          shared_ptr<string> billAccountName_ {};
          // The business type.
          shared_ptr<string> bizType_ {};
          // The amount paid in cash. The amount that was deducted by using credit refunds is not included.
          shared_ptr<float> cashAmount_ {};
          // The code of the commodity. The commodity code is the same as that displayed in User Center.
          shared_ptr<string> commodityCode_ {};
          // The type of the currency. Valid values:
          // 
          // *   CNY
          // *   USD
          // *   JPY
          shared_ptr<string> currency_ {};
          // The amount deducted by using vouchers.
          shared_ptr<float> deductedByCashCoupons_ {};
          // The amount deducted by using coupons.
          shared_ptr<float> deductedByCoupons_ {};
          // The amount deducted by using prepaid cards.
          shared_ptr<float> deductedByPrepaidCard_ {};
          // The discount amount.
          shared_ptr<float> invoiceDiscount_ {};
          // The type of the bill. Valid values:
          // 
          // *   SubscriptionOrder
          // *   PayAsYouGoBill
          // *   Refund
          // *   Adjustment
          shared_ptr<string> item_ {};
          // The unsettled amount or the amount deducted by using credits. This may be an unsettled amount of a regular user or credits consumed by a credit user.
          shared_ptr<float> outstandingAmount_ {};
          // The ID of the bill owner.
          shared_ptr<string> ownerID_ {};
          // The amount paid in cash. The amount that was deducted by using credit refunds is included.
          shared_ptr<float> paymentAmount_ {};
          // The currency used for payment.
          shared_ptr<string> paymentCurrency_ {};
          // The code of the service. The service code is the same as that displayed in User Center.
          shared_ptr<string> pipCode_ {};
          // The pretax amount.
          shared_ptr<float> pretaxAmount_ {};
          // The pretax amount paid in local currency.
          shared_ptr<float> pretaxAmountLocal_ {};
          // The pretax gross amount.
          shared_ptr<float> pretaxGrossAmount_ {};
          // The code of the service.
          shared_ptr<string> productCode_ {};
          // The details of the service.
          shared_ptr<string> productDetail_ {};
          // The name of the service.
          shared_ptr<string> productName_ {};
          // The type of the service.
          shared_ptr<string> productType_ {};
          // The round down discount.
          shared_ptr<string> roundDownDiscount_ {};
          // The billing method. Valid values:
          // 
          // *   Subscription: the subscription billing method
          // *   PayAsYouGo: the pay-as-you-go billing method
          shared_ptr<string> subscriptionType_ {};
          // The tax.
          shared_ptr<float> tax_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const vector<Items::Item> & getItem() const { DARABONBA_PTR_GET_CONST(item_, vector<Items::Item>) };
        inline vector<Items::Item> getItem() { DARABONBA_PTR_GET(item_, vector<Items::Item>) };
        inline Items& setItem(const vector<Items::Item> & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline Items& setItem(vector<Items::Item> && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


      protected:
        shared_ptr<vector<Items::Item>> item_ {};
      };

      virtual bool empty() const override { return this->accountID_ == nullptr
        && this->accountName_ == nullptr && this->billingCycle_ == nullptr && this->items_ == nullptr; };
      // accountID Field Functions 
      bool hasAccountID() const { return this->accountID_ != nullptr;};
      void deleteAccountID() { this->accountID_ = nullptr;};
      inline string getAccountID() const { DARABONBA_PTR_GET_DEFAULT(accountID_, "") };
      inline Data& setAccountID(string accountID) { DARABONBA_PTR_SET_VALUE(accountID_, accountID) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // billingCycle Field Functions 
      bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
      void deleteBillingCycle() { this->billingCycle_ = nullptr;};
      inline string getBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
      inline Data& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const Data::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, Data::Items) };
      inline Data::Items getItems() { DARABONBA_PTR_GET(items_, Data::Items) };
      inline Data& setItems(const Data::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(Data::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The ID of the account.
      shared_ptr<string> accountID_ {};
      // The name of the account.
      shared_ptr<string> accountName_ {};
      // The billing cycle, in the YYYY-MM format.
      shared_ptr<string> billingCycle_ {};
      // The details of the bills.
      shared_ptr<Data::Items> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryBillOverviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryBillOverviewResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryBillOverviewResponseBody::Data) };
    inline QueryBillOverviewResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryBillOverviewResponseBody::Data) };
    inline QueryBillOverviewResponseBody& setData(const QueryBillOverviewResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryBillOverviewResponseBody& setData(QueryBillOverviewResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryBillOverviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryBillOverviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryBillOverviewResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryBillOverviewResponseBody::Data> data_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
