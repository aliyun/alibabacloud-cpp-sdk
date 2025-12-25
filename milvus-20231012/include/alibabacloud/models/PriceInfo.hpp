// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_PRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PromotionInfo.hpp>
#include <alibabacloud/models/PriceInfoPriceModules.hpp>
#include <alibabacloud/models/PriceInfoRules.hpp>
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
    virtual bool empty() const override { return this->currency_ == nullptr
        && return this->discountAmount_ == nullptr && return this->optionalPromotions_ == nullptr && return this->originalAmount_ == nullptr && return this->priceModules_ == nullptr && return this->rules_ == nullptr
        && return this->taxAmount_ == nullptr && return this->tradeAmount_ == nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline PriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline string discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, "") };
    inline PriceInfo& setDiscountAmount(string discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // optionalPromotions Field Functions 
    bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
    void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
    inline const vector<PromotionInfo> & optionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<PromotionInfo>) };
    inline vector<PromotionInfo> optionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<PromotionInfo>) };
    inline PriceInfo& setOptionalPromotions(const vector<PromotionInfo> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
    inline PriceInfo& setOptionalPromotions(vector<PromotionInfo> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline string originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, "") };
    inline PriceInfo& setOriginalAmount(string originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // priceModules Field Functions 
    bool hasPriceModules() const { return this->priceModules_ != nullptr;};
    void deletePriceModules() { this->priceModules_ = nullptr;};
    inline const vector<PriceInfoPriceModules> & priceModules() const { DARABONBA_PTR_GET_CONST(priceModules_, vector<PriceInfoPriceModules>) };
    inline vector<PriceInfoPriceModules> priceModules() { DARABONBA_PTR_GET(priceModules_, vector<PriceInfoPriceModules>) };
    inline PriceInfo& setPriceModules(const vector<PriceInfoPriceModules> & priceModules) { DARABONBA_PTR_SET_VALUE(priceModules_, priceModules) };
    inline PriceInfo& setPriceModules(vector<PriceInfoPriceModules> && priceModules) { DARABONBA_PTR_SET_RVALUE(priceModules_, priceModules) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<PriceInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<PriceInfoRules>) };
    inline vector<PriceInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<PriceInfoRules>) };
    inline PriceInfo& setRules(const vector<PriceInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline PriceInfo& setRules(vector<PriceInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // taxAmount Field Functions 
    bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
    void deleteTaxAmount() { this->taxAmount_ = nullptr;};
    inline string taxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
    inline PriceInfo& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline string tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
    inline PriceInfo& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<string> discountAmount_ = nullptr;
    std::shared_ptr<vector<PromotionInfo>> optionalPromotions_ = nullptr;
    std::shared_ptr<string> originalAmount_ = nullptr;
    std::shared_ptr<vector<PriceInfoPriceModules>> priceModules_ = nullptr;
    std::shared_ptr<vector<PriceInfoRules>> rules_ = nullptr;
    std::shared_ptr<string> taxAmount_ = nullptr;
    std::shared_ptr<string> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
