// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATAORDER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONFIGURATIONPRICERESPONSEBODYDATAORDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeConfigurationPriceResponseBodyDataOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConfigurationPriceResponseBodyDataOrder& obj) { 
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConfigurationPriceResponseBodyDataOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
    };
    DescribeConfigurationPriceResponseBodyDataOrder() = default ;
    DescribeConfigurationPriceResponseBodyDataOrder(const DescribeConfigurationPriceResponseBodyDataOrder &) = default ;
    DescribeConfigurationPriceResponseBodyDataOrder(DescribeConfigurationPriceResponseBodyDataOrder &&) = default ;
    DescribeConfigurationPriceResponseBodyDataOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConfigurationPriceResponseBodyDataOrder() = default ;
    DescribeConfigurationPriceResponseBodyDataOrder& operator=(const DescribeConfigurationPriceResponseBodyDataOrder &) = default ;
    DescribeConfigurationPriceResponseBodyDataOrder& operator=(DescribeConfigurationPriceResponseBodyDataOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->discountAmount_ == nullptr
        && return this->originalAmount_ == nullptr && return this->ruleIds_ == nullptr && return this->tradeAmount_ == nullptr; };
    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline float discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataOrder& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline float originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataOrder& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const vector<string> & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, vector<string>) };
    inline vector<string> ruleIds() { DARABONBA_PTR_GET(ruleIds_, vector<string>) };
    inline DescribeConfigurationPriceResponseBodyDataOrder& setRuleIds(const vector<string> & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline DescribeConfigurationPriceResponseBodyDataOrder& setRuleIds(vector<string> && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline float tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
    inline DescribeConfigurationPriceResponseBodyDataOrder& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    // The discount amount.
    std::shared_ptr<float> discountAmount_ = nullptr;
    // The original price of the order.
    std::shared_ptr<float> originalAmount_ = nullptr;
    // The ID of the promotion rule.
    std::shared_ptr<vector<string>> ruleIds_ = nullptr;
    // The transaction price.
    std::shared_ptr<float> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
