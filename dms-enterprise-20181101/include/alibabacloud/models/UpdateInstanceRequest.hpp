// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(DdlOnline, ddlOnline_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EcsRegion, ecsRegion_);
      DARABONBA_PTR_TO_JSON(EnableSellSitd, enableSellSitd_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ExportTimeout, exportTimeout_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(QueryTimeout, queryTimeout_);
      DARABONBA_PTR_TO_JSON(SafeRuleId, safeRuleId_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(SkipTest, skipTest_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UseDsql, useDsql_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(DdlOnline, ddlOnline_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcsRegion, ecsRegion_);
      DARABONBA_PTR_FROM_JSON(EnableSellSitd, enableSellSitd_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ExportTimeout, exportTimeout_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(QueryTimeout, queryTimeout_);
      DARABONBA_PTR_FROM_JSON(SafeRuleId, safeRuleId_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(SkipTest, skipTest_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UseDsql, useDsql_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateInstanceRequest() = default ;
    UpdateInstanceRequest(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest(UpdateInstanceRequest &&) = default ;
    UpdateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstanceRequest() = default ;
    UpdateInstanceRequest& operator=(const UpdateInstanceRequest &) = default ;
    UpdateInstanceRequest& operator=(UpdateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataLinkName_ == nullptr
        && return this->databasePassword_ == nullptr && return this->databaseUser_ == nullptr && return this->dbaId_ == nullptr && return this->ddlOnline_ == nullptr && return this->ecsInstanceId_ == nullptr
        && return this->ecsRegion_ == nullptr && return this->enableSellSitd_ == nullptr && return this->envType_ == nullptr && return this->exportTimeout_ == nullptr && return this->host_ == nullptr
        && return this->instanceAlias_ == nullptr && return this->instanceId_ == nullptr && return this->instanceSource_ == nullptr && return this->instanceType_ == nullptr && return this->port_ == nullptr
        && return this->queryTimeout_ == nullptr && return this->safeRuleId_ == nullptr && return this->sid_ == nullptr && return this->skipTest_ == nullptr && return this->templateId_ == nullptr
        && return this->templateType_ == nullptr && return this->tid_ == nullptr && return this->useDsql_ == nullptr && return this->vpcId_ == nullptr; };
    // dataLinkName Field Functions 
    bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
    void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
    inline string dataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
    inline UpdateInstanceRequest& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string databasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline UpdateInstanceRequest& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline UpdateInstanceRequest& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline string dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
    inline UpdateInstanceRequest& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // ddlOnline Field Functions 
    bool hasDdlOnline() const { return this->ddlOnline_ != nullptr;};
    void deleteDdlOnline() { this->ddlOnline_ = nullptr;};
    inline int32_t ddlOnline() const { DARABONBA_PTR_GET_DEFAULT(ddlOnline_, 0) };
    inline UpdateInstanceRequest& setDdlOnline(int32_t ddlOnline) { DARABONBA_PTR_SET_VALUE(ddlOnline_, ddlOnline) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline UpdateInstanceRequest& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsRegion Field Functions 
    bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
    void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
    inline string ecsRegion() const { DARABONBA_PTR_GET_DEFAULT(ecsRegion_, "") };
    inline UpdateInstanceRequest& setEcsRegion(string ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };


    // enableSellSitd Field Functions 
    bool hasEnableSellSitd() const { return this->enableSellSitd_ != nullptr;};
    void deleteEnableSellSitd() { this->enableSellSitd_ = nullptr;};
    inline string enableSellSitd() const { DARABONBA_PTR_GET_DEFAULT(enableSellSitd_, "") };
    inline UpdateInstanceRequest& setEnableSellSitd(string enableSellSitd) { DARABONBA_PTR_SET_VALUE(enableSellSitd_, enableSellSitd) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateInstanceRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // exportTimeout Field Functions 
    bool hasExportTimeout() const { return this->exportTimeout_ != nullptr;};
    void deleteExportTimeout() { this->exportTimeout_ = nullptr;};
    inline int32_t exportTimeout() const { DARABONBA_PTR_GET_DEFAULT(exportTimeout_, 0) };
    inline UpdateInstanceRequest& setExportTimeout(int32_t exportTimeout) { DARABONBA_PTR_SET_VALUE(exportTimeout_, exportTimeout) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateInstanceRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline UpdateInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline UpdateInstanceRequest& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline UpdateInstanceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // queryTimeout Field Functions 
    bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
    void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
    inline int32_t queryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0) };
    inline UpdateInstanceRequest& setQueryTimeout(int32_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


    // safeRuleId Field Functions 
    bool hasSafeRuleId() const { return this->safeRuleId_ != nullptr;};
    void deleteSafeRuleId() { this->safeRuleId_ = nullptr;};
    inline string safeRuleId() const { DARABONBA_PTR_GET_DEFAULT(safeRuleId_, "") };
    inline UpdateInstanceRequest& setSafeRuleId(string safeRuleId) { DARABONBA_PTR_SET_VALUE(safeRuleId_, safeRuleId) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline UpdateInstanceRequest& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // skipTest Field Functions 
    bool hasSkipTest() const { return this->skipTest_ != nullptr;};
    void deleteSkipTest() { this->skipTest_ = nullptr;};
    inline bool skipTest() const { DARABONBA_PTR_GET_DEFAULT(skipTest_, false) };
    inline UpdateInstanceRequest& setSkipTest(bool skipTest) { DARABONBA_PTR_SET_VALUE(skipTest_, skipTest) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline UpdateInstanceRequest& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline UpdateInstanceRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateInstanceRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // useDsql Field Functions 
    bool hasUseDsql() const { return this->useDsql_ != nullptr;};
    void deleteUseDsql() { this->useDsql_ = nullptr;};
    inline int32_t useDsql() const { DARABONBA_PTR_GET_DEFAULT(useDsql_, 0) };
    inline UpdateInstanceRequest& setUseDsql(int32_t useDsql) { DARABONBA_PTR_SET_VALUE(useDsql_, useDsql) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline UpdateInstanceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the database link for cross-database queries.
    // 
    // > 
    // 
    // *   This parameter is required if UseDsql is set to 1.
    // 
    // *   The name can contain only lowercase letters and underscores (_).
    // 
    // *   The name must be unique within a tenant.
    std::shared_ptr<string> dataLinkName_ = nullptr;
    // The password that is used to log on to the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> databasePassword_ = nullptr;
    // The account that is used to log on to the database.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseUser_ = nullptr;
    // The ID of the user who assumes the database administrator (DBA) role of the database instance. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the user ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbaId_ = nullptr;
    // Specifies whether to enable the lock-free schema change feature for the database instance. Valid values:
    // 
    // *   **0:** disables the lock-free schema change feature.
    // *   **1**: uses the online DDL of MySQL first.
    // *   **2**: uses the lock-free schema change feature of DMS first.
    std::shared_ptr<int32_t> ddlOnline_ = nullptr;
    // The ID of the ECS instance on which the database instance is deployed.
    // 
    // > This parameter is required if the InstanceSource parameter is set to ECS_OWN.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The ID of the region in which the database instance resides.
    // 
    // > This parameter is required if InstanceSource is set to RDS, ECS_OWN, and VPC_IDC.
    std::shared_ptr<string> ecsRegion_ = nullptr;
    // *   **Y:** enables the sensitive data protection feature
    // *   **N:** disables the sensitive data protection feature
    // *   **NULL or other:** does not update the status of the sensitive data protection feature
    std::shared_ptr<string> enableSellSitd_ = nullptr;
    // The type of the environment in which the database instance is deployed. Valid values:
    // 
    // *   **product:** production environment
    // *   **dev:** development environment
    // *   **pre:** pre-release environment
    // *   **test:** test environment
    // *   **sit:** system integration testing (SIT) environment
    // *   **uat:** user acceptance testing (UAT) environment
    // *   **pet:** stress testing environment
    // *   **stag:** staging environment
    // 
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    // The timeout period for exporting data from the database instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> exportTimeout_ = nullptr;
    // The host address that is used to connect to the database instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> host_ = nullptr;
    // The alias of the database instance. Specify an alias that can help you identify the database instance in DMS.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The ID of the database instance. You can call the [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The source of the database instance. Valid values:
    // 
    // *   **PUBLIC_OWN:** a self-managed database instance that is deployed on the Internet
    // *   **RDS:** an ApsaraDB RDS instance
    // *   **ECS_OWN:** a self-managed database that is deployed on an Elastic Compute Service (ECS) instance
    // *   **VPC_IDC:** a self-managed database instance that is deployed in a data center connected over a virtual private cloud (VPC)
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The port that is used to connect to the database instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The timeout period for querying data in the database instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> queryTimeout_ = nullptr;
    // The name of the security rule set (GroupName) for the instance. You can call the [ListStandardGroups](https://help.aliyun.com/document_detail/417891.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the name of the security rule set.
    // 
    // This parameter is required.
    std::shared_ptr<string> safeRuleId_ = nullptr;
    // The system ID (SID) of the database instance.
    // 
    // > This parameter is required if the InstanceType parameter is set to ORACLE.
    std::shared_ptr<string> sid_ = nullptr;
    // Specifies whether to skip the connectivity test. Valid values:
    // 
    // *   **true:** skips the connectivity test
    // *   **false:** does not skip the connectivity test
    std::shared_ptr<bool> skipTest_ = nullptr;
    // The ID of the classification template. You can call the [ListClassificationTemplates](https://help.aliyun.com/document_detail/460613.html) operation to query the template ID.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The type of the classification template. You can call the [ListClassificationTemplates](https://help.aliyun.com/document_detail/460613.html) operation to query the template type.
    std::shared_ptr<string> templateType_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // Specifies whether to enable the cross-database query feature for the database instance. Valid values:
    // 
    // *   **0**: disables the cross-database query feature.
    // *   **1**: enables the cross-database query feature.
    // 
    // > Supported database types: MySQL, SQL Server, PostgreSQL, PolarDB for PostgreSQL (compatible with Oracle), and ApsaraDB for Redis.
    std::shared_ptr<int32_t> useDsql_ = nullptr;
    // The ID of the VPC to which the database instance belongs.
    // 
    // > This parameter is required if the InstanceSource parameter is set to VPC_IDC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
