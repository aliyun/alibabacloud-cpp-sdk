// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUESTALERTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMETRICRULETEMPLATEREQUESTALERTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMetricRuleTemplateRequestAlertTemplatesEscalations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMetricRuleTemplateRequestAlertTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMetricRuleTemplateRequestAlertTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Selector, selector_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMetricRuleTemplateRequestAlertTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Selector, selector_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    CreateMetricRuleTemplateRequestAlertTemplates() = default ;
    CreateMetricRuleTemplateRequestAlertTemplates(const CreateMetricRuleTemplateRequestAlertTemplates &) = default ;
    CreateMetricRuleTemplateRequestAlertTemplates(CreateMetricRuleTemplateRequestAlertTemplates &&) = default ;
    CreateMetricRuleTemplateRequestAlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMetricRuleTemplateRequestAlertTemplates() = default ;
    CreateMetricRuleTemplateRequestAlertTemplates& operator=(const CreateMetricRuleTemplateRequestAlertTemplates &) = default ;
    CreateMetricRuleTemplateRequestAlertTemplates& operator=(CreateMetricRuleTemplateRequestAlertTemplates &&) = default ;
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
    inline const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations) };
    inline Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations) };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setEscalations(const Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setEscalations(Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline string selector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline CreateMetricRuleTemplateRequestAlertTemplates& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<Models::CreateMetricRuleTemplateRequestAlertTemplatesEscalations> escalations_ = nullptr;
    // The abbreviation of the cloud service name.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For more information about how to obtain the abbreviation of a cloud service name, see `metricCategory` in the response parameter `Labels` of the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The metric name.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For information about how to obtain the name of a metric, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For information about how to obtain the namespace of a cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The aggregation period of monitoring data. Unit: seconds.
    // 
    // The default value is the minimum aggregation period. Generally, you do not need to specify the minimum aggregation period.
    // 
    // Valid values of N: 1 to 200.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The name of the alert rule.
    // 
    // Valid values of N: 1 to 200.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The dimension of the alert. It is an extended field.
    // 
    // Valid values of N: 1 to 200.
    // 
    // For example, an alert template is applied to an application group, this parameter is set to `{"disk":"/"}`, and the MetricName parameter is set to `DiskUtilization`. In this case, the generated alert rule is applied to the root disk partition (`"/"`) of all instances in the application group to which the alert template is applied.
    // 
    // >  For more information about the values of extended fields, see [DescribeMetricRuleTemplateAttribute](https://help.aliyun.com/document_detail/114979.html).
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
