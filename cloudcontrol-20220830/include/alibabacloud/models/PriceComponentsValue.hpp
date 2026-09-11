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
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(tradePrice, tradePrice_);
      DARABONBA_PTR_TO_JSON(originalPrice, originalPrice_);
      DARABONBA_PTR_TO_JSON(moduleSum, moduleSum_);
      DARABONBA_PTR_TO_JSON(effectiveModuleSum, effectiveModuleSum_);
      DARABONBA_PTR_TO_JSON(quantity, quantity_);
      DARABONBA_PTR_TO_JSON(pricingUnit, pricingUnit_);
      DARABONBA_PTR_TO_JSON(modules, modules_);
      DARABONBA_PTR_TO_JSON(usageCharges, usageCharges_);
      DARABONBA_PTR_TO_JSON(chargeComposition, chargeComposition_);
    };
    friend void from_json(const Darabonba::Json& j, PriceComponentsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(tradePrice, tradePrice_);
      DARABONBA_PTR_FROM_JSON(originalPrice, originalPrice_);
      DARABONBA_PTR_FROM_JSON(moduleSum, moduleSum_);
      DARABONBA_PTR_FROM_JSON(effectiveModuleSum, effectiveModuleSum_);
      DARABONBA_PTR_FROM_JSON(quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(pricingUnit, pricingUnit_);
      DARABONBA_PTR_FROM_JSON(modules, modules_);
      DARABONBA_PTR_FROM_JSON(usageCharges, usageCharges_);
      DARABONBA_PTR_FROM_JSON(chargeComposition, chargeComposition_);
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
        DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
        DARABONBA_PTR_TO_JSON(pricePerUnit, pricePerUnit_);
        DARABONBA_PTR_TO_JSON(originalPricePerUnit, originalPricePerUnit_);
        DARABONBA_PTR_TO_JSON(assumedQuantity, assumedQuantity_);
        DARABONBA_PTR_TO_JSON(assumedQuantityCost, assumedQuantityCost_);
      };
      friend void from_json(const Darabonba::Json& j, UsageCharges& obj) { 
        DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
        DARABONBA_PTR_FROM_JSON(pricePerUnit, pricePerUnit_);
        DARABONBA_PTR_FROM_JSON(originalPricePerUnit, originalPricePerUnit_);
        DARABONBA_PTR_FROM_JSON(assumedQuantity, assumedQuantity_);
        DARABONBA_PTR_FROM_JSON(assumedQuantityCost, assumedQuantityCost_);
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
      virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->unit_ == nullptr && this->pricePerUnit_ == nullptr && this->originalPricePerUnit_ == nullptr && this->assumedQuantity_ == nullptr && this->assumedQuantityCost_ == nullptr; };
      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline UsageCharges& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline UsageCharges& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      // pricePerUnit Field Functions 
      bool hasPricePerUnit() const { return this->pricePerUnit_ != nullptr;};
      void deletePricePerUnit() { this->pricePerUnit_ = nullptr;};
      inline float getPricePerUnit() const { DARABONBA_PTR_GET_DEFAULT(pricePerUnit_, 0.0) };
      inline UsageCharges& setPricePerUnit(float pricePerUnit) { DARABONBA_PTR_SET_VALUE(pricePerUnit_, pricePerUnit) };


      // originalPricePerUnit Field Functions 
      bool hasOriginalPricePerUnit() const { return this->originalPricePerUnit_ != nullptr;};
      void deleteOriginalPricePerUnit() { this->originalPricePerUnit_ = nullptr;};
      inline float getOriginalPricePerUnit() const { DARABONBA_PTR_GET_DEFAULT(originalPricePerUnit_, 0.0) };
      inline UsageCharges& setOriginalPricePerUnit(float originalPricePerUnit) { DARABONBA_PTR_SET_VALUE(originalPricePerUnit_, originalPricePerUnit) };


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


    protected:
      shared_ptr<string> moduleCode_ {};
      shared_ptr<string> unit_ {};
      shared_ptr<float> pricePerUnit_ {};
      shared_ptr<float> originalPricePerUnit_ {};
      shared_ptr<float> assumedQuantity_ {};
      shared_ptr<float> assumedQuantityCost_ {};
    };

    class Modules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Modules& obj) { 
        DARABONBA_PTR_TO_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(costAfterDiscount, costAfterDiscount_);
        DARABONBA_PTR_TO_JSON(originalCost, originalCost_);
        DARABONBA_PTR_TO_JSON(invoiceDiscount, invoiceDiscount_);
        DARABONBA_PTR_TO_JSON(unitPrice, unitPrice_);
        DARABONBA_PTR_TO_JSON(billingMode, billingMode_);
        DARABONBA_PTR_TO_JSON(usageUnit, usageUnit_);
        DARABONBA_PTR_TO_JSON(quantityUsedForQuote, quantityUsedForQuote_);
      };
      friend void from_json(const Darabonba::Json& j, Modules& obj) { 
        DARABONBA_PTR_FROM_JSON(moduleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(costAfterDiscount, costAfterDiscount_);
        DARABONBA_PTR_FROM_JSON(originalCost, originalCost_);
        DARABONBA_PTR_FROM_JSON(invoiceDiscount, invoiceDiscount_);
        DARABONBA_PTR_FROM_JSON(unitPrice, unitPrice_);
        DARABONBA_PTR_FROM_JSON(billingMode, billingMode_);
        DARABONBA_PTR_FROM_JSON(usageUnit, usageUnit_);
        DARABONBA_PTR_FROM_JSON(quantityUsedForQuote, quantityUsedForQuote_);
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
      virtual bool empty() const override { return this->moduleCode_ == nullptr
        && this->costAfterDiscount_ == nullptr && this->originalCost_ == nullptr && this->invoiceDiscount_ == nullptr && this->unitPrice_ == nullptr && this->billingMode_ == nullptr
        && this->usageUnit_ == nullptr && this->quantityUsedForQuote_ == nullptr; };
      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline Modules& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // costAfterDiscount Field Functions 
      bool hasCostAfterDiscount() const { return this->costAfterDiscount_ != nullptr;};
      void deleteCostAfterDiscount() { this->costAfterDiscount_ = nullptr;};
      inline float getCostAfterDiscount() const { DARABONBA_PTR_GET_DEFAULT(costAfterDiscount_, 0.0) };
      inline Modules& setCostAfterDiscount(float costAfterDiscount) { DARABONBA_PTR_SET_VALUE(costAfterDiscount_, costAfterDiscount) };


      // originalCost Field Functions 
      bool hasOriginalCost() const { return this->originalCost_ != nullptr;};
      void deleteOriginalCost() { this->originalCost_ = nullptr;};
      inline float getOriginalCost() const { DARABONBA_PTR_GET_DEFAULT(originalCost_, 0.0) };
      inline Modules& setOriginalCost(float originalCost) { DARABONBA_PTR_SET_VALUE(originalCost_, originalCost) };


      // invoiceDiscount Field Functions 
      bool hasInvoiceDiscount() const { return this->invoiceDiscount_ != nullptr;};
      void deleteInvoiceDiscount() { this->invoiceDiscount_ = nullptr;};
      inline float getInvoiceDiscount() const { DARABONBA_PTR_GET_DEFAULT(invoiceDiscount_, 0.0) };
      inline Modules& setInvoiceDiscount(float invoiceDiscount) { DARABONBA_PTR_SET_VALUE(invoiceDiscount_, invoiceDiscount) };


      // unitPrice Field Functions 
      bool hasUnitPrice() const { return this->unitPrice_ != nullptr;};
      void deleteUnitPrice() { this->unitPrice_ = nullptr;};
      inline float getUnitPrice() const { DARABONBA_PTR_GET_DEFAULT(unitPrice_, 0.0) };
      inline Modules& setUnitPrice(float unitPrice) { DARABONBA_PTR_SET_VALUE(unitPrice_, unitPrice) };


      // billingMode Field Functions 
      bool hasBillingMode() const { return this->billingMode_ != nullptr;};
      void deleteBillingMode() { this->billingMode_ = nullptr;};
      inline string getBillingMode() const { DARABONBA_PTR_GET_DEFAULT(billingMode_, "") };
      inline Modules& setBillingMode(string billingMode) { DARABONBA_PTR_SET_VALUE(billingMode_, billingMode) };


      // usageUnit Field Functions 
      bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
      void deleteUsageUnit() { this->usageUnit_ = nullptr;};
      inline string getUsageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
      inline Modules& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


      // quantityUsedForQuote Field Functions 
      bool hasQuantityUsedForQuote() const { return this->quantityUsedForQuote_ != nullptr;};
      void deleteQuantityUsedForQuote() { this->quantityUsedForQuote_ = nullptr;};
      inline float getQuantityUsedForQuote() const { DARABONBA_PTR_GET_DEFAULT(quantityUsedForQuote_, 0.0) };
      inline Modules& setQuantityUsedForQuote(float quantityUsedForQuote) { DARABONBA_PTR_SET_VALUE(quantityUsedForQuote_, quantityUsedForQuote) };


    protected:
      shared_ptr<string> moduleCode_ {};
      shared_ptr<float> costAfterDiscount_ {};
      shared_ptr<float> originalCost_ {};
      shared_ptr<float> invoiceDiscount_ {};
      shared_ptr<float> unitPrice_ {};
      shared_ptr<string> billingMode_ {};
      shared_ptr<string> usageUnit_ {};
      shared_ptr<float> quantityUsedForQuote_ {};
    };

    virtual bool empty() const override { return this->currency_ == nullptr
        && this->tradePrice_ == nullptr && this->originalPrice_ == nullptr && this->moduleSum_ == nullptr && this->effectiveModuleSum_ == nullptr && this->quantity_ == nullptr
        && this->pricingUnit_ == nullptr && this->modules_ == nullptr && this->usageCharges_ == nullptr && this->chargeComposition_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline PriceComponentsValue& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // tradePrice Field Functions 
    bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
    void deleteTradePrice() { this->tradePrice_ = nullptr;};
    inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
    inline PriceComponentsValue& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


    // originalPrice Field Functions 
    bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
    void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
    inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
    inline PriceComponentsValue& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


    // moduleSum Field Functions 
    bool hasModuleSum() const { return this->moduleSum_ != nullptr;};
    void deleteModuleSum() { this->moduleSum_ = nullptr;};
    inline float getModuleSum() const { DARABONBA_PTR_GET_DEFAULT(moduleSum_, 0.0) };
    inline PriceComponentsValue& setModuleSum(float moduleSum) { DARABONBA_PTR_SET_VALUE(moduleSum_, moduleSum) };


    // effectiveModuleSum Field Functions 
    bool hasEffectiveModuleSum() const { return this->effectiveModuleSum_ != nullptr;};
    void deleteEffectiveModuleSum() { this->effectiveModuleSum_ = nullptr;};
    inline float getEffectiveModuleSum() const { DARABONBA_PTR_GET_DEFAULT(effectiveModuleSum_, 0.0) };
    inline PriceComponentsValue& setEffectiveModuleSum(float effectiveModuleSum) { DARABONBA_PTR_SET_VALUE(effectiveModuleSum_, effectiveModuleSum) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline float getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
    inline PriceComponentsValue& setQuantity(float quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // pricingUnit Field Functions 
    bool hasPricingUnit() const { return this->pricingUnit_ != nullptr;};
    void deletePricingUnit() { this->pricingUnit_ = nullptr;};
    inline string getPricingUnit() const { DARABONBA_PTR_GET_DEFAULT(pricingUnit_, "") };
    inline PriceComponentsValue& setPricingUnit(string pricingUnit) { DARABONBA_PTR_SET_VALUE(pricingUnit_, pricingUnit) };


    // modules Field Functions 
    bool hasModules() const { return this->modules_ != nullptr;};
    void deleteModules() { this->modules_ = nullptr;};
    inline const vector<PriceComponentsValue::Modules> & getModules() const { DARABONBA_PTR_GET_CONST(modules_, vector<PriceComponentsValue::Modules>) };
    inline vector<PriceComponentsValue::Modules> getModules() { DARABONBA_PTR_GET(modules_, vector<PriceComponentsValue::Modules>) };
    inline PriceComponentsValue& setModules(const vector<PriceComponentsValue::Modules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
    inline PriceComponentsValue& setModules(vector<PriceComponentsValue::Modules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


    // usageCharges Field Functions 
    bool hasUsageCharges() const { return this->usageCharges_ != nullptr;};
    void deleteUsageCharges() { this->usageCharges_ = nullptr;};
    inline const vector<PriceComponentsValue::UsageCharges> & getUsageCharges() const { DARABONBA_PTR_GET_CONST(usageCharges_, vector<PriceComponentsValue::UsageCharges>) };
    inline vector<PriceComponentsValue::UsageCharges> getUsageCharges() { DARABONBA_PTR_GET(usageCharges_, vector<PriceComponentsValue::UsageCharges>) };
    inline PriceComponentsValue& setUsageCharges(const vector<PriceComponentsValue::UsageCharges> & usageCharges) { DARABONBA_PTR_SET_VALUE(usageCharges_, usageCharges) };
    inline PriceComponentsValue& setUsageCharges(vector<PriceComponentsValue::UsageCharges> && usageCharges) { DARABONBA_PTR_SET_RVALUE(usageCharges_, usageCharges) };


    // chargeComposition Field Functions 
    bool hasChargeComposition() const { return this->chargeComposition_ != nullptr;};
    void deleteChargeComposition() { this->chargeComposition_ = nullptr;};
    inline string getChargeComposition() const { DARABONBA_PTR_GET_DEFAULT(chargeComposition_, "") };
    inline PriceComponentsValue& setChargeComposition(string chargeComposition) { DARABONBA_PTR_SET_VALUE(chargeComposition_, chargeComposition) };


  protected:
    shared_ptr<string> currency_ {};
    shared_ptr<float> tradePrice_ {};
    shared_ptr<float> originalPrice_ {};
    shared_ptr<float> moduleSum_ {};
    shared_ptr<float> effectiveModuleSum_ {};
    shared_ptr<float> quantity_ {};
    shared_ptr<string> pricingUnit_ {};
    shared_ptr<vector<PriceComponentsValue::Modules>> modules_ {};
    shared_ptr<vector<PriceComponentsValue::UsageCharges>> usageCharges_ {};
    shared_ptr<string> chargeComposition_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
