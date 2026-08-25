// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTOREJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTOREJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OtsTableRestoreDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateRestoreJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestoreJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_ANY_TO_JSON(FailbackDetail, failbackDetail_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InitiatedByAck, initiatedByAck_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
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
      DARABONBA_ANY_TO_JSON(UdmDetail, udmDetail_);
      DARABONBA_PTR_TO_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_ANY_FROM_JSON(FailbackDetail, failbackDetail_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InitiatedByAck, initiatedByAck_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
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
      DARABONBA_ANY_FROM_JSON(UdmDetail, udmDetail_);
      DARABONBA_PTR_FROM_JSON(UdmRegionId, udmRegionId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CreateRestoreJobRequest() = default ;
    CreateRestoreJobRequest(const CreateRestoreJobRequest &) = default ;
    CreateRestoreJobRequest(CreateRestoreJobRequest &&) = default ;
    CreateRestoreJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestoreJobRequest() = default ;
    CreateRestoreJobRequest& operator=(const CreateRestoreJobRequest &) = default ;
    CreateRestoreJobRequest& operator=(CreateRestoreJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crossAccountRoleName_ == nullptr
        && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->edition_ == nullptr && this->exclude_ == nullptr && this->failbackDetail_ == nullptr
        && this->include_ == nullptr && this->initiatedByAck_ == nullptr && this->options_ == nullptr && this->otsDetail_ == nullptr && this->restoreType_ == nullptr
        && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr && this->targetBucket_ == nullptr && this->targetContainer_ == nullptr
        && this->targetContainerClusterId_ == nullptr && this->targetCreateTime_ == nullptr && this->targetFileSystemId_ == nullptr && this->targetInstanceId_ == nullptr && this->targetInstanceName_ == nullptr
        && this->targetPath_ == nullptr && this->targetPrefix_ == nullptr && this->targetTableName_ == nullptr && this->targetTime_ == nullptr && this->udmDetail_ == nullptr
        && this->udmRegionId_ == nullptr && this->vaultId_ == nullptr; };
    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline CreateRestoreJobRequest& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline CreateRestoreJobRequest& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline CreateRestoreJobRequest& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string getEdition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CreateRestoreJobRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline CreateRestoreJobRequest& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // failbackDetail Field Functions 
    bool hasFailbackDetail() const { return this->failbackDetail_ != nullptr;};
    void deleteFailbackDetail() { this->failbackDetail_ = nullptr;};
    inline     const Darabonba::Json & getFailbackDetail() const { DARABONBA_GET(failbackDetail_) };
    Darabonba::Json & getFailbackDetail() { DARABONBA_GET(failbackDetail_) };
    inline CreateRestoreJobRequest& setFailbackDetail(const Darabonba::Json & failbackDetail) { DARABONBA_SET_VALUE(failbackDetail_, failbackDetail) };
    inline CreateRestoreJobRequest& setFailbackDetail(Darabonba::Json && failbackDetail) { DARABONBA_SET_RVALUE(failbackDetail_, failbackDetail) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline CreateRestoreJobRequest& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // initiatedByAck Field Functions 
    bool hasInitiatedByAck() const { return this->initiatedByAck_ != nullptr;};
    void deleteInitiatedByAck() { this->initiatedByAck_ = nullptr;};
    inline bool getInitiatedByAck() const { DARABONBA_PTR_GET_DEFAULT(initiatedByAck_, false) };
    inline CreateRestoreJobRequest& setInitiatedByAck(bool initiatedByAck) { DARABONBA_PTR_SET_VALUE(initiatedByAck_, initiatedByAck) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateRestoreJobRequest& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const OtsTableRestoreDetail & getOtsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, OtsTableRestoreDetail) };
    inline OtsTableRestoreDetail getOtsDetail() { DARABONBA_PTR_GET(otsDetail_, OtsTableRestoreDetail) };
    inline CreateRestoreJobRequest& setOtsDetail(const OtsTableRestoreDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline CreateRestoreJobRequest& setOtsDetail(OtsTableRestoreDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline CreateRestoreJobRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline CreateRestoreJobRequest& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline CreateRestoreJobRequest& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateRestoreJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // targetBucket Field Functions 
    bool hasTargetBucket() const { return this->targetBucket_ != nullptr;};
    void deleteTargetBucket() { this->targetBucket_ = nullptr;};
    inline string getTargetBucket() const { DARABONBA_PTR_GET_DEFAULT(targetBucket_, "") };
    inline CreateRestoreJobRequest& setTargetBucket(string targetBucket) { DARABONBA_PTR_SET_VALUE(targetBucket_, targetBucket) };


    // targetContainer Field Functions 
    bool hasTargetContainer() const { return this->targetContainer_ != nullptr;};
    void deleteTargetContainer() { this->targetContainer_ = nullptr;};
    inline string getTargetContainer() const { DARABONBA_PTR_GET_DEFAULT(targetContainer_, "") };
    inline CreateRestoreJobRequest& setTargetContainer(string targetContainer) { DARABONBA_PTR_SET_VALUE(targetContainer_, targetContainer) };


    // targetContainerClusterId Field Functions 
    bool hasTargetContainerClusterId() const { return this->targetContainerClusterId_ != nullptr;};
    void deleteTargetContainerClusterId() { this->targetContainerClusterId_ = nullptr;};
    inline string getTargetContainerClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetContainerClusterId_, "") };
    inline CreateRestoreJobRequest& setTargetContainerClusterId(string targetContainerClusterId) { DARABONBA_PTR_SET_VALUE(targetContainerClusterId_, targetContainerClusterId) };


    // targetCreateTime Field Functions 
    bool hasTargetCreateTime() const { return this->targetCreateTime_ != nullptr;};
    void deleteTargetCreateTime() { this->targetCreateTime_ = nullptr;};
    inline int64_t getTargetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(targetCreateTime_, 0L) };
    inline CreateRestoreJobRequest& setTargetCreateTime(int64_t targetCreateTime) { DARABONBA_PTR_SET_VALUE(targetCreateTime_, targetCreateTime) };


    // targetFileSystemId Field Functions 
    bool hasTargetFileSystemId() const { return this->targetFileSystemId_ != nullptr;};
    void deleteTargetFileSystemId() { this->targetFileSystemId_ = nullptr;};
    inline string getTargetFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(targetFileSystemId_, "") };
    inline CreateRestoreJobRequest& setTargetFileSystemId(string targetFileSystemId) { DARABONBA_PTR_SET_VALUE(targetFileSystemId_, targetFileSystemId) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline CreateRestoreJobRequest& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string getTargetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline CreateRestoreJobRequest& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline CreateRestoreJobRequest& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


    // targetPrefix Field Functions 
    bool hasTargetPrefix() const { return this->targetPrefix_ != nullptr;};
    void deleteTargetPrefix() { this->targetPrefix_ = nullptr;};
    inline string getTargetPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetPrefix_, "") };
    inline CreateRestoreJobRequest& setTargetPrefix(string targetPrefix) { DARABONBA_PTR_SET_VALUE(targetPrefix_, targetPrefix) };


    // targetTableName Field Functions 
    bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
    void deleteTargetTableName() { this->targetTableName_ = nullptr;};
    inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
    inline CreateRestoreJobRequest& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


    // targetTime Field Functions 
    bool hasTargetTime() const { return this->targetTime_ != nullptr;};
    void deleteTargetTime() { this->targetTime_ = nullptr;};
    inline int64_t getTargetTime() const { DARABONBA_PTR_GET_DEFAULT(targetTime_, 0L) };
    inline CreateRestoreJobRequest& setTargetTime(int64_t targetTime) { DARABONBA_PTR_SET_VALUE(targetTime_, targetTime) };


    // udmDetail Field Functions 
    bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
    void deleteUdmDetail() { this->udmDetail_ = nullptr;};
    inline     const Darabonba::Json & getUdmDetail() const { DARABONBA_GET(udmDetail_) };
    Darabonba::Json & getUdmDetail() { DARABONBA_GET(udmDetail_) };
    inline CreateRestoreJobRequest& setUdmDetail(const Darabonba::Json & udmDetail) { DARABONBA_SET_VALUE(udmDetail_, udmDetail) };
    inline CreateRestoreJobRequest& setUdmDetail(Darabonba::Json && udmDetail) { DARABONBA_SET_RVALUE(udmDetail_, udmDetail) };


    // udmRegionId Field Functions 
    bool hasUdmRegionId() const { return this->udmRegionId_ != nullptr;};
    void deleteUdmRegionId() { this->udmRegionId_ = nullptr;};
    inline string getUdmRegionId() const { DARABONBA_PTR_GET_DEFAULT(udmRegionId_, "") };
    inline CreateRestoreJobRequest& setUdmRegionId(string udmRegionId) { DARABONBA_PTR_SET_VALUE(udmRegionId_, udmRegionId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CreateRestoreJobRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The name of the RAM role created in the source account for cross-account backup managed by the current account.
    shared_ptr<string> crossAccountRoleName_ {};
    // The cross-account backup type. Valid values: 
    // - SELF_ACCOUNT: backup within the current account.
    // - CROSS_ACCOUNT: cross-account backup.
    shared_ptr<string> crossAccountType_ {};
    // The ID of the source account for cross-account backup managed by the current account.
    shared_ptr<int64_t> crossAccountUserId_ {};
    // The Cloud Backup feature edition. Valid values:
    // - **STANDARD**: Standard Edition. This is the default value.
    // - **BASIC**: Essential Edition. Currently, only ECS File Backup Essential Edition is supported.
    shared_ptr<string> edition_ {};
    // The path to exclude from restoration. All files under this path are not restored. Maximum length: 255 characters.
    shared_ptr<string> exclude_ {};
    // The details of the restoration to the local host.
    Darabonba::Json failbackDetail_ {};
    // The path to restore. All files under this path are restored. Maximum length: 255 characters.
    shared_ptr<string> include_ {};
    // Specifies whether the operation is invoked by Container Service. Default value: false.
    shared_ptr<bool> initiatedByAck_ {};
    // The restore job parameters.
    shared_ptr<string> options_ {};
    // The details of the Tablestore instance.
    shared_ptr<OtsTableRestoreDetail> otsDetail_ {};
    // The data source type of the restore destination. Valid values:
    //   - **ECS_FILE**: restores to an ECS file.
    //   - **OSS**: restores to Alibaba Cloud OSS.
    //   - **NAS**: restores to Alibaba Cloud NAS.
    //   - **COMMON_FILE_SYSTEM**: restores to CPFS.
    //   - **OTS_TABLE**: restores to Alibaba Cloud OTS.
    //   - **UDM_ECS_ROLLBACK**: restores to an Alibaba Cloud ECS instance (full-copy migration).
    // 
    // This parameter is required.
    shared_ptr<string> restoreType_ {};
    // The hash value of the backup snapshot.
    shared_ptr<string> snapshotHash_ {};
    // The ID of the backup snapshot.
    shared_ptr<string> snapshotId_ {};
    // The data source type. Valid values:
    //   - **ECS_FILE**: restores ECS files.
    //   - **OSS**: restores Alibaba Cloud OSS.
    //   - **NAS**: restores Alibaba Cloud NAS.
    //   - **COMMON_FILE_SYSTEM**: restores to CPFS.
    //   - **OTS_TABLE**: restores to Alibaba Cloud OTS.
    //   - **UDM_ECS**: restores to an Alibaba Cloud ECS instance (full-copy migration).
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // This parameter is valid only when **RestoreType** is set to **OSS**. The name of the destination OSS bucket.
    shared_ptr<string> targetBucket_ {};
    // The details of the target container for restoration.
    shared_ptr<string> targetContainer_ {};
    // The ID of the target container cluster for restoration.
    shared_ptr<string> targetContainerClusterId_ {};
    // This parameter is valid only when **RestoreType** is set to **NAS**. The creation time of the destination file system. This value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> targetCreateTime_ {};
    // This parameter is valid only when **RestoreType** is set to **NAS**. The file system ID of the restore destination.
    shared_ptr<string> targetFileSystemId_ {};
    // This parameter is valid only when **RestoreType** is set to **ECS_FILE**. The ECS instance ID of the restore destination.
    shared_ptr<string> targetInstanceId_ {};
    // The name of the target Tablestore instance for restoration.
    shared_ptr<string> targetInstanceName_ {};
    // This parameter is valid only when **RestoreType** is set to **ECS_FILE**. The file path of the restore destination.
    shared_ptr<string> targetPath_ {};
    // This parameter is valid only when **RestoreType** is set to **OSS**. The object prefix of the restore destination.
    shared_ptr<string> targetPrefix_ {};
    // The name of the target data table in Tablestore for restoration.
    shared_ptr<string> targetTableName_ {};
    // The point in time to which the Tablestore data is restored. This value is a UNIX timestamp. Unit: seconds.
    shared_ptr<int64_t> targetTime_ {};
    // This parameter is valid only when SourceType is set to UDM_ECS. The details of the full-copy migration backup. This parameter is a JSON string. The details vary depending on the value of RestoreType:
    // - **UDM_ECS_DISK**: ECS cloud disk clone.
    //   - **targetInstanceId**: string type, required. Instance ID of the target ECS instance to which the cloned cloud disk is attached.
    //   - **diskCategory**: string type, required. The type of the target cloud disk.
    //   - **diskPerformanceLevel**: string type. If diskCategory is set to essd, this parameter specifies the performance level (PL) of the cloud disk. Valid values: PL0, PL1, PL2, and PL3. Default value: PL1.
    // - **UDM_ECS_DISK_ROLLBACK**: ECS cloud disk restoration.
    //   - **sourceInstanceId**: string type, required. Instance ID of the source ECS instance.
    //   - **foreceRestore**: bool type. Default value: false. Specifies whether to forcibly restore. If foreceRestore is set to true, the restore job still restores the cloud disk even if the backed-up cloud disk has been unmounted from the original ECS instance or attached to a new ECS instance. Proceed with caution.
    //   - **bootAfterRestore**: bool type. Default value: false. Specifies whether to start the ECS instance after restoration.
    // - **UDM_ECS**: ECS full-copy clone.
    //   - **bootAfterRestore**: bool type. Default value: false. Specifies whether to start the ECS instance after restoration.
    //   - **diskCategory**: string type, required. The type of the target cloud disk.
    //   - **diskPerformanceLevel**: string type. If diskCategory is set to essd, this parameter specifies the performance level (PL) of the cloud disk. Valid values: PL0, PL1, PL2, and PL3. Default value: PL1.
    //   - **instanceType**: string type, required. The instance type of the target ECS instance.
    //   - **restoredNetwork**: string type, required. The vSwitch ID of the target ECS instance.
    //   - **securityGroup**: string type, required. The security group ID of the target ECS instance.
    //   - **restoredName**: string type, required. The instance name of the target ECS instance.
    //   - **restoredHostName**: string type, required. The hostname of the target ECS instance.
    //   - **allocatePublicIp**: bool type. Default value: false. Specifies whether to assign a public IP address to the target ECS instance.
    //   - **privateIpAddress**: string type. The internal IP address of the target ECS instance. If this parameter is not specified, DHCP is used to randomly assign an IP address.
    // - **UDM_ECS_ROLLBACK**: ECS full-copy restoration.
    //   - **sourceInstanceId**: string type, required. Instance ID of the source ECS instance.
    //   - **forceRestore**: bool type. Default value: false. Specifies whether to forcibly restore. If foreceRestore is set to true, the restore job still restores the cloud disk even if the backed-up cloud disk has been unmounted from the original ECS instance or attached to a new ECS instance. Proceed with caution.
    //   - **bootAfterRestore**: bool type. Default value: false. Specifies whether to start the ECS instance after restoration.
    Darabonba::Json udmDetail_ {};
    // This parameter is valid only when **SourceType** is set to **UDM_ECS**. The destination region for restoration.
    shared_ptr<string> udmRegionId_ {};
    // The ID of the backup vault to which the backup snapshot belongs.
    shared_ptr<string> vaultId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
