// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHANARESTOREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHANARESTOREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateHanaRestoreRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHanaRestoreRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_TO_JSON(CheckAccess, checkAccess_);
      DARABONBA_PTR_TO_JSON(ClearLog, clearLog_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(LogPosition, logPosition_);
      DARABONBA_PTR_TO_JSON(MasterClientId, masterClientId_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(RecoveryPointInTime, recoveryPointInTime_);
      DARABONBA_PTR_TO_JSON(SidAdmin, sidAdmin_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceClusterId, sourceClusterId_);
      DARABONBA_PTR_TO_JSON(SystemCopy, systemCopy_);
      DARABONBA_PTR_TO_JSON(UseCatalog, useCatalog_);
      DARABONBA_PTR_TO_JSON(UseDelta, useDelta_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VolumeId, volumeId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHanaRestoreRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(BackupPrefix, backupPrefix_);
      DARABONBA_PTR_FROM_JSON(CheckAccess, checkAccess_);
      DARABONBA_PTR_FROM_JSON(ClearLog, clearLog_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(LogPosition, logPosition_);
      DARABONBA_PTR_FROM_JSON(MasterClientId, masterClientId_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointInTime, recoveryPointInTime_);
      DARABONBA_PTR_FROM_JSON(SidAdmin, sidAdmin_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceClusterId, sourceClusterId_);
      DARABONBA_PTR_FROM_JSON(SystemCopy, systemCopy_);
      DARABONBA_PTR_FROM_JSON(UseCatalog, useCatalog_);
      DARABONBA_PTR_FROM_JSON(UseDelta, useDelta_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VolumeId, volumeId_);
    };
    CreateHanaRestoreRequest() = default ;
    CreateHanaRestoreRequest(const CreateHanaRestoreRequest &) = default ;
    CreateHanaRestoreRequest(CreateHanaRestoreRequest &&) = default ;
    CreateHanaRestoreRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHanaRestoreRequest() = default ;
    CreateHanaRestoreRequest& operator=(const CreateHanaRestoreRequest &) = default ;
    CreateHanaRestoreRequest& operator=(CreateHanaRestoreRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->backupPrefix_ == nullptr && this->checkAccess_ == nullptr && this->clearLog_ == nullptr && this->clusterId_ == nullptr && this->databaseName_ == nullptr
        && this->logPosition_ == nullptr && this->masterClientId_ == nullptr && this->mode_ == nullptr && this->recoveryPointInTime_ == nullptr && this->sidAdmin_ == nullptr
        && this->source_ == nullptr && this->sourceClusterId_ == nullptr && this->systemCopy_ == nullptr && this->useCatalog_ == nullptr && this->useDelta_ == nullptr
        && this->vaultId_ == nullptr && this->volumeId_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline int64_t getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, 0L) };
    inline CreateHanaRestoreRequest& setBackupId(int64_t backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // backupPrefix Field Functions 
    bool hasBackupPrefix() const { return this->backupPrefix_ != nullptr;};
    void deleteBackupPrefix() { this->backupPrefix_ = nullptr;};
    inline string getBackupPrefix() const { DARABONBA_PTR_GET_DEFAULT(backupPrefix_, "") };
    inline CreateHanaRestoreRequest& setBackupPrefix(string backupPrefix) { DARABONBA_PTR_SET_VALUE(backupPrefix_, backupPrefix) };


    // checkAccess Field Functions 
    bool hasCheckAccess() const { return this->checkAccess_ != nullptr;};
    void deleteCheckAccess() { this->checkAccess_ = nullptr;};
    inline bool getCheckAccess() const { DARABONBA_PTR_GET_DEFAULT(checkAccess_, false) };
    inline CreateHanaRestoreRequest& setCheckAccess(bool checkAccess) { DARABONBA_PTR_SET_VALUE(checkAccess_, checkAccess) };


    // clearLog Field Functions 
    bool hasClearLog() const { return this->clearLog_ != nullptr;};
    void deleteClearLog() { this->clearLog_ = nullptr;};
    inline bool getClearLog() const { DARABONBA_PTR_GET_DEFAULT(clearLog_, false) };
    inline CreateHanaRestoreRequest& setClearLog(bool clearLog) { DARABONBA_PTR_SET_VALUE(clearLog_, clearLog) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateHanaRestoreRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline CreateHanaRestoreRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // logPosition Field Functions 
    bool hasLogPosition() const { return this->logPosition_ != nullptr;};
    void deleteLogPosition() { this->logPosition_ = nullptr;};
    inline int64_t getLogPosition() const { DARABONBA_PTR_GET_DEFAULT(logPosition_, 0L) };
    inline CreateHanaRestoreRequest& setLogPosition(int64_t logPosition) { DARABONBA_PTR_SET_VALUE(logPosition_, logPosition) };


    // masterClientId Field Functions 
    bool hasMasterClientId() const { return this->masterClientId_ != nullptr;};
    void deleteMasterClientId() { this->masterClientId_ = nullptr;};
    inline string getMasterClientId() const { DARABONBA_PTR_GET_DEFAULT(masterClientId_, "") };
    inline CreateHanaRestoreRequest& setMasterClientId(string masterClientId) { DARABONBA_PTR_SET_VALUE(masterClientId_, masterClientId) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline CreateHanaRestoreRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // recoveryPointInTime Field Functions 
    bool hasRecoveryPointInTime() const { return this->recoveryPointInTime_ != nullptr;};
    void deleteRecoveryPointInTime() { this->recoveryPointInTime_ = nullptr;};
    inline int64_t getRecoveryPointInTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointInTime_, 0L) };
    inline CreateHanaRestoreRequest& setRecoveryPointInTime(int64_t recoveryPointInTime) { DARABONBA_PTR_SET_VALUE(recoveryPointInTime_, recoveryPointInTime) };


    // sidAdmin Field Functions 
    bool hasSidAdmin() const { return this->sidAdmin_ != nullptr;};
    void deleteSidAdmin() { this->sidAdmin_ = nullptr;};
    inline string getSidAdmin() const { DARABONBA_PTR_GET_DEFAULT(sidAdmin_, "") };
    inline CreateHanaRestoreRequest& setSidAdmin(string sidAdmin) { DARABONBA_PTR_SET_VALUE(sidAdmin_, sidAdmin) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateHanaRestoreRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceClusterId Field Functions 
    bool hasSourceClusterId() const { return this->sourceClusterId_ != nullptr;};
    void deleteSourceClusterId() { this->sourceClusterId_ = nullptr;};
    inline string getSourceClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceClusterId_, "") };
    inline CreateHanaRestoreRequest& setSourceClusterId(string sourceClusterId) { DARABONBA_PTR_SET_VALUE(sourceClusterId_, sourceClusterId) };


    // systemCopy Field Functions 
    bool hasSystemCopy() const { return this->systemCopy_ != nullptr;};
    void deleteSystemCopy() { this->systemCopy_ = nullptr;};
    inline bool getSystemCopy() const { DARABONBA_PTR_GET_DEFAULT(systemCopy_, false) };
    inline CreateHanaRestoreRequest& setSystemCopy(bool systemCopy) { DARABONBA_PTR_SET_VALUE(systemCopy_, systemCopy) };


    // useCatalog Field Functions 
    bool hasUseCatalog() const { return this->useCatalog_ != nullptr;};
    void deleteUseCatalog() { this->useCatalog_ = nullptr;};
    inline bool getUseCatalog() const { DARABONBA_PTR_GET_DEFAULT(useCatalog_, false) };
    inline CreateHanaRestoreRequest& setUseCatalog(bool useCatalog) { DARABONBA_PTR_SET_VALUE(useCatalog_, useCatalog) };


    // useDelta Field Functions 
    bool hasUseDelta() const { return this->useDelta_ != nullptr;};
    void deleteUseDelta() { this->useDelta_ = nullptr;};
    inline bool getUseDelta() const { DARABONBA_PTR_GET_DEFAULT(useDelta_, false) };
    inline CreateHanaRestoreRequest& setUseDelta(bool useDelta) { DARABONBA_PTR_SET_VALUE(useDelta_, useDelta) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateHanaRestoreRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // volumeId Field Functions 
    bool hasVolumeId() const { return this->volumeId_ != nullptr;};
    void deleteVolumeId() { this->volumeId_ = nullptr;};
    inline int32_t getVolumeId() const { DARABONBA_PTR_GET_DEFAULT(volumeId_, 0) };
    inline CreateHanaRestoreRequest& setVolumeId(int32_t volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };


  protected:
    // The ID of the backup.
    shared_ptr<int64_t> backupId_ {};
    // The backup prefix.
    // 
    // This parameter is required.
    shared_ptr<string> backupPrefix_ {};
    // Specifies whether to validate the differential backup and log backup. Valid values: true and false. If you set the value to true, HBR checks whether the required differential backup and log backup are available before the restore job starts. If the differential backup or log backup is unavailable, HBR does not start the restore job.
    shared_ptr<bool> checkAccess_ {};
    // Specifies whether to delete all log entries from the log area after the log entries are restored. Valid values: true and false. If you set the value to false, all log entries are deleted from the log area after the log entries are restored.
    shared_ptr<bool> clearLog_ {};
    // The ID of the SAP HANA instance that you want to restore.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The name of the database that you want to restore.
    // 
    // This parameter is required.
    shared_ptr<string> databaseName_ {};
    // The log position to which you want to restore the database. This parameter is valid only if you set the Mode parameter to **RECOVERY_TO_LOG_POSITION**.
    shared_ptr<int64_t> logPosition_ {};
    // The ID of the client where the primary node of the SAP HANA resides.
    shared_ptr<string> masterClientId_ {};
    // The recovery mode. Valid values:
    // 
    // *   **RECOVERY_TO_MOST_RECENT**: restores the database to the recently available state to which the database has been backed up.
    // *   **RECOVERY_TO_POINT_IN_TIME**: restores the database to a specified point in time.
    // *   **RECOVERY_TO_SPECIFIC_BACKUP**: restores the database to a specified backup.
    // *   **RECOVERY_TO_LOG_POSITION**: restores the database to a specified log position.
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // The point in time to which you want to restore the database. This parameter is valid only if you set the Mode parameter to **RECOVERY_TO_POINT_IN_TIME**. HBR restores the database to a state closest to the specified point in time.
    shared_ptr<int64_t> recoveryPointInTime_ {};
    // The SID admin account that is created by SAP HANA.
    shared_ptr<string> sidAdmin_ {};
    // The name of the source system. This parameter specifies the name of the source database that you want to restore. You must set the parameter in the `<Source database name>@SID` format.
    shared_ptr<string> source_ {};
    // The ID of the source SAP HANA instance.
    shared_ptr<string> sourceClusterId_ {};
    // Specifies whether to restore the database to a different instance.
    shared_ptr<bool> systemCopy_ {};
    // Specifies whether to use a catalog backup to restore the database. This parameter is required only if you set the Mode parameter to **RECOVERY_TO_SPECIFIC_BACKUP**. If you turn off Use Catalog, you must specify the prefix of a backup file. Then, Cloud Backup finds the backup file based on the specified prefix and restores the backup file.
    shared_ptr<bool> useCatalog_ {};
    // Specifies whether to use a differential backup or an incremental backup to restore the database. Valid values: true and false. If you want to use a differential backup or an incremental backup to restore the database, set the value to true. If you set the value to false, HBR uses a log backup to restore the database.
    shared_ptr<bool> useDelta_ {};
    // The ID of the backup vault.
    shared_ptr<string> vaultId_ {};
    // The ID of the volume that you want to restore. This parameter is valid only if you set the Mode parameter to **RECOVERY_TO_LOG_POSITION**.
    shared_ptr<int32_t> volumeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
