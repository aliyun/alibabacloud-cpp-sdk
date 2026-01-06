// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANARESTORESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaRestoresResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaRestoresResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HanaRestore, hanaRestore_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaRestoresResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HanaRestore, hanaRestore_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHanaRestoresResponseBody() = default ;
    DescribeHanaRestoresResponseBody(const DescribeHanaRestoresResponseBody &) = default ;
    DescribeHanaRestoresResponseBody(DescribeHanaRestoresResponseBody &&) = default ;
    DescribeHanaRestoresResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaRestoresResponseBody() = default ;
    DescribeHanaRestoresResponseBody& operator=(const DescribeHanaRestoresResponseBody &) = default ;
    DescribeHanaRestoresResponseBody& operator=(DescribeHanaRestoresResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HanaRestore : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HanaRestore& obj) { 
        DARABONBA_PTR_TO_JSON(HanaRestores, hanaRestores_);
      };
      friend void from_json(const Darabonba::Json& j, HanaRestore& obj) { 
        DARABONBA_PTR_FROM_JSON(HanaRestores, hanaRestores_);
      };
      HanaRestore() = default ;
      HanaRestore(const HanaRestore &) = default ;
      HanaRestore(HanaRestore &&) = default ;
      HanaRestore(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HanaRestore() = default ;
      HanaRestore& operator=(const HanaRestore &) = default ;
      HanaRestore& operator=(HanaRestore &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HanaRestores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HanaRestores& obj) { 
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
        friend void from_json(const Darabonba::Json& j, HanaRestores& obj) { 
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
        HanaRestores() = default ;
        HanaRestores(const HanaRestores &) = default ;
        HanaRestores(HanaRestores &&) = default ;
        HanaRestores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HanaRestores() = default ;
        HanaRestores& operator=(const HanaRestores &) = default ;
        HanaRestores& operator=(HanaRestores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->backupID_ == nullptr
        && this->backupPrefix_ == nullptr && this->checkAccess_ == nullptr && this->clearLog_ == nullptr && this->clusterId_ == nullptr && this->currentPhase_ == nullptr
        && this->currentProgress_ == nullptr && this->databaseName_ == nullptr && this->databaseRestoreId_ == nullptr && this->endTime_ == nullptr && this->logPosition_ == nullptr
        && this->maxPhase_ == nullptr && this->maxProgress_ == nullptr && this->message_ == nullptr && this->mode_ == nullptr && this->phase_ == nullptr
        && this->reachedTime_ == nullptr && this->recoveryPointInTime_ == nullptr && this->restoreId_ == nullptr && this->source_ == nullptr && this->sourceClusterId_ == nullptr
        && this->startTime_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->systemCopy_ == nullptr && this->useCatalog_ == nullptr
        && this->useDelta_ == nullptr && this->vaultId_ == nullptr && this->volumeId_ == nullptr; };
        // backupID Field Functions 
        bool hasBackupID() const { return this->backupID_ != nullptr;};
        void deleteBackupID() { this->backupID_ = nullptr;};
        inline int64_t getBackupID() const { DARABONBA_PTR_GET_DEFAULT(backupID_, 0L) };
        inline HanaRestores& setBackupID(int64_t backupID) { DARABONBA_PTR_SET_VALUE(backupID_, backupID) };


        // backupPrefix Field Functions 
        bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
        void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
        inline string getBackupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
        inline HanaRestores& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


        // checkAccess Field Functions 
        bool hasCheckAccess() const { return this->checkAccess_ != nullptr;};
        void deleteCheckAccess() { this->checkAccess_ = nullptr;};
        inline bool getCheckAccess() const { DARABONBA_PTR_GET_DEFAULT(checkAccess_, false) };
        inline HanaRestores& setCheckAccess(bool checkAccess) { DARABONBA_PTR_SET_VALUE(checkAccess_, checkAccess) };


        // clearLog Field Functions 
        bool hasClearLog() const { return this->clearLog_ != nullptr;};
        void deleteClearLog() { this->clearLog_ = nullptr;};
        inline bool getClearLog() const { DARABONBA_PTR_GET_DEFAULT(clearLog_, false) };
        inline HanaRestores& setClearLog(bool clearLog) { DARABONBA_PTR_SET_VALUE(clearLog_, clearLog) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline HanaRestores& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // currentPhase Field Functions 
        bool hasCurrentPhase() const { return this->currentPhase_ != nullptr;};
        void deleteCurrentPhase() { this->currentPhase_ = nullptr;};
        inline int32_t getCurrentPhase() const { DARABONBA_PTR_GET_DEFAULT(currentPhase_, 0) };
        inline HanaRestores& setCurrentPhase(int32_t currentPhase) { DARABONBA_PTR_SET_VALUE(currentPhase_, currentPhase) };


        // currentProgress Field Functions 
        bool hasCurrentProgress() const { return this->currentProgress_ != nullptr;};
        void deleteCurrentProgress() { this->currentProgress_ = nullptr;};
        inline int64_t getCurrentProgress() const { DARABONBA_PTR_GET_DEFAULT(currentProgress_, 0L) };
        inline HanaRestores& setCurrentProgress(int64_t currentProgress) { DARABONBA_PTR_SET_VALUE(currentProgress_, currentProgress) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline HanaRestores& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // databaseRestoreId Field Functions 
        bool hasDatabaseRestoreId() const { return this->databaseRestoreId_ != nullptr;};
        void deleteDatabaseRestoreId() { this->databaseRestoreId_ = nullptr;};
        inline int64_t getDatabaseRestoreId() const { DARABONBA_PTR_GET_DEFAULT(databaseRestoreId_, 0L) };
        inline HanaRestores& setDatabaseRestoreId(int64_t databaseRestoreId) { DARABONBA_PTR_SET_VALUE(databaseRestoreId_, databaseRestoreId) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline HanaRestores& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // logPosition Field Functions 
        bool hasLogPosition() const { return this->logPosition_ != nullptr;};
        void deleteLogPosition() { this->logPosition_ = nullptr;};
        inline int64_t getLogPosition() const { DARABONBA_PTR_GET_DEFAULT(logPosition_, 0L) };
        inline HanaRestores& setLogPosition(int64_t logPosition) { DARABONBA_PTR_SET_VALUE(logPosition_, logPosition) };


        // maxPhase Field Functions 
        bool hasMaxPhase() const { return this->maxPhase_ != nullptr;};
        void deleteMaxPhase() { this->maxPhase_ = nullptr;};
        inline int32_t getMaxPhase() const { DARABONBA_PTR_GET_DEFAULT(maxPhase_, 0) };
        inline HanaRestores& setMaxPhase(int32_t maxPhase) { DARABONBA_PTR_SET_VALUE(maxPhase_, maxPhase) };


        // maxProgress Field Functions 
        bool hasMaxProgress() const { return this->maxProgress_ != nullptr;};
        void deleteMaxProgress() { this->maxProgress_ = nullptr;};
        inline int64_t getMaxProgress() const { DARABONBA_PTR_GET_DEFAULT(maxProgress_, 0L) };
        inline HanaRestores& setMaxProgress(int64_t maxProgress) { DARABONBA_PTR_SET_VALUE(maxProgress_, maxProgress) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline HanaRestores& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline HanaRestores& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // phase Field Functions 
        bool hasPhase() const { return this->phase_ != nullptr;};
        void deletePhase() { this->phase_ = nullptr;};
        inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
        inline HanaRestores& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


        // reachedTime Field Functions 
        bool hasReachedTime() const { return this->reachedTime_ != nullptr;};
        void deleteReachedTime() { this->reachedTime_ = nullptr;};
        inline int64_t getReachedTime() const { DARABONBA_PTR_GET_DEFAULT(reachedTime_, 0L) };
        inline HanaRestores& setReachedTime(int64_t reachedTime) { DARABONBA_PTR_SET_VALUE(reachedTime_, reachedTime) };


        // recoveryPointInTime Field Functions 
        bool hasRecoveryPointInTime() const { return this->recoveryPointInTime_ != nullptr;};
        void deleteRecoveryPointInTime() { this->recoveryPointInTime_ = nullptr;};
        inline int64_t getRecoveryPointInTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointInTime_, 0L) };
        inline HanaRestores& setRecoveryPointInTime(int64_t recoveryPointInTime) { DARABONBA_PTR_SET_VALUE(recoveryPointInTime_, recoveryPointInTime) };


        // restoreId Field Functions 
        bool hasRestoreId() const { return this->restoreId_ != nullptr;};
        void deleteRestoreId() { this->restoreId_ = nullptr;};
        inline string getRestoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
        inline HanaRestores& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline HanaRestores& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // sourceClusterId Field Functions 
        bool hasSourceClusterId() const { return this->sourceClusterId_ != nullptr;};
        void deleteSourceClusterId() { this->sourceClusterId_ = nullptr;};
        inline string getSourceClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceClusterId_, "") };
        inline HanaRestores& setSourceClusterId(string sourceClusterId) { DARABONBA_PTR_SET_VALUE(sourceClusterId_, sourceClusterId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline HanaRestores& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline HanaRestores& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline HanaRestores& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // systemCopy Field Functions 
        bool hasSystemCopy() const { return this->systemCopy_ != nullptr;};
        void deleteSystemCopy() { this->systemCopy_ = nullptr;};
        inline bool getSystemCopy() const { DARABONBA_PTR_GET_DEFAULT(systemCopy_, false) };
        inline HanaRestores& setSystemCopy(bool systemCopy) { DARABONBA_PTR_SET_VALUE(systemCopy_, systemCopy) };


        // useCatalog Field Functions 
        bool hasUseCatalog() const { return this->useCatalog_ != nullptr;};
        void deleteUseCatalog() { this->useCatalog_ = nullptr;};
        inline bool getUseCatalog() const { DARABONBA_PTR_GET_DEFAULT(useCatalog_, false) };
        inline HanaRestores& setUseCatalog(bool useCatalog) { DARABONBA_PTR_SET_VALUE(useCatalog_, useCatalog) };


        // useDelta Field Functions 
        bool hasUseDelta() const { return this->useDelta_ != nullptr;};
        void deleteUseDelta() { this->useDelta_ = nullptr;};
        inline bool getUseDelta() const { DARABONBA_PTR_GET_DEFAULT(useDelta_, false) };
        inline HanaRestores& setUseDelta(bool useDelta) { DARABONBA_PTR_SET_VALUE(useDelta_, useDelta) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline HanaRestores& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


        // volumeId Field Functions 
        bool hasVolumeId() const { return this->volumeId_ != nullptr;};
        void deleteVolumeId() { this->volumeId_ = nullptr;};
        inline int32_t getVolumeId() const { DARABONBA_PTR_GET_DEFAULT(volumeId_, 0) };
        inline HanaRestores& setVolumeId(int32_t volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };


      protected:
        // The backup ID.
        shared_ptr<int64_t> backupID_ {};
        // The backup prefix.
        shared_ptr<string> backupPrefix_ {};
        // Indicates whether the differential backup and log backup are validated. Valid values:
        // 
        // *   true: Cloud Backup checks whether the required differential backup and log backup are available before the restore job starts. If the differential backup or log backup is unavailable, Cloud Backup does not start the restore job.
        // *   false: Cloud Backup does not check whether the required differential backup and log backup are available before the restore job starts.
        shared_ptr<bool> checkAccess_ {};
        // Indicates whether all log entries are deleted from the log area after the log entries are restored. Valid values: true and false. If the return value is false, all log entries are deleted from the log area after the log entries are restored.
        shared_ptr<bool> clearLog_ {};
        // The ID of the SAP HANA instance that is restored.
        shared_ptr<string> clusterId_ {};
        // The current recovery phase. This value is obtained from SAP HANA.
        shared_ptr<int32_t> currentPhase_ {};
        // The current progress. This value is obtained from SAP HANA.
        shared_ptr<int64_t> currentProgress_ {};
        // The database name.
        shared_ptr<string> databaseName_ {};
        // The ID of the database recovery.
        shared_ptr<int64_t> databaseRestoreId_ {};
        // The time when the restore job ends. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> endTime_ {};
        // The log position to which the database is restored. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_LOG_POSITION**.
        shared_ptr<int64_t> logPosition_ {};
        // The maximum recovery phase. This value is obtained from SAP HANA.
        shared_ptr<int32_t> maxPhase_ {};
        // The maximum progress. This value is obtained from SAP HANA.
        shared_ptr<int64_t> maxProgress_ {};
        // The details of the recovery phase.
        shared_ptr<string> message_ {};
        // The recovery mode. Valid values:
        // 
        // *   **RECOVERY_TO_MOST_RECENT**: The database is restored to the recently available state to which the database has been backed up.
        // *   **RECOVERY_TO_POINT_IN_TIME**: The database is restored to a specified point in time.
        // *   **RECOVERY_TO_SPECIFIC_BACKUP**: The database is restored to a specified backup.
        // *   **RECOVERY_TO_LOG_POSITION**: The database is restored to a specified log position.
        shared_ptr<string> mode_ {};
        // The recovery phase.
        shared_ptr<string> phase_ {};
        // The point in time at which the database is restored.
        shared_ptr<int64_t> reachedTime_ {};
        // The point in time to which the database is restored. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_POINT_IN_TIME**. Cloud Backup restores the database to a state closest to the specified point in time.
        shared_ptr<int64_t> recoveryPointInTime_ {};
        // The ID of the restore job.
        shared_ptr<string> restoreId_ {};
        // The name of the source system. This parameter indicates the name of the source database that is restored. Format: `<Source database name>@SID`.
        shared_ptr<string> source_ {};
        // The ID of the source SAP HANA instance.
        shared_ptr<string> sourceClusterId_ {};
        // The time when the restore job starts. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> startTime_ {};
        // The recovery status. This value is obtained from SAP HANA.
        shared_ptr<string> state_ {};
        // The status of the restore job. Valid values:
        // 
        // *   **RUNNING**: The job is running.
        // *   **COMPLETE**: The job is completed.
        // *   **PARTIAL_COMPLETE**: The job is partially completed.
        // *   **FAILED**: The job failed.
        // *   **CANCELED**: The job is canceled.
        // *   **EXPIRED**: The job timed out.
        shared_ptr<string> status_ {};
        // Indicates whether the database is restored to a different instance. Valid values:
        // 
        // *   true: The database is restored to a different instance.
        // *   false: The database is restored within the same instance.
        shared_ptr<bool> systemCopy_ {};
        // Indicates whether a catalog backup is used to restore the database. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_SPECIFIC_BACKUP**. If the return value is false, Cloud Backup finds the backup file based on the specified prefix and then restores the backup file.
        shared_ptr<bool> useCatalog_ {};
        // Indicates whether a differential backup or an incremental backup is used to restore the database. Valid values: true and false. If the return value is true, Cloud Backup uses a differential backup or an incremental backup to restore the database. If the return value is false, Cloud Backup uses a log backup to restore the database.
        shared_ptr<bool> useDelta_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
        // The ID of the volume that is restored. This parameter is returned only if the value of the Mode parameter is **RECOVERY_TO_LOG_POSITION**.
        shared_ptr<int32_t> volumeId_ {};
      };

      virtual bool empty() const override { return this->hanaRestores_ == nullptr; };
      // hanaRestores Field Functions 
      bool hasHanaRestores() const { return this->hanaRestores_ != nullptr;};
      void deleteHanaRestores() { this->hanaRestores_ = nullptr;};
      inline const vector<HanaRestore::HanaRestores> & getHanaRestores() const { DARABONBA_PTR_GET_CONST(hanaRestores_, vector<HanaRestore::HanaRestores>) };
      inline vector<HanaRestore::HanaRestores> getHanaRestores() { DARABONBA_PTR_GET(hanaRestores_, vector<HanaRestore::HanaRestores>) };
      inline HanaRestore& setHanaRestores(const vector<HanaRestore::HanaRestores> & hanaRestores) { DARABONBA_PTR_SET_VALUE(hanaRestores_, hanaRestores) };
      inline HanaRestore& setHanaRestores(vector<HanaRestore::HanaRestores> && hanaRestores) { DARABONBA_PTR_SET_RVALUE(hanaRestores_, hanaRestores) };


    protected:
      shared_ptr<vector<HanaRestore::HanaRestores>> hanaRestores_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->hanaRestore_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHanaRestoresResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hanaRestore Field Functions 
    bool hasHanaRestore() const { return this->hanaRestore_ != nullptr;};
    void deleteHanaRestore() { this->hanaRestore_ = nullptr;};
    inline const DescribeHanaRestoresResponseBody::HanaRestore & getHanaRestore() const { DARABONBA_PTR_GET_CONST(hanaRestore_, DescribeHanaRestoresResponseBody::HanaRestore) };
    inline DescribeHanaRestoresResponseBody::HanaRestore getHanaRestore() { DARABONBA_PTR_GET(hanaRestore_, DescribeHanaRestoresResponseBody::HanaRestore) };
    inline DescribeHanaRestoresResponseBody& setHanaRestore(const DescribeHanaRestoresResponseBody::HanaRestore & hanaRestore) { DARABONBA_PTR_SET_VALUE(hanaRestore_, hanaRestore) };
    inline DescribeHanaRestoresResponseBody& setHanaRestore(DescribeHanaRestoresResponseBody::HanaRestore && hanaRestore) { DARABONBA_PTR_SET_RVALUE(hanaRestore_, hanaRestore) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHanaRestoresResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHanaRestoresResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHanaRestoresResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHanaRestoresResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHanaRestoresResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHanaRestoresResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The information about restore jobs.
    shared_ptr<DescribeHanaRestoresResponseBody::HanaRestore> hanaRestore_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
