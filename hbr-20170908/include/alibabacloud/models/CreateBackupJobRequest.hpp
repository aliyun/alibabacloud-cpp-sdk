// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateBackupJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerClusterId, containerClusterId_);
      DARABONBA_PTR_TO_JSON(ContainerResources, containerResources_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_ANY_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InitiatedByAck, initiatedByAck_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerClusterId, containerClusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerResources, containerResources_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_ANY_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InitiatedByAck, initiatedByAck_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateBackupJobRequest() = default ;
    CreateBackupJobRequest(const CreateBackupJobRequest &) = default ;
    CreateBackupJobRequest(CreateBackupJobRequest &&) = default ;
    CreateBackupJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupJobRequest() = default ;
    CreateBackupJobRequest& operator=(const CreateBackupJobRequest &) = default ;
    CreateBackupJobRequest& operator=(CreateBackupJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupType_ != nullptr
        && this->clusterId_ != nullptr && this->containerClusterId_ != nullptr && this->containerResources_ != nullptr && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr
        && this->crossAccountUserId_ != nullptr && this->detail_ != nullptr && this->exclude_ != nullptr && this->include_ != nullptr && this->initiatedByAck_ != nullptr
        && this->instanceId_ != nullptr && this->jobName_ != nullptr && this->options_ != nullptr && this->retention_ != nullptr && this->sourceType_ != nullptr
        && this->speedLimit_ != nullptr && this->vaultId_ != nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupJobRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateBackupJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerClusterId Field Functions 
    bool hasContainerClusterId() const { return this->containerClusterId_ != nullptr;};
    void deleteContainerClusterId() { this->containerClusterId_ = nullptr;};
    inline string containerClusterId() const { DARABONBA_PTR_GET_DEFAULT(containerClusterId_, "") };
    inline CreateBackupJobRequest& setContainerClusterId(string containerClusterId) { DARABONBA_PTR_SET_VALUE(containerClusterId_, containerClusterId) };


    // containerResources Field Functions 
    bool hasContainerResources() const { return this->containerResources_ != nullptr;};
    void deleteContainerResources() { this->containerResources_ = nullptr;};
    inline string containerResources() const { DARABONBA_PTR_GET_DEFAULT(containerResources_, "") };
    inline CreateBackupJobRequest& setContainerResources(string containerResources) { DARABONBA_PTR_SET_VALUE(containerResources_, containerResources) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateBackupJobRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateBackupJobRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateBackupJobRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline     const Darabonba::Json & detail() const { DARABONBA_GET(detail_) };
    Darabonba::Json & detail() { DARABONBA_GET(detail_) };
    inline CreateBackupJobRequest& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
    inline CreateBackupJobRequest& setDetail(Darabonba::Json & detail) { DARABONBA_SET_RVALUE(detail_, detail) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreateBackupJobRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreateBackupJobRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // initiatedByAck Field Functions 
    bool hasInitiatedByAck() const { return this->initiatedByAck_ != nullptr;};
    void deleteInitiatedByAck() { this->initiatedByAck_ = nullptr;};
    inline bool initiatedByAck() const { DARABONBA_PTR_GET_DEFAULT(initiatedByAck_, false) };
    inline CreateBackupJobRequest& setInitiatedByAck(bool initiatedByAck) { DARABONBA_PTR_SET_VALUE(initiatedByAck_, initiatedByAck) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBackupJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateBackupJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateBackupJobRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t retention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline CreateBackupJobRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateBackupJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline CreateBackupJobRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateBackupJobRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The backup type. This parameter is required only if you set the SourceType parameter to UDM_ECS.
    // 
    // *   **COMPLETE**: full backup
    std::shared_ptr<string> backupType_ = nullptr;
    // You do not need to specify this parameter.
    std::shared_ptr<string> clusterId_ = nullptr;
    // You do not need to specify this parameter.
    std::shared_ptr<string> containerClusterId_ = nullptr;
    // You do not need to specify this parameter.
    std::shared_ptr<string> containerResources_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **UDM_ECS**. The value is a JSON string. Valid values:
    // 
    // *   doCopy: specifies whether to enable remote replication.
    // 
    // *   destinationRegionId: the destination region for remote replication.
    // 
    // *   destinationRetention: the retention period of the backup point for remote replication.
    // 
    // *   diskIdList: the IDs of the disks that are to be backed up. If this parameter is left empty, all disks are backed up.
    // 
    // *   snapshotGroup: specifies whether to use a snapshot-consistent group. This parameter is valid only if all disks of the ECS instance are Enterprise SSDs (ESSDs).
    // 
    // *   appConsistent: specifies whether to use the application-consistent backup feature. This parameter must be used with the preScriptPath and postScriptPath parameters.
    // 
    // *   preScriptPath: the path to the pre-freeze scripts.
    // 
    // *   postScriptPath: the path to the post-thaw scripts.
    // 
    // *   enableWriters: This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies whether to create application-consistent snapshots.
    // 
    //     *   true: creates application-consistent snapshots.
    //     *   false: creates file system-consistent snapshots.
    // 
    // *   enableFsFreeze: This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies whether to enable Linux fsfreeze to put file systems into the read-only state before application-consistent snapshots are created. Default value: true.
    // 
    // *   timeoutSeconds: This parameter is required only if you set the **AppConsistent** parameter to **true**. This parameter specifies the I/O freeze timeout period. Default value: 30. Unit: seconds.
    Darabonba::Json detail_ = nullptr;
    // This parameter does not take effect if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the paths to the files that are excluded from the backup job. The value can be up to 255 characters in length.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter does not take effect if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the paths to the files that are backed up. The value can be up to 255 characters in length.
    std::shared_ptr<string> include_ = nullptr;
    // false or left empty
    std::shared_ptr<bool> initiatedByAck_ = nullptr;
    // This parameter is required only if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the backup job.
    std::shared_ptr<string> jobName_ = nullptr;
    // You do not need to specify this parameter.
    std::shared_ptr<string> options_ = nullptr;
    // The retention period of the backup data. Unit: days.
    std::shared_ptr<int64_t> retention_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: Elastic Compute Service (ECS) instance
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // This parameter does not take effect if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the throttling rules. Format: `{start}|{end}|{bandwidth}`. Separate multiple throttling rules with vertical bars (|). A specified time range cannot overlap with another time range.
    // 
    // *   **start**: the start hour.
    // *   **end**: the end hour.
    // *   **bandwidth**: the bandwidth. Unit: KB/s.
    std::shared_ptr<string> speedLimit_ = nullptr;
    // The ID of the backup vault. This parameter is not required if you set the SourceType parameter to UDM_ECS.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
