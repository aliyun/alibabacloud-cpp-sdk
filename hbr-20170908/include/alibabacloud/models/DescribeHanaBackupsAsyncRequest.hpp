// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHANABACKUPSASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeHanaBackupsAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHanaBackupsAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IncludeDifferential, includeDifferential_);
      DARABONBA_PTR_TO_JSON(IncludeIncremental, includeIncremental_);
      DARABONBA_PTR_TO_JSON(IncludeLog, includeLog_);
      DARABONBA_PTR_TO_JSON(LogPosition, logPosition_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecoveryPointInTime, recoveryPointInTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceClusterId, sourceClusterId_);
      DARABONBA_PTR_TO_JSON(SystemCopy, systemCopy_);
      DARABONBA_PTR_TO_JSON(UseBackint, useBackint_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      DARABONBA_PTR_TO_JSON(VolumeId, volumeId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHanaBackupsAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IncludeDifferential, includeDifferential_);
      DARABONBA_PTR_FROM_JSON(IncludeIncremental, includeIncremental_);
      DARABONBA_PTR_FROM_JSON(IncludeLog, includeLog_);
      DARABONBA_PTR_FROM_JSON(LogPosition, logPosition_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecoveryPointInTime, recoveryPointInTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceClusterId, sourceClusterId_);
      DARABONBA_PTR_FROM_JSON(SystemCopy, systemCopy_);
      DARABONBA_PTR_FROM_JSON(UseBackint, useBackint_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      DARABONBA_PTR_FROM_JSON(VolumeId, volumeId_);
    };
    DescribeHanaBackupsAsyncRequest() = default ;
    DescribeHanaBackupsAsyncRequest(const DescribeHanaBackupsAsyncRequest &) = default ;
    DescribeHanaBackupsAsyncRequest(DescribeHanaBackupsAsyncRequest &&) = default ;
    DescribeHanaBackupsAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHanaBackupsAsyncRequest() = default ;
    DescribeHanaBackupsAsyncRequest& operator=(const DescribeHanaBackupsAsyncRequest &) = default ;
    DescribeHanaBackupsAsyncRequest& operator=(DescribeHanaBackupsAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->databaseName_ == nullptr && return this->includeDifferential_ == nullptr && return this->includeIncremental_ == nullptr && return this->includeLog_ == nullptr && return this->logPosition_ == nullptr
        && return this->mode_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->recoveryPointInTime_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->source_ == nullptr && return this->sourceClusterId_ == nullptr && return this->systemCopy_ == nullptr && return this->useBackint_ == nullptr && return this->vaultId_ == nullptr
        && return this->volumeId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeHanaBackupsAsyncRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeHanaBackupsAsyncRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // includeDifferential Field Functions 
    bool hasIncludeDifferential() const { return this->includeDifferential_ != nullptr;};
    void deleteIncludeDifferential() { this->includeDifferential_ = nullptr;};
    inline bool includeDifferential() const { DARABONBA_PTR_GET_DEFAULT(includeDifferential_, false) };
    inline DescribeHanaBackupsAsyncRequest& setIncludeDifferential(bool includeDifferential) { DARABONBA_PTR_SET_VALUE(includeDifferential_, includeDifferential) };


    // includeIncremental Field Functions 
    bool hasIncludeIncremental() const { return this->includeIncremental_ != nullptr;};
    void deleteIncludeIncremental() { this->includeIncremental_ = nullptr;};
    inline bool includeIncremental() const { DARABONBA_PTR_GET_DEFAULT(includeIncremental_, false) };
    inline DescribeHanaBackupsAsyncRequest& setIncludeIncremental(bool includeIncremental) { DARABONBA_PTR_SET_VALUE(includeIncremental_, includeIncremental) };


    // includeLog Field Functions 
    bool hasIncludeLog() const { return this->includeLog_ != nullptr;};
    void deleteIncludeLog() { this->includeLog_ = nullptr;};
    inline bool includeLog() const { DARABONBA_PTR_GET_DEFAULT(includeLog_, false) };
    inline DescribeHanaBackupsAsyncRequest& setIncludeLog(bool includeLog) { DARABONBA_PTR_SET_VALUE(includeLog_, includeLog) };


    // logPosition Field Functions 
    bool hasLogPosition() const { return this->logPosition_ != nullptr;};
    void deleteLogPosition() { this->logPosition_ = nullptr;};
    inline int64_t logPosition() const { DARABONBA_PTR_GET_DEFAULT(logPosition_, 0L) };
    inline DescribeHanaBackupsAsyncRequest& setLogPosition(int64_t logPosition) { DARABONBA_PTR_SET_VALUE(logPosition_, logPosition) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeHanaBackupsAsyncRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHanaBackupsAsyncRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHanaBackupsAsyncRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recoveryPointInTime Field Functions 
    bool hasRecoveryPointInTime() const { return this->recoveryPointInTime_ != nullptr;};
    void deleteRecoveryPointInTime() { this->recoveryPointInTime_ = nullptr;};
    inline int64_t recoveryPointInTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryPointInTime_, 0L) };
    inline DescribeHanaBackupsAsyncRequest& setRecoveryPointInTime(int64_t recoveryPointInTime) { DARABONBA_PTR_SET_VALUE(recoveryPointInTime_, recoveryPointInTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeHanaBackupsAsyncRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeHanaBackupsAsyncRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceClusterId Field Functions 
    bool hasSourceClusterId() const { return this->sourceClusterId_ != nullptr;};
    void deleteSourceClusterId() { this->sourceClusterId_ = nullptr;};
    inline string sourceClusterId() const { DARABONBA_PTR_GET_DEFAULT(sourceClusterId_, "") };
    inline DescribeHanaBackupsAsyncRequest& setSourceClusterId(string sourceClusterId) { DARABONBA_PTR_SET_VALUE(sourceClusterId_, sourceClusterId) };


    // systemCopy Field Functions 
    bool hasSystemCopy() const { return this->systemCopy_ != nullptr;};
    void deleteSystemCopy() { this->systemCopy_ = nullptr;};
    inline bool systemCopy() const { DARABONBA_PTR_GET_DEFAULT(systemCopy_, false) };
    inline DescribeHanaBackupsAsyncRequest& setSystemCopy(bool systemCopy) { DARABONBA_PTR_SET_VALUE(systemCopy_, systemCopy) };


    // useBackint Field Functions 
    bool hasUseBackint() const { return this->useBackint_ != nullptr;};
    void deleteUseBackint() { this->useBackint_ = nullptr;};
    inline bool useBackint() const { DARABONBA_PTR_GET_DEFAULT(useBackint_, false) };
    inline DescribeHanaBackupsAsyncRequest& setUseBackint(bool useBackint) { DARABONBA_PTR_SET_VALUE(useBackint_, useBackint) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeHanaBackupsAsyncRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    // volumeId Field Functions 
    bool hasVolumeId() const { return this->volumeId_ != nullptr;};
    void deleteVolumeId() { this->volumeId_ = nullptr;};
    inline int32_t volumeId() const { DARABONBA_PTR_GET_DEFAULT(volumeId_, 0) };
    inline DescribeHanaBackupsAsyncRequest& setVolumeId(int32_t volumeId) { DARABONBA_PTR_SET_VALUE(volumeId_, volumeId) };


  protected:
    // The ID of the SAP HANA instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to include differential backups in the query results. Valid values:
    // 
    // *   true: includes differential backups.
    // *   false: excludes differential backups.
    std::shared_ptr<bool> includeDifferential_ = nullptr;
    // Specifies whether to include incremental backups in the query results. Valid values:
    // 
    // *   true: includes incremental backups.
    // *   false: excludes incremental backups.
    std::shared_ptr<bool> includeIncremental_ = nullptr;
    // Specifies whether to include log backups in the query results. Valid values:
    // 
    // *   true: includes log backups.
    // *   false: excludes log backups.
    std::shared_ptr<bool> includeLog_ = nullptr;
    // The log position to which you want to restore the database. This parameter is valid only if you set the Mode parameter to **RECOVERY_TO_LOG_POSITION**.
    std::shared_ptr<int64_t> logPosition_ = nullptr;
    // The recovery mode. Valid values:
    // 
    // *   **RECOVERY_TO_MOST_RECENT**: restores the database to the recently available state to which the database has been backed up.
    // *   **RECOVERY_TO_POINT_IN_TIME**: restores the database to a specified point in time.
    // *   **RECOVERY_TO_SPECIFIC_BACKUP**: restores the database to a specified backup.
    // *   **RECOVERY_TO_LOG_POSITION**: restores the database to a specified log position.
    std::shared_ptr<string> mode_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The point in time to which you want to restore the database. This parameter is valid only if you set the Mode parameter to **RECOVERY_TO_POINT_IN_TIME**. Cloud Backup restores the database to a state closest to the specified point in time.
    std::shared_ptr<int64_t> recoveryPointInTime_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the source system. This parameter specifies the name of the source database that you want to restore. You must set the parameter in the `<Source database name>@SID` format.
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the source SAP HANA instance.
    std::shared_ptr<string> sourceClusterId_ = nullptr;
    // Specifies whether to restore the database to a different instance.
    // 
    // *   true: restores the database to a different instance.
    // *   false: restores the database within the same instance.
    std::shared_ptr<bool> systemCopy_ = nullptr;
    // Specifies whether Backint is used. Valid values:
    // 
    // *   true: Backint is used.
    // *   false: Backint is not used.
    std::shared_ptr<bool> useBackint_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
    // The ID of the volume that you want to restore. This parameter is valid only if you set the Mode parameter to **RECOVERY_TO_LOG_POSITION**.
    std::shared_ptr<int32_t> volumeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
