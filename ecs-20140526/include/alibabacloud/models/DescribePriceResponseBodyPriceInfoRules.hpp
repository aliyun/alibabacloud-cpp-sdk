// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribePriceResponseBodyPriceInfoRules() = default ;
    DescribePriceResponseBodyPriceInfoRules(const DescribePriceResponseBodyPriceInfoRules &) = default ;
    DescribePriceResponseBodyPriceInfoRules(DescribePriceResponseBodyPriceInfoRules &&) = default ;
    DescribePriceResponseBodyPriceInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoRules() = default ;
    DescribePriceResponseBodyPriceInfoRules& operator=(const DescribePriceResponseBodyPriceInfoRules &) = default ;
    DescribePriceResponseBodyPriceInfoRules& operator=(DescribePriceResponseBodyPriceInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPriceInfoRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribePriceResponseBodyPriceInfoRulesRule>) };
    inline vector<Models::DescribePriceResponseBodyPriceInfoRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribePriceResponseBodyPriceInfoRulesRule>) };
    inline DescribePriceResponseBodyPriceInfoRules& setRule(const vector<Models::DescribePriceResponseBodyPriceInfoRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribePriceResponseBodyPriceInfoRules& setRule(vector<Models::DescribePriceResponseBodyPriceInfoRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPriceInfoRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
