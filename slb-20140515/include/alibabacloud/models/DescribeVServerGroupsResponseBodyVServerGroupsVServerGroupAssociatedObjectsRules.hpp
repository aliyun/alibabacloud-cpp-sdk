// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTSRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSERVERGROUPSRESPONSEBODYVSERVERGROUPSVSERVERGROUPASSOCIATEDOBJECTSRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules &&) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules() = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules& operator=(const DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules &) = default ;
    DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules& operator=(DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule>) };
    inline vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule>) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules& setRule(const vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRules& setRule(vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeVServerGroupsResponseBodyVServerGroupsVServerGroupAssociatedObjectsRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
