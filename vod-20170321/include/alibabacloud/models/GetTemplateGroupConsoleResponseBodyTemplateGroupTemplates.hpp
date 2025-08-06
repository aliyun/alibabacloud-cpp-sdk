// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->template_ != nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate>) };
    inline vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate>) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates& setTemplate(const vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplates& setTemplate(vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
