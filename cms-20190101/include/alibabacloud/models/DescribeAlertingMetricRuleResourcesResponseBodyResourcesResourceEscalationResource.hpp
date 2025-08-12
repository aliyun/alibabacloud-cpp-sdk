// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCESRESOURCEESCALATIONRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCESRESOURCEESCALATIONRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& obj) { 
      DARABONBA_PTR_TO_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(ExpressionList, expressionList_);
      DARABONBA_PTR_TO_JSON(ExpressionListJoin, expressionListJoin_);
      DARABONBA_PTR_TO_JSON(ExpressionRaw, expressionRaw_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(PreCondition, preCondition_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      DARABONBA_PTR_TO_JSON(Times, times_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ComparisonOperator, comparisonOperator_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(ExpressionList, expressionList_);
      DARABONBA_PTR_FROM_JSON(ExpressionListJoin, expressionListJoin_);
      DARABONBA_PTR_FROM_JSON(ExpressionRaw, expressionRaw_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(PreCondition, preCondition_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
    };
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource(const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource(DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource &&) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& operator=(const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& operator=(DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comparisonOperator_ != nullptr
        && this->expression_ != nullptr && this->expressionList_ != nullptr && this->expressionListJoin_ != nullptr && this->expressionRaw_ != nullptr && this->level_ != nullptr
        && this->preCondition_ != nullptr && this->tag_ != nullptr && this->threshold_ != nullptr && this->times_ != nullptr; };
    // comparisonOperator Field Functions 
    bool hasComparisonOperator() const { return this->comparisonOperator_ != nullptr;};
    void deleteComparisonOperator() { this->comparisonOperator_ = nullptr;};
    inline string comparisonOperator() const { DARABONBA_PTR_GET_DEFAULT(comparisonOperator_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setComparisonOperator(string comparisonOperator) { DARABONBA_PTR_SET_VALUE(comparisonOperator_, comparisonOperator) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // expressionList Field Functions 
    bool hasExpressionList() const { return this->expressionList_ != nullptr;};
    void deleteExpressionList() { this->expressionList_ = nullptr;};
    inline const Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList & expressionList() const { DARABONBA_PTR_GET_CONST(expressionList_, Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList) };
    inline Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList expressionList() { DARABONBA_PTR_GET(expressionList_, Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setExpressionList(const Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList & expressionList) { DARABONBA_PTR_SET_VALUE(expressionList_, expressionList) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setExpressionList(Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList && expressionList) { DARABONBA_PTR_SET_RVALUE(expressionList_, expressionList) };


    // expressionListJoin Field Functions 
    bool hasExpressionListJoin() const { return this->expressionListJoin_ != nullptr;};
    void deleteExpressionListJoin() { this->expressionListJoin_ = nullptr;};
    inline string expressionListJoin() const { DARABONBA_PTR_GET_DEFAULT(expressionListJoin_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setExpressionListJoin(string expressionListJoin) { DARABONBA_PTR_SET_VALUE(expressionListJoin_, expressionListJoin) };


    // expressionRaw Field Functions 
    bool hasExpressionRaw() const { return this->expressionRaw_ != nullptr;};
    void deleteExpressionRaw() { this->expressionRaw_ = nullptr;};
    inline string expressionRaw() const { DARABONBA_PTR_GET_DEFAULT(expressionRaw_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setExpressionRaw(string expressionRaw) { DARABONBA_PTR_SET_VALUE(expressionRaw_, expressionRaw) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // preCondition Field Functions 
    bool hasPreCondition() const { return this->preCondition_ != nullptr;};
    void deletePreCondition() { this->preCondition_ = nullptr;};
    inline string preCondition() const { DARABONBA_PTR_GET_DEFAULT(preCondition_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setPreCondition(string preCondition) { DARABONBA_PTR_SET_VALUE(preCondition_, preCondition) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResource& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The operator that is used to compare the metric value with the threshold. Valid values:
    // 
    // *   GreaterThanOrEqualToThreshold: greater than or equal to the threshold
    // *   GreaterThanThreshold: greater than the threshold
    // *   LessThanOrEqualToThreshold: less than or equal to the threshold
    // *   LessThanThreshold: less than the threshold
    // *   NotEqualToThreshold: not equal to the threshold
    // *   GreaterThanYesterday: greater than the metric value at the same time yesterday
    // *   LessThanYesterday: less than the metric value at the same time yesterday
    // *   GreaterThanLastWeek: greater than the metric value at the same time last week
    // *   LessThanLastWeek: less than the metric value at the same time last week
    // *   GreaterThanLastPeriod: greater than the metric value in the last monitoring cycle
    // *   LessThanLastPeriod: less than the metric value in the last monitoring cycle
    std::shared_ptr<string> comparisonOperator_ = nullptr;
    // The description of the alert rule.
    // 
    // >  This parameter indicates the content of the alert rule. If the metric value meets the alert condition, an alert is triggered.
    std::shared_ptr<string> expression_ = nullptr;
    // The description of the multi-metric alert rule.
    std::shared_ptr<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalationResourceExpressionList> expressionList_ = nullptr;
    // The relationship between multiple metrics. Valid values:
    // 
    // *   &&: If all metrics meet the alert conditions, CloudMonitor sends alert notifications.
    // *   ||: If one of the metrics meets the alert conditions, CloudMonitor sends alert notifications.
    std::shared_ptr<string> expressionListJoin_ = nullptr;
    // The trigger conditions that are created by using expressions. You can use expressions to create trigger conditions in the following scenarios:
    // 
    // *   Set an alert blacklist for specific resources. For example, if you specify `$instanceId != \\"i-io8kfvcpp7x5****\\" ``&&`` $Average > 50`, no alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 50.
    // *   Set a special alert threshold for a specified instance in the rule. For example, if you specify `$Average > ($instanceId == \\"i-io8kfvcpp7x5****\\"? 80: 50)`, an alert is triggered when the `average metric value` of the `i-io8kfvcpp7x5****` instance exceeds 80 or the `average metric value` of other instances exceeds 50.
    // *   Limit the number of instances whose metric values exceed the threshold. For example, if you specify `count($Average > 20) > 3`, an alert is triggered only when the `average metric value` of more than three instances exceeds 20.
    std::shared_ptr<string> expressionRaw_ = nullptr;
    // The severity level and notification methods of the alert. Valid values:
    // 
    // *   4: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   OK: No alert is generated.
    std::shared_ptr<int32_t> level_ = nullptr;
    // The operator that is used to compare the metric value with the threshold. Valid values:
    // 
    // *   `>=`
    // *   `=`
    // *   `<=`
    // *   `>`
    // *   `<`
    // *   `!=`
    std::shared_ptr<string> preCondition_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> tag_ = nullptr;
    // The alert threshold.
    std::shared_ptr<string> threshold_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
