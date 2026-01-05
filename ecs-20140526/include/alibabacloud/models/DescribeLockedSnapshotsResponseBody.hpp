// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOCKEDSNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOCKEDSNAPSHOTSRESPONSEBODY_HPP_
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
  class DescribeLockedSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLockedSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LockedSnapshotsInfo, lockedSnapshotsInfo_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLockedSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LockedSnapshotsInfo, lockedSnapshotsInfo_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLockedSnapshotsResponseBody() = default ;
    DescribeLockedSnapshotsResponseBody(const DescribeLockedSnapshotsResponseBody &) = default ;
    DescribeLockedSnapshotsResponseBody(DescribeLockedSnapshotsResponseBody &&) = default ;
    DescribeLockedSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLockedSnapshotsResponseBody() = default ;
    DescribeLockedSnapshotsResponseBody& operator=(const DescribeLockedSnapshotsResponseBody &) = default ;
    DescribeLockedSnapshotsResponseBody& operator=(DescribeLockedSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LockedSnapshotsInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LockedSnapshotsInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CoolOffPeriod, coolOffPeriod_);
        DARABONBA_PTR_TO_JSON(CoolOffPeriodExpiredTime, coolOffPeriodExpiredTime_);
        DARABONBA_PTR_TO_JSON(LockCreationTime, lockCreationTime_);
        DARABONBA_PTR_TO_JSON(LockDuration, lockDuration_);
        DARABONBA_PTR_TO_JSON(LockDurationStartTime, lockDurationStartTime_);
        DARABONBA_PTR_TO_JSON(LockExpiredTime, lockExpiredTime_);
        DARABONBA_PTR_TO_JSON(LockStatus, lockStatus_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      };
      friend void from_json(const Darabonba::Json& j, LockedSnapshotsInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CoolOffPeriod, coolOffPeriod_);
        DARABONBA_PTR_FROM_JSON(CoolOffPeriodExpiredTime, coolOffPeriodExpiredTime_);
        DARABONBA_PTR_FROM_JSON(LockCreationTime, lockCreationTime_);
        DARABONBA_PTR_FROM_JSON(LockDuration, lockDuration_);
        DARABONBA_PTR_FROM_JSON(LockDurationStartTime, lockDurationStartTime_);
        DARABONBA_PTR_FROM_JSON(LockExpiredTime, lockExpiredTime_);
        DARABONBA_PTR_FROM_JSON(LockStatus, lockStatus_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      };
      LockedSnapshotsInfo() = default ;
      LockedSnapshotsInfo(const LockedSnapshotsInfo &) = default ;
      LockedSnapshotsInfo(LockedSnapshotsInfo &&) = default ;
      LockedSnapshotsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LockedSnapshotsInfo() = default ;
      LockedSnapshotsInfo& operator=(const LockedSnapshotsInfo &) = default ;
      LockedSnapshotsInfo& operator=(LockedSnapshotsInfo &&) = default ;
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
      inline LockedSnapshotsInfo& setCoolOffPeriod(int32_t coolOffPeriod) { DARABONBA_PTR_SET_VALUE(coolOffPeriod_, coolOffPeriod) };


      // coolOffPeriodExpiredTime Field Functions 
      bool hasCoolOffPeriodExpiredTime() const { return this->coolOffPeriodExpiredTime_ != nullptr;};
      void deleteCoolOffPeriodExpiredTime() { this->coolOffPeriodExpiredTime_ = nullptr;};
      inline string getCoolOffPeriodExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(coolOffPeriodExpiredTime_, "") };
      inline LockedSnapshotsInfo& setCoolOffPeriodExpiredTime(string coolOffPeriodExpiredTime) { DARABONBA_PTR_SET_VALUE(coolOffPeriodExpiredTime_, coolOffPeriodExpiredTime) };


      // lockCreationTime Field Functions 
      bool hasLockCreationTime() const { return this->lockCreationTime_ != nullptr;};
      void deleteLockCreationTime() { this->lockCreationTime_ = nullptr;};
      inline string getLockCreationTime() const { DARABONBA_PTR_GET_DEFAULT(lockCreationTime_, "") };
      inline LockedSnapshotsInfo& setLockCreationTime(string lockCreationTime) { DARABONBA_PTR_SET_VALUE(lockCreationTime_, lockCreationTime) };


      // lockDuration Field Functions 
      bool hasLockDuration() const { return this->lockDuration_ != nullptr;};
      void deleteLockDuration() { this->lockDuration_ = nullptr;};
      inline int32_t getLockDuration() const { DARABONBA_PTR_GET_DEFAULT(lockDuration_, 0) };
      inline LockedSnapshotsInfo& setLockDuration(int32_t lockDuration) { DARABONBA_PTR_SET_VALUE(lockDuration_, lockDuration) };


      // lockDurationStartTime Field Functions 
      bool hasLockDurationStartTime() const { return this->lockDurationStartTime_ != nullptr;};
      void deleteLockDurationStartTime() { this->lockDurationStartTime_ = nullptr;};
      inline string getLockDurationStartTime() const { DARABONBA_PTR_GET_DEFAULT(lockDurationStartTime_, "") };
      inline LockedSnapshotsInfo& setLockDurationStartTime(string lockDurationStartTime) { DARABONBA_PTR_SET_VALUE(lockDurationStartTime_, lockDurationStartTime) };


      // lockExpiredTime Field Functions 
      bool hasLockExpiredTime() const { return this->lockExpiredTime_ != nullptr;};
      void deleteLockExpiredTime() { this->lockExpiredTime_ = nullptr;};
      inline string getLockExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(lockExpiredTime_, "") };
      inline LockedSnapshotsInfo& setLockExpiredTime(string lockExpiredTime) { DARABONBA_PTR_SET_VALUE(lockExpiredTime_, lockExpiredTime) };


      // lockStatus Field Functions 
      bool hasLockStatus() const { return this->lockStatus_ != nullptr;};
      void deleteLockStatus() { this->lockStatus_ = nullptr;};
      inline string getLockStatus() const { DARABONBA_PTR_GET_DEFAULT(lockStatus_, "") };
      inline LockedSnapshotsInfo& setLockStatus(string lockStatus) { DARABONBA_PTR_SET_VALUE(lockStatus_, lockStatus) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline LockedSnapshotsInfo& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    protected:
      // The cooling-off period of the compliance mode. Unit: hours.
      shared_ptr<int32_t> coolOffPeriod_ {};
      // The end time of the cooling-off period in compliance mode. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC).
      shared_ptr<string> coolOffPeriodExpiredTime_ {};
      // The date and time at which the snapshot is locked. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC).
      shared_ptr<string> lockCreationTime_ {};
      // The lock duration. The snapshot lock automatically expires after the lock duration ends. Unit: days.
      shared_ptr<int32_t> lockDuration_ {};
      // The start time of the lock duration. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC). If you lock a snapshot that is in the Progressing state, the lock time is not calculated until the snapshot enters the Accomplished state.
      shared_ptr<string> lockDurationStartTime_ {};
      // The time when the lock expires. The time follows the [ISO 8601](https://help.aliyun.com/zh/ecs/developer-reference/iso-8601-time-format?spm=a2c4g.11186623.0.0.277c6c92kl7kXM) standard in the yyyy-MM-ddTHH:mm:ssZ format (in UTC).
      shared_ptr<string> lockExpiredTime_ {};
      // The lock status. Valid values:
      // 
      // *   compliance-cooloff: The snapshot is locked in compliance mode but is still in a cooling-off period. Snapshots cannot be deleted. However, users with the corresponding RAM permissions can unlock snapshots, extend or shorten the cooling-off period, and extend or shorten the lock duration.
      // *   compliance: The snapshot is locked in compliance mode and the cooling-off period has ended. Snapshots cannot be unlocked or deleted. However, users with the corresponding RAM permissions can extend the lock duration.
      // *   expired: The snapshot was once locked, but the lock duration has ended and the lock has expired. The snapshot is not locked and can be deleted.
      shared_ptr<string> lockStatus_ {};
      // The snapshot ID.
      shared_ptr<string> snapshotId_ {};
    };

    virtual bool empty() const override { return this->lockedSnapshotsInfo_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // lockedSnapshotsInfo Field Functions 
    bool hasLockedSnapshotsInfo() const { return this->lockedSnapshotsInfo_ != nullptr;};
    void deleteLockedSnapshotsInfo() { this->lockedSnapshotsInfo_ = nullptr;};
    inline const vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo> & getLockedSnapshotsInfo() const { DARABONBA_PTR_GET_CONST(lockedSnapshotsInfo_, vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo>) };
    inline vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo> getLockedSnapshotsInfo() { DARABONBA_PTR_GET(lockedSnapshotsInfo_, vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo>) };
    inline DescribeLockedSnapshotsResponseBody& setLockedSnapshotsInfo(const vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo> & lockedSnapshotsInfo) { DARABONBA_PTR_SET_VALUE(lockedSnapshotsInfo_, lockedSnapshotsInfo) };
    inline DescribeLockedSnapshotsResponseBody& setLockedSnapshotsInfo(vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo> && lockedSnapshotsInfo) { DARABONBA_PTR_SET_RVALUE(lockedSnapshotsInfo_, lockedSnapshotsInfo) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLockedSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLockedSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the locked snapshots.
    shared_ptr<vector<DescribeLockedSnapshotsResponseBody::LockedSnapshotsInfo>> lockedSnapshotsInfo_ {};
    // The returned pagination token which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
