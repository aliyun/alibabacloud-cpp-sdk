// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPLITITEMBILLRESPONSEBODYDATAITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPLITITEMBILLRESPONSEBODYDATAITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class DescribeSplitItemBillResponseBodyDataItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSplitItemBillResponseBodyDataItems& obj) { 
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
      DARABONBA_PTR_TO_JSON(SplitAccountID, splitAccountID_);
      DARABONBA_PTR_TO_JSON(SplitAccountName, splitAccountName_);
      DARABONBA_PTR_TO_JSON(SplitBillingCycle, splitBillingCycle_);
      DARABONBA_PTR_TO_JSON(SplitBillingDate, splitBillingDate_);
      DARABONBA_PTR_TO_JSON(SplitCommodityCode, splitCommodityCode_);
      DARABONBA_PTR_TO_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_TO_JSON(SplitItemName, splitItemName_);
      DARABONBA_PTR_TO_JSON(SplitProductDetail, splitProductDetail_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Usage, usage_);
      DARABONBA_PTR_TO_JSON(UsageUnit, usageUnit_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSplitItemBillResponseBodyDataItems& obj) { 
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
      DARABONBA_PTR_FROM_JSON(SplitAccountID, splitAccountID_);
      DARABONBA_PTR_FROM_JSON(SplitAccountName, splitAccountName_);
      DARABONBA_PTR_FROM_JSON(SplitBillingCycle, splitBillingCycle_);
      DARABONBA_PTR_FROM_JSON(SplitBillingDate, splitBillingDate_);
      DARABONBA_PTR_FROM_JSON(SplitCommodityCode, splitCommodityCode_);
      DARABONBA_PTR_FROM_JSON(SplitItemID, splitItemID_);
      DARABONBA_PTR_FROM_JSON(SplitItemName, splitItemName_);
      DARABONBA_PTR_FROM_JSON(SplitProductDetail, splitProductDetail_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Usage, usage_);
      DARABONBA_PTR_FROM_JSON(UsageUnit, usageUnit_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeSplitItemBillResponseBodyDataItems() = default ;
    DescribeSplitItemBillResponseBodyDataItems(const DescribeSplitItemBillResponseBodyDataItems &) = default ;
    DescribeSplitItemBillResponseBodyDataItems(DescribeSplitItemBillResponseBodyDataItems &&) = default ;
    DescribeSplitItemBillResponseBodyDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSplitItemBillResponseBodyDataItems() = default ;
    DescribeSplitItemBillResponseBodyDataItems& operator=(const DescribeSplitItemBillResponseBodyDataItems &) = default ;
    DescribeSplitItemBillResponseBodyDataItems& operator=(DescribeSplitItemBillResponseBodyDataItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adjustAmount_ != nullptr
        && this->afterDiscountAmount_ != nullptr && this->billAccountID_ != nullptr && this->billAccountName_ != nullptr && this->billingDate_ != nullptr && this->billingItem_ != nullptr
        && this->billingItemCode_ != nullptr && this->billingType_ != nullptr && this->bizType_ != nullptr && this->cashAmount_ != nullptr && this->commodityCode_ != nullptr
        && this->costUnit_ != nullptr && this->currency_ != nullptr && this->deductedByCashCoupons_ != nullptr && this->deductedByCoupons_ != nullptr && this->deductedByPrepaidCard_ != nullptr
        && this->deductedByResourcePackage_ != nullptr && this->instanceConfig_ != nullptr && this->instanceID_ != nullptr && this->instanceSpec_ != nullptr && this->internetIP_ != nullptr
        && this->intranetIP_ != nullptr && this->invoiceDiscount_ != nullptr && this->item_ != nullptr && this->itemName_ != nullptr && this->listPrice_ != nullptr
        && this->listPriceUnit_ != nullptr && this->nickName_ != nullptr && this->outstandingAmount_ != nullptr && this->ownerID_ != nullptr && this->paymentAmount_ != nullptr
        && this->pipCode_ != nullptr && this->pretaxAmount_ != nullptr && this->pretaxGrossAmount_ != nullptr && this->productCode_ != nullptr && this->productDetail_ != nullptr
        && this->productName_ != nullptr && this->productType_ != nullptr && this->region_ != nullptr && this->resourceGroup_ != nullptr && this->servicePeriod_ != nullptr
        && this->servicePeriodUnit_ != nullptr && this->splitAccountID_ != nullptr && this->splitAccountName_ != nullptr && this->splitBillingCycle_ != nullptr && this->splitBillingDate_ != nullptr
        && this->splitCommodityCode_ != nullptr && this->splitItemID_ != nullptr && this->splitItemName_ != nullptr && this->splitProductDetail_ != nullptr && this->subscriptionType_ != nullptr
        && this->tag_ != nullptr && this->usage_ != nullptr && this->usageUnit_ != nullptr && this->zone_ != nullptr; };
    // adjustAmount Field Functions 
    bool hasAdjustAmount() const { return this->adjustAmount_ != nullptr;};
    void deleteAdjustAmount() { this->adjustAmount_ = nullptr;};
    inline float adjustAmount() const { DARABONBA_PTR_GET_DEFAULT(adjustAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setAdjustAmount(float adjustAmount) { DARABONBA_PTR_SET_VALUE(adjustAmount_, adjustAmount) };


    // afterDiscountAmount Field Functions 
    bool hasAfterDiscountAmount() const { return this->afterDiscountAmount_ != nullptr;};
    void deleteAfterDiscountAmount() { this->afterDiscountAmount_ = nullptr;};
    inline float afterDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(afterDiscountAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setAfterDiscountAmount(float afterDiscountAmount) { DARABONBA_PTR_SET_VALUE(afterDiscountAmount_, afterDiscountAmount) };


    // billAccountID Field Functions 
    bool hasBillAccountID() const { return this->billAccountID_ != nullptr;};
    void deleteBillAccountID() { this->billAccountID_ = nullptr;};
    inline string billAccountID() const { DARABONBA_PTR_GET_DEFAULT(billAccountID_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBillAccountID(string billAccountID) { DARABONBA_PTR_SET_VALUE(billAccountID_, billAccountID) };


    // billAccountName Field Functions 
    bool hasBillAccountName() const { return this->billAccountName_ != nullptr;};
    void deleteBillAccountName() { this->billAccountName_ = nullptr;};
    inline string billAccountName() const { DARABONBA_PTR_GET_DEFAULT(billAccountName_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBillAccountName(string billAccountName) { DARABONBA_PTR_SET_VALUE(billAccountName_, billAccountName) };


    // billingDate Field Functions 
    bool hasBillingDate() const { return this->billingDate_ != nullptr;};
    void deleteBillingDate() { this->billingDate_ = nullptr;};
    inline string billingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


    // billingItem Field Functions 
    bool hasBillingItem() const { return this->billingItem_ != nullptr;};
    void deleteBillingItem() { this->billingItem_ = nullptr;};
    inline string billingItem() const { DARABONBA_PTR_GET_DEFAULT(billingItem_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBillingItem(string billingItem) { DARABONBA_PTR_SET_VALUE(billingItem_, billingItem) };


    // billingItemCode Field Functions 
    bool hasBillingItemCode() const { return this->billingItemCode_ != nullptr;};
    void deleteBillingItemCode() { this->billingItemCode_ = nullptr;};
    inline string billingItemCode() const { DARABONBA_PTR_GET_DEFAULT(billingItemCode_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBillingItemCode(string billingItemCode) { DARABONBA_PTR_SET_VALUE(billingItemCode_, billingItemCode) };


    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string billingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // cashAmount Field Functions 
    bool hasCashAmount() const { return this->cashAmount_ != nullptr;};
    void deleteCashAmount() { this->cashAmount_ = nullptr;};
    inline float cashAmount() const { DARABONBA_PTR_GET_DEFAULT(cashAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setCashAmount(float cashAmount) { DARABONBA_PTR_SET_VALUE(cashAmount_, cashAmount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // costUnit Field Functions 
    bool hasCostUnit() const { return this->costUnit_ != nullptr;};
    void deleteCostUnit() { this->costUnit_ = nullptr;};
    inline string costUnit() const { DARABONBA_PTR_GET_DEFAULT(costUnit_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setCostUnit(string costUnit) { DARABONBA_PTR_SET_VALUE(costUnit_, costUnit) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // deductedByCashCoupons Field Functions 
    bool hasDeductedByCashCoupons() const { return this->deductedByCashCoupons_ != nullptr;};
    void deleteDeductedByCashCoupons() { this->deductedByCashCoupons_ = nullptr;};
    inline float deductedByCashCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCashCoupons_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setDeductedByCashCoupons(float deductedByCashCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCashCoupons_, deductedByCashCoupons) };


    // deductedByCoupons Field Functions 
    bool hasDeductedByCoupons() const { return this->deductedByCoupons_ != nullptr;};
    void deleteDeductedByCoupons() { this->deductedByCoupons_ = nullptr;};
    inline float deductedByCoupons() const { DARABONBA_PTR_GET_DEFAULT(deductedByCoupons_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setDeductedByCoupons(float deductedByCoupons) { DARABONBA_PTR_SET_VALUE(deductedByCoupons_, deductedByCoupons) };


    // deductedByPrepaidCard Field Functions 
    bool hasDeductedByPrepaidCard() const { return this->deductedByPrepaidCard_ != nullptr;};
    void deleteDeductedByPrepaidCard() { this->deductedByPrepaidCard_ = nullptr;};
    inline float deductedByPrepaidCard() const { DARABONBA_PTR_GET_DEFAULT(deductedByPrepaidCard_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setDeductedByPrepaidCard(float deductedByPrepaidCard) { DARABONBA_PTR_SET_VALUE(deductedByPrepaidCard_, deductedByPrepaidCard) };


    // deductedByResourcePackage Field Functions 
    bool hasDeductedByResourcePackage() const { return this->deductedByResourcePackage_ != nullptr;};
    void deleteDeductedByResourcePackage() { this->deductedByResourcePackage_ = nullptr;};
    inline string deductedByResourcePackage() const { DARABONBA_PTR_GET_DEFAULT(deductedByResourcePackage_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setDeductedByResourcePackage(string deductedByResourcePackage) { DARABONBA_PTR_SET_VALUE(deductedByResourcePackage_, deductedByResourcePackage) };


    // instanceConfig Field Functions 
    bool hasInstanceConfig() const { return this->instanceConfig_ != nullptr;};
    void deleteInstanceConfig() { this->instanceConfig_ = nullptr;};
    inline string instanceConfig() const { DARABONBA_PTR_GET_DEFAULT(instanceConfig_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setInstanceConfig(string instanceConfig) { DARABONBA_PTR_SET_VALUE(instanceConfig_, instanceConfig) };


    // instanceID Field Functions 
    bool hasInstanceID() const { return this->instanceID_ != nullptr;};
    void deleteInstanceID() { this->instanceID_ = nullptr;};
    inline string instanceID() const { DARABONBA_PTR_GET_DEFAULT(instanceID_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setInstanceID(string instanceID) { DARABONBA_PTR_SET_VALUE(instanceID_, instanceID) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // internetIP Field Functions 
    bool hasInternetIP() const { return this->internetIP_ != nullptr;};
    void deleteInternetIP() { this->internetIP_ = nullptr;};
    inline string internetIP() const { DARABONBA_PTR_GET_DEFAULT(internetIP_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setInternetIP(string internetIP) { DARABONBA_PTR_SET_VALUE(internetIP_, internetIP) };


    // intranetIP Field Functions 
    bool hasIntranetIP() const { return this->intranetIP_ != nullptr;};
    void deleteIntranetIP() { this->intranetIP_ = nullptr;};
    inline string intranetIP() const { DARABONBA_PTR_GET_DEFAULT(intranetIP_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setIntranetIP(string intranetIP) { DARABONBA_PTR_SET_VALUE(intranetIP_, intranetIP) };


    // invoiceDiscount Field Functions 
    bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
    void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
    inline float invoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline string itemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


    // listPrice Field Functions 
    bool hasListPrice() const { return this->listPrice_ != nullptr;};
    void deleteListPrice() { this->listPrice_ = nullptr;};
    inline string listPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setListPrice(string listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


    // listPriceUnit Field Functions 
    bool hasListPriceUnit() const { return this->listPriceUnit_ != nullptr;};
    void deleteListPriceUnit() { this->listPriceUnit_ = nullptr;};
    inline string listPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(listPriceUnit_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setListPriceUnit(string listPriceUnit) { DARABONBA_PTR_SET_VALUE(listPriceUnit_, listPriceUnit) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // outstandingAmount Field Functions 
    bool hasOutstandingAmount() const { return this->outstandingAmount_ != nullptr;};
    void deleteOutstandingAmount() { this->outstandingAmount_ = nullptr;};
    inline float outstandingAmount() const { DARABONBA_PTR_GET_DEFAULT(outstandingAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setOutstandingAmount(float outstandingAmount) { DARABONBA_PTR_SET_VALUE(outstandingAmount_, outstandingAmount) };


    // ownerID Field Functions 
    bool hasOwnerID() const { return this->ownerID_ != nullptr;};
    void deleteOwnerID() { this->ownerID_ = nullptr;};
    inline string ownerID() const { DARABONBA_PTR_GET_DEFAULT(ownerID_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setOwnerID(string ownerID) { DARABONBA_PTR_SET_VALUE(ownerID_, ownerID) };


    // paymentAmount Field Functions 
    bool hasPaymentAmount() const { return this->paymentAmount_ != nullptr;};
    void deletePaymentAmount() { this->paymentAmount_ = nullptr;};
    inline float paymentAmount() const { DARABONBA_PTR_GET_DEFAULT(paymentAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setPaymentAmount(float paymentAmount) { DARABONBA_PTR_SET_VALUE(paymentAmount_, paymentAmount) };


    // pipCode Field Functions 
    bool hasPipCode() const { return this->pipCode_ != nullptr;};
    void deletePipCode() { this->pipCode_ = nullptr;};
    inline string pipCode() const { DARABONBA_PTR_GET_DEFAULT(pipCode_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setPipCode(string pipCode) { DARABONBA_PTR_SET_VALUE(pipCode_, pipCode) };


    // pretaxAmount Field Functions 
    bool hasPretaxAmount() const { return this->pretaxAmount_ != nullptr;};
    void deletePretaxAmount() { this->pretaxAmount_ = nullptr;};
    inline float pretaxAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setPretaxAmount(float pretaxAmount) { DARABONBA_PTR_SET_VALUE(pretaxAmount_, pretaxAmount) };


    // pretaxGrossAmount Field Functions 
    bool hasPretaxGrossAmount() const { return this->pretaxGrossAmount_ != nullptr;};
    void deletePretaxGrossAmount() { this->pretaxGrossAmount_ = nullptr;};
    inline float pretaxGrossAmount() const { DARABONBA_PTR_GET_DEFAULT(pretaxGrossAmount_, 0.0) };
    inline DescribeSplitItemBillResponseBodyDataItems& setPretaxGrossAmount(float pretaxGrossAmount) { DARABONBA_PTR_SET_VALUE(pretaxGrossAmount_, pretaxGrossAmount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline string productDetail() const { DARABONBA_PTR_GET_DEFAULT(productDetail_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setProductDetail(string productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // servicePeriod Field Functions 
    bool hasServicePeriod() const { return this->servicePeriod_ != nullptr;};
    void deleteServicePeriod() { this->servicePeriod_ = nullptr;};
    inline string servicePeriod() const { DARABONBA_PTR_GET_DEFAULT(servicePeriod_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setServicePeriod(string servicePeriod) { DARABONBA_PTR_SET_VALUE(servicePeriod_, servicePeriod) };


    // servicePeriodUnit Field Functions 
    bool hasServicePeriodUnit() const { return this->servicePeriodUnit_ != nullptr;};
    void deleteServicePeriodUnit() { this->servicePeriodUnit_ = nullptr;};
    inline string servicePeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodUnit_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setServicePeriodUnit(string servicePeriodUnit) { DARABONBA_PTR_SET_VALUE(servicePeriodUnit_, servicePeriodUnit) };


    // splitAccountID Field Functions 
    bool hasSplitAccountID() const { return this->splitAccountID_ != nullptr;};
    void deleteSplitAccountID() { this->splitAccountID_ = nullptr;};
    inline string splitAccountID() const { DARABONBA_PTR_GET_DEFAULT(splitAccountID_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitAccountID(string splitAccountID) { DARABONBA_PTR_SET_VALUE(splitAccountID_, splitAccountID) };


    // splitAccountName Field Functions 
    bool hasSplitAccountName() const { return this->splitAccountName_ != nullptr;};
    void deleteSplitAccountName() { this->splitAccountName_ = nullptr;};
    inline string splitAccountName() const { DARABONBA_PTR_GET_DEFAULT(splitAccountName_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitAccountName(string splitAccountName) { DARABONBA_PTR_SET_VALUE(splitAccountName_, splitAccountName) };


    // splitBillingCycle Field Functions 
    bool hasSplitBillingCycle() const { return this->splitBillingCycle_ != nullptr;};
    void deleteSplitBillingCycle() { this->splitBillingCycle_ = nullptr;};
    inline string splitBillingCycle() const { DARABONBA_PTR_GET_DEFAULT(splitBillingCycle_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitBillingCycle(string splitBillingCycle) { DARABONBA_PTR_SET_VALUE(splitBillingCycle_, splitBillingCycle) };


    // splitBillingDate Field Functions 
    bool hasSplitBillingDate() const { return this->splitBillingDate_ != nullptr;};
    void deleteSplitBillingDate() { this->splitBillingDate_ = nullptr;};
    inline string splitBillingDate() const { DARABONBA_PTR_GET_DEFAULT(splitBillingDate_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitBillingDate(string splitBillingDate) { DARABONBA_PTR_SET_VALUE(splitBillingDate_, splitBillingDate) };


    // splitCommodityCode Field Functions 
    bool hasSplitCommodityCode() const { return this->splitCommodityCode_ != nullptr;};
    void deleteSplitCommodityCode() { this->splitCommodityCode_ = nullptr;};
    inline string splitCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(splitCommodityCode_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitCommodityCode(string splitCommodityCode) { DARABONBA_PTR_SET_VALUE(splitCommodityCode_, splitCommodityCode) };


    // splitItemID Field Functions 
    bool hasSplitItemID() const { return this->splitItemID_ != nullptr;};
    void deleteSplitItemID() { this->splitItemID_ = nullptr;};
    inline string splitItemID() const { DARABONBA_PTR_GET_DEFAULT(splitItemID_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitItemID(string splitItemID) { DARABONBA_PTR_SET_VALUE(splitItemID_, splitItemID) };


    // splitItemName Field Functions 
    bool hasSplitItemName() const { return this->splitItemName_ != nullptr;};
    void deleteSplitItemName() { this->splitItemName_ = nullptr;};
    inline string splitItemName() const { DARABONBA_PTR_GET_DEFAULT(splitItemName_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitItemName(string splitItemName) { DARABONBA_PTR_SET_VALUE(splitItemName_, splitItemName) };


    // splitProductDetail Field Functions 
    bool hasSplitProductDetail() const { return this->splitProductDetail_ != nullptr;};
    void deleteSplitProductDetail() { this->splitProductDetail_ = nullptr;};
    inline string splitProductDetail() const { DARABONBA_PTR_GET_DEFAULT(splitProductDetail_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSplitProductDetail(string splitProductDetail) { DARABONBA_PTR_SET_VALUE(splitProductDetail_, splitProductDetail) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string usage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    // usageUnit Field Functions 
    bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
    void deleteUsageUnit() { this->usageUnit_ = nullptr;};
    inline string usageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline DescribeSplitItemBillResponseBodyDataItems& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    // The amount deducted with credit refund.
    std::shared_ptr<float> adjustAmount_ = nullptr;
    std::shared_ptr<float> afterDiscountAmount_ = nullptr;
    // The ID of the account to which the bill belongs.
    std::shared_ptr<string> billAccountID_ = nullptr;
    // The name of the account to which the bill belongs.
    std::shared_ptr<string> billAccountName_ = nullptr;
    // The billing date. Format: YYYY-MM-DD. This parameter is not supported.
    std::shared_ptr<string> billingDate_ = nullptr;
    // The billable item.
    std::shared_ptr<string> billingItem_ = nullptr;
    // The code of the billable item.
    std::shared_ptr<string> billingItemCode_ = nullptr;
    // The billing method.
    std::shared_ptr<string> billingType_ = nullptr;
    // The type of the business.
    std::shared_ptr<string> bizType_ = nullptr;
    // The amount paid in cash. The amount deducted with credit refund is not included.
    std::shared_ptr<float> cashAmount_ = nullptr;
    // The code of the commodity. The code is the same as that displayed in the Split Bill module of the User Center console.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The cost center.
    std::shared_ptr<string> costUnit_ = nullptr;
    // The type of currency. Valid values: CNY, USD, and JPY.
    std::shared_ptr<string> currency_ = nullptr;
    // The amount deducted with vouchers.
    std::shared_ptr<float> deductedByCashCoupons_ = nullptr;
    // The amount deducted with coupons.
    std::shared_ptr<float> deductedByCoupons_ = nullptr;
    // The amount deducted with prepaid cards.
    std::shared_ptr<float> deductedByPrepaidCard_ = nullptr;
    // The amount deducted with resource plans.
    std::shared_ptr<string> deductedByResourcePackage_ = nullptr;
    // The configurations of the instance.
    std::shared_ptr<string> instanceConfig_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceID_ = nullptr;
    // The type of the instance.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The public IP address.
    std::shared_ptr<string> internetIP_ = nullptr;
    // The private IP address.
    std::shared_ptr<string> intranetIP_ = nullptr;
    // The discount amount.
    std::shared_ptr<float> invoiceDiscount_ = nullptr;
    // The type of the bill. Valid values: SubscriptionOrder: the subscription bill. PayAsYouGoBill: the pay-as-you-go bill. Refund: the refund. Adjustment: the adjustment bill.
    std::shared_ptr<string> item_ = nullptr;
    // The name of the split item.
    std::shared_ptr<string> itemName_ = nullptr;
    // The unit price.
    std::shared_ptr<string> listPrice_ = nullptr;
    // The unit of the unit price.
    std::shared_ptr<string> listPriceUnit_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> nickName_ = nullptr;
    // The amount that is unsettled.
    std::shared_ptr<float> outstandingAmount_ = nullptr;
    // The ID of the account that owns the resource. This parameter is returned in multi-account scenario.
    std::shared_ptr<string> ownerID_ = nullptr;
    // The amount paid in cash. The amount deducted with credit refund is included.
    std::shared_ptr<float> paymentAmount_ = nullptr;
    // The code of the service. The code is the same as that displayed in the Split Bill module of the User Center console.
    std::shared_ptr<string> pipCode_ = nullptr;
    // The pretax amount.
    std::shared_ptr<float> pretaxAmount_ = nullptr;
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
    // The ID of the region.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The duration of the service.
    std::shared_ptr<string> servicePeriod_ = nullptr;
    // The unit of the service duration.
    std::shared_ptr<string> servicePeriodUnit_ = nullptr;
    // The ID of the account to which the split bill belongs.
    std::shared_ptr<string> splitAccountID_ = nullptr;
    // The name of the account to which the split item belongs.
    std::shared_ptr<string> splitAccountName_ = nullptr;
    // The billing cycle in which the bill is split.
    std::shared_ptr<string> splitBillingCycle_ = nullptr;
    // The day on which the bill is split.
    std::shared_ptr<string> splitBillingDate_ = nullptr;
    // The code of the split item.
    std::shared_ptr<string> splitCommodityCode_ = nullptr;
    // The ID of the split item.
    std::shared_ptr<string> splitItemID_ = nullptr;
    // The name of the split item.
    std::shared_ptr<string> splitItemName_ = nullptr;
    // The details of the service.
    std::shared_ptr<string> splitProductDetail_ = nullptr;
    // The billing method. Valid values: Subscription: the subscription billing method. PayAsYouGo: the pay-as-you-go billing method.
    std::shared_ptr<string> subscriptionType_ = nullptr;
    // The tag of the resource. If tags added to resources change, the bills generated during the period in which resources and tags are associated are returned.
    std::shared_ptr<string> tag_ = nullptr;
    // The amount of resource usage.
    std::shared_ptr<string> usage_ = nullptr;
    // The unit of usage.
    std::shared_ptr<string> usageUnit_ = nullptr;
    // The zone.
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
