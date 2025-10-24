// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTemplateResponseBodyTemplateListTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchTemplateResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTemplateResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTemplateResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    SearchTemplateResponseBodyTemplateList() = default ;
    SearchTemplateResponseBodyTemplateList(const SearchTemplateResponseBodyTemplateList &) = default ;
    SearchTemplateResponseBodyTemplateList(SearchTemplateResponseBodyTemplateList &&) = default ;
    SearchTemplateResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTemplateResponseBodyTemplateList() = default ;
    SearchTemplateResponseBodyTemplateList& operator=(const SearchTemplateResponseBodyTemplateList &) = default ;
    SearchTemplateResponseBodyTemplateList& operator=(SearchTemplateResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::SearchTemplateResponseBodyTemplateListTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::SearchTemplateResponseBodyTemplateListTemplate>) };
    inline vector<Models::SearchTemplateResponseBodyTemplateListTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::SearchTemplateResponseBodyTemplateListTemplate>) };
    inline SearchTemplateResponseBodyTemplateList& setTemplate(const vector<Models::SearchTemplateResponseBodyTemplateListTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline SearchTemplateResponseBodyTemplateList& setTemplate(vector<Models::SearchTemplateResponseBodyTemplateListTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::SearchTemplateResponseBodyTemplateListTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
