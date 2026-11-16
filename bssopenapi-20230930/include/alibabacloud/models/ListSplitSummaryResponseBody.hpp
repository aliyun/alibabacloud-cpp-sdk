// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPLITSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSPLITSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class ListSplitSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSplitSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSplitSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSplitSummaryResponseBody() = default ;
    ListSplitSummaryResponseBody(const ListSplitSummaryResponseBody &) = default ;
    ListSplitSummaryResponseBody(ListSplitSummaryResponseBody &&) = default ;
    ListSplitSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSplitSummaryResponseBody() = default ;
    ListSplitSummaryResponseBody& operator=(const ListSplitSummaryResponseBody &) = default ;
    ListSplitSummaryResponseBody& operator=(ListSplitSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AmountAfterCouponDeduction, amountAfterCouponDeduction_);
        DARABONBA_PTR_TO_JSON(AmountAfterPromotionDeduction, amountAfterPromotionDeduction_);
        DARABONBA_PTR_TO_JSON(AmountAfterSavingPlanDeduction, amountAfterSavingPlanDeduction_);
        DARABONBA_PTR_TO_JSON(BillingDate, billingDate_);
        DARABONBA_PTR_TO_JSON(BillingItemCode, billingItemCode_);
        DARABONBA_PTR_TO_JSON(BillingItemName, billingItemName_);
        DARABONBA_PTR_TO_JSON(BillingMonth, billingMonth_);
        DARABONBA_PTR_TO_JSON(BillingQuantity, billingQuantity_);
        DARABONBA_PTR_TO_JSON(BillingQuantityUnit, billingQuantityUnit_);
        DARABONBA_PTR_TO_JSON(ChargeDuration, chargeDuration_);
        DARABONBA_PTR_TO_JSON(ChargeDurationUnit, chargeDurationUnit_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(ConsumeType, consumeType_);
        DARABONBA_PTR_TO_JSON(CostCategories, costCategories_);
        DARABONBA_PTR_TO_JSON(CouponAmount, couponAmount_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(FinanceUnitName, financeUnitName_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(LineItemType, lineItemType_);
        DARABONBA_PTR_TO_JSON(ListPrice, listPrice_);
        DARABONBA_PTR_TO_JSON(ListPriceUnit, listPriceUnit_);
        DARABONBA_PTR_TO_JSON(ListUnitPrice, listUnitPrice_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(PromotionAmount, promotionAmount_);
        DARABONBA_PTR_TO_JSON(PurchaseConfiguration, purchaseConfiguration_);
        DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_TO_JSON(RegionName, regionName_);
        DARABONBA_PTR_TO_JSON(RequireAmount, requireAmount_);
        DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerAccountId, resourceOwnerAccountId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerAccountName, resourceOwnerAccountName_);
        DARABONBA_PTR_TO_JSON(ResourcePurchaseAccountId, resourcePurchaseAccountId_);
        DARABONBA_PTR_TO_JSON(ResourcePurchaseAccountName, resourcePurchaseAccountName_);
        DARABONBA_PTR_TO_JSON(ResourceTag, resourceTag_);
        DARABONBA_PTR_TO_JSON(SavingPlanDeductAmount, savingPlanDeductAmount_);
        DARABONBA_PTR_TO_JSON(SavingPlanDeductListPrice, savingPlanDeductListPrice_);
        DARABONBA_PTR_TO_JSON(ServiceEntity, serviceEntity_);
        DARABONBA_PTR_TO_JSON(SplitItemId, splitItemId_);
        DARABONBA_PTR_TO_JSON(SplitItemName, splitItemName_);
        DARABONBA_PTR_TO_JSON(Zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AmountAfterCouponDeduction, amountAfterCouponDeduction_);
        DARABONBA_PTR_FROM_JSON(AmountAfterPromotionDeduction, amountAfterPromotionDeduction_);
        DARABONBA_PTR_FROM_JSON(AmountAfterSavingPlanDeduction, amountAfterSavingPlanDeduction_);
        DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
        DARABONBA_PTR_FROM_JSON(BillingItemCode, billingItemCode_);
        DARABONBA_PTR_FROM_JSON(BillingItemName, billingItemName_);
        DARABONBA_PTR_FROM_JSON(BillingMonth, billingMonth_);
        DARABONBA_PTR_FROM_JSON(BillingQuantity, billingQuantity_);
        DARABONBA_PTR_FROM_JSON(BillingQuantityUnit, billingQuantityUnit_);
        DARABONBA_PTR_FROM_JSON(ChargeDuration, chargeDuration_);
        DARABONBA_PTR_FROM_JSON(ChargeDurationUnit, chargeDurationUnit_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(ConsumeType, consumeType_);
        DARABONBA_PTR_FROM_JSON(CostCategories, costCategories_);
        DARABONBA_PTR_FROM_JSON(CouponAmount, couponAmount_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(FinanceUnitName, financeUnitName_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(LineItemType, lineItemType_);
        DARABONBA_PTR_FROM_JSON(ListPrice, listPrice_);
        DARABONBA_PTR_FROM_JSON(ListPriceUnit, listPriceUnit_);
        DARABONBA_PTR_FROM_JSON(ListUnitPrice, listUnitPrice_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(PromotionAmount, promotionAmount_);
        DARABONBA_PTR_FROM_JSON(PurchaseConfiguration, purchaseConfiguration_);
        DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
        DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
        DARABONBA_PTR_FROM_JSON(RequireAmount, requireAmount_);
        DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerAccountId, resourceOwnerAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerAccountName, resourceOwnerAccountName_);
        DARABONBA_PTR_FROM_JSON(ResourcePurchaseAccountId, resourcePurchaseAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourcePurchaseAccountName, resourcePurchaseAccountName_);
        DARABONBA_PTR_FROM_JSON(ResourceTag, resourceTag_);
        DARABONBA_PTR_FROM_JSON(SavingPlanDeductAmount, savingPlanDeductAmount_);
        DARABONBA_PTR_FROM_JSON(SavingPlanDeductListPrice, savingPlanDeductListPrice_);
        DARABONBA_PTR_FROM_JSON(ServiceEntity, serviceEntity_);
        DARABONBA_PTR_FROM_JSON(SplitItemId, splitItemId_);
        DARABONBA_PTR_FROM_JSON(SplitItemName, splitItemName_);
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
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
      virtual bool empty() const override { return this->amountAfterCouponDeduction_ == nullptr
        && this->amountAfterPromotionDeduction_ == nullptr && this->amountAfterSavingPlanDeduction_ == nullptr && this->billingDate_ == nullptr && this->billingItemCode_ == nullptr && this->billingItemName_ == nullptr
        && this->billingMonth_ == nullptr && this->billingQuantity_ == nullptr && this->billingQuantityUnit_ == nullptr && this->chargeDuration_ == nullptr && this->chargeDurationUnit_ == nullptr
        && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->consumeType_ == nullptr && this->costCategories_ == nullptr
        && this->couponAmount_ == nullptr && this->currency_ == nullptr && this->financeUnitName_ == nullptr && this->hashKey_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->instanceSpec_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->lineItemType_ == nullptr
        && this->listPrice_ == nullptr && this->listPriceUnit_ == nullptr && this->listUnitPrice_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr
        && this->promotionAmount_ == nullptr && this->purchaseConfiguration_ == nullptr && this->regionCode_ == nullptr && this->regionName_ == nullptr && this->requireAmount_ == nullptr
        && this->resourceGroup_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerAccountId_ == nullptr && this->resourceOwnerAccountName_ == nullptr && this->resourcePurchaseAccountId_ == nullptr
        && this->resourcePurchaseAccountName_ == nullptr && this->resourceTag_ == nullptr && this->savingPlanDeductAmount_ == nullptr && this->savingPlanDeductListPrice_ == nullptr && this->serviceEntity_ == nullptr
        && this->splitItemId_ == nullptr && this->splitItemName_ == nullptr && this->zone_ == nullptr; };
      // amountAfterCouponDeduction Field Functions 
      bool hasAmountAfterCouponDeduction() const { return this->amountAfterCouponDeduction_ != nullptr;};
      void deleteAmountAfterCouponDeduction() { this->amountAfterCouponDeduction_ = nullptr;};
      inline string getAmountAfterCouponDeduction() const { DARABONBA_PTR_GET_DEFAULT(amountAfterCouponDeduction_, "") };
      inline Data& setAmountAfterCouponDeduction(string amountAfterCouponDeduction) { DARABONBA_PTR_SET_VALUE(amountAfterCouponDeduction_, amountAfterCouponDeduction) };


      // amountAfterPromotionDeduction Field Functions 
      bool hasAmountAfterPromotionDeduction() const { return this->amountAfterPromotionDeduction_ != nullptr;};
      void deleteAmountAfterPromotionDeduction() { this->amountAfterPromotionDeduction_ = nullptr;};
      inline string getAmountAfterPromotionDeduction() const { DARABONBA_PTR_GET_DEFAULT(amountAfterPromotionDeduction_, "") };
      inline Data& setAmountAfterPromotionDeduction(string amountAfterPromotionDeduction) { DARABONBA_PTR_SET_VALUE(amountAfterPromotionDeduction_, amountAfterPromotionDeduction) };


      // amountAfterSavingPlanDeduction Field Functions 
      bool hasAmountAfterSavingPlanDeduction() const { return this->amountAfterSavingPlanDeduction_ != nullptr;};
      void deleteAmountAfterSavingPlanDeduction() { this->amountAfterSavingPlanDeduction_ = nullptr;};
      inline string getAmountAfterSavingPlanDeduction() const { DARABONBA_PTR_GET_DEFAULT(amountAfterSavingPlanDeduction_, "") };
      inline Data& setAmountAfterSavingPlanDeduction(string amountAfterSavingPlanDeduction) { DARABONBA_PTR_SET_VALUE(amountAfterSavingPlanDeduction_, amountAfterSavingPlanDeduction) };


      // billingDate Field Functions 
      bool hasBillingDate() const { return this->billingDate_ != nullptr;};
      void deleteBillingDate() { this->billingDate_ = nullptr;};
      inline string getBillingDate() const { DARABONBA_PTR_GET_DEFAULT(billingDate_, "") };
      inline Data& setBillingDate(string billingDate) { DARABONBA_PTR_SET_VALUE(billingDate_, billingDate) };


      // billingItemCode Field Functions 
      bool hasBillingItemCode() const { return this->billingItemCode_ != nullptr;};
      void deleteBillingItemCode() { this->billingItemCode_ = nullptr;};
      inline string getBillingItemCode() const { DARABONBA_PTR_GET_DEFAULT(billingItemCode_, "") };
      inline Data& setBillingItemCode(string billingItemCode) { DARABONBA_PTR_SET_VALUE(billingItemCode_, billingItemCode) };


      // billingItemName Field Functions 
      bool hasBillingItemName() const { return this->billingItemName_ != nullptr;};
      void deleteBillingItemName() { this->billingItemName_ = nullptr;};
      inline string getBillingItemName() const { DARABONBA_PTR_GET_DEFAULT(billingItemName_, "") };
      inline Data& setBillingItemName(string billingItemName) { DARABONBA_PTR_SET_VALUE(billingItemName_, billingItemName) };


      // billingMonth Field Functions 
      bool hasBillingMonth() const { return this->billingMonth_ != nullptr;};
      void deleteBillingMonth() { this->billingMonth_ = nullptr;};
      inline string getBillingMonth() const { DARABONBA_PTR_GET_DEFAULT(billingMonth_, "") };
      inline Data& setBillingMonth(string billingMonth) { DARABONBA_PTR_SET_VALUE(billingMonth_, billingMonth) };


      // billingQuantity Field Functions 
      bool hasBillingQuantity() const { return this->billingQuantity_ != nullptr;};
      void deleteBillingQuantity() { this->billingQuantity_ = nullptr;};
      inline string getBillingQuantity() const { DARABONBA_PTR_GET_DEFAULT(billingQuantity_, "") };
      inline Data& setBillingQuantity(string billingQuantity) { DARABONBA_PTR_SET_VALUE(billingQuantity_, billingQuantity) };


      // billingQuantityUnit Field Functions 
      bool hasBillingQuantityUnit() const { return this->billingQuantityUnit_ != nullptr;};
      void deleteBillingQuantityUnit() { this->billingQuantityUnit_ = nullptr;};
      inline string getBillingQuantityUnit() const { DARABONBA_PTR_GET_DEFAULT(billingQuantityUnit_, "") };
      inline Data& setBillingQuantityUnit(string billingQuantityUnit) { DARABONBA_PTR_SET_VALUE(billingQuantityUnit_, billingQuantityUnit) };


      // chargeDuration Field Functions 
      bool hasChargeDuration() const { return this->chargeDuration_ != nullptr;};
      void deleteChargeDuration() { this->chargeDuration_ = nullptr;};
      inline string getChargeDuration() const { DARABONBA_PTR_GET_DEFAULT(chargeDuration_, "") };
      inline Data& setChargeDuration(string chargeDuration) { DARABONBA_PTR_SET_VALUE(chargeDuration_, chargeDuration) };


      // chargeDurationUnit Field Functions 
      bool hasChargeDurationUnit() const { return this->chargeDurationUnit_ != nullptr;};
      void deleteChargeDurationUnit() { this->chargeDurationUnit_ = nullptr;};
      inline string getChargeDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(chargeDurationUnit_, "") };
      inline Data& setChargeDurationUnit(string chargeDurationUnit) { DARABONBA_PTR_SET_VALUE(chargeDurationUnit_, chargeDurationUnit) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Data& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // consumeType Field Functions 
      bool hasConsumeType() const { return this->consumeType_ != nullptr;};
      void deleteConsumeType() { this->consumeType_ = nullptr;};
      inline string getConsumeType() const { DARABONBA_PTR_GET_DEFAULT(consumeType_, "") };
      inline Data& setConsumeType(string consumeType) { DARABONBA_PTR_SET_VALUE(consumeType_, consumeType) };


      // costCategories Field Functions 
      bool hasCostCategories() const { return this->costCategories_ != nullptr;};
      void deleteCostCategories() { this->costCategories_ = nullptr;};
      inline string getCostCategories() const { DARABONBA_PTR_GET_DEFAULT(costCategories_, "") };
      inline Data& setCostCategories(string costCategories) { DARABONBA_PTR_SET_VALUE(costCategories_, costCategories) };


      // couponAmount Field Functions 
      bool hasCouponAmount() const { return this->couponAmount_ != nullptr;};
      void deleteCouponAmount() { this->couponAmount_ = nullptr;};
      inline string getCouponAmount() const { DARABONBA_PTR_GET_DEFAULT(couponAmount_, "") };
      inline Data& setCouponAmount(string couponAmount) { DARABONBA_PTR_SET_VALUE(couponAmount_, couponAmount) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // financeUnitName Field Functions 
      bool hasFinanceUnitName() const { return this->financeUnitName_ != nullptr;};
      void deleteFinanceUnitName() { this->financeUnitName_ = nullptr;};
      inline string getFinanceUnitName() const { DARABONBA_PTR_GET_DEFAULT(financeUnitName_, "") };
      inline Data& setFinanceUnitName(string financeUnitName) { DARABONBA_PTR_SET_VALUE(financeUnitName_, financeUnitName) };


      // hashKey Field Functions 
      bool hasHashKey() const { return this->hashKey_ != nullptr;};
      void deleteHashKey() { this->hashKey_ = nullptr;};
      inline string getHashKey() const { DARABONBA_PTR_GET_DEFAULT(hashKey_, "") };
      inline Data& setHashKey(string hashKey) { DARABONBA_PTR_SET_VALUE(hashKey_, hashKey) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Data& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instanceSpec Field Functions 
      bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
      void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
      inline string getInstanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
      inline Data& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline Data& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline Data& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // lineItemType Field Functions 
      bool hasLineItemType() const { return this->lineItemType_ != nullptr;};
      void deleteLineItemType() { this->lineItemType_ = nullptr;};
      inline string getLineItemType() const { DARABONBA_PTR_GET_DEFAULT(lineItemType_, "") };
      inline Data& setLineItemType(string lineItemType) { DARABONBA_PTR_SET_VALUE(lineItemType_, lineItemType) };


      // listPrice Field Functions 
      bool hasListPrice() const { return this->listPrice_ != nullptr;};
      void deleteListPrice() { this->listPrice_ = nullptr;};
      inline string getListPrice() const { DARABONBA_PTR_GET_DEFAULT(listPrice_, "") };
      inline Data& setListPrice(string listPrice) { DARABONBA_PTR_SET_VALUE(listPrice_, listPrice) };


      // listPriceUnit Field Functions 
      bool hasListPriceUnit() const { return this->listPriceUnit_ != nullptr;};
      void deleteListPriceUnit() { this->listPriceUnit_ = nullptr;};
      inline string getListPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(listPriceUnit_, "") };
      inline Data& setListPriceUnit(string listPriceUnit) { DARABONBA_PTR_SET_VALUE(listPriceUnit_, listPriceUnit) };


      // listUnitPrice Field Functions 
      bool hasListUnitPrice() const { return this->listUnitPrice_ != nullptr;};
      void deleteListUnitPrice() { this->listUnitPrice_ = nullptr;};
      inline string getListUnitPrice() const { DARABONBA_PTR_GET_DEFAULT(listUnitPrice_, "") };
      inline Data& setListUnitPrice(string listUnitPrice) { DARABONBA_PTR_SET_VALUE(listUnitPrice_, listUnitPrice) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // promotionAmount Field Functions 
      bool hasPromotionAmount() const { return this->promotionAmount_ != nullptr;};
      void deletePromotionAmount() { this->promotionAmount_ = nullptr;};
      inline string getPromotionAmount() const { DARABONBA_PTR_GET_DEFAULT(promotionAmount_, "") };
      inline Data& setPromotionAmount(string promotionAmount) { DARABONBA_PTR_SET_VALUE(promotionAmount_, promotionAmount) };


      // purchaseConfiguration Field Functions 
      bool hasPurchaseConfiguration() const { return this->purchaseConfiguration_ != nullptr;};
      void deletePurchaseConfiguration() { this->purchaseConfiguration_ = nullptr;};
      inline string getPurchaseConfiguration() const { DARABONBA_PTR_GET_DEFAULT(purchaseConfiguration_, "") };
      inline Data& setPurchaseConfiguration(string purchaseConfiguration) { DARABONBA_PTR_SET_VALUE(purchaseConfiguration_, purchaseConfiguration) };


      // regionCode Field Functions 
      bool hasRegionCode() const { return this->regionCode_ != nullptr;};
      void deleteRegionCode() { this->regionCode_ = nullptr;};
      inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
      inline Data& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      // regionName Field Functions 
      bool hasRegionName() const { return this->regionName_ != nullptr;};
      void deleteRegionName() { this->regionName_ = nullptr;};
      inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
      inline Data& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


      // requireAmount Field Functions 
      bool hasRequireAmount() const { return this->requireAmount_ != nullptr;};
      void deleteRequireAmount() { this->requireAmount_ = nullptr;};
      inline string getRequireAmount() const { DARABONBA_PTR_GET_DEFAULT(requireAmount_, "") };
      inline Data& setRequireAmount(string requireAmount) { DARABONBA_PTR_SET_VALUE(requireAmount_, requireAmount) };


      // resourceGroup Field Functions 
      bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
      void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
      inline string getResourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
      inline Data& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Data& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceOwnerAccountId Field Functions 
      bool hasResourceOwnerAccountId() const { return this->resourceOwnerAccountId_ != nullptr;};
      void deleteResourceOwnerAccountId() { this->resourceOwnerAccountId_ = nullptr;};
      inline string getResourceOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccountId_, "") };
      inline Data& setResourceOwnerAccountId(string resourceOwnerAccountId) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccountId_, resourceOwnerAccountId) };


      // resourceOwnerAccountName Field Functions 
      bool hasResourceOwnerAccountName() const { return this->resourceOwnerAccountName_ != nullptr;};
      void deleteResourceOwnerAccountName() { this->resourceOwnerAccountName_ = nullptr;};
      inline string getResourceOwnerAccountName() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccountName_, "") };
      inline Data& setResourceOwnerAccountName(string resourceOwnerAccountName) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccountName_, resourceOwnerAccountName) };


      // resourcePurchaseAccountId Field Functions 
      bool hasResourcePurchaseAccountId() const { return this->resourcePurchaseAccountId_ != nullptr;};
      void deleteResourcePurchaseAccountId() { this->resourcePurchaseAccountId_ = nullptr;};
      inline string getResourcePurchaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourcePurchaseAccountId_, "") };
      inline Data& setResourcePurchaseAccountId(string resourcePurchaseAccountId) { DARABONBA_PTR_SET_VALUE(resourcePurchaseAccountId_, resourcePurchaseAccountId) };


      // resourcePurchaseAccountName Field Functions 
      bool hasResourcePurchaseAccountName() const { return this->resourcePurchaseAccountName_ != nullptr;};
      void deleteResourcePurchaseAccountName() { this->resourcePurchaseAccountName_ = nullptr;};
      inline string getResourcePurchaseAccountName() const { DARABONBA_PTR_GET_DEFAULT(resourcePurchaseAccountName_, "") };
      inline Data& setResourcePurchaseAccountName(string resourcePurchaseAccountName) { DARABONBA_PTR_SET_VALUE(resourcePurchaseAccountName_, resourcePurchaseAccountName) };


      // resourceTag Field Functions 
      bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
      void deleteResourceTag() { this->resourceTag_ = nullptr;};
      inline string getResourceTag() const { DARABONBA_PTR_GET_DEFAULT(resourceTag_, "") };
      inline Data& setResourceTag(string resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };


      // savingPlanDeductAmount Field Functions 
      bool hasSavingPlanDeductAmount() const { return this->savingPlanDeductAmount_ != nullptr;};
      void deleteSavingPlanDeductAmount() { this->savingPlanDeductAmount_ = nullptr;};
      inline string getSavingPlanDeductAmount() const { DARABONBA_PTR_GET_DEFAULT(savingPlanDeductAmount_, "") };
      inline Data& setSavingPlanDeductAmount(string savingPlanDeductAmount) { DARABONBA_PTR_SET_VALUE(savingPlanDeductAmount_, savingPlanDeductAmount) };


      // savingPlanDeductListPrice Field Functions 
      bool hasSavingPlanDeductListPrice() const { return this->savingPlanDeductListPrice_ != nullptr;};
      void deleteSavingPlanDeductListPrice() { this->savingPlanDeductListPrice_ = nullptr;};
      inline string getSavingPlanDeductListPrice() const { DARABONBA_PTR_GET_DEFAULT(savingPlanDeductListPrice_, "") };
      inline Data& setSavingPlanDeductListPrice(string savingPlanDeductListPrice) { DARABONBA_PTR_SET_VALUE(savingPlanDeductListPrice_, savingPlanDeductListPrice) };


      // serviceEntity Field Functions 
      bool hasServiceEntity() const { return this->serviceEntity_ != nullptr;};
      void deleteServiceEntity() { this->serviceEntity_ = nullptr;};
      inline string getServiceEntity() const { DARABONBA_PTR_GET_DEFAULT(serviceEntity_, "") };
      inline Data& setServiceEntity(string serviceEntity) { DARABONBA_PTR_SET_VALUE(serviceEntity_, serviceEntity) };


      // splitItemId Field Functions 
      bool hasSplitItemId() const { return this->splitItemId_ != nullptr;};
      void deleteSplitItemId() { this->splitItemId_ = nullptr;};
      inline string getSplitItemId() const { DARABONBA_PTR_GET_DEFAULT(splitItemId_, "") };
      inline Data& setSplitItemId(string splitItemId) { DARABONBA_PTR_SET_VALUE(splitItemId_, splitItemId) };


      // splitItemName Field Functions 
      bool hasSplitItemName() const { return this->splitItemName_ != nullptr;};
      void deleteSplitItemName() { this->splitItemName_ = nullptr;};
      inline string getSplitItemName() const { DARABONBA_PTR_GET_DEFAULT(splitItemName_, "") };
      inline Data& setSplitItemName(string splitItemName) { DARABONBA_PTR_SET_VALUE(splitItemName_, splitItemName) };


      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
      inline Data& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


    protected:
      // The amount after coupon deduction, which equals AmountAfterPromotionDeduction minus CouponAmount.
      shared_ptr<string> amountAfterCouponDeduction_ {};
      // The amount after discount, which is the amount after official website discounts and contract discounts are applied, but before coupon deductions. When the savings plan deduction data is complete, this equals ListPrice minus SavingPlanDeductListPrice minus PromotionAmount. When the savings plan deduction list price is unavailable, this is calculated as ListPrice minus PromotionAmount.
      shared_ptr<string> amountAfterPromotionDeduction_ {};
      // The amount after savings plan deduction, which equals ListPrice minus SavingPlanDeductListPrice. This may be empty when there is no savings plan deduction data.
      shared_ptr<string> amountAfterSavingPlanDeduction_ {};
      // The billing date, which is the date when the user consumed the cloud service. The format is yyyy-MM-dd. This has a value only when the data is summarized by day.
      shared_ptr<string> billingDate_ {};
      // The billing item code, which is the billing item to which the cloud resource expense belongs. Whether this field has a value depends on the split bill records and summary data.
      shared_ptr<string> billingItemCode_ {};
      // The billing item name.
      shared_ptr<string> billingItemName_ {};
      // The billing month, which is the month to which the expense belongs. The format is yyyy-MM.
      shared_ptr<string> billingMonth_ {};
      // The usage, which is the total usage that is ultimately billed. This must be understood in combination with the product, billing item, and unit. Do not directly add up the values if the units or billing rules are different.
      shared_ptr<string> billingQuantity_ {};
      // The unit of usage, used in conjunction with BillingQuantity.
      shared_ptr<string> billingQuantityUnit_ {};
      // The total duration of purchasing or using cloud products. This field is used when the corresponding billing method includes a duration.
      shared_ptr<string> chargeDuration_ {};
      // The unit of duration, used in conjunction with ChargeDuration.
      shared_ptr<string> chargeDurationUnit_ {};
      // The display name of the billing method, returned based on the request language, such as Subscription or Pay-as-you-go. Use Subscription or PayAsYouGo for filtering.
      shared_ptr<string> chargeType_ {};
      // The commodity code, which is the unique identifier of a specific commodity under a cloud service.
      shared_ptr<string> commodityCode_ {};
      // The commodity name.
      shared_ptr<string> commodityName_ {};
      // The display name of the transaction type, which identifies the transaction corresponding to the bill, such as new purchase, renewal, upgrade, downgrade, unsubscription, pay-as-you-go, and adjustment. Do not use the display name as the ConsumeType filter code.
      shared_ptr<string> consumeType_ {};
      // The cost category, which indicates the cost category and category value to which the record belongs. It is returned as a string. The specific content is subject to the bill record and can be empty.
      shared_ptr<string> costCategories_ {};
      // The coupon deduction amount. This amount cannot be used for invoicing.
      shared_ptr<string> couponAmount_ {};
      // The currency corresponding to the amounts and prices.
      shared_ptr<string> currency_ {};
      // The name of the financial unit. A financial unit is a unit used to group or classify expenses and must be maintained by the user.
      shared_ptr<string> financeUnitName_ {};
      // The identifier of the summary record, used as an opaque string. This can be empty. The identifier may change when summary dimensions such as resource groups and tags change.
      shared_ptr<string> hashKey_ {};
      // The instance ID at the billing granularity, which is the dimension for expense statistics and summary when a cloud service generates a bill. This may be different from the resource ID.
      shared_ptr<string> instanceId_ {};
      // The resource name, which is the custom name given to the cloud resource by the user. Whether this field has a value depends on whether the product and resource information can be obtained.
      shared_ptr<string> instanceName_ {};
      // The specification, which describes the specification of the resource or billing item associated with this record.
      shared_ptr<string> instanceSpec_ {};
      // The public IP address. This is returned only when the product supports it and the relevant resource information can be obtained.
      shared_ptr<string> internetIp_ {};
      // The private IP address. This is returned only when the product supports it and the relevant resource information can be obtained.
      shared_ptr<string> intranetIp_ {};
      // The display name of the expense type, which identifies the nature of the expense generated by the bill, such as subscription prepaid expense, subscription unsubscription expense, pay-as-you-go expense for cloud resources, adjustment expense, and round-down expense. Do not use the display name as the LineItemType filter code.
      shared_ptr<string> lineItemType_ {};
      // The total list price, which is the total list price of the selected configuration.
      shared_ptr<string> listPrice_ {};
      // The price unit, used in conjunction with ListUnitPrice.
      shared_ptr<string> listPriceUnit_ {};
      // The list price on the official website, which is the list unit price of the commodity. Whether this field has a value depends on the split bill and summary data. Do not multiply the total usage by a unit price to recalculate all bills.
      shared_ptr<string> listUnitPrice_ {};
      // The product code, which is the unique identifier of a specific cloud service on Alibaba Cloud.
      shared_ptr<string> productCode_ {};
      // The product name.
      shared_ptr<string> productName_ {};
      // The discount amount, which is the total discount amount on the bill, including official website discounts and contract discounts.
      shared_ptr<string> promotionAmount_ {};
      // The purchase configuration of the billing item, which describes the configurations related to the billing item.
      shared_ptr<string> purchaseConfiguration_ {};
      // The region code, which is the logical region code where the cloud resource is located.
      shared_ptr<string> regionCode_ {};
      // The region name, which indicates the region selected when the order was placed.
      shared_ptr<string> regionName_ {};
      // The payable amount (tax-inclusive), which is the actual amount the user needs to pay after various discounts, savings plan deductions, and coupon deductions are applied. When all amount fields are complete, this equals ListPrice minus SavingPlanDeductListPrice minus PromotionAmount minus CouponAmount. Use this field for expense verification. If other amount fields are missing, do not treat empty values as zero to calculate the payable amount.
      shared_ptr<string> requireAmount_ {};
      // The resource group, which is the group where cloud resources are located as configured by the user in the Resource Management console.
      shared_ptr<string> resourceGroup_ {};
      // The resource ID, which is the identifier used to uniquely identify a resource in a cloud service.
      shared_ptr<string> resourceId_ {};
      // The ID of the resource ownership account, which is the ID of the account that actually uses the resource and may differ from the purchasing account.
      shared_ptr<string> resourceOwnerAccountId_ {};
      // The name of the resource ownership account.
      shared_ptr<string> resourceOwnerAccountName_ {};
      // The ID of the resource purchaser account, which is the ID of the account that purchases the resource.
      shared_ptr<string> resourcePurchaseAccountId_ {};
      // The name of the resource purchaser account.
      shared_ptr<string> resourcePurchaseAccountName_ {};
      // The resource tag, which is the custom tag added by the user to Alibaba Cloud resources. It is returned as a string and can be empty.
      shared_ptr<string> resourceTag_ {};
      // The savings plan deduction amount, which is the committed amount consumed by the savings plan itself. This has a different meaning from SavingPlanDeductListPrice, cannot be used interchangeably, and should not be deducted from the payable amount again.
      shared_ptr<string> savingPlanDeductAmount_ {};
      // The total list price deducted by the savings plan, which is the total list price of the pay-as-you-go cloud resources deducted when a savings plan is applied.
      shared_ptr<string> savingPlanDeductListPrice_ {};
      // The service entity, which is the name of the company that provides the product or service. Alibaba Cloud sells a wide range of products, and some products may be provided by different companies.
      shared_ptr<string> serviceEntity_ {};
      // The split item ID, which is the code corresponding to the specific split granularity of the bill. For example, when OSS is split by bucket, this is the bucket code. This field may be empty for records that are not split.
      shared_ptr<string> splitItemId_ {};
      // The split item name, which is the name corresponding to the specific split granularity of the bill.
      shared_ptr<string> splitItemName_ {};
      // The zone. The display name may be returned.
      shared_ptr<string> zone_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSplitSummaryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSplitSummaryResponseBody::Data>) };
    inline vector<ListSplitSummaryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSplitSummaryResponseBody::Data>) };
    inline ListSplitSummaryResponseBody& setData(const vector<ListSplitSummaryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSplitSummaryResponseBody& setData(vector<ListSplitSummaryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListSplitSummaryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSplitSummaryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSplitSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The array of split bill summary records returned in this request. This array may be empty if no matching records are found.
    shared_ptr<vector<ListSplitSummaryResponseBody::Data>> data_ {};
    // The maximum number of records per page used in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The token for querying the next page. If it is not empty, use it as the NextToken for the next request. If it is empty or not returned, the pagination ends. Even if the number of returned records is less than MaxResults or the current page is empty, you must continue to query as long as the token is not empty.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request, which is used to locate the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
