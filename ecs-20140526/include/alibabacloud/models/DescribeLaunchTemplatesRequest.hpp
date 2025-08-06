// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLaunchTemplatesRequestTemplateTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TemplateResourceGroupId, templateResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TemplateResourceGroupId, templateResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
    };
    DescribeLaunchTemplatesRequest() = default ;
    DescribeLaunchTemplatesRequest(const DescribeLaunchTemplatesRequest &) = default ;
    DescribeLaunchTemplatesRequest(DescribeLaunchTemplatesRequest &&) = default ;
    DescribeLaunchTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplatesRequest() = default ;
    DescribeLaunchTemplatesRequest& operator=(const DescribeLaunchTemplatesRequest &) = default ;
    DescribeLaunchTemplatesRequest& operator=(DescribeLaunchTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->launchTemplateId_ != nullptr
        && this->launchTemplateName_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->templateResourceGroupId_ != nullptr && this->templateTag_ != nullptr; };
    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline const vector<string> & launchTemplateId() const { DARABONBA_PTR_GET_CONST(launchTemplateId_, vector<string>) };
    inline vector<string> launchTemplateId() { DARABONBA_PTR_GET(launchTemplateId_, vector<string>) };
    inline DescribeLaunchTemplatesRequest& setLaunchTemplateId(const vector<string> & launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };
    inline DescribeLaunchTemplatesRequest& setLaunchTemplateId(vector<string> && launchTemplateId) { DARABONBA_PTR_SET_RVALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline const vector<string> & launchTemplateName() const { DARABONBA_PTR_GET_CONST(launchTemplateName_, vector<string>) };
    inline vector<string> launchTemplateName() { DARABONBA_PTR_GET(launchTemplateName_, vector<string>) };
    inline DescribeLaunchTemplatesRequest& setLaunchTemplateName(const vector<string> & launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };
    inline DescribeLaunchTemplatesRequest& setLaunchTemplateName(vector<string> && launchTemplateName) { DARABONBA_PTR_SET_RVALUE(launchTemplateName_, launchTemplateName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeLaunchTemplatesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLaunchTemplatesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLaunchTemplatesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLaunchTemplatesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLaunchTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeLaunchTemplatesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeLaunchTemplatesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // templateResourceGroupId Field Functions 
    bool hasTemplateResourceGroupId() const { return this->templateResourceGroupId_ != nullptr;};
    void deleteTemplateResourceGroupId() { this->templateResourceGroupId_ = nullptr;};
    inline string templateResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(templateResourceGroupId_, "") };
    inline DescribeLaunchTemplatesRequest& setTemplateResourceGroupId(string templateResourceGroupId) { DARABONBA_PTR_SET_VALUE(templateResourceGroupId_, templateResourceGroupId) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline const vector<DescribeLaunchTemplatesRequestTemplateTag> & templateTag() const { DARABONBA_PTR_GET_CONST(templateTag_, vector<DescribeLaunchTemplatesRequestTemplateTag>) };
    inline vector<DescribeLaunchTemplatesRequestTemplateTag> templateTag() { DARABONBA_PTR_GET(templateTag_, vector<DescribeLaunchTemplatesRequestTemplateTag>) };
    inline DescribeLaunchTemplatesRequest& setTemplateTag(const vector<DescribeLaunchTemplatesRequestTemplateTag> & templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };
    inline DescribeLaunchTemplatesRequest& setTemplateTag(vector<DescribeLaunchTemplatesRequestTemplateTag> && templateTag) { DARABONBA_PTR_SET_RVALUE(templateTag_, templateTag) };


  protected:
    // The IDs of launch templates.
    // 
    // *   You can query up to 100 launch templates.
    // *   You must specify LaunchTemplateId or LaunchTemplateName to specify a launch template.
    std::shared_ptr<vector<string>> launchTemplateId_ = nullptr;
    // The names of launch templates.
    // 
    // *   You can query up to 100 launch templates.
    // *   You must specify LaunchTemplateId or LaunchTemplateName to specify a launch template.
    std::shared_ptr<vector<string>> launchTemplateName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Page starts from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the launch template. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the resource group to which the launch template belongs. If you specify this parameter to query resources, up to 1,000 resources that belong to the specified resource group can be returned.
    // 
    // >  The default resource group is not supported.
    std::shared_ptr<string> templateResourceGroupId_ = nullptr;
    // The tags of the launch template.
    // 
    // >  You can only call API operations to add tags to and query the tags of a launch template. You cannot add tags to or view the tags of a launch template in the ECS console.
    std::shared_ptr<vector<DescribeLaunchTemplatesRequestTemplateTag>> templateTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
