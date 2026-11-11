// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTORETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTORETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class CreateRestoreTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestoreTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoOpenDatabase, autoOpenDatabase_);
      DARABONBA_PTR_TO_JSON(AutoShutdownDatabase, autoShutdownDatabase_);
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceClass, destDatabaseInstanceClass_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceDatabaseVersion, destDatabaseInstanceDatabaseVersion_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceRegion, destDatabaseInstanceRegion_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceStorageSize, destDatabaseInstanceStorageSize_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceType, destDatabaseInstanceType_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceVSwitch, destDatabaseInstanceVSwitch_);
      DARABONBA_PTR_TO_JSON(DestDatabaseInstanceVpc, destDatabaseInstanceVpc_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointIP, destinationEndpointIP_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointPort, destinationEndpointPort_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_TO_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_TO_JSON(DuplicateConflict, duplicateConflict_);
      DARABONBA_PTR_TO_JSON(EnableDestinationEndpointSsl, enableDestinationEndpointSsl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RestoreDestinationMode, restoreDestinationMode_);
      DARABONBA_PTR_TO_JSON(RestoreDir, restoreDir_);
      DARABONBA_PTR_TO_JSON(RestoreHome, restoreHome_);
      DARABONBA_PTR_TO_JSON(RestoreObjects, restoreObjects_);
      DARABONBA_PTR_TO_JSON(RestoreTaskName, restoreTaskName_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(SslCaPem, sslCaPem_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoOpenDatabase, autoOpenDatabase_);
      DARABONBA_PTR_FROM_JSON(AutoShutdownDatabase, autoShutdownDatabase_);
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceClass, destDatabaseInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceDatabaseVersion, destDatabaseInstanceDatabaseVersion_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceRegion, destDatabaseInstanceRegion_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceStorageSize, destDatabaseInstanceStorageSize_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceType, destDatabaseInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceVSwitch, destDatabaseInstanceVSwitch_);
      DARABONBA_PTR_FROM_JSON(DestDatabaseInstanceVpc, destDatabaseInstanceVpc_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointDatabaseName, destinationEndpointDatabaseName_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointIP, destinationEndpointIP_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceID, destinationEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointInstanceType, destinationEndpointInstanceType_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointOracleSID, destinationEndpointOracleSID_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPassword, destinationEndpointPassword_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointPort, destinationEndpointPort_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointRegion, destinationEndpointRegion_);
      DARABONBA_PTR_FROM_JSON(DestinationEndpointUserName, destinationEndpointUserName_);
      DARABONBA_PTR_FROM_JSON(DuplicateConflict, duplicateConflict_);
      DARABONBA_PTR_FROM_JSON(EnableDestinationEndpointSsl, enableDestinationEndpointSsl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RestoreDestinationMode, restoreDestinationMode_);
      DARABONBA_PTR_FROM_JSON(RestoreDir, restoreDir_);
      DARABONBA_PTR_FROM_JSON(RestoreHome, restoreHome_);
      DARABONBA_PTR_FROM_JSON(RestoreObjects, restoreObjects_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskName, restoreTaskName_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(SslCaPem, sslCaPem_);
    };
    CreateRestoreTaskRequest() = default ;
    CreateRestoreTaskRequest(const CreateRestoreTaskRequest &) = default ;
    CreateRestoreTaskRequest(CreateRestoreTaskRequest &&) = default ;
    CreateRestoreTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestoreTaskRequest() = default ;
    CreateRestoreTaskRequest& operator=(const CreateRestoreTaskRequest &) = default ;
    CreateRestoreTaskRequest& operator=(CreateRestoreTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoOpenDatabase_ == nullptr
        && this->autoShutdownDatabase_ == nullptr && this->backupGatewayId_ == nullptr && this->backupPlanId_ == nullptr && this->backupSetId_ == nullptr && this->clientToken_ == nullptr
        && this->crossAliyunId_ == nullptr && this->crossRoleName_ == nullptr && this->destDatabaseInstanceClass_ == nullptr && this->destDatabaseInstanceDatabaseVersion_ == nullptr && this->destDatabaseInstanceRegion_ == nullptr
        && this->destDatabaseInstanceStorageSize_ == nullptr && this->destDatabaseInstanceType_ == nullptr && this->destDatabaseInstanceVSwitch_ == nullptr && this->destDatabaseInstanceVpc_ == nullptr && this->destinationEndpointDatabaseName_ == nullptr
        && this->destinationEndpointIP_ == nullptr && this->destinationEndpointInstanceID_ == nullptr && this->destinationEndpointInstanceType_ == nullptr && this->destinationEndpointOracleSID_ == nullptr && this->destinationEndpointPassword_ == nullptr
        && this->destinationEndpointPort_ == nullptr && this->destinationEndpointRegion_ == nullptr && this->destinationEndpointUserName_ == nullptr && this->duplicateConflict_ == nullptr && this->enableDestinationEndpointSsl_ == nullptr
        && this->ownerId_ == nullptr && this->restoreDestinationMode_ == nullptr && this->restoreDir_ == nullptr && this->restoreHome_ == nullptr && this->restoreObjects_ == nullptr
        && this->restoreTaskName_ == nullptr && this->restoreTime_ == nullptr && this->sslCaPem_ == nullptr; };
    // autoOpenDatabase Field Functions 
    bool hasAutoOpenDatabase() const { return this->autoOpenDatabase_ != nullptr;};
    void deleteAutoOpenDatabase() { this->autoOpenDatabase_ = nullptr;};
    inline string getAutoOpenDatabase() const { DARABONBA_PTR_GET_DEFAULT(autoOpenDatabase_, "") };
    inline CreateRestoreTaskRequest& setAutoOpenDatabase(string autoOpenDatabase) { DARABONBA_PTR_SET_VALUE(autoOpenDatabase_, autoOpenDatabase) };


    // autoShutdownDatabase Field Functions 
    bool hasAutoShutdownDatabase() const { return this->autoShutdownDatabase_ != nullptr;};
    void deleteAutoShutdownDatabase() { this->autoShutdownDatabase_ = nullptr;};
    inline string getAutoShutdownDatabase() const { DARABONBA_PTR_GET_DEFAULT(autoShutdownDatabase_, "") };
    inline CreateRestoreTaskRequest& setAutoShutdownDatabase(string autoShutdownDatabase) { DARABONBA_PTR_SET_VALUE(autoShutdownDatabase_, autoShutdownDatabase) };


    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline CreateRestoreTaskRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline CreateRestoreTaskRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string getBackupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateRestoreTaskRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRestoreTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string getCrossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline CreateRestoreTaskRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string getCrossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline CreateRestoreTaskRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // destDatabaseInstanceClass Field Functions 
    bool hasDestDatabaseInstanceClass() const { return this->destDatabaseInstanceClass_ != nullptr;};
    void deleteDestDatabaseInstanceClass() { this->destDatabaseInstanceClass_ = nullptr;};
    inline string getDestDatabaseInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceClass_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceClass(string destDatabaseInstanceClass) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceClass_, destDatabaseInstanceClass) };


    // destDatabaseInstanceDatabaseVersion Field Functions 
    bool hasDestDatabaseInstanceDatabaseVersion() const { return this->destDatabaseInstanceDatabaseVersion_ != nullptr;};
    void deleteDestDatabaseInstanceDatabaseVersion() { this->destDatabaseInstanceDatabaseVersion_ = nullptr;};
    inline string getDestDatabaseInstanceDatabaseVersion() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceDatabaseVersion_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceDatabaseVersion(string destDatabaseInstanceDatabaseVersion) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceDatabaseVersion_, destDatabaseInstanceDatabaseVersion) };


    // destDatabaseInstanceRegion Field Functions 
    bool hasDestDatabaseInstanceRegion() const { return this->destDatabaseInstanceRegion_ != nullptr;};
    void deleteDestDatabaseInstanceRegion() { this->destDatabaseInstanceRegion_ = nullptr;};
    inline string getDestDatabaseInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceRegion_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceRegion(string destDatabaseInstanceRegion) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceRegion_, destDatabaseInstanceRegion) };


    // destDatabaseInstanceStorageSize Field Functions 
    bool hasDestDatabaseInstanceStorageSize() const { return this->destDatabaseInstanceStorageSize_ != nullptr;};
    void deleteDestDatabaseInstanceStorageSize() { this->destDatabaseInstanceStorageSize_ = nullptr;};
    inline string getDestDatabaseInstanceStorageSize() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceStorageSize_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceStorageSize(string destDatabaseInstanceStorageSize) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceStorageSize_, destDatabaseInstanceStorageSize) };


    // destDatabaseInstanceType Field Functions 
    bool hasDestDatabaseInstanceType() const { return this->destDatabaseInstanceType_ != nullptr;};
    void deleteDestDatabaseInstanceType() { this->destDatabaseInstanceType_ = nullptr;};
    inline string getDestDatabaseInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceType_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceType(string destDatabaseInstanceType) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceType_, destDatabaseInstanceType) };


    // destDatabaseInstanceVSwitch Field Functions 
    bool hasDestDatabaseInstanceVSwitch() const { return this->destDatabaseInstanceVSwitch_ != nullptr;};
    void deleteDestDatabaseInstanceVSwitch() { this->destDatabaseInstanceVSwitch_ = nullptr;};
    inline string getDestDatabaseInstanceVSwitch() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceVSwitch_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceVSwitch(string destDatabaseInstanceVSwitch) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceVSwitch_, destDatabaseInstanceVSwitch) };


    // destDatabaseInstanceVpc Field Functions 
    bool hasDestDatabaseInstanceVpc() const { return this->destDatabaseInstanceVpc_ != nullptr;};
    void deleteDestDatabaseInstanceVpc() { this->destDatabaseInstanceVpc_ = nullptr;};
    inline string getDestDatabaseInstanceVpc() const { DARABONBA_PTR_GET_DEFAULT(destDatabaseInstanceVpc_, "") };
    inline CreateRestoreTaskRequest& setDestDatabaseInstanceVpc(string destDatabaseInstanceVpc) { DARABONBA_PTR_SET_VALUE(destDatabaseInstanceVpc_, destDatabaseInstanceVpc) };


    // destinationEndpointDatabaseName Field Functions 
    bool hasDestinationEndpointDatabaseName() const { return this->destinationEndpointDatabaseName_ != nullptr;};
    void deleteDestinationEndpointDatabaseName() { this->destinationEndpointDatabaseName_ = nullptr;};
    inline string getDestinationEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointDatabaseName_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointDatabaseName(string destinationEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationEndpointDatabaseName_, destinationEndpointDatabaseName) };


    // destinationEndpointIP Field Functions 
    bool hasDestinationEndpointIP() const { return this->destinationEndpointIP_ != nullptr;};
    void deleteDestinationEndpointIP() { this->destinationEndpointIP_ = nullptr;};
    inline string getDestinationEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointIP_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointIP(string destinationEndpointIP) { DARABONBA_PTR_SET_VALUE(destinationEndpointIP_, destinationEndpointIP) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string getDestinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointInstanceType Field Functions 
    bool hasDestinationEndpointInstanceType() const { return this->destinationEndpointInstanceType_ != nullptr;};
    void deleteDestinationEndpointInstanceType() { this->destinationEndpointInstanceType_ = nullptr;};
    inline string getDestinationEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceType_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointInstanceType(string destinationEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceType_, destinationEndpointInstanceType) };


    // destinationEndpointOracleSID Field Functions 
    bool hasDestinationEndpointOracleSID() const { return this->destinationEndpointOracleSID_ != nullptr;};
    void deleteDestinationEndpointOracleSID() { this->destinationEndpointOracleSID_ = nullptr;};
    inline string getDestinationEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOracleSID_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointOracleSID(string destinationEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOracleSID_, destinationEndpointOracleSID) };


    // destinationEndpointPassword Field Functions 
    bool hasDestinationEndpointPassword() const { return this->destinationEndpointPassword_ != nullptr;};
    void deleteDestinationEndpointPassword() { this->destinationEndpointPassword_ = nullptr;};
    inline string getDestinationEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPassword_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointPassword(string destinationEndpointPassword) { DARABONBA_PTR_SET_VALUE(destinationEndpointPassword_, destinationEndpointPassword) };


    // destinationEndpointPort Field Functions 
    bool hasDestinationEndpointPort() const { return this->destinationEndpointPort_ != nullptr;};
    void deleteDestinationEndpointPort() { this->destinationEndpointPort_ = nullptr;};
    inline int32_t getDestinationEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPort_, 0) };
    inline CreateRestoreTaskRequest& setDestinationEndpointPort(int32_t destinationEndpointPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointPort_, destinationEndpointPort) };


    // destinationEndpointRegion Field Functions 
    bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
    void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
    inline string getDestinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


    // destinationEndpointUserName Field Functions 
    bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
    void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
    inline string getDestinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


    // duplicateConflict Field Functions 
    bool hasDuplicateConflict() const { return this->duplicateConflict_ != nullptr;};
    void deleteDuplicateConflict() { this->duplicateConflict_ = nullptr;};
    inline string getDuplicateConflict() const { DARABONBA_PTR_GET_DEFAULT(duplicateConflict_, "") };
    inline CreateRestoreTaskRequest& setDuplicateConflict(string duplicateConflict) { DARABONBA_PTR_SET_VALUE(duplicateConflict_, duplicateConflict) };


    // enableDestinationEndpointSsl Field Functions 
    bool hasEnableDestinationEndpointSsl() const { return this->enableDestinationEndpointSsl_ != nullptr;};
    void deleteEnableDestinationEndpointSsl() { this->enableDestinationEndpointSsl_ = nullptr;};
    inline bool getEnableDestinationEndpointSsl() const { DARABONBA_PTR_GET_DEFAULT(enableDestinationEndpointSsl_, false) };
    inline CreateRestoreTaskRequest& setEnableDestinationEndpointSsl(bool enableDestinationEndpointSsl) { DARABONBA_PTR_SET_VALUE(enableDestinationEndpointSsl_, enableDestinationEndpointSsl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateRestoreTaskRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // restoreDestinationMode Field Functions 
    bool hasRestoreDestinationMode() const { return this->restoreDestinationMode_ != nullptr;};
    void deleteRestoreDestinationMode() { this->restoreDestinationMode_ = nullptr;};
    inline string getRestoreDestinationMode() const { DARABONBA_PTR_GET_DEFAULT(restoreDestinationMode_, "") };
    inline CreateRestoreTaskRequest& setRestoreDestinationMode(string restoreDestinationMode) { DARABONBA_PTR_SET_VALUE(restoreDestinationMode_, restoreDestinationMode) };


    // restoreDir Field Functions 
    bool hasRestoreDir() const { return this->restoreDir_ != nullptr;};
    void deleteRestoreDir() { this->restoreDir_ = nullptr;};
    inline string getRestoreDir() const { DARABONBA_PTR_GET_DEFAULT(restoreDir_, "") };
    inline CreateRestoreTaskRequest& setRestoreDir(string restoreDir) { DARABONBA_PTR_SET_VALUE(restoreDir_, restoreDir) };


    // restoreHome Field Functions 
    bool hasRestoreHome() const { return this->restoreHome_ != nullptr;};
    void deleteRestoreHome() { this->restoreHome_ = nullptr;};
    inline string getRestoreHome() const { DARABONBA_PTR_GET_DEFAULT(restoreHome_, "") };
    inline CreateRestoreTaskRequest& setRestoreHome(string restoreHome) { DARABONBA_PTR_SET_VALUE(restoreHome_, restoreHome) };


    // restoreObjects Field Functions 
    bool hasRestoreObjects() const { return this->restoreObjects_ != nullptr;};
    void deleteRestoreObjects() { this->restoreObjects_ = nullptr;};
    inline string getRestoreObjects() const { DARABONBA_PTR_GET_DEFAULT(restoreObjects_, "") };
    inline CreateRestoreTaskRequest& setRestoreObjects(string restoreObjects) { DARABONBA_PTR_SET_VALUE(restoreObjects_, restoreObjects) };


    // restoreTaskName Field Functions 
    bool hasRestoreTaskName() const { return this->restoreTaskName_ != nullptr;};
    void deleteRestoreTaskName() { this->restoreTaskName_ = nullptr;};
    inline string getRestoreTaskName() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskName_, "") };
    inline CreateRestoreTaskRequest& setRestoreTaskName(string restoreTaskName) { DARABONBA_PTR_SET_VALUE(restoreTaskName_, restoreTaskName) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline int64_t getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, 0L) };
    inline CreateRestoreTaskRequest& setRestoreTime(int64_t restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // sslCaPem Field Functions 
    bool hasSslCaPem() const { return this->sslCaPem_ != nullptr;};
    void deleteSslCaPem() { this->sslCaPem_ = nullptr;};
    inline string getSslCaPem() const { DARABONBA_PTR_GET_DEFAULT(sslCaPem_, "") };
    inline CreateRestoreTaskRequest& setSslCaPem(string sslCaPem) { DARABONBA_PTR_SET_VALUE(sslCaPem_, sslCaPem) };


  protected:
    // Specifies whether to automatically start the instance after an Oracle physical backup is restored.
    shared_ptr<string> autoOpenDatabase_ {};
    // Specifies whether to automatically shut down the instance after an Oracle physical backup is restored.
    shared_ptr<string> autoShutdownDatabase_ {};
    // The ID of the backup gateway.
    // 
    // > This parameter is required if **DestinationEndpointInstanceType** is set to Agent.
    shared_ptr<int64_t> backupGatewayId_ {};
    // The ID of the backup plan.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // The ID of the full backup set used for restoration. This parameter and RestoreTime are mutually exclusive.
    shared_ptr<string> backupSetId_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions.
    shared_ptr<string> clientToken_ {};
    // The UID of the Alibaba Cloud account used for cross-account backup.
    shared_ptr<string> crossAliyunId_ {};
    // The name of the RAM role used for cross-account backup.
    shared_ptr<string> crossRoleName_ {};
    // The instance specifications of the new database instance to which data is restored.
    shared_ptr<string> destDatabaseInstanceClass_ {};
    // The database engine version of the new database instance to which data is restored.
    shared_ptr<string> destDatabaseInstanceDatabaseVersion_ {};
    // The region of the new database instance to which data is restored.
    shared_ptr<string> destDatabaseInstanceRegion_ {};
    // The instance storage size of the new database to recover.
    shared_ptr<string> destDatabaseInstanceStorageSize_ {};
    // The instance type of the new database to which data is restored.
    shared_ptr<string> destDatabaseInstanceType_ {};
    // The vSwitch of the new database instance to which data is restored.
    shared_ptr<string> destDatabaseInstanceVSwitch_ {};
    // The VPC of the new database instance to which data is restored.
    shared_ptr<string> destDatabaseInstanceVpc_ {};
    // The name of the database.
    // 
    // > This parameter is required if the database engine is PostgreSQL or MongoDB.
    shared_ptr<string> destinationEndpointDatabaseName_ {};
    // The database connection address.
    // 
    // > This parameter is required if **DestinationEndpointInstanceType** is set to Express, Agent, or Other.
    shared_ptr<string> destinationEndpointIP_ {};
    // The instance ID of the database.
    // 
    // > This parameter is required if **DestinationEndpointInstanceType** is set to RDS, ECS, DDS, or Express.
    shared_ptr<string> destinationEndpointInstanceID_ {};
    // The location of the database. Valid values:
    // - **RDS**
    // - **ECS**
    // - **Express**: databases connected over Express Connect circuits, VPN gateways, or Smart Access Gateway (SAG)
    // - **Agent**: databases connected over backup gateways
    // - **DDS**: ApsaraDB for MongoDB
    // - **Other**: databases connected by using IP addresses and port numbers
    // - **dg**: self-managed databases that have no public IP addresses or port numbers and are connected over Database Gateway
    // 
    // This parameter is required.
    shared_ptr<string> destinationEndpointInstanceType_ {};
    // The Oracle SID.
    // 
    // > This parameter is required if the database engine is Oracle.
    shared_ptr<string> destinationEndpointOracleSID_ {};
    // The password of the database account.
    // 
    // > This parameter is not required if the database engine is Redis, or if the database is connected over a backup gateway and the database engine is SQL Server. In other scenarios, this parameter is required.
    shared_ptr<string> destinationEndpointPassword_ {};
    // The port number of the database.
    // 
    // > This parameter is required if **DestinationEndpointInstanceType** is set to Express, Agent, Other, or ECS.
    shared_ptr<int32_t> destinationEndpointPort_ {};
    // The region of the database instance.
    // >This parameter is required if **DestinationEndpointInstanceType** is set to RDS, ECS, DDS, Express, or Agent.
    shared_ptr<string> destinationEndpointRegion_ {};
    // The username of the database account.
    // 
    // > This parameter is not required if the database engine is Redis, or if the database is connected over a backup gateway and the database engine is SQL Server. In other scenarios, this parameter is required.
    shared_ptr<string> destinationEndpointUserName_ {};
    // The method used to handle conflicts between objects with the same name. Valid values:
    // 
    // - **renamenew**: renames the object if an object with the same name exists.
    shared_ptr<string> duplicateConflict_ {};
    // Specifies whether to connect to the destination by using an SSL-encrypted connection.
    shared_ptr<bool> enableDestinationEndpointSsl_ {};
    shared_ptr<string> ownerId_ {};
    // The method used to restore data to the destination. Valid values:
    // - **EXIST_INSTANCE**: restores data to an existing instance.
    // - **NEW_INSTANCE**: restores data to a new instance.
    shared_ptr<string> restoreDestinationMode_ {};
    // This parameter is required if **DestinationEndpointInstanceType** is set to Agent and the backup plan is for MySQL.
    shared_ptr<string> restoreDir_ {};
    // The directory of the database program.
    shared_ptr<string> restoreHome_ {};
    // The objects to be restored.
    // 
    // - For more information, see the definition of the **RestoreObjects** parameter below. This parameter is not required if the database is connected over a backup gateway. In other scenarios, this parameter is required.
    // - Template: `[{ "DBName": "Name of the database to be restored", "NewDBName": "Name of the destination database" }]`
    // 
    // > Restoring objects by calling this API operation only supports restoration at the database level. To restore specific tables, go to the console. For more information, see [Restore a database](https://help.aliyun.com/document_detail/85543.html).
    shared_ptr<string> restoreObjects_ {};
    // The name of the restore task.
    // 
    // This parameter is required.
    shared_ptr<string> restoreTaskName_ {};
    // The point in time to which you want to restore the database. The value is a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> restoreTime_ {};
    // The credential for the SSL-encrypted connection to the destination.
    shared_ptr<string> sslCaPem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
