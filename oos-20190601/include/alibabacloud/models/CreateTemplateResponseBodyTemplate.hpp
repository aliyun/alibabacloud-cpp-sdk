// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODYTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATERESPONSEBODYTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateTemplateResponseBodyTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateResponseBodyTemplate& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateTemplateResponseBodyTemplate& obj) { 
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
    CreateTemplateResponseBodyTemplate() = default ;
    CreateTemplateResponseBodyTemplate(const CreateTemplateResponseBodyTemplate &) = default ;
    CreateTemplateResponseBodyTemplate(CreateTemplateResponseBodyTemplate &&) = default ;
    CreateTemplateResponseBodyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateResponseBodyTemplate() = default ;
    CreateTemplateResponseBodyTemplate& operator=(const CreateTemplateResponseBodyTemplate &) = default ;
    CreateTemplateResponseBodyTemplate& operator=(CreateTemplateResponseBodyTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdBy_ == nullptr
        && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->hasTrigger_ == nullptr && return this->hash_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->shareType_ == nullptr && return this->tags_ == nullptr && return this->templateFormat_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr
        && return this->templateVersion_ == nullptr && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr; };
    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline CreateTemplateResponseBodyTemplate& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline CreateTemplateResponseBodyTemplate& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTemplateResponseBodyTemplate& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hasTrigger Field Functions 
    bool hasHasTrigger() const { return this->hasTrigger_ != nullptr;};
    void deleteHasTrigger() { this->hasTrigger_ = nullptr;};
    inline bool hasTrigger() const { DARABONBA_PTR_GET_DEFAULT(hasTrigger_, false) };
    inline CreateTemplateResponseBodyTemplate& setHasTrigger(bool hasTrigger) { DARABONBA_PTR_SET_VALUE(hasTrigger_, hasTrigger) };


    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline string hash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
    inline CreateTemplateResponseBodyTemplate& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTemplateResponseBodyTemplate& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline CreateTemplateResponseBodyTemplate& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline CreateTemplateResponseBodyTemplate& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline CreateTemplateResponseBodyTemplate& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // templateFormat Field Functions 
    bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
    void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
    inline string templateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
    inline CreateTemplateResponseBodyTemplate& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateTemplateResponseBodyTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateTemplateResponseBodyTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline CreateTemplateResponseBodyTemplate& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline CreateTemplateResponseBodyTemplate& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline CreateTemplateResponseBodyTemplate& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


  protected:
    // The creator of the template.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the template was configured with a trigger.
    std::shared_ptr<bool> hasTrigger_ = nullptr;
    // The SHA-256 value of the template content.
    std::shared_ptr<string> hash_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the template. The share type of the template that you create is Private.
    std::shared_ptr<string> shareType_ = nullptr;
    // The tags of the resources.
    Darabonba::Json tags_ = nullptr;
    // The format of the template. The system automatically determines whether the format is JSON or YAML.
    std::shared_ptr<string> templateFormat_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The version of the template. The name of the version consists of the letter v and a number. The number starts from 1.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The Alibaba Cloud account that last modified the information about the template.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the template was last updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
