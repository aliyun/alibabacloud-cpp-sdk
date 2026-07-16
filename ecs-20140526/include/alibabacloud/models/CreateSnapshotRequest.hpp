// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNAPSHOTREQUEST_HPP_
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
  class CreateSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_TO_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_TO_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(InstantAccess, instantAccess_);
      DARABONBA_PTR_FROM_JSON(InstantAccessRetentionDays, instantAccessRetentionDays_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
      DARABONBA_PTR_FROM_JSON(StorageLocationArn, storageLocationArn_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateSnapshotRequest() = default ;
    CreateSnapshotRequest(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest(CreateSnapshotRequest &&) = default ;
    CreateSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnapshotRequest() = default ;
    CreateSnapshotRequest& operator=(const CreateSnapshotRequest &) = default ;
    CreateSnapshotRequest& operator=(CreateSnapshotRequest &&) = default ;
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
      // The tag key of the snapshot. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. The tag key cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value of the snapshot. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->diskId_ == nullptr && this->instantAccess_ == nullptr && this->instantAccessRetentionDays_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->retentionDays_ == nullptr && this->snapshotName_ == nullptr && this->storageLocationArn_ == nullptr && this->tag_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateSnapshotRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSnapshotRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateSnapshotRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline CreateSnapshotRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // instantAccess Field Functions 
    bool hasInstantAccess() const { return this->instantAccess_ != nullptr;};
    void deleteInstantAccess() { this->instantAccess_ = nullptr;};
    inline bool getInstantAccess() const { DARABONBA_PTR_GET_DEFAULT(instantAccess_, false) };
    inline CreateSnapshotRequest& setInstantAccess(bool instantAccess) { DARABONBA_PTR_SET_VALUE(instantAccess_, instantAccess) };


    // instantAccessRetentionDays Field Functions 
    bool hasInstantAccessRetentionDays() const { return this->instantAccessRetentionDays_ != nullptr;};
    void deleteInstantAccessRetentionDays() { this->instantAccessRetentionDays_ = nullptr;};
    inline int32_t getInstantAccessRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(instantAccessRetentionDays_, 0) };
    inline CreateSnapshotRequest& setInstantAccessRetentionDays(int32_t instantAccessRetentionDays) { DARABONBA_PTR_SET_VALUE(instantAccessRetentionDays_, instantAccessRetentionDays) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateSnapshotRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSnapshotRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateSnapshotRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSnapshotRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSnapshotRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CreateSnapshotRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // snapshotName Field Functions 
    bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
    void deleteSnapshotName() { this->snapshotName_ = nullptr;};
    inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
    inline CreateSnapshotRequest& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


    // storageLocationArn Field Functions 
    bool hasStorageLocationArn() const { return this->storageLocationArn_ != nullptr;};
    void deleteStorageLocationArn() { this->storageLocationArn_ = nullptr;};
    inline string getStorageLocationArn() const { DARABONBA_PTR_GET_DEFAULT(storageLocationArn_, "") };
    inline CreateSnapshotRequest& setStorageLocationArn(string storageLocationArn) { DARABONBA_PTR_SET_VALUE(storageLocationArn_, storageLocationArn) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateSnapshotRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateSnapshotRequest::Tag>) };
    inline vector<CreateSnapshotRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateSnapshotRequest::Tag>) };
    inline CreateSnapshotRequest& setTag(const vector<CreateSnapshotRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateSnapshotRequest& setTag(vector<CreateSnapshotRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The snapshot type. Valid values:
    // 
    // - Standard: standard snapshot.
    // - Flash: local snapshot.
    // 
    // > This parameter will be deprecated. Standard snapshots of enterprise SSDs have been upgraded to [instant access by default](https://help.aliyun.com/document_detail/193667.html). No additional configuration or fees are required. This applies to enterprise SSDs, ESSD AutoPL disks, ESSD Entry disks, and regional enterprise SSDs. Standard snapshots of standard SSDs are also active by default.
    shared_ptr<string> category_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the snapshot. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    // 
    // Default value: null.
    shared_ptr<string> description_ {};
    // The disk ID.
    // 
    // This parameter is required.
    shared_ptr<string> diskId_ {};
    // Specifies whether to enable the snapshot instant access feature. Valid values:
    // - true: enables the feature. Only enterprise SSDs support this feature.
    // - false: shutdown. A standard snapshot is created.
    // 
    // Default value: false.
    // 
    // > This parameter is deprecated. Standard snapshots of enterprise SSDs have been upgraded to [instant access by default](https://help.aliyun.com/document_detail/193667.html). No additional configuration or fees are required. This applies to enterprise SSDs, ESSD AutoPL disks, ESSD Entry disks, and regional enterprise SSDs. Standard snapshots of standard SSDs are also active by default.
    shared_ptr<bool> instantAccess_ {};
    // Settings for the retention period of the snapshot instant access feature. After the retention period expires, the snapshot is subject to automatic release. This parameter takes effect only when `InstantAccess=true`. Unit: days. Valid values: 1 to 65535.
    // 
    // Default value: the same as the value of the `RetentionDays` parameter.
    // 
    // > This parameter is deprecated. Standard snapshots of enterprise SSDs have been upgraded to [instant access by default](https://help.aliyun.com/document_detail/193667.html). No additional configuration or fees are required. This applies to enterprise SSDs, ESSD AutoPL disks, ESSD Entry disks, and regional enterprise SSDs. Standard snapshots of standard SSDs are also active by default.
    shared_ptr<int32_t> instantAccessRetentionDays_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the resource group to which the snapshot belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Settings for the retention period of the snapshot. Unit: days. Valid values: 1 to 65536. The snapshot is subject to automatic release when the retention period expires.
    // 
    // Default value: null, which indicates that the snapshot is not subject to automatic release.
    shared_ptr<int32_t> retentionDays_ {};
    // The name of the snapshot. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. The name can contain Unicode characters under the letter category (including letters in English and Chinese), ASCII digits (0-9), colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // > The name cannot start with `auto` to avoid conflicts with the names of automatic snapshots.
    shared_ptr<string> snapshotName_ {};
    // > This parameter is not publicly available.
    shared_ptr<string> storageLocationArn_ {};
    // The tags.
    shared_ptr<vector<CreateSnapshotRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
