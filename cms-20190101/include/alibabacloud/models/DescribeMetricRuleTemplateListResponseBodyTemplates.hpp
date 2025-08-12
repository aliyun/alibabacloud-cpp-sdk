// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULETEMPLATELISTRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleTemplateListResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleTemplateListResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleTemplateListResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeMetricRuleTemplateListResponseBodyTemplates() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplates(const DescribeMetricRuleTemplateListResponseBodyTemplates &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplates(DescribeMetricRuleTemplateListResponseBodyTemplates &&) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleTemplateListResponseBodyTemplates() = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplates& operator=(const DescribeMetricRuleTemplateListResponseBodyTemplates &) = default ;
    DescribeMetricRuleTemplateListResponseBodyTemplates& operator=(DescribeMetricRuleTemplateListResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->template_ != nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate>) };
    inline vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate>) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplates& setTemplate(const vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribeMetricRuleTemplateListResponseBodyTemplates& setTemplate(vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::DescribeMetricRuleTemplateListResponseBodyTemplatesTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
