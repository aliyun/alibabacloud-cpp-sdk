// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODYRESOURCEALERTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODYRESOURCEALERTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTemplate, alertTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTemplate, alertTemplate_);
    };
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates() = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates(const DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates(DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates &&) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates() = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates& operator=(const DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates& operator=(DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertTemplate_ != nullptr; };
    // alertTemplate Field Functions 
    bool hasAlertTemplate() const { return this->alertTemplate_ != nullptr;};
    void deleteAlertTemplate() { this->alertTemplate_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate> & alertTemplate() const { DARABONBA_PTR_GET_CONST(alertTemplate_, vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate>) };
    inline vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate> alertTemplate() { DARABONBA_PTR_GET(alertTemplate_, vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate>) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates& setAlertTemplate(const vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate> & alertTemplate) { DARABONBA_PTR_SET_VALUE(alertTemplate_, alertTemplate) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates& setAlertTemplate(vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate> && alertTemplate) { DARABONBA_PTR_SET_RVALUE(alertTemplate_, alertTemplate) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplatesAlertTemplate>> alertTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
