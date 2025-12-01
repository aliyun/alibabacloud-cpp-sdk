// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDSTARTBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDSTARTBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class CreateAndStartBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndStartBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupLogIntervalSeconds, backupLogIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_TO_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_TO_JSON(BackupRateLimit, backupRateLimit_);
      DARABONBA_PTR_TO_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(BackupSpeedLimit, backupSpeedLimit_);
      DARABONBA_PTR_TO_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_TO_JSON(BackupStorageType, backupStorageType_);
      DARABONBA_PTR_TO_JSON(BackupStrategyType, backupStrategyType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_TO_JSON(DatabaseRegion, databaseRegion_);
      DARABONBA_PTR_TO_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(FromApp, fromApp_);
      DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_TO_JSON(StorageRegion, storageRegion_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndStartBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupLogIntervalSeconds, backupLogIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(BackupMethod, backupMethod_);
      DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_FROM_JSON(BackupPeriod, backupPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanName, backupPlanName_);
      DARABONBA_PTR_FROM_JSON(BackupRateLimit, backupRateLimit_);
      DARABONBA_PTR_FROM_JSON(BackupRetentionPeriod, backupRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(BackupSpeedLimit, backupSpeedLimit_);
      DARABONBA_PTR_FROM_JSON(BackupStartTime, backupStartTime_);
      DARABONBA_PTR_FROM_JSON(BackupStorageType, backupStorageType_);
      DARABONBA_PTR_FROM_JSON(BackupStrategyType, backupStrategyType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(DatabaseRegion, databaseRegion_);
      DARABONBA_PTR_FROM_JSON(DatabaseType, databaseType_);
      DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(FromApp, fromApp_);
      DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(StorageRegion, storageRegion_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
    };
    CreateAndStartBackupPlanRequest() = default ;
    CreateAndStartBackupPlanRequest(const CreateAndStartBackupPlanRequest &) = default ;
    CreateAndStartBackupPlanRequest(CreateAndStartBackupPlanRequest &&) = default ;
    CreateAndStartBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndStartBackupPlanRequest() = default ;
    CreateAndStartBackupPlanRequest& operator=(const CreateAndStartBackupPlanRequest &) = default ;
    CreateAndStartBackupPlanRequest& operator=(CreateAndStartBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupLogIntervalSeconds_ == nullptr && return this->backupMethod_ == nullptr && return this->backupObjects_ == nullptr && return this->backupPeriod_ == nullptr && return this->backupPlanId_ == nullptr
        && return this->backupPlanName_ == nullptr && return this->backupRateLimit_ == nullptr && return this->backupRetentionPeriod_ == nullptr && return this->backupSpeedLimit_ == nullptr && return this->backupStartTime_ == nullptr
        && return this->backupStorageType_ == nullptr && return this->backupStrategyType_ == nullptr && return this->clientToken_ == nullptr && return this->crossAliyunId_ == nullptr && return this->crossRoleName_ == nullptr
        && return this->databaseRegion_ == nullptr && return this->databaseType_ == nullptr && return this->duplicationArchivePeriod_ == nullptr && return this->duplicationInfrequentAccessPeriod_ == nullptr && return this->enableBackupLog_ == nullptr
        && return this->fromApp_ == nullptr && return this->instanceClass_ == nullptr && return this->instanceType_ == nullptr && return this->OSSBucketName_ == nullptr && return this->ownerId_ == nullptr
        && return this->payType_ == nullptr && return this->period_ == nullptr && return this->region_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sourceEndpointDatabaseName_ == nullptr
        && return this->sourceEndpointIP_ == nullptr && return this->sourceEndpointInstanceID_ == nullptr && return this->sourceEndpointInstanceType_ == nullptr && return this->sourceEndpointOracleSID_ == nullptr && return this->sourceEndpointPassword_ == nullptr
        && return this->sourceEndpointPort_ == nullptr && return this->sourceEndpointRegion_ == nullptr && return this->sourceEndpointUserName_ == nullptr && return this->storageRegion_ == nullptr && return this->storageType_ == nullptr
        && return this->usedTime_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline CreateAndStartBackupPlanRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupLogIntervalSeconds Field Functions 
    bool hasBackupLogIntervalSeconds() const { return this->backupLogIntervalSeconds_ != nullptr;};
    void deleteBackupLogIntervalSeconds() { this->backupLogIntervalSeconds_ = nullptr;};
    inline int32_t backupLogIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(backupLogIntervalSeconds_, 0) };
    inline CreateAndStartBackupPlanRequest& setBackupLogIntervalSeconds(int32_t backupLogIntervalSeconds) { DARABONBA_PTR_SET_VALUE(backupLogIntervalSeconds_, backupLogIntervalSeconds) };


    // backupMethod Field Functions 
    bool hasBackupMethod() const { return this->backupMethod_ != nullptr;};
    void deleteBackupMethod() { this->backupMethod_ = nullptr;};
    inline string backupMethod() const { DARABONBA_PTR_GET_DEFAULT(backupMethod_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupMethod(string backupMethod) { DARABONBA_PTR_SET_VALUE(backupMethod_, backupMethod) };


    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string backupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline string backupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string backupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // backupRateLimit Field Functions 
    bool hasBackupRateLimit() const { return this->backupRateLimit_ != nullptr;};
    void deleteBackupRateLimit() { this->backupRateLimit_ = nullptr;};
    inline int64_t backupRateLimit() const { DARABONBA_PTR_GET_DEFAULT(backupRateLimit_, 0L) };
    inline CreateAndStartBackupPlanRequest& setBackupRateLimit(int64_t backupRateLimit) { DARABONBA_PTR_SET_VALUE(backupRateLimit_, backupRateLimit) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline CreateAndStartBackupPlanRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupSpeedLimit Field Functions 
    bool hasBackupSpeedLimit() const { return this->backupSpeedLimit_ != nullptr;};
    void deleteBackupSpeedLimit() { this->backupSpeedLimit_ = nullptr;};
    inline int64_t backupSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(backupSpeedLimit_, 0L) };
    inline CreateAndStartBackupPlanRequest& setBackupSpeedLimit(int64_t backupSpeedLimit) { DARABONBA_PTR_SET_VALUE(backupSpeedLimit_, backupSpeedLimit) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStorageType Field Functions 
    bool hasBackupStorageType() const { return this->backupStorageType_ != nullptr;};
    void deleteBackupStorageType() { this->backupStorageType_ = nullptr;};
    inline string backupStorageType() const { DARABONBA_PTR_GET_DEFAULT(backupStorageType_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupStorageType(string backupStorageType) { DARABONBA_PTR_SET_VALUE(backupStorageType_, backupStorageType) };


    // backupStrategyType Field Functions 
    bool hasBackupStrategyType() const { return this->backupStrategyType_ != nullptr;};
    void deleteBackupStrategyType() { this->backupStrategyType_ = nullptr;};
    inline string backupStrategyType() const { DARABONBA_PTR_GET_DEFAULT(backupStrategyType_, "") };
    inline CreateAndStartBackupPlanRequest& setBackupStrategyType(string backupStrategyType) { DARABONBA_PTR_SET_VALUE(backupStrategyType_, backupStrategyType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAndStartBackupPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string crossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline CreateAndStartBackupPlanRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string crossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline CreateAndStartBackupPlanRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // databaseRegion Field Functions 
    bool hasDatabaseRegion() const { return this->databaseRegion_ != nullptr;};
    void deleteDatabaseRegion() { this->databaseRegion_ = nullptr;};
    inline string databaseRegion() const { DARABONBA_PTR_GET_DEFAULT(databaseRegion_, "") };
    inline CreateAndStartBackupPlanRequest& setDatabaseRegion(string databaseRegion) { DARABONBA_PTR_SET_VALUE(databaseRegion_, databaseRegion) };


    // databaseType Field Functions 
    bool hasDatabaseType() const { return this->databaseType_ != nullptr;};
    void deleteDatabaseType() { this->databaseType_ = nullptr;};
    inline string databaseType() const { DARABONBA_PTR_GET_DEFAULT(databaseType_, "") };
    inline CreateAndStartBackupPlanRequest& setDatabaseType(string databaseType) { DARABONBA_PTR_SET_VALUE(databaseType_, databaseType) };


    // duplicationArchivePeriod Field Functions 
    bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
    void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
    inline int32_t duplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
    inline CreateAndStartBackupPlanRequest& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


    // duplicationInfrequentAccessPeriod Field Functions 
    bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
    inline int32_t duplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
    inline CreateAndStartBackupPlanRequest& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline bool enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, false) };
    inline CreateAndStartBackupPlanRequest& setEnableBackupLog(bool enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string fromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline CreateAndStartBackupPlanRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // instanceClass Field Functions 
    bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
    void deleteInstanceClass() { this->instanceClass_ = nullptr;};
    inline string instanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
    inline CreateAndStartBackupPlanRequest& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateAndStartBackupPlanRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // OSSBucketName Field Functions 
    bool hasOSSBucketName() const { return this->OSSBucketName_ != nullptr;};
    void deleteOSSBucketName() { this->OSSBucketName_ = nullptr;};
    inline string OSSBucketName() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketName_, "") };
    inline CreateAndStartBackupPlanRequest& setOSSBucketName(string OSSBucketName) { DARABONBA_PTR_SET_VALUE(OSSBucketName_, OSSBucketName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateAndStartBackupPlanRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateAndStartBackupPlanRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateAndStartBackupPlanRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateAndStartBackupPlanRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAndStartBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string sourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string sourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string sourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string sourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string sourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline int32_t sourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, 0) };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointPort(int32_t sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string sourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string sourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline CreateAndStartBackupPlanRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


    // storageRegion Field Functions 
    bool hasStorageRegion() const { return this->storageRegion_ != nullptr;};
    void deleteStorageRegion() { this->storageRegion_ = nullptr;};
    inline string storageRegion() const { DARABONBA_PTR_GET_DEFAULT(storageRegion_, "") };
    inline CreateAndStartBackupPlanRequest& setStorageRegion(string storageRegion) { DARABONBA_PTR_SET_VALUE(storageRegion_, storageRegion) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateAndStartBackupPlanRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateAndStartBackupPlanRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


  protected:
    // The backup gateway ID.
    // 
    // > 
    // 
    // *   If **SourceEndpointInstanceType** is set to **Agent**, this parameter is required.****
    // 
    // *   For more information about how to install a backup gateway, see [Install a backup gateway](https://help.aliyun.com/document_detail/93250.html).
    // 
    // *   You can query a list of existing backup gateways by calling the [DescribeBackupGatewayList](https://help.aliyun.com/document_detail/2869840.html) operation.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The interval at which you want to perform incremental log backups. Unit: seconds.
    // 
    // >  This parameter is required only if you set BackupMethod to **physical**.
    std::shared_ptr<int32_t> backupLogIntervalSeconds_ = nullptr;
    // The method that is used to generate the backup file. Valid values:
    // 
    // *   **logical**: logical backup
    // *   **physical**: physical backup
    // *   **duplication**: dump backup
    // 
    // This parameter is required.
    std::shared_ptr<string> backupMethod_ = nullptr;
    // The object to be backed up.
    std::shared_ptr<string> backupObjects_ = nullptr;
    // The day of the week on which you want to perform full backup. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    // 
    // >  You can specify multiple values. Separate multiple values with commas (,).
    std::shared_ptr<string> backupPeriod_ = nullptr;
    // The ID of the backup schedule.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The name of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanName_ = nullptr;
    // The network bandwidth throttling. Unit: KB/s. DBS allows a maximum bandwidth of 10 GB/s.
    // 
    // >  This parameter takes effect only when physical backups for MySQL databases are performed.
    std::shared_ptr<int64_t> backupRateLimit_ = nullptr;
    // The number of days for which the backup data is retained. Valid values: 0 to 1825. Default value: 730.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // The I/O limit for the disk. Unit: KB/s.
    // 
    // >  This parameter takes effect only when physical backups for MySQL databases are performed.
    std::shared_ptr<int64_t> backupSpeedLimit_ = nullptr;
    // The start time of full backup tasks. Specify the value in the *HH:mm* format. The time must be in UTC.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   Empty: If you do not specify this parameter, the system stores backup data in your OSS bucket.
    // *   system : The system stores backup data in the built-in OSS bucket of DBS.
    std::shared_ptr<string> backupStorageType_ = nullptr;
    // The backup method that you want to use for full backups. Valid values:
    // 
    // *   **simple**: scheduled backup. If you specify this value for the BackupStrategyType parameter, you must also specify the BackupPeriod and BackupStartTime parameters.
    // *   **Manual**: manual backup.
    // 
    // > Default value: **simple**.
    std::shared_ptr<string> backupStrategyType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The unique ID (UID) of the Alibaba Cloud account to which the source database belongs.
    std::shared_ptr<string> crossAliyunId_ = nullptr;
    // The name of the RAM role that is used to perform backups across Alibaba Cloud accounts.
    std::shared_ptr<string> crossRoleName_ = nullptr;
    // The region in which the database that you want to back up resides.
    // 
    // > This parameter is required if the **PayType** parameter is set to **postpay**.
    std::shared_ptr<string> databaseRegion_ = nullptr;
    // The type of the source database. Valid values:
    // 
    // *   **MySQL**
    // *   **MSSQL**
    // *   **Oracle**
    // *   **MariaDB**
    // *   **PostgreSQL**
    // *   **DRDS**
    // *   **MongoDB**
    // *   **Redis**
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseType_ = nullptr;
    // The number of days after which the storage class of the backup data is changed to Archive. Default value: 365.
    std::shared_ptr<int32_t> duplicationArchivePeriod_ = nullptr;
    // The number of days after which the storage class of the backup data is changed to Infrequent Access (IA). Default value: 180.
    std::shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ = nullptr;
    // Specifies whether to enable the incremental log backup feature. Valid values:
    // 
    // *   **true**: enables the incremental log backup feature.
    // *   **false**: disables the incremental log backup feature.
    std::shared_ptr<bool> enableBackupLog_ = nullptr;
    // The request source. Default value: OpenApi. You do not need to set this parameter.
    std::shared_ptr<string> fromApp_ = nullptr;
    // The type of the backup schedule. Valid values:
    // 
    // *   **micro**
    // *   **small**
    // *   **medium**
    // *   **large**
    // *   **xlarge**
    // 
    // >  A backup schedule type with higher specifications offers higher backup and restoration performance. For more information, see [Select a backup schedule type](https://help.aliyun.com/document_detail/84372.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceClass_ = nullptr;
    // The type of the source database instance. Valid values:
    // 
    // *   **RDS**: ApsaraDB RDS.
    // *   **PolarDB**: PolarDB.
    // *   **DDS**: ApsaraDB for MongoDB.
    // *   **Kvstore**: ApsaraDB for Redis.
    // *   **Other**: Database connected by using an IP address and a port number.
    // *   **dg**: Self-managed database that has no public IP address or port number and is connected over Database Gateway.
    // 
    // >  If **PayType** is set to **postpay**, this parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The name of the Object Storage Service (OSS) bucket used to store backup files. By default, the system automatically generates a name for the OSS bucket.
    std::shared_ptr<string> OSSBucketName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   **postpay**: pay-as-you-go.
    // *   **prepay**: subscription.
    // 
    // >  The default value is **prepay**. You can set this parameter to **postpay** only if you set **BackupMethod** to **duplication**.
    std::shared_ptr<string> payType_ = nullptr;
    // Specifies whether to use yearly subscription or monthly subscription for the instance. Valid values:
    // 
    // *   **Year**: yearly subscription
    // *   **Month**: monthly subscription
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the region in which you want to store the backup data. You can query the supported regions of DBS by calling the [DescribeRegions](https://help.aliyun.com/document_detail/2869853.html) operation.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the database.
    // 
    // > This parameter is required if the DatabaseType parameter is set to **PostgreSQL** or **MongoDB**.
    std::shared_ptr<string> sourceEndpointDatabaseName_ = nullptr;
    // The endpoint of the database.
    // 
    // > This parameter is required if the **SourceEndpointInstanceType** parameter is set to **Express**, **Agent**, or **Other**.
    std::shared_ptr<string> sourceEndpointIP_ = nullptr;
    // The ID of the database instance.
    // 
    // > This parameter is required if the **SourceEndpointInstanceType** parameter is set to **RDS**, **ECS**, **DDS**, or **Express**.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // The location of the source database. Valid values:
    // 
    // *   **RDS**: The database is on an ApsaraDB RDS instance.
    // *   **ECS**: The database is on an Elastic Compute Service (ECS) instance.
    // *   **Express**: The database is connected to DBS by using Express Connect, VPN Gateway, or Smart Access Gateway.
    // *   **Agent**: The database is connected to DBS over a DBS backup gateway.
    // *   **DDS**: The database is on an ApsaraDB for MongoDB instance.
    // *   **Other**: The database is connected to DBS by using an IP address and a port number.
    // *   **dg**: The database is a self-managed database that has no public IP address or port number and is connected to DBS over Database Gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceEndpointInstanceType_ = nullptr;
    // The system ID (SID) of the Oracle database. This parameter is required if the source database is an Oracle database.
    std::shared_ptr<string> sourceEndpointOracleSID_ = nullptr;
    // The password of the account that is used to connect to the database.
    // 
    // > This parameter is required except that the database is an SQL Server database that is connected to DBS over a DBS backup gateway or a Redis database.
    std::shared_ptr<string> sourceEndpointPassword_ = nullptr;
    // The port of the database.
    // 
    // > This parameter is required if the **SourceEndpointInstanceType** parameter is set to **Express**, **Agent**, **Other**, or **ECS**.
    std::shared_ptr<int32_t> sourceEndpointPort_ = nullptr;
    // The region in which the database that you want to back up resides.
    // 
    // > This parameter is required if the **SourceEndpointInstanceType** parameter is set to **RDS**, **ECS**, **DDS**, **Express**, or **Agent**.
    std::shared_ptr<string> sourceEndpointRegion_ = nullptr;
    // The username of the account that is used to connect to the database.
    // 
    // > This parameter is required except that the database is an SQL Server database that is connected to DBS over a DBS backup gateway or a Redis database.
    std::shared_ptr<string> sourceEndpointUserName_ = nullptr;
    // The region in which you want to store the backup data.
    // 
    // > This parameter is required if the **PayType** parameter is set to **postpay**.
    std::shared_ptr<string> storageRegion_ = nullptr;
    // This parameter is unavailable.
    std::shared_ptr<string> storageType_ = nullptr;
    // The subscription duration. Valid values:
    // 
    // *   If **Period** is set to **Year**, the valid values of **UsedTime** range from 1 to 5.
    // *   If **Period** is set to **Month**, the valid values of **UsedTime** range from 1 to 11.
    std::shared_ptr<int32_t> usedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
