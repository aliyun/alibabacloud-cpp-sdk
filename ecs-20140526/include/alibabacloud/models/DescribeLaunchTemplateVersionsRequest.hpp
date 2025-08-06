// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeLaunchTemplateVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplateVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(DetailFlag, detailFlag_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_TO_JSON(MinVersion, minVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplateVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(DetailFlag, detailFlag_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MaxVersion, maxVersion_);
      DARABONBA_PTR_FROM_JSON(MinVersion, minVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeLaunchTemplateVersionsRequest() = default ;
    DescribeLaunchTemplateVersionsRequest(const DescribeLaunchTemplateVersionsRequest &) = default ;
    DescribeLaunchTemplateVersionsRequest(DescribeLaunchTemplateVersionsRequest &&) = default ;
    DescribeLaunchTemplateVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplateVersionsRequest() = default ;
    DescribeLaunchTemplateVersionsRequest& operator=(const DescribeLaunchTemplateVersionsRequest &) = default ;
    DescribeLaunchTemplateVersionsRequest& operator=(DescribeLaunchTemplateVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultVersion_ != nullptr
        && this->detailFlag_ != nullptr && this->launchTemplateId_ != nullptr && this->launchTemplateName_ != nullptr && this->launchTemplateVersion_ != nullptr && this->maxVersion_ != nullptr
        && this->minVersion_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline bool defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, false) };
    inline DescribeLaunchTemplateVersionsRequest& setDefaultVersion(bool defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // detailFlag Field Functions 
    bool hasDetailFlag() const { return this->detailFlag_ != nullptr;};
    void deleteDetailFlag() { this->detailFlag_ = nullptr;};
    inline bool detailFlag() const { DARABONBA_PTR_GET_DEFAULT(detailFlag_, false) };
    inline DescribeLaunchTemplateVersionsRequest& setDetailFlag(bool detailFlag) { DARABONBA_PTR_SET_VALUE(detailFlag_, detailFlag) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeLaunchTemplateVersionsRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline string launchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
    inline DescribeLaunchTemplateVersionsRequest& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline const vector<int64_t> & launchTemplateVersion() const { DARABONBA_PTR_GET_CONST(launchTemplateVersion_, vector<int64_t>) };
    inline vector<int64_t> launchTemplateVersion() { DARABONBA_PTR_GET(launchTemplateVersion_, vector<int64_t>) };
    inline DescribeLaunchTemplateVersionsRequest& setLaunchTemplateVersion(const vector<int64_t> & launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };
    inline DescribeLaunchTemplateVersionsRequest& setLaunchTemplateVersion(vector<int64_t> && launchTemplateVersion) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxVersion Field Functions 
    bool hasMaxVersion() const { return this->maxVersion_ != nullptr;};
    void deleteMaxVersion() { this->maxVersion_ = nullptr;};
    inline int64_t maxVersion() const { DARABONBA_PTR_GET_DEFAULT(maxVersion_, 0L) };
    inline DescribeLaunchTemplateVersionsRequest& setMaxVersion(int64_t maxVersion) { DARABONBA_PTR_SET_VALUE(maxVersion_, maxVersion) };


    // minVersion Field Functions 
    bool hasMinVersion() const { return this->minVersion_ != nullptr;};
    void deleteMinVersion() { this->minVersion_ = nullptr;};
    inline int64_t minVersion() const { DARABONBA_PTR_GET_DEFAULT(minVersion_, 0L) };
    inline DescribeLaunchTemplateVersionsRequest& setMinVersion(int64_t minVersion) { DARABONBA_PTR_SET_VALUE(minVersion_, minVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeLaunchTemplateVersionsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLaunchTemplateVersionsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLaunchTemplateVersionsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLaunchTemplateVersionsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLaunchTemplateVersionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeLaunchTemplateVersionsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeLaunchTemplateVersionsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to query the default version.
    std::shared_ptr<bool> defaultVersion_ = nullptr;
    // Specifies whether to query the configurations of the launch template. Valid values:
    // 
    // *   true: queries the basic information and other details of the launch template. The details include the image ID and system disk size.
    // *   false: queries only the basic information of the launch template. The basic information includes the template ID, template name, and default version.
    // 
    // Default value: true.
    std::shared_ptr<bool> detailFlag_ = nullptr;
    // The ID of the launch template.
    // 
    // You must set `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The name of the launch template.
    // 
    // You must set `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template.
    std::shared_ptr<string> launchTemplateName_ = nullptr;
    // The versions of the launch template.
    std::shared_ptr<vector<int64_t>> launchTemplateVersion_ = nullptr;
    // The maximum version number in the version range to query. This parameter is used together with `MinVersion` to specify a version range to query.
    std::shared_ptr<int64_t> maxVersion_ = nullptr;
    // The minimum version number in the version range to query. This parameter is used together with `MaxVersion` to specify a version range to query.
    std::shared_ptr<int64_t> minVersion_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the launch template.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
