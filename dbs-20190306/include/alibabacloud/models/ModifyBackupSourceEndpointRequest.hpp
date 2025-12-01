// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPSOURCEENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPSOURCEENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class ModifyBackupSourceEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupSourceEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_TO_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_TO_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
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
    friend void from_json(const Darabonba::Json& j, ModifyBackupSourceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
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
    ModifyBackupSourceEndpointRequest() = default ;
    ModifyBackupSourceEndpointRequest(const ModifyBackupSourceEndpointRequest &) = default ;
    ModifyBackupSourceEndpointRequest(ModifyBackupSourceEndpointRequest &&) = default ;
    ModifyBackupSourceEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupSourceEndpointRequest() = default ;
    ModifyBackupSourceEndpointRequest& operator=(const ModifyBackupSourceEndpointRequest &) = default ;
    ModifyBackupSourceEndpointRequest& operator=(ModifyBackupSourceEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupGatewayId_ == nullptr
        && return this->backupObjects_ == nullptr && return this->backupPlanId_ == nullptr && return this->clientToken_ == nullptr && return this->crossAliyunId_ == nullptr && return this->crossRoleName_ == nullptr
        && return this->ownerId_ == nullptr && return this->sourceEndpointDatabaseName_ == nullptr && return this->sourceEndpointIP_ == nullptr && return this->sourceEndpointInstanceID_ == nullptr && return this->sourceEndpointInstanceType_ == nullptr
        && return this->sourceEndpointOracleSID_ == nullptr && return this->sourceEndpointPassword_ == nullptr && return this->sourceEndpointPort_ == nullptr && return this->sourceEndpointRegion_ == nullptr && return this->sourceEndpointUserName_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t backupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline ModifyBackupSourceEndpointRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string backupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline ModifyBackupSourceEndpointRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string backupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupSourceEndpointRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupSourceEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string crossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline ModifyBackupSourceEndpointRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string crossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline ModifyBackupSourceEndpointRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupSourceEndpointRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string sourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string sourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string sourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string sourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string sourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline int32_t sourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, 0) };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointPort(int32_t sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string sourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string sourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


  protected:
    // The backup gateway ID. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the ID.
    // 
    // >  If you set **SourceEndpointInstanceType** to Agent, this parameter is required.
    std::shared_ptr<int64_t> backupGatewayId_ = nullptr;
    // The backup object. If you set SourceEndpointInstanceType to Agent, this parameter is optional. Otherwise, it is required. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the backup object.
    std::shared_ptr<string> backupObjects_ = nullptr;
    // The ID of the backup schedule. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupPlanId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The unique ID (UID) of the Alibaba Cloud account to which the backup schedule belongs. You can call the [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) operation to obtain the UID.
    std::shared_ptr<string> crossAliyunId_ = nullptr;
    // The name of the RAM role that is used to perform backups across Alibaba Cloud accounts. You can call the [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) operation to obtain the RAM role.
    std::shared_ptr<string> crossRoleName_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The name of the database.
    // 
    // *   This parameter is required if the database is a PostgreSQL or MongoDB database.
    // *   This parameter is required if the database is an SQL Server database that is connected to DBS over a DBS backup gateway.
    std::shared_ptr<string> sourceEndpointDatabaseName_ = nullptr;
    // The endpoint of the database. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the endpoint.
    // 
    // >  If you set **SourceEndpointInstanceType** to Express, Agent, or Other, this parameter is required.
    std::shared_ptr<string> sourceEndpointIP_ = nullptr;
    // The database instance ID. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the ID.
    // 
    // >  If you set **SourceEndpointInstanceType** to RDS, ECS, DDS, or Express, this parameter is required.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // The location of the database. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain it. Valid values:
    // 
    // *   **RDS**
    // *   **ECS**
    // *   **Express**: The database is connected to DBS via Express Connect, VPN Gateway, or Smart Access Gateway.
    // *   **Agent**: The database is connected to DBS over a DBS backup gateway.
    // *   **DDS**: The database is an ApsaraDB for MongoDB database.
    // *   **Other**: The database is connected to DBS using the IP address and port of the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceEndpointInstanceType_ = nullptr;
    // The SID of the Oracle source database. If the database is an Oracle database, this parameter is required.
    std::shared_ptr<string> sourceEndpointOracleSID_ = nullptr;
    // The password of the account that is used to connect to the database.
    // 
    // This parameter is required except that the database is an SQL Server database that is connected to DBS over a DBS backup gateway or a Redis database.
    std::shared_ptr<string> sourceEndpointPassword_ = nullptr;
    // The port that is used to connect to the database. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the port.
    // 
    // >  If you set **SourceEndpointInstanceType** to Express, Agent, Other, or ECS, this parameter is required.
    std::shared_ptr<int32_t> sourceEndpointPort_ = nullptr;
    // The region in which the database you want to back up resides. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the region.
    // 
    // >  If you set **SourceEndpointInstanceType** to RDS, ECS, DDS, Express, or Agent, this parameter is required.
    std::shared_ptr<string> sourceEndpointRegion_ = nullptr;
    // The account that is used to log on to the database. You can call the [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) operation to obtain the account.
    // 
    // If the database is an SQL Server database connected to DBS over a DBS backup gateway or a Redis database, this parameter is optional. Otherwise, it is required.
    std::shared_ptr<string> sourceEndpointUserName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
