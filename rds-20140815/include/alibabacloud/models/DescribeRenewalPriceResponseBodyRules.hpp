// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeRenewalPriceResponseBodyRules() = default ;
    DescribeRenewalPriceResponseBodyRules(const DescribeRenewalPriceResponseBodyRules &) = default ;
    DescribeRenewalPriceResponseBodyRules(DescribeRenewalPriceResponseBodyRules &&) = default ;
    DescribeRenewalPriceResponseBodyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyRules() = default ;
    DescribeRenewalPriceResponseBodyRules& operator=(const DescribeRenewalPriceResponseBodyRules &) = default ;
    DescribeRenewalPriceResponseBodyRules& operator=(DescribeRenewalPriceResponseBodyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeRenewalPriceResponseBodyRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeRenewalPriceResponseBodyRulesRule>) };
    inline vector<Models::DescribeRenewalPriceResponseBodyRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeRenewalPriceResponseBodyRulesRule>) };
    inline DescribeRenewalPriceResponseBodyRules& setRule(const vector<Models::DescribeRenewalPriceResponseBodyRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeRenewalPriceResponseBodyRules& setRule(vector<Models::DescribeRenewalPriceResponseBodyRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenewalPriceResponseBodyRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
