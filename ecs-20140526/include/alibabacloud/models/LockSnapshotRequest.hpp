// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKSNAPSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOCKSNAPSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class LockSnapshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockSnapshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CoolOffPeriod, coolOffPeriod_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LockDuration, lockDuration_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
    };
    friend void from_json(const Darabonba::Json& j, LockSnapshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CoolOffPeriod, coolOffPeriod_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LockDuration, lockDuration_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
    };
    LockSnapshotRequest() = default ;
    LockSnapshotRequest(const LockSnapshotRequest &) = default ;
    LockSnapshotRequest(LockSnapshotRequest &&) = default ;
    LockSnapshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockSnapshotRequest() = default ;
    LockSnapshotRequest& operator=(const LockSnapshotRequest &) = default ;
    LockSnapshotRequest& operator=(LockSnapshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->coolOffPeriod_ == nullptr && this->dryRun_ == nullptr && this->lockDuration_ == nullptr && this->lockMode_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->snapshotId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline LockSnapshotRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // coolOffPeriod Field Functions 
    bool hasCoolOffPeriod() const { return this->coolOffPeriod_ != nullptr;};
    void deleteCoolOffPeriod() { this->coolOffPeriod_ = nullptr;};
    inline int32_t getCoolOffPeriod() const { DARABONBA_PTR_GET_DEFAULT(coolOffPeriod_, 0) };
    inline LockSnapshotRequest& setCoolOffPeriod(int32_t coolOffPeriod) { DARABONBA_PTR_SET_VALUE(coolOffPeriod_, coolOffPeriod) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline LockSnapshotRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // lockDuration Field Functions 
    bool hasLockDuration() const { return this->lockDuration_ != nullptr;};
    void deleteLockDuration() { this->lockDuration_ = nullptr;};
    inline int32_t getLockDuration() const { DARABONBA_PTR_GET_DEFAULT(lockDuration_, 0) };
    inline LockSnapshotRequest& setLockDuration(int32_t lockDuration) { DARABONBA_PTR_SET_VALUE(lockDuration_, lockDuration) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline LockSnapshotRequest& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline LockSnapshotRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline LockSnapshotRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline LockSnapshotRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline LockSnapshotRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline LockSnapshotRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline LockSnapshotRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


  protected:
    // A client token that is used to ensure the idempotence of the request. You can use the client to generate a client token. Make sure that a unique client token is used for each request. ClientToken only supports ASCII characters and cannot exceed 64 characters. For more information, see [How to ensure idempotence](https://help.aliyun.com/zh/ecs/developer-reference/how-to-ensure-idempotence?spm=a2c4g.11186623.0.0.2a29d467Bh2sO5).
    shared_ptr<string> clientToken_ {};
    // Cooling-off period. In compliance mode, you can set a cooling-off period or skip the cooling-off period to directly lock the snapshot.
    // 
    // During the cooling-off period, users with corresponding RAM permissions can unlock snapshots, extend or shorten the cooling-off period, and extend or shorten the lock duration. Snapshots cannot be deleted during the cooling-off period.
    // 
    // After the cooling-off period ends, only extending the lock duration is supported.
    // 
    // Unit: hours.
    // 
    // Valid values: 0 to 72. A value of 0 indicates skipping the cooling-off period and directly locking the snapshot.
    // 
    // If the snapshot has entered the compliance mode lock period, set this parameter to 0 when extending the lock duration.
    // 
    // This parameter is required.
    shared_ptr<int32_t> coolOffPeriod_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // *   true: The request is checked and is not executed. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the check fails, the corresponding error is returned. If the check passes, the error code DryRunOperation is returned.
    // *   false (default): Sends a normal request, checks it, and executes the request directly if it passes the check.
    shared_ptr<bool> dryRun_ {};
    // Lock duration. After the lock duration ends, the snapshot lock will automatically expire.
    // 
    // Unit: days.
    // 
    // Valid values: 1 to 36500.
    // 
    // This parameter is required.
    shared_ptr<int32_t> lockDuration_ {};
    // The lock mode. Valid values:
    // 
    // *   compliance: The snapshot is locked in compliance mode. A snapshot that is locked in compliance mode cannot be unlocked by any user. It can be deleted only after the lock duration expires. Users cannot shorten the lock duration, but users with the corresponding RAM permissions can extend the lock duration at any time. When locking a snapshot in compliance mode, you can optionally specify a cooling-off period.
    // 
    // This parameter is required.
    shared_ptr<string> lockMode_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID You can call the [DescribeRegions](https://help.aliyun.com/zh/ecs/developer-reference/api-ecs-2014-05-26-describeregions?spm=a2c4g.11186623.0.i2) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The snapshot ID.
    // 
    // This parameter is required.
    shared_ptr<string> snapshotId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
