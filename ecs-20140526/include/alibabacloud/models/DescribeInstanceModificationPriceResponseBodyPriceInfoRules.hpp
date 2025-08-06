// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFORULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICERESPONSEBODYPRICEINFORULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceResponseBodyPriceInfoRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceResponseBodyPriceInfoRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeInstanceModificationPriceResponseBodyPriceInfoRules() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoRules(const DescribeInstanceModificationPriceResponseBodyPriceInfoRules &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoRules(DescribeInstanceModificationPriceResponseBodyPriceInfoRules &&) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceResponseBodyPriceInfoRules() = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoRules& operator=(const DescribeInstanceModificationPriceResponseBodyPriceInfoRules &) = default ;
    DescribeInstanceModificationPriceResponseBodyPriceInfoRules& operator=(DescribeInstanceModificationPriceResponseBodyPriceInfoRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rule_ != nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule>) };
    inline vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule>) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoRules& setRule(const vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeInstanceModificationPriceResponseBodyPriceInfoRules& setRule(vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceModificationPriceResponseBodyPriceInfoRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
