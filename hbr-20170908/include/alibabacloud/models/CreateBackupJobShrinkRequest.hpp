// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateBackupJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ContainerClusterId, containerClusterId_);
      DARABONBA_PTR_TO_JSON(ContainerResources, containerResources_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(Detail, detailShrink_);
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
    friend void from_json(const Darabonba::Json& j, CreateBackupJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerClusterId, containerClusterId_);
      DARABONBA_PTR_FROM_JSON(ContainerResources, containerResources_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(Detail, detailShrink_);
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
    CreateBackupJobShrinkRequest() = default ;
    CreateBackupJobShrinkRequest(const CreateBackupJobShrinkRequest &) = default ;
    CreateBackupJobShrinkRequest(CreateBackupJobShrinkRequest &&) = default ;
    CreateBackupJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupJobShrinkRequest() = default ;
    CreateBackupJobShrinkRequest& operator=(const CreateBackupJobShrinkRequest &) = default ;
    CreateBackupJobShrinkRequest& operator=(CreateBackupJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupType_ == nullptr
        && this->clusterId_ == nullptr && this->containerClusterId_ == nullptr && this->containerResources_ == nullptr && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr
        && this->crossAccountUserId_ == nullptr && this->detailShrink_ == nullptr && this->exclude_ == nullptr && this->include_ == nullptr && this->initiatedByAck_ == nullptr
        && this->instanceId_ == nullptr && this->jobName_ == nullptr && this->options_ == nullptr && this->retention_ == nullptr && this->sourceType_ == nullptr
        && this->speedLimit_ == nullptr && this->vaultId_ == nullptr; };
    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline CreateBackupJobShrinkRequest& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateBackupJobShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // containerClusterId Field Functions 
    bool hasContainerClusterId() const { return this->containerClusterId_ != nullptr;};
    void deleteContainerClusterId() { this->containerClusterId_ = nullptr;};
    inline string getContainerClusterId() const { DARABONBA_PTR_GET_DEFAULT(containerClusterId_, "") };
    inline CreateBackupJobShrinkRequest& setContainerClusterId(string containerClusterId) { DARABONBA_PTR_SET_VALUE(containerClusterId_, containerClusterId) };


    // containerResources Field Functions 
    bool hasContainerResources() const { return this->containerResources_ != nullptr;};
    void deleteContainerResources() { this->containerResources_ = nullptr;};
    inline string getContainerResources() const { DARABONBA_PTR_GET_DEFAULT(containerResources_, "") };
    inline CreateBackupJobShrinkRequest& setContainerResources(string containerResources) { DARABONBA_PTR_SET_VALUE(containerResources_, containerResources) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateBackupJobShrinkRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateBackupJobShrinkRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateBackupJobShrinkRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // detailShrink Field Functions 
    bool hasDetailShrink() const { return this->detailShrink_ != nullptr;};
    void deleteDetailShrink() { this->detailShrink_ = nullptr;};
    inline string getDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(detailShrink_, "") };
    inline CreateBackupJobShrinkRequest& setDetailShrink(string detailShrink) { DARABONBA_PTR_SET_VALUE(detailShrink_, detailShrink) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreateBackupJobShrinkRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreateBackupJobShrinkRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // initiatedByAck Field Functions 
    bool hasInitiatedByAck() const { return this->initiatedByAck_ != nullptr;};
    void deleteInitiatedByAck() { this->initiatedByAck_ = nullptr;};
    inline bool getInitiatedByAck() const { DARABONBA_PTR_GET_DEFAULT(initiatedByAck_, false) };
    inline CreateBackupJobShrinkRequest& setInitiatedByAck(bool initiatedByAck) { DARABONBA_PTR_SET_VALUE(initiatedByAck_, initiatedByAck) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBackupJobShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateBackupJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateBackupJobShrinkRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
    inline CreateBackupJobShrinkRequest& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateBackupJobShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline CreateBackupJobShrinkRequest& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateBackupJobShrinkRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The backup type. This parameter is required only if you set the SourceType parameter to UDM_ECS.
    // 
    // *   **COMPLETE**: full backup
    shared_ptr<string> backupType_ {};
    // You do not need to specify this parameter.
    shared_ptr<string> clusterId_ {};
    // You do not need to specify this parameter.
    shared_ptr<string> containerClusterId_ {};
    // You do not need to specify this parameter.
    shared_ptr<string> containerResources_ {};
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    shared_ptr<string> crossAccountRoleName_ {};
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    shared_ptr<string> crossAccountType_ {};
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    shared_ptr<int64_t> crossAccountUserId_ {};
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
    shared_ptr<string> detailShrink_ {};
    // This parameter does not take effect if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the paths to the files that are excluded from the backup job. The value can be up to 255 characters in length.
    shared_ptr<string> exclude_ {};
    // This parameter does not take effect if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the paths to the files that are backed up. The value can be up to 255 characters in length.
    shared_ptr<string> include_ {};
    // false or left empty
    shared_ptr<bool> initiatedByAck_ {};
    // This parameter is required only if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the ID of the ECS instance.
    shared_ptr<string> instanceId_ {};
    // The name of the backup job.
    shared_ptr<string> jobName_ {};
    // You do not need to specify this parameter.
    shared_ptr<string> options_ {};
    // The retention period of the backup data. Unit: days.
    shared_ptr<int64_t> retention_ {};
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: Elastic Compute Service (ECS) instance
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // This parameter does not take effect if you set the **SourceType** parameter to **UDM_ECS**. This parameter specifies the throttling rules. Format: `{start}|{end}|{bandwidth}`. Separate multiple throttling rules with vertical bars (|). A specified time range cannot overlap with another time range.
    // 
    // *   **start**: the start hour.
    // *   **end**: the end hour.
    // *   **bandwidth**: the bandwidth. Unit: KB/s.
    shared_ptr<string> speedLimit_ {};
    // The ID of the backup vault. This parameter is not required if you set the SourceType parameter to UDM_ECS.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
