// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEADVANCEDQUERYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEADVANCEDQUERYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class UpdateAdvancedQueryTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAdvancedQueryTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateSql, templateSql_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAdvancedQueryTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SimpleQuery, simpleQuery_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateSql, templateSql_);
    };
    UpdateAdvancedQueryTemplateRequest() = default ;
    UpdateAdvancedQueryTemplateRequest(const UpdateAdvancedQueryTemplateRequest &) = default ;
    UpdateAdvancedQueryTemplateRequest(UpdateAdvancedQueryTemplateRequest &&) = default ;
    UpdateAdvancedQueryTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAdvancedQueryTemplateRequest() = default ;
    UpdateAdvancedQueryTemplateRequest& operator=(const UpdateAdvancedQueryTemplateRequest &) = default ;
    UpdateAdvancedQueryTemplateRequest& operator=(UpdateAdvancedQueryTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->simpleQuery_ != nullptr
        && this->templateId_ != nullptr && this->templateName_ != nullptr && this->templateSql_ != nullptr; };
    // simpleQuery Field Functions 
    bool hasSimpleQuery() const { return this->simpleQuery_ != nullptr;};
    void deleteSimpleQuery() { this->simpleQuery_ = nullptr;};
    inline bool simpleQuery() const { DARABONBA_PTR_GET_DEFAULT(simpleQuery_, false) };
    inline UpdateAdvancedQueryTemplateRequest& setSimpleQuery(bool simpleQuery) { DARABONBA_PTR_SET_VALUE(simpleQuery_, simpleQuery) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateAdvancedQueryTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateAdvancedQueryTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateSql Field Functions 
    bool hasTemplateSql() const { return this->templateSql_ != nullptr;};
    void deleteTemplateSql() { this->templateSql_ = nullptr;};
    inline string templateSql() const { DARABONBA_PTR_GET_DEFAULT(templateSql_, "") };
    inline UpdateAdvancedQueryTemplateRequest& setTemplateSql(string templateSql) { DARABONBA_PTR_SET_VALUE(templateSql_, templateSql) };


  protected:
    // This parameter is required.
    std::shared_ptr<bool> simpleQuery_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
    std::shared_ptr<string> templateSql_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
