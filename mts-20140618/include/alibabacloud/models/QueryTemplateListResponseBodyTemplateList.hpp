// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTemplateListResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateListResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateListResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    QueryTemplateListResponseBodyTemplateList() = default ;
    QueryTemplateListResponseBodyTemplateList(const QueryTemplateListResponseBodyTemplateList &) = default ;
    QueryTemplateListResponseBodyTemplateList(QueryTemplateListResponseBodyTemplateList &&) = default ;
    QueryTemplateListResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateListResponseBodyTemplateList() = default ;
    QueryTemplateListResponseBodyTemplateList& operator=(const QueryTemplateListResponseBodyTemplateList &) = default ;
    QueryTemplateListResponseBodyTemplateList& operator=(QueryTemplateListResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::QueryTemplateListResponseBodyTemplateListTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::QueryTemplateListResponseBodyTemplateListTemplate>) };
    inline vector<Models::QueryTemplateListResponseBodyTemplateListTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::QueryTemplateListResponseBodyTemplateListTemplate>) };
    inline QueryTemplateListResponseBodyTemplateList& setTemplate(const vector<Models::QueryTemplateListResponseBodyTemplateListTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline QueryTemplateListResponseBodyTemplateList& setTemplate(vector<Models::QueryTemplateListResponseBodyTemplateListTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::QueryTemplateListResponseBodyTemplateListTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
