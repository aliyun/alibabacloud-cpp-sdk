// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateFileSystemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RedundancyType, redundancyType_);
      DARABONBA_PTR_TO_JSON(RedundancyVSwitchIds, redundancyVSwitchIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFileSystemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RedundancyType, redundancyType_);
      DARABONBA_PTR_FROM_JSON(RedundancyVSwitchIds, redundancyVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateFileSystemRequest() = default ;
    CreateFileSystemRequest(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest(CreateFileSystemRequest &&) = default ;
    CreateFileSystemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFileSystemRequest() = default ;
    CreateFileSystemRequest& operator=(const CreateFileSystemRequest &) = default ;
    CreateFileSystemRequest& operator=(CreateFileSystemRequest &&) = default ;
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
      // The tag key.
      // 
      // Limits:
      // 
      // - The tag key cannot be empty.
      // - The tag key can be up to 128 characters in length.
      // - The tag key cannot start with `aliyun` or `acs:`.
      // - The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // Limits:
      // - The tag value cannot be empty.
      // - The tag value can be up to 128 characters in length.
      // - The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr
        && this->duration_ == nullptr && this->encryptType_ == nullptr && this->fileSystemType_ == nullptr && this->kmsKeyId_ == nullptr && this->protocolType_ == nullptr
        && this->redundancyType_ == nullptr && this->redundancyVSwitchIds_ == nullptr && this->resourceGroupId_ == nullptr && this->snapshotId_ == nullptr && this->storageType_ == nullptr
        && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateFileSystemRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t getCapacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline CreateFileSystemRequest& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateFileSystemRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFileSystemRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateFileSystemRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateFileSystemRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline CreateFileSystemRequest& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline CreateFileSystemRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateFileSystemRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateFileSystemRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // redundancyType Field Functions 
    bool hasRedundancyType() const { return this->redundancyType_ != nullptr;};
    void deleteRedundancyType() { this->redundancyType_ = nullptr;};
    inline string getRedundancyType() const { DARABONBA_PTR_GET_DEFAULT(redundancyType_, "") };
    inline CreateFileSystemRequest& setRedundancyType(string redundancyType) { DARABONBA_PTR_SET_VALUE(redundancyType_, redundancyType) };


    // redundancyVSwitchIds Field Functions 
    bool hasRedundancyVSwitchIds() const { return this->redundancyVSwitchIds_ != nullptr;};
    void deleteRedundancyVSwitchIds() { this->redundancyVSwitchIds_ = nullptr;};
    inline const vector<string> & getRedundancyVSwitchIds() const { DARABONBA_PTR_GET_CONST(redundancyVSwitchIds_, vector<string>) };
    inline vector<string> getRedundancyVSwitchIds() { DARABONBA_PTR_GET(redundancyVSwitchIds_, vector<string>) };
    inline CreateFileSystemRequest& setRedundancyVSwitchIds(const vector<string> & redundancyVSwitchIds) { DARABONBA_PTR_SET_VALUE(redundancyVSwitchIds_, redundancyVSwitchIds) };
    inline CreateFileSystemRequest& setRedundancyVSwitchIds(vector<string> && redundancyVSwitchIds) { DARABONBA_PTR_SET_RVALUE(redundancyVSwitchIds_, redundancyVSwitchIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateFileSystemRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateFileSystemRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateFileSystemRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFileSystemRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFileSystemRequest::Tag>) };
    inline vector<CreateFileSystemRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateFileSystemRequest::Tag>) };
    inline CreateFileSystemRequest& setTag(const vector<CreateFileSystemRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFileSystemRequest& setTag(vector<CreateFileSystemRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateFileSystemRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateFileSystemRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateFileSystemRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The maximum throughput of the file system.
    // 
    // Unit: MB/s.
    // 
    // For available specification values, see the actual specifications on the buy page.
    // 
    // <props="china">
    // 
    // [Parallel file system CPFS pay-as-you-go buy page](https://common-buy.aliyun.com/?commodityCode=nas_cpfs_post#/buy)
    // 
    // 
    // 
    // <props="intl">
    // 
    // [Parallel file system CPFS pay-as-you-go buy page](https://common-buy-intl.alibabacloud.com/?spm=5176.nas_overview.0.0.7ea01dbft0dTui&commodityCode=nas_cpfspost_public_intl#/buy)
    shared_ptr<int64_t> bandwidth_ {};
    // The capacity of the file system. Unit: GiB.
    // This parameter is required and takes effect only when FileSystemType is set to extreme, cpfs, or cpfsse.
    // 
    // For available values, see the actual specifications on the buy page:
    // 
    // <props="china">
    // 
    // -  [Extreme NAS pay-as-you-go buy page](https://common-buy.aliyun.com/?commodityCode=nas_extreme_post#/buy)
    // - [Parallel file system CPFS pay-as-you-go buy page](https://common-buy.aliyun.com/?commodityCode=nas_cpfs_post#/buy)
    // 
    // 
    // 
    // <props="intl">
    // 
    // - [Extreme NAS pay-as-you-go buy page](https://common-buy-intl.alibabacloud.com/?commodityCode=nas_extpost_public_intl#/buy)
    // 
    // - [Parallel file system CPFS pay-as-you-go buy page](https://common-buy-intl.alibabacloud.com/?spm=5176.nas_overview.0.0.7ea01dbft0dTui&commodityCode=nas_cpfspost_public_intl#/buy)
    shared_ptr<int64_t> capacity_ {};
    // The billing method.
    // 
    // Valid values:
    // 
    // - PayAsYouGo (default): Pay-as-you-go.
    // - Subscription: Subscription.
    shared_ptr<string> chargeType_ {};
    // Ensures the idempotence of the request. Generate a unique parameter value from your client. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // 
    // > If you do not specify this parameter, the system uses the RequestId of the API request as the ClientToken. The RequestId may vary for each API request.
    shared_ptr<string> clientToken_ {};
    // The description of the file system.
    // 
    // Limits:
    // 
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run for this request.
    // 
    // A dry run checks parameter validity and resource availability without actually creating the instance or incurring charges.
    // 
    // Valid values:  
    // - true: Sends a dry run request without creating the instance. The check items include required parameters, request format, service limits, and NAS inventory. If the check fails, the corresponding error is returned. If the check succeeds, HTTP status code 200 is returned, but FileSystemId is empty.  
    // - false (default): Sends a normal request. After the check succeeds, the instance is created.
    shared_ptr<bool> dryRun_ {};
    // The subscription duration.
    // 
    // Unit: months. This parameter is required and takes effect only when ChargeType is set to Subscription.
    // 
    // If a subscription instance is not renewed upon expiration, the instance is automatically released.
    shared_ptr<int32_t> duration_ {};
    // Specifies whether to encrypt the file system.
    // 
    // Uses keys managed by Key Management Service (KMS) to encrypt data stored on the file system. No decryption is required when reading or writing encrypted data.
    // 
    // Valid values:
    // 
    // - 0 (default): Not encrypted.
    // - 1: NAS-managed key. Supported when FileSystemType is set to standard or extreme.
    // - 2: Custom Key (KMS). Supported when FileSystemType is set to standard or extreme.
    // 
    // > - Extreme NAS: The Custom Key (KMS) feature is supported in all regions except China (Hangzhou) Finance Cloud.
    // > - General-purpose NAS: The Custom Key (KMS) feature is supported in all regions.
    shared_ptr<int32_t> encryptType_ {};
    // The type of the file system.
    // 
    // Valid values:
    // - standard (default): General-purpose NAS file system.
    // - extreme: Extreme NAS file system.
    // - cpfs: Cloud Parallel File Storage (CPFS) (locally redundant).
    // - cpfsse: Cloud Parallel File Storage (CPFS) SE (zone-redundant).
    shared_ptr<string> fileSystemType_ {};
    // The KMS key ID.
    // 
    // This parameter is required only when EncryptType is set to 2.
    shared_ptr<string> kmsKeyId_ {};
    // The file transfer protocol type.
    // 
    // - If FileSystemType is set to standard, valid values: NFS and SMB.
    // - If FileSystemType is set to extreme, valid values: NFS.
    // - If FileSystemType is set to cpfs, valid values: cpfs.
    // - If FileSystemType is set to cpfsse, valid values: cpfs.
    // 
    // This parameter is required.
    shared_ptr<string> protocolType_ {};
    // The storage redundancy type. This parameter takes effect only for CPFS SE.
    // Valid values: ZRS.
    shared_ptr<string> redundancyType_ {};
    // The list of zone-redundant vSwitch IDs.
    // If RedundancyType is set to ZRS, this parameter is required. You must specify three vSwitch IDs, each from a different zone.
    shared_ptr<vector<string>> redundancyVSwitchIds_ {};
    // The resource group ID.
    // 
    // You can view resource group IDs in the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups?).
    shared_ptr<string> resourceGroupId_ {};
    // The snapshot ID.
    // 
    // This parameter is supported only for Extreme NAS file systems with the Advanced storage type.
    // > A file system created from a snapshot has the same version as the source file system of the snapshot. For example, if the source file system version is 1 and you want to create a version 2 file system, first create file system A from the snapshot, then create file system B that meets the version 2 configuration. Copy the data from file system A to file system B, and migrate your workloads to file system B after the copy is complete.
    shared_ptr<string> snapshotId_ {};
    // The storage type.
    // 
    // - If FileSystemType is set to standard, valid values: Performance, Capacity, and Premium.
    // - If FileSystemType is set to extreme, valid values: standard and advance.
    // - If FileSystemType is set to cpfs, valid values: advance_100 (100 MB/s/TiB baseline), advance_200 (200 MB/s/TiB baseline), and economic.
    // - If FileSystemType is set to cpfsse, valid values: advance_100 (100 MB/s/TiB baseline).
    // 
    // This parameter is required.
    shared_ptr<string> storageType_ {};
    // The tags.
    // 
    // Array length: 1 to 20. If the array contains multiple tag objects, the tag key (Key) must be unique.
    shared_ptr<vector<CreateFileSystemRequest::Tag>> tag_ {};
    // The vSwitch ID.
    // 
    // - If FileSystemType is set to cpfs, this parameter is required.
    // - If FileSystemType is not set to cpfs, this parameter is reserved and does not take effect. You do not need to configure it.
    shared_ptr<string> vSwitchId_ {};
    // The VPC ID.
    // 
    // - If FileSystemType is set to cpfs or cpfsse, this parameter is required.
    // - If FileSystemType is set to standard or extreme, this parameter is reserved and does not take effect. You do not need to configure it.
    shared_ptr<string> vpcId_ {};
    // The zone ID.
    // 
    // A zone is an independent physical area within a region that has its own power supply and network.
    // 
    // If FileSystemType is set to standard, this parameter is optional. By default, an active zone that matches the conditional ProtocolType and StorageType is randomly selected.
    // 
    // If FileSystemType is set to extreme or cpfs, this parameter is required.
    // 
    // >  - File systems and Elastic Computing Service (ECS) instances in different zones of the same region can communicate with each other.
    // >  - Place the file system and the ECS server in the same zone to avoid cross-zone latency.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
