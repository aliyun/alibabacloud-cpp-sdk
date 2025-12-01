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
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
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
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RestoreDir, restoreDir_);
      DARABONBA_PTR_TO_JSON(RestoreHome, restoreHome_);
      DARABONBA_PTR_TO_JSON(RestoreObjects, restoreObjects_);
      DARABONBA_PTR_TO_JSON(RestoreTaskName, restoreTaskName_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(BackupSetId, backupSetId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
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
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RestoreDir, restoreDir_);
      DARABONBA_PTR_FROM_JSON(RestoreHome, restoreHome_);
      DARABONBA_PTR_FROM_JSON(RestoreObjects, restoreObjects_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskName, restoreTaskName_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
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
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupPlanId_ == nullptr && return this->backupSetId_ == nullptr && return this->clientToken_ == nullptr && return this->crossAliyunId_ == nullptr && return this->crossRoleName_ == nullptr
        && return this->destinationEndpointDatabaseName_ == nullptr && return this->destinationEndpointIP_ == nullptr && return this->destinationEndpointInstanceID_ == nullptr && return this->destinationEndpointInstanceType_ == nullptr && return this->destinationEndpointOracleSID_ == nullptr
        && return this->destinationEndpointPassword_ == nullptr && return this->destinationEndpointPort_ == nullptr && return this->destinationEndpointRegion_ == nullptr && return this->destinationEndpointUserName_ == nullptr && return this->duplicateConflict_ == nullptr
        && return this->ownerId_ == nullptr && return this->restoreDir_ == nullptr && return this->restoreHome_ == nullptr && return this->restoreObjects_ == nullptr && return this->restoreTaskName_ == nullptr
        && return this->restoreTime_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline CreateRestoreTaskRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline CreateRestoreTaskRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // backupSetId Field Functions 
    bool hasBackupSetId() const { return this->backupSetId_ != nullptr;};
    void deleteBackupSetId() { this->backupSetId_ = nullptr;};
    inline string backupSetId() const { DARABONBA_PTR_GET_DEFAULT(backupSetId_, "") };
    inline CreateRestoreTaskRequest& setBackupSetId(string backupSetId) { DARABONBA_PTR_SET_VALUE(backupSetId_, backupSetId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRestoreTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string crossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline CreateRestoreTaskRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string crossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline CreateRestoreTaskRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // destinationEndpointDatabaseName Field Functions 
    bool hasDestinationEndpointDatabaseName() const { return this->destinationEndpointDatabaseName_ != nullptr;};
    void deleteDestinationEndpointDatabaseName() { this->destinationEndpointDatabaseName_ = nullptr;};
    inline string destinationEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointDatabaseName_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointDatabaseName(string destinationEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(destinationEndpointDatabaseName_, destinationEndpointDatabaseName) };


    // destinationEndpointIP Field Functions 
    bool hasDestinationEndpointIP() const { return this->destinationEndpointIP_ != nullptr;};
    void deleteDestinationEndpointIP() { this->destinationEndpointIP_ = nullptr;};
    inline string destinationEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointIP_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointIP(string destinationEndpointIP) { DARABONBA_PTR_SET_VALUE(destinationEndpointIP_, destinationEndpointIP) };


    // destinationEndpointInstanceID Field Functions 
    bool hasDestinationEndpointInstanceID() const { return this->destinationEndpointInstanceID_ != nullptr;};
    void deleteDestinationEndpointInstanceID() { this->destinationEndpointInstanceID_ = nullptr;};
    inline string destinationEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceID_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointInstanceID(string destinationEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceID_, destinationEndpointInstanceID) };


    // destinationEndpointInstanceType Field Functions 
    bool hasDestinationEndpointInstanceType() const { return this->destinationEndpointInstanceType_ != nullptr;};
    void deleteDestinationEndpointInstanceType() { this->destinationEndpointInstanceType_ = nullptr;};
    inline string destinationEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointInstanceType_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointInstanceType(string destinationEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(destinationEndpointInstanceType_, destinationEndpointInstanceType) };


    // destinationEndpointOracleSID Field Functions 
    bool hasDestinationEndpointOracleSID() const { return this->destinationEndpointOracleSID_ != nullptr;};
    void deleteDestinationEndpointOracleSID() { this->destinationEndpointOracleSID_ = nullptr;};
    inline string destinationEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointOracleSID_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointOracleSID(string destinationEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(destinationEndpointOracleSID_, destinationEndpointOracleSID) };


    // destinationEndpointPassword Field Functions 
    bool hasDestinationEndpointPassword() const { return this->destinationEndpointPassword_ != nullptr;};
    void deleteDestinationEndpointPassword() { this->destinationEndpointPassword_ = nullptr;};
    inline string destinationEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPassword_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointPassword(string destinationEndpointPassword) { DARABONBA_PTR_SET_VALUE(destinationEndpointPassword_, destinationEndpointPassword) };


    // destinationEndpointPort Field Functions 
    bool hasDestinationEndpointPort() const { return this->destinationEndpointPort_ != nullptr;};
    void deleteDestinationEndpointPort() { this->destinationEndpointPort_ = nullptr;};
    inline int32_t destinationEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointPort_, 0) };
    inline CreateRestoreTaskRequest& setDestinationEndpointPort(int32_t destinationEndpointPort) { DARABONBA_PTR_SET_VALUE(destinationEndpointPort_, destinationEndpointPort) };


    // destinationEndpointRegion Field Functions 
    bool hasDestinationEndpointRegion() const { return this->destinationEndpointRegion_ != nullptr;};
    void deleteDestinationEndpointRegion() { this->destinationEndpointRegion_ = nullptr;};
    inline string destinationEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointRegion_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointRegion(string destinationEndpointRegion) { DARABONBA_PTR_SET_VALUE(destinationEndpointRegion_, destinationEndpointRegion) };


    // destinationEndpointUserName Field Functions 
    bool hasDestinationEndpointUserName() const { return this->destinationEndpointUserName_ != nullptr;};
    void deleteDestinationEndpointUserName() { this->destinationEndpointUserName_ = nullptr;};
    inline string destinationEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(destinationEndpointUserName_, "") };
    inline CreateRestoreTaskRequest& setDestinationEndpointUserName(string destinationEndpointUserName) { DARABONBA_PTR_SET_VALUE(destinationEndpointUserName_, destinationEndpointUserName) };


    // duplicateConflict Field Functions 
    bool hasDuplicateConflict() const { return this->duplicateConflict_ != nullptr;};
    void deleteDuplicateConflict() { this->duplicateConflict_ = nullptr;};
    inline string duplicateConflict() const { DARABONBA_PTR_GET_DEFAULT(duplicateConflict_, "") };
    inline CreateRestoreTaskRequest& setDuplicateConflict(string duplicateConflict) { DARABONBA_PTR_SET_VALUE(duplicateConflict_, duplicateConflict) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateRestoreTaskRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // restoreDir Field Functions 
    bool hasRestoreDir() const { return this->restoreDir_ != nullptr;};
    void deleteRestoreDir() { this->restoreDir_ = nullptr;};
    inline string restoreDir() const { DARABONBA_PTR_GET_DEFAULT(restoreDir_, "") };
    inline CreateRestoreTaskRequest& setRestoreDir(string restoreDir) { DARABONBA_PTR_SET_VALUE(restoreDir_, restoreDir) };


    // restoreHome Field Functions 
    bool hasRestoreHome() const { return this->restoreHome_ != nullptr;};
    void deleteRestoreHome() { this->restoreHome_ = nullptr;};
    inline string restoreHome() const { DARABONBA_PTR_GET_DEFAULT(restoreHome_, "") };
    inline CreateRestoreTaskRequest& setRestoreHome(string restoreHome) { DARABONBA_PTR_SET_VALUE(restoreHome_, restoreHome) };


    // restoreObjects Field Functions 
    bool hasRestoreObjects() const { return this->restoreObjects_ != nullptr;};
    void deleteRestoreObjects() { this->restoreObjects_ = nullptr;};
    inline string restoreObjects() const { DARABONBA_PTR_GET_DEFAULT(restoreObjects_, "") };
    inline CreateRestoreTaskRequest& setRestoreObjects(string restoreObjects) { DARABONBA_PTR_SET_VALUE(restoreObjects_, restoreObjects) };


    // restoreTaskName Field Functions 
    bool hasRestoreTaskName() const { return this->restoreTaskName_ != nullptr;};
    void deleteRestoreTaskName() { this->restoreTaskName_ = nullptr;};
    inline string restoreTaskName() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskName_, "") };
    inline CreateRestoreTaskRequest& setRestoreTaskName(string restoreTaskName) { DARABONBA_PTR_SET_VALUE(restoreTaskName_, restoreTaskName) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline int64_t restoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, 0L) };
    inline CreateRestoreTaskRequest& setRestoreTime(int64_t restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


  protected:
    // The ID of the backup gateway.
    // 
    // > This parameter is required if the DestinationEndpointInstanceType parameter is set to Agent.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The ID of the backup schedule.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The ID of the full backup set.
    std::shared_ptr<string> backupSetId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The unique ID (UID) of the Alibaba Cloud account to which the source database belongs.
    std::shared_ptr<string> crossAliyunId_ = nullptr;
    // The name of the RAM role that is used to perform backups across Alibaba Cloud accounts.
    std::shared_ptr<string> crossRoleName_ = nullptr;
    // The name of the database.
    // 
    // 
    // 
    // > This parameter is required if the database is a PostgreSQL database or a MongoDB database.
    std::shared_ptr<string> destinationEndpointDatabaseName_ = nullptr;
    // The endpoint that is used to connect to the database.
    // 
    // > This parameter is required if the DestinationEndpointInstanceType parameter is set to Express, Agent, or Other.
    std::shared_ptr<string> destinationEndpointIP_ = nullptr;
    // The ID of the database instance.
    // 
    // > This parameter is required if the DestinationEndpointInstanceType parameter is set to RDS, ECS, DDS, or Express.
    std::shared_ptr<string> destinationEndpointInstanceID_ = nullptr;
    // The location of the database. Valid values:
    // 
    // *   **RDS**: The database is deployed on an ApsaraDB RDS instance.
    // *   **ECS**: The database is deployed on an Elastic Compute Service (ECS) instance.
    // *   **Express**: The database is connected to Database Backup (DBS) by using Express Connect, VPN Gateway, or Smart Access Gateway.
    // *   **Agent**: The database is connected over a DBS backup gateway.
    // *   **DDS**: The database is an ApsaraDB for MongoDB database.
    // *   **Other**: The database is connected to DBS by using the IP address and port of the database.
    // *   **dg**: The database is a self-managed database that does not have public IP addresses or port numbers and is connected to DBS over Database Gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationEndpointInstanceType_ = nullptr;
    // The system ID (SID) of the Oracle database.
    // 
    // 
    // 
    // > This parameter is required if the source database is an Oracle database.
    std::shared_ptr<string> destinationEndpointOracleSID_ = nullptr;
    // The password of the account that is used to connect to the source database.
    // 
    // 
    // 
    // > This parameter is required except that the database is an SQL Server database that is connected to DBS over a DBS backup gateway or a Redis database.
    std::shared_ptr<string> destinationEndpointPassword_ = nullptr;
    // The port of the database.
    // > This parameter is required if the DestinationEndpointInstanceType parameter is set to Express, Agent, Other, or ECS.
    std::shared_ptr<int32_t> destinationEndpointPort_ = nullptr;
    // The region ID of the destination database instance.
    // 
    // >  You must specify this parameter if **DestinationEndpointInstanceType** is set to RDS, ECS, DDS, Express, or Agent.
    std::shared_ptr<string> destinationEndpointRegion_ = nullptr;
    // The username of the account that is used to connect to the database.
    // 
    // 
    // > This parameter is required except that the database is an SQL Server database that is connected to DBS over a DBS backup gateway or a Redis database.
    std::shared_ptr<string> destinationEndpointUserName_ = nullptr;
    // The method of processing objects with the same name. Valid values:
    // 
    // - failure: The restore task fails if the system detects objects with the same name. This is the default value.
    // - renamenew: The restore task renames objects with the same name starting from the second occurrence.
    std::shared_ptr<string> duplicateConflict_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // This parameter is required if the DestinationEndpointInstanceType parameter is set to Agent and the backup object of the backup schedule is a MySQL database.
    std::shared_ptr<string> restoreDir_ = nullptr;
    // The program directory of the database.
    std::shared_ptr<string> restoreHome_ = nullptr;
    // The objects to be restored.
    // 
    // 
    // 
    // > This parameter is required except that the DestinationEndpointInstanceType parameter is set to Agent. For information about the parameter definition, see RestoreObjects.
    std::shared_ptr<string> restoreObjects_ = nullptr;
    // The name of the restore task.
    // 
    // This parameter is required.
    std::shared_ptr<string> restoreTaskName_ = nullptr;
    // The time to run the restore task, such as 1554560477000.
    std::shared_ptr<int64_t> restoreTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
