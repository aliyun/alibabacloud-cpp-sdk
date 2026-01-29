// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEBILLRESPONSEBODY_HPP_
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
  class DescribeInstanceBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeInstanceBillResponseBody() = default ;
    DescribeInstanceBillResponseBody(const DescribeInstanceBillResponseBody &) = default ;
    DescribeInstanceBillResponseBody(DescribeInstanceBillResponseBody &&) = default ;
    DescribeInstanceBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceBillResponseBody() = default ;
    DescribeInstanceBillResponseBody& operator=(const DescribeInstanceBillResponseBody &) = default ;
    DescribeInstanceBillResponseBody& operator=(DescribeInstanceBillResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(AdjustAmount, adjustAmount_);
          DARABONBA_PTR_TO_JSON(AfterDiscountAmount, afterDiscountAmount_);
          DARABONBA_PTR_TO_JSON(BillAccountID, billAccountID_);
          DARABONBA_PTR_TO_JSON(BillAccountName, billAccountName_);
          DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
          DARABONBA_PTR_TO_JSON(BillingItem, billingItem_);
          DARABONBA_PTR_TO_JSON(BillingItemCode, billingItemCode_);
          DARABONBA_PTR_TO_JSON(BillingType, billingType_);
          DARABONBA_PTR_TO_JSON(BizType, bizType_);
          DARABONBA_PTR_TO_JSON(CashAmount, cashAmount_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(CostUnit, costUnit_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
          DARABONBA_PTR_TO_JSON(DeductedByCoupons, deductedByCoupons_);
          DARABONBA_PTR_TO_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
          DARABONBA_PTR_TO_JSON(DeductedByResourcePackage, deductedByResourcePackage_);
          DARABONBA_PTR_TO_JSON(InstanceConfig, instanceConfig_);
          DARABONBA_PTR_TO_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_TO_JSON(InternetIP, internetIP_);
          DARABONBA_PTR_TO_JSON(IntranetIP, intranetIP_);
          DARABONBA_PTR_TO_JSON(InvoiceDiscount, invoiceDiscount_);
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(ItemName, itemName_);
          DARABONBA_PTR_TO_JSON(ListPrice, listPrice_);
          DARABONBA_PTR_TO_JSON(ListPriceUnit, listPriceUnit_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(OutstandingAmount, outstandingAmount_);
          DARABONBA_PTR_TO_JSON(OwnerID, ownerID_);
          DARABONBA_PTR_TO_JSON(PaymentAmount, paymentAmount_);
          DARABONBA_PTR_TO_JSON(PipCode, pipCode_);
          DARABONBA_PTR_TO_JSON(PretaxAmount, pretaxAmount_);
          DARABONBA_PTR_TO_JSON(PretaxGrossAmount, pretaxGrossAmount_);
          DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
          DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
          DARABONBA_PTR_TO_JSON(ProductName, productName_);
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_TO_JSON(ServicePeriod, servicePeriod_);
          DARABONBA_PTR_TO_JSON(ServicePeriodUnit, servicePeriodUnit_);
          DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
          DARABONBA_PTR_TO_JSON(UsageUnit, usageUnit_);
          DARABONBA_PTR_TO_JSON(Zone, zone_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(AdjustAmount, adjustAmount_);
          DARABONBA_PTR_FROM_JSON(AfterDiscountAmount, afterDiscountAmount_);
          DARABONBA_PTR_FROM_JSON(BillAccountID, billAccountID_);
          DARABONBA_PTR_FROM_JSON(BillAccountName, billAccountName_);
          DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
          DARABONBA_PTR_FROM_JSON(BillingItem, billingItem_);
          DARABONBA_PTR_FROM_JSON(BillingItemCode, billingItemCode_);
          DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
          DARABONBA_PTR_FROM_JSON(BizType, bizType_);
          DARABONBA_PTR_FROM_JSON(CashAmount, cashAmount_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(CostUnit, costUnit_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DeductedByCashCoupons, deductedByCashCoupons_);
          DARABONBA_PTR_FROM_JSON(DeductedByCoupons, deductedByCoupons_);
          DARABONBA_PTR_FROM_JSON(DeductedByPrepaidCard, deductedByPrepaidCard_);
          DARABONBA_PTR_FROM_JSON(DeductedByResourcePackage, deductedByResourcePackage_);
          DARABONBA_PTR_FROM_JSON(InstanceConfig, instanceConfig_);
          DARABONBA_PTR_FROM_JSON(InstanceID, instanceID_);
          DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
          DARABONBA_PTR_FROM_JSON(InternetIP, internetIP_);
          DARABONBA_PTR_FROM_JSON(IntranetIP, intranetIP_);
          DARABONBA_PTR_FROM_JSON(InvoiceDiscount, invoiceDiscount_);
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
          DARABONBA_PTR_FROM_JSON(ListPrice, listPrice_);
          DARABONBA_PTR_FROM_JSON(ListPriceUnit, listPriceUnit_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(OutstandingAmount, outstandingAmount_);
          DARABONBA_PTR_FROM_JSON(OwnerID, ownerID_);
          DARABONBA_PTR_FROM_JSON(PaymentAmount, paymentAmount_);
          DARABONBA_PTR_FROM_JSON(PipCode, pipCode_);
          DARABONBA_PTR_FROM_JSON(PretaxAmount, pretaxAmount_);
          DARABONBA_PTR_FROM_JSON(PretaxGrossAmount, pretaxGrossAmount_);
          DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
          DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
          DARABONBA_PTR_FROM_JSON(ProductName, productName_);
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
          DARABONBA_PTR_FROM_JSON(ServicePeriod, servicePeriod_);
          DARABONBA_PTR_FROM_JSON(ServicePeriodUnit, servicePeriodUnit_);
          DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
          DARABONBA_PTR_FROM_JSON(UsageUnit, usageUnit_);
          DARABONBA_PTR_FROM_JSON(Zone, zone_);
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
        virtual bool empty() const override { return this->adjustAmount_ == nullptr
        && this->afterDiscountAmount_ == nullptr && this->billAccountID_ == nullptr && this->billAccountName_ == nullptr && this->billingDate_ == nullptr && this->billingItem_ == nullptr
        && this->billingItemCode_ == nullptr && this->billingType_ == nullptr && this->bizType_ == nullptr && this->cashAmount_ == nullptr && this->commodityCode_ == nullptr
        && this->costUnit_ == nullptr && this->currency_ == nullptr && this->deductedByCashCoupons_ == nullptr && this->deductedByCoupons_ == nullptr && this->deductedByPrepaidCard_ == nullptr
        && this->deductedByResourcePackage_ == nullptr && this->instanceConfig_ == nullptr && this->instanceID_ == nullptr && this->instanceSpec_ == nullptr && this->internetIP_ == nullptr
        && this->intranetIP_ == nullptr && this->invoiceDiscount_ == nullptr && this->item_ == nullptr && this->itemName_ == nullptr && this->listPrice_ == nullptr
        && this->listPriceUnit_ == nullptr && this->nickName_ == nullptr && this->outstandingAmount_ == nullptr && this->ownerID_ == nullptr && this->paymentAmount_ == nullptr
        && this->pipCode_ == nullptr && this->pretaxAmount_ == nullptr && this->pretaxGrossAmount_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr
        && this->productName_ == nullptr && this->productType_ == nullptr && this->region_ == nullptr && this->resourceGroup_ == nullptr && this->servicePeriod_ == nullptr
        && this->servicePeriodUnit_ == nullptr && this->subscriptionType_ == nullptr && this->tag_ == nullptr && this->usage_ == nullptr && this->usageUnit_ == nullptr
        && this->zone_ == nullptr; };
        // adjustAmount Field Functions 
        bool hasAdjustAmount() const { return this->adjustAmount_ != nullptr;};
        void deleteAdjustAmount() { this->adjustAmount_ = nullptr;};
        inline float getAdjustAmount() const { DARABONBA_PTR_GET_DEFAULT(adjustAmount_, 0.0) };
        inline Items& setAdjustAmount(float adjustAmount) { DARABONBA_PTR_SET_VALUE(adjustAmount_, adjustAmount) };


        // afterDiscountAmount Field Functions 
        bool hasAfterDiscountAmount() const { return this->afterDiscountAmount_ != nullptr;};
        void deleteAfterDiscountAmount() { this->afterDiscountAmount_ = nullptr;};
        inline float getAfterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(afterDiscountAmount_, 0.0) };
        inline Items& setAfterDiscountAmount(float afterDiscountAmount) { DARABONBA_PTR_SET_VALUE(afterDiscountAmount_, afterDiscountAmount) };


        // billAccountID Field Functions 
        bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
        void deleteBillAccountID() { this->billAccountID_ = nullptr;};
        inline string getBillAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, "") };
        inline Items& setBillAccountID(string billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


        // billAccountName Field Functions 
        bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
        void deleteBillAccountName() { this->billAccountName_ = nullptr;};
        inline string getBillAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
        inline Items& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


        // billingDate Field Functions 
        bool hasBillingDate() const { return this->billingDate_ != nullptr;};
        void deleteBillingDate() { this->billingDate_ = nullptr;};
        inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
        inline Items& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


        // billingItem Field Functions 
        bool hasBillingItem() const { return this->billingItem_ != nullptr;};
        void deleteBillingItem() { this->billingItem_ = nullptr;};
        inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
        inline Items& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


        // billingItemCode Field Functions 
        bool hasBillingItemCode() const { return this->billingItemCode_ != nullptr;};
        void deleteBillingItemCode() { this->billingItemCode_ = nullptr;};
        inline string getBillingItemCode() const { DARABONBA_PTR_GET_DEFAULT(billingItemCode_, "") };
        inline Items& setBillingItemCode(string billingItemCode) { DARABONBA_PTR_SET_VALUE(billingItemCode_, billingItemCode) };


        // billingType Field Functions 
        bool hasBillingType() const { return this->billingType_ != nullptr;};
        void deleteBillingType() { this->billingType_ = nullptr;};
        inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
        inline Items& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


        // bizType Field Functions 
        bool hasBizType() const { return this->bizType_ != nullptr;};
        void deleteBizType() { this->bizType_ = nullptr;};
        inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
        inline Items& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


        // cashAmount Field Functions 
        bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
        void deleteCashAmount() { this->cashAmount_ = nullptr;};
        inline float getCashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, 0.0) };
        inline Items& setCashAmount(float cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Items& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // costUnit Field Functions 
        bool hasCostUnit() const { return this->costUnit_ != nullptr;};
        void deleteCostUnit() { this->costUnit_ = nullptr;};
        inline string getCostUnit() const { DARABONBA_PTR_GET_DEFAULT(costUnit_, "") };
        inline Items& setCostUnit(string costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Items& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // deductedByCashCoupons Field Functions 
        bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
        void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
        inline float getDeductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
        inline Items& setDeductedByCashCoupons(float deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


        // deductedByCoupons Field Functions 
        bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
        void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
        inline float getDeductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
        inline Items& setDeductedByCoupons(float deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


        // deductedByPrepaidCard Field Functions 
        bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
        void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
        inline float getDeductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
        inline Items& setDeductedByPrepaidCard(float deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


        // deductedByResourcePackage Field Functions 
        bool hasDeductedByResourcePackage() const { return this->deductedByResourcePackage_ != nullptr;};
        void deleteDeductedByResourcePackage() { this->deductedByResourcePackage_ = nullptr;};
        inline string getDeductedByResourcePackage() const { DARABONBA_PTR_GET_DEFAULT(deductedByResourcePackage_, "") };
        inline Items& setDeductedByResourcePackage(string deductedByResourcePackage) { DARABONBA_PTR_SET_VALUE(deductedByResourcePackage_, deductedByResourcePackage) };


        // instanceConfig Field Functions 
        bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
        void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
        inline string getInstanceConfig() const { DARABONBA_PTR_GET_DEFAULT(instanceConfig_, "") };
        inline Items& setInstanceConfig(string instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };


        // instanceID Field Functions 
        bool hasInstanceID() const { return this->instanceID_ != nullptr;};
        void deleteInstanceID() { this->instanceID_ = nullptr;};
        inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
        inline Items& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


        // instanceSpec Field Functions 
        bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
        void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
        inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
        inline Items& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


        // internetIP Field Functions 
        bool hasInternetIP() const { return this->internetIP_ != nullptr;};
        void deleteInternetIP() { this->internetIP_ = nullptr;};
        inline string getInternetIP() const { DARABONBA_PTR_GET_DEFAULT(internetIP_, "") };
        inline Items& setInternetIP(string internetIP) { DARABONBA_PTR_SET_VALUE(internetIP_, internetIP) };


        // intranetIP Field Functions 
        bool hasIntranetIP() const { return this->intranetIP_ != nullptr;};
        void deleteIntranetIP() { this->intranetIP_ = nullptr;};
        inline string getIntranetIP() const { DARABONBA_PTR_GET_DEFAULT(intranetIP_, "") };
        inline Items& setIntranetIP(string intranetIP) { DARABONBA_PTR_SET_VALUE(intranetIP_, intranetIP) };


        // invoiceDiscount Field Functions 
        bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
        void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
        inline float getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
        inline Items& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline Items& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline Items& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


        // listPrice Field Functions 
        bool hasListPrice() const { return this->listPrice_ != nullptr;};
        void deleteListPrice() { this->listPrice_ = nullptr;};
        inline string getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, "") };
        inline Items& setListPrice(string listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


        // listPriceUnit Field Functions 
        bool hasListPriceUnit() const { return this->listPriceUnit_ != nullptr;};
        void deleteListPriceUnit() { this->listPriceUnit_ = nullptr;};
        inline string getListPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(listPriceUnit_, "") };
        inline Items& setListPriceUnit(string listPriceUnit) { DARABONBA_PTR_SET_VALUE(listPriceUnit_, listPriceUnit) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline Items& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // outstandingAmount Field Functions 
        bool hasOutstandingAmount() const { return this->outstandingAmount_ != nullptr;};
        void deleteOutstandingAmount() { this->outstandingAmount_ = nullptr;};
        inline float getOutstandingAmount() const { DARABONBA_PTR_GET_DEFAULT(outstandingAmount_, 0.0) };
        inline Items& setOutstandingAmount(float outstandingAmount) { DARABONBA_PTR_SET_VALUE(outstandingAmount_, outstandingAmount) };


        // ownerID Field Functions 
        bool hasOwnerID() const { return this->ownerID_ != nullptr;};
        void deleteOwnerID() { this->ownerID_ = nullptr;};
        inline string getOwnerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
        inline Items& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


        // paymentAmount Field Functions 
        bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
        void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
        inline float getPaymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, 0.0) };
        inline Items& setPaymentAmount(float paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


        // pipCode Field Functions 
        bool hasPipCode() const { return this->pipCode_ != nullptr;};
        void deletePipCode() { this->pipCode_ = nullptr;};
        inline string getPipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
        inline Items& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


        // pretaxAmount Field Functions 
        bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
        void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
        inline float getPretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
        inline Items& setPretaxAmount(float pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


        // pretaxGrossAmount Field Functions 
        bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
        void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
        inline float getPretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
        inline Items& setPretaxGrossAmount(float pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


        // productCode Field Functions 
        bool hasProductCode() const { return this->productCode_ != nullptr;};
        void deleteProductCode() { this->productCode_ = nullptr;};
        inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
        inline Items& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


        // productDetail Field Functions 
        bool hasProductDetail() const { return this->productDetail_ != nullptr;};
        void deleteProductDetail() { this->productDetail_ = nullptr;};
        inline string getProductDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
        inline Items& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


        // productName Field Functions 
        bool hasProductName() const { return this->productName_ != nullptr;};
        void deleteProductName() { this->productName_ = nullptr;};
        inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
        inline Items& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Items& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Items& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // resourceGroup Field Functions 
        bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
        void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
        inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
        inline Items& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


        // servicePeriod Field Functions 
        bool hasServicePeriod() const { return this->servicePeriod_ != nullptr;};
        void deleteServicePeriod() { this->servicePeriod_ = nullptr;};
        inline string getServicePeriod() const { DARABONBA_PTR_GET_DEFAULT(servicePeriod_, "") };
        inline Items& setServicePeriod(string servicePeriod) { DARABONBA_PTR_SET_VALUE(servicePeriod_, servicePeriod) };


        // servicePeriodUnit Field Functions 
        bool hasServicePeriodUnit() const { return this->servicePeriodUnit_ != nullptr;};
        void deleteServicePeriodUnit() { this->servicePeriodUnit_ = nullptr;};
        inline string getServicePeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodUnit_, "") };
        inline Items& setServicePeriodUnit(string servicePeriodUnit) { DARABONBA_PTR_SET_VALUE(servicePeriodUnit_, servicePeriodUnit) };


        // subscriptionType Field Functions 
        bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
        void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
        inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
        inline Items& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline Items& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline Items& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


        // usageUnit Field Functions 
        bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
        void deleteUsageUnit() { this->usageUnit_ = nullptr;};
        inline string getUsageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
        inline Items& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


        // zone Field Functions 
        bool hasZone() const { return this->zone_ != nullptr;};
        void deleteZone() { this->zone_ = nullptr;};
        inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
        inline Items& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


      protected:
        // The amount deducted with credit refund.
        shared_ptr<float> adjustAmount_ {};
        shared_ptr<float> afterDiscountAmount_ {};
        // The ID of the account to which the bill belongs.
        shared_ptr<string> billAccountID_ {};
        // The name of the account to which the bill belongs.
        shared_ptr<string> billAccountName_ {};
        // The billing date. This parameter is returned only if the Granularity parameter is set to DAILY. Format: YYYY-MM-DD.
        shared_ptr<string> billingDate_ {};
        // The billable item. A value is returned only if the IsBillingItem parameter is set to true.
        shared_ptr<string> billingItem_ {};
        // The code of the billable item.
        shared_ptr<string> billingItemCode_ {};
        // The billing method.
        shared_ptr<string> billingType_ {};
        // The type of business.
        shared_ptr<string> bizType_ {};
        // The amount paid in cash. The amount deducted with credit refund is not included.
        shared_ptr<float> cashAmount_ {};
        // The code of the commodity. The code is the same as that in Cost Center.
        shared_ptr<string> commodityCode_ {};
        // The cost center.
        shared_ptr<string> costUnit_ {};
        // The type of currency. Valid values:
        // 
        // *   CNY
        // *   USD
        // *   JPY
        shared_ptr<string> currency_ {};
        // The amount deducted with vouchers.
        shared_ptr<float> deductedByCashCoupons_ {};
        // The amount deducted with coupons.
        shared_ptr<float> deductedByCoupons_ {};
        // The amount deducted with prepaid cards.
        shared_ptr<float> deductedByPrepaidCard_ {};
        // The amount deducted with resource plans. This parameter is valid only when the isBillingItem parameter is set to true.
        shared_ptr<string> deductedByResourcePackage_ {};
        // The configurations of the instance.
        shared_ptr<string> instanceConfig_ {};
        // The ID of the instance.
        shared_ptr<string> instanceID_ {};
        // The type of the instance.
        shared_ptr<string> instanceSpec_ {};
        // The public IP address.
        shared_ptr<string> internetIP_ {};
        // The private IP address.
        shared_ptr<string> intranetIP_ {};
        // The discount amount.
        shared_ptr<float> invoiceDiscount_ {};
        // The type of the bill.
        // 
        // *   SubscriptionOrder: the subscription bill.
        // *   PayAsYouGoBill: the pay-as-you-go bill,
        // *   Refund: the refund.
        // *   Adjustment: the adjustment bill.
        shared_ptr<string> item_ {};
        // The name of the project.
        shared_ptr<string> itemName_ {};
        // The unit price of the service. This parameter is valid only when the isBillingItem parameter is set to true.
        shared_ptr<string> listPrice_ {};
        // The unit of the unit price. This parameter is valid only when the isBillingItem parameter is set to true.
        shared_ptr<string> listPriceUnit_ {};
        // The name of the instance.
        shared_ptr<string> nickName_ {};
        // The unsettled amount.
        shared_ptr<float> outstandingAmount_ {};
        // The ID of the account that owns the resource. This parameter is returned in multi-account payment scenario.
        shared_ptr<string> ownerID_ {};
        // The amount paid in cash. The amount deducted with credit refund is not included.
        shared_ptr<float> paymentAmount_ {};
        // The code of the service. The code is the same as that in Cost Center.
        shared_ptr<string> pipCode_ {};
        // The pretax amount.
        shared_ptr<float> pretaxAmount_ {};
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
        // The ID of the region.
        shared_ptr<string> region_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroup_ {};
        // The service duration.
        shared_ptr<string> servicePeriod_ {};
        // The unit of the service duration.
        shared_ptr<string> servicePeriodUnit_ {};
        // The billing method. Valid values:
        // 
        // *   Subscription: the subscription billing method.
        // *   PayAsYouGo: the pay-as-you-go billing method.
        shared_ptr<string> subscriptionType_ {};
        // The tag of the resource.
        shared_ptr<string> tag_ {};
        // The usage of the service. This parameter is valid only when the isBillingItem parameter is set to true. The usage is the total usage in all bills in the billing cycle, not the amount that you purchase. For example, if 1 GB of storage is used and bills are generated every hour, the usage is 1 GB per hour. In this case, the usage is 24 GB per day.
        shared_ptr<string> usage_ {};
        // The unit of usage. This parameter is valid only when the isBillingItem parameter is set to true.
        shared_ptr<string> usageUnit_ {};
        // The ID of the zone.
        shared_ptr<string> zone_ {};
      };

      virtual bool empty() const override { return this->accountID_ == nullptr
        && this->accountName_ == nullptr && this->billingCycle_ == nullptr && this->items_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->totalCount_ == nullptr; };
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
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The ID of the account.
      shared_ptr<string> accountID_ {};
      // The name of the account.
      shared_ptr<string> accountName_ {};
      // The billing cycle in the YYYY-MM format.
      shared_ptr<string> billingCycle_ {};
      // The details of the bill.
      shared_ptr<vector<Data::Items>> items_ {};
      // The maximum number of entries returned.
      shared_ptr<int32_t> maxResults_ {};
      // The position where the query stopped. If this parameter is left empty, all the results are returned. If you perform another call, you must set the NextToken parameter to the value of this parameter.
      shared_ptr<string> nextToken_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeInstanceBillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeInstanceBillResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeInstanceBillResponseBody::Data) };
    inline DescribeInstanceBillResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeInstanceBillResponseBody::Data) };
    inline DescribeInstanceBillResponseBody& setData(const DescribeInstanceBillResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeInstanceBillResponseBody& setData(DescribeInstanceBillResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeInstanceBillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeInstanceBillResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeInstanceBillResponseBody::Data> data_ {};
    // The error message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
