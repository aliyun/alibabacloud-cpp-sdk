// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFIREWALLRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFIREWALLRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeFirewallRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFirewallRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFirewallRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    DescribeFirewallRulesResponseBodyData() = default ;
    DescribeFirewallRulesResponseBodyData(const DescribeFirewallRulesResponseBodyData &) = default ;
    DescribeFirewallRulesResponseBodyData(DescribeFirewallRulesResponseBodyData &&) = default ;
    DescribeFirewallRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFirewallRulesResponseBodyData() = default ;
    DescribeFirewallRulesResponseBodyData& operator=(const DescribeFirewallRulesResponseBodyData &) = default ;
    DescribeFirewallRulesResponseBodyData& operator=(DescribeFirewallRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleList_ != nullptr; };
    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<string> & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<string>) };
    inline vector<string> ruleList() { DARABONBA_PTR_GET(ruleList_, vector<string>) };
    inline DescribeFirewallRulesResponseBodyData& setRuleList(const vector<string> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline DescribeFirewallRulesResponseBodyData& setRuleList(vector<string> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    std::shared_ptr<vector<string>> ruleList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
