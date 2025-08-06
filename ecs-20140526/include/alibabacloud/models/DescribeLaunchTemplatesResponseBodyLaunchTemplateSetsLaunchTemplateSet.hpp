// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODYLAUNCHTEMPLATESETSLAUNCHTEMPLATESET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESRESPONSEBODYLAUNCHTEMPLATESETSLAUNCHTEMPLATESET_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_TO_JSON(DefaultVersionNumber, defaultVersionNumber_);
      DARABONBA_PTR_TO_JSON(LatestVersionNumber, latestVersionNumber_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
      DARABONBA_PTR_FROM_JSON(DefaultVersionNumber, defaultVersionNumber_);
      DARABONBA_PTR_FROM_JSON(LatestVersionNumber, latestVersionNumber_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet() = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet &) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet(DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet &&) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet() = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& operator=(const DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet &) = default ;
    DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& operator=(DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createdBy_ != nullptr && this->defaultVersionNumber_ != nullptr && this->latestVersionNumber_ != nullptr && this->launchTemplateId_ != nullptr && this->launchTemplateName_ != nullptr
        && this->modifiedTime_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdBy Field Functions 
    bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
    void deleteCreatedBy() { this->createdBy_ = nullptr;};
    inline string createdBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


    // defaultVersionNumber Field Functions 
    bool hasDefaultVersionNumber() const { return this->defaultVersionNumber_ != nullptr;};
    void deleteDefaultVersionNumber() { this->defaultVersionNumber_ = nullptr;};
    inline int64_t defaultVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionNumber_, 0L) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setDefaultVersionNumber(int64_t defaultVersionNumber) { DARABONBA_PTR_SET_VALUE(defaultVersionNumber_, defaultVersionNumber) };


    // latestVersionNumber Field Functions 
    bool hasLatestVersionNumber() const { return this->latestVersionNumber_ != nullptr;};
    void deleteLatestVersionNumber() { this->latestVersionNumber_ = nullptr;};
    inline int64_t latestVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(latestVersionNumber_, 0L) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setLatestVersionNumber(int64_t latestVersionNumber) { DARABONBA_PTR_SET_VALUE(latestVersionNumber_, latestVersionNumber) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline string launchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags) };
    inline Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setTags(const Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSet& setTags(Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The time when the launch template was created.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the Alibaba Cloud account that created the launch template.
    std::shared_ptr<string> createdBy_ = nullptr;
    // The default version number of the launch template.
    std::shared_ptr<int64_t> defaultVersionNumber_ = nullptr;
    // The latest version number of the launch template.
    std::shared_ptr<int64_t> latestVersionNumber_ = nullptr;
    // The ID of the launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The name of the launch template.
    std::shared_ptr<string> launchTemplateName_ = nullptr;
    // The time when a version was added to or deleted from the launch template.
    // 
    // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the resource group to which the launch template belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the launch template.
    // 
    // >  You can only call API operations to add tags to and query the tags of a launch template. You cannot add tags to or view the tags of a launch template in the ECS console.
    std::shared_ptr<Models::DescribeLaunchTemplatesResponseBodyLaunchTemplateSetsLaunchTemplateSetTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
