// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGUREBACKUPPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGUREBACKUPPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ConfigureBackupPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigureBackupPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStartBackup, autoStartBackup_);
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupLogIntervalSeconds, backupLogIntervalSeconds_);
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
      DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
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
    };
    friend void from_json(const Darabonba::Json& j, ConfigureBackupPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStartBackup, autoStartBackup_);
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupLogIntervalSeconds, backupLogIntervalSeconds_);
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
      DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
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
    };
    ConfigureBackupPlanRequest() = default ;
    ConfigureBackupPlanRequest(const ConfigureBackupPlanRequest &) = default ;
    ConfigureBackupPlanRequest(ConfigureBackupPlanRequest &&) = default ;
    ConfigureBackupPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigureBackupPlanRequest() = default ;
    ConfigureBackupPlanRequest& operator=(const ConfigureBackupPlanRequest &) = default ;
    ConfigureBackupPlanRequest& operator=(ConfigureBackupPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStartBackup_ == nullptr
        && return this->backupGatewayId_ == nullptr && return this->backupLogIntervalSeconds_ == nullptr && return this->backupObjects_ == nullptr && return this->backupPeriod_ == nullptr && return this->backupPlanId_ == nullptr
        && return this->backupPlanName_ == nullptr && return this->backupRateLimit_ == nullptr && return this->backupRetentionPeriod_ == nullptr && return this->backupSpeedLimit_ == nullptr && return this->backupStartTime_ == nullptr
        && return this->backupStorageType_ == nullptr && return this->backupStrategyType_ == nullptr && return this->clientToken_ == nullptr && return this->crossAliyunId_ == nullptr && return this->crossRoleName_ == nullptr
        && return this->duplicationArchivePeriod_ == nullptr && return this->duplicationInfrequentAccessPeriod_ == nullptr && return this->enableBackupLog_ == nullptr && return this->OSSBucketName_ == nullptr && return this->ownerId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->sourceEndpointDatabaseName_ == nullptr && return this->sourceEndpointIP_ == nullptr && return this->sourceEndpointInstanceID_ == nullptr && return this->sourceEndpointInstanceType_ == nullptr
        && return this->sourceEndpointOracleSID_ == nullptr && return this->sourceEndpointPassword_ == nullptr && return this->sourceEndpointPort_ == nullptr && return this->sourceEndpointRegion_ == nullptr && return this->sourceEndpointUserName_ == nullptr; };
    // autoStartBackup Field Functions 
    bool hasAutoStartBackup() const { return this->autoStartBackup_ != nullptr;};
    void deleteAutoStartBackup() { this->autoStartBackup_ = nullptr;};
    inline bool autoStartBackup() const { DARABONBA_PTR_GET_DEFAULT(autoStartBackup_, false) };
    inline ConfigureBackupPlanRequest& setAutoStartBackup(bool autoStartBackup) { DARABONBA_PTR_SET_VALUE(autoStartBackup_, autoStartBackup) };


    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline ConfigureBackupPlanRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupLogIntervalSeconds Field Functions 
    bool hasBackupLogIntervalSeconds() const { return this->backupLogIntervalSeconds_ != nullptr;};
    void deleteBackupLogIntervalSeconds() { this->backupLogIntervalSeconds_ = nullptr;};
    inline int32_t backupLogIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(backupLogIntervalSeconds_, 0) };
    inline ConfigureBackupPlanRequest& setBackupLogIntervalSeconds(int32_t backupLogIntervalSeconds) { DARABONBA_PTR_SET_VALUE(backupLogIntervalSeconds_, backupLogIntervalSeconds) };


    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string backupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline ConfigureBackupPlanRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline string backupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
    inline ConfigureBackupPlanRequest& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ConfigureBackupPlanRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string backupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline ConfigureBackupPlanRequest& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // backupRateLimit Field Functions 
    bool hasBackupRateLimit() const { return this->backupRateLimit_ != nullptr;};
    void deleteBackupRateLimit() { this->backupRateLimit_ = nullptr;};
    inline int64_t backupRateLimit() const { DARABONBA_PTR_GET_DEFAULT(backupRateLimit_, 0L) };
    inline ConfigureBackupPlanRequest& setBackupRateLimit(int64_t backupRateLimit) { DARABONBA_PTR_SET_VALUE(backupRateLimit_, backupRateLimit) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t backupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ConfigureBackupPlanRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupSpeedLimit Field Functions 
    bool hasBackupSpeedLimit() const { return this->backupSpeedLimit_ != nullptr;};
    void deleteBackupSpeedLimit() { this->backupSpeedLimit_ = nullptr;};
    inline int64_t backupSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(backupSpeedLimit_, 0L) };
    inline ConfigureBackupPlanRequest& setBackupSpeedLimit(int64_t backupSpeedLimit) { DARABONBA_PTR_SET_VALUE(backupSpeedLimit_, backupSpeedLimit) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string backupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline ConfigureBackupPlanRequest& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStorageType Field Functions 
    bool hasBackupStorageType() const { return this->backupStorageType_ != nullptr;};
    void deleteBackupStorageType() { this->backupStorageType_ = nullptr;};
    inline string backupStorageType() const { DARABONBA_PTR_GET_DEFAULT(backupStorageType_, "") };
    inline ConfigureBackupPlanRequest& setBackupStorageType(string backupStorageType) { DARABONBA_PTR_SET_VALUE(backupStorageType_, backupStorageType) };


    // backupStrategyType Field Functions 
    bool hasBackupStrategyType() const { return this->backupStrategyType_ != nullptr;};
    void deleteBackupStrategyType() { this->backupStrategyType_ = nullptr;};
    inline string backupStrategyType() const { DARABONBA_PTR_GET_DEFAULT(backupStrategyType_, "") };
    inline ConfigureBackupPlanRequest& setBackupStrategyType(string backupStrategyType) { DARABONBA_PTR_SET_VALUE(backupStrategyType_, backupStrategyType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ConfigureBackupPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string crossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline ConfigureBackupPlanRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string crossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline ConfigureBackupPlanRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // duplicationArchivePeriod Field Functions 
    bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
    void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
    inline int32_t duplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
    inline ConfigureBackupPlanRequest& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


    // duplicationInfrequentAccessPeriod Field Functions 
    bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
    inline int32_t duplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
    inline ConfigureBackupPlanRequest& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline bool enableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, false) };
    inline ConfigureBackupPlanRequest& setEnableBackupLog(bool enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // OSSBucketName Field Functions 
    bool hasOSSBucketName() const { return this->OSSBucketName_ != nullptr;};
    void deleteOSSBucketName() { this->OSSBucketName_ = nullptr;};
    inline string OSSBucketName() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketName_, "") };
    inline ConfigureBackupPlanRequest& setOSSBucketName(string OSSBucketName) { DARABONBA_PTR_SET_VALUE(OSSBucketName_, OSSBucketName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureBackupPlanRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string sourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string sourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string sourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string sourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string sourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline int32_t sourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, 0) };
    inline ConfigureBackupPlanRequest& setSourceEndpointPort(int32_t sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string sourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string sourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


  protected:
    // Specifies whether to enable the automatic backup feature.
    // 
    // *   **true**: enables the automatic backup feature.
    // *   **false**: disables the automatic backup feature.
    std::shared_ptr<bool> autoStartBackup_ = nullptr;
    // The backup gateway ID. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it.
    // 
    // >  If you set **SourceEndpointInstanceType** to **Agent**, this parameter is required.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The interval at which you want to perform incremental log backups. Unit: seconds.
    // 
    // >  Only physical backup supports this parameter.
    std::shared_ptr<int32_t> backupLogIntervalSeconds_ = nullptr;
    // The objects to be backed up. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the objects.
    std::shared_ptr<string> backupObjects_ = nullptr;
    // The day of each week when the full backup task runs. Valid values:
    // 
    // *   **Monday**
    // *   **Tuesday**
    // *   **Wednesday**
    // *   **Thursday**
    // *   **Friday**
    // *   **Saturday**
    // *   **Sunday**
    std::shared_ptr<string> backupPeriod_ = nullptr;
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The name of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the name.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanName_ = nullptr;
    // The network bandwidth throttling. Unit: KB/s. DBS allows a maximum bandwidth of 10 GB/s.
    // 
    // > This parameter takes effect only when physical backups for MySQL databases are performed.
    std::shared_ptr<int64_t> backupRateLimit_ = nullptr;
    // The number of days for which the backup data is retained. Valid values: 0 to 1825. Default value: 730.
    std::shared_ptr<int32_t> backupRetentionPeriod_ = nullptr;
    // The disk I/O limit. Unit: KB/s.
    // 
    // >  This parameter takes effect only during the physical backup of a MySQL database.
    std::shared_ptr<int64_t> backupSpeedLimit_ = nullptr;
    // The start time of the full backup. Specify the time in the *HH:mm*Z format. The time must be in UTC. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the start time of full backup tasks.
    std::shared_ptr<string> backupStartTime_ = nullptr;
    // The storage type. Valid values:
    // 
    // *   Empty: If you do not specify this parameter, the system stores backup data in your OSS bucket.
    // *   system: The system stores backup data in the built-in OSS bucket of DBS.
    std::shared_ptr<string> backupStorageType_ = nullptr;
    // The backup method that you want to use for full backups. Valid values:
    // 
    // *   **simple**: scheduled backup. If you specify this value for the BackupStrategyType parameter, you must also specify the BackupPeriod and BackupStartTime parameters.
    // *   **Manual**: manual backup.
    // 
    // > Default value: **simple**.
    std::shared_ptr<string> backupStrategyType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The unique ID (UID) of the Alibaba Cloud account to which the backup schedule belongs. You can call the [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) operation to obtain the UID.
    std::shared_ptr<string> crossAliyunId_ = nullptr;
    // The name of the RAM role that is used to perform backup across Alibaba Cloud accounts. You can call the [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) operation to obtain the RAM role.
    std::shared_ptr<string> crossRoleName_ = nullptr;
    // The number of days after which the storage class of the backup data is changed to Archive. Default value: 365.
    std::shared_ptr<int32_t> duplicationArchivePeriod_ = nullptr;
    // The number of days after which the storage class of the backup data is changed to Infrequent Access (IA). Default value: 180.
    std::shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ = nullptr;
    // Specifies whether to enable the incremental log backup feature. Valid values:
    // 
    // *   **true**: enables the incremental log backup feature.
    // *   **false**: disables the incremental log backup feature.
    std::shared_ptr<bool> enableBackupLog_ = nullptr;
    // The name of the OSS bucket.
    // 
    // >  By default, the system automatically generates an OSS bucket name.
    std::shared_ptr<string> OSSBucketName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The source database name. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it.
    // 
    // >  If the source database runs the **PostgreSQL** database engine or **MongoDB** database engine, this parameter is required.
    std::shared_ptr<string> sourceEndpointDatabaseName_ = nullptr;
    // The source database endpoint. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it.
    // 
    // >  If you set **SourceEndpointInstanceType** to **Express**, **Agent**, or **Other**, this parameter is required.
    std::shared_ptr<string> sourceEndpointIP_ = nullptr;
    // The database instance ID. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the ID.
    // 
    // >  If you set **SourceEndpoint****InstanceType** to **RDS**, **ECS**, **DDS**, or **Express**, this parameter is required.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // The location of the database. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the location. Valid values:
    // 
    // *   **RDS**
    // *   **ECS**
    // *   **Express**: The database is connected to Database Backup (DBS) via Express Connect, VPN Gateway, or Smart Access Gateway.
    // *   **Agent**: The database is connected over a DBS backup gateway.
    // *   **DDS**: The database is an ApsaraDB for MongoDB database.
    // *   **Other**: The database is connected to DBS by using the IP address and port of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceEndpointInstanceType_ = nullptr;
    // The system ID (SID) of the Oracle database.
    // 
    // > This parameter is required if the database is an Oracle database.
    std::shared_ptr<string> sourceEndpointOracleSID_ = nullptr;
    // The password of the account that is used to connect to the database.
    // 
    // > This parameter is required except that the database is an **SQL Server** database that is connected to DBS over a DBS backup gateway or a **Redis** database.
    std::shared_ptr<string> sourceEndpointPassword_ = nullptr;
    // The port that is used to connect to the source database. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the port.
    // 
    // >  If you set **SourceEndpoint****InstanceType** to **Express**, **Agent**, **Other**, or **ECS**, this parameter is required.
    std::shared_ptr<int32_t> sourceEndpointPort_ = nullptr;
    // The region in which the source database resides. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the region.
    // 
    // >  If you set **SourceEndpointInstanceType** to RDS, ECS, DDS, Express, or Agent, this parameter is required.
    std::shared_ptr<string> sourceEndpointRegion_ = nullptr;
    // The username of the account that is used to connect to the database.
    // 
    // > This parameter is required except that the database is an **SQL Server** database that is connected to DBS over a DBS backup gateway or a **Redis** database.
    std::shared_ptr<string> sourceEndpointUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
