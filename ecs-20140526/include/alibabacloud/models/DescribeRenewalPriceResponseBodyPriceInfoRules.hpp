// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFORULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeRenewalPriceResponseBodyPriceInfoRules() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoRules(const DescribeRenewalPriceResponseBodyPriceInfoRules &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoRules(DescribeRenewalPriceResponseBodyPriceInfoRules &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfoRules() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoRules& operator=(const DescribeRenewalPriceResponseBodyPriceInfoRules &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoRules& operator=(DescribeRenewalPriceResponseBodyPriceInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rule_ != nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule>) };
    inline vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule>) };
    inline DescribeRenewalPriceResponseBodyPriceInfoRules& setRule(const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeRenewalPriceResponseBodyPriceInfoRules& setRule(vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenewalPriceResponseBodyPriceInfoRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
