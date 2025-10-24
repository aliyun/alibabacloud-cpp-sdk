// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList &&) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList& operator=(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList& operator=(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate>) };
    inline vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate>) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList& setTemplate(const vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateList& setTemplate(vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
