// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODYRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATEATTRIBUTERESPONSEBODYRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateAttributeResponseBodyResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateAttributeResponseBodyResource& obj) { 
      DARABONBA_PTR_TO_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RestVersion, restVersion_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateAttributeResponseBodyResource& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertTemplates, alertTemplates_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RestVersion, restVersion_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeMetricRuleTemplateAttributeResponseBodyResource() = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResource(const DescribeMetricRuleTemplateAttributeResponseBodyResource &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResource(DescribeMetricRuleTemplateAttributeResponseBodyResource &&) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateAttributeResponseBodyResource() = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResource& operator=(const DescribeMetricRuleTemplateAttributeResponseBodyResource &) = default ;
    DescribeMetricRuleTemplateAttributeResponseBodyResource& operator=(DescribeMetricRuleTemplateAttributeResponseBodyResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertTemplates_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->restVersion_ != nullptr && this->templateId_ != nullptr; };
    // alertTemplates Field Functions 
    bool hasAlertTemplates() const { return this->alertTemplates_ != nullptr;};
    void deleteAlertTemplates() { this->alertTemplates_ = nullptr;};
    inline const Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates & alertTemplates() const { DARABONBA_PTR_GET_CONST(alertTemplates_, Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates) };
    inline Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates alertTemplates() { DARABONBA_PTR_GET(alertTemplates_, Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResource& setAlertTemplates(const Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates & alertTemplates) { DARABONBA_PTR_SET_VALUE(alertTemplates_, alertTemplates) };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResource& setAlertTemplates(Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates && alertTemplates) { DARABONBA_PTR_SET_RVALUE(alertTemplates_, alertTemplates) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // restVersion Field Functions 
    bool hasRestVersion() const { return this->restVersion_ != nullptr;};
    void deleteRestVersion() { this->restVersion_ = nullptr;};
    inline string restVersion() const { DARABONBA_PTR_GET_DEFAULT(restVersion_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResource& setRestVersion(string restVersion) { DARABONBA_PTR_SET_VALUE(restVersion_, restVersion) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeMetricRuleTemplateAttributeResponseBodyResource& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The queried alert templates.
    std::shared_ptr<Models::DescribeMetricRuleTemplateAttributeResponseBodyResourceAlertTemplates> alertTemplates_ = nullptr;
    // The description of the alert template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the alert template.
    std::shared_ptr<string> name_ = nullptr;
    // The version of the alert template.
    std::shared_ptr<string> restVersion_ = nullptr;
    // The ID of the alert template.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
