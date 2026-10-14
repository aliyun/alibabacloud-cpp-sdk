// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTAGENTICDATASOURCECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TESTAGENTICDATASOURCECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class TestAgenticDataSourceConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestAgenticDataSourceConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AuthAccount, authAccount_);
      DARABONBA_PTR_TO_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(KmsSecret, kmsSecret_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(SnowflakeRole, snowflakeRole_);
      DARABONBA_PTR_TO_JSON(SnowflakeWarehouse, snowflakeWarehouse_);
      DARABONBA_PTR_TO_JSON(SyncAlias, syncAlias_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, TestAgenticDataSourceConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AuthAccount, authAccount_);
      DARABONBA_PTR_FROM_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(KmsSecret, kmsSecret_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(SnowflakeRole, snowflakeRole_);
      DARABONBA_PTR_FROM_JSON(SnowflakeWarehouse, snowflakeWarehouse_);
      DARABONBA_PTR_FROM_JSON(SyncAlias, syncAlias_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    TestAgenticDataSourceConnectionRequest() = default ;
    TestAgenticDataSourceConnectionRequest(const TestAgenticDataSourceConnectionRequest &) = default ;
    TestAgenticDataSourceConnectionRequest(TestAgenticDataSourceConnectionRequest &&) = default ;
    TestAgenticDataSourceConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestAgenticDataSourceConnectionRequest() = default ;
    TestAgenticDataSourceConnectionRequest& operator=(const TestAgenticDataSourceConnectionRequest &) = default ;
    TestAgenticDataSourceConnectionRequest& operator=(TestAgenticDataSourceConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->authAccount_ == nullptr && this->authPassword_ == nullptr && this->authType_ == nullptr && this->catalogName_ == nullptr && this->dataSourceUuid_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr && this->instanceResourceId_ == nullptr && this->instanceSource_ == nullptr
        && this->kmsSecret_ == nullptr && this->port_ == nullptr && this->roleArn_ == nullptr && this->schema_ == nullptr && this->snowflakeRole_ == nullptr
        && this->snowflakeWarehouse_ == nullptr && this->syncAlias_ == nullptr && this->useSsl_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline TestAgenticDataSourceConnectionRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // authAccount Field Functions 
    bool hasAuthAccount() const { return this->authAccount_ != nullptr;};
    void deleteAuthAccount() { this->authAccount_ = nullptr;};
    inline string getAuthAccount() const { DARABONBA_PTR_GET_DEFAULT(authAccount_, "") };
    inline TestAgenticDataSourceConnectionRequest& setAuthAccount(string authAccount) { DARABONBA_PTR_SET_VALUE(authAccount_, authAccount) };


    // authPassword Field Functions 
    bool hasAuthPassword() const { return this->authPassword_ != nullptr;};
    void deleteAuthPassword() { this->authPassword_ = nullptr;};
    inline string getAuthPassword() const { DARABONBA_PTR_GET_DEFAULT(authPassword_, "") };
    inline TestAgenticDataSourceConnectionRequest& setAuthPassword(string authPassword) { DARABONBA_PTR_SET_VALUE(authPassword_, authPassword) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline int32_t getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
    inline TestAgenticDataSourceConnectionRequest& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline TestAgenticDataSourceConnectionRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataSourceUuid Field Functions 
    bool hasDataSourceUuid() const { return this->dataSourceUuid_ != nullptr;};
    void deleteDataSourceUuid() { this->dataSourceUuid_ = nullptr;};
    inline string getDataSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUuid_, "") };
    inline TestAgenticDataSourceConnectionRequest& setDataSourceUuid(string dataSourceUuid) { DARABONBA_PTR_SET_VALUE(dataSourceUuid_, dataSourceUuid) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline TestAgenticDataSourceConnectionRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline TestAgenticDataSourceConnectionRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline TestAgenticDataSourceConnectionRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceResourceId Field Functions 
    bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
    void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
    inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
    inline TestAgenticDataSourceConnectionRequest& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline TestAgenticDataSourceConnectionRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // kmsSecret Field Functions 
    bool hasKmsSecret() const { return this->kmsSecret_ != nullptr;};
    void deleteKmsSecret() { this->kmsSecret_ = nullptr;};
    inline string getKmsSecret() const { DARABONBA_PTR_GET_DEFAULT(kmsSecret_, "") };
    inline TestAgenticDataSourceConnectionRequest& setKmsSecret(string kmsSecret) { DARABONBA_PTR_SET_VALUE(kmsSecret_, kmsSecret) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline TestAgenticDataSourceConnectionRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline TestAgenticDataSourceConnectionRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline TestAgenticDataSourceConnectionRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // snowflakeRole Field Functions 
    bool hasSnowflakeRole() const { return this->snowflakeRole_ != nullptr;};
    void deleteSnowflakeRole() { this->snowflakeRole_ = nullptr;};
    inline string getSnowflakeRole() const { DARABONBA_PTR_GET_DEFAULT(snowflakeRole_, "") };
    inline TestAgenticDataSourceConnectionRequest& setSnowflakeRole(string snowflakeRole) { DARABONBA_PTR_SET_VALUE(snowflakeRole_, snowflakeRole) };


    // snowflakeWarehouse Field Functions 
    bool hasSnowflakeWarehouse() const { return this->snowflakeWarehouse_ != nullptr;};
    void deleteSnowflakeWarehouse() { this->snowflakeWarehouse_ = nullptr;};
    inline string getSnowflakeWarehouse() const { DARABONBA_PTR_GET_DEFAULT(snowflakeWarehouse_, "") };
    inline TestAgenticDataSourceConnectionRequest& setSnowflakeWarehouse(string snowflakeWarehouse) { DARABONBA_PTR_SET_VALUE(snowflakeWarehouse_, snowflakeWarehouse) };


    // syncAlias Field Functions 
    bool hasSyncAlias() const { return this->syncAlias_ != nullptr;};
    void deleteSyncAlias() { this->syncAlias_ = nullptr;};
    inline int32_t getSyncAlias() const { DARABONBA_PTR_GET_DEFAULT(syncAlias_, 0) };
    inline TestAgenticDataSourceConnectionRequest& setSyncAlias(int32_t syncAlias) { DARABONBA_PTR_SET_VALUE(syncAlias_, syncAlias) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline TestAgenticDataSourceConnectionRequest& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline TestAgenticDataSourceConnectionRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline TestAgenticDataSourceConnectionRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline TestAgenticDataSourceConnectionRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The alias. You can leave this parameter empty when testing a connection. This parameter does not create or modify a data source.
    shared_ptr<string> alias_ {};
    // The logon username. You can leave this parameter empty for authentication methods that do not require a username.
    shared_ptr<string> authAccount_ {};
    // The logon password. When testing an existing data source, you can leave this parameter empty to reuse the saved password. If a new value is passed, the new value takes precedence.
    shared_ptr<string> authPassword_ {};
    // The authentication type. This parameter is optional. Valid values: -1 (no authentication required), 0 (username and password), 1 (password only), and 2 (password-free).
    shared_ptr<int32_t> authType_ {};
    // The catalog name. You can leave this parameter empty when testing a connection. This parameter does not create a metadata catalog.
    shared_ptr<string> catalogName_ {};
    // The UUID of the data source. This parameter is required when testing an existing data source. If no new password is passed, the saved password is reused. Leave this parameter empty when testing a new data source.
    shared_ptr<string> dataSourceUuid_ {};
    // The type of the data source. Use uppercase letters. Do not pass numbers. Valid values: MYSQL, POSTGRESQL, ORACLE, SQLSERVER, MARIADB, POLARDB, POLARDB_POSTGRESQL, POLARDB_ORACLE, OCEANBASEX, DRDS, ADB_MYSQL, ADB_POSTGRESQL, CLICKHOUSE, SELECTDB, STARROCKS, HOLOGRES, MAXCOMPUTE, ES_REST, and TRINO.
    // 
    // This parameter is required.
    shared_ptr<string> dbType_ {};
    // The environment type. This parameter is optional when testing a connection. Valid values: product, pre, dev, test, sit, uat, pet, and stag.
    shared_ptr<string> envType_ {};
    // The domain name or IP address of the database. Do not include the protocol, path, or port. This parameter is optional. You can leave this parameter empty when you select an existing cloud instance and the endpoint is automatically populated.
    shared_ptr<string> host_ {};
    // The ID of the cloud resource instance. This parameter is required when you select an existing cloud instance. You can leave this parameter empty when you enter a connection endpoint.
    shared_ptr<string> instanceResourceId_ {};
    // The source of the data source. Valid values:
    // - RDS: ApsaraDB instance.
    // - PUBLIC_OWN: self-managed database connected over the Internet.
    // - ECS_OWN: self-managed database hosted on an ECS instance.
    // - GATEWAY: database connected through Database Gateway.
    // - VPC_IDC: database connected over a VPC or data center.
    // 
    // This parameter is required.
    shared_ptr<string> instanceSource_ {};
    // The name of the KMS secret. This parameter is required when you use KMS to manage database credentials. Leave this parameter empty in other scenarios.
    shared_ptr<string> kmsSecret_ {};
    // The service port of the database. This parameter is optional. You can leave this parameter empty when you select an existing cloud instance and the port is automatically populated.
    shared_ptr<int32_t> port_ {};
    // The complete ARN of the RAM role. This parameter is required when you use an Alibaba Cloud RAM role to access the data source. Leave this parameter empty in other scenarios.
    shared_ptr<string> roleArn_ {};
    // The schema name. This parameter is optional. For ADB_POSTGRESQL, DRDS, POSTGRESQL, and POLARDB_POSTGRESQL, enter the database name. For ORACLE, enter the SID or service name, and prefix the service name with a forward slash (/). For POLARDB_ORACLE, enter the SID. For MAXCOMPUTE, enter the project name. Leave this parameter empty for other types.
    shared_ptr<string> schema_ {};
    // The name of the Snowflake role. This parameter takes effect only when DbType is set to SNOWFLAKE.
    shared_ptr<string> snowflakeRole_ {};
    // The name of the Snowflake compute warehouse. This parameter takes effect only when DbType is set to SNOWFLAKE.
    shared_ptr<string> snowflakeWarehouse_ {};
    // Specifies whether to synchronize the alias. This parameter is optional when testing a connection. This parameter does not modify the data source name.
    shared_ptr<int32_t> syncAlias_ {};
    // Specifies whether to enable SSL. Valid values:
    // - 1: Enable.
    // - 0: Disable.
    // - -1: Use the default setting.
    // SSL is supported only for ADB_MYSQL, CLICKHOUSE, MARIADB, MYSQL, OCEANBASEX, POLARDB, SELECTDB, and STARROCKS. Leave this parameter empty for other types.
    shared_ptr<int32_t> useSsl_ {};
    // The ID of the vSwitch. This parameter is required when you access MaxCompute over a VPC. Leave this parameter empty in other scenarios.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC. This parameter is required when you access MaxCompute over a VPC. Leave this parameter empty in other scenarios.
    shared_ptr<string> vpcId_ {};
    // The zone ID. This parameter is required when you access MaxCompute over a VPC. Leave this parameter empty in other scenarios.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
