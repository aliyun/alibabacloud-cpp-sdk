// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICECOMPONENTSVALUE_HPP_
#define ALIBABACLOUD_MODELS_PRICECOMPONENTSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class PriceComponentsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceComponentsValue& obj) { 
      DARABONBA_PTR_TO_JSON(chargeComposition, chargeComposition_);
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(effectiveModuleSum, effectiveModuleSum_);
      DARABONBA_PTR_TO_JSON(moduleSum, moduleSum_);
      DARABONBA_PTR_TO_JSON(modules, modules_);
      DARABONBA_PTR_TO_JSON(originalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(pricingUnit, pricingUnit_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(tradePrice, tradePrice_);
      DARABONBA_PTR_TO_JSON(usageCharges, usageCharges_);
    };
    friend void from_json(const Darabonba::Json& j, PriceComponentsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeComposition, chargeComposition_);
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(effectiveModuleSum, effectiveModuleSum_);
      DARABONBA_PTR_FROM_JSON(moduleSum, moduleSum_);
      DARABONBA_PTR_FROM_JSON(modules, modules_);
      DARABONBA_PTR_FROM_JSON(originalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(pricingUnit, pricingUnit_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(tradePrice, tradePrice_);
      DARABONBA_PTR_FROM_JSON(usageCharges, usageCharges_);
    };
    PriceComponentsValue() = default ;
    PriceComponentsValue(const PriceComponentsValue &) = default ;
    PriceComponentsValue(PriceComponentsValue &&) = default ;
    PriceComponentsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceComponentsValue() = default ;
    PriceComponentsValue& operator=(const PriceComponentsValue &) = default ;
    PriceComponentsValue& operator=(PriceComponentsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageCharges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageCharges& obj) { 
        DARABONBA_PTR_TO_JSON(assumedQuantity, assumedQuantity_);
        DARABONBA_PTR_TO_JSON(assumedQuantityCost, assumedQuantityCost_);
        DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(originalPricePerUnit, originalPricePerUnit_);
        DARABONBA_PTR_TO_JSON(pricePerUnit, pricePerUnit_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, UsageCharges& obj) { 
        DARABONBA_PTR_FROM_JSON(assumedQuantity, assumedQuantity_);
        DARABONBA_PTR_FROM_JSON(assumedQuantityCost, assumedQuantityCost_);
        DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(originalPricePerUnit, originalPricePerUnit_);
        DARABONBA_PTR_FROM_JSON(pricePerUnit, pricePerUnit_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
      };
      UsageCharges() = default ;
      UsageCharges(const UsageCharges &) = default ;
      UsageCharges(UsageCharges &&) = default ;
      UsageCharges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageCharges() = default ;
      UsageCharges& operator=(const UsageCharges &) = default ;
      UsageCharges& operator=(UsageCharges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumedQuantity_ == nullptr
        && this->assumedQuantityCost_ == nullptr && this->moduleCode_ == nullptr && this->originalPricePerUnit_ == nullptr && this->pricePerUnit_ == nullptr && this->unit_ == nullptr; };
      // assumedQuantity Field Functions 
      bool hasAssumedQuantity() const { return this->assumedQuantity_ != nullptr;};
      void deleteAssumedQuantity() { this->assumedQuantity_ = nullptr;};
      inline float getAssumedQuantity() const { DARABONBA_PTR_GET_DEFAULT(assumedQuantity_, 0.0) };
      inline UsageCharges& setAssumedQuantity(float assumedQuantity) { DARABONBA_PTR_SET_VALUE(assumedQuantity_, assumedQuantity) };


      // assumedQuantityCost Field Functions 
      bool hasAssumedQuantityCost() const { return this->assumedQuantityCost_ != nullptr;};
      void deleteAssumedQuantityCost() { this->assumedQuantityCost_ = nullptr;};
      inline float getAssumedQuantityCost() const { DARABONBA_PTR_GET_DEFAULT(assumedQuantityCost_, 0.0) };
      inline UsageCharges& setAssumedQuantityCost(float assumedQuantityCost) { DARABONBA_PTR_SET_VALUE(assumedQuantityCost_, assumedQuantityCost) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline UsageCharges& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // originalPricePerUnit Field Functions 
      bool hasOriginalPricePerUnit() const { return this->originalPricePerUnit_ != nullptr;};
      void deleteOriginalPricePerUnit() { this->originalPricePerUnit_ = nullptr;};
      inline float getOriginalPricePerUnit() const { DARABONBA_PTR_GET_DEFAULT(originalPricePerUnit_, 0.0) };
      inline UsageCharges& setOriginalPricePerUnit(float originalPricePerUnit) { DARABONBA_PTR_SET_VALUE(originalPricePerUnit_, originalPricePerUnit) };


      // pricePerUnit Field Functions 
      bool hasPricePerUnit() const { return this->pricePerUnit_ != nullptr;};
      void deletePricePerUnit() { this->pricePerUnit_ = nullptr;};
      inline float getPricePerUnit() const { DARABONBA_PTR_GET_DEFAULT(pricePerUnit_, 0.0) };
      inline UsageCharges& setPricePerUnit(float pricePerUnit) { DARABONBA_PTR_SET_VALUE(pricePerUnit_, pricePerUnit) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline UsageCharges& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The estimated usage passed by the caller through PricingContext. This field has a value only when it is greater than 1. In this case, this entry also provides the assumedQuantityCost calculated based on this assumed usage.
      shared_ptr<float> assumedQuantity_ {};
      // The module cost calculated based on assumedQuantity, which equals pricePerUnit × assumedQuantity. This cost is not included in totalAmount because it is based on the assumed usage reported by the caller and is not a cost necessarily incurred by this call.
      shared_ptr<float> assumedQuantityCost_ {};
      // The billing module code, such as TrafficOut or NatCu. This corresponds to the moduleCode in modules.
      shared_ptr<string> moduleCode_ {};
      // The original unit price before discounts, in CNY/unit, which is also normalized. This field is empty when not provided by the upstream. The difference between this value and pricePerUnit is the unit price discount for this module.
      shared_ptr<float> originalPricePerUnit_ {};
      // The discounted unit price, in CNY/unit. The actual cost equals pricePerUnit × actual usage. Because the usage is unknown during pricing, it is not included in totalAmount. If the caller passed an estimated usage, the total returned by the upstream is normalized back to the unit price based on that usage.
      shared_ptr<float> pricePerUnit_ {};
      // The usage unit, such as GB, CU, or 10,000 requests. This comes from the module-level billing.unit annotation in the mapping. The dimension of pricePerUnit is CNY/unit.
      shared_ptr<string> unit_ {};
    };

    class Modules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Modules& obj) { 
        DARABONBA_PTR_TO_JSON(billingMode, billingMode_);
        DARABONBA_PTR_TO_JSON(costAfterDiscount, costAfterDiscount_);
        DARABONBA_PTR_TO_JSON(invoiceDiscount, invoiceDiscount_);
        DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(originalCost, originalCost_);
        DARABONBA_PTR_TO_JSON(quantityUsedForQuote, quantityUsedForQuote_);
        DARABONBA_PTR_TO_JSON(unitPrice, unitPrice_);
        DARABONBA_PTR_TO_JSON(usageUnit, usageUnit_);
      };
      friend void from_json(const Darabonba::Json& j, Modules& obj) { 
        DARABONBA_PTR_FROM_JSON(billingMode, billingMode_);
        DARABONBA_PTR_FROM_JSON(costAfterDiscount, costAfterDiscount_);
        DARABONBA_PTR_FROM_JSON(invoiceDiscount, invoiceDiscount_);
        DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(originalCost, originalCost_);
        DARABONBA_PTR_FROM_JSON(quantityUsedForQuote, quantityUsedForQuote_);
        DARABONBA_PTR_FROM_JSON(unitPrice, unitPrice_);
        DARABONBA_PTR_FROM_JSON(usageUnit, usageUnit_);
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
      virtual bool empty() const override { return this->billingMode_ == nullptr
        && this->costAfterDiscount_ == nullptr && this->invoiceDiscount_ == nullptr && this->moduleCode_ == nullptr && this->originalCost_ == nullptr && this->quantityUsedForQuote_ == nullptr
        && this->unitPrice_ == nullptr && this->usageUnit_ == nullptr; };
      // billingMode Field Functions 
      bool hasBillingMode() const { return this->billingMode_ != nullptr;};
      void deleteBillingMode() { this->billingMode_ = nullptr;};
      inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
      inline Modules& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


      // costAfterDiscount Field Functions 
      bool hasCostAfterDiscount() const { return this->costAfterDiscount_ != nullptr;};
      void deleteCostAfterDiscount() { this->costAfterDiscount_ = nullptr;};
      inline float getCostAfterDiscount() const { DARABONBA_PTR_GET_DEFAULT(costAfterDiscount_, 0.0) };
      inline Modules& setCostAfterDiscount(float costAfterDiscount) { DARABONBA_PTR_SET_VALUE(costAfterDiscount_, costAfterDiscount) };


      // invoiceDiscount Field Functions 
      bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
      void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
      inline float getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
      inline Modules& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline Modules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // originalCost Field Functions 
      bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
      void deleteOriginalCost() { this->originalCost_ = nullptr;};
      inline float getOriginalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
      inline Modules& setOriginalCost(float originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


      // quantityUsedForQuote Field Functions 
      bool hasQuantityUsedForQuote() const { return this->quantityUsedForQuote_ != nullptr;};
      void deleteQuantityUsedForQuote() { this->quantityUsedForQuote_ = nullptr;};
      inline float getQuantityUsedForQuote() const { DARABONBA_PTR_GET_DEFAULT(quantityUsedForQuote_, 0.0) };
      inline Modules& setQuantityUsedForQuote(float quantityUsedForQuote) { DARABONBA_PTR_SET_VALUE(quantityUsedForQuote_, quantityUsedForQuote) };


      // unitPrice Field Functions 
      bool hasUnitPrice() const { return this->unitPrice_ != nullptr;};
      void deleteUnitPrice() { this->unitPrice_ = nullptr;};
      inline float getUnitPrice() const { DARABONBA_PTR_GET_DEFAULT(unitPrice_, 0.0) };
      inline Modules& setUnitPrice(float unitPrice) { DARABONBA_PTR_SET_VALUE(unitPrice_, unitPrice) };


      // usageUnit Field Functions 
      bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
      void deleteUsageUnit() { this->usageUnit_ = nullptr;};
      inline string getUsageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
      inline Modules& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


    protected:
      // The billing dimension of this module, which is always explicitly output. Valid values: \\"recurring\\" for time-based fees, which are included in moduleSum and totalAmount; \\"usage\\" for usage-based fees, where costAfterDiscount is the usage unit price (CNY/usageUnit) and is not included in moduleSum, and the unit price is also provided in usageCharges.
      shared_ptr<string> billingMode_ {};
      shared_ptr<float> costAfterDiscount_ {};
      // The discount amount for this module. The value is calculated as invoiceDiscount = originalCost - costAfterDiscount and is precisely provided by the upstream BSS. Manual subtraction in tax-inclusive scenarios may cause precision loss.
      shared_ptr<float> invoiceDiscount_ {};
      shared_ptr<string> moduleCode_ {};
      shared_ptr<float> originalCost_ {};
      // The estimated usage used for pricing this module. This field has a value only when the caller passes a usage greater than 1 through PricingContext. In this case, costAfterDiscount is the total cost for this usage rather than the unit price. Refer to usageCharges[].pricePerUnit for the normalized unit price. This field is empty when no estimated usage is passed.
      shared_ptr<float> quantityUsedForQuote_ {};
      // The unit price of this module per billing unit, such as CNY/hour, CNY/month, or CNY/unit. This is used to explain the composition of costAfterDiscount in multi-quantity or multi-period scenarios.
      shared_ptr<float> unitPrice_ {};
      // The usage unit, such as GB or CU. This field has a value when billingMode is \\"usage\\" and indicates the dimension of costAfterDiscount.
      shared_ptr<string> usageUnit_ {};
    };

    virtual bool empty() const override { return this->chargeComposition_ == nullptr
        && this->currency_ == nullptr && this->effectiveModuleSum_ == nullptr && this->moduleSum_ == nullptr && this->modules_ == nullptr && this->originalPrice_ == nullptr
        && this->pricingUnit_ == nullptr && this->quantity_ == nullptr && this->tradePrice_ == nullptr && this->usageCharges_ == nullptr; };
    // chargeComposition Field Functions 
    bool hasChargeComposition() const { return this->chargeComposition_ != nullptr;};
    void deleteChargeComposition() { this->chargeComposition_ = nullptr;};
    inline string getChargeComposition() const { DARABONBA_PTR_GET_DEFAULT(chargeComposition_, "") };
    inline PriceComponentsValue& setChargeComposition(string chargeComposition) { DARABONBA_PTR_SET_VALUE(chargeComposition_, chargeComposition) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline PriceComponentsValue& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // effectiveModuleSum Field Functions 
    bool hasEffectiveModuleSum() const { return this->effectiveModuleSum_ != nullptr;};
    void deleteEffectiveModuleSum() { this->effectiveModuleSum_ = nullptr;};
    inline float getEffectiveModuleSum() const { DARABONBA_PTR_GET_DEFAULT(effectiveModuleSum_, 0.0) };
    inline PriceComponentsValue& setEffectiveModuleSum(float effectiveModuleSum) { DARABONBA_PTR_SET_VALUE(effectiveModuleSum_, effectiveModuleSum) };


    // moduleSum Field Functions 
    bool hasModuleSum() const { return this->moduleSum_ != nullptr;};
    void deleteModuleSum() { this->moduleSum_ = nullptr;};
    inline float getModuleSum() const { DARABONBA_PTR_GET_DEFAULT(moduleSum_, 0.0) };
    inline PriceComponentsValue& setModuleSum(float moduleSum) { DARABONBA_PTR_SET_VALUE(moduleSum_, moduleSum) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const vector<PriceComponentsValue::Modules> & getModules() const { DARABONBA_PTR_GET_CONST(modules_, vector<PriceComponentsValue::Modules>) };
    inline vector<PriceComponentsValue::Modules> getModules() { DARABONBA_PTR_GET(modules_, vector<PriceComponentsValue::Modules>) };
    inline PriceComponentsValue& setModules(const vector<PriceComponentsValue::Modules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline PriceComponentsValue& setModules(vector<PriceComponentsValue::Modules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline PriceComponentsValue& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // pricingUnit Field Functions 
    bool hasPricingUnit() const { return this->pricingUnit_ != nullptr;};
    void deletePricingUnit() { this->pricingUnit_ = nullptr;};
    inline string getPricingUnit() const { DARABONBA_PTR_GET_DEFAULT(pricingUnit_, "") };
    inline PriceComponentsValue& setPricingUnit(string pricingUnit) { DARABONBA_PTR_SET_VALUE(pricingUnit_, pricingUnit) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline float getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
    inline PriceComponentsValue& setQuantity(float quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline PriceComponentsValue& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    // usageCharges Field Functions 
    bool hasUsageCharges() const { return this->usageCharges_ != nullptr;};
    void deleteUsageCharges() { this->usageCharges_ = nullptr;};
    inline const vector<PriceComponentsValue::UsageCharges> & getUsageCharges() const { DARABONBA_PTR_GET_CONST(usageCharges_, vector<PriceComponentsValue::UsageCharges>) };
    inline vector<PriceComponentsValue::UsageCharges> getUsageCharges() { DARABONBA_PTR_GET(usageCharges_, vector<PriceComponentsValue::UsageCharges>) };
    inline PriceComponentsValue& setUsageCharges(const vector<PriceComponentsValue::UsageCharges> & usageCharges) { DARABONBA_PTR_SET_VALUE(usageCharges_, usageCharges) };
    inline PriceComponentsValue& setUsageCharges(vector<PriceComponentsValue::UsageCharges> && usageCharges) { DARABONBA_PTR_SET_RVALUE(usageCharges_, usageCharges) };


  protected:
    // The billing composition. Valid values: recurring_only (all time-based fees), usage_only (all usage-based fees, where a totalAmount of 0 indicates no fixed fees rather than free of charge, and actual costs depend on the unit price and actual usage in usageCharges), or mixed (both, which should be displayed separately). This allows the caller to choose the display text without iterating through modules to determine the composition.
    shared_ptr<string> chargeComposition_ {};
    shared_ptr<string> currency_ {};
    shared_ptr<float> effectiveModuleSum_ {};
    shared_ptr<float> moduleSum_ {};
    shared_ptr<vector<PriceComponentsValue::Modules>> modules_ {};
    // The total original price before discounts for this pricing inquiry. When originalPrice differs from tradePrice or moduleSum, it indicates that a discount was applied, such as a first-purchase discount or a promotional campaign.
    shared_ptr<float> originalPrice_ {};
    // The billing cycle unit, such as \\"Hour\\", \\"1 Month\\", \\"12 Month\\", or \\"GB·Month\\", which indicates the time dimension of moduleSum. This field is not returned in the BSS response and must be explicitly declared by the mapping maintainer in pricingTarget.pricingUnit. It is optional for subscription scenarios because the CLI infers it from Period and PeriodUnit. However, it is required for pay-as-you-go scenarios in the mapping; otherwise, the amount has no dimension.
    shared_ptr<string> pricingUnit_ {};
    // The pricing quantity from OpenAPI input parameters, such as Amount in ECS RunInstances. The moduleSum is the unit price per instance, and effectiveModuleSum = moduleSum × quantity is the total price. The caller should present the actual total price for N instances to the user based on this value to avoid mistaking the unit price for the total price.
    shared_ptr<float> quantity_ {};
    shared_ptr<float> tradePrice_ {};
    // The list of unit prices for pay-as-you-go, usage-based modules, such as CNY/GB or CNY/CU. The amounts for these modules are not included in moduleSum or effectiveModuleSum. This field is empty when there are no usage-based modules.
    shared_ptr<vector<PriceComponentsValue::UsageCharges>> usageCharges_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
