// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYSTEMTEMPLATERESPONSEBODYSYSTEMTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_GETSYSTEMTEMPLATERESPONSEBODYSYSTEMTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetSystemTemplateResponseBodySystemTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSystemTemplateResponseBodySystemTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Subtype, subtype_);
      DARABONBA_PTR_TO_JSON(SubtypeName, subtypeName_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSystemTemplateResponseBodySystemTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Subtype, subtype_);
      DARABONBA_PTR_FROM_JSON(SubtypeName, subtypeName_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    GetSystemTemplateResponseBodySystemTemplate() = default ;
    GetSystemTemplateResponseBodySystemTemplate(const GetSystemTemplateResponseBodySystemTemplate &) = default ;
    GetSystemTemplateResponseBodySystemTemplate(GetSystemTemplateResponseBodySystemTemplate &&) = default ;
    GetSystemTemplateResponseBodySystemTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSystemTemplateResponseBodySystemTemplate() = default ;
    GetSystemTemplateResponseBodySystemTemplate& operator=(const GetSystemTemplateResponseBodySystemTemplate &) = default ;
    GetSystemTemplateResponseBodySystemTemplate& operator=(GetSystemTemplateResponseBodySystemTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->status_ != nullptr
        && this->subtype_ != nullptr && this->subtypeName_ != nullptr && this->templateConfig_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr
        && this->type_ != nullptr && this->typeName_ != nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSystemTemplateResponseBodySystemTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subtype Field Functions 
    bool hasSubtype() const { return this->subtype_ != nullptr;};
    void deleteSubtype() { this->subtype_ = nullptr;};
    inline int32_t subtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, 0) };
    inline GetSystemTemplateResponseBodySystemTemplate& setSubtype(int32_t subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


    // subtypeName Field Functions 
    bool hasSubtypeName() const { return this->subtypeName_ != nullptr;};
    void deleteSubtypeName() { this->subtypeName_ = nullptr;};
    inline string subtypeName() const { DARABONBA_PTR_GET_DEFAULT(subtypeName_, "") };
    inline GetSystemTemplateResponseBodySystemTemplate& setSubtypeName(string subtypeName) { DARABONBA_PTR_SET_VALUE(subtypeName_, subtypeName) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string templateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline GetSystemTemplateResponseBodySystemTemplate& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetSystemTemplateResponseBodySystemTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetSystemTemplateResponseBodySystemTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline GetSystemTemplateResponseBodySystemTemplate& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string _typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline GetSystemTemplateResponseBodySystemTemplate& setTypeName(string _typeName) { DARABONBA_PTR_SET_VALUE(typeName_, _typeName) };


  protected:
    // The template state.
    std::shared_ptr<string> status_ = nullptr;
    // The subtype ID of the template.
    std::shared_ptr<int32_t> subtype_ = nullptr;
    // The subtype name of the template.
    std::shared_ptr<string> subtypeName_ = nullptr;
    // The template parameters.
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
