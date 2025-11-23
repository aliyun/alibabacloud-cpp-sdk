// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceOwnerIdList.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceOwnerNameList.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyInstanceStandardGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetInstanceResponseBodyInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_TO_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_TO_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_TO_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(DbaNickName, dbaNickName_);
      DARABONBA_PTR_TO_JSON(DdlOnline, ddlOnline_);
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EcsRegion, ecsRegion_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(ExportTimeout, exportTimeout_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(QueryTimeout, queryTimeout_);
      DARABONBA_PTR_TO_JSON(SafeRuleId, safeRuleId_);
      DARABONBA_PTR_TO_JSON(SellSitd, sellSitd_);
      DARABONBA_PTR_TO_JSON(SellTrust, sellTrust_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UseDsql, useDsql_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLinkName, dataLinkName_);
      DARABONBA_PTR_FROM_JSON(DatabasePassword, databasePassword_);
      DARABONBA_PTR_FROM_JSON(DatabaseUser, databaseUser_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(DbaNickName, dbaNickName_);
      DARABONBA_PTR_FROM_JSON(DdlOnline, ddlOnline_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcsRegion, ecsRegion_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(ExportTimeout, exportTimeout_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(QueryTimeout, queryTimeout_);
      DARABONBA_PTR_FROM_JSON(SafeRuleId, safeRuleId_);
      DARABONBA_PTR_FROM_JSON(SellSitd, sellSitd_);
      DARABONBA_PTR_FROM_JSON(SellTrust, sellTrust_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UseDsql, useDsql_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance(GetInstanceResponseBodyInstance &&) = default ;
    GetInstanceResponseBodyInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyInstance() = default ;
    GetInstanceResponseBodyInstance& operator=(const GetInstanceResponseBodyInstance &) = default ;
    GetInstanceResponseBodyInstance& operator=(GetInstanceResponseBodyInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataLinkName_ == nullptr
        && return this->databasePassword_ == nullptr && return this->databaseUser_ == nullptr && return this->dbaId_ == nullptr && return this->dbaNickName_ == nullptr && return this->ddlOnline_ == nullptr
        && return this->ecsInstanceId_ == nullptr && return this->ecsRegion_ == nullptr && return this->envType_ == nullptr && return this->exportTimeout_ == nullptr && return this->host_ == nullptr
        && return this->instanceAlias_ == nullptr && return this->instanceId_ == nullptr && return this->instanceSource_ == nullptr && return this->instanceType_ == nullptr && return this->ownerIdList_ == nullptr
        && return this->ownerNameList_ == nullptr && return this->port_ == nullptr && return this->queryTimeout_ == nullptr && return this->safeRuleId_ == nullptr && return this->sellSitd_ == nullptr
        && return this->sellTrust_ == nullptr && return this->sid_ == nullptr && return this->standardGroup_ == nullptr && return this->state_ == nullptr && return this->useDsql_ == nullptr
        && return this->vpcId_ == nullptr; };
    // dataLinkName Field Functions 
    bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
    void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
    inline string dataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
    inline GetInstanceResponseBodyInstance& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string databasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline GetInstanceResponseBodyInstance& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline GetInstanceResponseBodyInstance& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline string dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
    inline GetInstanceResponseBodyInstance& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // dbaNickName Field Functions 
    bool hasDbaNickName() const { return this->dbaNickName_ != nullptr;};
    void deleteDbaNickName() { this->dbaNickName_ = nullptr;};
    inline string dbaNickName() const { DARABONBA_PTR_GET_DEFAULT(dbaNickName_, "") };
    inline GetInstanceResponseBodyInstance& setDbaNickName(string dbaNickName) { DARABONBA_PTR_SET_VALUE(dbaNickName_, dbaNickName) };


    // ddlOnline Field Functions 
    bool hasDdlOnline() const { return this->ddlOnline_ != nullptr;};
    void deleteDdlOnline() { this->ddlOnline_ = nullptr;};
    inline int32_t ddlOnline() const { DARABONBA_PTR_GET_DEFAULT(ddlOnline_, 0) };
    inline GetInstanceResponseBodyInstance& setDdlOnline(int32_t ddlOnline) { DARABONBA_PTR_SET_VALUE(ddlOnline_, ddlOnline) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline GetInstanceResponseBodyInstance& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsRegion Field Functions 
    bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
    void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
    inline string ecsRegion() const { DARABONBA_PTR_GET_DEFAULT(ecsRegion_, "") };
    inline GetInstanceResponseBodyInstance& setEcsRegion(string ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetInstanceResponseBodyInstance& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // exportTimeout Field Functions 
    bool hasExportTimeout() const { return this->exportTimeout_ != nullptr;};
    void deleteExportTimeout() { this->exportTimeout_ = nullptr;};
    inline int32_t exportTimeout() const { DARABONBA_PTR_GET_DEFAULT(exportTimeout_, 0) };
    inline GetInstanceResponseBodyInstance& setExportTimeout(int32_t exportTimeout) { DARABONBA_PTR_SET_VALUE(exportTimeout_, exportTimeout) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetInstanceResponseBodyInstance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetInstanceResponseBodyInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::GetInstanceResponseBodyInstanceOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::GetInstanceResponseBodyInstanceOwnerIdList) };
    inline Models::GetInstanceResponseBodyInstanceOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::GetInstanceResponseBodyInstanceOwnerIdList) };
    inline GetInstanceResponseBodyInstance& setOwnerIdList(const Models::GetInstanceResponseBodyInstanceOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline GetInstanceResponseBodyInstance& setOwnerIdList(Models::GetInstanceResponseBodyInstanceOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::GetInstanceResponseBodyInstanceOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::GetInstanceResponseBodyInstanceOwnerNameList) };
    inline Models::GetInstanceResponseBodyInstanceOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::GetInstanceResponseBodyInstanceOwnerNameList) };
    inline GetInstanceResponseBodyInstance& setOwnerNameList(const Models::GetInstanceResponseBodyInstanceOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline GetInstanceResponseBodyInstance& setOwnerNameList(Models::GetInstanceResponseBodyInstanceOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline GetInstanceResponseBodyInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // queryTimeout Field Functions 
    bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
    void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
    inline int32_t queryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0) };
    inline GetInstanceResponseBodyInstance& setQueryTimeout(int32_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


    // safeRuleId Field Functions 
    bool hasSafeRuleId() const { return this->safeRuleId_ != nullptr;};
    void deleteSafeRuleId() { this->safeRuleId_ = nullptr;};
    inline string safeRuleId() const { DARABONBA_PTR_GET_DEFAULT(safeRuleId_, "") };
    inline GetInstanceResponseBodyInstance& setSafeRuleId(string safeRuleId) { DARABONBA_PTR_SET_VALUE(safeRuleId_, safeRuleId) };


    // sellSitd Field Functions 
    bool hasSellSitd() const { return this->sellSitd_ != nullptr;};
    void deleteSellSitd() { this->sellSitd_ = nullptr;};
    inline string sellSitd() const { DARABONBA_PTR_GET_DEFAULT(sellSitd_, "") };
    inline GetInstanceResponseBodyInstance& setSellSitd(string sellSitd) { DARABONBA_PTR_SET_VALUE(sellSitd_, sellSitd) };


    // sellTrust Field Functions 
    bool hasSellTrust() const { return this->sellTrust_ != nullptr;};
    void deleteSellTrust() { this->sellTrust_ = nullptr;};
    inline string sellTrust() const { DARABONBA_PTR_GET_DEFAULT(sellTrust_, "") };
    inline GetInstanceResponseBodyInstance& setSellTrust(string sellTrust) { DARABONBA_PTR_SET_VALUE(sellTrust_, sellTrust) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline GetInstanceResponseBodyInstance& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // standardGroup Field Functions 
    bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
    void deleteStandardGroup() { this->standardGroup_ = nullptr;};
    inline const Models::GetInstanceResponseBodyInstanceStandardGroup & standardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, Models::GetInstanceResponseBodyInstanceStandardGroup) };
    inline Models::GetInstanceResponseBodyInstanceStandardGroup standardGroup() { DARABONBA_PTR_GET(standardGroup_, Models::GetInstanceResponseBodyInstanceStandardGroup) };
    inline GetInstanceResponseBodyInstance& setStandardGroup(const Models::GetInstanceResponseBodyInstanceStandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
    inline GetInstanceResponseBodyInstance& setStandardGroup(Models::GetInstanceResponseBodyInstanceStandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetInstanceResponseBodyInstance& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // useDsql Field Functions 
    bool hasUseDsql() const { return this->useDsql_ != nullptr;};
    void deleteUseDsql() { this->useDsql_ = nullptr;};
    inline int32_t useDsql() const { DARABONBA_PTR_GET_DEFAULT(useDsql_, 0) };
    inline GetInstanceResponseBodyInstance& setUseDsql(int32_t useDsql) { DARABONBA_PTR_SET_VALUE(useDsql_, useDsql) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceResponseBodyInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the database link for the database instance.
    std::shared_ptr<string> dataLinkName_ = nullptr;
    // The password that is used to log on to the database.
    std::shared_ptr<string> databasePassword_ = nullptr;
    // The account that is used to log on to the database instance.
    std::shared_ptr<string> databaseUser_ = nullptr;
    // The ID of the database administrator (DBA) for the database instance.
    std::shared_ptr<string> dbaId_ = nullptr;
    // The nickname of the DBA for the database instance.
    std::shared_ptr<string> dbaNickName_ = nullptr;
    // Indicates whether the lock-free schema change feature is enabled for the database instance.
    std::shared_ptr<int32_t> ddlOnline_ = nullptr;
    // The ID of the Elastic Compute Service (ECS) instance on which the database instance is deployed.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The ID of the region in which the database instance resides.
    std::shared_ptr<string> ecsRegion_ = nullptr;
    // The type of the environment to which the database instance belongs. Valid values:
    // 
    // *   **product**: production environment
    // *   **dev**: development environment
    // *   **pre**: staging environment
    // *   **test**: test environment
    // *   **sit**: system integration testing (SIT) environment
    // *   **uat**: user acceptance testing (UAT) environment
    // *   **pet**: stress testing environment
    // *   **stag**: STAG environment
    std::shared_ptr<string> envType_ = nullptr;
    // The timeout period for exporting data from the database instance.
    std::shared_ptr<int32_t> exportTimeout_ = nullptr;
    // The host address that is used to connect to the database instance.
    std::shared_ptr<string> host_ = nullptr;
    // The alias of the database instance.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The ID of the database instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The source of the database instance.
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The type of the database instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IDs of the owners for the database instance.
    std::shared_ptr<Models::GetInstanceResponseBodyInstanceOwnerIdList> ownerIdList_ = nullptr;
    // The nicknames of the owners for the database instance.
    std::shared_ptr<Models::GetInstanceResponseBodyInstanceOwnerNameList> ownerNameList_ = nullptr;
    // The port number that is used to connect to the database instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The timeout period for querying data in the database instance.
    std::shared_ptr<int32_t> queryTimeout_ = nullptr;
    // The ID of the security rule set for the database instance.
    std::shared_ptr<string> safeRuleId_ = nullptr;
    // Whether sensitive data protection is enabled.  Valid values:
    // 
    // - **true**: Enable.
    // 
    // - **false**: Close.
    std::shared_ptr<string> sellSitd_ = nullptr;
    std::shared_ptr<string> sellTrust_ = nullptr;
    // The SID of the database instance.
    std::shared_ptr<string> sid_ = nullptr;
    // The control mode of the database instance.
    std::shared_ptr<Models::GetInstanceResponseBodyInstanceStandardGroup> standardGroup_ = nullptr;
    // The status of the database instance. Valid values:
    // 
    // *   **NORMAL**: normal
    // *   **DISABLE**: disabled
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether the cross-database query feature is enabled for the database instance. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> useDsql_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the database instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
