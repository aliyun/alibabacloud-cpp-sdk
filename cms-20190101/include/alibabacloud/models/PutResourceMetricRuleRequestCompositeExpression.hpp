// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTCOMPOSITEEXPRESSION_HPP_
#define ALIBABACLOUD_MODELS_PUTRESOURCEMETRICRULEREQUESTCOMPOSITEEXPRESSION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutResourceMetricRuleRequestCompositeExpressionExpressionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutResourceMetricRuleRequestCompositeExpression : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutResourceMetricRuleRequestCompositeExpression& obj) { 
      DARABONBA_PTR_TO_JSON(ExpressionList, expressionList_);
      DARABONBA_PTR_TO_JSON(ExpressionListJoin, expressionListJoin_);
      DARABONBA_PTR_TO_JSON(ExpressionRaw, expressionRaw_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, PutResourceMetricRuleRequestCompositeExpression& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpressionList, expressionList_);
      DARABONBA_PTR_FROM_JSON(ExpressionListJoin, expressionListJoin_);
      DARABONBA_PTR_FROM_JSON(ExpressionRaw, expressionRaw_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    PutResourceMetricRuleRequestCompositeExpression() = default ;
    PutResourceMetricRuleRequestCompositeExpression(const PutResourceMetricRuleRequestCompositeExpression &) = default ;
    PutResourceMetricRuleRequestCompositeExpression(PutResourceMetricRuleRequestCompositeExpression &&) = default ;
    PutResourceMetricRuleRequestCompositeExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutResourceMetricRuleRequestCompositeExpression() = default ;
    PutResourceMetricRuleRequestCompositeExpression& operator=(const PutResourceMetricRuleRequestCompositeExpression &) = default ;
    PutResourceMetricRuleRequestCompositeExpression& operator=(PutResourceMetricRuleRequestCompositeExpression &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expressionList_ != nullptr
        && this->expressionListJoin_ != nullptr && this->expressionRaw_ != nullptr && this->level_ != nullptr && this->times_ != nullptr; };
    // expressionList Field Functions 
    bool hasExpressionList() const { return this->expressionList_ != nullptr;};
    void deleteExpressionList() { this->expressionList_ = nullptr;};
    inline const vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList> & expressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList>) };
    inline vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList> expressionList() { DARABONBA_PTR_GET(expressionList_, vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList>) };
    inline PutResourceMetricRuleRequestCompositeExpression& setExpressionList(const vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList> & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
    inline PutResourceMetricRuleRequestCompositeExpression& setExpressionList(vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList> && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


    // expressionListJoin Field Functions 
    bool hasExpressionListJoin() const { return this->expressionListJoin_ != nullptr;};
    void deleteExpressionListJoin() { this->expressionListJoin_ = nullptr;};
    inline string expressionListJoin() const { DARABONBA_PTR_GET_DEFAULT(expressionListJoin_, "") };
    inline PutResourceMetricRuleRequestCompositeExpression& setExpressionListJoin(string expressionListJoin) { DARABONBA_PTR_SET_VALUE(expressionListJoin_, expressionListJoin) };


    // expressionRaw Field Functions 
    bool hasExpressionRaw() const { return this->expressionRaw_ != nullptr;};
    void deleteExpressionRaw() { this->expressionRaw_ = nullptr;};
    inline string expressionRaw() const { DARABONBA_PTR_GET_DEFAULT(expressionRaw_, "") };
    inline PutResourceMetricRuleRequestCompositeExpression& setExpressionRaw(string expressionRaw) { DARABONBA_PTR_SET_VALUE(expressionRaw_, expressionRaw) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline PutResourceMetricRuleRequestCompositeExpression& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline PutResourceMetricRuleRequestCompositeExpression& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The trigger conditions that are created in standard mode.
    std::shared_ptr<vector<Models::PutResourceMetricRuleRequestCompositeExpressionExpressionList>> expressionList_ = nullptr;
    // The relationship between the trigger conditions for multiple metrics. Valid value:
    // 
    // *   `&&`: An alert is triggered only if all metrics meet the trigger conditions. An alert is triggered only if the results of all expressions specified in the ExpressionList parameter are `true`.
    // *   `||`: An alert is triggered if one of the metrics meets the trigger conditions.
    std::shared_ptr<string> expressionListJoin_ = nullptr;
    // The trigger conditions that are created by using expressions. You can use expressions to create trigger conditions in the following scenarios:
    // 
    // *   Set an alert blacklist for specific resources. For example, if you specify `$instanceId != \\"i-io8kfvcpp7x5****\\" ``&&`` $Average > 50`, no alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 50.
    // *   Set a special alert threshold for a specified instance in the rule. For example, if you specify `$Average > ($instanceId == \\"i-io8kfvcpp7x5****\\"? 80: 50)`, an alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 80 or the `average metric value` of other instances exceeds 50.
    // *   Limit the number of instances whose metric values exceed the threshold. For example, if you specify `count($Average > 20) > 3`, an alert is triggered only when the `average metric value` of more than three instances exceeds 20.
    std::shared_ptr<string> expressionRaw_ = nullptr;
    // The alert level. Valid values:
    // 
    // *   Critical
    // *   Warn
    // *   Info
    std::shared_ptr<string> level_ = nullptr;
    // The number of consecutive triggers. If the number of times that the metric values meet the trigger conditions reaches the value of this parameter, CloudMonitor sends alert notifications.
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
