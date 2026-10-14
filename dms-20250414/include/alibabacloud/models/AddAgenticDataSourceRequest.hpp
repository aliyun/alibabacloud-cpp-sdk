// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDAGENTICDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDAGENTICDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AddAgenticDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAgenticDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AuthAccount, authAccount_);
      DARABONBA_PTR_TO_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(KmsSecret, kmsSecret_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
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
    friend void from_json(const Darabonba::Json& j, AddAgenticDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AuthAccount, authAccount_);
      DARABONBA_PTR_FROM_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(KmsSecret, kmsSecret_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
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
    AddAgenticDataSourceRequest() = default ;
    AddAgenticDataSourceRequest(const AddAgenticDataSourceRequest &) = default ;
    AddAgenticDataSourceRequest(AddAgenticDataSourceRequest &&) = default ;
    AddAgenticDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAgenticDataSourceRequest() = default ;
    AddAgenticDataSourceRequest& operator=(const AddAgenticDataSourceRequest &) = default ;
    AddAgenticDataSourceRequest& operator=(AddAgenticDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->authAccount_ == nullptr && this->authPassword_ == nullptr && this->authType_ == nullptr && this->catalogName_ == nullptr && this->createMode_ == nullptr
        && this->dbType_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr && this->instanceResourceId_ == nullptr && this->instanceSource_ == nullptr
        && this->kmsSecret_ == nullptr && this->policyId_ == nullptr && this->port_ == nullptr && this->roleArn_ == nullptr && this->schema_ == nullptr
        && this->snowflakeRole_ == nullptr && this->snowflakeWarehouse_ == nullptr && this->syncAlias_ == nullptr && this->useSsl_ == nullptr && this->vSwitchId_ == nullptr
        && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline AddAgenticDataSourceRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // authAccount Field Functions 
    bool hasAuthAccount() const { return this->authAccount_ != nullptr;};
    void deleteAuthAccount() { this->authAccount_ = nullptr;};
    inline string getAuthAccount() const { DARABONBA_PTR_GET_DEFAULT(authAccount_, "") };
    inline AddAgenticDataSourceRequest& setAuthAccount(string authAccount) { DARABONBA_PTR_SET_VALUE(authAccount_, authAccount) };


    // authPassword Field Functions 
    bool hasAuthPassword() const { return this->authPassword_ != nullptr;};
    void deleteAuthPassword() { this->authPassword_ = nullptr;};
    inline string getAuthPassword() const { DARABONBA_PTR_GET_DEFAULT(authPassword_, "") };
    inline AddAgenticDataSourceRequest& setAuthPassword(string authPassword) { DARABONBA_PTR_SET_VALUE(authPassword_, authPassword) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline int32_t getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
    inline AddAgenticDataSourceRequest& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline AddAgenticDataSourceRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline AddAgenticDataSourceRequest& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline AddAgenticDataSourceRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline AddAgenticDataSourceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline AddAgenticDataSourceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceResourceId Field Functions 
    bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
    void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
    inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
    inline AddAgenticDataSourceRequest& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline AddAgenticDataSourceRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // kmsSecret Field Functions 
    bool hasKmsSecret() const { return this->kmsSecret_ != nullptr;};
    void deleteKmsSecret() { this->kmsSecret_ = nullptr;};
    inline string getKmsSecret() const { DARABONBA_PTR_GET_DEFAULT(kmsSecret_, "") };
    inline AddAgenticDataSourceRequest& setKmsSecret(string kmsSecret) { DARABONBA_PTR_SET_VALUE(kmsSecret_, kmsSecret) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline AddAgenticDataSourceRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AddAgenticDataSourceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline AddAgenticDataSourceRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline AddAgenticDataSourceRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // snowflakeRole Field Functions 
    bool hasSnowflakeRole() const { return this->snowflakeRole_ != nullptr;};
    void deleteSnowflakeRole() { this->snowflakeRole_ = nullptr;};
    inline string getSnowflakeRole() const { DARABONBA_PTR_GET_DEFAULT(snowflakeRole_, "") };
    inline AddAgenticDataSourceRequest& setSnowflakeRole(string snowflakeRole) { DARABONBA_PTR_SET_VALUE(snowflakeRole_, snowflakeRole) };


    // snowflakeWarehouse Field Functions 
    bool hasSnowflakeWarehouse() const { return this->snowflakeWarehouse_ != nullptr;};
    void deleteSnowflakeWarehouse() { this->snowflakeWarehouse_ = nullptr;};
    inline string getSnowflakeWarehouse() const { DARABONBA_PTR_GET_DEFAULT(snowflakeWarehouse_, "") };
    inline AddAgenticDataSourceRequest& setSnowflakeWarehouse(string snowflakeWarehouse) { DARABONBA_PTR_SET_VALUE(snowflakeWarehouse_, snowflakeWarehouse) };


    // syncAlias Field Functions 
    bool hasSyncAlias() const { return this->syncAlias_ != nullptr;};
    void deleteSyncAlias() { this->syncAlias_ = nullptr;};
    inline int32_t getSyncAlias() const { DARABONBA_PTR_GET_DEFAULT(syncAlias_, 0) };
    inline AddAgenticDataSourceRequest& setSyncAlias(int32_t syncAlias) { DARABONBA_PTR_SET_VALUE(syncAlias_, syncAlias) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline AddAgenticDataSourceRequest& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline AddAgenticDataSourceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddAgenticDataSourceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline AddAgenticDataSourceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The display name of the data source. If you do not specify this parameter, the server generates a name.
    shared_ptr<string> alias_ {};
    // The logon username. You can leave this parameter empty for authentication methods that do not require a username.
    shared_ptr<string> authAccount_ {};
    // The logon password. This is sensitive information. Do not record or disclose it.
    shared_ptr<string> authPassword_ {};
    // Optional. The authentication type. Valid values:
    // - -1: No authentication required.
    // - 0: Username and password.
    // - 1: Password only.
    // - 2: Password-free.
    shared_ptr<int32_t> authType_ {};
    // The name of the metadata catalog. If you do not specify this parameter, the name is automatically generated. The name can be up to 128 characters in length. It must start with a Chinese character, a letter, or an underscore, and can contain digits and hyphens. It cannot contain only digits.
    shared_ptr<string> catalogName_ {};
    // The entry method. Valid values:
    // - INSTANCE_ID: Select an existing cloud instance.
    // - HOST_PORT: Enter the endpoint and port.
    // If you do not specify this parameter, HOST_PORT is used.
    shared_ptr<string> createMode_ {};
    // The type of the data source. Use uppercase letters. Do not pass numbers. Valid values: MYSQL, POSTGRESQL, ORACLE, SQLSERVER, MARIADB, POLARDB, POLARDB_POSTGRESQL, POLARDB_ORACLE, OCEANBASEX, DRDS, ADB_MYSQL, ADB_POSTGRESQL, CLICKHOUSE, SELECTDB, STARROCKS, HOLOGRES, MAXCOMPUTE, ES_REST, and TRINO.
    // 
    // This parameter is required.
    shared_ptr<string> dbType_ {};
    // The environment type. Valid values: product, pre, dev, test, sit, uat, pet, and stag.
    shared_ptr<string> envType_ {};
    // Optional. The domain name or IP address of the database. Do not include the protocol, path, or port. You can leave this parameter empty if you select an existing cloud instance and the address is automatically populated.
    shared_ptr<string> host_ {};
    // The ID of the cloud resource instance. This parameter is required when you select an existing cloud instance. You can leave this parameter empty when you enter an endpoint.
    shared_ptr<string> instanceResourceId_ {};
    // The source of the data source. Valid values:
    // - RDS: An ApsaraDB instance.
    // - PUBLIC_OWN: A self-managed database on the Internet.
    // - ECS_OWN: A self-managed database on an ECS instance.
    // - GATEWAY: A database accessed through Database Gateway.
    // - VPC_IDC: A database accessed through a VPC or data center.
    // 
    // This parameter is required.
    shared_ptr<string> instanceSource_ {};
    // The name of the credential. Specify this parameter when you use Key Management Service (KMS) to manage database credentials. Leave this parameter empty in other scenarios.
    shared_ptr<string> kmsSecret_ {};
    // Optional. The ID of the data access security policy. This policy is used to control the access and protection rules for the data source.
    shared_ptr<string> policyId_ {};
    // Optional. The service port of the database. You can leave this parameter empty if you select an existing cloud instance and the port is automatically populated.
    shared_ptr<int32_t> port_ {};
    // The complete ARN of the Resource Access Management (RAM) role. Specify this parameter when you use a RAM role to access the data source. Leave this parameter empty in other scenarios.
    shared_ptr<string> roleArn_ {};
    // Optional. For ADB_POSTGRESQL, DRDS, POSTGRESQL, and POLARDB_POSTGRESQL, enter the database name. For ORACLE, enter the SID or service name, and prefix the service name with a forward slash (/). For POLARDB_ORACLE, enter the SID. For MAXCOMPUTE, enter the project name. Leave this parameter empty for other types.
    shared_ptr<string> schema_ {};
    // The name of the Snowflake role. This parameter takes effect only when DbType is set to SNOWFLAKE.
    shared_ptr<string> snowflakeRole_ {};
    // The name of the Snowflake compute warehouse. This parameter takes effect only when DbType is set to SNOWFLAKE.
    shared_ptr<string> snowflakeWarehouse_ {};
    // Specifies whether to use the cloud instance name as the data source name. Valid values:
    // - 1: Yes.
    // - 0: No.
    // This parameter takes effect only when you select a cloud database instance.
    shared_ptr<int32_t> syncAlias_ {};
    // Specifies whether to use SSL. Valid values:
    // - 1: Enable.
    // - 0: Disable.
    // - -1: Use the default setting.
    // Only ADB_MYSQL, CLICKHOUSE, MARIADB, MYSQL, OCEANBASEX, POLARDB, SELECTDB, and STARROCKS support SSL. Leave this parameter empty for other types.
    shared_ptr<int32_t> useSsl_ {};
    // The ID of the destination vSwitch. Specify this parameter when you access MaxCompute through a VPC. Leave this parameter empty in other scenarios.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the destination VPC. Specify this parameter when you access MaxCompute through a VPC. Leave this parameter empty in other scenarios.
    shared_ptr<string> vpcId_ {};
    // The ID of the destination zone. Specify this parameter when you access MaxCompute through a VPC. Leave this parameter empty in other scenarios.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
