// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPLANSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPLANSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateBackupPlanShrinkRequestRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateBackupPlanShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPlanShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(DestDataSourceDetail, destDataSourceDetailShrink_);
      DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_TO_JSON(DestSourceType, destSourceType_);
      DARABONBA_PTR_TO_JSON(Detail, detailShrink_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetailShrink_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Schedule, schedule_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPlanShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceDetail, destDataSourceDetailShrink_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestSourceType, destSourceType_);
      DARABONBA_PTR_FROM_JSON(Detail, detailShrink_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(KeepLatestSnapshots, keepLatestSnapshots_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetailShrink_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Schedule, schedule_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateBackupPlanShrinkRequest() = default ;
    CreateBackupPlanShrinkRequest(const CreateBackupPlanShrinkRequest &) = default ;
    CreateBackupPlanShrinkRequest(CreateBackupPlanShrinkRequest &&) = default ;
    CreateBackupPlanShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPlanShrinkRequest() = default ;
    CreateBackupPlanShrinkRequest& operator=(const CreateBackupPlanShrinkRequest &) = default ;
    CreateBackupPlanShrinkRequest& operator=(CreateBackupPlanShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupType_ != nullptr
        && this->bucket_ != nullptr && this->changeListPath_ != nullptr && this->clusterId_ != nullptr && this->createTime_ != nullptr && this->crossAccountRoleName_ != nullptr
        && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->dataSourceId_ != nullptr && this->destDataSourceDetailShrink_ != nullptr && this->destDataSourceId_ != nullptr
        && this->destSourceType_ != nullptr && this->detailShrink_ != nullptr && this->disabled_ != nullptr && this->exclude_ != nullptr && this->fileSystemId_ != nullptr
        && this->include_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->keepLatestSnapshots_ != nullptr && this->options_ != nullptr
        && this->otsDetailShrink_ != nullptr && this->path_ != nullptr && this->planName_ != nullptr && this->prefix_ != nullptr && this->retention_ != nullptr
        && this->rule_ != nullptr && this->schedule_ != nullptr && this->sourceType_ != nullptr && this->speedLimit_ != nullptr && this->udmRegionId_ != nullptr
        && this->vaultId_ != nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupPlanShrinkRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline CreateBackupPlanShrinkRequest& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // changeListPath Field Functions 
    bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
    void deleteChangeListPath() { this->changeListPath_ = nullptr;};
    inline string changeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
    inline CreateBackupPlanShrinkRequest& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateBackupPlanShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateBackupPlanShrinkRequest& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateBackupPlanShrinkRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateBackupPlanShrinkRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateBackupPlanShrinkRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline CreateBackupPlanShrinkRequest& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // destDataSourceDetailShrink Field Functions 
    bool hasDestDataSourceDetailShrink() const { return this->destDataSourceDetailShrink_ != nullptr;};
    void deleteDestDataSourceDetailShrink() { this->destDataSourceDetailShrink_ = nullptr;};
    inline string destDataSourceDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceDetailShrink_, "") };
    inline CreateBackupPlanShrinkRequest& setDestDataSourceDetailShrink(string destDataSourceDetailShrink) { DARABONBA_PTR_SET_VALUE(destDataSourceDetailShrink_, destDataSourceDetailShrink) };


    // destDataSourceId Field Functions 
    bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
    void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
    inline string destDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
    inline CreateBackupPlanShrinkRequest& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


    // destSourceType Field Functions 
    bool hasDestSourceType() const { return this->destSourceType_ != nullptr;};
    void deleteDestSourceType() { this->destSourceType_ = nullptr;};
    inline string destSourceType() const { DARABONBA_PTR_GET_DEFAULT(destSourceType_, "") };
    inline CreateBackupPlanShrinkRequest& setDestSourceType(string destSourceType) { DARABONBA_PTR_SET_VALUE(destSourceType_, destSourceType) };


    // detailShrink Field Functions 
    bool hasDetailShrink() const { return this->detailShrink_ != nullptr;};
    void deleteDetailShrink() { this->detailShrink_ = nullptr;};
    inline string detailShrink() const { DARABONBA_PTR_GET_DEFAULT(detailShrink_, "") };
    inline CreateBackupPlanShrinkRequest& setDetailShrink(string detailShrink) { DARABONBA_PTR_SET_VALUE(detailShrink_, detailShrink) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline CreateBackupPlanShrinkRequest& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreateBackupPlanShrinkRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline CreateBackupPlanShrinkRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreateBackupPlanShrinkRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBackupPlanShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateBackupPlanShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // keepLatestSnapshots Field Functions 
    bool hasKeepLatestSnapshots() const { return this->keepLatestSnapshots_ != nullptr;};
    void deleteKeepLatestSnapshots() { this->keepLatestSnapshots_ = nullptr;};
    inline int64_t keepLatestSnapshots() const { DARABONBA_PTR_GET_DEFAULT(keepLatestSnapshots_, 0L) };
    inline CreateBackupPlanShrinkRequest& setKeepLatestSnapshots(int64_t keepLatestSnapshots) { DARABONBA_PTR_SET_VALUE(keepLatestSnapshots_, keepLatestSnapshots) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateBackupPlanShrinkRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetailShrink Field Functions 
    bool hasOtsDetailShrink() const { return this->otsDetailShrink_ != nullptr;};
    void deleteOtsDetailShrink() { this->otsDetailShrink_ = nullptr;};
    inline string otsDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(otsDetailShrink_, "") };
    inline CreateBackupPlanShrinkRequest& setOtsDetailShrink(string otsDetailShrink) { DARABONBA_PTR_SET_VALUE(otsDetailShrink_, otsDetailShrink) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline const vector<string> & path() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
    inline vector<string> path() { DARABONBA_PTR_GET(path_, vector<string>) };
    inline CreateBackupPlanShrinkRequest& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
    inline CreateBackupPlanShrinkRequest& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string planName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateBackupPlanShrinkRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline CreateBackupPlanShrinkRequest& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline CreateBackupPlanShrinkRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<CreateBackupPlanShrinkRequestRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<CreateBackupPlanShrinkRequestRule>) };
    inline vector<CreateBackupPlanShrinkRequestRule> rule() { DARABONBA_PTR_GET(rule_, vector<CreateBackupPlanShrinkRequestRule>) };
    inline CreateBackupPlanShrinkRequest& setRule(const vector<CreateBackupPlanShrinkRequestRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline CreateBackupPlanShrinkRequest& setRule(vector<CreateBackupPlanShrinkRequestRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // schedule Field Functions 
    bool hasSchedule() const { return this->schedule_ != nullptr;};
    void deleteSchedule() { this->schedule_ = nullptr;};
    inline string schedule() const { DARABONBA_PTR_GET_DEFAULT(schedule_, "") };
    inline CreateBackupPlanShrinkRequest& setSchedule(string schedule) { DARABONBA_PTR_SET_VALUE(schedule_, schedule) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateBackupPlanShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline CreateBackupPlanShrinkRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // udmRegionId Field Functions 
    bool hasUdmRegionId() const { return this->udmRegionId_ != nullptr;};
    void deleteUdmRegionId() { this->udmRegionId_ = nullptr;};
    inline string udmRegionId() const { DARABONBA_PTR_GET_DEFAULT(udmRegionId_, "") };
    inline CreateBackupPlanShrinkRequest& setUdmRegionId(string udmRegionId) { DARABONBA_PTR_SET_VALUE(udmRegionId_, udmRegionId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateBackupPlanShrinkRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // Backup type. Value: **COMPLETE**, indicating a full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // This parameter is required when **SourceType** is set to **OSS**. It represents the OSS bucket name.
    std::shared_ptr<string> bucket_ = nullptr;
    // Configuration for the incremental file synchronization list. (Required only for synchronization)
    std::shared_ptr<string> changeListPath_ = nullptr;
    // The ID of the client group that executes the data synchronization plan. This parameter is required only for data synchronization.
    std::shared_ptr<string> clusterId_ = nullptr;
    // This parameter is required when **SourceType** is set to **NAS**. It represents the creation time of the file system, in UNIX timestamp, in seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The role name created in the RAM of the original account for cross-account backup.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Cross-account backup type. Supported values:
    // - SELF_ACCOUNT: Backup within the same account
    // - CROSS_ACCOUNT: Cross-account backup
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The original account ID used for cross-account backup.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The ID of the data source. This parameter is required only for data synchronization.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Destination data source details. (Required only for synchronization)
    std::shared_ptr<string> destDataSourceDetailShrink_ = nullptr;
    // Destination data source ID. (Required only for synchronization)
    std::shared_ptr<string> destDataSourceId_ = nullptr;
    // Destination data source type. (Required only for synchronization)
    std::shared_ptr<string> destSourceType_ = nullptr;
    // Details of the whole machine backup, in JSON string format.
    // 
    // * snapshotGroup: Whether to use a consistent snapshot group (only valid if all instance disks are ESSD).
    // * appConsistent: Whether to use application consistency (requires the use of preScriptPath and postScriptPath parameters).
    // * preScriptPath: Path to the freeze script.
    // * postScriptPath: Path to the thaw script.
    std::shared_ptr<string> detailShrink_ = nullptr;
    // Is the plan disabled by default
    std::shared_ptr<bool> disabled_ = nullptr;
    // This parameter is required only when **SourceType** is set to **ECS_FILE**. It specifies the path that should not be backed up, meaning all files under this path will not be included in the backup. The maximum length is 255 characters.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter is required when **SourceType** is set to **NAS**. It represents the file system ID.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It represents the path to be backed up, and all files under this path will be backed up. Supports up to 255 characters.
    std::shared_ptr<string> include_ = nullptr;
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It represents the ECS instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Table store instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Whether to enable retaining at least one backup version.
    // - 0 - Do not retain
    // - 1 - Retain
    std::shared_ptr<int64_t> keepLatestSnapshots_ = nullptr;
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It indicates whether to use the Windows system VSS to define the backup path.
    // 
    // - This feature only supports Windows type ECS instances.
    // - If there are data changes in the backup source and you need to ensure consistency between the backup data and the source data, you can configure it as `["UseVSS":true]`.
    // - After choosing to use VSS, multiple file directories cannot be backed up simultaneously.
    std::shared_ptr<string> options_ = nullptr;
    // The details about the Tablestore instance.
    std::shared_ptr<string> otsDetailShrink_ = nullptr;
    // Backup paths.
    std::shared_ptr<vector<string>> path_ = nullptr;
    // Name of the backup plan. 1 to 64 characters. The name must be unique for each data source type within a single backup vault.
    std::shared_ptr<string> planName_ = nullptr;
    // This parameter is required when **SourceType** is set to **OSS**. It represents the backup prefix. When specified, only objects matching the prefix are backed up.
    std::shared_ptr<string> prefix_ = nullptr;
    // Number of days to retain the backup, with a minimum value of 1, in days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // Backup plan rules.
    std::shared_ptr<vector<CreateBackupPlanShrinkRequestRule>> rule_ = nullptr;
    // Backup policy. Optional format: `I|{startTime}|{interval}`. This indicates that a backup task will be executed every `{interval}` starting from `{startTime}`. It does not compensate for missed backup tasks due to past time. If the previous backup task has not been completed, the next backup task will not be triggered. For example, `I|1631685600|P1D` means a backup is performed every day starting from 2021-09-15 14:00:00.
    // 
    // - **startTime**: Start time of the backup, in UNIX timestamp, in seconds.
    // - **interval**: ISO8601 time interval. For example, PT1H indicates an interval of one hour, and P1D indicates an interval of one day.
    std::shared_ptr<string> schedule_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: Elastic Compute Service (ECS) files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: File Storage NAS (NAS) file systems
    // *   **OTS**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    // *   **SYNC**: data synchronization
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter is required when **SourceType** is set to **ECS_FILE**. It represents the backup traffic control. Format: `{start}:{end}:{bandwidth}`. Multiple traffic control configurations are separated by |, and the configured times should not overlap.
    // 
    // - **start**: Start hour.
    // - **end**: End hour.
    // - **bandwidth**: Limit rate, in KB/s.
    std::shared_ptr<string> speedLimit_ = nullptr;
    // Region where the whole machine backup instance is located.
    std::shared_ptr<string> udmRegionId_ = nullptr;
    // Backup vault ID.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
