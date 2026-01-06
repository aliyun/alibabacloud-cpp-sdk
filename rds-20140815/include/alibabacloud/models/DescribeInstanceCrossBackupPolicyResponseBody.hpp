// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECROSSBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECROSSBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeInstanceCrossBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceCrossBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupEnabled, backupEnabled_);
      DARABONBA_PTR_TO_JSON(BackupEnabledTime, backupEnabledTime_);
      DARABONBA_PTR_TO_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_TO_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_TO_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LogBackupEnabled, logBackupEnabled_);
      DARABONBA_PTR_TO_JSON(LogBackupEnabledTime, logBackupEnabledTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetentType, retentType_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceCrossBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupEnabled, backupEnabled_);
      DARABONBA_PTR_FROM_JSON(BackupEnabledTime, backupEnabledTime_);
      DARABONBA_PTR_FROM_JSON(CrossBackupRegion, crossBackupRegion_);
      DARABONBA_PTR_FROM_JSON(CrossBackupType, crossBackupType_);
      DARABONBA_PTR_FROM_JSON(DBInstanceDescription, DBInstanceDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStatus, DBInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LogBackupEnabled, logBackupEnabled_);
      DARABONBA_PTR_FROM_JSON(LogBackupEnabledTime, logBackupEnabledTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetentType, retentType_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
    };
    DescribeInstanceCrossBackupPolicyResponseBody() = default ;
    DescribeInstanceCrossBackupPolicyResponseBody(const DescribeInstanceCrossBackupPolicyResponseBody &) = default ;
    DescribeInstanceCrossBackupPolicyResponseBody(DescribeInstanceCrossBackupPolicyResponseBody &&) = default ;
    DescribeInstanceCrossBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceCrossBackupPolicyResponseBody() = default ;
    DescribeInstanceCrossBackupPolicyResponseBody& operator=(const DescribeInstanceCrossBackupPolicyResponseBody &) = default ;
    DescribeInstanceCrossBackupPolicyResponseBody& operator=(DescribeInstanceCrossBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupEnabled_ == nullptr
        && this->backupEnabledTime_ == nullptr && this->crossBackupRegion_ == nullptr && this->crossBackupType_ == nullptr && this->DBInstanceDescription_ == nullptr && this->DBInstanceId_ == nullptr
        && this->DBInstanceStatus_ == nullptr && this->engine_ == nullptr && this->engineVersion_ == nullptr && this->lockMode_ == nullptr && this->logBackupEnabled_ == nullptr
        && this->logBackupEnabledTime_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->retentType_ == nullptr && this->retention_ == nullptr; };
    // backupEnabled Field Functions 
    bool hasBackupEnabled() const { return this->backupEnabled_ != nullptr;};
    void deleteBackupEnabled() { this->backupEnabled_ = nullptr;};
    inline string getBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(backupEnabled_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setBackupEnabled(string backupEnabled) { DARABONBA_PTR_SET_VALUE(backupEnabled_, backupEnabled) };


    // backupEnabledTime Field Functions 
    bool hasBackupEnabledTime() const { return this->backupEnabledTime_ != nullptr;};
    void deleteBackupEnabledTime() { this->backupEnabledTime_ = nullptr;};
    inline string getBackupEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(backupEnabledTime_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setBackupEnabledTime(string backupEnabledTime) { DARABONBA_PTR_SET_VALUE(backupEnabledTime_, backupEnabledTime) };


    // crossBackupRegion Field Functions 
    bool hasCrossBackupRegion() const { return this->crossBackupRegion_ != nullptr;};
    void deleteCrossBackupRegion() { this->crossBackupRegion_ = nullptr;};
    inline string getCrossBackupRegion() const { DARABONBA_PTR_GET_DEFAULT(crossBackupRegion_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setCrossBackupRegion(string crossBackupRegion) { DARABONBA_PTR_SET_VALUE(crossBackupRegion_, crossBackupRegion) };


    // crossBackupType Field Functions 
    bool hasCrossBackupType() const { return this->crossBackupType_ != nullptr;};
    void deleteCrossBackupType() { this->crossBackupType_ = nullptr;};
    inline string getCrossBackupType() const { DARABONBA_PTR_GET_DEFAULT(crossBackupType_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setCrossBackupType(string crossBackupType) { DARABONBA_PTR_SET_VALUE(crossBackupType_, crossBackupType) };


    // DBInstanceDescription Field Functions 
    bool hasDBInstanceDescription() const { return this->DBInstanceDescription_ != nullptr;};
    void deleteDBInstanceDescription() { this->DBInstanceDescription_ = nullptr;};
    inline string getDBInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceDescription_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setDBInstanceDescription(string DBInstanceDescription) { DARABONBA_PTR_SET_VALUE(DBInstanceDescription_, DBInstanceDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStatus Field Functions 
    bool hasDBInstanceStatus() const { return this->DBInstanceStatus_ != nullptr;};
    void deleteDBInstanceStatus() { this->DBInstanceStatus_ = nullptr;};
    inline string getDBInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStatus_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setDBInstanceStatus(string DBInstanceStatus) { DARABONBA_PTR_SET_VALUE(DBInstanceStatus_, DBInstanceStatus) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // logBackupEnabled Field Functions 
    bool hasLogBackupEnabled() const { return this->logBackupEnabled_ != nullptr;};
    void deleteLogBackupEnabled() { this->logBackupEnabled_ = nullptr;};
    inline string getLogBackupEnabled() const { DARABONBA_PTR_GET_DEFAULT(logBackupEnabled_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setLogBackupEnabled(string logBackupEnabled) { DARABONBA_PTR_SET_VALUE(logBackupEnabled_, logBackupEnabled) };


    // logBackupEnabledTime Field Functions 
    bool hasLogBackupEnabledTime() const { return this->logBackupEnabledTime_ != nullptr;};
    void deleteLogBackupEnabledTime() { this->logBackupEnabledTime_ = nullptr;};
    inline string getLogBackupEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(logBackupEnabledTime_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setLogBackupEnabledTime(string logBackupEnabledTime) { DARABONBA_PTR_SET_VALUE(logBackupEnabledTime_, logBackupEnabledTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retentType Field Functions 
    bool hasRetentType() const { return this->retentType_ != nullptr;};
    void deleteRetentType() { this->retentType_ = nullptr;};
    inline int32_t getRetentType() const { DARABONBA_PTR_GET_DEFAULT(retentType_, 0) };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setRetentType(int32_t retentType) { DARABONBA_PTR_SET_VALUE(retentType_, retentType) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int32_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0) };
    inline DescribeInstanceCrossBackupPolicyResponseBody& setRetention(int32_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


  protected:
    // The status of the cross-region backup feature on the instance. Valid values:
    // 
    // *   **Disable**
    // *   **Enable**
    shared_ptr<string> backupEnabled_ {};
    // The point in time at which the cross-region backup feature is enabled. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> backupEnabledTime_ {};
    // The ID of the destination region where the cross-region backup files of the instance are stored.
    shared_ptr<string> crossBackupRegion_ {};
    // The policy that is used to save the cross-region backup files of the instance. Default value: **1**. The value 1 indicates that all cross-region backup files are saved.
    shared_ptr<string> crossBackupType_ {};
    // The name of the instance. It must be 2 to 256 characters in length. The value can contain letters, digits, underscores (_), and hyphens (-), and must start with a letter.
    // 
    // >  The value cannot start with http:// or https://.
    shared_ptr<string> DBInstanceDescription_ {};
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The status of the instance. For more information, see [Instance state table](https://help.aliyun.com/document_detail/26315.html).
    shared_ptr<string> DBInstanceStatus_ {};
    // The database engine of the instance.
    shared_ptr<string> engine_ {};
    // The database engine version.
    shared_ptr<string> engineVersion_ {};
    // The lock status of the instance. Valid values:
    // 
    // *   **Unlock**: The instance is not locked.
    // *   **ManualLock**: The instance is manually locked.
    // *   **LockByExpiration**: The instance is automatically locked due to instance expiration.
    // *   **LockByRestoration**: The instance is automatically locked before a rollback.
    // *   **LockByDiskQuota**: The instance is automatically locked because its storage capacity is exhausted and the instance is inaccessible.
    shared_ptr<string> lockMode_ {};
    // The status of the cross-region log backup feature on the instance. Valid values:
    // 
    // *   **Disable**
    // *   **Enable**
    shared_ptr<string> logBackupEnabled_ {};
    // The time when cross-region log backup was enabled on the instance. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    shared_ptr<string> logBackupEnabledTime_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The policy that is used to retain the cross-region backup files of the instance. Default value: **1**. The value 1 indicates that the cross-region backup files of the instance are retained based on the specified retention period.
    shared_ptr<int32_t> retentType_ {};
    // The number of days for which the cross-region backup files of the instance are retained. Valid values: **7 to 1825**.
    shared_ptr<int32_t> retention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
