// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYINSTANCEBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYINSTANCEBILLRESPONSEBODY_HPP_
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
  class QueryInstanceBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryInstanceBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryInstanceBillResponseBody() = default ;
    QueryInstanceBillResponseBody(const QueryInstanceBillResponseBody &) = default ;
    QueryInstanceBillResponseBody(QueryInstanceBillResponseBody &&) = default ;
    QueryInstanceBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryInstanceBillResponseBody() = default ;
    QueryInstanceBillResponseBody& operator=(const QueryInstanceBillResponseBody &) = default ;
    QueryInstanceBillResponseBody& operator=(QueryInstanceBillResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountID, accountID_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
        DARABONBA_PTR_FROM_JSON(Items, items_);
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
            DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
            DARABONBA_PTR_TO_JSON(BillingItem, billingItem_);
            DARABONBA_PTR_TO_JSON(BillingType, billingType_);
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
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(AdjustAmount, adjustAmount_);
            DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
            DARABONBA_PTR_FROM_JSON(BillingItem, billingItem_);
            DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
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
        && this->billingDate_ == nullptr && this->billingItem_ == nullptr && this->billingType_ == nullptr && this->cashAmount_ == nullptr && this->commodityCode_ == nullptr
        && this->costUnit_ == nullptr && this->currency_ == nullptr && this->deductedByCashCoupons_ == nullptr && this->deductedByCoupons_ == nullptr && this->deductedByPrepaidCard_ == nullptr
        && this->deductedByResourcePackage_ == nullptr && this->instanceConfig_ == nullptr && this->instanceID_ == nullptr && this->instanceSpec_ == nullptr && this->internetIP_ == nullptr
        && this->intranetIP_ == nullptr && this->invoiceDiscount_ == nullptr && this->item_ == nullptr && this->listPrice_ == nullptr && this->listPriceUnit_ == nullptr
        && this->nickName_ == nullptr && this->outstandingAmount_ == nullptr && this->ownerID_ == nullptr && this->paymentAmount_ == nullptr && this->pipCode_ == nullptr
        && this->pretaxAmount_ == nullptr && this->pretaxGrossAmount_ == nullptr && this->productCode_ == nullptr && this->productDetail_ == nullptr && this->productName_ == nullptr
        && this->productType_ == nullptr && this->region_ == nullptr && this->resourceGroup_ == nullptr && this->servicePeriod_ == nullptr && this->servicePeriodUnit_ == nullptr
        && this->subscriptionType_ == nullptr && this->tag_ == nullptr && this->usage_ == nullptr && this->usageUnit_ == nullptr && this->zone_ == nullptr; };
          // adjustAmount Field Functions 
          bool hasAdjustAmount() const { return this->adjustAmount_ != nullptr;};
          void deleteAdjustAmount() { this->adjustAmount_ = nullptr;};
          inline float getAdjustAmount() const { DARABONBA_PTR_GET_DEFAULT(adjustAmount_, 0.0) };
          inline Item& setAdjustAmount(float adjustAmount) { DARABONBA_PTR_SET_VALUE(adjustAmount_, adjustAmount) };


          // billingDate Field Functions 
          bool hasBillingDate() const { return this->billingDate_ != nullptr;};
          void deleteBillingDate() { this->billingDate_ = nullptr;};
          inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
          inline Item& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


          // billingItem Field Functions 
          bool hasBillingItem() const { return this->billingItem_ != nullptr;};
          void deleteBillingItem() { this->billingItem_ = nullptr;};
          inline string getBillingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
          inline Item& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


          // billingType Field Functions 
          bool hasBillingType() const { return this->billingType_ != nullptr;};
          void deleteBillingType() { this->billingType_ = nullptr;};
          inline string getBillingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
          inline Item& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


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


          // costUnit Field Functions 
          bool hasCostUnit() const { return this->costUnit_ != nullptr;};
          void deleteCostUnit() { this->costUnit_ = nullptr;};
          inline string getCostUnit() const { DARABONBA_PTR_GET_DEFAULT(costUnit_, "") };
          inline Item& setCostUnit(string costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };


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


          // deductedByResourcePackage Field Functions 
          bool hasDeductedByResourcePackage() const { return this->deductedByResourcePackage_ != nullptr;};
          void deleteDeductedByResourcePackage() { this->deductedByResourcePackage_ = nullptr;};
          inline string getDeductedByResourcePackage() const { DARABONBA_PTR_GET_DEFAULT(deductedByResourcePackage_, "") };
          inline Item& setDeductedByResourcePackage(string deductedByResourcePackage) { DARABONBA_PTR_SET_VALUE(deductedByResourcePackage_, deductedByResourcePackage) };


          // instanceConfig Field Functions 
          bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
          void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
          inline string getInstanceConfig() const { DARABONBA_PTR_GET_DEFAULT(instanceConfig_, "") };
          inline Item& setInstanceConfig(string instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };


          // instanceID Field Functions 
          bool hasInstanceID() const { return this->instanceID_ != nullptr;};
          void deleteInstanceID() { this->instanceID_ = nullptr;};
          inline string getInstanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
          inline Item& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


          // instanceSpec Field Functions 
          bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
          void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
          inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
          inline Item& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


          // internetIP Field Functions 
          bool hasInternetIP() const { return this->internetIP_ != nullptr;};
          void deleteInternetIP() { this->internetIP_ = nullptr;};
          inline string getInternetIP() const { DARABONBA_PTR_GET_DEFAULT(internetIP_, "") };
          inline Item& setInternetIP(string internetIP) { DARABONBA_PTR_SET_VALUE(internetIP_, internetIP) };


          // intranetIP Field Functions 
          bool hasIntranetIP() const { return this->intranetIP_ != nullptr;};
          void deleteIntranetIP() { this->intranetIP_ = nullptr;};
          inline string getIntranetIP() const { DARABONBA_PTR_GET_DEFAULT(intranetIP_, "") };
          inline Item& setIntranetIP(string intranetIP) { DARABONBA_PTR_SET_VALUE(intranetIP_, intranetIP) };


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


          // listPrice Field Functions 
          bool hasListPrice() const { return this->listPrice_ != nullptr;};
          void deleteListPrice() { this->listPrice_ = nullptr;};
          inline string getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, "") };
          inline Item& setListPrice(string listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


          // listPriceUnit Field Functions 
          bool hasListPriceUnit() const { return this->listPriceUnit_ != nullptr;};
          void deleteListPriceUnit() { this->listPriceUnit_ = nullptr;};
          inline string getListPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(listPriceUnit_, "") };
          inline Item& setListPriceUnit(string listPriceUnit) { DARABONBA_PTR_SET_VALUE(listPriceUnit_, listPriceUnit) };


          // nickName Field Functions 
          bool hasNickName() const { return this->nickName_ != nullptr;};
          void deleteNickName() { this->nickName_ = nullptr;};
          inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
          inline Item& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


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


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline Item& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // resourceGroup Field Functions 
          bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
          void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
          inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
          inline Item& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


          // servicePeriod Field Functions 
          bool hasServicePeriod() const { return this->servicePeriod_ != nullptr;};
          void deleteServicePeriod() { this->servicePeriod_ = nullptr;};
          inline string getServicePeriod() const { DARABONBA_PTR_GET_DEFAULT(servicePeriod_, "") };
          inline Item& setServicePeriod(string servicePeriod) { DARABONBA_PTR_SET_VALUE(servicePeriod_, servicePeriod) };


          // servicePeriodUnit Field Functions 
          bool hasServicePeriodUnit() const { return this->servicePeriodUnit_ != nullptr;};
          void deleteServicePeriodUnit() { this->servicePeriodUnit_ = nullptr;};
          inline string getServicePeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodUnit_, "") };
          inline Item& setServicePeriodUnit(string servicePeriodUnit) { DARABONBA_PTR_SET_VALUE(servicePeriodUnit_, servicePeriodUnit) };


          // subscriptionType Field Functions 
          bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
          void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
          inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
          inline Item& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline Item& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


          // usage Field Functions 
          bool hasUsage() const { return this->usage_ != nullptr;};
          void deleteUsage() { this->usage_ = nullptr;};
          inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
          inline Item& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


          // usageUnit Field Functions 
          bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
          void deleteUsageUnit() { this->usageUnit_ = nullptr;};
          inline string getUsageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
          inline Item& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


          // zone Field Functions 
          bool hasZone() const { return this->zone_ != nullptr;};
          void deleteZone() { this->zone_ = nullptr;};
          inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
          inline Item& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


        protected:
          // The amount deducted by using credit refunds.
          shared_ptr<float> adjustAmount_ {};
          // The billing date. This parameter is returned only if the Granularity parameter is set to DAILY. Format: YYYY-MM-DD.
          shared_ptr<string> billingDate_ {};
          // The billable item. This parameter is returned only if the IsBillingItem parameter is set to true.
          shared_ptr<string> billingItem_ {};
          // The billing type.
          shared_ptr<string> billingType_ {};
          // The amount paid in cash. The amount that was deducted by using credit refunds is not included.
          shared_ptr<float> cashAmount_ {};
          // The code of the commodity. The commodity code is the same as that displayed in User Center.
          shared_ptr<string> commodityCode_ {};
          // The cost center.
          shared_ptr<string> costUnit_ {};
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
          // The amount deducted by using resource plans.
          shared_ptr<string> deductedByResourcePackage_ {};
          // The configurations of the instance.
          shared_ptr<string> instanceConfig_ {};
          // The ID of the instance.
          shared_ptr<string> instanceID_ {};
          // The instance type of the instance.
          shared_ptr<string> instanceSpec_ {};
          // The public IP address.
          shared_ptr<string> internetIP_ {};
          // The private IP address.
          shared_ptr<string> intranetIP_ {};
          // The discount amount.
          shared_ptr<float> invoiceDiscount_ {};
          // The type of the bill.
          // 
          // *   SubscriptionOrder: subscription order
          // *   PayAsYouGoBill: pay-as-you-go bill
          // *   Refund: refund
          // *   Adjustment: reconciliation
          shared_ptr<string> item_ {};
          // The unit price. This parameter is returned only if the isBillingItem parameter is set to true.
          shared_ptr<string> listPrice_ {};
          // The unit of the unit price. This parameter is returned only if the isBillingItem parameter is set to true.
          shared_ptr<string> listPriceUnit_ {};
          // The name of the instance.
          shared_ptr<string> nickName_ {};
          // The unsettled amount.
          shared_ptr<float> outstandingAmount_ {};
          // The ID of the member account. This parameter is returned in a multi-account payment scenario.
          shared_ptr<string> ownerID_ {};
          // The amount paid in cash.
          shared_ptr<float> paymentAmount_ {};
          // The code of the service. The service code is the same as that displayed in User Center.
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
          // The region.
          shared_ptr<string> region_ {};
          // The resource group.
          shared_ptr<string> resourceGroup_ {};
          // The validity period.
          shared_ptr<string> servicePeriod_ {};
          // The unit of the validity period.
          shared_ptr<string> servicePeriodUnit_ {};
          // The billing method. Valid values:
          // 
          // *   Subscription: the subscription billing method
          // *   PayAsYouGo: the pay-as-you-go billing method
          // 
          // **
          // 
          // ****This parameter is returned together with the ProductCode parameter.
          shared_ptr<string> subscriptionType_ {};
          // The tag.
          shared_ptr<string> tag_ {};
          // The usage of the billable item. This parameter is returned only if the isBillingItem parameter is set to true.
          shared_ptr<string> usage_ {};
          // The unit of usage. This parameter is returned only if the isBillingItem parameter is set to true.
          shared_ptr<string> usageUnit_ {};
          // The ID of the zone.
          shared_ptr<string> zone_ {};
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
        && this->accountName_ == nullptr && this->billingCycle_ == nullptr && this->items_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr
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
      inline const Data::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, Data::Items) };
      inline Data::Items getItems() { DARABONBA_PTR_GET(items_, Data::Items) };
      inline Data& setItems(const Data::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(Data::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


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
      // The ID of the account.
      shared_ptr<string> accountID_ {};
      // The name of the account.
      shared_ptr<string> accountName_ {};
      // The billing cycle in the YYYY-MM format.
      shared_ptr<string> billingCycle_ {};
      // The details of the bill.
      shared_ptr<Data::Items> items_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> pageNum_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryInstanceBillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryInstanceBillResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryInstanceBillResponseBody::Data) };
    inline QueryInstanceBillResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryInstanceBillResponseBody::Data) };
    inline QueryInstanceBillResponseBody& setData(const QueryInstanceBillResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryInstanceBillResponseBody& setData(QueryInstanceBillResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryInstanceBillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryInstanceBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryInstanceBillResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<QueryInstanceBillResponseBody::Data> data_ {};
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
