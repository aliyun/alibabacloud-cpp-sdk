// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULELABELMATCHEXPRESSIONGRIDLABELMATCHEXPRESSIONGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULELABELMATCHEXPRESSIONGRIDLABELMATCHEXPRESSIONGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups& obj) { 
      DARABONBA_PTR_TO_JSON(LabelMatchExpressions, labelMatchExpressions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelMatchExpressions, labelMatchExpressions_);
    };
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups(const DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups(DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups &&) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups& operator=(const DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups& operator=(DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelMatchExpressions_ != nullptr; };
    // labelMatchExpressions Field Functions 
    bool hasLabelMatchExpressions() const { return this->labelMatchExpressions_ != nullptr;};
    void deleteLabelMatchExpressions() { this->labelMatchExpressions_ = nullptr;};
    inline const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> & labelMatchExpressions() const { DARABONBA_PTR_GET_CONST(labelMatchExpressions_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>) };
    inline vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> labelMatchExpressions() { DARABONBA_PTR_GET(labelMatchExpressions_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups& setLabelMatchExpressions(const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> & labelMatchExpressions) { DARABONBA_PTR_SET_VALUE(labelMatchExpressions_, labelMatchExpressions) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups& setLabelMatchExpressions(vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions> && labelMatchExpressions) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressions_, labelMatchExpressions) };


  protected:
    // The collection of conditions of the dispatch rule.
    std::shared_ptr<vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroupsLabelMatchExpressions>> labelMatchExpressions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
