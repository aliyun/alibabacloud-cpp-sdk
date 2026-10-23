// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTICDATASOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTICDATASOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateAgenticDataSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgenticDataSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AuthAccount, authAccount_);
      DARABONBA_PTR_TO_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_TO_JSON(AuthType, authType_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
      DARABONBA_PTR_TO_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_TO_JSON(KmsSecret, kmsSecret_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(SnowflakeRole, snowflakeRole_);
      DARABONBA_PTR_TO_JSON(SnowflakeWarehouse, snowflakeWarehouse_);
      DARABONBA_PTR_TO_JSON(SyncAlias, syncAlias_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgenticDataSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AuthAccount, authAccount_);
      DARABONBA_PTR_FROM_JSON(AuthPassword, authPassword_);
      DARABONBA_PTR_FROM_JSON(AuthType, authType_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
      DARABONBA_PTR_FROM_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_FROM_JSON(KmsSecret, kmsSecret_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(SnowflakeRole, snowflakeRole_);
      DARABONBA_PTR_FROM_JSON(SnowflakeWarehouse, snowflakeWarehouse_);
      DARABONBA_PTR_FROM_JSON(SyncAlias, syncAlias_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
    };
    UpdateAgenticDataSourceRequest() = default ;
    UpdateAgenticDataSourceRequest(const UpdateAgenticDataSourceRequest &) = default ;
    UpdateAgenticDataSourceRequest(UpdateAgenticDataSourceRequest &&) = default ;
    UpdateAgenticDataSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgenticDataSourceRequest() = default ;
    UpdateAgenticDataSourceRequest& operator=(const UpdateAgenticDataSourceRequest &) = default ;
    UpdateAgenticDataSourceRequest& operator=(UpdateAgenticDataSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->authAccount_ == nullptr && this->authPassword_ == nullptr && this->authType_ == nullptr && this->catalogName_ == nullptr && this->createMode_ == nullptr
        && this->dataSourceUuid_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->host_ == nullptr && this->instanceResourceId_ == nullptr
        && this->kmsSecret_ == nullptr && this->policyId_ == nullptr && this->port_ == nullptr && this->roleArn_ == nullptr && this->schema_ == nullptr
        && this->snowflakeRole_ == nullptr && this->snowflakeWarehouse_ == nullptr && this->syncAlias_ == nullptr && this->useSsl_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline UpdateAgenticDataSourceRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // authAccount Field Functions 
    bool hasAuthAccount() const { return this->authAccount_ != nullptr;};
    void deleteAuthAccount() { this->authAccount_ = nullptr;};
    inline string getAuthAccount() const { DARABONBA_PTR_GET_DEFAULT(authAccount_, "") };
    inline UpdateAgenticDataSourceRequest& setAuthAccount(string authAccount) { DARABONBA_PTR_SET_VALUE(authAccount_, authAccount) };


    // authPassword Field Functions 
    bool hasAuthPassword() const { return this->authPassword_ != nullptr;};
    void deleteAuthPassword() { this->authPassword_ = nullptr;};
    inline string getAuthPassword() const { DARABONBA_PTR_GET_DEFAULT(authPassword_, "") };
    inline UpdateAgenticDataSourceRequest& setAuthPassword(string authPassword) { DARABONBA_PTR_SET_VALUE(authPassword_, authPassword) };


    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline int32_t getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
    inline UpdateAgenticDataSourceRequest& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline UpdateAgenticDataSourceRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // createMode Field Functions 
    bool hasCreateMode() const { return this->createMode_ != nullptr;};
    void deleteCreateMode() { this->createMode_ = nullptr;};
    inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
    inline UpdateAgenticDataSourceRequest& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


    // dataSourceUuid Field Functions 
    bool hasDataSourceUuid() const { return this->dataSourceUuid_ != nullptr;};
    void deleteDataSourceUuid() { this->dataSourceUuid_ = nullptr;};
    inline string getDataSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUuid_, "") };
    inline UpdateAgenticDataSourceRequest& setDataSourceUuid(string dataSourceUuid) { DARABONBA_PTR_SET_VALUE(dataSourceUuid_, dataSourceUuid) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline UpdateAgenticDataSourceRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateAgenticDataSourceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateAgenticDataSourceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceResourceId Field Functions 
    bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
    void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
    inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
    inline UpdateAgenticDataSourceRequest& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


    // kmsSecret Field Functions 
    bool hasKmsSecret() const { return this->kmsSecret_ != nullptr;};
    void deleteKmsSecret() { this->kmsSecret_ = nullptr;};
    inline string getKmsSecret() const { DARABONBA_PTR_GET_DEFAULT(kmsSecret_, "") };
    inline UpdateAgenticDataSourceRequest& setKmsSecret(string kmsSecret) { DARABONBA_PTR_SET_VALUE(kmsSecret_, kmsSecret) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline UpdateAgenticDataSourceRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateAgenticDataSourceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline UpdateAgenticDataSourceRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline UpdateAgenticDataSourceRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // snowflakeRole Field Functions 
    bool hasSnowflakeRole() const { return this->snowflakeRole_ != nullptr;};
    void deleteSnowflakeRole() { this->snowflakeRole_ = nullptr;};
    inline string getSnowflakeRole() const { DARABONBA_PTR_GET_DEFAULT(snowflakeRole_, "") };
    inline UpdateAgenticDataSourceRequest& setSnowflakeRole(string snowflakeRole) { DARABONBA_PTR_SET_VALUE(snowflakeRole_, snowflakeRole) };


    // snowflakeWarehouse Field Functions 
    bool hasSnowflakeWarehouse() const { return this->snowflakeWarehouse_ != nullptr;};
    void deleteSnowflakeWarehouse() { this->snowflakeWarehouse_ = nullptr;};
    inline string getSnowflakeWarehouse() const { DARABONBA_PTR_GET_DEFAULT(snowflakeWarehouse_, "") };
    inline UpdateAgenticDataSourceRequest& setSnowflakeWarehouse(string snowflakeWarehouse) { DARABONBA_PTR_SET_VALUE(snowflakeWarehouse_, snowflakeWarehouse) };


    // syncAlias Field Functions 
    bool hasSyncAlias() const { return this->syncAlias_ != nullptr;};
    void deleteSyncAlias() { this->syncAlias_ = nullptr;};
    inline int32_t getSyncAlias() const { DARABONBA_PTR_GET_DEFAULT(syncAlias_, 0) };
    inline UpdateAgenticDataSourceRequest& setSyncAlias(int32_t syncAlias) { DARABONBA_PTR_SET_VALUE(syncAlias_, syncAlias) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline UpdateAgenticDataSourceRequest& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


  protected:
    // The new display name of the data source. If you do not specify this parameter, the alias is not updated.
    shared_ptr<string> alias_ {};
    // The new logon username. If you do not specify this parameter, the authentication account is not updated.
    shared_ptr<string> authAccount_ {};
    // The new logon password. If you do not specify this parameter, the authentication password is not updated. This is sensitive information. Do not record or disclose it.
    shared_ptr<string> authPassword_ {};
    // Optional. Valid values:
    // - -1: No authentication required.
    // - 0: Username and password.
    // - 1: Password only.
    // - 2: Password-free.
    // If you do not specify this parameter, the authentication type is not updated.
    shared_ptr<int32_t> authType_ {};
    // The new name of the metadata catalog. If you do not specify this parameter, the catalog name is not updated. The name can be up to 128 characters in length. It must start with a Chinese character, a letter, or an underscore, and can contain digits and hyphens. It cannot contain only digits.
    shared_ptr<string> catalogName_ {};
    // The registration method. Valid values:
    // - INSTANCE_ID: Select an existing cloud instance.
    // - HOST_PORT: Register by endpoint and port.
    // If you do not specify this parameter, the creation mode is not updated.
    shared_ptr<string> createMode_ {};
    // The UUID of the data source to be updated.
    // 
    // This parameter is required.
    shared_ptr<string> dataSourceUuid_ {};
    // Modifying the data source type is not supported. Do not specify this parameter.
    shared_ptr<string> dbType_ {};
    // The environment type. Valid values: product, pre, dev, test, sit, uat, pet, and stag. If you do not specify this parameter, the environment type is not updated.
    shared_ptr<string> envType_ {};
    // Optional. The new domain name or IP address of the database. Do not include the protocol, path, or port. If you do not specify this parameter, the host is not updated.
    shared_ptr<string> host_ {};
    // The new ID of the cloud resource instance. If you do not specify this parameter, the instance resource ID is not updated.
    shared_ptr<string> instanceResourceId_ {};
    // The new name of the KMS-managed credential. If you do not specify this parameter, the KMS secret is not updated.
    shared_ptr<string> kmsSecret_ {};
    // Optional. The new ID of the data access security policy. If you do not specify this parameter, the policy ID is not updated.
    shared_ptr<string> policyId_ {};
    // Optional. The new service port of the database. If you do not specify this parameter, the service port is not updated.
    shared_ptr<int32_t> port_ {};
    // The new ARN of the Alibaba Cloud RAM role. If you do not specify this parameter, the role ARN is not updated.
    shared_ptr<string> roleArn_ {};
    // Optional. For ADB_POSTGRESQL, DRDS, POSTGRESQL, and POLARDB_POSTGRESQL, specify the database name. For ORACLE, specify the SID or service name, and prefix the service name with a forward slash (/). For POLARDB_ORACLE, specify the SID. For MAXCOMPUTE, specify the project name. For other types, leave this parameter empty. If you do not specify this parameter, the schema is not updated.
    shared_ptr<string> schema_ {};
    // The name of the Snowflake role. This parameter takes effect only when DbType is set to SNOWFLAKE.
    shared_ptr<string> snowflakeRole_ {};
    // The name of the Snowflake compute warehouse. This parameter takes effect only when DbType is set to SNOWFLAKE.
    shared_ptr<string> snowflakeWarehouse_ {};
    // Specifies whether to use the cloud instance name as the data source name. Valid values:
    // - 1: Yes.
    // - 0: No.
    // If you do not specify this parameter, the sync alias setting is not updated.
    shared_ptr<int32_t> syncAlias_ {};
    // The new SSL setting. Valid values:
    // - 1: Enable.
    // - 0: Disable.
    // - -1: Use default settings.
    // If you do not specify this parameter, the SSL setting is not updated. SSL is supported only for ADB_MYSQL, CLICKHOUSE, MARIADB, MYSQL, OCEANBASEX, POLARDB, SELECTDB, and STARROCKS.
    shared_ptr<int32_t> useSsl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
