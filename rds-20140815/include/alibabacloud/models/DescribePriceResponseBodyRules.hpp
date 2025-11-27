// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribePriceResponseBodyRules() = default ;
    DescribePriceResponseBodyRules(const DescribePriceResponseBodyRules &) = default ;
    DescribePriceResponseBodyRules(DescribePriceResponseBodyRules &&) = default ;
    DescribePriceResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyRules() = default ;
    DescribePriceResponseBodyRules& operator=(const DescribePriceResponseBodyRules &) = default ;
    DescribePriceResponseBodyRules& operator=(DescribePriceResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribePriceResponseBodyRulesRule>) };
    inline vector<Models::DescribePriceResponseBodyRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribePriceResponseBodyRulesRule>) };
    inline DescribePriceResponseBodyRules& setRule(const vector<Models::DescribePriceResponseBodyRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribePriceResponseBodyRules& setRule(vector<Models::DescribePriceResponseBodyRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
