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
      DARABONBA_PTR_TO_JSON(EnableSourceEndpointSsl, enableSourceEndpointSsl_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
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
    friend void from_json(const Darabonba::Json& j, ModifyBackupSourceEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupGatewayId, backupGatewayId_);
      DARABONBA_PTR_FROM_JSON(BackupObjects, backupObjects_);
      DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CrossAliyunId, crossAliyunId_);
      DARABONBA_PTR_FROM_JSON(CrossRoleName, crossRoleName_);
      DARABONBA_PTR_FROM_JSON(EnableSourceEndpointSsl, enableSourceEndpointSsl_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
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
        && this->backupObjects_ == nullptr && this->backupPlanId_ == nullptr && this->clientToken_ == nullptr && this->crossAliyunId_ == nullptr && this->crossRoleName_ == nullptr
        && this->enableSourceEndpointSsl_ == nullptr && this->ownerId_ == nullptr && this->sourceEndpointDatabaseName_ == nullptr && this->sourceEndpointIP_ == nullptr && this->sourceEndpointInstanceID_ == nullptr
        && this->sourceEndpointInstanceType_ == nullptr && this->sourceEndpointOracleHome_ == nullptr && this->sourceEndpointOracleSID_ == nullptr && this->sourceEndpointPassword_ == nullptr && this->sourceEndpointPort_ == nullptr
        && this->sourceEndpointRegion_ == nullptr && this->sourceEndpointUserName_ == nullptr && this->sslCaPem_ == nullptr; };
    // backupGatewayId Field Functions 
    bool hasBackupGatewayId() const { return this->backupGatewayId_ != nullptr;};
    void deleteBackupGatewayId() { this->backupGatewayId_ = nullptr;};
    inline int64_t getBackupGatewayId() const { DARABONBA_PTR_GET_DEFAULT(backupGatewayId_, 0L) };
    inline ModifyBackupSourceEndpointRequest& setBackupGatewayId(int64_t backupGatewayId) { DARABONBA_PTR_SET_VALUE(backupGatewayId_, backupGatewayId) };


    // backupObjects Field Functions 
    bool hasBackupObjects() const { return this->backupObjects_ != nullptr;};
    void deleteBackupObjects() { this->backupObjects_ = nullptr;};
    inline string getBackupObjects() const { DARABONBA_PTR_GET_DEFAULT(backupObjects_, "") };
    inline ModifyBackupSourceEndpointRequest& setBackupObjects(string backupObjects) { DARABONBA_PTR_SET_VALUE(backupObjects_, backupObjects) };


    // backupPlanId Field Functions 
    bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
    void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
    inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
    inline ModifyBackupSourceEndpointRequest& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBackupSourceEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // crossAliyunId Field Functions 
    bool hasCrossAliyunId() const { return this->crossAliyunId_ != nullptr;};
    void deleteCrossAliyunId() { this->crossAliyunId_ = nullptr;};
    inline string getCrossAliyunId() const { DARABONBA_PTR_GET_DEFAULT(crossAliyunId_, "") };
    inline ModifyBackupSourceEndpointRequest& setCrossAliyunId(string crossAliyunId) { DARABONBA_PTR_SET_VALUE(crossAliyunId_, crossAliyunId) };


    // crossRoleName Field Functions 
    bool hasCrossRoleName() const { return this->crossRoleName_ != nullptr;};
    void deleteCrossRoleName() { this->crossRoleName_ = nullptr;};
    inline string getCrossRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossRoleName_, "") };
    inline ModifyBackupSourceEndpointRequest& setCrossRoleName(string crossRoleName) { DARABONBA_PTR_SET_VALUE(crossRoleName_, crossRoleName) };


    // enableSourceEndpointSsl Field Functions 
    bool hasEnableSourceEndpointSsl() const { return this->enableSourceEndpointSsl_ != nullptr;};
    void deleteEnableSourceEndpointSsl() { this->enableSourceEndpointSsl_ = nullptr;};
    inline string getEnableSourceEndpointSsl() const { DARABONBA_PTR_GET_DEFAULT(enableSourceEndpointSsl_, "") };
    inline ModifyBackupSourceEndpointRequest& setEnableSourceEndpointSsl(string enableSourceEndpointSsl) { DARABONBA_PTR_SET_VALUE(enableSourceEndpointSsl_, enableSourceEndpointSsl) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ModifyBackupSourceEndpointRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // sourceEndpointDatabaseName Field Functions 
    bool hasSourceEndpointDatabaseName() const { return this->sourceEndpointDatabaseName_ != nullptr;};
    void deleteSourceEndpointDatabaseName() { this->sourceEndpointDatabaseName_ = nullptr;};
    inline string getSourceEndpointDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointDatabaseName_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointDatabaseName(string sourceEndpointDatabaseName) { DARABONBA_PTR_SET_VALUE(sourceEndpointDatabaseName_, sourceEndpointDatabaseName) };


    // sourceEndpointIP Field Functions 
    bool hasSourceEndpointIP() const { return this->sourceEndpointIP_ != nullptr;};
    void deleteSourceEndpointIP() { this->sourceEndpointIP_ = nullptr;};
    inline string getSourceEndpointIP() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointIP_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointIP(string sourceEndpointIP) { DARABONBA_PTR_SET_VALUE(sourceEndpointIP_, sourceEndpointIP) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string getSourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string getSourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


    // sourceEndpointOracleHome Field Functions 
    bool hasSourceEndpointOracleHome() const { return this->sourceEndpointOracleHome_ != nullptr;};
    void deleteSourceEndpointOracleHome() { this->sourceEndpointOracleHome_ = nullptr;};
    inline string getSourceEndpointOracleHome() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleHome_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointOracleHome(string sourceEndpointOracleHome) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleHome_, sourceEndpointOracleHome) };


    // sourceEndpointOracleSID Field Functions 
    bool hasSourceEndpointOracleSID() const { return this->sourceEndpointOracleSID_ != nullptr;};
    void deleteSourceEndpointOracleSID() { this->sourceEndpointOracleSID_ = nullptr;};
    inline string getSourceEndpointOracleSID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointOracleSID_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointOracleSID(string sourceEndpointOracleSID) { DARABONBA_PTR_SET_VALUE(sourceEndpointOracleSID_, sourceEndpointOracleSID) };


    // sourceEndpointPassword Field Functions 
    bool hasSourceEndpointPassword() const { return this->sourceEndpointPassword_ != nullptr;};
    void deleteSourceEndpointPassword() { this->sourceEndpointPassword_ = nullptr;};
    inline string getSourceEndpointPassword() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPassword_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointPassword(string sourceEndpointPassword) { DARABONBA_PTR_SET_VALUE(sourceEndpointPassword_, sourceEndpointPassword) };


    // sourceEndpointPort Field Functions 
    bool hasSourceEndpointPort() const { return this->sourceEndpointPort_ != nullptr;};
    void deleteSourceEndpointPort() { this->sourceEndpointPort_ = nullptr;};
    inline int32_t getSourceEndpointPort() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointPort_, 0) };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointPort(int32_t sourceEndpointPort) { DARABONBA_PTR_SET_VALUE(sourceEndpointPort_, sourceEndpointPort) };


    // sourceEndpointRegion Field Functions 
    bool hasSourceEndpointRegion() const { return this->sourceEndpointRegion_ != nullptr;};
    void deleteSourceEndpointRegion() { this->sourceEndpointRegion_ = nullptr;};
    inline string getSourceEndpointRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointRegion_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointRegion(string sourceEndpointRegion) { DARABONBA_PTR_SET_VALUE(sourceEndpointRegion_, sourceEndpointRegion) };


    // sourceEndpointUserName Field Functions 
    bool hasSourceEndpointUserName() const { return this->sourceEndpointUserName_ != nullptr;};
    void deleteSourceEndpointUserName() { this->sourceEndpointUserName_ = nullptr;};
    inline string getSourceEndpointUserName() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointUserName_, "") };
    inline ModifyBackupSourceEndpointRequest& setSourceEndpointUserName(string sourceEndpointUserName) { DARABONBA_PTR_SET_VALUE(sourceEndpointUserName_, sourceEndpointUserName) };


    // sslCaPem Field Functions 
    bool hasSslCaPem() const { return this->sslCaPem_ != nullptr;};
    void deleteSslCaPem() { this->sslCaPem_ = nullptr;};
    inline string getSslCaPem() const { DARABONBA_PTR_GET_DEFAULT(sslCaPem_, "") };
    inline ModifyBackupSourceEndpointRequest& setSslCaPem(string sslCaPem) { DARABONBA_PTR_SET_VALUE(sslCaPem_, sslCaPem) };


  protected:
    // The backup gateway ID. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // > You must specify this parameter when **SourceEndpointInstanceType** is Agent.
    shared_ptr<int64_t> backupGatewayId_ {};
    // The backup objects. This parameter is optional when SourceEndpointInstanceType is Agent. For all other cases, you must specify it. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    shared_ptr<string> backupObjects_ {};
    // The backup plan ID. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // This parameter is required.
    shared_ptr<string> backupPlanId_ {};
    // A unique string that ensures idempotence and prevents duplicate requests.
    shared_ptr<string> clientToken_ {};
    // The UID of the Alibaba Cloud account used for cross-account backup. Call [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) to get this value.
    shared_ptr<string> crossAliyunId_ {};
    // The RAM role name used for cross-account backup. Call [DescribeRestoreTaskList](https://help.aliyun.com/document_detail/2869838.html) to get this value.
    shared_ptr<string> crossRoleName_ {};
    shared_ptr<string> enableSourceEndpointSsl_ {};
    shared_ptr<string> ownerId_ {};
    // The database name.
    // 
    // - You must specify this parameter for PostgreSQL or MongoDB databases.
    // 
    // - You must specify this parameter for Microsoft SQL Server databases connected through a backup gateway.
    shared_ptr<string> sourceEndpointDatabaseName_ {};
    // The database endpoint. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // > You must specify this parameter when **SourceEndpointInstanceType** is Express, Agent, or Other.
    shared_ptr<string> sourceEndpointIP_ {};
    // The database instance ID. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // > You must specify this parameter when **SourceEndpointInstanceType** is RDS, ECS, DDS, or Express.
    shared_ptr<string> sourceEndpointInstanceID_ {};
    // The location of the database. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value. Valid values:
    // 
    // - **RDS**
    // 
    // - **ECS**
    // 
    // - **Express**: A database connected through a leased line, VPN Gateway, or Smart Access Gateway
    // 
    // - **Agent**: A database connected through a backup gateway
    // 
    // - **DDS**: A MongoDB instance on Alibaba Cloud
    // 
    // - **Other**: A database connected directly using an IP address and port
    // 
    // This parameter is required.
    shared_ptr<string> sourceEndpointInstanceType_ {};
    shared_ptr<string> sourceEndpointOracleHome_ {};
    // The Oracle system ID (SID). You must specify this parameter for Oracle databases.
    shared_ptr<string> sourceEndpointOracleSID_ {};
    // The password.
    // 
    // This parameter is optional for Redis databases or for Microsoft SQL Server databases connected through a backup gateway. For all other cases, you must specify it.
    shared_ptr<string> sourceEndpointPassword_ {};
    // The database port. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // > You must specify this parameter when **SourceEndpointInstanceType** is Express, Agent, Other, or ECS.
    shared_ptr<int32_t> sourceEndpointPort_ {};
    // The region where the database is located. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // > You must specify this parameter when **SourceEndpointInstanceType** is RDS, ECS, DDS, Express, or Agent.
    shared_ptr<string> sourceEndpointRegion_ {};
    // The database account. Call [DescribeBackupPlanList](https://help.aliyun.com/document_detail/2869825.html) to get this value.
    // 
    // This parameter is optional for Redis databases or for Microsoft SQL Server databases connected through a backup gateway. For all other cases, you must specify it.
    shared_ptr<string> sourceEndpointUserName_ {};
    shared_ptr<string> sslCaPem_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
