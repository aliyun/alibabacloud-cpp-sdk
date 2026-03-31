// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateTemplateResponseBody() = default ;
    CreateTemplateResponseBody(const CreateTemplateResponseBody &) = default ;
    CreateTemplateResponseBody(CreateTemplateResponseBody &&) = default ;
    CreateTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateResponseBody() = default ;
    CreateTemplateResponseBody& operator=(const CreateTemplateResponseBody &) = default ;
    CreateTemplateResponseBody& operator=(CreateTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Template : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Template& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HasTrigger, hasTrigger_);
        DARABONBA_PTR_TO_JSON(Hash, hash_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareType, shareType_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      };
      friend void from_json(const Darabonba::Json& j, Template& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
        DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HasTrigger, hasTrigger_);
        DARABONBA_PTR_FROM_JSON(Hash, hash_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
        DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      };
      Template() = default ;
      Template(const Template &) = default ;
      Template(Template &&) = default ;
      Template(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Template() = default ;
      Template& operator=(const Template &) = default ;
      Template& operator=(Template &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdBy_ == nullptr
        && this->createdDate_ == nullptr && this->description_ == nullptr && this->hasTrigger_ == nullptr && this->hash_ == nullptr && this->resourceGroupId_ == nullptr
        && this->shareType_ == nullptr && this->tags_ == nullptr && this->templateFormat_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr
        && this->templateVersion_ == nullptr && this->updatedBy_ == nullptr && this->updatedDate_ == nullptr; };
      // createdBy Field Functions 
      bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
      void deleteCreatedBy() { this->createdBy_ = nullptr;};
      inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
      inline Template& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


      // createdDate Field Functions 
      bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
      void deleteCreatedDate() { this->createdDate_ = nullptr;};
      inline string getCreatedDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
      inline Template& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Template& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hasTrigger Field Functions 
      bool hasHasTrigger() const { return this->hasTrigger_ != nullptr;};
      void deleteHasTrigger() { this->hasTrigger_ = nullptr;};
      inline bool getHasTrigger() const { DARABONBA_PTR_GET_DEFAULT(hasTrigger_, false) };
      inline Template& setHasTrigger(bool hasTrigger) { DARABONBA_PTR_SET_VALUE(hasTrigger_, hasTrigger) };


      // hash Field Functions 
      bool hasHash() const { return this->hash_ != nullptr;};
      void deleteHash() { this->hash_ = nullptr;};
      inline string getHash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
      inline Template& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Template& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareType Field Functions 
      bool hasShareType() const { return this->shareType_ != nullptr;};
      void deleteShareType() { this->shareType_ = nullptr;};
      inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
      inline Template& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline Template& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline Template& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // templateFormat Field Functions 
      bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
      void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
      inline string getTemplateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
      inline Template& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Template& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Template& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Template& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // updatedBy Field Functions 
      bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
      void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
      inline string getUpdatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
      inline Template& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


      // updatedDate Field Functions 
      bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
      void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
      inline string getUpdatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
      inline Template& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    protected:
      // The creator of the template.
      shared_ptr<string> createdBy_ {};
      // The time when the template was created.
      shared_ptr<string> createdDate_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // Indicates whether the template was configured with a trigger.
      shared_ptr<bool> hasTrigger_ {};
      // The SHA-256 value of the template content.
      shared_ptr<string> hash_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The share type of the template. The share type of the template that you create is Private.
      shared_ptr<string> shareType_ {};
      // The tags of the resources.
      Darabonba::Json tags_ {};
      // The format of the template. The system automatically determines whether the format is JSON or YAML.
      shared_ptr<string> templateFormat_ {};
      // The ID of the template.
      shared_ptr<string> templateId_ {};
      // The name of the template.
      shared_ptr<string> templateName_ {};
      // The version of the template. The name of the version consists of the letter v and a number. The number starts from 1.
      shared_ptr<string> templateVersion_ {};
      // The Alibaba Cloud account that last modified the information about the template.
      shared_ptr<string> updatedBy_ {};
      // The time when the template was last updated.
      shared_ptr<string> updatedDate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->template_ == nullptr && this->templateType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const CreateTemplateResponseBody::Template & getTemplate() const { DARABONBA_PTR_GET_CONST(template_, CreateTemplateResponseBody::Template) };
    inline CreateTemplateResponseBody::Template getTemplate() { DARABONBA_PTR_GET(template_, CreateTemplateResponseBody::Template) };
    inline CreateTemplateResponseBody& setTemplate(const CreateTemplateResponseBody::Template & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline CreateTemplateResponseBody& setTemplate(CreateTemplateResponseBody::Template && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateTemplateResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The metadata of the template.
    shared_ptr<CreateTemplateResponseBody::Template> template_ {};
    // The type of the template.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
