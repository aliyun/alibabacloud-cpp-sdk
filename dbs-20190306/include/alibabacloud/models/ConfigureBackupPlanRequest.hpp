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
      DARABONBA_PTR_TO_JSON(BackupStorageEncryptMethod, backupStorageEncryptMethod_);
      DARABONBA_PTR_TO_JSON(BackupStorageType, backupStorageType_);
      DARABONBA_PTR_TO_JSON(BackupStrategyType, backupStrategyType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_TO_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_TO_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_TO_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_TO_JSON(EnableMysqlPhysicalBackupBinlog, enableMysqlPhysicalBackupBinlog_);
      DARABONBA_PTR_TO_JSON(EnableSourceEndpointSsl, enableSourceEndpointSsl_);
      DARABONBA_PTR_TO_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOracleHome, sourceEndpointOracleHome_);
      DARABONBA_PTR_TO_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_TO_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_TO_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_TO_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_TO_JSON(SslCaPem, sslCaPem_);
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
      DARABONBA_PTR_FROM_JSON(BackupStorageEncryptMethod, backupStorageEncryptMethod_);
      DARABONBA_PTR_FROM_JSON(BackupStorageType, backupStorageType_);
      DARABONBA_PTR_FROM_JSON(BackupStrategyType, backupStrategyType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(DuplicationArchivePeriod, duplicationArchivePeriod_);
      DARABONBA_PTR_FROM_JSON(DuplicationInfrequentAccessPeriod, duplicationInfrequentAccessPeriod_);
      DARABONBA_PTR_FROM_JSON(EnableBackupLog, enableBackupLog_);
      DARABONBA_PTR_FROM_JSON(EnableMysqlPhysicalBackupBinlog, enableMysqlPhysicalBackupBinlog_);
      DARABONBA_PTR_FROM_JSON(EnableSourceEndpointSsl, enableSourceEndpointSsl_);
      DARABONBA_PTR_FROM_JSON(OSSBucketName, OSSBucketName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointDatabaseName, sourceEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointIP, sourceEndpointIP_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOracleHome, sourceEndpointOracleHome_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointOracleSID, sourceEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPassword, sourceEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointPort, sourceEndpointPort_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointRegion, sourceEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointUserName, sourceEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(SslCaPem, sslCaPem_);
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
        && this->backupGatewayId_ == nullptr && this->backupLogIntervalSeconds_ == nullptr && this->backupObjects_ == nullptr && this->backupPeriod_ == nullptr && this->backupPlanId_ == nullptr
        && this->backupPlanName_ == nullptr && this->backupRateLimit_ == nullptr && this->backupRetentionPeriod_ == nullptr && this->backupSpeedLimit_ == nullptr && this->backupStartTime_ == nullptr
        && this->backupStorageEncryptMethod_ == nullptr && this->backupStorageType_ == nullptr && this->backupStrategyType_ == nullptr && this->clientToken_ == nullptr && this->crossAliyunId_ == nullptr
        && this->crossRoleName_ == nullptr && this->duplicationArchivePeriod_ == nullptr && this->duplicationInfrequentAccessPeriod_ == nullptr && this->enableBackupLog_ == nullptr && this->enableMysqlPhysicalBackupBinlog_ == nullptr
        && this->enableSourceEndpointSsl_ == nullptr && this->OSSBucketName_ == nullptr && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceEndpointDatabaseName_ == nullptr
        && this->sourceEndpointIP_ == nullptr && this->sourceEndpointInstanceID_ == nullptr && this->sourceEndpointInstanceType_ == nullptr && this->sourceEndpointOracleHome_ == nullptr && this->sourceEndpointOracleSID_ == nullptr
        && this->sourceEndpointPassword_ == nullptr && this->sourceEndpointPort_ == nullptr && this->sourceEndpointRegion_ == nullptr && this->sourceEndpointUserName_ == nullptr && this->sslCaPem_ == nullptr; };
    // autoStartBackup Field Functions 
    bool hasAutoStartBackup() const { return this->autoStartBackup_ != nullptr;};
    void deleteAutoStartBackup() { this->autoStartBackup_ = nullptr;};
    inline bool getAutoStartBackup() const { DARABONBA_PTR_GET_DEFAULT(autoStartBackup_, false) };
    inline ConfigureBackupPlanRequest& setAutoStartBackup(bool autoStartBackup) { DARABONBA_PTR_SET_VALUE(autoStartBackup_, autoStartBackup) };


    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline ConfigureBackupPlanRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupLogIntervalSeconds Field Functions 
    bool hasBackupLogIntervalSeconds() const { return this->backupLogIntervalSeconds_ != nullptr;};
    void deleteBackupLogIntervalSeconds() { this->backupLogIntervalSeconds_ = nullptr;};
    inline int32_t getBackupLogIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(backupLogIntervalSeconds_, 0) };
    inline ConfigureBackupPlanRequest& setBackupLogIntervalSeconds(int32_t backupLogIntervalSeconds) { DARABONBA_PTR_SET_VALUE(backupLogIntervalSeconds_, backupLogIntervalSeconds) };


    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string getBackupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline ConfigureBackupPlanRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPeriod Field Functions 
    bool hasBackupPeriod() const { return this->backupPeriod_ != nullptr;};
    void deleteBackupPeriod() { this->backupPeriod_ = nullptr;};
    inline string getBackupPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupPeriod_, "") };
    inline ConfigureBackupPlanRequest& setBackupPeriod(string backupPeriod) { DARABONBA_PTR_SET_VALUE(backupPeriod_, backupPeriod) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ConfigureBackupPlanRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupPlanName Field Functions 
    bool hasBackupPlanName() const { return this->backupPlanName_ != nullptr;};
    void deleteBackupPlanName() { this->backupPlanName_ = nullptr;};
    inline string getBackupPlanName() const { DARABONBA_PTR_GET_DEFAULT(backupPlanName_, "") };
    inline ConfigureBackupPlanRequest& setBackupPlanName(string backupPlanName) { DARABONBA_PTR_SET_VALUE(backupPlanName_, backupPlanName) };


    // backupRateLimit Field Functions 
    bool hasBackupRateLimit() const { return this->backupRateLimit_ != nullptr;};
    void deleteBackupRateLimit() { this->backupRateLimit_ = nullptr;};
    inline int64_t getBackupRateLimit() const { DARABONBA_PTR_GET_DEFAULT(backupRateLimit_, 0L) };
    inline ConfigureBackupPlanRequest& setBackupRateLimit(int64_t backupRateLimit) { DARABONBA_PTR_SET_VALUE(backupRateLimit_, backupRateLimit) };


    // backupRetentionPeriod Field Functions 
    bool hasBackupRetentionPeriod() const { return this->backupRetentionPeriod_ != nullptr;};
    void deleteBackupRetentionPeriod() { this->backupRetentionPeriod_ = nullptr;};
    inline int32_t getBackupRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(backupRetentionPeriod_, 0) };
    inline ConfigureBackupPlanRequest& setBackupRetentionPeriod(int32_t backupRetentionPeriod) { DARABONBA_PTR_SET_VALUE(backupRetentionPeriod_, backupRetentionPeriod) };


    // backupSpeedLimit Field Functions 
    bool hasBackupSpeedLimit() const { return this->backupSpeedLimit_ != nullptr;};
    void deleteBackupSpeedLimit() { this->backupSpeedLimit_ = nullptr;};
    inline int64_t getBackupSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(backupSpeedLimit_, 0L) };
    inline ConfigureBackupPlanRequest& setBackupSpeedLimit(int64_t backupSpeedLimit) { DARABONBA_PTR_SET_VALUE(backupSpeedLimit_, backupSpeedLimit) };


    // backupStartTime Field Functions 
    bool hasBackupStartTime() const { return this->backupStartTime_ != nullptr;};
    void deleteBackupStartTime() { this->backupStartTime_ = nullptr;};
    inline string getBackupStartTime() const { DARABONBA_PTR_GET_DEFAULT(backupStartTime_, "") };
    inline ConfigureBackupPlanRequest& setBackupStartTime(string backupStartTime) { DARABONBA_PTR_SET_VALUE(backupStartTime_, backupStartTime) };


    // backupStorageEncryptMethod Field Functions 
    bool hasBackupStorageEncryptMethod() const { return this->backupStorageEncryptMethod_ != nullptr;};
    void deleteBackupStorageEncryptMethod() { this->backupStorageEncryptMethod_ = nullptr;};
    inline string getBackupStorageEncryptMethod() const { DARABONBA_PTR_GET_DEFAULT(backupStorageEncryptMethod_, "") };
    inline ConfigureBackupPlanRequest& setBackupStorageEncryptMethod(string backupStorageEncryptMethod) { DARABONBA_PTR_SET_VALUE(backupStorageEncryptMethod_, backupStorageEncryptMethod) };


    // backupStorageType Field Functions 
    bool hasBackupStorageType() const { return this->backupStorageType_ != nullptr;};
    void deleteBackupStorageType() { this->backupStorageType_ = nullptr;};
    inline string getBackupStorageType() const { DARABONBA_PTR_GET_DEFAULT(backupStorageType_, "") };
    inline ConfigureBackupPlanRequest& setBackupStorageType(string backupStorageType) { DARABONBA_PTR_SET_VALUE(backupStorageType_, backupStorageType) };


    // backupStrategyType Field Functions 
    bool hasBackupStrategyType() const { return this->backupStrategyType_ != nullptr;};
    void deleteBackupStrategyType() { this->backupStrategyType_ = nullptr;};
    inline string getBackupStrategyType() const { DARABONBA_PTR_GET_DEFAULT(backupStrategyType_, "") };
    inline ConfigureBackupPlanRequest& setBackupStrategyType(string backupStrategyType) { DARABONBA_PTR_SET_VALUE(backupStrategyType_, backupStrategyType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ConfigureBackupPlanRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string getCrossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline ConfigureBackupPlanRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string getCrossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline ConfigureBackupPlanRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // duplicationArchivePeriod Field Functions 
    bool hasDuplicationArchivePeriod() const { return this->duplicationArchivePeriod_ != nullptr;};
    void deleteDuplicationArchivePeriod() { this->duplicationArchivePeriod_ = nullptr;};
    inline int32_t getDuplicationArchivePeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationArchivePeriod_, 0) };
    inline ConfigureBackupPlanRequest& setDuplicationArchivePeriod(int32_t duplicationArchivePeriod) { DARABONBA_PTR_SET_VALUE(duplicationArchivePeriod_, duplicationArchivePeriod) };


    // duplicationInfrequentAccessPeriod Field Functions 
    bool hasDuplicationInfrequentAccessPeriod() const { return this->duplicationInfrequentAccessPeriod_ != nullptr;};
    void deleteDuplicationInfrequentAccessPeriod() { this->duplicationInfrequentAccessPeriod_ = nullptr;};
    inline int32_t getDuplicationInfrequentAccessPeriod() const { DARABONBA_PTR_GET_DEFAULT(duplicationInfrequentAccessPeriod_, 0) };
    inline ConfigureBackupPlanRequest& setDuplicationInfrequentAccessPeriod(int32_t duplicationInfrequentAccessPeriod) { DARABONBA_PTR_SET_VALUE(duplicationInfrequentAccessPeriod_, duplicationInfrequentAccessPeriod) };


    // enableBackupLog Field Functions 
    bool hasEnableBackupLog() const { return this->enableBackupLog_ != nullptr;};
    void deleteEnableBackupLog() { this->enableBackupLog_ = nullptr;};
    inline bool getEnableBackupLog() const { DARABONBA_PTR_GET_DEFAULT(enableBackupLog_, false) };
    inline ConfigureBackupPlanRequest& setEnableBackupLog(bool enableBackupLog) { DARABONBA_PTR_SET_VALUE(enableBackupLog_, enableBackupLog) };


    // enableMysqlPhysicalBackupBinlog Field Functions 
    bool hasEnableMysqlPhysicalBackupBinlog() const { return this->enableMysqlPhysicalBackupBinlog_ != nullptr;};
    void deleteEnableMysqlPhysicalBackupBinlog() { this->enableMysqlPhysicalBackupBinlog_ = nullptr;};
    inline string getEnableMysqlPhysicalBackupBinlog() const { DARABONBA_PTR_GET_DEFAULT(enableMysqlPhysicalBackupBinlog_, "") };
    inline ConfigureBackupPlanRequest& setEnableMysqlPhysicalBackupBinlog(string enableMysqlPhysicalBackupBinlog) { DARABONBA_PTR_SET_VALUE(enableMysqlPhysicalBackupBinlog_, enableMysqlPhysicalBackupBinlog) };


    // enableSourceEndpointSsl Field Functions 
    bool hasEnableSourceEndpointSsl() const { return this->enableSourceEndpointSsl_ != nullptr;};
    void deleteEnableSourceEndpointSsl() { this->enableSourceEndpointSsl_ = nullptr;};
    inline string getEnableSourceEndpointSsl() const { DARABONBA_PTR_GET_DEFAULT(enableSourceEndpointSsl_, "") };
    inline ConfigureBackupPlanRequest& setEnableSourceEndpointSsl(string enableSourceEndpointSsl) { DARABONBA_PTR_SET_VALUE(enableSourceEndpointSsl_, enableSourceEndpointSsl) };


    // OSSBucketName Field Functions 
    bool hasOSSBucketName() const { return this->OSSBucketName_ != nullptr;};
    void deleteOSSBucketName() { this->OSSBucketName_ = nullptr;};
    inline string getOSSBucketName() const { DARABONBA_PTR_GET_DEFAULT(OSSBucketName_, "") };
    inline ConfigureBackupPlanRequest& setOSSBucketName(string OSSBucketName) { DARABONBA_PTR_SET_VALUE(OSSBucketName_, OSSBucketName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ConfigureBackupPlanRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ConfigureBackupPlanRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string getSourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string getSourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleHome Field Functions 
    bool hasSourceEndpointOracleHome() const { return this->sourceEndpointOracleHome_ != nullptr;};
    void deleteSourceEndpointOracleHome() { this->sourceEndpointOracleHome_ = nullptr;};
    inline string getSourceEndpointOracleHome() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleHome_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointOracleHome(string sourceEndpointOracleHome) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleHome_, sourceEndpointOracleHome) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string getSourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string getSourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline int32_t getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, 0) };
    inline ConfigureBackupPlanRequest& setSourceEndpointPort(int32_t sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline ConfigureBackupPlanRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


    // sslCaPem Field Functions 
    bool hasSslCaPem() const { return this->sslCaPem_ != nullptr;};
    void deleteSslCaPem() { this->sslCaPem_ = nullptr;};
    inline string getSslCaPem() const { DARABONBA_PTR_GET_DEFAULT(sslCaPem_, "") };
    inline ConfigureBackupPlanRequest& setSslCaPem(string sslCaPem) { DARABONBA_PTR_SET_VALUE(sslCaPem_, sslCaPem) };


  protected:
    // Enable automatic backup. Valid values:
    // 
    // - **true**: Enable
    // 
    // - **false**: Disable
    shared_ptr<bool> autoStartBackup_ {};
    // The backup gateway ID. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // > This parameter is required when **SourceEndpointInstanceType** is **agent**.
    shared_ptr<int64_t> backupGatewayId_ {};
    // The incremental interval in seconds (s).
    // 
    // > Only physical backup is supported.
    shared_ptr<int32_t> backupLogIntervalSeconds_ {};
    // The backup objects. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    shared_ptr<string> backupObjects_ {};
    // The full backup period. Valid values:
    // 
    // - **Monday**: Monday
    // 
    // - **Tuesday**: Tuesday
    // 
    // - **Wednesday**: Wednesday
    // 
    // - **Thursday**: Thursday
    // 
    // - **Friday**: Friday
    // 
    // - **Saturday**: Saturday
    // 
    // - **Sunday**: Sunday
    shared_ptr<string> backupPeriod_ {};
    // The backup plan ID. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // The custom backup plan name. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanName_ {};
    // The network bandwidth throttling in KB/s. The maximum value is 10 GB.
    // 
    // > This parameter is valid only for MySQL physical backup.
    shared_ptr<int64_t> backupRateLimit_ {};
    // The retention period for backup data. Valid values: 0 to 1825. Default value: 730 days.
    shared_ptr<int32_t> backupRetentionPeriod_ {};
    // The disk I/O limit in KB/s.
    // 
    // > This parameter is valid only for MySQL physical backup.
    shared_ptr<int64_t> backupSpeedLimit_ {};
    // The full backup start time in *HH:mm*Z (UTC) format. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    shared_ptr<string> backupStartTime_ {};
    shared_ptr<string> backupStorageEncryptMethod_ {};
    // The built-in storage type:
    // 
    // - Empty (default): Backup data is stored on your OSS.
    // 
    // - system: Backup data is stored on the built-in OSS of DBS.
    shared_ptr<string> backupStorageType_ {};
    // The full backup period. Valid values:
    // 
    // - **simple**: Periodic backup. Use this value with BackupPeriod and BackupStartTime.
    // 
    // - **manual**: Manual backup.
    // 
    // > Default value: **simple**.
    shared_ptr<string> backupStrategyType_ {};
    // Ensure the idempotence of the request to prevent duplicate submissions. The client generates this parameter value. Ensure its uniqueness across different requests. The maximum length is 64 ASCII characters, and the value cannot contain non-ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The UID for cross-Alibaba Cloud account backup. Call the [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) API to get this parameter\\"s value.
    shared_ptr<string> crossAliyunId_ {};
    // The RAM role name for cross-Alibaba Cloud account backup. Call the [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) API to get this parameter\\"s value.
    shared_ptr<string> crossRoleName_ {};
    // The period after which data is converted to archive cold storage. Default value: 365 days.
    shared_ptr<int32_t> duplicationArchivePeriod_ {};
    // The period after which data is converted to Infrequent Access storage. Default value: 180 days.
    shared_ptr<int32_t> duplicationInfrequentAccessPeriod_ {};
    // Enable incremental log backup. Valid values:
    // 
    // - **true**: Enable
    // 
    // - **false**: Disable
    shared_ptr<bool> enableBackupLog_ {};
    shared_ptr<string> enableMysqlPhysicalBackupBinlog_ {};
    shared_ptr<string> enableSourceEndpointSsl_ {};
    // The OSS bucket name.
    // 
    // > The system automatically generates a new name by default.
    shared_ptr<string> OSSBucketName_ {};
    shared_ptr<string> ownerId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The database name. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // > This parameter is required when the database type is **PostgreSQL** or **MongoDB**.
    shared_ptr<string> sourceEndpointDatabaseName_ {};
    // The database endpoint. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // > This parameter is required when **SourceEndpointInstanceType** is **express**, **agent**, or **other**.
    shared_ptr<string> sourceEndpointIP_ {};
    // The database instance ID. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // > This parameter is required when **SourceEndpoint**.**InstanceType** is **RDS**, **ECS**, **DDS**, or **Express**.
    shared_ptr<string> sourceEndpointInstanceID_ {};
    // The location of the database. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value. Valid values:
    // 
    // - **RDS**
    // 
    // - **ECS**
    // 
    // - **Express**: A database connected through a leased line, VPN Gateway, or Smart Gateway.
    // 
    // - **Agent**: A database connected through a backup gateway.
    // 
    // - **DDS**: Cloud MongoDB.
    // 
    // - **Other**: A database directly connected through IP:Port.
    // 
    // This parameter is required.
    shared_ptr<string> sourceEndpointInstanceType_ {};
    shared_ptr<string> sourceEndpointOracleHome_ {};
    // The Oracle SID name.
    // 
    // > This parameter is required when the database type is Oracle.
    shared_ptr<string> sourceEndpointOracleSID_ {};
    // The password.
    // 
    // > This parameter is optional when the database type is **Redis**, or when the database location is **agent** and the database type is **SQL Server**. It is required in other scenarios.
    shared_ptr<string> sourceEndpointPassword_ {};
    // The database port. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // > This parameter is required when **SourceEndpoint**.**InstanceType** is **express**, **agent**, **other**, or **ECS**.
    shared_ptr<int32_t> sourceEndpointPort_ {};
    // The region of the database. Call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) API to get this parameter\\"s value.
    // 
    // > This parameter is required when **SourceEndpointInstanceType** is RDS, ECS, DDS, Express, or Agent.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The database account.
    // 
    // > This parameter is optional when the database type is **Redis**, or when the database location is **agent** and the database type is **SQL Server**. It is required in other scenarios.
    shared_ptr<string> sourceEndpointUserName_ {};
    shared_ptr<string> sslCaPem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
