// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODYRESOURCEALERTTEMPLATESALERTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODYRESOURCEALERTTEMPLATESALERTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations.hpp>
#include <alibabacloud/models/DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Selector, selector_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Selector, selector_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate() = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate(const DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate(DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate &&) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate() = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& operator=(const DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& operator=(DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->escalations_ != nullptr && this->labels_ != nullptr && this->metricName_ != nullptr && this->namespace_ != nullptr && this->noDataPolicy_ != nullptr
        && this->ruleName_ != nullptr && this->selector_ != nullptr && this->silenceTime_ != nullptr && this->webhook_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations) };
    inline Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setEscalations(const Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setEscalations(Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels & labels() const { DARABONBA_PTR_GET_CONST(labels_, Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels) };
    inline Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels labels() { DARABONBA_PTR_GET(labels_, Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setLabels(const Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setLabels(Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // selector Field Functions 
    bool hasSelector() const { return this->selector_ != nullptr;};
    void deleteSelector() { this->selector_ = nullptr;};
    inline string selector() const { DARABONBA_PTR_GET_DEFAULT(selector_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setSelector(string selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> category_ = nullptr;
    // The threshold and the alert level.
    std::shared_ptr<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateEscalations> escalations_ = nullptr;
    // The tags of the alert template.
    std::shared_ptr<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplateLabels> labels_ = nullptr;
    // The metric name.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the Alibaba Cloud service.
    std::shared_ptr<string> namespace_ = nullptr;
    // The method that is used to handle alerts when no monitoring data is found. Valid values:
    // 
    // *   KEEP_LAST_STATE (default): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The status is considered normal.
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The dimension of the alert. It is an extended field.
    std::shared_ptr<string> selector_ = nullptr;
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The callback URL to which a request is sent when an alert is triggered.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
