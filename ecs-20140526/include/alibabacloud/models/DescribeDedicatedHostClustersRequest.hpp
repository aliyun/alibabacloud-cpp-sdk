// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostClustersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterIds, dedicatedHostClusterIds_);
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterName, dedicatedHostClusterName_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterIds, dedicatedHostClusterIds_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterName, dedicatedHostClusterName_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedHostClustersRequest() = default ;
    DescribeDedicatedHostClustersRequest(const DescribeDedicatedHostClustersRequest &) = default ;
    DescribeDedicatedHostClustersRequest(DescribeDedicatedHostClustersRequest &&) = default ;
    DescribeDedicatedHostClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersRequest() = default ;
    DescribeDedicatedHostClustersRequest& operator=(const DescribeDedicatedHostClustersRequest &) = default ;
    DescribeDedicatedHostClustersRequest& operator=(DescribeDedicatedHostClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostClusterIds_ == nullptr
        && return this->dedicatedHostClusterName_ == nullptr && return this->lockReason_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->zoneId_ == nullptr; };
    // dedicatedHostClusterIds Field Functions 
    bool hasDedicatedHostClusterIds() const { return this->dedicatedHostClusterIds_ != nullptr;};
    void deleteDedicatedHostClusterIds() { this->dedicatedHostClusterIds_ = nullptr;};
    inline string dedicatedHostClusterIds() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterIds_, "") };
    inline DescribeDedicatedHostClustersRequest& setDedicatedHostClusterIds(string dedicatedHostClusterIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterIds_, dedicatedHostClusterIds) };


    // dedicatedHostClusterName Field Functions 
    bool hasDedicatedHostClusterName() const { return this->dedicatedHostClusterName_ != nullptr;};
    void deleteDedicatedHostClusterName() { this->dedicatedHostClusterName_ = nullptr;};
    inline string dedicatedHostClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterName_, "") };
    inline DescribeDedicatedHostClustersRequest& setDedicatedHostClusterName(string dedicatedHostClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterName_, dedicatedHostClusterName) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDedicatedHostClustersRequest& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDedicatedHostClustersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDedicatedHostClustersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedHostClustersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedHostClustersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedHostClustersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedHostClustersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDedicatedHostClustersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDedicatedHostClustersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDedicatedHostClustersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDedicatedHostClustersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDedicatedHostClustersRequestTag>) };
    inline vector<DescribeDedicatedHostClustersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDedicatedHostClustersRequestTag>) };
    inline DescribeDedicatedHostClustersRequest& setTag(const vector<DescribeDedicatedHostClustersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDedicatedHostClustersRequest& setTag(vector<DescribeDedicatedHostClustersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostClustersRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The list of host group IDs. The value can be a JSON array consisting of multiple IDs in the `["dc-xxxxxxxxx", "dc-yyyyyyyyy",..., "dc-zzzzzzzzz"]` format. Separate the IDs with commas (,).
    std::shared_ptr<string> dedicatedHostClusterIds_ = nullptr;
    // The name of the host group.
    std::shared_ptr<string> dedicatedHostClusterName_ = nullptr;
    // >  This parameter is unavailable for use.
    std::shared_ptr<string> lockReason_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the host group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID of the host group. You can use a resource group ID to filter no more than 1,000 host groups.
    // 
    // >  A default resource group is not supported.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // >  This parameter is unavailable for use.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the host group.
    std::shared_ptr<vector<DescribeDedicatedHostClustersRequestTag>> tag_ = nullptr;
    // The zone ID of the host group. You can call the [DescribeZones](https://help.aliyun.com/document_detail/25610.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
