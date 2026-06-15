// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISKREQUEST_HPP_
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the disk.
      // 
      // > For better code compatibility, we recommend that you use the `Tag.N.Key` parameter.
      shared_ptr<string> key_ {};
      // The tag value of the disk. The value of N ranges from 1 to 20. If you specify `Tag.N.Value`, the value can be an empty string. The value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    class Arn : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Arn& obj) { 
        DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_TO_JSON(RoleType, roleType_);
        DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
      };
      friend void from_json(const Darabonba::Json& j, Arn& obj) { 
        DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
        DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
        DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
      };
      Arn() = default ;
      Arn(const Arn &) = default ;
      Arn(Arn &&) = default ;
      Arn(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Arn() = default ;
      Arn& operator=(const Arn &) = default ;
      Arn& operator=(Arn &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleType_ == nullptr && this->rolearn_ == nullptr; };
      // assumeRoleFor Field Functions 
      bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
      void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
      inline int64_t getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, 0L) };
      inline Arn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


      // roleType Field Functions 
      bool hasRoleType() const { return this->roleType_ != nullptr;};
      void deleteRoleType() { this->roleType_ = nullptr;};
      inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
      inline Arn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


      // rolearn Field Functions 
      bool hasRolearn() const { return this->rolearn_ != nullptr;};
      void deleteRolearn() { this->rolearn_ = nullptr;};
      inline string getRolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
      inline Arn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


    protected:
      // > This parameter is not yet available.
      shared_ptr<int64_t> assumeRoleFor_ {};
      // > This parameter is not yet available.
      shared_ptr<string> roleType_ {};
      // > This parameter is not yet available.
      shared_ptr<string> rolearn_ {};
    };

    virtual bool empty() const override { return this->advancedFeatures_ == nullptr
        && this->arn_ == nullptr && this->burstingEnabled_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->diskCategory_ == nullptr
        && this->diskName_ == nullptr && this->encryptAlgorithm_ == nullptr && this->encrypted_ == nullptr && this->instanceId_ == nullptr && this->KMSKeyId_ == nullptr
        && this->multiAttach_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->size_ == nullptr
        && this->snapshotId_ == nullptr && this->storageClusterId_ == nullptr && this->storageSetId_ == nullptr && this->storageSetPartitionNumber_ == nullptr && this->tag_ == nullptr
        && this->zoneId_ == nullptr; };
    // advancedFeatures Field Functions 
    bool hasAdvancedFeatures() const { return this->advancedFeatures_ != nullptr;};
    void deleteAdvancedFeatures() { this->advancedFeatures_ = nullptr;};
    inline string getAdvancedFeatures() const { DARABONBA_PTR_GET_DEFAULT(advancedFeatures_, "") };
    inline CreateDiskRequest& setAdvancedFeatures(string advancedFeatures) { DARABONBA_PTR_SET_VALUE(advancedFeatures_, advancedFeatures) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<CreateDiskRequest::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<CreateDiskRequest::Arn>) };
    inline vector<CreateDiskRequest::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<CreateDiskRequest::Arn>) };
    inline CreateDiskRequest& setArn(const vector<CreateDiskRequest::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline CreateDiskRequest& setArn(vector<CreateDiskRequest::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // burstingEnabled Field Functions 
    bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
    void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
    inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
    inline CreateDiskRequest& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDiskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDiskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CreateDiskRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskName Field Functions 
    bool hasDiskName() const { return this->diskName_ != nullptr;};
    void deleteDiskName() { this->diskName_ = nullptr;};
    inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
    inline CreateDiskRequest& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


    // encryptAlgorithm Field Functions 
    bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
    void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
    inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
    inline CreateDiskRequest& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateDiskRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDiskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CreateDiskRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // multiAttach Field Functions 
    bool hasMultiAttach() const { return this->multiAttach_ != nullptr;};
    void deleteMultiAttach() { this->multiAttach_ = nullptr;};
    inline string getMultiAttach() const { DARABONBA_PTR_GET_DEFAULT(multiAttach_, "") };
    inline CreateDiskRequest& setMultiAttach(string multiAttach) { DARABONBA_PTR_SET_VALUE(multiAttach_, multiAttach) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDiskRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDiskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline CreateDiskRequest& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline CreateDiskRequest& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDiskRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDiskRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDiskRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline CreateDiskRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateDiskRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // storageClusterId Field Functions 
    bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
    void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
    inline string getStorageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
    inline CreateDiskRequest& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline CreateDiskRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline CreateDiskRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDiskRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDiskRequest::Tag>) };
    inline vector<CreateDiskRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateDiskRequest::Tag>) };
    inline CreateDiskRequest& setTag(const vector<CreateDiskRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDiskRequest& setTag(vector<CreateDiskRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDiskRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is not yet available.
    shared_ptr<string> advancedFeatures_ {};
    // > This parameter is not yet available.
    shared_ptr<vector<CreateDiskRequest::Arn>> arn_ {};
    // Specifies whether to enable performance bursting. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // > This parameter is available only for ESSD AutoPL disks (`cloud_auto`). For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    shared_ptr<bool> burstingEnabled_ {};
    // A client-generated, unique, case-sensitive token that you can use to ensure the idempotency of the request. **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // Default value: empty.
    shared_ptr<string> description_ {};
    // The category of the data disk. Valid values:
    // 
    // - `cloud`: basic disk
    // 
    // - `cloud_efficiency`: ultra disk
    // 
    // - `cloud_ssd`: standard SSD
    // 
    // - `cloud_essd`: ESSD
    // 
    // - `cloud_auto`: ESSD AutoPL disk
    // 
    // - `cloud_essd_entry`: ESSD Entry disk
    // 
    // - `cloud_regional_disk_auto`: ESSD zone-redundant disk
    // 
    // - `elastic_ephemeral_disk_standard`: Elastic Ephemeral Disk - Standard
    // 
    // - `elastic_ephemeral_disk_premium`: Elastic Ephemeral Disk - Premium
    // 
    // Default value: `cloud`.
    shared_ptr<string> diskCategory_ {};
    // The name of the disk. The name must be 2 to 128 characters in length. It must start with a letter as defined by Unicode and can contain letters (including English and Chinese characters), digits (0-9), colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // Default value: empty.
    shared_ptr<string> diskName_ {};
    // This parameter is not yet available.
    shared_ptr<string> encryptAlgorithm_ {};
    // Specifies whether to encrypt the disk. Valid values:
    // 
    // - true
    // 
    // - false
    // 
    // Default value: false.
    shared_ptr<bool> encrypted_ {};
    // Creates a subscription disk and automatically attaches it to the specified subscription instance.
    // 
    // - If you set this parameter, the `ResourceGroupId`, `Tag.N.Key`, `Tag.N.Value`, `ClientToken`, and `KMSKeyId` parameters are ignored.
    // 
    // - You cannot specify both `ZoneId` and `InstanceId`.
    // 
    // Default value: empty. An empty value indicates that you are creating a pay-as-you-go disk. The disk\\"s location is determined by `RegionId` and `ZoneId`.
    shared_ptr<string> instanceId_ {};
    // The ID of the KMS key to use for the disk.
    // 
    // > If `Encrypted` is set to true and you do not specify `KMSKeyId`, a default key is used for encryption. The `KMSKeyId` is returned in the response after the instance is created.
    // >
    // > - - If the disk is created from an unshared encrypted snapshot, the encryption key used by that snapshot is used by default.
    // >
    // > - - If the disk is created from a shared encrypted snapshot, the service key is used by default.
    // >
    // > - - If the disk is created in a region with account-level default encryption enabled, the specified account-level key is used by default.
    // >
    // > - - In other cases, the service key is used by default.
    shared_ptr<string> KMSKeyId_ {};
    // Specifies whether to enable the multi-attach feature. Valid values:
    // 
    // - Disabled: The feature is disabled.
    // 
    // - Enabled: The feature is enabled. Currently, only ESSDs support setting this parameter to `Enabled`.
    // 
    // Default value: Disabled.
    // 
    // > Disks with the multi-attach feature enabled can only be billed on a pay-as-you-go basis. Therefore, you cannot set the `InstanceId` parameter when `MultiAttach` is `Enabled`. After you create the disk, you can call [AttachDisk](https://help.aliyun.com/document_detail/25515.html) to attach it. Note that a multi-attach disk can be attached only as a data disk.
    shared_ptr<string> multiAttach_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The performance level of the ESSD. Valid values:
    // 
    // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
    // 
    // - PL1: A single disk can deliver up to 50,000 random read/write IOPS.
    // 
    // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
    // 
    // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    // 
    // For more information about how to choose an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    shared_ptr<string> performanceLevel_ {};
    // The provisioned read/write IOPS of a single ESSD AutoPL disk. Valid values:
    // 
    // - Capacity <= 3 GiB: You cannot set provisioned performance.
    // 
    // - Capacity >= 4 GiB: 0 to min(1,000 IOPS/GiB × Capacity - Baseline IOPS, 50,000).
    // 
    // Baseline IOPS = max(min(1,800 + 50 × Capacity, 50,000), 3,000).
    // 
    // > This parameter is available only for ESSD AutoPL disks (`cloud_auto`). For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    shared_ptr<int64_t> provisionedIops_ {};
    // The ID of the region in which to create the disk. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the disk belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The capacity of the disk, in GiB. You must specify a value for this parameter. Value range:
    // 
    // - `cloud`: 5 to 2,000
    // 
    // - `cloud_efficiency`: 20 to 32,768
    // 
    // - `cloud_ssd`: 20 to 32,768
    // 
    // - `PerformanceLevel`
    // 
    //   - PL0: 1 to 65,536
    // 
    //   - PL1: 20 to 65,536
    // 
    //   - PL2: 461 to 65,536
    // 
    //   - PL3: 1,261 to 65,536
    // 
    // - `cloud_auto`: 1 to 65,536
    // 
    // - `cloud_essd_entry`: 10 to 32,768
    // 
    // - `cloud_regional_disk_auto`: 10 to 65,536
    // 
    // - `elastic_ephemeral_disk_standard`: 64 to 8,192
    // 
    // - `elastic_ephemeral_disk_premium`: 64 to 8,192
    // 
    // If you specify `SnapshotId`, the following limits apply to `SnapshotId` and `Size`:
    // 
    // - If the snapshot capacity is greater than the specified `Size`, the actual disk size is the snapshot capacity.
    // 
    // - If the snapshot capacity is smaller than the specified `Size`, the actual disk size is the specified `Size`.
    shared_ptr<int32_t> size_ {};
    // The ID of the snapshot used to create the disk. Snapshots created on or before July 15, 2013 cannot be used to create disks.
    // 
    // The `SnapshotId` and `Size` parameters have the following limits:
    // 
    // - If the snapshot capacity is greater than the specified `Size`, the actual disk size is the snapshot capacity.
    // 
    // - If the snapshot capacity is smaller than the specified `Size`, the actual disk size is the specified `Size`.
    // 
    // - You cannot use snapshots to create Elastic Ephemeral Disks.
    shared_ptr<string> snapshotId_ {};
    // The ID of the dedicated block storage cluster. If you need to create a disk in a specific dedicated block storage cluster, specify this parameter.
    // 
    // > You can specify either storage set parameters (`StorageSetId` and `StorageSetPartitionNumber`) or the dedicated block storage cluster parameter (`StorageClusterId`), but not both. The request fails if you specify parameters for both.
    shared_ptr<string> storageClusterId_ {};
    // The ID of the storage set.
    // 
    // > You can specify either storage set parameters (`StorageSetId` and `StorageSetPartitionNumber`) or the dedicated block storage cluster parameter (`StorageClusterId`), but not both. The request fails if you specify parameters for both.
    shared_ptr<string> storageSetId_ {};
    // The number of partitions in the storage set. The value must be greater than or equal to 2 and cannot exceed the quota returned by the [DescribeAccountAttributes](https://help.aliyun.com/document_detail/73772.html) operation.
    // 
    // Default value: 2.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // A list of tags for the disk.
    shared_ptr<vector<CreateDiskRequest::Tag>> tag_ {};
    // The ID of the zone in which to create the pay-as-you-go disk.
    // 
    // - If you do not set `InstanceId`, this parameter is required.
    // 
    // - You cannot specify both `ZoneId` and `InstanceId`.
    // 
    // > ESSD zone-redundant disks (`cloud_regional_disk_auto`) do not require a zone ID.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
