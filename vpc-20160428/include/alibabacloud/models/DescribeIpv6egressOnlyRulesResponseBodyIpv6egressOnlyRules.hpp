// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPV6EGRESSONLYRULESRESPONSEBODYIPV6EGRESSONLYRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPV6EGRESSONLYRULESRESPONSEBODYIPV6EGRESSONLYRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv6EgressOnlyRule, ipv6EgressOnlyRule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv6EgressOnlyRule, ipv6EgressOnlyRule_);
    };
    DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules() = default ;
    DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules(const DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules &) = default ;
    DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules(DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules &&) = default ;
    DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules() = default ;
    DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules& operator=(const DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules &) = default ;
    DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules& operator=(DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv6EgressOnlyRule_ != nullptr; };
    // ipv6EgressOnlyRule Field Functions 
    bool hasIpv6EgressOnlyRule() const { return this->ipv6EgressOnlyRule_ != nullptr;};
    void deleteIpv6EgressOnlyRule() { this->ipv6EgressOnlyRule_ = nullptr;};
    inline const vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule> & ipv6EgressOnlyRule() const { DARABONBA_PTR_GET_CONST(ipv6EgressOnlyRule_, vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule>) };
    inline vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule> ipv6EgressOnlyRule() { DARABONBA_PTR_GET(ipv6EgressOnlyRule_, vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule>) };
    inline DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules& setIpv6EgressOnlyRule(const vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule> & ipv6EgressOnlyRule) { DARABONBA_PTR_SET_VALUE(ipv6EgressOnlyRule_, ipv6EgressOnlyRule) };
    inline DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRules& setIpv6EgressOnlyRule(vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule> && ipv6EgressOnlyRule) { DARABONBA_PTR_SET_RVALUE(ipv6EgressOnlyRule_, ipv6EgressOnlyRule) };


  protected:
    std::shared_ptr<vector<Models::DescribeIpv6EgressOnlyRulesResponseBodyIpv6EgressOnlyRulesIpv6EgressOnlyRule>> ipv6EgressOnlyRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
