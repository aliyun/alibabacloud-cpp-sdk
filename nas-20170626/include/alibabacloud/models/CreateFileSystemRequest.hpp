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
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
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
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
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
      // The tag key. Limits:
      // - The tag key cannot be empty or an empty string.
      // - The tag key can be up to 128 characters in length.
      // - The tag key cannot start with `aliyun` or `acs:`.
      // - The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. Limits:
      // - The tag value cannot be empty or an empty string.
      // - The tag value can be up to 128 characters in length.
      // - The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->capacity_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr && this->dryRun_ == nullptr
        && this->duration_ == nullptr && this->encryptType_ == nullptr && this->fileSystemType_ == nullptr && this->hpnZone_ == nullptr && this->kmsKeyId_ == nullptr
        && this->protocolType_ == nullptr && this->redundancyType_ == nullptr && this->redundancyVSwitchIds_ == nullptr && this->resourceGroupId_ == nullptr && this->snapshotId_ == nullptr
        && this->storageType_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
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


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline CreateFileSystemRequest& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


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
    // The maximum throughput of the file system. Unit: MB/s. For available values, refer to the specifications on the buy page.
    // <props="china">
    // [Buy page for pay-as-you-go Parallel file systems](https://common-buy.aliyun.com/?commodityCode=nas_cpfs_post#/buy)
    // 
    // <props="intl">
    // [Buy page for pay-as-you-go Parallel file systems](https://common-buy-intl.alibabacloud.com/?spm=5176.nas_overview.0.0.7ea01dbft0dTui&commodityCode=nas_cpfspost_public_intl#/buy)
    shared_ptr<int64_t> bandwidth_ {};
    // The capacity of the file system. Unit: GiB. This parameter is required and valid only when FileSystemType is set to extreme, cpfs, or cpfsse. For available values, refer to the specifications on the buy page:
    // <props="china">
    // - [Buy page for pay-as-you-go Extreme NAS file systems](https://common-buy.aliyun.com/?commodityCode=nas_extreme_post#/buy)
    // - [Buy page for pay-as-you-go Parallel file systems](https://common-buy.aliyun.com/?commodityCode=nas_cpfs_post#/buy)
    // 
    // <props="intl">
    // - [Buy page for pay-as-you-go Extreme NAS file systems](https://common-buy-intl.alibabacloud.com/?commodityCode=nas_extpost_public_intl#/buy)
    // - [Buy page for pay-as-you-go Parallel file systems](https://common-buy-intl.alibabacloud.com/?spm=5176.nas_overview.0.0.7ea01dbft0dTui&commodityCode=nas_cpfspost_public_intl#/buy)
    shared_ptr<int64_t> capacity_ {};
    // The billing method. Valid values:
    // - PayAsYouGo: pay-as-you-go. This is the default value.
    // - Subscription: subscription.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The client token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    // > If you do not specify this parameter, the system automatically uses the RequestId of the API request as the client token. The RequestId of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the file system. Limits:
    // - The description must be 2 to 128 characters in length.
    // - The description must start with a letter and cannot start with `http://` or `https://`.
    // - The description can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> description_ {};
    // Specifies whether to perform a dry run on the creation request. A dry run helps you check parameter validity and inventory, but does not actually create the instance or incur fees. Valid values:
    // - true: performs a dry run without creating the instance. The system checks whether required parameters are specified, the request format, business limits, and NAS inventory. If the request fails the dry run, the corresponding error is returned. If the request passes the dry run, the HTTP status code 200 is returned and FileSystemId is empty.
    // - false: performs a normal request and creates the instance directly after the request passes the check. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The subscription duration. Unit: months. This parameter is required and valid only when ChargeType is set to Subscription. When a subscription instance expires and is not renewed, the instance is automatically released.
    shared_ptr<int32_t> duration_ {};
    // Specifies whether to encrypt the file system. Key Management Service (KMS) is used to manage keys and encrypt data at rest in the file system. You do not need to decrypt the data when you read or write the encrypted data. Valid values:
    // - 0: not encrypted. This is the default value.
    // - 1: NAS-managed key. NAS-managed keys are supported when FileSystemType is set to standard or extreme.
    // - 2: custom key. Custom keys are supported when FileSystemType is set to standard or extreme.
    // > - Extreme NAS file systems: The custom key (KMS) feature is supported in all regions except China East 1 Finance.
    // > - General-purpose NAS file systems: The custom key (KMS) feature is supported in all regions.
    shared_ptr<int32_t> encryptType_ {};
    // The file system type. Valid values:
    // - standard: General-purpose NAS file system. This is the default value.
    // - extreme: Extreme NAS file system.
    // - cpfs: Cloud Parallel File Storage (locally redundant version).
    // - cpfsse: Cloud Parallel File Storage SE (zone-redundant version).
    shared_ptr<string> fileSystemType_ {};
    // The cluster ID in the high-performance network zone. This parameter is required when FileSystemType is set to bmcpfs and cannot be modified after creation. You can call the DescribeSpecifications operation to query available values. Example: B1.
    shared_ptr<string> hpnZone_ {};
    // The ID of the KMS key. This parameter is required only when EncryptType is set to 2.
    shared_ptr<string> kmsKeyId_ {};
    // The file transfer protocol type. Valid values:
    // - When FileSystemType is set to standard: NFS or SMB.
    // - When FileSystemType is set to extreme: NFS.
    // - When FileSystemType is set to cpfs: cpfs.
    // - When FileSystemType is set to cpfsse: cpfs.
    // 
    // This parameter is required.
    shared_ptr<string> protocolType_ {};
    // The storage redundancy type. This parameter takes effect only for CPFS with ZRS. Valid value: ZRS.
    shared_ptr<string> redundancyType_ {};
    // The zone-redundant vSwitch IDs. When RedundancyType is set to ZRS, this parameter is required. You must specify three vSwitch IDs, and the vSwitches must reside in three different zones.
    shared_ptr<vector<string>> redundancyVSwitchIds_ {};
    // The resource group ID. You can view the resource group ID in the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups?).
    shared_ptr<string> resourceGroupId_ {};
    // The snapshot ID. This parameter is supported only for Extreme NAS file systems with the Premium storage type.
    // > When you create a file system from a snapshot, the version of the created file system is the same as the version of the source file system of the snapshot. For example, if the source file system of the snapshot is of version 1 and you want to create a file system of version 2, you can first create File System A from the snapshot, and then create File System B that meets the version 2 configurations. After you copy the data from File System A to File System B, migrate your workloads to File System B.
    shared_ptr<string> snapshotId_ {};
    // The storage type. Valid values:
    // - If FileSystemType is set to standard: Performance (performance type), Capacity (capacity type), Premium (premium type), and Agentic (AgenticFS).
    // - If FileSystemType is set to extreme: standard (standard type) and advance (advanced type).
    // - If FileSystemType is set to cpfs: advance_100 (100 MB/s/TiB baseline), advance_200 (200 MB/s/TiB baseline), and economic (economy type).
    // - If FileSystemType is set to cpfsse: advance_100 (100 MB/s/TiB baseline).
    // 
    // This parameter is required.
    shared_ptr<string> storageType_ {};
    // The tags. The array length is 1 to 20. If the array contains multiple tag objects, the tag keys must be unique.
    shared_ptr<vector<CreateFileSystemRequest::Tag>> tag_ {};
    // The vSwitch ID.
    // - When FileSystemType is set to cpfs, this parameter is required.
    // - When FileSystemType is not set to cpfs, this parameter is reserved and does not take effect. You do not need to configure this parameter.
    shared_ptr<string> vSwitchId_ {};
    // The virtual private cloud (VPC) ID.
    // - When FileSystemType is set to cpfs or cpfsse, this parameter is required.
    // - When FileSystemType is set to standard or extreme, this parameter is reserved and does not take effect. You do not need to configure this parameter.
    shared_ptr<string> vpcId_ {};
    // The zone ID. A zone is a physical area with independent power grids and networks within a region. When FileSystemType is set to standard, this parameter is optional. By default, an active zone that meets the conditional requirements is randomly selected based on the ProtocolType and StorageType settings. When FileSystemType is set to extreme or cpfs, this parameter is required.
    // > - File systems and Elastic Computing Service (ECS) servers in different zones of the same region can communicate with each other.
    // > - Deploy the file system and the ECS server in the same zone to avoid cross-zone latency.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
