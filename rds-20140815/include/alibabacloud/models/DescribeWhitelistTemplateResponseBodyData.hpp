// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTTEMPLATERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWhitelistTemplateResponseBodyDataTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeWhitelistTemplateResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhitelistTemplateResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DescribeWhitelistTemplateResponseBodyData() = default ;
    DescribeWhitelistTemplateResponseBodyData(const DescribeWhitelistTemplateResponseBodyData &) = default ;
    DescribeWhitelistTemplateResponseBodyData(DescribeWhitelistTemplateResponseBodyData &&) = default ;
    DescribeWhitelistTemplateResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhitelistTemplateResponseBodyData() = default ;
    DescribeWhitelistTemplateResponseBodyData& operator=(const DescribeWhitelistTemplateResponseBodyData &) = default ;
    DescribeWhitelistTemplateResponseBodyData& operator=(DescribeWhitelistTemplateResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const Models::DescribeWhitelistTemplateResponseBodyDataTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, Models::DescribeWhitelistTemplateResponseBodyDataTemplate) };
    inline Models::DescribeWhitelistTemplateResponseBodyDataTemplate _template() { DARABONBA_PTR_GET(template_, Models::DescribeWhitelistTemplateResponseBodyDataTemplate) };
    inline DescribeWhitelistTemplateResponseBodyData& setTemplate(const Models::DescribeWhitelistTemplateResponseBodyDataTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DescribeWhitelistTemplateResponseBodyData& setTemplate(Models::DescribeWhitelistTemplateResponseBodyDataTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // The information about the IP whitelist template.
    std::shared_ptr<Models::DescribeWhitelistTemplateResponseBodyDataTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
