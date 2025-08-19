// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(template_type, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(template_type, templateType_);
    };
    UpdateTemplateRequest() = default ;
    UpdateTemplateRequest(const UpdateTemplateRequest &) = default ;
    UpdateTemplateRequest(UpdateTemplateRequest &&) = default ;
    UpdateTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateRequest() = default ;
    UpdateTemplateRequest& operator=(const UpdateTemplateRequest &) = default ;
    UpdateTemplateRequest& operator=(UpdateTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->name_ != nullptr && this->tags_ != nullptr && this->template_ != nullptr && this->templateType_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTemplateRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateTemplateRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline UpdateTemplateRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline UpdateTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The label of the template.
    std::shared_ptr<string> tags_ = nullptr;
    // The YAML content of the template.
    std::shared_ptr<string> template_ = nullptr;
    // The type of template. This parameter can be set to a custom value.
    // 
    // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
    // *   If the parameter is set to `compose`, the template is displayed on the Container Service - Swarm page in the console. Container Service for Swarm is deprecated.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
