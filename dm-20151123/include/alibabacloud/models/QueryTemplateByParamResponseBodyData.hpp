// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATEBYPARAMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryTemplateByParamResponseBodyDataTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class QueryTemplateByParamResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateByParamResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(template, template_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateByParamResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(template, template_);
    };
    QueryTemplateByParamResponseBodyData() = default ;
    QueryTemplateByParamResponseBodyData(const QueryTemplateByParamResponseBodyData &) = default ;
    QueryTemplateByParamResponseBodyData(QueryTemplateByParamResponseBodyData &&) = default ;
    QueryTemplateByParamResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateByParamResponseBodyData() = default ;
    QueryTemplateByParamResponseBodyData& operator=(const QueryTemplateByParamResponseBodyData &) = default ;
    QueryTemplateByParamResponseBodyData& operator=(QueryTemplateByParamResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const vector<Models::QueryTemplateByParamResponseBodyDataTemplate> & _template() const { DARABONBA_PTR_GET_CONST(template_, vector<Models::QueryTemplateByParamResponseBodyDataTemplate>) };
    inline vector<Models::QueryTemplateByParamResponseBodyDataTemplate> _template() { DARABONBA_PTR_GET(template_, vector<Models::QueryTemplateByParamResponseBodyDataTemplate>) };
    inline QueryTemplateByParamResponseBodyData& setTemplate(const vector<Models::QueryTemplateByParamResponseBodyDataTemplate> & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline QueryTemplateByParamResponseBodyData& setTemplate(vector<Models::QueryTemplateByParamResponseBodyDataTemplate> && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    std::shared_ptr<vector<Models::QueryTemplateByParamResponseBodyDataTemplate>> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
