// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPROMOTIONRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPROMOTIONRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPromotionRulesPromotionRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribePriceResponseBodyPromotionRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPromotionRules& obj) { 
      DARABONBA_PTR_TO_JSON(PromotionRule, promotionRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPromotionRules& obj) { 
      DARABONBA_PTR_FROM_JSON(PromotionRule, promotionRule_);
    };
    DescribePriceResponseBodyPromotionRules() = default ;
    DescribePriceResponseBodyPromotionRules(const DescribePriceResponseBodyPromotionRules &) = default ;
    DescribePriceResponseBodyPromotionRules(DescribePriceResponseBodyPromotionRules &&) = default ;
    DescribePriceResponseBodyPromotionRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPromotionRules() = default ;
    DescribePriceResponseBodyPromotionRules& operator=(const DescribePriceResponseBodyPromotionRules &) = default ;
    DescribePriceResponseBodyPromotionRules& operator=(DescribePriceResponseBodyPromotionRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->promotionRule_ != nullptr; };
    // promotionRule Field Functions 
    bool hasPromotionRule() const { return this->promotionRule_ != nullptr;};
    void deletePromotionRule() { this->promotionRule_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule> & promotionRule() const { DARABONBA_PTR_GET_CONST(promotionRule_, vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule>) };
    inline vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule> promotionRule() { DARABONBA_PTR_GET(promotionRule_, vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule>) };
    inline DescribePriceResponseBodyPromotionRules& setPromotionRule(const vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule> & promotionRule) { DARABONBA_PTR_SET_VALUE(promotionRule_, promotionRule) };
    inline DescribePriceResponseBodyPromotionRules& setPromotionRule(vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule> && promotionRule) { DARABONBA_PTR_SET_RVALUE(promotionRule_, promotionRule) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPromotionRulesPromotionRule>> promotionRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
