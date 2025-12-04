// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADVANCEDQUERYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADVANCEDQUERYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class CreateAdvancedQueryTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAdvancedQueryTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateSql, templateSql_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAdvancedQueryTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateSql, templateSql_);
    };
    CreateAdvancedQueryTemplateRequest() = default ;
    CreateAdvancedQueryTemplateRequest(const CreateAdvancedQueryTemplateRequest &) = default ;
    CreateAdvancedQueryTemplateRequest(CreateAdvancedQueryTemplateRequest &&) = default ;
    CreateAdvancedQueryTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAdvancedQueryTemplateRequest() = default ;
    CreateAdvancedQueryTemplateRequest& operator=(const CreateAdvancedQueryTemplateRequest &) = default ;
    CreateAdvancedQueryTemplateRequest& operator=(CreateAdvancedQueryTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->simpleQuery_ == nullptr
        && return this->templateName_ == nullptr && return this->templateSql_ == nullptr; };
    // simpleQuery Field Functions 
    bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
    void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
    inline bool simpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
    inline CreateAdvancedQueryTemplateRequest& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateAdvancedQueryTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateSql Field Functions 
    bool hasTemplateSql() const { return this->templateSql_ != nullptr;};
    void deleteTemplateSql() { this->templateSql_ = nullptr;};
    inline string templateSql() const { DARABONBA_PTR_GET_DEFAULT(templateSql_, "") };
    inline CreateAdvancedQueryTemplateRequest& setTemplateSql(string templateSql) { DARABONBA_PTR_SET_VALUE(templateSql_, templateSql) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> simpleQuery_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateSql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
