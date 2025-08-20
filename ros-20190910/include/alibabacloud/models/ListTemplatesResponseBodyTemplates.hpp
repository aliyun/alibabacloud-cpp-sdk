// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTemplatesResponseBodyTemplatesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_ANY_TO_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateARN, templateARN_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_ANY_FROM_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateARN, templateARN_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
    virtual bool empty() const override { this->additionalInfo_ != nullptr
        && this->createTime_ != nullptr && this->description_ != nullptr && this->ownerId_ != nullptr && this->resourceGroupId_ != nullptr && this->shareType_ != nullptr
        && this->tags_ != nullptr && this->templateARN_ != nullptr && this->templateId_ != nullptr && this->templateName_ != nullptr && this->templateUrl_ != nullptr
        && this->templateVersion_ != nullptr && this->updateTime_ != nullptr; };
    // additionalInfo Field Functions 
    bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
    void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
    inline     const Darabonba::Json & additionalInfo() const { DARABONBA_GET(additionalInfo_) };
    Darabonba::Json & additionalInfo() { DARABONBA_GET(additionalInfo_) };
    inline ListTemplatesResponseBodyTemplates& setAdditionalInfo(const Darabonba::Json & additionalInfo) { DARABONBA_SET_VALUE(additionalInfo_, additionalInfo) };
    inline ListTemplatesResponseBodyTemplates& setAdditionalInfo(Darabonba::Json & additionalInfo) { DARABONBA_SET_RVALUE(additionalInfo_, additionalInfo) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListTemplatesResponseBodyTemplates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListTemplatesResponseBodyTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListTemplatesResponseBodyTemplates& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


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
    inline const vector<Models::ListTemplatesResponseBodyTemplatesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTemplatesResponseBodyTemplatesTags>) };
    inline vector<Models::ListTemplatesResponseBodyTemplatesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTemplatesResponseBodyTemplatesTags>) };
    inline ListTemplatesResponseBodyTemplates& setTags(const vector<Models::ListTemplatesResponseBodyTemplatesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTemplatesResponseBodyTemplates& setTags(vector<Models::ListTemplatesResponseBodyTemplatesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateARN Field Functions 
    bool hasTemplateARN() const { return this->templateARN_ != nullptr;};
    void deleteTemplateARN() { this->templateARN_ = nullptr;};
    inline string templateARN() const { DARABONBA_PTR_GET_DEFAULT(templateARN_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateARN(string templateARN) { DARABONBA_PTR_SET_VALUE(templateARN_, templateARN) };


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


    // templateUrl Field Functions 
    bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
    void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
    inline string templateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ListTemplatesResponseBodyTemplates& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListTemplatesResponseBodyTemplates& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Supplementary information for public templates.
    Darabonba::Json additionalInfo_ = nullptr;
    // Creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Template description.
    std::shared_ptr<string> description_ = nullptr;
    // ID of the Alibaba Cloud account to which the template belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The sharing type of the template.
    // 
    // Values:
    // - Private: The template is owned by the user themselves.
    // - Shared: The template is shared by other users.
    std::shared_ptr<string> shareType_ = nullptr;
    // Tags of the template.
    std::shared_ptr<vector<Models::ListTemplatesResponseBodyTemplatesTags>> tags_ = nullptr;
    // The ARN of the template.
    std::shared_ptr<string> templateARN_ = nullptr;
    // Template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // Template name.
    std::shared_ptr<string> templateName_ = nullptr;
    // Link to the template
    std::shared_ptr<string> templateUrl_ = nullptr;
    // Latest template version name.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The last update time of the template.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
