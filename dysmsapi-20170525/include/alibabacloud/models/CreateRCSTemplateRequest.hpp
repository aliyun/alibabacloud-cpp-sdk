// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERCSTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERCSTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateRCSTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRCSTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedSignNames, relatedSignNames_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_TO_JSON(TemplateMenu, templateMenu_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateRule, templateRule_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRCSTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedSignNames, relatedSignNames_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateMenu, templateMenu_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateRule, templateRule_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateRCSTemplateRequest() = default ;
    CreateRCSTemplateRequest(const CreateRCSTemplateRequest &) = default ;
    CreateRCSTemplateRequest(CreateRCSTemplateRequest &&) = default ;
    CreateRCSTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRCSTemplateRequest() = default ;
    CreateRCSTemplateRequest& operator=(const CreateRCSTemplateRequest &) = default ;
    CreateRCSTemplateRequest& operator=(CreateRCSTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->relatedSignNames_ == nullptr
        && this->templateContent_ == nullptr && this->templateFormat_ == nullptr && this->templateMenu_ == nullptr && this->templateName_ == nullptr && this->templateRule_ == nullptr
        && this->templateType_ == nullptr; };
    // relatedSignNames Field Functions 
    bool hasRelatedSignNames() const { return this->relatedSignNames_ != nullptr;};
    void deleteRelatedSignNames() { this->relatedSignNames_ = nullptr;};
    inline string getRelatedSignNames() const { DARABONBA_PTR_GET_DEFAULT(relatedSignNames_, "") };
    inline CreateRCSTemplateRequest& setRelatedSignNames(string relatedSignNames) { DARABONBA_PTR_SET_VALUE(relatedSignNames_, relatedSignNames) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline CreateRCSTemplateRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateFormat Field Functions 
    bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
    void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
    inline string getTemplateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
    inline CreateRCSTemplateRequest& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


    // templateMenu Field Functions 
    bool hasTemplateMenu() const { return this->templateMenu_ != nullptr;};
    void deleteTemplateMenu() { this->templateMenu_ = nullptr;};
    inline string getTemplateMenu() const { DARABONBA_PTR_GET_DEFAULT(templateMenu_, "") };
    inline CreateRCSTemplateRequest& setTemplateMenu(string templateMenu) { DARABONBA_PTR_SET_VALUE(templateMenu_, templateMenu) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateRCSTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateRule Field Functions 
    bool hasTemplateRule() const { return this->templateRule_ != nullptr;};
    void deleteTemplateRule() { this->templateRule_ = nullptr;};
    inline string getTemplateRule() const { DARABONBA_PTR_GET_DEFAULT(templateRule_, "") };
    inline CreateRCSTemplateRequest& setTemplateRule(string templateRule) { DARABONBA_PTR_SET_VALUE(templateRule_, templateRule) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline int64_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0L) };
    inline CreateRCSTemplateRequest& setTemplateType(int64_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // This parameter is required.
    shared_ptr<string> relatedSignNames_ {};
    // This parameter is required.
    shared_ptr<string> templateContent_ {};
    // This parameter is required.
    shared_ptr<string> templateFormat_ {};
    shared_ptr<string> templateMenu_ {};
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    shared_ptr<string> templateRule_ {};
    // This parameter is required.
    shared_ptr<int64_t> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
