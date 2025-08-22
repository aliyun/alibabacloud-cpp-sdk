// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULELABELMATCHEXPRESSIONGRID_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULELABELMATCHEXPRESSIONGRID_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid& obj) { 
      DARABONBA_PTR_TO_JSON(LabelMatchExpressionGroups, labelMatchExpressionGroups_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelMatchExpressionGroups, labelMatchExpressionGroups_);
    };
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid(const DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid(DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid &&) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid() = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid& operator=(const DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid& operator=(DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->labelMatchExpressionGroups_ != nullptr; };
    // labelMatchExpressionGroups Field Functions 
    bool hasLabelMatchExpressionGroups() const { return this->labelMatchExpressionGroups_ != nullptr;};
    void deleteLabelMatchExpressionGroups() { this->labelMatchExpressionGroups_ = nullptr;};
    inline const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups> & labelMatchExpressionGroups() const { DARABONBA_PTR_GET_CONST(labelMatchExpressionGroups_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups>) };
    inline vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups> labelMatchExpressionGroups() { DARABONBA_PTR_GET(labelMatchExpressionGroups_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups>) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid& setLabelMatchExpressionGroups(const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups> & labelMatchExpressionGroups) { DARABONBA_PTR_SET_VALUE(labelMatchExpressionGroups_, labelMatchExpressionGroups) };
    inline DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid& setLabelMatchExpressionGroups(vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups> && labelMatchExpressionGroups) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressionGroups_, labelMatchExpressionGroups) };


  protected:
    // The collection of dispatch rules.
    std::shared_ptr<vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGridLabelMatchExpressionGroups>> labelMatchExpressionGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
