// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTINGMETRICRULERESOURCESRESPONSEBODYRESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Escalation, escalation_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LastAlertTime, lastAlertTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(MetricValues, metricValues_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ProductCategory, productCategory_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Escalation, escalation_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LastAlertTime, lastAlertTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(MetricValues, metricValues_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ProductCategory, productCategory_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource(const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource(DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource &&) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource() = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& operator=(const DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource &) = default ;
    DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& operator=(DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->enable_ != nullptr && this->escalation_ != nullptr && this->groupId_ != nullptr && this->lastAlertTime_ != nullptr && this->lastModifyTime_ != nullptr
        && this->level_ != nullptr && this->metricName_ != nullptr && this->metricValues_ != nullptr && this->namespace_ != nullptr && this->productCategory_ != nullptr
        && this->resource_ != nullptr && this->retryTimes_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->startTime_ != nullptr
        && this->statistics_ != nullptr && this->threshold_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline string enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // escalation Field Functions 
    bool hasEscalation() const { return this->escalation_ != nullptr;};
    void deleteEscalation() { this->escalation_ = nullptr;};
    inline const Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation & escalation() const { DARABONBA_PTR_GET_CONST(escalation_, Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation) };
    inline Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation escalation() { DARABONBA_PTR_GET(escalation_, Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setEscalation(const Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation & escalation) { DARABONBA_PTR_SET_VALUE(escalation_, escalation) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setEscalation(Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation && escalation) { DARABONBA_PTR_SET_RVALUE(escalation_, escalation) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // lastAlertTime Field Functions 
    bool hasLastAlertTime() const { return this->lastAlertTime_ != nullptr;};
    void deleteLastAlertTime() { this->lastAlertTime_ = nullptr;};
    inline string lastAlertTime() const { DARABONBA_PTR_GET_DEFAULT(lastAlertTime_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setLastAlertTime(string lastAlertTime) { DARABONBA_PTR_SET_VALUE(lastAlertTime_, lastAlertTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // metricValues Field Functions 
    bool hasMetricValues() const { return this->metricValues_ != nullptr;};
    void deleteMetricValues() { this->metricValues_ = nullptr;};
    inline string metricValues() const { DARABONBA_PTR_GET_DEFAULT(metricValues_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setMetricValues(string metricValues) { DARABONBA_PTR_SET_VALUE(metricValues_, metricValues) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // productCategory Field Functions 
    bool hasProductCategory() const { return this->productCategory_ != nullptr;};
    void deleteProductCategory() { this->productCategory_ = nullptr;};
    inline string productCategory() const { DARABONBA_PTR_GET_DEFAULT(productCategory_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setProductCategory(string productCategory) { DARABONBA_PTR_SET_VALUE(productCategory_, productCategory) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline string retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setRetryTimes(string retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline string threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, "") };
    inline DescribeAlertingMetricRuleResourcesResponseBodyResourcesResource& setThreshold(string threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The dimensions based on which the resources are queried.
    std::shared_ptr<string> dimensions_ = nullptr;
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // *   true: The alert rule is enabled.
    // *   false: The alert rule is disabled.
    std::shared_ptr<string> enable_ = nullptr;
    // The alert rule based on which the alert is triggered.
    std::shared_ptr<Models::DescribeAlertingMetricRuleResourcesResponseBodyResourcesResourceEscalation> escalation_ = nullptr;
    // The ID of the application group.
    // 
    // >  If the alert rule is associated with an application group, the ID of the application group is returned in this parameter.
    std::shared_ptr<string> groupId_ = nullptr;
    // The time when the last alert was triggered for the resource based on the alert rule. The value is a timestamp.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> lastAlertTime_ = nullptr;
    // The time when the alert rule was last modified. The value is a timestamp.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    // The severity level and notification methods of the alert. Valid values:
    // 
    // *   4: Alert notifications are sent by using emails and DingTalk chatbots.
    // *   OK: No alert is generated.
    std::shared_ptr<int32_t> level_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The metric value that triggered the alert based on the alert rule. The value is a JSON string.
    std::shared_ptr<string> metricValues_ = nullptr;
    // The namespace of the cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of the cloud service.
    std::shared_ptr<string> productCategory_ = nullptr;
    // The resources that are monitored.
    std::shared_ptr<string> resource_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered.
    std::shared_ptr<string> retryTimes_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The time when the resource was associated with the alert rule. The value is a timestamp.
    // 
    // Unit: milliseconds.
    std::shared_ptr<string> startTime_ = nullptr;
    // The method used to calculate the metric values that trigger alerts.
    std::shared_ptr<string> statistics_ = nullptr;
    // The alert threshold.
    std::shared_ptr<string> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
