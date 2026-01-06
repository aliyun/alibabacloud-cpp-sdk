// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTOREJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTOREJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateRestoreJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestoreJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(FailbackDetail, failbackDetailShrink_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InitiatedByAck, initiatedByAck_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetailShrink_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(TargetBucket, targetBucket_);
      DARABONBA_PTR_TO_JSON(TargetContainer, targetContainer_);
      DARABONBA_PTR_TO_JSON(TargetContainerClusterId, targetContainerClusterId_);
      DARABONBA_PTR_TO_JSON(TargetCreateTime, targetCreateTime_);
      DARABONBA_PTR_TO_JSON(TargetFileSystemId, targetFileSystemId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_TO_JSON(TargetPrefix, targetPrefix_);
      DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
      DARABONBA_PTR_TO_JSON(TargetTime, targetTime_);
      DARABONBA_PTR_TO_JSON(UdmDetail, udmDetailShrink_);
      DARABONBA_PTR_TO_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(FailbackDetail, failbackDetailShrink_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InitiatedByAck, initiatedByAck_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetailShrink_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(TargetBucket, targetBucket_);
      DARABONBA_PTR_FROM_JSON(TargetContainer, targetContainer_);
      DARABONBA_PTR_FROM_JSON(TargetContainerClusterId, targetContainerClusterId_);
      DARABONBA_PTR_FROM_JSON(TargetCreateTime, targetCreateTime_);
      DARABONBA_PTR_FROM_JSON(TargetFileSystemId, targetFileSystemId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_FROM_JSON(TargetPrefix, targetPrefix_);
      DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
      DARABONBA_PTR_FROM_JSON(TargetTime, targetTime_);
      DARABONBA_PTR_FROM_JSON(UdmDetail, udmDetailShrink_);
      DARABONBA_PTR_FROM_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateRestoreJobShrinkRequest() = default ;
    CreateRestoreJobShrinkRequest(const CreateRestoreJobShrinkRequest &) = default ;
    CreateRestoreJobShrinkRequest(CreateRestoreJobShrinkRequest &&) = default ;
    CreateRestoreJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestoreJobShrinkRequest() = default ;
    CreateRestoreJobShrinkRequest& operator=(const CreateRestoreJobShrinkRequest &) = default ;
    CreateRestoreJobShrinkRequest& operator=(CreateRestoreJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccountRoleName_ == nullptr
        && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->edition_ == nullptr && this->exclude_ == nullptr && this->failbackDetailShrink_ == nullptr
        && this->include_ == nullptr && this->initiatedByAck_ == nullptr && this->options_ == nullptr && this->otsDetailShrink_ == nullptr && this->restoreType_ == nullptr
        && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr && this->targetBucket_ == nullptr && this->targetContainer_ == nullptr
        && this->targetContainerClusterId_ == nullptr && this->targetCreateTime_ == nullptr && this->targetFileSystemId_ == nullptr && this->targetInstanceId_ == nullptr && this->targetInstanceName_ == nullptr
        && this->targetPath_ == nullptr && this->targetPrefix_ == nullptr && this->targetTableName_ == nullptr && this->targetTime_ == nullptr && this->udmDetailShrink_ == nullptr
        && this->udmRegionId_ == nullptr && this->vaultId_ == nullptr; };
    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateRestoreJobShrinkRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateRestoreJobShrinkRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateRestoreJobShrinkRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateRestoreJobShrinkRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreateRestoreJobShrinkRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // failbackDetailShrink Field Functions 
    bool hasFailbackDetailShrink() const { return this->failbackDetailShrink_ != nullptr;};
    void deleteFailbackDetailShrink() { this->failbackDetailShrink_ = nullptr;};
    inline string getFailbackDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(failbackDetailShrink_, "") };
    inline CreateRestoreJobShrinkRequest& setFailbackDetailShrink(string failbackDetailShrink) { DARABONBA_PTR_SET_VALUE(failbackDetailShrink_, failbackDetailShrink) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreateRestoreJobShrinkRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // initiatedByAck Field Functions 
    bool hasInitiatedByAck() const { return this->initiatedByAck_ != nullptr;};
    void deleteInitiatedByAck() { this->initiatedByAck_ = nullptr;};
    inline bool getInitiatedByAck() const { DARABONBA_PTR_GET_DEFAULT(initiatedByAck_, false) };
    inline CreateRestoreJobShrinkRequest& setInitiatedByAck(bool initiatedByAck) { DARABONBA_PTR_SET_VALUE(initiatedByAck_, initiatedByAck) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateRestoreJobShrinkRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetailShrink Field Functions 
    bool hasOtsDetailShrink() const { return this->otsDetailShrink_ != nullptr;};
    void deleteOtsDetailShrink() { this->otsDetailShrink_ = nullptr;};
    inline string getOtsDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(otsDetailShrink_, "") };
    inline CreateRestoreJobShrinkRequest& setOtsDetailShrink(string otsDetailShrink) { DARABONBA_PTR_SET_VALUE(otsDetailShrink_, otsDetailShrink) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CreateRestoreJobShrinkRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline CreateRestoreJobShrinkRequest& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateRestoreJobShrinkRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRestoreJobShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetBucket Field Functions 
    bool hasTargetBucket() const { return this->targetBucket_ != nullptr;};
    void deleteTargetBucket() { this->targetBucket_ = nullptr;};
    inline string getTargetBucket() const { DARABONBA_PTR_GET_DEFAULT(targetBucket_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetBucket(string targetBucket) { DARABONBA_PTR_SET_VALUE(targetBucket_, targetBucket) };


    // targetContainer Field Functions 
    bool hasTargetContainer() const { return this->targetContainer_ != nullptr;};
    void deleteTargetContainer() { this->targetContainer_ = nullptr;};
    inline string getTargetContainer() const { DARABONBA_PTR_GET_DEFAULT(targetContainer_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetContainer(string targetContainer) { DARABONBA_PTR_SET_VALUE(targetContainer_, targetContainer) };


    // targetContainerClusterId Field Functions 
    bool hasTargetContainerClusterId() const { return this->targetContainerClusterId_ != nullptr;};
    void deleteTargetContainerClusterId() { this->targetContainerClusterId_ = nullptr;};
    inline string getTargetContainerClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetContainerClusterId_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetContainerClusterId(string targetContainerClusterId) { DARABONBA_PTR_SET_VALUE(targetContainerClusterId_, targetContainerClusterId) };


    // targetCreateTime Field Functions 
    bool hasTargetCreateTime() const { return this->targetCreateTime_ != nullptr;};
    void deleteTargetCreateTime() { this->targetCreateTime_ = nullptr;};
    inline int64_t getTargetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(targetCreateTime_, 0L) };
    inline CreateRestoreJobShrinkRequest& setTargetCreateTime(int64_t targetCreateTime) { DARABONBA_PTR_SET_VALUE(targetCreateTime_, targetCreateTime) };


    // targetFileSystemId Field Functions 
    bool hasTargetFileSystemId() const { return this->targetFileSystemId_ != nullptr;};
    void deleteTargetFileSystemId() { this->targetFileSystemId_ = nullptr;};
    inline string getTargetFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(targetFileSystemId_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetFileSystemId(string targetFileSystemId) { DARABONBA_PTR_SET_VALUE(targetFileSystemId_, targetFileSystemId) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string getTargetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


    // targetPrefix Field Functions 
    bool hasTargetPrefix() const { return this->targetPrefix_ != nullptr;};
    void deleteTargetPrefix() { this->targetPrefix_ = nullptr;};
    inline string getTargetPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetPrefix_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetPrefix(string targetPrefix) { DARABONBA_PTR_SET_VALUE(targetPrefix_, targetPrefix) };


    // targetTableName Field Functions 
    bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
    void deleteTargetTableName() { this->targetTableName_ = nullptr;};
    inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
    inline CreateRestoreJobShrinkRequest& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


    // targetTime Field Functions 
    bool hasTargetTime() const { return this->targetTime_ != nullptr;};
    void deleteTargetTime() { this->targetTime_ = nullptr;};
    inline int64_t getTargetTime() const { DARABONBA_PTR_GET_DEFAULT(targetTime_, 0L) };
    inline CreateRestoreJobShrinkRequest& setTargetTime(int64_t targetTime) { DARABONBA_PTR_SET_VALUE(targetTime_, targetTime) };


    // udmDetailShrink Field Functions 
    bool hasUdmDetailShrink() const { return this->udmDetailShrink_ != nullptr;};
    void deleteUdmDetailShrink() { this->udmDetailShrink_ = nullptr;};
    inline string getUdmDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(udmDetailShrink_, "") };
    inline CreateRestoreJobShrinkRequest& setUdmDetailShrink(string udmDetailShrink) { DARABONBA_PTR_SET_VALUE(udmDetailShrink_, udmDetailShrink) };


    // udmRegionId Field Functions 
    bool hasUdmRegionId() const { return this->udmRegionId_ != nullptr;};
    void deleteUdmRegionId() { this->udmRegionId_ = nullptr;};
    inline string getUdmRegionId() const { DARABONBA_PTR_GET_DEFAULT(udmRegionId_, "") };
    inline CreateRestoreJobShrinkRequest& setUdmRegionId(string udmRegionId) { DARABONBA_PTR_SET_VALUE(udmRegionId_, udmRegionId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateRestoreJobShrinkRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The name of the role created in the RAM of the original account for cross-account backup managed by the current account.
    shared_ptr<string> crossAccountRoleName_ {};
    // Cross-account backup type. Supported values:
    // - SELF_ACCOUNT: Backup within the same account
    // - CROSS_ACCOUNT: Cross-account backup
    shared_ptr<string> crossAccountType_ {};
    // The original account ID managed by the current account for cross-account backup.
    shared_ptr<int64_t> crossAccountUserId_ {};
    shared_ptr<string> edition_ {};
    // The path not to be restored. All documents under this path will not be restored. Maximum length is 255 characters.
    shared_ptr<string> exclude_ {};
    // Details of restoring to the local environment.
    shared_ptr<string> failbackDetailShrink_ {};
    // The path to be restored. All documents under this path will be restored. Maximum length is 255 characters.
    shared_ptr<string> include_ {};
    // Indicates whether it is called by the container service. Default is false.
    shared_ptr<bool> initiatedByAck_ {};
    // Parameters for the restore job.
    shared_ptr<string> options_ {};
    // Details of the Table Store instance.
    shared_ptr<string> otsDetailShrink_ {};
    // The type of the restore destination data source. Possible values:
    //   - **ECS_FILE**: Restore to ECS file.
    //   - **OSS**: Restore to Alibaba Cloud OSS.
    //   - **NAS**: Restore to Alibaba Cloud NAS.
    //   - **OTS_TABLE**: Restore to Alibaba Cloud OTS.
    //   - **UDM_ECS_ROLLBACK**: Restore to Alibaba Cloud ECS whole machine.
    // 
    // This parameter is required.
    shared_ptr<string> restoreType_ {};
    // The HASH value of the backup snapshot.
    shared_ptr<string> snapshotHash_ {};
    // The ID of the backup snapshot.
    shared_ptr<string> snapshotId_ {};
    // The type of the data source. Possible values:
    //   - **ECS_FILE**: Restore ECS file.
    //   - **OSS**: Restore Alibaba Cloud OSS.
    //   - **NAS**: Restore Alibaba Cloud NAS.
    //   - **OTS_TABLE**: Restore to Alibaba Cloud OTS.
    //   - **UDM_ECS**: Restore to Alibaba Cloud ECS whole machine.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // Valid only when **RestoreType** is **OSS**. Indicates the name of the OSS bucket at the restore destination.
    shared_ptr<string> targetBucket_ {};
    // Details of the target container.
    shared_ptr<string> targetContainer_ {};
    // The ID of the target container cluster.
    shared_ptr<string> targetContainerClusterId_ {};
    // Valid only when **RestoreType** is **NAS**. Indicates the creation time of the file system at the restore destination.
    shared_ptr<int64_t> targetCreateTime_ {};
    // Valid only when **RestoreType** is **NAS**. Indicates the ID of the file system at the restore destination.
    shared_ptr<string> targetFileSystemId_ {};
    // Valid only when **RestoreType** is **ECS_FILE**. Indicates the ECS instance ID at the restore destination.
    shared_ptr<string> targetInstanceId_ {};
    // The name of the target Table Store instance.
    shared_ptr<string> targetInstanceName_ {};
    // Valid only when **RestoreType** is **ECS_FILE**. Indicates the file path at the restore destination.
    shared_ptr<string> targetPath_ {};
    // Valid only when **RestoreType** is **OSS**. Indicates the object prefix at the restore destination.
    shared_ptr<string> targetPrefix_ {};
    // The name of the data table in the target Table Store.
    shared_ptr<string> targetTableName_ {};
    // The time of the Table Store to be restored. UNIX timestamp, in seconds.
    shared_ptr<int64_t> targetTime_ {};
    // The parameter is valid only when the SourceType is set to UDM_ECS. It represents the details of the entire machine backup and is a JSON string. Depending on the value of RestoreType, different details must be passed as follows:
    // - **UDM_ECS_DISK**: ECS disk cloning.
    //   - **targetInstanceId**: string (required). Specifies the target ECS instance ID to which the cloned disk will be attached.
    //   - **diskCategory**: string (required). Specifies the type of the target disk.
    //   - **diskPerformanceLevel**: string. When diskCategory is "essd", this indicates the disk performance level, supporting PL0, PL1, PL2, and PL3, with PL1 as the default.
    // - **UDM_ECS_DISK_ROLLBACK**: ECS disk rollback.
    //   - **sourceInstanceId**: string (required). Specifies the source ECS instance ID.
    //   - **forceRestore**: bool (default: false). Indicates whether to force restore. NOTE: If forceRestore is set to true, the disk restoration will proceed even if the backup disk has been unmounted from the original ECS instance or mounted to another instance. Exercise caution when using this option.
    //   - **bootAfterRestore**: bool (default: false). Indicates whether to start the ECS instance after restoration.
    // - **UDM_ECS**: Full ECS cloning.
    //   - **bootAfterRestore**: bool (default: false). Indicates whether to start the ECS instance after restoration.
    //   - **diskCategory**: string (required). Specifies the type of the target disk.
    //   - **diskPerformanceLevel**: string. When diskCategory is "essd", this indicates the disk performance level (PL0/PL1/PL2/PL3), defaulting to PL1.
    //   - **instanceType**: string (required). Specifies the specification of the target ECS instance.
    //   - **restoredNetwork**: string (required). Specifies the vSwitch ID for the target ECS instance.
    //   - **securityGroup**: string (required). Specifies the security group ID for the target ECS instance.
    //   - **restoredName:** string (required). Specifies the instance name of the target ECS instance.
    //   - **restoredHostName**: string (required). Specifies the host name of the target ECS instance.
    //   - **allocatePublicIp**: bool (default: false). Indicates whether to assign a public IP to the target ECS instance.
    //   - **privateIpAddress**: string. Specifies the internal IP address of the target ECS instance. If not specified, an IP will be assigned via DHCP.
    // - **UDM_ECS_ROLLBACK**: Full ECS rollback.
    //   - **sourceInstanceId**: string (required). Specifies the source ECS instance ID.
    //   - **forceRestore**: bool (default: false). Indicates whether to force restore. NOTE: If forceRestore is set to true, the disk restoration will proceed even if the backup disk has been unmounted from the original ECS instance or mounted to another instance. Exercise caution when using this option.
    //   - **bootAfterRestore**: bool (default: false). Indicates whether to start the ECS instance after restoration.
    shared_ptr<string> udmDetailShrink_ {};
    // Valid only when **SourceType** is **UDM_ECS**. Indicates the target region for the restore.
    shared_ptr<string> udmRegionId_ {};
    // The ID of the backup vault that the snapshot belongs to.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
