// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMETRICRULETEMPLATEREQUESTALERTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMETRICRULETEMPLATEREQUESTALERTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyMetricRuleTemplateRequestAlertTemplatesEscalations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMetricRuleTemplateRequestAlertTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMetricRuleTemplateRequestAlertTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Selector, selector_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMetricRuleTemplateRequestAlertTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Selector, selector_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    ModifyMetricRuleTemplateRequestAlertTemplates() = default ;
    ModifyMetricRuleTemplateRequestAlertTemplates(const ModifyMetricRuleTemplateRequestAlertTemplates &) = default ;
    ModifyMetricRuleTemplateRequestAlertTemplates(ModifyMetricRuleTemplateRequestAlertTemplates &&) = default ;
    ModifyMetricRuleTemplateRequestAlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMetricRuleTemplateRequestAlertTemplates() = default ;
    ModifyMetricRuleTemplateRequestAlertTemplates& operator=(const ModifyMetricRuleTemplateRequestAlertTemplates &) = default ;
    ModifyMetricRuleTemplateRequestAlertTemplates& operator=(ModifyMetricRuleTemplateRequestAlertTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalations_ != nullptr
        && this->category_ != nullptr && this->metricName_ != nullptr && this->namespace_ != nullptr && this->period_ != nullptr && this->ruleName_ != nullptr
        && this->selector_ != nullptr && this->webhook_ != nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations) };
    inline Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations) };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setEscalations(const Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setEscalations(Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline string selector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline ModifyMetricRuleTemplateRequestAlertTemplates& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<Models::ModifyMetricRuleTemplateRequestAlertTemplatesEscalations> escalations_ = nullptr;
    // The abbreviation of the cloud service name.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For more information about how to obtain the abbreviation of a cloud service name, see `metricCategory` in the response parameter `Labels` of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation.
    std::shared_ptr<string> category_ = nullptr;
    // The metric name.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For information about how to obtain metrics, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For information about how to obtain the namespace of a cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> namespace_ = nullptr;
    // The statistical period of the monitoring data.
    // 
    // Valid values of N: 1 to 200.
    // 
    // > If the value is set to 300 seconds, the monitoring data is collected every 300 seconds. If the monitoring data is reported every 1 minute, the alert system calculates the average, maximum, and minimum values of the monitoring data of 5 minutes and checks whether the aggregated values exceed the threshold. To prevent unexpected alerts, we recommend that you set this parameter together with other parameters.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The name of the alert rule.
    // 
    // Valid values of N: 1 to 200.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The dimension of the alert. It is an extended field.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For example, an alert template is applied to an application group, this parameter is set to `{"disk":"/"}`, and the MetricName parameter is set to `DiskUtilization`. In this case, the generated alert rule is applied to the root disk partition (`"/"`) of all instances in the application group to which the alert template is applied.
    // 
    // > For more information about the values of extended fields, see [DescribeMetricRuleTemplateAttribute](https://help.aliyun.com/document_detail/114979.html).
    std::shared_ptr<string> selector_ = nullptr;
    // The callback URL.
    // 
    // Valid values of N: 1 to 200.
    // 
    // The callback URL must be accessible over the Internet. CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
