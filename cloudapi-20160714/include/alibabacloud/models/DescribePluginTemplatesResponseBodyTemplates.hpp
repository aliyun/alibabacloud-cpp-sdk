// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLUGINTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePluginTemplatesResponseBodyTemplatesTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePluginTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePluginTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePluginTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribePluginTemplatesResponseBodyTemplates() = default ;
    DescribePluginTemplatesResponseBodyTemplates(const DescribePluginTemplatesResponseBodyTemplates &) = default ;
    DescribePluginTemplatesResponseBodyTemplates(DescribePluginTemplatesResponseBodyTemplates &&) = default ;
    DescribePluginTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePluginTemplatesResponseBodyTemplates() = default ;
    DescribePluginTemplatesResponseBodyTemplates& operator=(const DescribePluginTemplatesResponseBodyTemplates &) = default ;
    DescribePluginTemplatesResponseBodyTemplates& operator=(DescribePluginTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate>) };
    inline vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate>) };
    inline DescribePluginTemplatesResponseBodyTemplates& setTemplate(const vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribePluginTemplatesResponseBodyTemplates& setTemplate(vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::DescribePluginTemplatesResponseBodyTemplatesTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
