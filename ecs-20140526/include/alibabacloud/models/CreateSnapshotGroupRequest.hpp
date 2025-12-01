// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSnapshotGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateSnapshotGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(ExcludeDiskId, excludeDiskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(ExcludeDiskId, excludeDiskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateSnapshotGroupRequest() = default ;
    CreateSnapshotGroupRequest(const CreateSnapshotGroupRequest &) = default ;
    CreateSnapshotGroupRequest(CreateSnapshotGroupRequest &&) = default ;
    CreateSnapshotGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotGroupRequest() = default ;
    CreateSnapshotGroupRequest& operator=(const CreateSnapshotGroupRequest &) = default ;
    CreateSnapshotGroupRequest& operator=(CreateSnapshotGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->description_ == nullptr && return this->diskId_ == nullptr && return this->excludeDiskId_ == nullptr && return this->instanceId_ == nullptr && return this->instantAccess_ == nullptr
        && return this->instantAccessRetentionDays_ == nullptr && return this->name_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->storageLocationArn_ == nullptr && return this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSnapshotGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSnapshotGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline const vector<string> & diskId() const { DARABONBA_PTR_GET_CONST(diskId_, vector<string>) };
    inline vector<string> diskId() { DARABONBA_PTR_GET(diskId_, vector<string>) };
    inline CreateSnapshotGroupRequest& setDiskId(const vector<string> & diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };
    inline CreateSnapshotGroupRequest& setDiskId(vector<string> && diskId) { DARABONBA_PTR_SET_RVALUE(diskId_, diskId) };


    // excludeDiskId Field Functions 
    bool hasExcludeDiskId() const { return this->excludeDiskId_ != nullptr;};
    void deleteExcludeDiskId() { this->excludeDiskId_ = nullptr;};
    inline const vector<string> & excludeDiskId() const { DARABONBA_PTR_GET_CONST(excludeDiskId_, vector<string>) };
    inline vector<string> excludeDiskId() { DARABONBA_PTR_GET(excludeDiskId_, vector<string>) };
    inline CreateSnapshotGroupRequest& setExcludeDiskId(const vector<string> & excludeDiskId) { DARABONBA_PTR_SET_VALUE(excludeDiskId_, excludeDiskId) };
    inline CreateSnapshotGroupRequest& setExcludeDiskId(vector<string> && excludeDiskId) { DARABONBA_PTR_SET_RVALUE(excludeDiskId_, excludeDiskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSnapshotGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool instantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline CreateSnapshotGroupRequest& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // instantAccessRetentionDays Field Functions 
    bool hasInstantAccessRetentionDays() const { return this->instantAccessRetentionDays_ != nullptr;};
    void deleteInstantAccessRetentionDays() { this->instantAccessRetentionDays_ = nullptr;};
    inline int32_t instantAccessRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(instantAccessRetentionDays_, 0) };
    inline CreateSnapshotGroupRequest& setInstantAccessRetentionDays(int32_t instantAccessRetentionDays) { DARABONBA_PTR_SET_VALUE(instantAccessRetentionDays_, instantAccessRetentionDays) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSnapshotGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSnapshotGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSnapshotGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSnapshotGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSnapshotGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSnapshotGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSnapshotGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // storageLocationArn Field Functions 
    bool hasStorageLocationArn() const { return this->storageLocationArn_ != nullptr;};
    void deleteStorageLocationArn() { this->storageLocationArn_ = nullptr;};
    inline string storageLocationArn() const { DARABONBA_PTR_GET_DEFAULT(storageLocationArn_, "") };
    inline CreateSnapshotGroupRequest& setStorageLocationArn(string storageLocationArn) { DARABONBA_PTR_SET_VALUE(storageLocationArn_, storageLocationArn) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateSnapshotGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateSnapshotGroupRequestTag>) };
    inline vector<CreateSnapshotGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateSnapshotGroupRequestTag>) };
    inline CreateSnapshotGroupRequest& setTag(const vector<CreateSnapshotGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateSnapshotGroupRequest& setTag(vector<CreateSnapshotGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the snapshot-consistent group. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The IDs of the cloud disks for which you want to create a snapshot-consistent group. You can specify the IDs of cloud disks that are attached to multiple instances within the same zone. Valid values of N: 1 to 16. A snapshot-consistent group can contain snapshots of up to 16 cloud disks whose total disk size does not exceed 32 TiB.
    // 
    // Take note of the following:
    // 
    // *   You cannot specify both the DiskId.N and `ExcludeDiskId.N` parameters in the same request.
    // *   If you specify `InstanceId`, you can specify the IDs of cloud disks that are attached only to the specified instance. You cannot specify the IDs of cloud disks that are attached to multiple instances.
    std::shared_ptr<vector<string>> diskId_ = nullptr;
    // The IDs of the cloud disks for which you do not want to create snapshots. After you specify the IDs of cloud disks, the snapshot-consistent group that you create does not contain the snapshots of the specified cloud disks. Valid values of N: 1 to 16.
    // 
    // This parameter is empty by default, which indicates that snapshots are created for all disks of the instance.
    // 
    // >  This parameter cannot be set at the same time as the `DiskId.N`.
    std::shared_ptr<vector<string>> excludeDiskId_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Specifies whether to enable the instant access feature. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // >  This parameter is no longer used. By default, new standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
    std::shared_ptr<bool> instantAccess_ = nullptr;
    // The number of days for which the instant access feature is available. Unit: days. Valid values: 1 to 65535.
    // 
    // This parameter takes effect only when `InstantAccess` is set to true. The instant access feature is automatically disabled when the specified duration ends.
    // 
    // This parameter is left empty by default, which indicates that the instant access feature is automatically disabled when the instant access snapshots are released.
    // 
    // >  This parameter is no longer used. By default, new standard snapshots of ESSDs are upgraded to instant access snapshots free of charge without the need for additional configurations. For more information, see [Use the instant access feature](https://help.aliyun.com/document_detail/193667.html).
    std::shared_ptr<int32_t> instantAccessRetentionDays_ = nullptr;
    // The name of the snapshot-consistent group. The name must be 2 to 128 characters in length. The name can contain letters, digits, periods (.), underscores (_), hyphens (-), and colons (:). It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent list of regions.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the snapshot-consistent group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // > This parameter is unavailable for public use.
    std::shared_ptr<string> storageLocationArn_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<CreateSnapshotGroupRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
