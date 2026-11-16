// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMESUMMARYRESPONSEBODY_HPP_
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
  class ListConsumeSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumeSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumeSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConsumeSummaryResponseBody() = default ;
    ListConsumeSummaryResponseBody(const ListConsumeSummaryResponseBody &) = default ;
    ListConsumeSummaryResponseBody(ListConsumeSummaryResponseBody &&) = default ;
    ListConsumeSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumeSummaryResponseBody() = default ;
    ListConsumeSummaryResponseBody& operator=(const ListConsumeSummaryResponseBody &) = default ;
    ListConsumeSummaryResponseBody& operator=(ListConsumeSummaryResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(BillingFormula, billingFormula_);
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
        DARABONBA_PTR_TO_JSON(CouponAmount, couponAmount_);
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(HashKey, hashKey_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
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
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerAccountId, resourceOwnerAccountId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerAccountName, resourceOwnerAccountName_);
        DARABONBA_PTR_TO_JSON(ResourcePurchaseAccountId, resourcePurchaseAccountId_);
        DARABONBA_PTR_TO_JSON(ResourcePurchaseAccountName, resourcePurchaseAccountName_);
        DARABONBA_PTR_TO_JSON(SavingPlanDeductAmount, savingPlanDeductAmount_);
        DARABONBA_PTR_TO_JSON(SavingPlanDeductListPrice, savingPlanDeductListPrice_);
        DARABONBA_PTR_TO_JSON(ServiceEntity, serviceEntity_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AmountAfterCouponDeduction, amountAfterCouponDeduction_);
        DARABONBA_PTR_FROM_JSON(AmountAfterPromotionDeduction, amountAfterPromotionDeduction_);
        DARABONBA_PTR_FROM_JSON(AmountAfterSavingPlanDeduction, amountAfterSavingPlanDeduction_);
        DARABONBA_PTR_FROM_JSON(BillingDate, billingDate_);
        DARABONBA_PTR_FROM_JSON(BillingFormula, billingFormula_);
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
        DARABONBA_PTR_FROM_JSON(CouponAmount, couponAmount_);
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(HashKey, hashKey_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
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
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerAccountId, resourceOwnerAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerAccountName, resourceOwnerAccountName_);
        DARABONBA_PTR_FROM_JSON(ResourcePurchaseAccountId, resourcePurchaseAccountId_);
        DARABONBA_PTR_FROM_JSON(ResourcePurchaseAccountName, resourcePurchaseAccountName_);
        DARABONBA_PTR_FROM_JSON(SavingPlanDeductAmount, savingPlanDeductAmount_);
        DARABONBA_PTR_FROM_JSON(SavingPlanDeductListPrice, savingPlanDeductListPrice_);
        DARABONBA_PTR_FROM_JSON(ServiceEntity, serviceEntity_);
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
        && this->amountAfterPromotionDeduction_ == nullptr && this->amountAfterSavingPlanDeduction_ == nullptr && this->billingDate_ == nullptr && this->billingFormula_ == nullptr && this->billingItemCode_ == nullptr
        && this->billingItemName_ == nullptr && this->billingMonth_ == nullptr && this->billingQuantity_ == nullptr && this->billingQuantityUnit_ == nullptr && this->chargeDuration_ == nullptr
        && this->chargeDurationUnit_ == nullptr && this->chargeType_ == nullptr && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->consumeType_ == nullptr
        && this->couponAmount_ == nullptr && this->currency_ == nullptr && this->hashKey_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->instanceSpec_ == nullptr && this->lineItemType_ == nullptr && this->listPrice_ == nullptr && this->listPriceUnit_ == nullptr && this->listUnitPrice_ == nullptr
        && this->productCode_ == nullptr && this->productName_ == nullptr && this->promotionAmount_ == nullptr && this->purchaseConfiguration_ == nullptr && this->regionCode_ == nullptr
        && this->regionName_ == nullptr && this->requireAmount_ == nullptr && this->resourceId_ == nullptr && this->resourceOwnerAccountId_ == nullptr && this->resourceOwnerAccountName_ == nullptr
        && this->resourcePurchaseAccountId_ == nullptr && this->resourcePurchaseAccountName_ == nullptr && this->savingPlanDeductAmount_ == nullptr && this->savingPlanDeductListPrice_ == nullptr && this->serviceEntity_ == nullptr; };
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


      // billingFormula Field Functions 
      bool hasBillingFormula() const { return this->billingFormula_ != nullptr;};
      void deleteBillingFormula() { this->billingFormula_ = nullptr;};
      inline string getBillingFormula() const { DARABONBA_PTR_GET_DEFAULT(billingFormula_, "") };
      inline Data& setBillingFormula(string billingFormula) { DARABONBA_PTR_SET_VALUE(billingFormula_, billingFormula) };


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


    protected:
      // The amount after coupon deduction, which is the result of deducting coupons from the amount after discount. When all related fields are available, it equals AmountAfterPromotionDeduction - CouponAmount.
      shared_ptr<string> amountAfterCouponDeduction_ {};
      // The amount after discount, which represents the amount after applying discounts such as website promotions and contract discounts. Coupons are not deducted at this point. When all related fields are available, it equals AmountAfterSavingPlanDeduction - PromotionAmount.
      shared_ptr<string> amountAfterPromotionDeduction_ {};
      // The amount after savings plan deduction, which is the remaining amount after deducting the list price portion covered by the savings plan. When all related fields are available, it equals ListPrice - SavingPlanDeductListPrice.
      shared_ptr<string> amountAfterSavingPlanDeduction_ {};
      // The billing date, which is the consumption date of the cloud product, in the format of yyyy-MM-dd. It has a value only when summarized by day.
      shared_ptr<string> billingDate_ {};
      // The billing formula, which describes how the total list price is calculated. It should be understood in conjunction with the list price on the Alibaba Cloud website, usage, duration, and other billing factors.
      shared_ptr<string> billingFormula_ {};
      // The billing item code, which identifies the billing item to which the fee belongs.
      shared_ptr<string> billingItemCode_ {};
      // The billing item name, which is the display name of the billing item to which the fee belongs.
      shared_ptr<string> billingItemName_ {};
      // The billing month, which represents the billing month to which the fee belongs, in the format of yyyy-MM.
      shared_ptr<string> billingMonth_ {};
      // The usage that is ultimately used for fee calculation. If usage deduction is applied, this value is the usage before deduction minus the usage deducted by resource plans, free quotas, and other deductions.
      shared_ptr<string> billingQuantity_ {};
      // The usage unit, used in conjunction with BillingQuantity.
      shared_ptr<string> billingQuantityUnit_ {};
      // The duration, which represents the purchase or usage duration involved in billing. It has a value only when the billing formula involves time. If duration deduction is applied, this value is the duration before deduction minus the deducted duration.
      shared_ptr<string> chargeDuration_ {};
      // The duration unit, used in conjunction with ChargeDuration.
      shared_ptr<string> chargeDurationUnit_ {};
      // The billing method. The display name such as prepaid or pay-as-you-go is returned.
      shared_ptr<string> chargeType_ {};
      // The commodity code, used to uniquely identify a specific commodity under a cloud product.
      shared_ptr<string> commodityCode_ {};
      // The commodity name, which is the display name of a specific commodity under a cloud product.
      shared_ptr<string> commodityName_ {};
      // The transaction type, which describes the transaction behavior that generated the bill, such as new purchase, renewal, upgrade, downgrade, unsubscription, pay-as-you-go, or adjustment. The display name is returned.
      shared_ptr<string> consumeType_ {};
      // The coupon deduction amount, which is the fee covered by coupons. This amount cannot be used for invoicing.
      shared_ptr<string> couponAmount_ {};
      // The currency, which represents the currency used for the list price and amounts in this record. For example, CNY indicates Chinese Yuan.
      shared_ptr<string> currency_ {};
      // The summary record identifier, used as an opaque string. It can be empty.
      shared_ptr<string> hashKey_ {};
      // The instance ID at the billing granularity, which represents the instance identity used to aggregate fees when a cloud product generates a bill. The billing granularity may differ from the resource management granularity, so it may be different from ResourceId.
      shared_ptr<string> instanceId_ {};
      // The resource name, which is the name set by the user for the cloud resource. Whether it is returned depends on whether the product supports querying and whether the resource information is available.
      shared_ptr<string> instanceName_ {};
      // The specification, used to describe the specification information corresponding to the billing item.
      shared_ptr<string> instanceSpec_ {};
      // The line item type, which describes the nature of the fee, such as subscription prepaid fee, subscription postpaid fee, subscription unsubscription fee, pay-as-you-go fee for cloud resources, adjustment fee, or rounding fee. The display name is returned.
      shared_ptr<string> lineItemType_ {};
      // The total list price, which represents the total amount calculated based on the list price for the purchased cloud resource configuration. Savings plan deductions, discounts, and coupons are not deducted yet. Note that ListPrice in this API is the total amount. For the list unit price, see ListUnitPrice.
      shared_ptr<string> listPrice_ {};
      // The price unit, which is the unit corresponding to the list unit price ListUnitPrice, such as CNY/GB.
      shared_ptr<string> listPriceUnit_ {};
      // The list price on the Alibaba Cloud website, which is the list unit price of the commodity. It differs in meaning from the total list price ListPrice. In scenarios such as tiered pricing, you cannot recalculate the fee by simply multiplying a single unit price by the total usage.
      shared_ptr<string> listUnitPrice_ {};
      // The product code, used to uniquely identify a specific cloud product.
      shared_ptr<string> productCode_ {};
      // The product name, which is the display name of the cloud product.
      shared_ptr<string> productName_ {};
      // The discount amount, which represents the total discounts such as website promotions and contract discounts. Coupon deductions are separately recorded in CouponAmount.
      shared_ptr<string> promotionAmount_ {};
      // The configuration, used to describe the configuration options corresponding to the billing item.
      shared_ptr<string> purchaseConfiguration_ {};
      // The region code, which represents the code of the logical region where the cloud resource is located.
      shared_ptr<string> regionCode_ {};
      // The region, which represents the display name of the region where the cloud resource is located. For products sold by region, it usually corresponds to the region selected when placing the order.
      shared_ptr<string> regionName_ {};
      // The payable amount, which is the fee to be paid after savings plan deductions, discounts, and coupon deductions. In the new version of bills, this corresponds to the payable amount (tax-inclusive) definition. For fee verification, refer to the actual return value of this field.
      shared_ptr<string> requireAmount_ {};
      // The resource ID, used to uniquely identify a cloud resource in the corresponding cloud product or service.
      shared_ptr<string> resourceId_ {};
      // The resource ownership account ID, which is the ID of the account that actually uses the cloud resource instance. It may be different from the purchasing account.
      shared_ptr<string> resourceOwnerAccountId_ {};
      // The resource ownership account, which is the name of the account that actually uses the cloud resource instance. It may be different from the purchasing account.
      shared_ptr<string> resourceOwnerAccountName_ {};
      // The ID of the resource purchasing account, which is the ID of the account that placed the order to purchase the cloud resource instance.
      shared_ptr<string> resourcePurchaseAccountId_ {};
      // The resource purchasing account, which is the name of the account that placed the order to purchase the cloud resource instance.
      shared_ptr<string> resourcePurchaseAccountName_ {};
      // The savings plan deduction amount, which is the committed spend of the savings plan consumed to complete this deduction. It is not the list price amount of the deducted resource and cannot replace SavingPlanDeductListPrice for deduction from the total list price.
      shared_ptr<string> savingPlanDeductAmount_ {};
      // The savings plan deduction list price, which is the amount calculated based on the list price for the pay-as-you-go resource fees deducted by the savings plan.
      shared_ptr<string> savingPlanDeductListPrice_ {};
      // The service entity, which is the name of the company that actually provides the product or service. Different products may correspond to different companies.
      shared_ptr<string> serviceEntity_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListConsumeSummaryResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListConsumeSummaryResponseBody::Data>) };
    inline vector<ListConsumeSummaryResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListConsumeSummaryResponseBody::Data>) };
    inline ListConsumeSummaryResponseBody& setData(const vector<ListConsumeSummaryResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListConsumeSummaryResponseBody& setData(vector<ListConsumeSummaryResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConsumeSummaryResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConsumeSummaryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConsumeSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The consumption summary records returned in this request. An empty array is returned if no matching records are found.
    shared_ptr<vector<ListConsumeSummaryResponseBody::Data>> data_ {};
    // The maximum number of records per page used in this query.
    shared_ptr<int32_t> maxResults_ {};
    // The query token for the next page. If a non-empty value is returned, pass it as is to the next request and keep other query conditions unchanged. If it is not returned or is empty, pagination ends.
    shared_ptr<string> nextToken_ {};
    // The unique identifier of the request, used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
