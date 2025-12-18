// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREMEDIATIONTEMPLATESRESPONSEBODYREMEDIATIONTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTREMEDIATIONTEMPLATESRESPONSEBODYREMEDIATIONTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListRemediationTemplatesResponseBodyRemediationTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRemediationTemplatesResponseBodyRemediationTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_TO_JSON(TemplateDefinition, templateDefinition_);
      DARABONBA_PTR_TO_JSON(TemplateDescription, templateDescription_);
      DARABONBA_PTR_TO_JSON(TemplateIdentifier, templateIdentifier_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListRemediationTemplatesResponseBodyRemediationTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(RemediationType, remediationType_);
      DARABONBA_PTR_FROM_JSON(TemplateDefinition, templateDefinition_);
      DARABONBA_PTR_FROM_JSON(TemplateDescription, templateDescription_);
      DARABONBA_PTR_FROM_JSON(TemplateIdentifier, templateIdentifier_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListRemediationTemplatesResponseBodyRemediationTemplates() = default ;
    ListRemediationTemplatesResponseBodyRemediationTemplates(const ListRemediationTemplatesResponseBodyRemediationTemplates &) = default ;
    ListRemediationTemplatesResponseBodyRemediationTemplates(ListRemediationTemplatesResponseBodyRemediationTemplates &&) = default ;
    ListRemediationTemplatesResponseBodyRemediationTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRemediationTemplatesResponseBodyRemediationTemplates() = default ;
    ListRemediationTemplatesResponseBodyRemediationTemplates& operator=(const ListRemediationTemplatesResponseBodyRemediationTemplates &) = default ;
    ListRemediationTemplatesResponseBodyRemediationTemplates& operator=(ListRemediationTemplatesResponseBodyRemediationTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->remediationType_ == nullptr
        && return this->templateDefinition_ == nullptr && return this->templateDescription_ == nullptr && return this->templateIdentifier_ == nullptr && return this->templateName_ == nullptr; };
    // remediationType Field Functions 
    bool hasRemediationType() const { return this->remediationType_ != nullptr;};
    void deleteRemediationType() { this->remediationType_ = nullptr;};
    inline string remediationType() const { DARABONBA_PTR_GET_DEFAULT(remediationType_, "") };
    inline ListRemediationTemplatesResponseBodyRemediationTemplates& setRemediationType(string remediationType) { DARABONBA_PTR_SET_VALUE(remediationType_, remediationType) };


    // templateDefinition Field Functions 
    bool hasTemplateDefinition() const { return this->templateDefinition_ != nullptr;};
    void deleteTemplateDefinition() { this->templateDefinition_ = nullptr;};
    inline string templateDefinition() const { DARABONBA_PTR_GET_DEFAULT(templateDefinition_, "") };
    inline ListRemediationTemplatesResponseBodyRemediationTemplates& setTemplateDefinition(string templateDefinition) { DARABONBA_PTR_SET_VALUE(templateDefinition_, templateDefinition) };


    // templateDescription Field Functions 
    bool hasTemplateDescription() const { return this->templateDescription_ != nullptr;};
    void deleteTemplateDescription() { this->templateDescription_ = nullptr;};
    inline string templateDescription() const { DARABONBA_PTR_GET_DEFAULT(templateDescription_, "") };
    inline ListRemediationTemplatesResponseBodyRemediationTemplates& setTemplateDescription(string templateDescription) { DARABONBA_PTR_SET_VALUE(templateDescription_, templateDescription) };


    // templateIdentifier Field Functions 
    bool hasTemplateIdentifier() const { return this->templateIdentifier_ != nullptr;};
    void deleteTemplateIdentifier() { this->templateIdentifier_ = nullptr;};
    inline string templateIdentifier() const { DARABONBA_PTR_GET_DEFAULT(templateIdentifier_, "") };
    inline ListRemediationTemplatesResponseBodyRemediationTemplates& setTemplateIdentifier(string templateIdentifier) { DARABONBA_PTR_SET_VALUE(templateIdentifier_, templateIdentifier) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListRemediationTemplatesResponseBodyRemediationTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The type of the remediation template. Valid value: OOS, which indicates Operation Orchestration Service.
    std::shared_ptr<string> remediationType_ = nullptr;
    // The definition of the remediation template.
    std::shared_ptr<string> templateDefinition_ = nullptr;
    // The description of the remediation template.
    std::shared_ptr<string> templateDescription_ = nullptr;
    // The ID of the remediation template.
    std::shared_ptr<string> templateIdentifier_ = nullptr;
    // The name of the remediation template.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
