// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ModifyInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(QueryTimeout, queryTimeout_);
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
    friend void from_json(const Darabonba::Json& j, ModifyInstanceRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(QueryTimeout, queryTimeout_);
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
    ModifyInstanceRequest() = default ;
    ModifyInstanceRequest(const ModifyInstanceRequest &) = default ;
    ModifyInstanceRequest(ModifyInstanceRequest &&) = default ;
    ModifyInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceRequest() = default ;
    ModifyInstanceRequest& operator=(const ModifyInstanceRequest &) = default ;
    ModifyInstanceRequest& operator=(ModifyInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataLinkName_ == nullptr
        && return this->databasePassword_ == nullptr && return this->databaseUser_ == nullptr && return this->dbaId_ == nullptr && return this->ddlOnline_ == nullptr && return this->ecsInstanceId_ == nullptr
        && return this->ecsRegion_ == nullptr && return this->enableSellCommon_ == nullptr && return this->enableSellSitd_ == nullptr && return this->enableSellStable_ == nullptr && return this->enableSellTrust_ == nullptr
        && return this->envType_ == nullptr && return this->exportTimeout_ == nullptr && return this->host_ == nullptr && return this->instanceAlias_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceSource_ == nullptr && return this->instanceType_ == nullptr && return this->networkType_ == nullptr && return this->port_ == nullptr && return this->queryTimeout_ == nullptr
        && return this->safeRule_ == nullptr && return this->sid_ == nullptr && return this->skipTest_ == nullptr && return this->templateId_ == nullptr && return this->templateType_ == nullptr
        && return this->tid_ == nullptr && return this->useDsql_ == nullptr && return this->useSsl_ == nullptr && return this->vpcId_ == nullptr; };
    // dataLinkName Field Functions 
    bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
    void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
    inline string dataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
    inline ModifyInstanceRequest& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string databasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline ModifyInstanceRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline ModifyInstanceRequest& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline int64_t dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, 0L) };
    inline ModifyInstanceRequest& setDbaId(int64_t dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // ddlOnline Field Functions 
    bool hasDdlOnline() const { return this->ddlOnline_ != nullptr;};
    void deleteDdlOnline() { this->ddlOnline_ = nullptr;};
    inline int32_t ddlOnline() const { DARABONBA_PTR_GET_DEFAULT(ddlOnline_, 0) };
    inline ModifyInstanceRequest& setDdlOnline(int32_t ddlOnline) { DARABONBA_PTR_SET_VALUE(ddlOnline_, ddlOnline) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ModifyInstanceRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsRegion Field Functions 
    bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
    void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
    inline string ecsRegion() const { DARABONBA_PTR_GET_DEFAULT(ecsRegion_, "") };
    inline ModifyInstanceRequest& setEcsRegion(string ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };


    // enableSellCommon Field Functions 
    bool hasEnableSellCommon() const { return this->enableSellCommon_ != nullptr;};
    void deleteEnableSellCommon() { this->enableSellCommon_ = nullptr;};
    inline string enableSellCommon() const { DARABONBA_PTR_GET_DEFAULT(enableSellCommon_, "") };
    inline ModifyInstanceRequest& setEnableSellCommon(string enableSellCommon) { DARABONBA_PTR_SET_VALUE(enableSellCommon_, enableSellCommon) };


    // enableSellSitd Field Functions 
    bool hasEnableSellSitd() const { return this->enableSellSitd_ != nullptr;};
    void deleteEnableSellSitd() { this->enableSellSitd_ = nullptr;};
    inline string enableSellSitd() const { DARABONBA_PTR_GET_DEFAULT(enableSellSitd_, "") };
    inline ModifyInstanceRequest& setEnableSellSitd(string enableSellSitd) { DARABONBA_PTR_SET_VALUE(enableSellSitd_, enableSellSitd) };


    // enableSellStable Field Functions 
    bool hasEnableSellStable() const { return this->enableSellStable_ != nullptr;};
    void deleteEnableSellStable() { this->enableSellStable_ = nullptr;};
    inline string enableSellStable() const { DARABONBA_PTR_GET_DEFAULT(enableSellStable_, "") };
    inline ModifyInstanceRequest& setEnableSellStable(string enableSellStable) { DARABONBA_PTR_SET_VALUE(enableSellStable_, enableSellStable) };


    // enableSellTrust Field Functions 
    bool hasEnableSellTrust() const { return this->enableSellTrust_ != nullptr;};
    void deleteEnableSellTrust() { this->enableSellTrust_ = nullptr;};
    inline string enableSellTrust() const { DARABONBA_PTR_GET_DEFAULT(enableSellTrust_, "") };
    inline ModifyInstanceRequest& setEnableSellTrust(string enableSellTrust) { DARABONBA_PTR_SET_VALUE(enableSellTrust_, enableSellTrust) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ModifyInstanceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // exportTimeout Field Functions 
    bool hasExportTimeout() const { return this->exportTimeout_ != nullptr;};
    void deleteExportTimeout() { this->exportTimeout_ = nullptr;};
    inline int32_t exportTimeout() const { DARABONBA_PTR_GET_DEFAULT(exportTimeout_, 0) };
    inline ModifyInstanceRequest& setExportTimeout(int32_t exportTimeout) { DARABONBA_PTR_SET_VALUE(exportTimeout_, exportTimeout) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ModifyInstanceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline ModifyInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline ModifyInstanceRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline ModifyInstanceRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ModifyInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // queryTimeout Field Functions 
    bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
    void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
    inline int32_t queryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0) };
    inline ModifyInstanceRequest& setQueryTimeout(int32_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


    // safeRule Field Functions 
    bool hasSafeRule() const { return this->safeRule_ != nullptr;};
    void deleteSafeRule() { this->safeRule_ = nullptr;};
    inline string safeRule() const { DARABONBA_PTR_GET_DEFAULT(safeRule_, "") };
    inline ModifyInstanceRequest& setSafeRule(string safeRule) { DARABONBA_PTR_SET_VALUE(safeRule_, safeRule) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline ModifyInstanceRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // skipTest Field Functions 
    bool hasSkipTest() const { return this->skipTest_ != nullptr;};
    void deleteSkipTest() { this->skipTest_ = nullptr;};
    inline bool skipTest() const { DARABONBA_PTR_GET_DEFAULT(skipTest_, false) };
    inline ModifyInstanceRequest& setSkipTest(bool skipTest) { DARABONBA_PTR_SET_VALUE(skipTest_, skipTest) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline ModifyInstanceRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline ModifyInstanceRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ModifyInstanceRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // useDsql Field Functions 
    bool hasUseDsql() const { return this->useDsql_ != nullptr;};
    void deleteUseDsql() { this->useDsql_ = nullptr;};
    inline int32_t useDsql() const { DARABONBA_PTR_GET_DEFAULT(useDsql_, 0) };
    inline ModifyInstanceRequest& setUseDsql(int32_t useDsql) { DARABONBA_PTR_SET_VALUE(useDsql_, useDsql) };


    // useSsl Field Functions 
    bool hasUseSsl() const { return this->useSsl_ != nullptr;};
    void deleteUseSsl() { this->useSsl_ = nullptr;};
    inline int32_t useSsl() const { DARABONBA_PTR_GET_DEFAULT(useSsl_, 0) };
    inline ModifyInstanceRequest& setUseSsl(int32_t useSsl) { DARABONBA_PTR_SET_VALUE(useSsl_, useSsl) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


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
    std::shared_ptr<string> dataLinkName_ = nullptr;
    // The password of the account that is used to log on to the database instance.
    std::shared_ptr<string> databasePassword_ = nullptr;
    // The account that is used to log on to the database instance.
    std::shared_ptr<string> databaseUser_ = nullptr;
    // The ID of the user who assumes the database administrator (DBA) role. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to obtain the value of this parameter.
    std::shared_ptr<int64_t> dbaId_ = nullptr;
    // Specifies whether to enable lock-free schema change. Valid values:
    // 
    // *   **0**: Disable Lock-free Schema Change.
    // *   **1**: MySQL native online DDL first.
    // *   **2**: DMS native online DDL first.
    // 
    // > Supported databases include ApsaraDB RDS for MySQL, PolarDB for MySQL, ApsaraDB MyBase for MySQL, and third-party MySQL databases.
    std::shared_ptr<int32_t> ddlOnline_ = nullptr;
    // The ID of the ECS instance.
    // 
    // >  This parameter is required if InstanceSource is set to ECS_OWN.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The region in which the ECS instance resides.
    // 
    // >  This parameter is required if InstanceSource is set to RDS, ECS_OWN, or VPC_IDC.
    std::shared_ptr<string> ecsRegion_ = nullptr;
    // Specifies whether to enable Security Collaboration for the database instance. Valid values:
    // 
    // *   Y: Enable.
    // *   N: Disable.
    std::shared_ptr<string> enableSellCommon_ = nullptr;
    // Specifies whether to enable sensitive data protection. Valid values:
    // 
    // *   Y: Enable.
    // *   N: Disable.
    std::shared_ptr<string> enableSellSitd_ = nullptr;
    // Specifies whether to enable Stable Change for the database instance. Valid values:
    // 
    // *   Y: Enable.
    // *   N: Disable.
    std::shared_ptr<string> enableSellStable_ = nullptr;
    // Specifies whether to enable the security hosting feature for the database instance. Valid values:
    // 
    // *   Y: Enable.
    // *   N: Disable.
    std::shared_ptr<string> enableSellTrust_ = nullptr;
    // The type of the environment in which the database instance is deployed. Valid values:
    // 
    // *   **product**: production environment.
    // *   **dev**: development environment.
    // *   **pre**: pre-release environment.
    // *   **test**: test environment.
    // *   **sit**: system integration testing (SIT) environment.
    // *   **uat**: user acceptance testing (UAT) environment.
    // *   **pet**: stress testing environment.
    // *   **stag**: staging environment.
    std::shared_ptr<string> envType_ = nullptr;
    // The timeout period for exporting data from the database instance. Unit: seconds.
    std::shared_ptr<int32_t> exportTimeout_ = nullptr;
    // The endpoint that is used to connect to the database instance.
    std::shared_ptr<string> host_ = nullptr;
    // The alias of the database instance. Specify an alias that can help you quickly identify the database instance in Data Management (DMS).
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The ID of the instance. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The source of the database instance. Valid values:
    // 
    // *   **PUBLIC_OWN**: a self-managed database instance that is deployed on the Internet.
    // *   **RDS**: an ApsaraDB RDS instance.
    // *   **ECS_OWN**: a self-managed database instance that is deployed on an Elastic Compute Service (ECS) instance.
    // *   **VPC_IDC**: a self-managed database instance that is deployed in a data center connected over a virtual private cloud (VPC).
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The type of the database instance. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The network type of the database instance. Valid values:
    // 
    // *   **CLASSIC**: the classic network.
    // *   **VPC**: VPC.
    std::shared_ptr<string> networkType_ = nullptr;
    // The port that is used to connect to the database instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The timeout period for querying data from the database instance. Unit: seconds.
    std::shared_ptr<int32_t> queryTimeout_ = nullptr;
    // The name of the security rule set for the database instance. This parameter is required if Security Collaboration is enabled. You can call the[ListStandardGroups](https://help.aliyun.com/document_detail/465940.html) or [GetInstance](https://help.aliyun.com/document_detail/465826.html) operation to obtain the name of the security rule set from GroupName.
    std::shared_ptr<string> safeRule_ = nullptr;
    // The system ID (SID) of the database instance.
    // 
    // > This parameter is required if InstanceType is set to ORACLE.
    std::shared_ptr<string> sid_ = nullptr;
    // Specifies whether to skip the connectivity test. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> skipTest_ = nullptr;
    // The ID of the classification and grading template. You can call the [ListClassificationTemplates](https://help.aliyun.com/document_detail/465947.html) operation to query the template ID.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The type of the classification and grading template. You can call the [ListClassificationTemplates](https://help.aliyun.com/document_detail/465947.html) operation to query the template type.
    std::shared_ptr<string> templateType_ = nullptr;
    // The ID of the tenant.
    // 
    // > You can move the pointer over the profile picture in the upper-right corner of the DMS console to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // Specifies whether to enable cross-instance query for the database instance. Valid values:
    // 
    // *   **0**: Disables cross-database query.
    // *   **1**: Enables cross-database query.
    // 
    // > Supported databases include MySQL, SQL Server, PostgreSQL, PolarDB for Oracle, and Redis.
    std::shared_ptr<int32_t> useDsql_ = nullptr;
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
    std::shared_ptr<int32_t> useSsl_ = nullptr;
    // The VPC ID.
    // 
    // >  This parameter is required if InstanceSource is set to VPC_IDC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
