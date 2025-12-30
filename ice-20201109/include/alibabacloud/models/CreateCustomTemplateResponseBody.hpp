// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateCustomTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCustomTemplateResponseBody() = default ;
    CreateCustomTemplateResponseBody(const CreateCustomTemplateResponseBody &) = default ;
    CreateCustomTemplateResponseBody(CreateCustomTemplateResponseBody &&) = default ;
    CreateCustomTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomTemplateResponseBody() = default ;
    CreateCustomTemplateResponseBody& operator=(const CreateCustomTemplateResponseBody &) = default ;
    CreateCustomTemplateResponseBody& operator=(CreateCustomTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CustomTemplate : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomTemplate& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CustomTemplate& obj) { 
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
      CustomTemplate() = default ;
      CustomTemplate(const CustomTemplate &) = default ;
      CustomTemplate(CustomTemplate &&) = default ;
      CustomTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomTemplate() = default ;
      CustomTemplate& operator=(const CustomTemplate &) = default ;
      CustomTemplate& operator=(CustomTemplate &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->isDefault_ == nullptr && this->modifiedTime_ == nullptr && this->status_ == nullptr && this->subtype_ == nullptr && this->templateConfig_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->type_ == nullptr && this->typeName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline CustomTemplate& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // isDefault Field Functions 
      bool hasIsDefault() const { return this->isDefault_ != nullptr;};
      void deleteIsDefault() { this->isDefault_ = nullptr;};
      inline bool getIsDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
      inline CustomTemplate& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline CustomTemplate& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CustomTemplate& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subtype Field Functions 
      bool hasSubtype() const { return this->subtype_ != nullptr;};
      void deleteSubtype() { this->subtype_ = nullptr;};
      inline string getSubtype() const { DARABONBA_PTR_GET_DEFAULT(subtype_, "") };
      inline CustomTemplate& setSubtype(string subtype) { DARABONBA_PTR_SET_VALUE(subtype_, subtype) };


      // templateConfig Field Functions 
      bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
      void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
      inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
      inline CustomTemplate& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline CustomTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline CustomTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline CustomTemplate& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline CustomTemplate& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      // Indicates whether the template is the default template.
      shared_ptr<bool> isDefault_ {};
      // The time when the template was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The template state.
      shared_ptr<string> status_ {};
      // The subtype name of the template.
      shared_ptr<string> subtype_ {};
      // The template configurations.
      shared_ptr<string> templateConfig_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The template name.
      shared_ptr<string> templateName_ {};
      // The type ID of the template.
      shared_ptr<int32_t> type_ {};
      // The type name of the template.
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->customTemplate_ == nullptr
        && this->requestId_ == nullptr; };
    // customTemplate Field Functions 
    bool hasCustomTemplate() const { return this->customTemplate_ != nullptr;};
    void deleteCustomTemplate() { this->customTemplate_ = nullptr;};
    inline const CreateCustomTemplateResponseBody::CustomTemplate & getCustomTemplate() const { DARABONBA_PTR_GET_CONST(customTemplate_, CreateCustomTemplateResponseBody::CustomTemplate) };
    inline CreateCustomTemplateResponseBody::CustomTemplate getCustomTemplate() { DARABONBA_PTR_GET(customTemplate_, CreateCustomTemplateResponseBody::CustomTemplate) };
    inline CreateCustomTemplateResponseBody& setCustomTemplate(const CreateCustomTemplateResponseBody::CustomTemplate & customTemplate) { DARABONBA_PTR_SET_VALUE(customTemplate_, customTemplate) };
    inline CreateCustomTemplateResponseBody& setCustomTemplate(CreateCustomTemplateResponseBody::CustomTemplate && customTemplate) { DARABONBA_PTR_SET_RVALUE(customTemplate_, customTemplate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCustomTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The template information.
    shared_ptr<CreateCustomTemplateResponseBody::CustomTemplate> customTemplate_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
