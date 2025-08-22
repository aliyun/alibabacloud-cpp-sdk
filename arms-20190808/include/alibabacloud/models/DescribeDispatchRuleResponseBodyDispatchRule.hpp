// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODYDISPATCHRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRuleGroupRules.hpp>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid.hpp>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeDispatchRuleResponseBodyDispatchRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBodyDispatchRule& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchType, dispatchType_);
      DARABONBA_PTR_TO_JSON(GroupRules, groupRules_);
      DARABONBA_PTR_TO_JSON(IsRecover, isRecover_);
      DARABONBA_PTR_TO_JSON(LabelMatchExpressionGrid, labelMatchExpressionGrid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotifyRules, notifyRules_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBodyDispatchRule& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchType, dispatchType_);
      DARABONBA_PTR_FROM_JSON(GroupRules, groupRules_);
      DARABONBA_PTR_FROM_JSON(IsRecover, isRecover_);
      DARABONBA_PTR_FROM_JSON(LabelMatchExpressionGrid, labelMatchExpressionGrid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotifyRules, notifyRules_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribeDispatchRuleResponseBodyDispatchRule() = default ;
    DescribeDispatchRuleResponseBodyDispatchRule(const DescribeDispatchRuleResponseBodyDispatchRule &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRule(DescribeDispatchRuleResponseBodyDispatchRule &&) = default ;
    DescribeDispatchRuleResponseBodyDispatchRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBodyDispatchRule() = default ;
    DescribeDispatchRuleResponseBodyDispatchRule& operator=(const DescribeDispatchRuleResponseBodyDispatchRule &) = default ;
    DescribeDispatchRuleResponseBodyDispatchRule& operator=(DescribeDispatchRuleResponseBodyDispatchRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dispatchType_ != nullptr
        && this->groupRules_ != nullptr && this->isRecover_ != nullptr && this->labelMatchExpressionGrid_ != nullptr && this->name_ != nullptr && this->notifyRules_ != nullptr
        && this->ruleId_ != nullptr && this->state_ != nullptr; };
    // dispatchType Field Functions 
    bool hasDispatchType() const { return this->dispatchType_ != nullptr;};
    void deleteDispatchType() { this->dispatchType_ = nullptr;};
    inline string dispatchType() const { DARABONBA_PTR_GET_DEFAULT(dispatchType_, "") };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setDispatchType(string dispatchType) { DARABONBA_PTR_SET_VALUE(dispatchType_, dispatchType) };


    // groupRules Field Functions 
    bool hasGroupRules() const { return this->groupRules_ != nullptr;};
    void deleteGroupRules() { this->groupRules_ = nullptr;};
    inline const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules> & groupRules() const { DARABONBA_PTR_GET_CONST(groupRules_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules>) };
    inline vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules> groupRules() { DARABONBA_PTR_GET(groupRules_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules>) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setGroupRules(const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules> & groupRules) { DARABONBA_PTR_SET_VALUE(groupRules_, groupRules) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setGroupRules(vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules> && groupRules) { DARABONBA_PTR_SET_RVALUE(groupRules_, groupRules) };


    // isRecover Field Functions 
    bool hasIsRecover() const { return this->isRecover_ != nullptr;};
    void deleteIsRecover() { this->isRecover_ = nullptr;};
    inline bool isRecover() const { DARABONBA_PTR_GET_DEFAULT(isRecover_, false) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setIsRecover(bool isRecover) { DARABONBA_PTR_SET_VALUE(isRecover_, isRecover) };


    // labelMatchExpressionGrid Field Functions 
    bool hasLabelMatchExpressionGrid() const { return this->labelMatchExpressionGrid_ != nullptr;};
    void deleteLabelMatchExpressionGrid() { this->labelMatchExpressionGrid_ = nullptr;};
    inline const Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid & labelMatchExpressionGrid() const { DARABONBA_PTR_GET_CONST(labelMatchExpressionGrid_, Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid) };
    inline Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid labelMatchExpressionGrid() { DARABONBA_PTR_GET(labelMatchExpressionGrid_, Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setLabelMatchExpressionGrid(const Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid & labelMatchExpressionGrid) { DARABONBA_PTR_SET_VALUE(labelMatchExpressionGrid_, labelMatchExpressionGrid) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setLabelMatchExpressionGrid(Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid && labelMatchExpressionGrid) { DARABONBA_PTR_SET_RVALUE(labelMatchExpressionGrid_, labelMatchExpressionGrid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyRules Field Functions 
    bool hasNotifyRules() const { return this->notifyRules_ != nullptr;};
    void deleteNotifyRules() { this->notifyRules_ = nullptr;};
    inline const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules> & notifyRules() const { DARABONBA_PTR_GET_CONST(notifyRules_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules>) };
    inline vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules> notifyRules() { DARABONBA_PTR_GET(notifyRules_, vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules>) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setNotifyRules(const vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules> & notifyRules) { DARABONBA_PTR_SET_VALUE(notifyRules_, notifyRules) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setNotifyRules(vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules> && notifyRules) { DARABONBA_PTR_SET_RVALUE(notifyRules_, notifyRules) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeDispatchRuleResponseBodyDispatchRule& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Alarm handling method.
    // 
    // CREATE_ALERT: Generate an alert.
    // 
    // DISCARD_ALERT: Discard the alarm event, that is, no alarm.
    std::shared_ptr<string> dispatchType_ = nullptr;
    // The information about groups.
    std::shared_ptr<vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleGroupRules>> groupRules_ = nullptr;
    // Whether to send recovered alerts.
    // true: send.
    // false: do not send.
    std::shared_ptr<bool> isRecover_ = nullptr;
    // The information about the dispatch rule.
    std::shared_ptr<Models::DescribeDispatchRuleResponseBodyDispatchRuleLabelMatchExpressionGrid> labelMatchExpressionGrid_ = nullptr;
    // The name of the dispatch policy.
    std::shared_ptr<string> name_ = nullptr;
    // The collection of notification methods.
    std::shared_ptr<vector<Models::DescribeDispatchRuleResponseBodyDispatchRuleNotifyRules>> notifyRules_ = nullptr;
    // The ID of the dispatch rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // Indicates whether the dispatch policy is enabled. Valid values: 
    // 
    // - `true`: enabled
    // - `false`: disabled
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
