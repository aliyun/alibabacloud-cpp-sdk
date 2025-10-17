// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDisksRequestFilter.hpp>
#include <alibabacloud/models/DescribeDisksRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(AdditionalAttributes, additionalAttributes_);
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_TO_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EnableAutoSnapshot, enableAutoSnapshot_);
      DARABONBA_PTR_TO_JSON(EnableAutomatedSnapshotPolicy, enableAutomatedSnapshotPolicy_);
      DARABONBA_PTR_TO_JSON(EnableShared, enableShared_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Portable, portable_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(AdditionalAttributes, additionalAttributes_);
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(DeleteAutoSnapshot, deleteAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
      DARABONBA_PTR_FROM_JSON(DiskChargeType, diskChargeType_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EnableAutoSnapshot, enableAutoSnapshot_);
      DARABONBA_PTR_FROM_JSON(EnableAutomatedSnapshotPolicy, enableAutomatedSnapshotPolicy_);
      DARABONBA_PTR_FROM_JSON(EnableShared, enableShared_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Portable, portable_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDisksRequest() = default ;
    DescribeDisksRequest(const DescribeDisksRequest &) = default ;
    DescribeDisksRequest(DescribeDisksRequest &&) = default ;
    DescribeDisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDisksRequest() = default ;
    DescribeDisksRequest& operator=(const DescribeDisksRequest &) = default ;
    DescribeDisksRequest& operator=(DescribeDisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->additionalAttributes_ == nullptr && return this->autoSnapshotPolicyId_ == nullptr && return this->category_ == nullptr && return this->deleteAutoSnapshot_ == nullptr && return this->deleteWithInstance_ == nullptr
        && return this->diskChargeType_ == nullptr && return this->diskIds_ == nullptr && return this->diskName_ == nullptr && return this->diskType_ == nullptr && return this->dryRun_ == nullptr
        && return this->enableAutoSnapshot_ == nullptr && return this->enableAutomatedSnapshotPolicy_ == nullptr && return this->enableShared_ == nullptr && return this->encrypted_ == nullptr && return this->instanceId_ == nullptr
        && return this->KMSKeyId_ == nullptr && return this->lockReason_ == nullptr && return this->maxResults_ == nullptr && return this->multiAttach_ == nullptr && return this->nextToken_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->portable_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->snapshotId_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->zoneId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<DescribeDisksRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<DescribeDisksRequestFilter>) };
    inline vector<DescribeDisksRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<DescribeDisksRequestFilter>) };
    inline DescribeDisksRequest& setFilter(const vector<DescribeDisksRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeDisksRequest& setFilter(vector<DescribeDisksRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // additionalAttributes Field Functions 
    bool hasAdditionalAttributes() const { return this->additionalAttributes_ != nullptr;};
    void deleteAdditionalAttributes() { this->additionalAttributes_ = nullptr;};
    inline const vector<string> & additionalAttributes() const { DARABONBA_PTR_GET_CONST(additionalAttributes_, vector<string>) };
    inline vector<string> additionalAttributes() { DARABONBA_PTR_GET(additionalAttributes_, vector<string>) };
    inline DescribeDisksRequest& setAdditionalAttributes(const vector<string> & additionalAttributes) { DARABONBA_PTR_SET_VALUE(additionalAttributes_, additionalAttributes) };
    inline DescribeDisksRequest& setAdditionalAttributes(vector<string> && additionalAttributes) { DARABONBA_PTR_SET_RVALUE(additionalAttributes_, additionalAttributes) };


    // autoSnapshotPolicyId Field Functions 
    bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
    void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
    inline string autoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
    inline DescribeDisksRequest& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeDisksRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // deleteAutoSnapshot Field Functions 
    bool hasDeleteAutoSnapshot() const { return this->deleteAutoSnapshot_ != nullptr;};
    void deleteDeleteAutoSnapshot() { this->deleteAutoSnapshot_ = nullptr;};
    inline bool deleteAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(deleteAutoSnapshot_, false) };
    inline DescribeDisksRequest& setDeleteAutoSnapshot(bool deleteAutoSnapshot) { DARABONBA_PTR_SET_VALUE(deleteAutoSnapshot_, deleteAutoSnapshot) };


    // deleteWithInstance Field Functions 
    bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
    void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
    inline bool deleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
    inline DescribeDisksRequest& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


    // diskChargeType Field Functions 
    bool hasDiskChargeType() const { return this->diskChargeType_ != nullptr;};
    void deleteDiskChargeType() { this->diskChargeType_ = nullptr;};
    inline string diskChargeType() const { DARABONBA_PTR_GET_DEFAULT(diskChargeType_, "") };
    inline DescribeDisksRequest& setDiskChargeType(string diskChargeType) { DARABONBA_PTR_SET_VALUE(diskChargeType_, diskChargeType) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline string diskIds() const { DARABONBA_PTR_GET_DEFAULT(diskIds_, "") };
    inline DescribeDisksRequest& setDiskIds(string diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline DescribeDisksRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeDisksRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeDisksRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableAutoSnapshot Field Functions 
    bool hasEnableAutoSnapshot() const { return this->enableAutoSnapshot_ != nullptr;};
    void deleteEnableAutoSnapshot() { this->enableAutoSnapshot_ = nullptr;};
    inline bool enableAutoSnapshot() const { DARABONBA_PTR_GET_DEFAULT(enableAutoSnapshot_, false) };
    inline DescribeDisksRequest& setEnableAutoSnapshot(bool enableAutoSnapshot) { DARABONBA_PTR_SET_VALUE(enableAutoSnapshot_, enableAutoSnapshot) };


    // enableAutomatedSnapshotPolicy Field Functions 
    bool hasEnableAutomatedSnapshotPolicy() const { return this->enableAutomatedSnapshotPolicy_ != nullptr;};
    void deleteEnableAutomatedSnapshotPolicy() { this->enableAutomatedSnapshotPolicy_ = nullptr;};
    inline bool enableAutomatedSnapshotPolicy() const { DARABONBA_PTR_GET_DEFAULT(enableAutomatedSnapshotPolicy_, false) };
    inline DescribeDisksRequest& setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(enableAutomatedSnapshotPolicy_, enableAutomatedSnapshotPolicy) };


    // enableShared Field Functions 
    bool hasEnableShared() const { return this->enableShared_ != nullptr;};
    void deleteEnableShared() { this->enableShared_ = nullptr;};
    inline bool enableShared() const { DARABONBA_PTR_GET_DEFAULT(enableShared_, false) };
    inline DescribeDisksRequest& setEnableShared(bool enableShared) { DARABONBA_PTR_SET_VALUE(enableShared_, enableShared) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline DescribeDisksRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDisksRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline DescribeDisksRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDisksRequest& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDisksRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // multiAttach Field Functions 
    bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
    void deleteMultiAttach() { this->multiAttach_ = nullptr;};
    inline string multiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
    inline DescribeDisksRequest& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDisksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDisksRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDisksRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDisksRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDisksRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // portable Field Functions 
    bool hasPortable() const { return this->portable_ != nullptr;};
    void deletePortable() { this->portable_ = nullptr;};
    inline bool portable() const { DARABONBA_PTR_GET_DEFAULT(portable_, false) };
    inline DescribeDisksRequest& setPortable(bool portable) { DARABONBA_PTR_SET_VALUE(portable_, portable) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDisksRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDisksRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDisksRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeDisksRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDisksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDisksRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDisksRequestTag>) };
    inline vector<DescribeDisksRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDisksRequestTag>) };
    inline DescribeDisksRequest& setTag(const vector<DescribeDisksRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDisksRequest& setTag(vector<DescribeDisksRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDisksRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<DescribeDisksRequestFilter>> filter_ = nullptr;
    // The additional attributes. Set the value to `Placement`, which indicates the data storage locations of the disk.
    // 
    // >  This attribute is valid only for Regional Enterprise SSDs (ESSDs).
    std::shared_ptr<vector<string>> additionalAttributes_ = nullptr;
    // The ID of the automatic snapshot policy that is applied to the cloud disk.
    std::shared_ptr<string> autoSnapshotPolicyId_ = nullptr;
    // The disk category. Valid values:
    // 
    // *   all: all disk categories
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: Enterprise SSD (ESSD)
    // *   cloud_auto: ESSD AutoPL disk
    // *   cloud_regional_disk_auto: Regional ESSD
    // *   cloud_essd_entry: ESSD Entry disk
    // *   elastic_ephemeral_disk_standard: standard elastic ephemeral disk
    // *   elastic_ephemeral_disk_premium: premium elastic ephemeral disk
    // *   local_ssd_pro: I/O-intensive local disk
    // *   local_hdd_pro: throughput-intensive local disk
    // *   ephemeral: retired local disk
    // *   ephemeral_ssd: retired local SSD
    // 
    // Default value: all.
    // 
    // Enumerated values:
    // 
    // *   all: all disks categories
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   local_ssd_pro: I/O-intensive local disk
    // *   ephemeral: retired local disk
    // *   cloud_essd_entry: ESSD Entry disk
    // *   elastic_ephemeral_disk_premium: premium elastic ephemeral disk
    // *   cloud: basic disk
    // *   ephemeral_ssd: retired local SSD
    // *   cloud_auto: ESSD AutoPL disk
    // *   cloud_regional_disk_auto: Regional ESSD
    // *   cloud_essd: ESSD
    // *   elastic_ephemeral_disk_standard: standard elastic ephemeral disk
    // *   local_hdd_pro: throughput-intensive local disk
    std::shared_ptr<string> category_ = nullptr;
    // Specifies whether to delete the automatic snapshots of the cloud disk after the disk is released.
    // 
    // *   true
    // *   false
    // 
    // Default value: false
    std::shared_ptr<bool> deleteAutoSnapshot_ = nullptr;
    // Specifies whether the disk is released when the associated instance is released. Valid values:
    // 
    // *   true: The disk is released when the associated instance is released.
    // *   false: The disk is retained as a pay-as-you-go data disk when the associated instance is released.
    // 
    // Default value: false.
    std::shared_ptr<bool> deleteWithInstance_ = nullptr;
    // The billing method of the disk. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    std::shared_ptr<string> diskChargeType_ = nullptr;
    // The IDs of cloud disks, local disks, or elastic ephemeral disks. The value is a JSON array that consists of up to 100 disk IDs. Separate the disk IDs with commas (,).
    std::shared_ptr<string> diskIds_ = nullptr;
    // The name of the disk. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> diskName_ = nullptr;
    // The type of the disk. Valid values:
    // 
    // *   all: system disk and data disk
    // *   system: system disk
    // *   data: data disk
    // 
    // Default value: all.
    // 
    // >  Elastic ephemeral disks cannot be used as system disks.
    std::shared_ptr<string> diskType_ = nullptr;
    // Specifies whether to perform only a dry run without performing the actual request. Valid values:
    // 
    // *   true: performs only a dry run. The systems checks whether your AccessKey pair is valid, whether RAM users are granted permissions, and whether the required parameters are specified. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   false: performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    // 
    // Default value: false
    std::shared_ptr<bool> dryRun_ = nullptr;
    // Specifies whether the automatic snapshot policy feature is enabled for the cloud disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is deprecated. By default, the automatic snapshot policy feature is enabled for cloud disks. You need to only apply an automatic snapshot policy to a cloud disk before you can use the automatic snapshot policy.
    std::shared_ptr<bool> enableAutoSnapshot_ = nullptr;
    // Specifies whether an automatic snapshot policy is applied to the cloud disk.
    // 
    // *   true: An automatic snapshot policy is applied to the cloud disk.
    // *   false: No automatic snapshot policy is applied to the cloud disk.
    // 
    // Default value: false
    std::shared_ptr<bool> enableAutomatedSnapshotPolicy_ = nullptr;
    // Specifies whether the disk is a Shared Block Storage device.
    std::shared_ptr<bool> enableShared_ = nullptr;
    // Specifies whether to query only encrypted cloud disks.
    // 
    // *   true: queries only encrypted cloud disks.
    // *   false: does not query encrypted cloud disks.
    // 
    // Default value: false
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the Elastic Compute Service (ECS) instance to which the disk is attached.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used by the cloud disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // The reason why the disk is locked. Valid values:
    // 
    // *   financial: The disk is locked due to overdue payments.
    // *   security: The disk is locked due to security reasons.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The maximum number of entries per page. Valid values: 10 to 500.
    // 
    // Default value:
    // 
    // *   If you do not specify this parameter or you set this parameter to a value less than 10, the default value is 10.
    // *   If you set this parameter to a value greater than 500, the default value is 500.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Specifies whether to enable the multi-attach feature for the disk. Valid values:
    // 
    // *   Disabled
    // *   Enabled
    // *   LegacyShared: Shared Block Storage devices are queried.
    std::shared_ptr<string> multiAttach_ = nullptr;
    // The query token. Set the value to the `NextToken` value that was returned in the last call to this operation.
    // 
    // For more information about how to check the responses returned by this operation, see the preceding "Description" section.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // >  This parameter will be removed in the future. We recommend that you use `NextToken` and `MaxResults` for a paged query.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // >  This parameter will be removed in the future. We recommend that you use `NextToken` and `MaxResults` for a paged query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Specifies whether the disk is removable. Valid values:
    // 
    // *   true: The disk is removable. A removable disk can independently exist and can be attached to or detached from an instance within the same zone.
    // *   false: The disk is not removable. A disk that is not removable cannot independently exist or be attached to or detached from an instance within the same zone.
    // 
    // The `Portable` attribute of the following types of disks is `false`, and these types of disks share the same lifecycle with their associated instances:
    // 
    // *   Local disks
    // *   Local SSDs
    // *   Subscription data disks
    std::shared_ptr<bool> portable_ = nullptr;
    // The region ID of the disk. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the disk belongs. If this parameter is specified to query resources, up to 1,000 resources that belong to the specified resource group can be displayed in the response.
    // 
    // >  Resources in the default resource group are displayed in the response regardless of the value specified for this parameter.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the snapshot from which you create the cloud disk.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The status of the disk. For more information, see [Disk states](https://help.aliyun.com/document_detail/25689.html). Valid values:
    // 
    // *   In_use
    // *   Available
    // *   Attaching
    // *   Detaching
    // *   Creating
    // *   ReIniting
    // *   All
    // 
    // Default value: All.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the disk.
    std::shared_ptr<vector<DescribeDisksRequestTag>> tag_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
