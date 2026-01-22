// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AddInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(DdlOnline, ddlOnline_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EcsRegion, ecsRegion_);
      DARABONBA_PTR_TO_JSON(EnableSellCommon, enableSellCommon_);
      DARABONBA_PTR_TO_JSON(EnableSellSitd, enableSellSitd_);
      DARABONBA_PTR_TO_JSON(EnableSellStable, enableSellStable_);
      DARABONBA_PTR_TO_JSON(EnableSellTrust, enableSellTrust_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ExportTimeout, exportTimeout_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(QueryTimeout, queryTimeout_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(SafeRule, safeRule_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(SkipTest, skipTest_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UseDsql, useDsql_);
      DARABONBA_PTR_TO_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(DdlOnline, ddlOnline_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcsRegion, ecsRegion_);
      DARABONBA_PTR_FROM_JSON(EnableSellCommon, enableSellCommon_);
      DARABONBA_PTR_FROM_JSON(EnableSellSitd, enableSellSitd_);
      DARABONBA_PTR_FROM_JSON(EnableSellStable, enableSellStable_);
      DARABONBA_PTR_FROM_JSON(EnableSellTrust, enableSellTrust_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ExportTimeout, exportTimeout_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(QueryTimeout, queryTimeout_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(SafeRule, safeRule_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(SkipTest, skipTest_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UseDsql, useDsql_);
      DARABONBA_PTR_FROM_JSON(UseSsl, useSsl_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    AddInstanceRequest() = default ;
    AddInstanceRequest(const AddInstanceRequest &) = default ;
    AddInstanceRequest(AddInstanceRequest &&) = default ;
    AddInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstanceRequest() = default ;
    AddInstanceRequest& operator=(const AddInstanceRequest &) = default ;
    AddInstanceRequest& operator=(AddInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataLinkName_ == nullptr
        && this->databasePassword_ == nullptr && this->databaseUser_ == nullptr && this->dbaId_ == nullptr && this->ddlOnline_ == nullptr && this->ecsInstanceId_ == nullptr
        && this->ecsRegion_ == nullptr && this->enableSellCommon_ == nullptr && this->enableSellSitd_ == nullptr && this->enableSellStable_ == nullptr && this->enableSellTrust_ == nullptr
        && this->envType_ == nullptr && this->exportTimeout_ == nullptr && this->host_ == nullptr && this->instanceAlias_ == nullptr && this->instanceSource_ == nullptr
        && this->instanceType_ == nullptr && this->networkType_ == nullptr && this->port_ == nullptr && this->queryTimeout_ == nullptr && this->roleArn_ == nullptr
        && this->safeRule_ == nullptr && this->sid_ == nullptr && this->skipTest_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr
        && this->tid_ == nullptr && this->useDsql_ == nullptr && this->useSsl_ == nullptr && this->vpcId_ == nullptr; };
    // dataLinkName Field Functions 
    bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
    void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
    inline string getDataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
    inline AddInstanceRequest& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string getDatabasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline AddInstanceRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string getDatabaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline AddInstanceRequest& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline int64_t getDbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, 0L) };
    inline AddInstanceRequest& setDbaId(int64_t dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // ddlOnline Field Functions 
    bool hasDdlOnline() const { return this->ddlOnline_ != nullptr;};
    void deleteDdlOnline() { this->ddlOnline_ = nullptr;};
    inline int32_t getDdlOnline() const { DARABONBA_PTR_GET_DEFAULT(ddlOnline_, 0) };
    inline AddInstanceRequest& setDdlOnline(int32_t ddlOnline) { DARABONBA_PTR_SET_VALUE(ddlOnline_, ddlOnline) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string getEcsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline AddInstanceRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsRegion Field Functions 
    bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
    void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
    inline string getEcsRegion() const { DARABONBA_PTR_GET_DEFAULT(ecsRegion_, "") };
    inline AddInstanceRequest& setEcsRegion(string ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };


    // enableSellCommon Field Functions 
    bool hasEnableSellCommon() const { return this->enableSellCommon_ != nullptr;};
    void deleteEnableSellCommon() { this->enableSellCommon_ = nullptr;};
    inline string getEnableSellCommon() const { DARABONBA_PTR_GET_DEFAULT(enableSellCommon_, "") };
    inline AddInstanceRequest& setEnableSellCommon(string enableSellCommon) { DARABONBA_PTR_SET_VALUE(enableSellCommon_, enableSellCommon) };


    // enableSellSitd Field Functions 
    bool hasEnableSellSitd() const { return this->enableSellSitd_ != nullptr;};
    void deleteEnableSellSitd() { this->enableSellSitd_ = nullptr;};
    inline string getEnableSellSitd() const { DARABONBA_PTR_GET_DEFAULT(enableSellSitd_, "") };
    inline AddInstanceRequest& setEnableSellSitd(string enableSellSitd) { DARABONBA_PTR_SET_VALUE(enableSellSitd_, enableSellSitd) };


    // enableSellStable Field Functions 
    bool hasEnableSellStable() const { return this->enableSellStable_ != nullptr;};
    void deleteEnableSellStable() { this->enableSellStable_ = nullptr;};
    inline string getEnableSellStable() const { DARABONBA_PTR_GET_DEFAULT(enableSellStable_, "") };
    inline AddInstanceRequest& setEnableSellStable(string enableSellStable) { DARABONBA_PTR_SET_VALUE(enableSellStable_, enableSellStable) };


    // enableSellTrust Field Functions 
    bool hasEnableSellTrust() const { return this->enableSellTrust_ != nullptr;};
    void deleteEnableSellTrust() { this->enableSellTrust_ = nullptr;};
    inline string getEnableSellTrust() const { DARABONBA_PTR_GET_DEFAULT(enableSellTrust_, "") };
    inline AddInstanceRequest& setEnableSellTrust(string enableSellTrust) { DARABONBA_PTR_SET_VALUE(enableSellTrust_, enableSellTrust) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline AddInstanceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // exportTimeout Field Functions 
    bool hasExportTimeout() const { return this->exportTimeout_ != nullptr;};
    void deleteExportTimeout() { this->exportTimeout_ = nullptr;};
    inline int32_t getExportTimeout() const { DARABONBA_PTR_GET_DEFAULT(exportTimeout_, 0) };
    inline AddInstanceRequest& setExportTimeout(int32_t exportTimeout) { DARABONBA_PTR_SET_VALUE(exportTimeout_, exportTimeout) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline AddInstanceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline AddInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string getInstanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline AddInstanceRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline AddInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline AddInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AddInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // queryTimeout Field Functions 
    bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
    void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
    inline int32_t getQueryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0) };
    inline AddInstanceRequest& setQueryTimeout(int32_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline AddInstanceRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // safeRule Field Functions 
    bool hasSafeRule() const { return this->safeRule_ != nullptr;};
    void deleteSafeRule() { this->safeRule_ = nullptr;};
    inline string getSafeRule() const { DARABONBA_PTR_GET_DEFAULT(safeRule_, "") };
    inline AddInstanceRequest& setSafeRule(string safeRule) { DARABONBA_PTR_SET_VALUE(safeRule_, safeRule) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline AddInstanceRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // skipTest Field Functions 
    bool hasSkipTest() const { return this->skipTest_ != nullptr;};
    void deleteSkipTest() { this->skipTest_ = nullptr;};
    inline bool getSkipTest() const { DARABONBA_PTR_GET_DEFAULT(skipTest_, false) };
    inline AddInstanceRequest& setSkipTest(bool skipTest) { DARABONBA_PTR_SET_VALUE(skipTest_, skipTest) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline AddInstanceRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline AddInstanceRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline AddInstanceRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // useDsql Field Functions 
    bool hasUseDsql() const { return this->useDsql_ != nullptr;};
    void deleteUseDsql() { this->useDsql_ = nullptr;};
    inline int32_t getUseDsql() const { DARABONBA_PTR_GET_DEFAULT(useDsql_, 0) };
    inline AddInstanceRequest& setUseDsql(int32_t useDsql) { DARABONBA_PTR_SET_VALUE(useDsql_, useDsql) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t getUseSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline AddInstanceRequest& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline AddInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the database link for cross-database queries.
    // 
    // > 
    // 
    // *   This property must be specified when UseDsql is set to 1.
    // 
    // *   The name can contain only lowercase letters and underscores (_).
    // 
    // *   The name must be unique within a tenant.
    shared_ptr<string> dataLinkName_ {};
    // The password of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> databasePassword_ {};
    // The name of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> databaseUser_ {};
    // The ID of the user who assumes the database administrator (DBA) role. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to obtain the value of this parameter.
    shared_ptr<int64_t> dbaId_ {};
    // Specifies whether to enable Lock-free Schema Change. Valid values:
    // 
    // *   **0**: does not enable lock-free schema change.
    // *   **1**: uses the native online DDL operations of MySQL first.
    // *   **2:** uses lock-free schema change first.
    // 
    // > Supported databases include ApsaraDB RDS for MySQL, PolarDB for MySQL, ApsaraDB MyBase for MySQL, and third-party MySQL databases.
    shared_ptr<int32_t> ddlOnline_ {};
    // The ID of the instance. If your instance is a database instance connected by using a database gateway, specify the gateway ID for this parameter.
    // 
    // > This parameter is required if InstanceSource is set to ECS_OWN or GATEWAY.
    shared_ptr<string> ecsInstanceId_ {};
    // The region in which the ECS instance resides.
    // 
    // > This parameter is required if InstanceSource is set to RDS, ECS_OWN, GATEWAY, or VPC_IDC.
    shared_ptr<string> ecsRegion_ {};
    // Specifies whether to enable Security Collaboration for the database instance. Valid values:
    // 
    // *   Y: enables Security Collaboration.
    // *   N: disables Security Collaboration.
    shared_ptr<string> enableSellCommon_ {};
    // Specifies whether to enable sensitive data protection. Valid values:
    // 
    // *   Y: enables the sensitive data protection feature for the database instance.
    // *   N: disables the sensitive data protection feature for the database instance.
    shared_ptr<string> enableSellSitd_ {};
    // Specifies whether to enable Stable Change for the database instance. Valid values:
    // 
    // *   Y: Enables Stable Change.
    // *   N: Disables Stable Change.
    shared_ptr<string> enableSellStable_ {};
    // Specifies whether to enable the security hosting feature for the database instance. Valid values:
    // 
    // *   Y: enables the security hosting feature for the database instance.
    // *   N: disables the security hosting feature for the database instance.
    // 
    // This parameter is required.
    shared_ptr<string> enableSellTrust_ {};
    // The type of the environment to which the database instance belongs. Valid values:
    // 
    // *   **product:** the production environment.
    // *   **dev**: development environment.
    // *   **pre**: pre-release environment.
    // *   **test**: test environment.
    // *   **sit**: system integration testing (SIT) environment.
    // *   **uat**: user acceptance testing (UAT) environment.
    // *   **pet**: stress testing environment.
    // *   **stag**: staging environment.
    // 
    // This parameter is required.
    shared_ptr<string> envType_ {};
    // The timeout period for exporting data from the database instance. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> exportTimeout_ {};
    // The endpoint that is used to connect to the database.
    // 
    // This parameter is required.
    shared_ptr<string> host_ {};
    // The alias of the database instance. Specify an alias that can help you identify the database instance in DMS.
    // 
    // This parameter is required.
    shared_ptr<string> instanceAlias_ {};
    // The source of the database instance. Valid values:
    // 
    // *   **PUBLIC_OWN**: a self-managed database instance that is deployed on the Internet.
    // *   **RDS**: an ApsaraDB RDS instance.
    // *   **ECS_OWN**: a self-managed database instance that is deployed on an Elastic Compute Service (ECS) instance.
    // *   **VPC_IDC**: a self-managed database instance that is deployed in a data center connected over a virtual private cloud (VPC).
    // *   **GATEWAY**: a database instance connected by using a database gateway.
    // 
    // This parameter is required.
    shared_ptr<string> instanceSource_ {};
    // The type of the database instance. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    // 
    // This parameter is required.
    shared_ptr<string> instanceType_ {};
    // The network type. Valid values:
    // 
    // *   **CLASSIC:** the classic network.
    // *   **VPC**
    // 
    // This parameter is required.
    shared_ptr<string> networkType_ {};
    // The port that is used to connect to the database.
    // 
    // This parameter is required.
    shared_ptr<int32_t> port_ {};
    // The timeout period for querying data from the database instance. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> queryTimeout_ {};
    shared_ptr<string> roleArn_ {};
    // The name of the security rule set for the database instance. This parameter is required if Security Collaboration is enabled. You can call the[ListStandardGroups](https://help.aliyun.com/document_detail/465940.html) or [GetInstance](https://help.aliyun.com/document_detail/465826.html) operation to obtain the name of the security rule set from GroupName.
    shared_ptr<string> safeRule_ {};
    // The system ID (SID) of the database instance.
    // 
    // > This parameter is required if InstanceType is set to ORACLE.
    shared_ptr<string> sid_ {};
    // Specifies whether to skip the connectivity test. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> skipTest_ {};
    // The ID of the classification and grading template. You can call the [ListClassificationTemplates](https://help.aliyun.com/document_detail/465947.html) operation to query the template ID.
    shared_ptr<int64_t> templateId_ {};
    // The type of the classification and grading template. You can call the [ListClassificationTemplates](https://help.aliyun.com/document_detail/465947.html) operation to query the template type.
    shared_ptr<string> templateType_ {};
    // The ID of the tenant.
    // 
    // > You can move the pointer over the profile picture in the upper-right corner of the DMS console to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // Specifies whether to enable cross-database query for the database instance. Valid values:
    // 
    // *   **0: does not enable cross-database query.**
    // *   **1**: enables cross-database query.
    // 
    // > Supported databases include MySQL, SQL Server, PostgreSQL, PolarDB for Oracle, and Redis.
    shared_ptr<int32_t> useDsql_ {};
    // Specifies whether to allow Data Management Service (DMS) to connect to the database instance by using SSL connections. Before you use SSL connections, make sure that the SSL encryption feature is enabled for the database instance. Valid values:
    // 
    // *   **0** (default): DMS automatically checks whether self-negotiation is enabled for the database instance. DMS automatically checks whether the SSL encryption feature is enabled for the database instance. If the SSL encryption feature is enabled, DMS connects to the database instance by using SSL connections. Otherwise, DMS connects to the database instance without encryption.
    // *   **1**: DMS connects to the database instance by using SSL connections. This value is invalid if the SSL encryption feature is disabled for the database instance.
    // *   **-1**: DMS does not connect to the database instance by using SSL connections.
    // 
    // > 
    // 
    // *   This parameter is available only for a MySQL or Redis database instance.
    // 
    // *   SSL encrypts network connections at the transport layer to improve the security and integrity of data in transmission. However, SSL increases the response time of network connections.
    shared_ptr<int32_t> useSsl_ {};
    // The ID of the instance connected over a VPC.
    // 
    // > This parameter is required if InstanceSource is set to VPC_IDC.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
