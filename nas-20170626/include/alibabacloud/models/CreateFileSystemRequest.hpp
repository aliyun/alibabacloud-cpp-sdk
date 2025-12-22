// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFILESYSTEMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFileSystemRequestTag.hpp>
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
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->capacity_ == nullptr && return this->chargeType_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->dryRun_ == nullptr
        && return this->duration_ == nullptr && return this->encryptType_ == nullptr && return this->fileSystemType_ == nullptr && return this->kmsKeyId_ == nullptr && return this->protocolType_ == nullptr
        && return this->redundancyType_ == nullptr && return this->redundancyVSwitchIds_ == nullptr && return this->resourceGroupId_ == nullptr && return this->snapshotId_ == nullptr && return this->storageType_ == nullptr
        && return this->tag_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateFileSystemRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline int64_t capacity() const { DARABONBA_PTR_GET_DEFAULT(capacity_, 0L) };
    inline CreateFileSystemRequest& setCapacity(int64_t capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateFileSystemRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateFileSystemRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFileSystemRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateFileSystemRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateFileSystemRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline int32_t encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
    inline CreateFileSystemRequest& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // fileSystemType Field Functions 
    bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
    void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
    inline string fileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
    inline CreateFileSystemRequest& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline CreateFileSystemRequest& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateFileSystemRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // redundancyType Field Functions 
    bool hasRedundancyType() const { return this->redundancyType_ != nullptr;};
    void deleteRedundancyType() { this->redundancyType_ = nullptr;};
    inline string redundancyType() const { DARABONBA_PTR_GET_DEFAULT(redundancyType_, "") };
    inline CreateFileSystemRequest& setRedundancyType(string redundancyType) { DARABONBA_PTR_SET_VALUE(redundancyType_, redundancyType) };


    // redundancyVSwitchIds Field Functions 
    bool hasRedundancyVSwitchIds() const { return this->redundancyVSwitchIds_ != nullptr;};
    void deleteRedundancyVSwitchIds() { this->redundancyVSwitchIds_ = nullptr;};
    inline const vector<string> & redundancyVSwitchIds() const { DARABONBA_PTR_GET_CONST(redundancyVSwitchIds_, vector<string>) };
    inline vector<string> redundancyVSwitchIds() { DARABONBA_PTR_GET(redundancyVSwitchIds_, vector<string>) };
    inline CreateFileSystemRequest& setRedundancyVSwitchIds(const vector<string> & redundancyVSwitchIds) { DARABONBA_PTR_SET_VALUE(redundancyVSwitchIds_, redundancyVSwitchIds) };
    inline CreateFileSystemRequest& setRedundancyVSwitchIds(vector<string> && redundancyVSwitchIds) { DARABONBA_PTR_SET_RVALUE(redundancyVSwitchIds_, redundancyVSwitchIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateFileSystemRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateFileSystemRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateFileSystemRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFileSystemRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFileSystemRequestTag>) };
    inline vector<CreateFileSystemRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateFileSystemRequestTag>) };
    inline CreateFileSystemRequest& setTag(const vector<CreateFileSystemRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFileSystemRequest& setTag(vector<CreateFileSystemRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateFileSystemRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateFileSystemRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateFileSystemRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The maximum throughput of the file system.
    // 
    // Unit: MB/s.
    // 
    // Specify a value based on the specifications on the buy page.
    // 
    // [CPFS file system (Pay-as-you-go)](https://common-buy-intl.alibabacloud.com/?spm=5176.nas_overview.0.0.7ea01dbft0dTui\\&commodityCode=nas_cpfspost_public_intl#/buy)
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // Specify the capacity of the file system. Unit: GiB. Specify the Capacity parameter when the FileSystemType parameter is set to extreme or cpfs.
    // 
    // Specify a value based on the specifications on the following buy page:
    // 
    // *   [Extreme NAS file system (Pay-as-you-go)](https://common-buy-intl.alibabacloud.com/?commodityCode=nas_extpost_public_intl#/buy)
    // *   [CPFS file system (Pay-as-you-go)](https://common-buy-intl.alibabacloud.com/?spm=5176.nas_overview.0.0.7ea01dbft0dTui\\&commodityCode=nas_cpfspost_public_intl#/buy)
    std::shared_ptr<int64_t> capacity_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PayAsYouGo (default): pay-as-you-go
    // *   Subscription
    std::shared_ptr<string> chargeType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/25693.html)
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the file system.
    // 
    // Limits:
    // 
    // *   The description must be 2 to 128 characters in length.
    // *   The description must start with a letter and cannot start with `http://` or `https://`.
    // *   The description can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform a dry run.
    // 
    // During the dry run, the system checks whether the request parameters are valid and whether the requested resources are available. During the dry run, no file system is created and no fee is incurred.
    // 
    // Valid values:
    // 
    // *   true: performs a dry run. The system checks the required parameters, request syntax, limits, and available NAS resources. If the request fails the dry run, an error message is returned. If the request passes the precheck, the HTTP status code 200 is returned. No value is returned for the FileSystemId parameter.
    // *   false (default): performs a dry run and sends the request. If the request passes the dry run, a file system is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The subscription duration.
    // 
    // This parameter is valid and required only if the ChargeType parameter is set to Subscription. Unit: months.
    // 
    // If you do not renew a subscription file system when the file system expires, the file system is automatically released.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // Specifies whether to encrypt data in the file system.
    // 
    // You can use the keys that are managed by Key Management Service (KMS) to encrypt data in a file system. When you read and write the encrypted data, the data is automatically decrypted.
    // 
    // Valid values:
    // 
    // *   0 (default): The data in the file system is not encrypted.
    // *   1: A NAS-managed key is used to encrypt the data in the file system. This value is valid only if the FileSystemType parameter is set to standard or extreme.
    // *   2: A KMS-managed key is used to encrypt the data in the file system. This value is valid only if the FileSystemType parameter is set to standard or extreme.
    // 
    // >  *   Extreme NAS file systems: All regions except China East 1 Finance support KMS-managed keys.
    // > *   General-purpose NAS file systems: All regions support KMS-managed keys.
    std::shared_ptr<int32_t> encryptType_ = nullptr;
    // The type of the file system.
    // 
    // Valid values:
    // 
    // *   standard: General-purpose Apsara File Storage NAS (NAS) file system
    // *   extreme: Extreme NAS file system.
    // *   cpfs: CPFS file system
    std::shared_ptr<string> fileSystemType_ = nullptr;
    // The ID of the KMS key.
    // 
    // This parameter is required only if the EncryptType parameter is set to 2.
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    // Specify the protocol type.
    // 
    // *   If the FileSystemType parameter is set to standard, set the ProtocolType parameter to NFS or SMB.
    // *   If the FileSystemType parameter is set to extreme, set the ProtocolType parameter to NFS.
    // *   If the FileSystemType parameter is set to cpfs, set the ProtocolType parameter to cpfs.
    // 
    // This parameter is required.
    std::shared_ptr<string> protocolType_ = nullptr;
    std::shared_ptr<string> redundancyType_ = nullptr;
    std::shared_ptr<vector<string>> redundancyVSwitchIds_ = nullptr;
    // The resource group ID.
    // 
    // You can log on to the [Resource Management console](https://resourcemanager.console.aliyun.com/resource-groups?) to view resource group IDs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The snapshot ID.
    // 
    // This parameter is available only for advanced Extreme NAS file systems.
    // 
    // >  You can create a file system from a snapshot. In this case, the version of the file system is the same as that of the source file system. For example, the source file system of the snapshot uses version 1. To create a file system of version 2, you can create File System A from the snapshot and create File System B of version 2. You can then copy the data and migrate your business from File System A to File System B.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The storage type.
    // 
    // *   If the FileSystemType parameter is set to standard, set the StorageType parameter to Performance, Capacity, or Premium.
    // *   If the FileSystemType parameter is set to extreme, set the StorageType parameter to standard or advance.
    // *   If the FileSystemType parameter is set to cpfs, set the StorageType parameter to advance_100 (100 MB/s/TiB baseline) or advance_200 (200 MB/s/TiB baseline).
    // 
    // This parameter is required.
    std::shared_ptr<string> storageType_ = nullptr;
    // An array of tags.
    // 
    // You can specify up to 20 tags. If you specify multiple tags, each tag key must be unique.
    std::shared_ptr<vector<CreateFileSystemRequestTag>> tag_ = nullptr;
    // The vSwitch ID of the cluster.
    // 
    // *   This parameter is required only if you set the FileSystemType parameter to cpfs.
    // *   This parameter is reserved and not required if you set the FileSystemType parameter to standard or extreme.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    // 
    // *   This parameter is required only if you set the FileSystemType parameter to cpfs.
    // *   This parameter is reserved and not required if you set the FileSystemType parameter to standard or extreme.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone.
    // 
    // Each region has multiple isolated locations known as zones. Each zone has its own independent power supply and network.
    // 
    // This parameter is not required if the FileSystemType parameter is set to standard. By default, a random zone is selected based on the protocol type and storage type.
    // 
    // This parameter is required if the FileSystemType parameter is set to extreme or cpfs.
    // 
    // > 
    // 
    // *   An Elastic Compute Service (ECS) instance and a NAS file system that reside in different zones of the same region can access each other.
    // 
    // *   We recommend that you select the zone where the ECS instance resides. This prevents cross-zone latency between the file system and the ECS instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
