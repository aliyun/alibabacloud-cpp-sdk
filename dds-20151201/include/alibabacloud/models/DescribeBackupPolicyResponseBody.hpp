// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_TO_JSON(CrossBackupPeriod, crossBackupPeriod_);
      DARABONBA_PTR_TO_JSON(CrossLogRetentionType, crossLogRetentionType_);
      DARABONBA_PTR_TO_JSON(CrossLogRetentionValue, crossLogRetentionValue_);
      DARABONBA_PTR_TO_JSON(CrossRetentionType, crossRetentionType_);
      DARABONBA_PTR_TO_JSON(CrossRetentionValue, crossRetentionValue_);
      DARABONBA_PTR_TO_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableCrossLogBackup, enableCrossLogBackup_);
      DARABONBA_PTR_TO_JSON(HighFrequencyBackupRetention, highFrequencyBackupRetention_);
      DARABONBA_PTR_TO_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_TO_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_TO_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_TO_JSON(PreserveOneEachHour, preserveOneEachHour_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotBackupType, snapshotBackupType_);
      DARABONBA_PTR_TO_JSON(SrcRegion, srcRegion_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupInterval, backupInterval_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPolicyOnClusterDeletion, backupRetentionPolicyOnClusterDeletion_);
      DARABONBA_PTR_FROM_JSON(CrossBackupPeriod, crossBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(CrossLogRetentionType, crossLogRetentionType_);
      DARABONBA_PTR_FROM_JSON(CrossLogRetentionValue, crossLogRetentionValue_);
      DARABONBA_PTR_FROM_JSON(CrossRetentionType, crossRetentionType_);
      DARABONBA_PTR_FROM_JSON(CrossRetentionValue, crossRetentionValue_);
      DARABONBA_PTR_FROM_JSON(DestRegion, destRegion_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableCrossLogBackup, enableCrossLogBackup_);
      DARABONBA_PTR_FROM_JSON(HighFrequencyBackupRetention, highFrequencyBackupRetention_);
      DARABONBA_PTR_FROM_JSON(LogBackupRetentionPeriod, logBackupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupPeriod, preferredBackupPeriod_);
      DARABONBA_PTR_FROM_JSON(PreferredBackupTime, preferredBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreferredNextBackupTime, preferredNextBackupTime_);
      DARABONBA_PTR_FROM_JSON(PreserveOneEachHour, preserveOneEachHour_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotBackupType, snapshotBackupType_);
      DARABONBA_PTR_FROM_JSON(SrcRegion, srcRegion_);
    };
    DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody(DescribeBackupPolicyResponseBody &&) = default ;
    DescribeBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPolicyResponseBody() = default ;
    DescribeBackupPolicyResponseBody& operator=(const DescribeBackupPolicyResponseBody &) = default ;
    DescribeBackupPolicyResponseBody& operator=(DescribeBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupInterval_ == nullptr
        && this->backupRetentionPeriod_ == nullptr && this->backupRetentionPolicyOnClusterDeletion_ == nullptr && this->crossBackupPeriod_ == nullptr && this->crossLogRetentionType_ == nullptr && this->crossLogRetentionValue_ == nullptr
        && this->crossRetentionType_ == nullptr && this->crossRetentionValue_ == nullptr && this->destRegion_ == nullptr && this->enableBackupLog_ == nullptr && this->enableCrossLogBackup_ == nullptr
        && this->highFrequencyBackupRetention_ == nullptr && this->logBackupRetentionPeriod_ == nullptr && this->preferredBackupPeriod_ == nullptr && this->preferredBackupTime_ == nullptr && this->preferredNextBackupTime_ == nullptr
        && this->preserveOneEachHour_ == nullptr && this->requestId_ == nullptr && this->snapshotBackupType_ == nullptr && this->srcRegion_ == nullptr; };
    // backupInterval Field Functions 
    bool hasBackupInterval() const { return this->backupInterval_ != nullptr;};
    void deleteBackupInterval() { this->backupInterval_ = nullptr;};
    inline int32_t getBackupInterval() const { DARABONBA_PTR_GET_DEFAULT(backupInterval_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupInterval(int32_t backupInterval) { DARABONBA_PTR_SET_VALUE(backupInterval_, backupInterval) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline string getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPeriod(string backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupRetentionPolicyOnClusterDeletion Field Functions 
    bool hasBackupRetentionPolicyOnClusterDeletion() const { return this->backupRetentionPolicyOnClusterDeletion_ != nullptr;};
    void deleteBackupRetentionPolicyOnClusterDeletion() { this->backupRetentionPolicyOnClusterDeletion_ = nullptr;};
    inline int32_t getBackupRetentionPolicyOnClusterDeletion() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPolicyOnClusterDeletion_, 0) };
    inline DescribeBackupPolicyResponseBody& setBackupRetentionPolicyOnClusterDeletion(int32_t backupRetentionPolicyOnClusterDeletion) { DARABONBA_PTR_SET_VALUE(backupRetentionPolicyOnClusterDeletion_, backupRetentionPolicyOnClusterDeletion) };


    // crossBackupPeriod Field Functions 
    bool hasCrossBackupPeriod() const { return this->crossBackupPeriod_ != nullptr;};
    void deleteCrossBackupPeriod() { this->crossBackupPeriod_ = nullptr;};
    inline string getCrossBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(crossBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setCrossBackupPeriod(string crossBackupPeriod) { DARABONBA_PTR_SET_VALUE(crossBackupPeriod_, crossBackupPeriod) };


    // crossLogRetentionType Field Functions 
    bool hasCrossLogRetentionType() const { return this->crossLogRetentionType_ != nullptr;};
    void deleteCrossLogRetentionType() { this->crossLogRetentionType_ = nullptr;};
    inline string getCrossLogRetentionType() const { DARABONBA_PTR_GET_DEFAULT(crossLogRetentionType_, "") };
    inline DescribeBackupPolicyResponseBody& setCrossLogRetentionType(string crossLogRetentionType) { DARABONBA_PTR_SET_VALUE(crossLogRetentionType_, crossLogRetentionType) };


    // crossLogRetentionValue Field Functions 
    bool hasCrossLogRetentionValue() const { return this->crossLogRetentionValue_ != nullptr;};
    void deleteCrossLogRetentionValue() { this->crossLogRetentionValue_ = nullptr;};
    inline int32_t getCrossLogRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(crossLogRetentionValue_, 0) };
    inline DescribeBackupPolicyResponseBody& setCrossLogRetentionValue(int32_t crossLogRetentionValue) { DARABONBA_PTR_SET_VALUE(crossLogRetentionValue_, crossLogRetentionValue) };


    // crossRetentionType Field Functions 
    bool hasCrossRetentionType() const { return this->crossRetentionType_ != nullptr;};
    void deleteCrossRetentionType() { this->crossRetentionType_ = nullptr;};
    inline string getCrossRetentionType() const { DARABONBA_PTR_GET_DEFAULT(crossRetentionType_, "") };
    inline DescribeBackupPolicyResponseBody& setCrossRetentionType(string crossRetentionType) { DARABONBA_PTR_SET_VALUE(crossRetentionType_, crossRetentionType) };


    // crossRetentionValue Field Functions 
    bool hasCrossRetentionValue() const { return this->crossRetentionValue_ != nullptr;};
    void deleteCrossRetentionValue() { this->crossRetentionValue_ = nullptr;};
    inline int32_t getCrossRetentionValue() const { DARABONBA_PTR_GET_DEFAULT(crossRetentionValue_, 0) };
    inline DescribeBackupPolicyResponseBody& setCrossRetentionValue(int32_t crossRetentionValue) { DARABONBA_PTR_SET_VALUE(crossRetentionValue_, crossRetentionValue) };


    // destRegion Field Functions 
    bool hasDestRegion() const { return this->destRegion_ != nullptr;};
    void deleteDestRegion() { this->destRegion_ = nullptr;};
    inline string getDestRegion() const { DARABONBA_PTR_GET_DEFAULT(destRegion_, "") };
    inline DescribeBackupPolicyResponseBody& setDestRegion(string destRegion) { DARABONBA_PTR_SET_VALUE(destRegion_, destRegion) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline int32_t getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, 0) };
    inline DescribeBackupPolicyResponseBody& setEnableBackupLog(int32_t enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableCrossLogBackup Field Functions 
    bool hasEnableCrossLogBackup() const { return this->enableCrossLogBackup_ != nullptr;};
    void deleteEnableCrossLogBackup() { this->enableCrossLogBackup_ = nullptr;};
    inline int32_t getEnableCrossLogBackup() const { DARABONBA_PTR_GET_DEFAULT(enableCrossLogBackup_, 0) };
    inline DescribeBackupPolicyResponseBody& setEnableCrossLogBackup(int32_t enableCrossLogBackup) { DARABONBA_PTR_SET_VALUE(enableCrossLogBackup_, enableCrossLogBackup) };


    // highFrequencyBackupRetention Field Functions 
    bool hasHighFrequencyBackupRetention() const { return this->highFrequencyBackupRetention_ != nullptr;};
    void deleteHighFrequencyBackupRetention() { this->highFrequencyBackupRetention_ = nullptr;};
    inline string getHighFrequencyBackupRetention() const { DARABONBA_PTR_GET_DEFAULT(highFrequencyBackupRetention_, "") };
    inline DescribeBackupPolicyResponseBody& setHighFrequencyBackupRetention(string highFrequencyBackupRetention) { DARABONBA_PTR_SET_VALUE(highFrequencyBackupRetention_, highFrequencyBackupRetention) };


    // logBackupRetentionPeriod Field Functions 
    bool hasLogBackupRetentionPeriod() const { return this->logBackupRetentionPeriod_ != nullptr;};
    void deleteLogBackupRetentionPeriod() { this->logBackupRetentionPeriod_ = nullptr;};
    inline int32_t getLogBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(logBackupRetentionPeriod_, 0) };
    inline DescribeBackupPolicyResponseBody& setLogBackupRetentionPeriod(int32_t logBackupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(logBackupRetentionPeriod_, logBackupRetentionPeriod) };


    // preferredBackupPeriod Field Functions 
    bool hasPreferredBackupPeriod() const { return this->preferredBackupPeriod_ != nullptr;};
    void deletePreferredBackupPeriod() { this->preferredBackupPeriod_ = nullptr;};
    inline string getPreferredBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupPeriod_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupPeriod(string preferredBackupPeriod) { DARABONBA_PTR_SET_VALUE(preferredBackupPeriod_, preferredBackupPeriod) };


    // preferredBackupTime Field Functions 
    bool hasPreferredBackupTime() const { return this->preferredBackupTime_ != nullptr;};
    void deletePreferredBackupTime() { this->preferredBackupTime_ = nullptr;};
    inline string getPreferredBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredBackupTime(string preferredBackupTime) { DARABONBA_PTR_SET_VALUE(preferredBackupTime_, preferredBackupTime) };


    // preferredNextBackupTime Field Functions 
    bool hasPreferredNextBackupTime() const { return this->preferredNextBackupTime_ != nullptr;};
    void deletePreferredNextBackupTime() { this->preferredNextBackupTime_ = nullptr;};
    inline string getPreferredNextBackupTime() const { DARABONBA_PTR_GET_DEFAULT(preferredNextBackupTime_, "") };
    inline DescribeBackupPolicyResponseBody& setPreferredNextBackupTime(string preferredNextBackupTime) { DARABONBA_PTR_SET_VALUE(preferredNextBackupTime_, preferredNextBackupTime) };


    // preserveOneEachHour Field Functions 
    bool hasPreserveOneEachHour() const { return this->preserveOneEachHour_ != nullptr;};
    void deletePreserveOneEachHour() { this->preserveOneEachHour_ = nullptr;};
    inline bool getPreserveOneEachHour() const { DARABONBA_PTR_GET_DEFAULT(preserveOneEachHour_, false) };
    inline DescribeBackupPolicyResponseBody& setPreserveOneEachHour(bool preserveOneEachHour) { DARABONBA_PTR_SET_VALUE(preserveOneEachHour_, preserveOneEachHour) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotBackupType Field Functions 
    bool hasSnapshotBackupType() const { return this->snapshotBackupType_ != nullptr;};
    void deleteSnapshotBackupType() { this->snapshotBackupType_ = nullptr;};
    inline string getSnapshotBackupType() const { DARABONBA_PTR_GET_DEFAULT(snapshotBackupType_, "") };
    inline DescribeBackupPolicyResponseBody& setSnapshotBackupType(string snapshotBackupType) { DARABONBA_PTR_SET_VALUE(snapshotBackupType_, snapshotBackupType) };


    // srcRegion Field Functions 
    bool hasSrcRegion() const { return this->srcRegion_ != nullptr;};
    void deleteSrcRegion() { this->srcRegion_ = nullptr;};
    inline string getSrcRegion() const { DARABONBA_PTR_GET_DEFAULT(srcRegion_, "") };
    inline DescribeBackupPolicyResponseBody& setSrcRegion(string srcRegion) { DARABONBA_PTR_SET_VALUE(srcRegion_, srcRegion) };


  protected:
    // The frequency at which high-frequency backup is created. Valid values:
    // 
    // *   **-1**: High-frequency backup is disabled.
    // *   **15**: every 15 minutes.
    // *   **30**: every 30 minutes.
    // *   **60**: every hour.
    // *   **120**: every 2 hours.
    // *   **180**: every 3 hours.
    // *   **240**: every 4 hours.
    // *   **360**: every 6 hours.
    // *   **480**: every 8 hours.
    // *   **720**: every 12 hours.
    shared_ptr<int32_t> backupInterval_ {};
    // The retention period of the backup data. Unit: day.
    shared_ptr<string> backupRetentionPeriod_ {};
    // The backup retention policy configured for the instance. Valid values:
    // 
    // 1.  0: All backup sets are immediately deleted when the instance is released.
    // 2.  1: Automatic backup is performed and the backup set is retained for a long period of time when the instance is released.
    // 3.  2: Automatic backup is performed and all backup sets are retained for a long period of time when the instance is released.
    // 
    // For more information, see [Retain the backup files of an ApsaraDB for MongoDB instance for a long period of time](https://help.aliyun.com/document_detail/2779111.html).
    shared_ptr<int32_t> backupRetentionPolicyOnClusterDeletion_ {};
    // The retention period of Cross-regional backup.
    // Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    shared_ptr<string> crossBackupPeriod_ {};
    // The retention type of Cross-regional  log backup.
    // 
    // - delay : retain the backup for a period of time.
    // - never : retain the backup permanently.
    shared_ptr<string> crossLogRetentionType_ {};
    // The retention time of Cross-regional log backup.
    shared_ptr<int32_t> crossLogRetentionValue_ {};
    // The retention type of Cross-regional backup.
    // 
    // - delay : retain the backup for a period of time.
    // - never : retain the backup permanently.
    shared_ptr<string> crossRetentionType_ {};
    // The retention time of Cross-regional backup.
    shared_ptr<int32_t> crossRetentionValue_ {};
    // The region ID of the cross-regional backup..
    shared_ptr<string> destRegion_ {};
    // Indicates whether the log backup feature is enabled. Valid values:
    // 
    // *   **0** (default): The log backup feature is disabled.
    // *   **1**: The log backup feature is enabled.
    shared_ptr<int32_t> enableBackupLog_ {};
    // Whether to turn on cross-regional log backup.
    // - 1: turn on . Used for sharded cluster.
    // - 0: turn off. Used for replicate set.
    shared_ptr<int32_t> enableCrossLogBackup_ {};
    // The retention period of high-frequency backups. Unit: day.
    shared_ptr<string> highFrequencyBackupRetention_ {};
    // The number of days for which log backups are retained. Valid values: 7 to 730.
    shared_ptr<int32_t> logBackupRetentionPeriod_ {};
    // The day of a week on which to back up data. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    shared_ptr<string> preferredBackupPeriod_ {};
    // The time range during which the backup was created. The time follows the ISO 8601 standard in the *HH:mm*Z-*HH:mm*Z format. The time is displayed in UTC.
    shared_ptr<string> preferredBackupTime_ {};
    // The time of next standard backup.
    shared_ptr<string> preferredNextBackupTime_ {};
    shared_ptr<bool> preserveOneEachHour_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The snapshot backup type. Valid values:
    // 
    // *   **Flash**: single-digit second backup
    // *   **Standard** (default): standard backup
    shared_ptr<string> snapshotBackupType_ {};
    // The region ID of the instance.
    shared_ptr<string> srcRegion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
