// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESEARCHTEMPLATESRESPONSEBODYTEMPLATELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESEARCHTEMPLATESRESPONSEBODYTEMPLATELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class DescribeSearchTemplatesResponseBodyTemplateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSearchTemplatesResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_TO_JSON(Charts, charts_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSearchTemplatesResponseBodyTemplateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Charts, charts_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeSearchTemplatesResponseBodyTemplateList() = default ;
    DescribeSearchTemplatesResponseBodyTemplateList(const DescribeSearchTemplatesResponseBodyTemplateList &) = default ;
    DescribeSearchTemplatesResponseBodyTemplateList(DescribeSearchTemplatesResponseBodyTemplateList &&) = default ;
    DescribeSearchTemplatesResponseBodyTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSearchTemplatesResponseBodyTemplateList() = default ;
    DescribeSearchTemplatesResponseBodyTemplateList& operator=(const DescribeSearchTemplatesResponseBodyTemplateList &) = default ;
    DescribeSearchTemplatesResponseBodyTemplateList& operator=(DescribeSearchTemplatesResponseBodyTemplateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->charts_ == nullptr
        && return this->description_ == nullptr && return this->params_ == nullptr && return this->sceneId_ == nullptr && return this->sql_ == nullptr && return this->templateId_ == nullptr
        && return this->templateName_ == nullptr && return this->token_ == nullptr && return this->type_ == nullptr; };
    // charts Field Functions 
    bool hasCharts() const { return this->charts_ != nullptr;};
    void deleteCharts() { this->charts_ = nullptr;};
    inline string charts() const { DARABONBA_PTR_GET_DEFAULT(charts_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setCharts(string charts) { DARABONBA_PTR_SET_VALUE(charts_, charts) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string params() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeSearchTemplatesResponseBodyTemplateList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> charts_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> params_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sql_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
