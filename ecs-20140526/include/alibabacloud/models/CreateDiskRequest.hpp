// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDiskRequestArn.hpp>
#include <alibabacloud/models/CreateDiskRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDiskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdvancedFeatures, advancedFeatures_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskName, diskName_);
      DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvancedFeatures, advancedFeatures_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
      DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(MultiAttach, multiAttach_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(StorageClusterId, storageClusterId_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDiskRequest() = default ;
    CreateDiskRequest(const CreateDiskRequest &) = default ;
    CreateDiskRequest(CreateDiskRequest &&) = default ;
    CreateDiskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiskRequest() = default ;
    CreateDiskRequest& operator=(const CreateDiskRequest &) = default ;
    CreateDiskRequest& operator=(CreateDiskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedFeatures_ == nullptr
        && return this->arn_ == nullptr && return this->burstingEnabled_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->diskCategory_ == nullptr
        && return this->diskName_ == nullptr && return this->encryptAlgorithm_ == nullptr && return this->encrypted_ == nullptr && return this->instanceId_ == nullptr && return this->KMSKeyId_ == nullptr
        && return this->multiAttach_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->performanceLevel_ == nullptr && return this->provisionedIops_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->size_ == nullptr
        && return this->snapshotId_ == nullptr && return this->storageClusterId_ == nullptr && return this->storageSetId_ == nullptr && return this->storageSetPartitionNumber_ == nullptr && return this->tag_ == nullptr
        && return this->zoneId_ == nullptr; };
    // advancedFeatures Field Functions 
    bool hasAdvancedFeatures() const { return this->advancedFeatures_ != nullptr;};
    void deleteAdvancedFeatures() { this->advancedFeatures_ = nullptr;};
    inline string advancedFeatures() const { DARABONBA_PTR_GET_DEFAULT(advancedFeatures_, "") };
    inline CreateDiskRequest& setAdvancedFeatures(string advancedFeatures) { DARABONBA_PTR_SET_VALUE(advancedFeatures_, advancedFeatures) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<CreateDiskRequestArn> & arn() const { DARABONBA_PTR_GET_CONST(arn_, vector<CreateDiskRequestArn>) };
    inline vector<CreateDiskRequestArn> arn() { DARABONBA_PTR_GET(arn_, vector<CreateDiskRequestArn>) };
    inline CreateDiskRequest& setArn(const vector<CreateDiskRequestArn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline CreateDiskRequest& setArn(vector<CreateDiskRequestArn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool burstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateDiskRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDiskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDiskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CreateDiskRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string diskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateDiskRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encryptAlgorithm Field Functions 
    bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
    void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
    inline string encryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
    inline CreateDiskRequest& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateDiskRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateDiskRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // multiAttach Field Functions 
    bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
    void deleteMultiAttach() { this->multiAttach_ = nullptr;};
    inline string multiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
    inline CreateDiskRequest& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateDiskRequest& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateDiskRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDiskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateDiskRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateDiskRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // storageClusterId Field Functions 
    bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
    void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
    inline string storageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
    inline CreateDiskRequest& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string storageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline CreateDiskRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t storageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline CreateDiskRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDiskRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDiskRequestTag>) };
    inline vector<CreateDiskRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDiskRequestTag>) };
    inline CreateDiskRequest& setTag(const vector<CreateDiskRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDiskRequest& setTag(vector<CreateDiskRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDiskRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is not publicly available.
    std::shared_ptr<string> advancedFeatures_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<vector<CreateDiskRequestArn>> arn_ = nullptr;
    // Specifies whether to enable the performance burst feature. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is available only if you set `DiskCategory` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<bool> burstingEnabled_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The **token** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // This parameter is left empty by default.
    std::shared_ptr<string> description_ = nullptr;
    // The category of the data disk. Valid values for different disk categories:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: utra disk
    // *   cloud_ssd: standard SSD
    // *   cloud_essd: ESSD
    // *   cloud_auto: ESSD AutoPL disk
    // *   cloud_essd_entry: ESSD Entry disk
    // *   cloud_regional_disk_auto: Regional ESSD
    // *   elastic_ephemeral_disk_standard: standard elastic ephemeral disk
    // *   elastic_ephemeral_disk_premium: premium elastic ephemeral disk
    // 
    // Default value: cloud.
    // 
    // Enumerated values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: SSD
    // *   cloud_auto: ESSD AutoPL disk
    // *   cloud_regional_disk_auto: Regional ESSD
    // *   cloud_essd: ESSD
    // *   elastic_ephemeral_disk_standard: standard elastic ephemeral disk.
    // *   cloud_essd: ESSD
    // *   elastic_ephemeral_disk_premium: premium elastic ephemeral disk
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The name of the data disk. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-). The name must start with a letter.
    // 
    // This parameter is left empty by default.
    std::shared_ptr<string> diskName_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<string> encryptAlgorithm_ = nullptr;
    // Specifies whether to encrypt the disk. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the subscription instance to which to attach the subscription disk.
    // 
    // *   If you specify an instance ID, the following parameters are ignored: ResourceGroupId, Tag.N.Key, Tag.N.Value, ClientToken, and KMSKeyId.
    // *   You cannot specify both ZoneId and InstanceId in a request.
    // 
    // This parameter is empty by default, which indicates that a pay-as-you-go disk is created in the region and zone specified by RegionId and ZoneId.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used for the disk.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    // Specifies whether to enable the multi-attach feature for the disk. Valid values:
    // 
    // *   Disabled
    // *   Enabled Set the value to `Enabled` only for ESSDs.
    // 
    // Default value: Disabled.
    // 
    // >  Disks for which the multi-attach feature is enabled support only the pay-as-you-go billing method. When `MultiAttach` is set to Enabled, you cannot specify `InstanceId`. You can call the [AttachDisk](https://help.aliyun.com/document_detail/25515.html) operation to attach disks to instances after the disks are created. Disks for which the multi-attach feature is enabled can be attached only as data disks.
    std::shared_ptr<string> multiAttach_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The performance level of the disk if the disk is an ESSD. Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    // 
    // For information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // Specifies the read/write IOPS that is provisioned for the ESSD AutoPL disk. Valid value:
    // 
    // *   Capacity (GiB) <= 3: not configurable
    // *   Capacity (GiB) >= 4: [0, min{(1,000
    // 
    // IOPS/GiB × Capacity - Baseline IOPS), 50,000}]
    // 
    // Baseline performance: max{min{1,800 + 50 × Capacity, 50,000}, 3,000}
    // 
    // >  This parameter is available only if you set `DiskCategory` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
    // The ID of the region in which to create the disk. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which to add the disk.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The size of the data disk. Unit: GiB. This parameter is required. Valid values for different disk categories:
    // 
    // *   Valid values when DiskCategory is set to cloud: 5 to 2000.
    // 
    // *   Valid values when DiskCategory is set to cloud_efficiency: 20 to 32768.
    // 
    // *   Valid values when DiskCategory is set to cloud_ssd: 20 to 32768.
    // 
    // *   Valid values when DiskCategory is set to cloud_essd: vary based on the `PerformanceLevel` value.
    // 
    //     *   Valid values when PerformanceLevel is set to PL0: 1 to 65536.
    //     *   Valid values when PerformanceLevel is set to PL1: 20 to 65536.
    //     *   Valid values when PerformanceLevel is set to PL2: 461 to 65536.
    //     *   Valid values when PerformanceLevel is set to PL3: 1261 to 65536.
    // 
    // *   Valid values when DiskCategory is set to cloud_auto: 1 to 65536.
    // 
    // *   Valid values when DiskCategory is set to cloud_essd_entry: 10 to 32768.
    // 
    // *   Valid values when DiskCategory is set to cloud_regional_disk_auto: 10 to 65536.
    // 
    // *   Valid values when DiskCategory is set to elastic_ephemeral_disk_standard: 64 to 8192.
    // 
    // *   Valid values when DiskCategory is set to elastic_ephemeral_disk_premium: 64 to 8192.
    // 
    // If you specify `SnapshotId`, the following limits apply to `SnapshotId` and `Size`:
    // 
    // *   If the size of the snapshot specified by `SnapshotId` is larger than the value of `Size`, the size of the created disk is equal to the size of the snapshot.
    // *   If the size of the snapshot specified by `SnapshotId` is smaller than the value of `Size`, the size of the created disk is equal to the value of `Size`.
    std::shared_ptr<int32_t> size_ = nullptr;
    // The ID of the snapshot to use to create the disk. Snapshots that were created on or before July 15, 2013 cannot be used to create disks.
    // 
    // The following limits apply to `SnapshotId` and `Size`:
    // 
    // *   If the size of the snapshot specified by `SnapshotId` is larger than the value of `Size`, the size of the created disk is equal to the specified snapshot size.
    // *   If the size of the snapshot specified by `SnapshotId` is smaller than the value of `Size`, the size of the created disk is equal to the value of `Size`.
    // *   You cannot create elastic ephemeral disks from snapshots.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The ID of the dedicated block storage cluster in which to create the disk. To create a disk in a specific dedicated block storage cluster, you must specify this parameter.
    // 
    // >  You can specify the storage set-related parameters (`StorageSetId` and `StorageSetPartitionNumber`) or the dedicated block storage cluster-related parameter (`StorageClusterId`), but not both. If you specify a storage set-related parameter and a dedicated block storage cluster-related parameter in a request, the request fails.
    std::shared_ptr<string> storageClusterId_ = nullptr;
    // The ID of the storage set.
    // 
    // > You cannot specify storage set-related parameters (`StorageSetId` and `StorageSetPartitionNumber`) and the dedicated block storage cluster-related parameter (`StorageClusterId`) at the same time. Otherwise, the operation cannot be called.
    std::shared_ptr<string> storageSetId_ = nullptr;
    // The number of partitions in the storage set. The value must be greater than or equal to 2 but cannot exceed the quota obtained by calling the [DescribeAccountAttributes](https://help.aliyun.com/document_detail/73772.html)operation.
    // 
    // Default value: 2.
    std::shared_ptr<int32_t> storageSetPartitionNumber_ = nullptr;
    // The tags to add to the disk.
    std::shared_ptr<vector<CreateDiskRequestTag>> tag_ = nullptr;
    // The ID of the zone in which to create the pay-as-you-go disk.
    // 
    // *   If you do not specify InstanceId, you must specify ZoneId.
    // *   You cannot specify both ZoneId and InstanceId in the same request.
    // 
    // >  You do not need to specify this parameter if you set DiskCategory to `cloud_regional_disk_auto` to create a Regional ESSD.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
