// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTRESPONSEBODYITEMSBACKUPPLANDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPPLANLISTRESPONSEBODYITEMSBACKUPPLANDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeBackupPlanListResponseBodyItemsBackupPlanDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_TO_JSON(BackupPlanCreateTime, backupPlanCreateTime_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_TO_JSON(BackupPlanStatus, backupPlanStatus_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadFullDataFormat, backupSetDownloadFullDataFormat_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadGatewayId, backupSetDownloadGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadIncrementDataFormat, backupSetDownloadIncrementDataFormat_);
      DARABONBA_PTR_TO_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStorageType, backupStorageType_);
      DARABONBA_PTR_TO_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EndTimestampForRestore, endTimestampForRestore_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_TO_JSON(OSSBucketRegion, OSSBucketRegion_);
      DARABONBA_PTR_TO_JSON(OpenBackupSetAutoDownload, openBackupSetAutoDownload_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupPlanCreateTime, backupPlanCreateTime_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_FROM_JSON(BackupPlanStatus, backupPlanStatus_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadDir, backupSetDownloadDir_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadFullDataFormat, backupSetDownloadFullDataFormat_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadGatewayId, backupSetDownloadGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadIncrementDataFormat, backupSetDownloadIncrementDataFormat_);
      DARABONBA_PTR_FROM_JSON(BackupSetDownloadTargetType, backupSetDownloadTargetType_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStorageType, backupStorageType_);
      DARABONBA_PTR_FROM_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EndTimestampForRestore, endTimestampForRestore_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_FROM_JSON(OSSBucketRegion, OSSBucketRegion_);
      DARABONBA_PTR_FROM_JSON(OpenBackupSetAutoDownload, openBackupSetAutoDownload_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIpPort, sourceEndpointIpPort_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
    };
    DescribeBackupPlanListResponseBodyItemsBackupPlanDetail() = default ;
    DescribeBackupPlanListResponseBodyItemsBackupPlanDetail(const DescribeBackupPlanListResponseBodyItemsBackupPlanDetail &) = default ;
    DescribeBackupPlanListResponseBodyItemsBackupPlanDetail(DescribeBackupPlanListResponseBodyItemsBackupPlanDetail &&) = default ;
    DescribeBackupPlanListResponseBodyItemsBackupPlanDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupPlanListResponseBodyItemsBackupPlanDetail() = default ;
    DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& operator=(const DescribeBackupPlanListResponseBodyItemsBackupPlanDetail &) = default ;
    DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& operator=(DescribeBackupPlanListResponseBodyItemsBackupPlanDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupMethod_ == nullptr && return this->backupObjects_ == nullptr && return this->backupPeriod_ == nullptr && return this->backupPlanCreateTime_ == nullptr && return this->backupPlanId_ == nullptr
        && return this->backupPlanName_ == nullptr && return this->backupPlanStatus_ == nullptr && return this->backupRetentionPeriod_ == nullptr && return this->backupSetDownloadDir_ == nullptr && return this->backupSetDownloadFullDataFormat_ == nullptr
        && return this->backupSetDownloadGatewayId_ == nullptr && return this->backupSetDownloadIncrementDataFormat_ == nullptr && return this->backupSetDownloadTargetType_ == nullptr && return this->backupStartTime_ == nullptr && return this->backupStorageType_ == nullptr
        && return this->beginTimestampForRestore_ == nullptr && return this->crossAliyunId_ == nullptr && return this->crossRoleName_ == nullptr && return this->databaseType_ == nullptr && return this->duplicationArchivePeriod_ == nullptr
        && return this->duplicationInfrequentAccessPeriod_ == nullptr && return this->enableBackupLog_ == nullptr && return this->endTimestampForRestore_ == nullptr && return this->errMessage_ == nullptr && return this->instanceClass_ == nullptr
        && return this->OSSBucketName_ == nullptr && return this->OSSBucketRegion_ == nullptr && return this->openBackupSetAutoDownload_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sourceEndpointDatabaseName_ == nullptr
        && return this->sourceEndpointInstanceID_ == nullptr && return this->sourceEndpointInstanceType_ == nullptr && return this->sourceEndpointIpPort_ == nullptr && return this->sourceEndpointOracleSID_ == nullptr && return this->sourceEndpointRegion_ == nullptr
        && return this->sourceEndpointUserName_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string backupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline string backupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // backupPlanCreateTime Field Functions 
    bool hasBackupPlanCreateTime() const { return this->backupPlanCreateTime_ != nullptr;};
    void deleteBackupPlanCreateTime() { this->backupPlanCreateTime_ = nullptr;};
    inline int64_t backupPlanCreateTime() const { DARABONBA_PTR_GET_DEFAULT(backupPlanCreateTime_, 0L) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupPlanCreateTime(int64_t backupPlanCreateTime) { DARABONBA_PTR_SET_VALUE(backupPlanCreateTime_, backupPlanCreateTime) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string backupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // backupPlanStatus Field Functions 
    bool hasBackupPlanStatus() const { return this->backupPlanStatus_ != nullptr;};
    void deleteBackupPlanStatus() { this->backupPlanStatus_ = nullptr;};
    inline string backupPlanStatus() const { DARABONBA_PTR_GET_DEFAULT(backupPlanStatus_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupPlanStatus(string backupPlanStatus) { DARABONBA_PTR_SET_VALUE(backupPlanStatus_, backupPlanStatus) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupSetDownloadDir Field Functions 
    bool hasBackupSetDownloadDir() const { return this->backupSetDownloadDir_ != nullptr;};
    void deleteBackupSetDownloadDir() { this->backupSetDownloadDir_ = nullptr;};
    inline string backupSetDownloadDir() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadDir_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupSetDownloadDir(string backupSetDownloadDir) { DARABONBA_PTR_SET_VALUE(backupSetDownloadDir_, backupSetDownloadDir) };


    // backupSetDownloadFullDataFormat Field Functions 
    bool hasBackupSetDownloadFullDataFormat() const { return this->backupSetDownloadFullDataFormat_ != nullptr;};
    void deleteBackupSetDownloadFullDataFormat() { this->backupSetDownloadFullDataFormat_ = nullptr;};
    inline string backupSetDownloadFullDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadFullDataFormat_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupSetDownloadFullDataFormat(string backupSetDownloadFullDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDownloadFullDataFormat_, backupSetDownloadFullDataFormat) };


    // backupSetDownloadGatewayId Field Functions 
    bool hasBackupSetDownloadGatewayId() const { return this->backupSetDownloadGatewayId_ != nullptr;};
    void deleteBackupSetDownloadGatewayId() { this->backupSetDownloadGatewayId_ = nullptr;};
    inline int64_t backupSetDownloadGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadGatewayId_, 0L) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupSetDownloadGatewayId(int64_t backupSetDownloadGatewayId) { DARABONBA_PTR_SET_VALUE(backupSetDownloadGatewayId_, backupSetDownloadGatewayId) };


    // backupSetDownloadIncrementDataFormat Field Functions 
    bool hasBackupSetDownloadIncrementDataFormat() const { return this->backupSetDownloadIncrementDataFormat_ != nullptr;};
    void deleteBackupSetDownloadIncrementDataFormat() { this->backupSetDownloadIncrementDataFormat_ = nullptr;};
    inline string backupSetDownloadIncrementDataFormat() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadIncrementDataFormat_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupSetDownloadIncrementDataFormat(string backupSetDownloadIncrementDataFormat) { DARABONBA_PTR_SET_VALUE(backupSetDownloadIncrementDataFormat_, backupSetDownloadIncrementDataFormat) };


    // backupSetDownloadTargetType Field Functions 
    bool hasBackupSetDownloadTargetType() const { return this->backupSetDownloadTargetType_ != nullptr;};
    void deleteBackupSetDownloadTargetType() { this->backupSetDownloadTargetType_ = nullptr;};
    inline string backupSetDownloadTargetType() const { DARABONBA_PTR_GET_DEFAULT(backupSetDownloadTargetType_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupSetDownloadTargetType(string backupSetDownloadTargetType) { DARABONBA_PTR_SET_VALUE(backupSetDownloadTargetType_, backupSetDownloadTargetType) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStorageType Field Functions 
    bool hasBackupStorageType() const { return this->backupStorageType_ != nullptr;};
    void deleteBackupStorageType() { this->backupStorageType_ = nullptr;};
    inline string backupStorageType() const { DARABONBA_PTR_GET_DEFAULT(backupStorageType_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBackupStorageType(string backupStorageType) { DARABONBA_PTR_SET_VALUE(backupStorageType_, backupStorageType) };


    // beginTimestampForRestore Field Functions 
    bool hasBeginTimestampForRestore() const { return this->beginTimestampForRestore_ != nullptr;};
    void deleteBeginTimestampForRestore() { this->beginTimestampForRestore_ = nullptr;};
    inline int64_t beginTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(beginTimestampForRestore_, 0L) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setBeginTimestampForRestore(int64_t beginTimestampForRestore) { DARABONBA_PTR_SET_VALUE(beginTimestampForRestore_, beginTimestampForRestore) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string crossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string crossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // duplicationArchivePeriod Field Functions 
    bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
    void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
    inline int32_t duplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


    // duplicationInfrequentAccessPeriod Field Functions 
    bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
    inline int32_t duplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline bool enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, false) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setEnableBackupLog(bool enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // endTimestampForRestore Field Functions 
    bool hasEndTimestampForRestore() const { return this->endTimestampForRestore_ != nullptr;};
    void deleteEndTimestampForRestore() { this->endTimestampForRestore_ = nullptr;};
    inline int64_t endTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(endTimestampForRestore_, 0L) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setEndTimestampForRestore(int64_t endTimestampForRestore) { DARABONBA_PTR_SET_VALUE(endTimestampForRestore_, endTimestampForRestore) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // OSSBucketName Field Functions 
    bool hasOSSBucketName() const { return this->OSSBucketName_ != nullptr;};
    void deleteOSSBucketName() { this->OSSBucketName_ = nullptr;};
    inline string OSSBucketName() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketName_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setOSSBucketName(string OSSBucketName) { DARABONBA_PTR_SET_VALUE(OSSBucketName_, OSSBucketName) };


    // OSSBucketRegion Field Functions 
    bool hasOSSBucketRegion() const { return this->OSSBucketRegion_ != nullptr;};
    void deleteOSSBucketRegion() { this->OSSBucketRegion_ = nullptr;};
    inline string OSSBucketRegion() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketRegion_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setOSSBucketRegion(string OSSBucketRegion) { DARABONBA_PTR_SET_VALUE(OSSBucketRegion_, OSSBucketRegion) };


    // openBackupSetAutoDownload Field Functions 
    bool hasOpenBackupSetAutoDownload() const { return this->openBackupSetAutoDownload_ != nullptr;};
    void deleteOpenBackupSetAutoDownload() { this->openBackupSetAutoDownload_ = nullptr;};
    inline bool openBackupSetAutoDownload() const { DARABONBA_PTR_GET_DEFAULT(openBackupSetAutoDownload_, false) };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setOpenBackupSetAutoDownload(bool openBackupSetAutoDownload) { DARABONBA_PTR_SET_VALUE(openBackupSetAutoDownload_, openBackupSetAutoDownload) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string sourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string sourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointIpPort Field Functions 
    bool hasSourceEndpointIpPort() const { return this->sourceEndpointIpPort_ != nullptr;};
    void deleteSourceEndpointIpPort() { this->sourceEndpointIpPort_ = nullptr;};
    inline string sourceEndpointIpPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIpPort_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointIpPort(string sourceEndpointIpPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointIpPort_, sourceEndpointIpPort) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string sourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string sourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string sourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline DescribeBackupPlanListResponseBodyItemsBackupPlanDetail& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


  protected:
    // Backup gateway ID.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // Backup method. The return values are as follows:
    // - **logical**: Logical backup
    // - **physical**: Physical backup
    // - **duplication**: Replication backup
    std::shared_ptr<string> backupMethod_ = nullptr;
    // Backup objects.
    std::shared_ptr<string> backupObjects_ = nullptr;
    // Full backup cycle. The return values are as follows:
    // - **Monday**: Monday
    // - **Tuesday**: Tuesday
    // - **Wednesday**: Wednesday
    // - **Thursday**: Thursday
    // - **Friday**: Friday
    // - **Saturday**: Saturday
    // - **Sunday**: Sunday
    std::shared_ptr<string> backupPeriod_ = nullptr;
    // Timestamp of the backup plan creation.
    std::shared_ptr<int64_t> backupPlanCreateTime_ = nullptr;
    // Backup plan ID.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // Backup plan name.
    std::shared_ptr<string> backupPlanName_ = nullptr;
    // Backup plan status. The return values are as follows:
    // - **wait**: Not configured
    // - **init**: Not started (pre-check failed)
    // - **running**: Running
    // - **stop**: Failed
    // - **pause**: Paused
    // - **locked**: Locked
    // - **check_pass**: Pre-check passed
    std::shared_ptr<string> backupPlanStatus_ = nullptr;
    // Backup data retention period, with a value range of 0 to 1825 days.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // Download server directory of the backup set
    std::shared_ptr<string> backupSetDownloadDir_ = nullptr;
    // Full data format for backup set download:
    // * **Native**
    // * **SQL**
    // * **CSV**
    // * **JSON**
    std::shared_ptr<string> backupSetDownloadFullDataFormat_ = nullptr;
    // Backup set download backup gateway ID.
    std::shared_ptr<int64_t> backupSetDownloadGatewayId_ = nullptr;
    // Backup set download full data format:
    // * **Native**
    // * **SQL**
    // * **CSV**
    // * **JSON**
    std::shared_ptr<string> backupSetDownloadIncrementDataFormat_ = nullptr;
    // Backup set download target type.
    // 
    // > The only value is: agent, indicating that the backup gateway is installed.
    std::shared_ptr<string> backupSetDownloadTargetType_ = nullptr;
    // Full backup start time, in the format HH:mm.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // Built-in storage type. The return values are as follows:
    // 
    // - Empty (default): Backup data is stored on the user\\"s OSS.
    // - system: Backup data is stored on the built-in OSS of DBS.
    std::shared_ptr<string> backupStorageType_ = nullptr;
    // Start time for the database restore period, with a return value of 1554560477000.
    std::shared_ptr<int64_t> beginTimestampForRestore_ = nullptr;
    // UID for cross-Aliyun account backup.
    std::shared_ptr<string> crossAliyunId_ = nullptr;
    // RAM role name for cross-Aliyun account backup.
    std::shared_ptr<string> crossRoleName_ = nullptr;
    // Database type.
    std::shared_ptr<string> databaseType_ = nullptr;
    // Time (in days) to convert to archive cold backup storage.
    std::shared_ptr<int32_t> duplicationArchivePeriod_ = nullptr;
    // Time (in days) to convert to infrequent access storage.
    std::shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ = nullptr;
    // Indicates whether incremental log backup is enabled, with return values as follows:
    // - **true**: Enabled
    // - **false**: Disabled
    std::shared_ptr<bool> enableBackupLog_ = nullptr;
    // End time of the database restorable period, in timestamp format.
    std::shared_ptr<int64_t> endTimestampForRestore_ = nullptr;
    // Pre-check task error message.
    std::shared_ptr<string> errMessage_ = nullptr;
    // Instance class, with return values as follows:
    // 
    // - **micro**: Entry-level
    // - **small**: Low-spec
    // - **medium**: Medium-spec
    // - **large**: High-spec
    // - **xlarge**: High-spec (no traffic limit)
    std::shared_ptr<string> instanceClass_ = nullptr;
    // OSS Bucket name.
    std::shared_ptr<string> OSSBucketName_ = nullptr;
    // OSS Bucket region.
    std::shared_ptr<string> OSSBucketRegion_ = nullptr;
    // Indicates whether the automatic backup set download feature is enabled.
    std::shared_ptr<bool> openBackupSetAutoDownload_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Database name.
    std::shared_ptr<string> sourceEndpointDatabaseName_ = nullptr;
    // Database instance ID.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // Location of the database, the return values are as follows:
    // - **rds**
    // - **ecs**
    // - **express**: Database connected via dedicated line/VPN gateway/smart gateway
    // - **agent**: Database connected via backup gateway
    // - **dds**: Cloud MongoDB
    // - **other**: Database connected directly via IP:Port
    std::shared_ptr<string> sourceEndpointInstanceType_ = nullptr;
    // Database connection address.
    std::shared_ptr<string> sourceEndpointIpPort_ = nullptr;
    // Oracle SID name.
    std::shared_ptr<string> sourceEndpointOracleSID_ = nullptr;
    // Database region.
    std::shared_ptr<string> sourceEndpointRegion_ = nullptr;
    // Database username.
    std::shared_ptr<string> sourceEndpointUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
