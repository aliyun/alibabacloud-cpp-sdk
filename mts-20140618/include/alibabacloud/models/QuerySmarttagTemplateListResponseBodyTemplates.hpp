// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMARTTAGTEMPLATELISTRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySmarttagTemplateListResponseBodyTemplatesTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySmarttagTemplateListResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmarttagTemplateListResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmarttagTemplateListResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    QuerySmarttagTemplateListResponseBodyTemplates() = default ;
    QuerySmarttagTemplateListResponseBodyTemplates(const QuerySmarttagTemplateListResponseBodyTemplates &) = default ;
    QuerySmarttagTemplateListResponseBodyTemplates(QuerySmarttagTemplateListResponseBodyTemplates &&) = default ;
    QuerySmarttagTemplateListResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmarttagTemplateListResponseBodyTemplates() = default ;
    QuerySmarttagTemplateListResponseBodyTemplates& operator=(const QuerySmarttagTemplateListResponseBodyTemplates &) = default ;
    QuerySmarttagTemplateListResponseBodyTemplates& operator=(QuerySmarttagTemplateListResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate>) };
    inline vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate>) };
    inline QuerySmarttagTemplateListResponseBodyTemplates& setTemplate(const vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline QuerySmarttagTemplateListResponseBodyTemplates& setTemplate(vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::QuerySmarttagTemplateListResponseBodyTemplatesTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
