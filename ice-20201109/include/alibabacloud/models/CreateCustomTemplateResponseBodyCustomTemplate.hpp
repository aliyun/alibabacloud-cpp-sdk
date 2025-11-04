// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATERESPONSEBODYCUSTOMTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATERESPONSEBODYCUSTOMTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateCustomTemplateResponseBodyCustomTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomTemplateResponseBodyCustomTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Subtype, subtype_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomTemplateResponseBodyCustomTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    CreateCustomTemplateResponseBodyCustomTemplate() = default ;
    CreateCustomTemplateResponseBodyCustomTemplate(const CreateCustomTemplateResponseBodyCustomTemplate &) = default ;
    CreateCustomTemplateResponseBodyCustomTemplate(CreateCustomTemplateResponseBodyCustomTemplate &&) = default ;
    CreateCustomTemplateResponseBodyCustomTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomTemplateResponseBodyCustomTemplate() = default ;
    CreateCustomTemplateResponseBodyCustomTemplate& operator=(const CreateCustomTemplateResponseBodyCustomTemplate &) = default ;
    CreateCustomTemplateResponseBodyCustomTemplate& operator=(CreateCustomTemplateResponseBodyCustomTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->isDefault_ == nullptr && return this->modifiedTime_ == nullptr && return this->status_ == nullptr && return this->subtype_ == nullptr && return this->templateConfig_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr && return this->type_ == nullptr && return this->typeName_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline string subtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline CreateCustomTemplateResponseBodyCustomTemplate& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    // The time when the template was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the template is the default template.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The time when the template was last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The template state.
    std::shared_ptr<string> status_ = nullptr;
    // The subtype name of the template.
    std::shared_ptr<string> subtype_ = nullptr;
    // The template configurations.
    std::shared_ptr<string> templateConfig_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The type ID of the template.
    std::shared_ptr<int32_t> type_ = nullptr;
    // The type name of the template.
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
