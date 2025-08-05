// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESRESPONSEBODYHANARESTOREHANARESTORES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESRESPONSEBODYHANARESTOREHANARESTORES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& obj) { 
      DARABONBA_PTR_TO_JSON(BackupID, backupID_);
      DARABONBA_PTR_TO_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_TO_JSON(CheckAccess, checkAccess_);
      DARABONBA_PTR_TO_JSON(ClearLog, clearLog_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CurrentPhase, currentPhase_);
      DARABONBA_PTR_TO_JSON(CurrentProgress, currentProgress_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseRestoreId, databaseRestoreId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(LogPosition, logPosition_);
      DARABONBA_PTR_TO_JSON(MaxPhase, maxPhase_);
      DARABONBA_PTR_TO_JSON(MaxProgress, maxProgress_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(ReachedTime, reachedTime_);
      DARABONBA_PTR_TO_JSON(RecoveryPointInTime, recoveryPointInTime_);
      DARABONBA_PTR_TO_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceClusterId, sourceClusterId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SystemCopy, systemCopy_);
      DARABONBA_PTR_TO_JSON(UseCatalog, useCatalog_);
      DARABONBA_PTR_TO_JSON(UseDelta, useDelta_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VolumeId, volumeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupID, backupID_);
      DARABONBA_PTR_FROM_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_FROM_JSON(CheckAccess, checkAccess_);
      DARABONBA_PTR_FROM_JSON(ClearLog, clearLog_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CurrentPhase, currentPhase_);
      DARABONBA_PTR_FROM_JSON(CurrentProgress, currentProgress_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseRestoreId, databaseRestoreId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(LogPosition, logPosition_);
      DARABONBA_PTR_FROM_JSON(MaxPhase, maxPhase_);
      DARABONBA_PTR_FROM_JSON(MaxProgress, maxProgress_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(ReachedTime, reachedTime_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointInTime, recoveryPointInTime_);
      DARABONBA_PTR_FROM_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceClusterId, sourceClusterId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SystemCopy, systemCopy_);
      DARABONBA_PTR_FROM_JSON(UseCatalog, useCatalog_);
      DARABONBA_PTR_FROM_JSON(UseDelta, useDelta_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VolumeId, volumeId_);
    };
    DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores() = default ;
    DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores(const DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores &) = default ;
    DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores(DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores &&) = default ;
    DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores() = default ;
    DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& operator=(const DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores &) = default ;
    DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& operator=(DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupID_ != nullptr
        && this->backupPrefix_ != nullptr && this->checkAccess_ != nullptr && this->clearLog_ != nullptr && this->clusterId_ != nullptr && this->currentPhase_ != nullptr
        && this->currentProgress_ != nullptr && this->databaseName_ != nullptr && this->databaseRestoreId_ != nullptr && this->endTime_ != nullptr && this->logPosition_ != nullptr
        && this->maxPhase_ != nullptr && this->maxProgress_ != nullptr && this->message_ != nullptr && this->mode_ != nullptr && this->phase_ != nullptr
        && this->reachedTime_ != nullptr && this->recoveryPointInTime_ != nullptr && this->restoreId_ != nullptr && this->source_ != nullptr && this->sourceClusterId_ != nullptr
        && this->startTime_ != nullptr && this->state_ != nullptr && this->status_ != nullptr && this->systemCopy_ != nullptr && this->useCatalog_ != nullptr
        && this->useDelta_ != nullptr && this->vaultId_ != nullptr && this->volumeId_ != nullptr; };
    // backupID Field Functions 
    bool hasBackupID() const { return this->backupID_ != nullptr;};
    void deleteBackupID() { this->backupID_ = nullptr;};
    inline int64_t backupID() const { DARABONBA_PTR_GET_DEFAULT(backupID_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setBackupID(int64_t backupID) { DARABONBA_PTR_SET_VALUE(backupID_, backupID) };


    // backupPrefix Field Functions 
    bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
    void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
    inline string backupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


    // checkAccess Field Functions 
    bool hasCheckAccess() const { return this->checkAccess_ != nullptr;};
    void deleteCheckAccess() { this->checkAccess_ = nullptr;};
    inline bool checkAccess() const { DARABONBA_PTR_GET_DEFAULT(checkAccess_, false) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setCheckAccess(bool checkAccess) { DARABONBA_PTR_SET_VALUE(checkAccess_, checkAccess) };


    // clearLog Field Functions 
    bool hasClearLog() const { return this->clearLog_ != nullptr;};
    void deleteClearLog() { this->clearLog_ = nullptr;};
    inline bool clearLog() const { DARABONBA_PTR_GET_DEFAULT(clearLog_, false) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setClearLog(bool clearLog) { DARABONBA_PTR_SET_VALUE(clearLog_, clearLog) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // currentPhase Field Functions 
    bool hasCurrentPhase() const { return this->currentPhase_ != nullptr;};
    void deleteCurrentPhase() { this->currentPhase_ = nullptr;};
    inline int32_t currentPhase() const { DARABONBA_PTR_GET_DEFAULT(currentPhase_, 0) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setCurrentPhase(int32_t currentPhase) { DARABONBA_PTR_SET_VALUE(currentPhase_, currentPhase) };


    // currentProgress Field Functions 
    bool hasCurrentProgress() const { return this->currentProgress_ != nullptr;};
    void deleteCurrentProgress() { this->currentProgress_ = nullptr;};
    inline int64_t currentProgress() const { DARABONBA_PTR_GET_DEFAULT(currentProgress_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setCurrentProgress(int64_t currentProgress) { DARABONBA_PTR_SET_VALUE(currentProgress_, currentProgress) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseRestoreId Field Functions 
    bool hasDatabaseRestoreId() const { return this->databaseRestoreId_ != nullptr;};
    void deleteDatabaseRestoreId() { this->databaseRestoreId_ = nullptr;};
    inline int64_t databaseRestoreId() const { DARABONBA_PTR_GET_DEFAULT(databaseRestoreId_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setDatabaseRestoreId(int64_t databaseRestoreId) { DARABONBA_PTR_SET_VALUE(databaseRestoreId_, databaseRestoreId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // logPosition Field Functions 
    bool hasLogPosition() const { return this->logPosition_ != nullptr;};
    void deleteLogPosition() { this->logPosition_ = nullptr;};
    inline int64_t logPosition() const { DARABONBA_PTR_GET_DEFAULT(logPosition_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setLogPosition(int64_t logPosition) { DARABONBA_PTR_SET_VALUE(logPosition_, logPosition) };


    // maxPhase Field Functions 
    bool hasMaxPhase() const { return this->maxPhase_ != nullptr;};
    void deleteMaxPhase() { this->maxPhase_ = nullptr;};
    inline int32_t maxPhase() const { DARABONBA_PTR_GET_DEFAULT(maxPhase_, 0) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setMaxPhase(int32_t maxPhase) { DARABONBA_PTR_SET_VALUE(maxPhase_, maxPhase) };


    // maxProgress Field Functions 
    bool hasMaxProgress() const { return this->maxProgress_ != nullptr;};
    void deleteMaxProgress() { this->maxProgress_ = nullptr;};
    inline int64_t maxProgress() const { DARABONBA_PTR_GET_DEFAULT(maxProgress_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setMaxProgress(int64_t maxProgress) { DARABONBA_PTR_SET_VALUE(maxProgress_, maxProgress) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // reachedTime Field Functions 
    bool hasReachedTime() const { return this->reachedTime_ != nullptr;};
    void deleteReachedTime() { this->reachedTime_ = nullptr;};
    inline int64_t reachedTime() const { DARABONBA_PTR_GET_DEFAULT(reachedTime_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setReachedTime(int64_t reachedTime) { DARABONBA_PTR_SET_VALUE(reachedTime_, reachedTime) };


    // recoveryPointInTime Field Functions 
    bool hasRecoveryPointInTime() const { return this->recoveryPointInTime_ != nullptr;};
    void deleteRecoveryPointInTime() { this->recoveryPointInTime_ = nullptr;};
    inline int64_t recoveryPointInTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointInTime_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setRecoveryPointInTime(int64_t recoveryPointInTime) { DARABONBA_PTR_SET_VALUE(recoveryPointInTime_, recoveryPointInTime) };


    // restoreId Field Functions 
    bool hasRestoreId() const { return this->restoreId_ != nullptr;};
    void deleteRestoreId() { this->restoreId_ = nullptr;};
    inline string restoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceClusterId Field Functions 
    bool hasSourceClusterId() const { return this->sourceClusterId_ != nullptr;};
    void deleteSourceClusterId() { this->sourceClusterId_ = nullptr;};
    inline string sourceClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceClusterId_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setSourceClusterId(string sourceClusterId) { DARABONBA_PTR_SET_VALUE(sourceClusterId_, sourceClusterId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemCopy Field Functions 
    bool hasSystemCopy() const { return this->systemCopy_ != nullptr;};
    void deleteSystemCopy() { this->systemCopy_ = nullptr;};
    inline bool systemCopy() const { DARABONBA_PTR_GET_DEFAULT(systemCopy_, false) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setSystemCopy(bool systemCopy) { DARABONBA_PTR_SET_VALUE(systemCopy_, systemCopy) };


    // useCatalog Field Functions 
    bool hasUseCatalog() const { return this->useCatalog_ != nullptr;};
    void deleteUseCatalog() { this->useCatalog_ = nullptr;};
    inline bool useCatalog() const { DARABONBA_PTR_GET_DEFAULT(useCatalog_, false) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setUseCatalog(bool useCatalog) { DARABONBA_PTR_SET_VALUE(useCatalog_, useCatalog) };


    // useDelta Field Functions 
    bool hasUseDelta() const { return this->useDelta_ != nullptr;};
    void deleteUseDelta() { this->useDelta_ = nullptr;};
    inline bool useDelta() const { DARABONBA_PTR_GET_DEFAULT(useDelta_, false) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setUseDelta(bool useDelta) { DARABONBA_PTR_SET_VALUE(useDelta_, useDelta) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // volumeId Field Functions 
    bool hasVolumeId() const { return this->volumeId_ != nullptr;};
    void deleteVolumeId() { this->volumeId_ = nullptr;};
    inline int32_t volumeId() const { DARABONBA_PTR_GET_DEFAULT(volumeId_, 0) };
    inline DescribeHanaRestoresResponseBodyHanaRestoreHanaRestores& setVolumeId(int32_t volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };


  protected:
    // The backup ID.
    std::shared_ptr<int64_t> backupID_ = nullptr;
    // The backup prefix.
    std::shared_ptr<string> backupPrefix_ = nullptr;
    // Indicates whether the differential backup and log backup are validated. Valid values:
    // 
    // *   true: Cloud Backup checks whether the required differential backup and log backup are available before the restore job starts. If the differential backup or log backup is unavailable, Cloud Backup does not start the restore job.
    // *   false: Cloud Backup does not check whether the required differential backup and log backup are available before the restore job starts.
    std::shared_ptr<bool> checkAccess_ = nullptr;
    // Indicates whether all log entries are deleted from the log area after the log entries are restored. Valid values: true and false. If the return value is false, all log entries are deleted from the log area after the log entries are restored.
    std::shared_ptr<bool> clearLog_ = nullptr;
    // The ID of the SAP HANA instance that is restored.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The current recovery phase. This value is obtained from SAP HANA.
    std::shared_ptr<int32_t> currentPhase_ = nullptr;
    // The current progress. This value is obtained from SAP HANA.
    std::shared_ptr<int64_t> currentProgress_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The ID of the database recovery.
    std::shared_ptr<int64_t> databaseRestoreId_ = nullptr;
    // The time when the restore job ends. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The log position to which the database is restored. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_LOG_POSITION**.
    std::shared_ptr<int64_t> logPosition_ = nullptr;
    // The maximum recovery phase. This value is obtained from SAP HANA.
    std::shared_ptr<int32_t> maxPhase_ = nullptr;
    // The maximum progress. This value is obtained from SAP HANA.
    std::shared_ptr<int64_t> maxProgress_ = nullptr;
    // The details of the recovery phase.
    std::shared_ptr<string> message_ = nullptr;
    // The recovery mode. Valid values:
    // 
    // *   **RECOVERY_TO_MOST_RECENT**: The database is restored to the recently available state to which the database has been backed up.
    // *   **RECOVERY_TO_POINT_IN_TIME**: The database is restored to a specified point in time.
    // *   **RECOVERY_TO_SPECIFIC_BACKUP**: The database is restored to a specified backup.
    // *   **RECOVERY_TO_LOG_POSITION**: The database is restored to a specified log position.
    std::shared_ptr<string> mode_ = nullptr;
    // The recovery phase.
    std::shared_ptr<string> phase_ = nullptr;
    // The point in time at which the database is restored.
    std::shared_ptr<int64_t> reachedTime_ = nullptr;
    // The point in time to which the database is restored. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_POINT_IN_TIME**. Cloud Backup restores the database to a state closest to the specified point in time.
    std::shared_ptr<int64_t> recoveryPointInTime_ = nullptr;
    // The ID of the restore job.
    std::shared_ptr<string> restoreId_ = nullptr;
    // The name of the source system. This parameter indicates the name of the source database that is restored. Format: `<Source database name>@SID`.
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the source SAP HANA instance.
    std::shared_ptr<string> sourceClusterId_ = nullptr;
    // The time when the restore job starts. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The recovery status. This value is obtained from SAP HANA.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the restore job. Valid values:
    // 
    // *   **RUNNING**: The job is running.
    // *   **COMPLETE**: The job is completed.
    // *   **PARTIAL_COMPLETE**: The job is partially completed.
    // *   **FAILED**: The job failed.
    // *   **CANCELED**: The job is canceled.
    // *   **EXPIRED**: The job timed out.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the database is restored to a different instance. Valid values:
    // 
    // *   true: The database is restored to a different instance.
    // *   false: The database is restored within the same instance.
    std::shared_ptr<bool> systemCopy_ = nullptr;
    // Indicates whether a catalog backup is used to restore the database. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_SPECIFIC_BACKUP**. If the return value is false, Cloud Backup finds the backup file based on the specified prefix and then restores the backup file.
    std::shared_ptr<bool> useCatalog_ = nullptr;
    // Indicates whether a differential backup or an incremental backup is used to restore the database. Valid values: true and false. If the return value is true, Cloud Backup uses a differential backup or an incremental backup to restore the database. If the return value is false, Cloud Backup uses a log backup to restore the database.
    std::shared_ptr<bool> useDelta_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
    // The ID of the volume that is restored. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_LOG_POSITION**.
    std::shared_ptr<int32_t> volumeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
