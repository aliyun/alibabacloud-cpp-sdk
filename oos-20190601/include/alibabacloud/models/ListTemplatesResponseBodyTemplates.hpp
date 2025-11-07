// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HasTrigger, hasTrigger_);
      DARABONBA_PTR_TO_JSON(Hash, hash_);
      DARABONBA_PTR_TO_JSON(IsFavorite, isFavorite_);
      DARABONBA_PTR_TO_JSON(Popularity, popularity_);
      DARABONBA_PTR_TO_JSON(Publisher, publisher_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(TotalExecutionCount, totalExecutionCount_);
      DARABONBA_PTR_TO_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_TO_JSON(UpdatedDate, updatedDate_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(CreatedDate, createdDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HasTrigger, hasTrigger_);
      DARABONBA_PTR_FROM_JSON(Hash, hash_);
      DARABONBA_PTR_FROM_JSON(IsFavorite, isFavorite_);
      DARABONBA_PTR_FROM_JSON(Popularity, popularity_);
      DARABONBA_PTR_FROM_JSON(Publisher, publisher_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateFormat, templateFormat_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(TotalExecutionCount, totalExecutionCount_);
      DARABONBA_PTR_FROM_JSON(UpdatedBy, updatedBy_);
      DARABONBA_PTR_FROM_JSON(UpdatedDate, updatedDate_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    ListTemplatesResponseBodyTemplates() = default ;
    ListTemplatesResponseBodyTemplates(const ListTemplatesResponseBodyTemplates &) = default ;
    ListTemplatesResponseBodyTemplates(ListTemplatesResponseBodyTemplates &&) = default ;
    ListTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBodyTemplates() = default ;
    ListTemplatesResponseBodyTemplates& operator=(const ListTemplatesResponseBodyTemplates &) = default ;
    ListTemplatesResponseBodyTemplates& operator=(ListTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->constraints_ == nullptr && return this->createdBy_ == nullptr && return this->createdDate_ == nullptr && return this->description_ == nullptr && return this->hasTrigger_ == nullptr
        && return this->hash_ == nullptr && return this->isFavorite_ == nullptr && return this->popularity_ == nullptr && return this->publisher_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->shareType_ == nullptr && return this->tags_ == nullptr && return this->templateFormat_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr
        && return this->templateType_ == nullptr && return this->templateVersion_ == nullptr && return this->totalExecutionCount_ == nullptr && return this->updatedBy_ == nullptr && return this->updatedDate_ == nullptr
        && return this->versionName_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListTemplatesResponseBodyTemplates& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline string constraints() const { DARABONBA_PTR_GET_DEFAULT(constraints_, "") };
    inline ListTemplatesResponseBodyTemplates& setConstraints(string constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline ListTemplatesResponseBodyTemplates& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // createdDate Field Functions 
    bool hasCreatedDate() const { return this->createdDate_ != nullptr;};
    void deleteCreatedDate() { this->createdDate_ = nullptr;};
    inline string createdDate() const { DARABONBA_PTR_GET_DEFAULT(createdDate_, "") };
    inline ListTemplatesResponseBodyTemplates& setCreatedDate(string createdDate) { DARABONBA_PTR_SET_VALUE(createdDate_, createdDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTemplatesResponseBodyTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hasTrigger Field Functions 
    bool hasHasTrigger() const { return this->hasTrigger_ != nullptr;};
    void deleteHasTrigger() { this->hasTrigger_ = nullptr;};
    inline bool hasTrigger() const { DARABONBA_PTR_GET_DEFAULT(hasTrigger_, false) };
    inline ListTemplatesResponseBodyTemplates& setHasTrigger(bool hasTrigger) { DARABONBA_PTR_SET_VALUE(hasTrigger_, hasTrigger) };


    // hash Field Functions 
    bool hasHash() const { return this->hash_ != nullptr;};
    void deleteHash() { this->hash_ = nullptr;};
    inline string hash() const { DARABONBA_PTR_GET_DEFAULT(hash_, "") };
    inline ListTemplatesResponseBodyTemplates& setHash(string hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };


    // isFavorite Field Functions 
    bool hasIsFavorite() const { return this->isFavorite_ != nullptr;};
    void deleteIsFavorite() { this->isFavorite_ = nullptr;};
    inline bool isFavorite() const { DARABONBA_PTR_GET_DEFAULT(isFavorite_, false) };
    inline ListTemplatesResponseBodyTemplates& setIsFavorite(bool isFavorite) { DARABONBA_PTR_SET_VALUE(isFavorite_, isFavorite) };


    // popularity Field Functions 
    bool hasPopularity() const { return this->popularity_ != nullptr;};
    void deletePopularity() { this->popularity_ = nullptr;};
    inline int32_t popularity() const { DARABONBA_PTR_GET_DEFAULT(popularity_, 0) };
    inline ListTemplatesResponseBodyTemplates& setPopularity(int32_t popularity) { DARABONBA_PTR_SET_VALUE(popularity_, popularity) };


    // publisher Field Functions 
    bool hasPublisher() const { return this->publisher_ != nullptr;};
    void deletePublisher() { this->publisher_ = nullptr;};
    inline string publisher() const { DARABONBA_PTR_GET_DEFAULT(publisher_, "") };
    inline ListTemplatesResponseBodyTemplates& setPublisher(string publisher) { DARABONBA_PTR_SET_VALUE(publisher_, publisher) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTemplatesResponseBodyTemplates& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListTemplatesResponseBodyTemplates& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline ListTemplatesResponseBodyTemplates& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListTemplatesResponseBodyTemplates& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // templateFormat Field Functions 
    bool hasTemplateFormat() const { return this->templateFormat_ != nullptr;};
    void deleteTemplateFormat() { this->templateFormat_ = nullptr;};
    inline string templateFormat() const { DARABONBA_PTR_GET_DEFAULT(templateFormat_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateFormat(string templateFormat) { DARABONBA_PTR_SET_VALUE(templateFormat_, templateFormat) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // totalExecutionCount Field Functions 
    bool hasTotalExecutionCount() const { return this->totalExecutionCount_ != nullptr;};
    void deleteTotalExecutionCount() { this->totalExecutionCount_ = nullptr;};
    inline int32_t totalExecutionCount() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionCount_, 0) };
    inline ListTemplatesResponseBodyTemplates& setTotalExecutionCount(int32_t totalExecutionCount) { DARABONBA_PTR_SET_VALUE(totalExecutionCount_, totalExecutionCount) };


    // updatedBy Field Functions 
    bool hasUpdatedBy() const { return this->updatedBy_ != nullptr;};
    void deleteUpdatedBy() { this->updatedBy_ = nullptr;};
    inline string updatedBy() const { DARABONBA_PTR_GET_DEFAULT(updatedBy_, "") };
    inline ListTemplatesResponseBodyTemplates& setUpdatedBy(string updatedBy) { DARABONBA_PTR_SET_VALUE(updatedBy_, updatedBy) };


    // updatedDate Field Functions 
    bool hasUpdatedDate() const { return this->updatedDate_ != nullptr;};
    void deleteUpdatedDate() { this->updatedDate_ = nullptr;};
    inline string updatedDate() const { DARABONBA_PTR_GET_DEFAULT(updatedDate_, "") };
    inline ListTemplatesResponseBodyTemplates& setUpdatedDate(string updatedDate) { DARABONBA_PTR_SET_VALUE(updatedDate_, updatedDate) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline ListTemplatesResponseBodyTemplates& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // The template type.
    std::shared_ptr<string> category_ = nullptr;
    // The template constraints.
    std::shared_ptr<string> constraints_ = nullptr;
    // The user who created the template.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The creation time of the template.
    std::shared_ptr<string> createdDate_ = nullptr;
    // The template description.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the template was configured with a trigger.
    std::shared_ptr<bool> hasTrigger_ = nullptr;
    // The SHA256 value of the template content.
    std::shared_ptr<string> hash_ = nullptr;
    // Indicates whether the template is added to favorites.
    std::shared_ptr<bool> isFavorite_ = nullptr;
    // The popularity of the public template. Valid values: **1-10**. A greater value indicates higher popularity. If **ShareType** is set to **Private**, the value of this parameter is `-1`.
    // 
    // >  This parameter is valid only if **ShareType** is set to **Public**.
    std::shared_ptr<int32_t> popularity_ = nullptr;
    // The user who published the template.
    std::shared_ptr<string> publisher_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The share type of the template. The share type of a template created by a user is **Private**. Valid values:
    // 
    // *   **Public**
    // *   **Private**
    std::shared_ptr<string> shareType_ = nullptr;
    // The tag keys and values. The number of key-value pairs ranges from 1 to 20.
    Darabonba::Json tags_ = nullptr;
    // The template format. The system automatically determines whether the format of the template is JSON or YAML.
    std::shared_ptr<string> templateFormat_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // The template type.
    std::shared_ptr<string> templateType_ = nullptr;
    // The template version. The version contains the letter v and a number. The number starts from 1.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The number of times for which the private template is executed. If **ShareType** is set to **Public**, the value of this parameter is `-1`.
    // 
    // >  This parameter is valid only if **ShareType** is set to **Private**.
    std::shared_ptr<int32_t> totalExecutionCount_ = nullptr;
    // The user who last updated the template.
    std::shared_ptr<string> updatedBy_ = nullptr;
    // The time when the template was last updated.
    std::shared_ptr<string> updatedDate_ = nullptr;
    // The version name.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
