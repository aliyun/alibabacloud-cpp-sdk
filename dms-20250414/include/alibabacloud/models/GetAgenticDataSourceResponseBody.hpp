// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTICDATASOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTICDATASOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetAgenticDataSourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgenticDataSourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgenticDataSourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAgenticDataSourceResponseBody() = default ;
    GetAgenticDataSourceResponseBody(const GetAgenticDataSourceResponseBody &) = default ;
    GetAgenticDataSourceResponseBody(GetAgenticDataSourceResponseBody &&) = default ;
    GetAgenticDataSourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgenticDataSourceResponseBody() = default ;
    GetAgenticDataSourceResponseBody& operator=(const GetAgenticDataSourceResponseBody &) = default ;
    GetAgenticDataSourceResponseBody& operator=(GetAgenticDataSourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Alias, alias_);
        DARABONBA_PTR_TO_JSON(AuthAccount, authAccount_);
        DARABONBA_PTR_TO_JSON(AuthPassword, authPassword_);
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
        DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
        DARABONBA_PTR_TO_JSON(CreateMode, createMode_);
        DARABONBA_PTR_TO_JSON(DataSourceUuid, dataSourceUuid_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
        DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
        DARABONBA_PTR_TO_JSON(KmsSecret, kmsSecret_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(Port, port_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(Schema, schema_);
        DARABONBA_PTR_TO_JSON(SnowflakeRole, snowflakeRole_);
        DARABONBA_PTR_TO_JSON(SnowflakeWarehouse, snowflakeWarehouse_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(SyncAlias, syncAlias_);
        DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Alias, alias_);
        DARABONBA_PTR_FROM_JSON(AuthAccount, authAccount_);
        DARABONBA_PTR_FROM_JSON(AuthPassword, authPassword_);
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
        DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
        DARABONBA_PTR_FROM_JSON(CreateMode, createMode_);
        DARABONBA_PTR_FROM_JSON(DataSourceUuid, dataSourceUuid_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
        DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
        DARABONBA_PTR_FROM_JSON(KmsSecret, kmsSecret_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(Schema, schema_);
        DARABONBA_PTR_FROM_JSON(SnowflakeRole, snowflakeRole_);
        DARABONBA_PTR_FROM_JSON(SnowflakeWarehouse, snowflakeWarehouse_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(SyncAlias, syncAlias_);
        DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alias_ == nullptr
        && this->authAccount_ == nullptr && this->authPassword_ == nullptr && this->authType_ == nullptr && this->catalogName_ == nullptr && this->catalogUuid_ == nullptr
        && this->createMode_ == nullptr && this->dataSourceUuid_ == nullptr && this->dbType_ == nullptr && this->envType_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->host_ == nullptr && this->instanceResourceId_ == nullptr && this->instanceSource_ == nullptr && this->kmsSecret_ == nullptr
        && this->policyId_ == nullptr && this->port_ == nullptr && this->regionId_ == nullptr && this->resourceAccountId_ == nullptr && this->roleArn_ == nullptr
        && this->schema_ == nullptr && this->snowflakeRole_ == nullptr && this->snowflakeWarehouse_ == nullptr && this->state_ == nullptr && this->syncAlias_ == nullptr
        && this->useSsl_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // alias Field Functions 
      bool hasAlias() const { return this->alias_ != nullptr;};
      void deleteAlias() { this->alias_ = nullptr;};
      inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
      inline Data& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


      // authAccount Field Functions 
      bool hasAuthAccount() const { return this->authAccount_ != nullptr;};
      void deleteAuthAccount() { this->authAccount_ = nullptr;};
      inline string getAuthAccount() const { DARABONBA_PTR_GET_DEFAULT(authAccount_, "") };
      inline Data& setAuthAccount(string authAccount) { DARABONBA_PTR_SET_VALUE(authAccount_, authAccount) };


      // authPassword Field Functions 
      bool hasAuthPassword() const { return this->authPassword_ != nullptr;};
      void deleteAuthPassword() { this->authPassword_ = nullptr;};
      inline string getAuthPassword() const { DARABONBA_PTR_GET_DEFAULT(authPassword_, "") };
      inline Data& setAuthPassword(string authPassword) { DARABONBA_PTR_SET_VALUE(authPassword_, authPassword) };


      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline int32_t getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, 0) };
      inline Data& setAuthType(int32_t authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // catalogName Field Functions 
      bool hasCatalogName() const { return this->catalogName_ != nullptr;};
      void deleteCatalogName() { this->catalogName_ = nullptr;};
      inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
      inline Data& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


      // catalogUuid Field Functions 
      bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
      void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
      inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
      inline Data& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


      // createMode Field Functions 
      bool hasCreateMode() const { return this->createMode_ != nullptr;};
      void deleteCreateMode() { this->createMode_ = nullptr;};
      inline string getCreateMode() const { DARABONBA_PTR_GET_DEFAULT(createMode_, "") };
      inline Data& setCreateMode(string createMode) { DARABONBA_PTR_SET_VALUE(createMode_, createMode) };


      // dataSourceUuid Field Functions 
      bool hasDataSourceUuid() const { return this->dataSourceUuid_ != nullptr;};
      void deleteDataSourceUuid() { this->dataSourceUuid_ = nullptr;};
      inline string getDataSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUuid_, "") };
      inline Data& setDataSourceUuid(string dataSourceUuid) { DARABONBA_PTR_SET_VALUE(dataSourceUuid_, dataSourceUuid) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline Data& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline Data& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // host Field Functions 
      bool hasHost() const { return this->host_ != nullptr;};
      void deleteHost() { this->host_ = nullptr;};
      inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
      inline Data& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // instanceResourceId Field Functions 
      bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
      void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
      inline string getInstanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
      inline Data& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


      // instanceSource Field Functions 
      bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
      void deleteInstanceSource() { this->instanceSource_ = nullptr;};
      inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
      inline Data& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


      // kmsSecret Field Functions 
      bool hasKmsSecret() const { return this->kmsSecret_ != nullptr;};
      void deleteKmsSecret() { this->kmsSecret_ = nullptr;};
      inline string getKmsSecret() const { DARABONBA_PTR_GET_DEFAULT(kmsSecret_, "") };
      inline Data& setKmsSecret(string kmsSecret) { DARABONBA_PTR_SET_VALUE(kmsSecret_, kmsSecret) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Data& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
      inline Data& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceAccountId Field Functions 
      bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
      void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
      inline string getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, "") };
      inline Data& setResourceAccountId(string resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline Data& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // schema Field Functions 
      bool hasSchema() const { return this->schema_ != nullptr;};
      void deleteSchema() { this->schema_ = nullptr;};
      inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
      inline Data& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


      // snowflakeRole Field Functions 
      bool hasSnowflakeRole() const { return this->snowflakeRole_ != nullptr;};
      void deleteSnowflakeRole() { this->snowflakeRole_ = nullptr;};
      inline string getSnowflakeRole() const { DARABONBA_PTR_GET_DEFAULT(snowflakeRole_, "") };
      inline Data& setSnowflakeRole(string snowflakeRole) { DARABONBA_PTR_SET_VALUE(snowflakeRole_, snowflakeRole) };


      // snowflakeWarehouse Field Functions 
      bool hasSnowflakeWarehouse() const { return this->snowflakeWarehouse_ != nullptr;};
      void deleteSnowflakeWarehouse() { this->snowflakeWarehouse_ = nullptr;};
      inline string getSnowflakeWarehouse() const { DARABONBA_PTR_GET_DEFAULT(snowflakeWarehouse_, "") };
      inline Data& setSnowflakeWarehouse(string snowflakeWarehouse) { DARABONBA_PTR_SET_VALUE(snowflakeWarehouse_, snowflakeWarehouse) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
      inline Data& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // syncAlias Field Functions 
      bool hasSyncAlias() const { return this->syncAlias_ != nullptr;};
      void deleteSyncAlias() { this->syncAlias_ = nullptr;};
      inline int32_t getSyncAlias() const { DARABONBA_PTR_GET_DEFAULT(syncAlias_, 0) };
      inline Data& setSyncAlias(int32_t syncAlias) { DARABONBA_PTR_SET_VALUE(syncAlias_, syncAlias) };


      // useSsl Field Functions 
      bool hasUseSsl() const { return this->useSsl_ != nullptr;};
      void deleteUseSsl() { this->useSsl_ = nullptr;};
      inline int32_t getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
      inline Data& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Data& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The display name of the data source.
      shared_ptr<string> alias_ {};
      // The logon username for the data source. This parameter is empty if username authentication is not used.
      shared_ptr<string> authAccount_ {};
      // The masked value of the password or token. The actual value is not returned.
      shared_ptr<string> authPassword_ {};
      // The authentication method. Valid values:
      // - -1: no authentication required
      // - 0: username and password
      // - 1: password only
      // - 2: password-free
      shared_ptr<int32_t> authType_ {};
      // The name of the metadata catalog associated with the data source.
      shared_ptr<string> catalogName_ {};
      // The UUID of the metadata catalog associated with the data source.
      shared_ptr<string> catalogUuid_ {};
      // The method used to register the data source. Valid values:
      // - INSTANCE_ID: select an existing cloud instance
      // - HOST_PORT: register by endpoint and port
      shared_ptr<string> createMode_ {};
      // The unique identifier of the data source.
      shared_ptr<string> dataSourceUuid_ {};
      // The type of the data source. Valid values: MYSQL, POSTGRESQL, ORACLE, SQLSERVER, MARIADB, POLARDB, POLARDB_POSTGRESQL, POLARDB_ORACLE, OCEANBASEX, DRDS, ADB_MYSQL, ADB_POSTGRESQL, CLICKHOUSE, SELECTDB, STARROCKS, HOLOGRES, MAXCOMPUTE, ES_REST, and TRINO.
      shared_ptr<string> dbType_ {};
      // The environment type. Valid values: product, pre, dev, test, sit, uat, pet, and stag.
      shared_ptr<string> envType_ {};
      // The time when the data source was created. The format is yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> gmtCreate_ {};
      // The time when the data source was last modified. The format is yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> gmtModified_ {};
      // The endpoint of the data source. A masked value may be returned in sensitive scenarios.
      shared_ptr<string> host_ {};
      // The ID of the cloud resource instance. This parameter may be empty for data sources registered by endpoint.
      shared_ptr<string> instanceResourceId_ {};
      // The source of the data source. Valid values:
      // - RDS: ApsaraDB instance
      // - PUBLIC_OWN: self-managed database on the Internet
      // - ECS_OWN: self-managed database on an ECS instance
      // - GATEWAY: connected through Database Gateway
      // - VPC_IDC: connected through a VPC or IDC
      shared_ptr<string> instanceSource_ {};
      // The name of the KMS-managed credential. This parameter is empty if KMS is not used. This field contains sensitive information.
      shared_ptr<string> kmsSecret_ {};
      // The ID of the data access security policy currently in use. This parameter is empty if no policy is configured.
      shared_ptr<string> policyId_ {};
      // The connection port of the data source.
      shared_ptr<int32_t> port_ {};
      // The region where the data source is located.
      shared_ptr<string> regionId_ {};
      // The ID of the Alibaba Cloud account to which the resource belongs.
      shared_ptr<string> resourceAccountId_ {};
      // The ARN of the RAM role used to access the data source. This parameter is empty if role-based authorization is not used.
      shared_ptr<string> roleArn_ {};
      // The name of the connection target. For ADB_POSTGRESQL, DRDS, POSTGRESQL, and POLARDB_POSTGRESQL, this indicates the database name. For ORACLE, this indicates the SID or service name. For POLARDB_ORACLE, this indicates the SID. For MAXCOMPUTE, this indicates the project. For other types, this parameter is usually empty.
      shared_ptr<string> schema_ {};
      // The name of the Snowflake role. This parameter takes effect only when DbType is set to SNOWFLAKE.
      shared_ptr<string> snowflakeRole_ {};
      // The name of the Snowflake compute warehouse. This parameter takes effect only when DbType is set to SNOWFLAKE.
      shared_ptr<string> snowflakeWarehouse_ {};
      // The status of the data source. Valid values:
      // - 0: normal
      // - -1: deleted
      // - -2: disabled
      shared_ptr<int32_t> state_ {};
      // Specifies whether to use the cloud instance name as the data source name. Valid values:
      // - 1: yes
      // - 0: no
      shared_ptr<int32_t> syncAlias_ {};
      // The SSL settings. Valid values:
      // - 1: enabled
      // - 0: disabled
      // - -1: use default settings
      shared_ptr<int32_t> useSsl_ {};
      // The ID of the destination vSwitch used when accessing MaxCompute. This parameter is empty in other scenarios.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the destination VPC used when accessing MaxCompute. This parameter is empty in other scenarios.
      shared_ptr<string> vpcId_ {};
      // The ID of the destination zone used when accessing MaxCompute. This parameter is empty in other scenarios.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAgenticDataSourceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAgenticDataSourceResponseBody::Data) };
    inline GetAgenticDataSourceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAgenticDataSourceResponseBody::Data) };
    inline GetAgenticDataSourceResponseBody& setData(const GetAgenticDataSourceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAgenticDataSourceResponseBody& setData(GetAgenticDataSourceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAgenticDataSourceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAgenticDataSourceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgenticDataSourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAgenticDataSourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data source details. This parameter is empty if the data source does not exist.
    shared_ptr<GetAgenticDataSourceResponseBody::Data> data_ {};
    // The error code returned when the call fails. This parameter is empty if the call is successful.
    shared_ptr<string> errorCode_ {};
    // The error message returned when the call fails. This parameter is empty if the call is successful.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
