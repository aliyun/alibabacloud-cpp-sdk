// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_PRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PromotionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class PriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(discountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(optionalPromotions, optionalPromotions_);
      DARABONBA_PTR_TO_JSON(originalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(priceModules, priceModules_);
      DARABONBA_PTR_TO_JSON(rules, rules_);
      DARABONBA_PTR_TO_JSON(taxAmount, taxAmount_);
      DARABONBA_PTR_TO_JSON(tradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(discountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(optionalPromotions, optionalPromotions_);
      DARABONBA_PTR_FROM_JSON(originalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(priceModules, priceModules_);
      DARABONBA_PTR_FROM_JSON(rules, rules_);
      DARABONBA_PTR_FROM_JSON(taxAmount, taxAmount_);
      DARABONBA_PTR_FROM_JSON(tradeAmount, tradeAmount_);
    };
    PriceInfo() = default ;
    PriceInfo(const PriceInfo &) = default ;
    PriceInfo(PriceInfo &&) = default ;
    PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceInfo() = default ;
    PriceInfo& operator=(const PriceInfo &) = default ;
    PriceInfo& operator=(PriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(amount, amount_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(amount, amount_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->amount_ == nullptr
        && this->name_ == nullptr && this->ruleId_ == nullptr; };
      // amount Field Functions 
      bool hasAmount() const { return this->amount_ != nullptr;};
      void deleteAmount() { this->amount_ = nullptr;};
      inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
      inline Rules& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Rules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      shared_ptr<string> amount_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> ruleId_ {};
    };

    class PriceModules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceModules& obj) { 
        DARABONBA_PTR_TO_JSON(originalAmount, originalAmount_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, PriceModules& obj) { 
        DARABONBA_PTR_FROM_JSON(originalAmount, originalAmount_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      PriceModules() = default ;
      PriceModules(const PriceModules &) = default ;
      PriceModules(PriceModules &&) = default ;
      PriceModules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceModules() = default ;
      PriceModules& operator=(const PriceModules &) = default ;
      PriceModules& operator=(PriceModules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->originalAmount_ == nullptr
        && this->type_ == nullptr; };
      // originalAmount Field Functions 
      bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
      void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
      inline string getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
      inline PriceModules& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline PriceModules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> originalAmount_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountAmount_ == nullptr && this->optionalPromotions_ == nullptr && this->originalAmount_ == nullptr && this->priceModules_ == nullptr && this->rules_ == nullptr
        && this->taxAmount_ == nullptr && this->tradeAmount_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline PriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline string getDiscountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, "") };
    inline PriceInfo& setDiscountAmount(string discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // optionalPromotions Field Functions 
    bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
    void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
    inline const vector<PromotionInfo> & getOptionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<PromotionInfo>) };
    inline vector<PromotionInfo> getOptionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<PromotionInfo>) };
    inline PriceInfo& setOptionalPromotions(const vector<PromotionInfo> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
    inline PriceInfo& setOptionalPromotions(vector<PromotionInfo> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline string getOriginalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
    inline PriceInfo& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // priceModules Field Functions 
    bool hasPriceModules() const { return this->priceModules_ != nullptr;};
    void deletePriceModules() { this->priceModules_ = nullptr;};
    inline const vector<PriceInfo::PriceModules> & getPriceModules() const { DARABONBA_PTR_GET_CONST(priceModules_, vector<PriceInfo::PriceModules>) };
    inline vector<PriceInfo::PriceModules> getPriceModules() { DARABONBA_PTR_GET(priceModules_, vector<PriceInfo::PriceModules>) };
    inline PriceInfo& setPriceModules(const vector<PriceInfo::PriceModules> & priceModules) { DARABONBA_PTR_SET_VALUE(priceModules_, priceModules) };
    inline PriceInfo& setPriceModules(vector<PriceInfo::PriceModules> && priceModules) { DARABONBA_PTR_SET_RVALUE(priceModules_, priceModules) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<PriceInfo::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceInfo::Rules>) };
    inline vector<PriceInfo::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<PriceInfo::Rules>) };
    inline PriceInfo& setRules(const vector<PriceInfo::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline PriceInfo& setRules(vector<PriceInfo::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // taxAmount Field Functions 
    bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
    void deleteTaxAmount() { this->taxAmount_ = nullptr;};
    inline string getTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
    inline PriceInfo& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline string getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
    inline PriceInfo& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    shared_ptr<string> currency_ {};
    shared_ptr<string> discountAmount_ {};
    shared_ptr<vector<PromotionInfo>> optionalPromotions_ {};
    shared_ptr<string> originalAmount_ {};
    shared_ptr<vector<PriceInfo::PriceModules>> priceModules_ {};
    shared_ptr<vector<PriceInfo::Rules>> rules_ {};
    shared_ptr<string> taxAmount_ {};
    shared_ptr<string> tradeAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
