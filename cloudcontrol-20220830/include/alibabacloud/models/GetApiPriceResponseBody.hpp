// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
#include <alibabacloud/models/PriceComponentsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetApiPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetApiPriceResponseBody() = default ;
    GetApiPriceResponseBody(const GetApiPriceResponseBody &) = default ;
    GetApiPriceResponseBody(GetApiPriceResponseBody &&) = default ;
    GetApiPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiPriceResponseBody() = default ;
    GetApiPriceResponseBody& operator=(const GetApiPriceResponseBody &) = default ;
    GetApiPriceResponseBody& operator=(GetApiPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Price : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Price& obj) { 
        DARABONBA_PTR_TO_JSON(billingUnit, billingUnit_);
        DARABONBA_PTR_TO_JSON(calculatedAmount, calculatedAmount_);
        DARABONBA_PTR_TO_JSON(chargeComposition, chargeComposition_);
        DARABONBA_PTR_TO_JSON(components, components_);
        DARABONBA_PTR_TO_JSON(currency, currency_);
        DARABONBA_PTR_TO_JSON(discountAmount, discountAmount_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(originalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(priceSummary, priceSummary_);
        DARABONBA_PTR_TO_JSON(pricingMode, pricingMode_);
        DARABONBA_PTR_TO_JSON(success, success_);
        DARABONBA_PTR_TO_JSON(totalAmount, totalAmount_);
        DARABONBA_PTR_TO_JSON(upstreamRequestId, upstreamRequestId_);
        DARABONBA_PTR_TO_JSON(usageCharges, usageCharges_);
      };
      friend void from_json(const Darabonba::Json& j, Price& obj) { 
        DARABONBA_PTR_FROM_JSON(billingUnit, billingUnit_);
        DARABONBA_PTR_FROM_JSON(calculatedAmount, calculatedAmount_);
        DARABONBA_PTR_FROM_JSON(chargeComposition, chargeComposition_);
        DARABONBA_PTR_FROM_JSON(components, components_);
        DARABONBA_PTR_FROM_JSON(currency, currency_);
        DARABONBA_PTR_FROM_JSON(discountAmount, discountAmount_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(originalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(priceSummary, priceSummary_);
        DARABONBA_PTR_FROM_JSON(pricingMode, pricingMode_);
        DARABONBA_PTR_FROM_JSON(success, success_);
        DARABONBA_PTR_FROM_JSON(totalAmount, totalAmount_);
        DARABONBA_PTR_FROM_JSON(upstreamRequestId, upstreamRequestId_);
        DARABONBA_PTR_FROM_JSON(usageCharges, usageCharges_);
      };
      Price() = default ;
      Price(const Price &) = default ;
      Price(Price &&) = default ;
      Price(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Price() = default ;
      Price& operator=(const Price &) = default ;
      Price& operator=(Price &&) = default ;
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
        shared_ptr<float> assumedQuantity_ {};
        shared_ptr<float> assumedQuantityCost_ {};
        shared_ptr<string> moduleCode_ {};
        shared_ptr<float> originalPricePerUnit_ {};
        shared_ptr<float> pricePerUnit_ {};
        shared_ptr<string> unit_ {};
      };

      class PriceSummary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceSummary& obj) { 
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
        friend void from_json(const Darabonba::Json& j, PriceSummary& obj) { 
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
        PriceSummary() = default ;
        PriceSummary(const PriceSummary &) = default ;
        PriceSummary(PriceSummary &&) = default ;
        PriceSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceSummary() = default ;
        PriceSummary& operator=(const PriceSummary &) = default ;
        PriceSummary& operator=(PriceSummary &&) = default ;
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
          shared_ptr<float> assumedQuantity_ {};
          shared_ptr<float> assumedQuantityCost_ {};
          shared_ptr<string> moduleCode_ {};
          shared_ptr<float> originalPricePerUnit_ {};
          shared_ptr<float> pricePerUnit_ {};
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
          shared_ptr<string> billingMode_ {};
          shared_ptr<float> costAfterDiscount_ {};
          shared_ptr<float> invoiceDiscount_ {};
          shared_ptr<string> moduleCode_ {};
          shared_ptr<float> originalCost_ {};
          shared_ptr<float> quantityUsedForQuote_ {};
          shared_ptr<float> unitPrice_ {};
          shared_ptr<string> usageUnit_ {};
        };

        virtual bool empty() const override { return this->chargeComposition_ == nullptr
        && this->currency_ == nullptr && this->effectiveModuleSum_ == nullptr && this->moduleSum_ == nullptr && this->modules_ == nullptr && this->originalPrice_ == nullptr
        && this->pricingUnit_ == nullptr && this->quantity_ == nullptr && this->tradePrice_ == nullptr && this->usageCharges_ == nullptr; };
        // chargeComposition Field Functions 
        bool hasChargeComposition() const { return this->chargeComposition_ != nullptr;};
        void deleteChargeComposition() { this->chargeComposition_ = nullptr;};
        inline string getChargeComposition() const { DARABONBA_PTR_GET_DEFAULT(chargeComposition_, "") };
        inline PriceSummary& setChargeComposition(string chargeComposition) { DARABONBA_PTR_SET_VALUE(chargeComposition_, chargeComposition) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline PriceSummary& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // effectiveModuleSum Field Functions 
        bool hasEffectiveModuleSum() const { return this->effectiveModuleSum_ != nullptr;};
        void deleteEffectiveModuleSum() { this->effectiveModuleSum_ = nullptr;};
        inline float getEffectiveModuleSum() const { DARABONBA_PTR_GET_DEFAULT(effectiveModuleSum_, 0.0) };
        inline PriceSummary& setEffectiveModuleSum(float effectiveModuleSum) { DARABONBA_PTR_SET_VALUE(effectiveModuleSum_, effectiveModuleSum) };


        // moduleSum Field Functions 
        bool hasModuleSum() const { return this->moduleSum_ != nullptr;};
        void deleteModuleSum() { this->moduleSum_ = nullptr;};
        inline float getModuleSum() const { DARABONBA_PTR_GET_DEFAULT(moduleSum_, 0.0) };
        inline PriceSummary& setModuleSum(float moduleSum) { DARABONBA_PTR_SET_VALUE(moduleSum_, moduleSum) };


        // modules Field Functions 
        bool hasModules() const { return this->modules_ != nullptr;};
        void deleteModules() { this->modules_ = nullptr;};
        inline const vector<PriceSummary::Modules> & getModules() const { DARABONBA_PTR_GET_CONST(modules_, vector<PriceSummary::Modules>) };
        inline vector<PriceSummary::Modules> getModules() { DARABONBA_PTR_GET(modules_, vector<PriceSummary::Modules>) };
        inline PriceSummary& setModules(const vector<PriceSummary::Modules> & modules) { DARABONBA_PTR_SET_VALUE(modules_, modules) };
        inline PriceSummary& setModules(vector<PriceSummary::Modules> && modules) { DARABONBA_PTR_SET_RVALUE(modules_, modules) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
        inline PriceSummary& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // pricingUnit Field Functions 
        bool hasPricingUnit() const { return this->pricingUnit_ != nullptr;};
        void deletePricingUnit() { this->pricingUnit_ = nullptr;};
        inline string getPricingUnit() const { DARABONBA_PTR_GET_DEFAULT(pricingUnit_, "") };
        inline PriceSummary& setPricingUnit(string pricingUnit) { DARABONBA_PTR_SET_VALUE(pricingUnit_, pricingUnit) };


        // quantity Field Functions 
        bool hasQuantity() const { return this->quantity_ != nullptr;};
        void deleteQuantity() { this->quantity_ = nullptr;};
        inline float getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0.0) };
        inline PriceSummary& setQuantity(float quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline PriceSummary& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


        // usageCharges Field Functions 
        bool hasUsageCharges() const { return this->usageCharges_ != nullptr;};
        void deleteUsageCharges() { this->usageCharges_ = nullptr;};
        inline const vector<PriceSummary::UsageCharges> & getUsageCharges() const { DARABONBA_PTR_GET_CONST(usageCharges_, vector<PriceSummary::UsageCharges>) };
        inline vector<PriceSummary::UsageCharges> getUsageCharges() { DARABONBA_PTR_GET(usageCharges_, vector<PriceSummary::UsageCharges>) };
        inline PriceSummary& setUsageCharges(const vector<PriceSummary::UsageCharges> & usageCharges) { DARABONBA_PTR_SET_VALUE(usageCharges_, usageCharges) };
        inline PriceSummary& setUsageCharges(vector<PriceSummary::UsageCharges> && usageCharges) { DARABONBA_PTR_SET_RVALUE(usageCharges_, usageCharges) };


      protected:
        shared_ptr<string> chargeComposition_ {};
        shared_ptr<string> currency_ {};
        shared_ptr<float> effectiveModuleSum_ {};
        shared_ptr<float> moduleSum_ {};
        shared_ptr<vector<PriceSummary::Modules>> modules_ {};
        shared_ptr<float> originalPrice_ {};
        shared_ptr<string> pricingUnit_ {};
        shared_ptr<float> quantity_ {};
        shared_ptr<float> tradePrice_ {};
        shared_ptr<vector<PriceSummary::UsageCharges>> usageCharges_ {};
      };

      virtual bool empty() const override { return this->billingUnit_ == nullptr
        && this->calculatedAmount_ == nullptr && this->chargeComposition_ == nullptr && this->components_ == nullptr && this->currency_ == nullptr && this->discountAmount_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->originalAmount_ == nullptr && this->priceSummary_ == nullptr && this->pricingMode_ == nullptr
        && this->success_ == nullptr && this->totalAmount_ == nullptr && this->upstreamRequestId_ == nullptr && this->usageCharges_ == nullptr; };
      // billingUnit Field Functions 
      bool hasBillingUnit() const { return this->billingUnit_ != nullptr;};
      void deleteBillingUnit() { this->billingUnit_ = nullptr;};
      inline string getBillingUnit() const { DARABONBA_PTR_GET_DEFAULT(billingUnit_, "") };
      inline Price& setBillingUnit(string billingUnit) { DARABONBA_PTR_SET_VALUE(billingUnit_, billingUnit) };


      // calculatedAmount Field Functions 
      bool hasCalculatedAmount() const { return this->calculatedAmount_ != nullptr;};
      void deleteCalculatedAmount() { this->calculatedAmount_ = nullptr;};
      inline float getCalculatedAmount() const { DARABONBA_PTR_GET_DEFAULT(calculatedAmount_, 0.0) };
      inline Price& setCalculatedAmount(float calculatedAmount) { DARABONBA_PTR_SET_VALUE(calculatedAmount_, calculatedAmount) };


      // chargeComposition Field Functions 
      bool hasChargeComposition() const { return this->chargeComposition_ != nullptr;};
      void deleteChargeComposition() { this->chargeComposition_ = nullptr;};
      inline string getChargeComposition() const { DARABONBA_PTR_GET_DEFAULT(chargeComposition_, "") };
      inline Price& setChargeComposition(string chargeComposition) { DARABONBA_PTR_SET_VALUE(chargeComposition_, chargeComposition) };


      // components Field Functions 
      bool hasComponents() const { return this->components_ != nullptr;};
      void deleteComponents() { this->components_ = nullptr;};
      inline const map<string, PriceComponentsValue> & getComponents() const { DARABONBA_PTR_GET_CONST(components_, map<string, PriceComponentsValue>) };
      inline map<string, PriceComponentsValue> getComponents() { DARABONBA_PTR_GET(components_, map<string, PriceComponentsValue>) };
      inline Price& setComponents(const map<string, PriceComponentsValue> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
      inline Price& setComponents(map<string, PriceComponentsValue> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // discountAmount Field Functions 
      bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
      void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
      inline float getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
      inline Price& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Price& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Price& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline float getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
      inline Price& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // priceSummary Field Functions 
      bool hasPriceSummary() const { return this->priceSummary_ != nullptr;};
      void deletePriceSummary() { this->priceSummary_ = nullptr;};
      inline const Price::PriceSummary & getPriceSummary() const { DARABONBA_PTR_GET_CONST(priceSummary_, Price::PriceSummary) };
      inline Price::PriceSummary getPriceSummary() { DARABONBA_PTR_GET(priceSummary_, Price::PriceSummary) };
      inline Price& setPriceSummary(const Price::PriceSummary & priceSummary) { DARABONBA_PTR_SET_VALUE(priceSummary_, priceSummary) };
      inline Price& setPriceSummary(Price::PriceSummary && priceSummary) { DARABONBA_PTR_SET_RVALUE(priceSummary_, priceSummary) };


      // pricingMode Field Functions 
      bool hasPricingMode() const { return this->pricingMode_ != nullptr;};
      void deletePricingMode() { this->pricingMode_ = nullptr;};
      inline string getPricingMode() const { DARABONBA_PTR_GET_DEFAULT(pricingMode_, "") };
      inline Price& setPricingMode(string pricingMode) { DARABONBA_PTR_SET_VALUE(pricingMode_, pricingMode) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Price& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline float getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0.0) };
      inline Price& setTotalAmount(float totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


      // upstreamRequestId Field Functions 
      bool hasUpstreamRequestId() const { return this->upstreamRequestId_ != nullptr;};
      void deleteUpstreamRequestId() { this->upstreamRequestId_ = nullptr;};
      inline string getUpstreamRequestId() const { DARABONBA_PTR_GET_DEFAULT(upstreamRequestId_, "") };
      inline Price& setUpstreamRequestId(string upstreamRequestId) { DARABONBA_PTR_SET_VALUE(upstreamRequestId_, upstreamRequestId) };


      // usageCharges Field Functions 
      bool hasUsageCharges() const { return this->usageCharges_ != nullptr;};
      void deleteUsageCharges() { this->usageCharges_ = nullptr;};
      inline const vector<Price::UsageCharges> & getUsageCharges() const { DARABONBA_PTR_GET_CONST(usageCharges_, vector<Price::UsageCharges>) };
      inline vector<Price::UsageCharges> getUsageCharges() { DARABONBA_PTR_GET(usageCharges_, vector<Price::UsageCharges>) };
      inline Price& setUsageCharges(const vector<Price::UsageCharges> & usageCharges) { DARABONBA_PTR_SET_VALUE(usageCharges_, usageCharges) };
      inline Price& setUsageCharges(vector<Price::UsageCharges> && usageCharges) { DARABONBA_PTR_SET_RVALUE(usageCharges_, usageCharges) };


    protected:
      shared_ptr<string> billingUnit_ {};
      shared_ptr<float> calculatedAmount_ {};
      shared_ptr<string> chargeComposition_ {};
      shared_ptr<map<string, PriceComponentsValue>> components_ {};
      shared_ptr<string> currency_ {};
      shared_ptr<float> discountAmount_ {};
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<float> originalAmount_ {};
      shared_ptr<Price::PriceSummary> priceSummary_ {};
      shared_ptr<string> pricingMode_ {};
      shared_ptr<bool> success_ {};
      shared_ptr<float> totalAmount_ {};
      shared_ptr<string> upstreamRequestId_ {};
      shared_ptr<vector<Price::UsageCharges>> usageCharges_ {};
    };

    virtual bool empty() const override { return this->price_ == nullptr
        && this->requestId_ == nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const GetApiPriceResponseBody::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, GetApiPriceResponseBody::Price) };
    inline GetApiPriceResponseBody::Price getPrice() { DARABONBA_PTR_GET(price_, GetApiPriceResponseBody::Price) };
    inline GetApiPriceResponseBody& setPrice(const GetApiPriceResponseBody::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline GetApiPriceResponseBody& setPrice(GetApiPriceResponseBody::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApiPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetApiPriceResponseBody::Price> price_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
