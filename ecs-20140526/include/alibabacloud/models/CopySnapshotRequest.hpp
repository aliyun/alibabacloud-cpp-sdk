// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CopySnapshotRequestArn.hpp>
#include <alibabacloud/models/CopySnapshotRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CopySnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopySnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationSnapshotDescription, destinationSnapshotDescription_);
      DARABONBA_PTR_TO_JSON(DestinationSnapshotName, destinationSnapshotName_);
      DARABONBA_PTR_TO_JSON(DestinationStorageLocationArn, destinationStorageLocationArn_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CopySnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationSnapshotDescription, destinationSnapshotDescription_);
      DARABONBA_PTR_FROM_JSON(DestinationSnapshotName, destinationSnapshotName_);
      DARABONBA_PTR_FROM_JSON(DestinationStorageLocationArn, destinationStorageLocationArn_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CopySnapshotRequest() = default ;
    CopySnapshotRequest(const CopySnapshotRequest &) = default ;
    CopySnapshotRequest(CopySnapshotRequest &&) = default ;
    CopySnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopySnapshotRequest() = default ;
    CopySnapshotRequest& operator=(const CopySnapshotRequest &) = default ;
    CopySnapshotRequest& operator=(CopySnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->clientToken_ == nullptr && return this->destinationRegionId_ == nullptr && return this->destinationSnapshotDescription_ == nullptr && return this->destinationSnapshotName_ == nullptr && return this->destinationStorageLocationArn_ == nullptr
        && return this->encrypted_ == nullptr && return this->KMSKeyId_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->retentionDays_ == nullptr && return this->snapshotId_ == nullptr && return this->tag_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<CopySnapshotRequestArn> & arn() const { DARABONBA_PTR_GET_CONST(arn_, vector<CopySnapshotRequestArn>) };
    inline vector<CopySnapshotRequestArn> arn() { DARABONBA_PTR_GET(arn_, vector<CopySnapshotRequestArn>) };
    inline CopySnapshotRequest& setArn(const vector<CopySnapshotRequestArn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline CopySnapshotRequest& setArn(vector<CopySnapshotRequestArn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CopySnapshotRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline CopySnapshotRequest& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationSnapshotDescription Field Functions 
    bool hasDestinationSnapshotDescription() const { return this->destinationSnapshotDescription_ != nullptr;};
    void deleteDestinationSnapshotDescription() { this->destinationSnapshotDescription_ = nullptr;};
    inline string destinationSnapshotDescription() const { DARABONBA_PTR_GET_DEFAULT(destinationSnapshotDescription_, "") };
    inline CopySnapshotRequest& setDestinationSnapshotDescription(string destinationSnapshotDescription) { DARABONBA_PTR_SET_VALUE(destinationSnapshotDescription_, destinationSnapshotDescription) };


    // destinationSnapshotName Field Functions 
    bool hasDestinationSnapshotName() const { return this->destinationSnapshotName_ != nullptr;};
    void deleteDestinationSnapshotName() { this->destinationSnapshotName_ = nullptr;};
    inline string destinationSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(destinationSnapshotName_, "") };
    inline CopySnapshotRequest& setDestinationSnapshotName(string destinationSnapshotName) { DARABONBA_PTR_SET_VALUE(destinationSnapshotName_, destinationSnapshotName) };


    // destinationStorageLocationArn Field Functions 
    bool hasDestinationStorageLocationArn() const { return this->destinationStorageLocationArn_ != nullptr;};
    void deleteDestinationStorageLocationArn() { this->destinationStorageLocationArn_ = nullptr;};
    inline string destinationStorageLocationArn() const { DARABONBA_PTR_GET_DEFAULT(destinationStorageLocationArn_, "") };
    inline CopySnapshotRequest& setDestinationStorageLocationArn(string destinationStorageLocationArn) { DARABONBA_PTR_SET_VALUE(destinationStorageLocationArn_, destinationStorageLocationArn) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CopySnapshotRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // KMSKeyId Field Functions 
    bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
    void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
    inline string KMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
    inline CopySnapshotRequest& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CopySnapshotRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CopySnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CopySnapshotRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CopySnapshotRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CopySnapshotRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // retentionDays Field Functions 
    bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
    void deleteRetentionDays() { this->retentionDays_ = nullptr;};
    inline int32_t retentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
    inline CopySnapshotRequest& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CopySnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CopySnapshotRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CopySnapshotRequestTag>) };
    inline vector<CopySnapshotRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CopySnapshotRequestTag>) };
    inline CopySnapshotRequest& setTag(const vector<CopySnapshotRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CopySnapshotRequest& setTag(vector<CopySnapshotRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // >This parameter is currently in invitational preview and unavailable for public use.
    std::shared_ptr<vector<CopySnapshotRequestArn>> arn_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the destination region to which to copy the source snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The description of the new snapshot. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    // 
    // This parameter is empty by default.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationSnapshotDescription_ = nullptr;
    // The name of the new snapshot. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with http:// or https://. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // This parameter is left empty by default.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationSnapshotName_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> destinationStorageLocationArn_ = nullptr;
    // Specifies whether to encrypt the new snapshot. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> encrypted_ = nullptr;
    // The ID of the customer master key (CMK) in Key Management Service (KMS) in the destination region.
    std::shared_ptr<string> KMSKeyId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the source snapshot. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // This parameter is not publicly available.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The retention period of the new snapshot. Unit: days. The new snapshot is automatically released when its retention period ends. Valid values: 1 to 65536.
    // 
    // This parameter is empty by default, which indicates that the snapshot is not automatically released.
    std::shared_ptr<int32_t> retentionDays_ = nullptr;
    // The ID of the source snapshot.
    // 
    // This parameter is required.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The tag key and value of the new snapshot.
    std::shared_ptr<vector<CopySnapshotRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
