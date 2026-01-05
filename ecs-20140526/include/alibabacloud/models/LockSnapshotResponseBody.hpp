// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKSNAPSHOTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOCKSNAPSHOTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class LockSnapshotResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockSnapshotResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LockedSnapshotInfo, lockedSnapshotInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LockSnapshotResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LockedSnapshotInfo, lockedSnapshotInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LockSnapshotResponseBody() = default ;
    LockSnapshotResponseBody(const LockSnapshotResponseBody &) = default ;
    LockSnapshotResponseBody(LockSnapshotResponseBody &&) = default ;
    LockSnapshotResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockSnapshotResponseBody() = default ;
    LockSnapshotResponseBody& operator=(const LockSnapshotResponseBody &) = default ;
    LockSnapshotResponseBody& operator=(LockSnapshotResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LockedSnapshotInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LockedSnapshotInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CoolOffPeriod, coolOffPeriod_);
        DARABONBA_PTR_TO_JSON(CoolOffPeriodExpiredTime, coolOffPeriodExpiredTime_);
        DARABONBA_PTR_TO_JSON(LockCreationTime, lockCreationTime_);
        DARABONBA_PTR_TO_JSON(LockDuration, lockDuration_);
        DARABONBA_PTR_TO_JSON(LockDurationStartTime, lockDurationStartTime_);
        DARABONBA_PTR_TO_JSON(LockExpiredTime, lockExpiredTime_);
        DARABONBA_PTR_TO_JSON(LockStatus, lockStatus_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      };
      friend void from_json(const Darabonba::Json& j, LockedSnapshotInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CoolOffPeriod, coolOffPeriod_);
        DARABONBA_PTR_FROM_JSON(CoolOffPeriodExpiredTime, coolOffPeriodExpiredTime_);
        DARABONBA_PTR_FROM_JSON(LockCreationTime, lockCreationTime_);
        DARABONBA_PTR_FROM_JSON(LockDuration, lockDuration_);
        DARABONBA_PTR_FROM_JSON(LockDurationStartTime, lockDurationStartTime_);
        DARABONBA_PTR_FROM_JSON(LockExpiredTime, lockExpiredTime_);
        DARABONBA_PTR_FROM_JSON(LockStatus, lockStatus_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      };
      LockedSnapshotInfo() = default ;
      LockedSnapshotInfo(const LockedSnapshotInfo &) = default ;
      LockedSnapshotInfo(LockedSnapshotInfo &&) = default ;
      LockedSnapshotInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LockedSnapshotInfo() = default ;
      LockedSnapshotInfo& operator=(const LockedSnapshotInfo &) = default ;
      LockedSnapshotInfo& operator=(LockedSnapshotInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->coolOffPeriod_ == nullptr
        && this->coolOffPeriodExpiredTime_ == nullptr && this->lockCreationTime_ == nullptr && this->lockDuration_ == nullptr && this->lockDurationStartTime_ == nullptr && this->lockExpiredTime_ == nullptr
        && this->lockStatus_ == nullptr && this->snapshotId_ == nullptr; };
      // coolOffPeriod Field Functions 
      bool hasCoolOffPeriod() const { return this->coolOffPeriod_ != nullptr;};
      void deleteCoolOffPeriod() { this->coolOffPeriod_ = nullptr;};
      inline int32_t getCoolOffPeriod() const { DARABONBA_PTR_GET_DEFAULT(coolOffPeriod_, 0) };
      inline LockedSnapshotInfo& setCoolOffPeriod(int32_t coolOffPeriod) { DARABONBA_PTR_SET_VALUE(coolOffPeriod_, coolOffPeriod) };


      // coolOffPeriodExpiredTime Field Functions 
      bool hasCoolOffPeriodExpiredTime() const { return this->coolOffPeriodExpiredTime_ != nullptr;};
      void deleteCoolOffPeriodExpiredTime() { this->coolOffPeriodExpiredTime_ = nullptr;};
      inline string getCoolOffPeriodExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(coolOffPeriodExpiredTime_, "") };
      inline LockedSnapshotInfo& setCoolOffPeriodExpiredTime(string coolOffPeriodExpiredTime) { DARABONBA_PTR_SET_VALUE(coolOffPeriodExpiredTime_, coolOffPeriodExpiredTime) };


      // lockCreationTime Field Functions 
      bool hasLockCreationTime() const { return this->lockCreationTime_ != nullptr;};
      void deleteLockCreationTime() { this->lockCreationTime_ = nullptr;};
      inline string getLockCreationTime() const { DARABONBA_PTR_GET_DEFAULT(lockCreationTime_, "") };
      inline LockedSnapshotInfo& setLockCreationTime(string lockCreationTime) { DARABONBA_PTR_SET_VALUE(lockCreationTime_, lockCreationTime) };


      // lockDuration Field Functions 
      bool hasLockDuration() const { return this->lockDuration_ != nullptr;};
      void deleteLockDuration() { this->lockDuration_ = nullptr;};
      inline int32_t getLockDuration() const { DARABONBA_PTR_GET_DEFAULT(lockDuration_, 0) };
      inline LockedSnapshotInfo& setLockDuration(int32_t lockDuration) { DARABONBA_PTR_SET_VALUE(lockDuration_, lockDuration) };


      // lockDurationStartTime Field Functions 
      bool hasLockDurationStartTime() const { return this->lockDurationStartTime_ != nullptr;};
      void deleteLockDurationStartTime() { this->lockDurationStartTime_ = nullptr;};
      inline string getLockDurationStartTime() const { DARABONBA_PTR_GET_DEFAULT(lockDurationStartTime_, "") };
      inline LockedSnapshotInfo& setLockDurationStartTime(string lockDurationStartTime) { DARABONBA_PTR_SET_VALUE(lockDurationStartTime_, lockDurationStartTime) };


      // lockExpiredTime Field Functions 
      bool hasLockExpiredTime() const { return this->lockExpiredTime_ != nullptr;};
      void deleteLockExpiredTime() { this->lockExpiredTime_ = nullptr;};
      inline string getLockExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpiredTime_, "") };
      inline LockedSnapshotInfo& setLockExpiredTime(string lockExpiredTime) { DARABONBA_PTR_SET_VALUE(lockExpiredTime_, lockExpiredTime) };


      // lockStatus Field Functions 
      bool hasLockStatus() const { return this->lockStatus_ != nullptr;};
      void deleteLockStatus() { this->lockStatus_ = nullptr;};
      inline string getLockStatus() const { DARABONBA_PTR_GET_DEFAULT(lockStatus_, "") };
      inline LockedSnapshotInfo& setLockStatus(string lockStatus) { DARABONBA_PTR_SET_VALUE(lockStatus_, lockStatus) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline LockedSnapshotInfo& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    protected:
      // The cooling-off period of the compliance mode. Unit: hours.
      shared_ptr<int32_t> coolOffPeriod_ {};
      // The end time of the cooling-off period in compliance mode. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC).
      shared_ptr<string> coolOffPeriodExpiredTime_ {};
      // The date and time at which the snapshot is locked. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC).
      shared_ptr<string> lockCreationTime_ {};
      // The lock duration. After the lock duration ends, the snapshot lock will automatically expire. Unit: days.
      shared_ptr<int32_t> lockDuration_ {};
      // The start time of the lock duration. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC). If you lock a snapshot that is in the Progressing state, the lock time is not calculated until the snapshot enters the Accomplished state.
      shared_ptr<string> lockDurationStartTime_ {};
      // The time when the lock expires. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC).
      shared_ptr<string> lockExpiredTime_ {};
      // The lock status. Valid values:
      // 
      // *   compliance-cooloff: The snapshot is locked in compliance mode but is still within the cooling-off period. Snapshots cannot be deleted, but users with the corresponding RAM permissions can unlock snapshots, extend or shorten the cooling-off period, and extend or shorten the lock duration.
      // *   compliance: The snapshot is locked in compliance mode and the cooling-off period has ended. Snapshots cannot be unlocked or deleted, but users with the corresponding RAM permissions can extend the lock duration.
      // *   expired: The snapshot was once locked, but the lock duration has ended and the lock has expired. The snapshot is currently not locked and can be deleted.
      shared_ptr<string> lockStatus_ {};
      // The snapshot ID.
      shared_ptr<string> snapshotId_ {};
    };

    virtual bool empty() const override { return this->lockedSnapshotInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // lockedSnapshotInfo Field Functions 
    bool hasLockedSnapshotInfo() const { return this->lockedSnapshotInfo_ != nullptr;};
    void deleteLockedSnapshotInfo() { this->lockedSnapshotInfo_ = nullptr;};
    inline const LockSnapshotResponseBody::LockedSnapshotInfo & getLockedSnapshotInfo() const { DARABONBA_PTR_GET_CONST(lockedSnapshotInfo_, LockSnapshotResponseBody::LockedSnapshotInfo) };
    inline LockSnapshotResponseBody::LockedSnapshotInfo getLockedSnapshotInfo() { DARABONBA_PTR_GET(lockedSnapshotInfo_, LockSnapshotResponseBody::LockedSnapshotInfo) };
    inline LockSnapshotResponseBody& setLockedSnapshotInfo(const LockSnapshotResponseBody::LockedSnapshotInfo & lockedSnapshotInfo) { DARABONBA_PTR_SET_VALUE(lockedSnapshotInfo_, lockedSnapshotInfo) };
    inline LockSnapshotResponseBody& setLockedSnapshotInfo(LockSnapshotResponseBody::LockedSnapshotInfo && lockedSnapshotInfo) { DARABONBA_PTR_SET_RVALUE(lockedSnapshotInfo_, lockedSnapshotInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LockSnapshotResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Locked snapshot information.
    shared_ptr<LockSnapshotResponseBody::LockedSnapshotInfo> lockedSnapshotInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
