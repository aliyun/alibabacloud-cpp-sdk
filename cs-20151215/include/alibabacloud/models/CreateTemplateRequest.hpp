// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(template_type, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(template_type, templateType_);
    };
    CreateTemplateRequest() = default ;
    CreateTemplateRequest(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest(CreateTemplateRequest &&) = default ;
    CreateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateRequest() = default ;
    CreateTemplateRequest& operator=(const CreateTemplateRequest &) = default ;
    CreateTemplateRequest& operator=(CreateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->name_ == nullptr && return this->tags_ == nullptr && return this->template_ == nullptr && return this->templateType_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateTemplateRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreateTemplateRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the orchestration template.
    // 
    // The name must be 1 to 63 characters in length, and can contain digits, letters, and hyphens (-). It cannot start with a hyphen (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The label of the template.
    std::shared_ptr<string> tags_ = nullptr;
    // The template content in the YAML format.
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
    // The template type.
    // 
    // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
    // *   If this parameter is not specified or the value is set to another value, the template is not displayed on the Orchestration Template page in the console.
    // 
    // We recommend that you set the parameter to `kubernetes`.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
