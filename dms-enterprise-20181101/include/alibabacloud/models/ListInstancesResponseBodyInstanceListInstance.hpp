// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELISTINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELISTINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstanceListInstanceOwnerIdList.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstanceListInstanceOwnerNameList.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstanceListInstanceStandardGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstancesResponseBodyInstanceListInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstanceListInstance& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstanceListInstance& obj) { 
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
    ListInstancesResponseBodyInstanceListInstance() = default ;
    ListInstancesResponseBodyInstanceListInstance(const ListInstancesResponseBodyInstanceListInstance &) = default ;
    ListInstancesResponseBodyInstanceListInstance(ListInstancesResponseBodyInstanceListInstance &&) = default ;
    ListInstancesResponseBodyInstanceListInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstanceListInstance() = default ;
    ListInstancesResponseBodyInstanceListInstance& operator=(const ListInstancesResponseBodyInstanceListInstance &) = default ;
    ListInstancesResponseBodyInstanceListInstance& operator=(ListInstancesResponseBodyInstanceListInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataLinkName_ != nullptr
        && this->databasePassword_ != nullptr && this->databaseUser_ != nullptr && this->dbaId_ != nullptr && this->dbaNickName_ != nullptr && this->ddlOnline_ != nullptr
        && this->ecsInstanceId_ != nullptr && this->ecsRegion_ != nullptr && this->envType_ != nullptr && this->exportTimeout_ != nullptr && this->host_ != nullptr
        && this->instanceAlias_ != nullptr && this->instanceId_ != nullptr && this->instanceSource_ != nullptr && this->instanceType_ != nullptr && this->ownerIdList_ != nullptr
        && this->ownerNameList_ != nullptr && this->port_ != nullptr && this->queryTimeout_ != nullptr && this->safeRuleId_ != nullptr && this->sellSitd_ != nullptr
        && this->sellTrust_ != nullptr && this->sid_ != nullptr && this->standardGroup_ != nullptr && this->state_ != nullptr && this->useDsql_ != nullptr
        && this->vpcId_ != nullptr; };
    // dataLinkName Field Functions 
    bool hasDataLinkName() const { return this->dataLinkName_ != nullptr;};
    void deleteDataLinkName() { this->dataLinkName_ = nullptr;};
    inline string dataLinkName() const { DARABONBA_PTR_GET_DEFAULT(dataLinkName_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setDataLinkName(string dataLinkName) { DARABONBA_PTR_SET_VALUE(dataLinkName_, dataLinkName) };


    // databasePassword Field Functions 
    bool hasDatabasePassword() const { return this->databasePassword_ != nullptr;};
    void deleteDatabasePassword() { this->databasePassword_ = nullptr;};
    inline string databasePassword() const { DARABONBA_PTR_GET_DEFAULT(databasePassword_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setDatabasePassword(string databasePassword) { DARABONBA_PTR_SET_VALUE(databasePassword_, databasePassword) };


    // databaseUser Field Functions 
    bool hasDatabaseUser() const { return this->databaseUser_ != nullptr;};
    void deleteDatabaseUser() { this->databaseUser_ = nullptr;};
    inline string databaseUser() const { DARABONBA_PTR_GET_DEFAULT(databaseUser_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setDatabaseUser(string databaseUser) { DARABONBA_PTR_SET_VALUE(databaseUser_, databaseUser) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline string dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // dbaNickName Field Functions 
    bool hasDbaNickName() const { return this->dbaNickName_ != nullptr;};
    void deleteDbaNickName() { this->dbaNickName_ = nullptr;};
    inline string dbaNickName() const { DARABONBA_PTR_GET_DEFAULT(dbaNickName_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setDbaNickName(string dbaNickName) { DARABONBA_PTR_SET_VALUE(dbaNickName_, dbaNickName) };


    // ddlOnline Field Functions 
    bool hasDdlOnline() const { return this->ddlOnline_ != nullptr;};
    void deleteDdlOnline() { this->ddlOnline_ = nullptr;};
    inline int32_t ddlOnline() const { DARABONBA_PTR_GET_DEFAULT(ddlOnline_, 0) };
    inline ListInstancesResponseBodyInstanceListInstance& setDdlOnline(int32_t ddlOnline) { DARABONBA_PTR_SET_VALUE(ddlOnline_, ddlOnline) };


    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsRegion Field Functions 
    bool hasEcsRegion() const { return this->ecsRegion_ != nullptr;};
    void deleteEcsRegion() { this->ecsRegion_ = nullptr;};
    inline string ecsRegion() const { DARABONBA_PTR_GET_DEFAULT(ecsRegion_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setEcsRegion(string ecsRegion) { DARABONBA_PTR_SET_VALUE(ecsRegion_, ecsRegion) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // exportTimeout Field Functions 
    bool hasExportTimeout() const { return this->exportTimeout_ != nullptr;};
    void deleteExportTimeout() { this->exportTimeout_ = nullptr;};
    inline int32_t exportTimeout() const { DARABONBA_PTR_GET_DEFAULT(exportTimeout_, 0) };
    inline ListInstancesResponseBodyInstanceListInstance& setExportTimeout(int32_t exportTimeout) { DARABONBA_PTR_SET_VALUE(exportTimeout_, exportTimeout) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList) };
    inline Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList) };
    inline ListInstancesResponseBodyInstanceListInstance& setOwnerIdList(const Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline ListInstancesResponseBodyInstanceListInstance& setOwnerIdList(Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList) };
    inline Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList) };
    inline ListInstancesResponseBodyInstanceListInstance& setOwnerNameList(const Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline ListInstancesResponseBodyInstanceListInstance& setOwnerNameList(Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListInstancesResponseBodyInstanceListInstance& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // queryTimeout Field Functions 
    bool hasQueryTimeout() const { return this->queryTimeout_ != nullptr;};
    void deleteQueryTimeout() { this->queryTimeout_ = nullptr;};
    inline int32_t queryTimeout() const { DARABONBA_PTR_GET_DEFAULT(queryTimeout_, 0) };
    inline ListInstancesResponseBodyInstanceListInstance& setQueryTimeout(int32_t queryTimeout) { DARABONBA_PTR_SET_VALUE(queryTimeout_, queryTimeout) };


    // safeRuleId Field Functions 
    bool hasSafeRuleId() const { return this->safeRuleId_ != nullptr;};
    void deleteSafeRuleId() { this->safeRuleId_ = nullptr;};
    inline string safeRuleId() const { DARABONBA_PTR_GET_DEFAULT(safeRuleId_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setSafeRuleId(string safeRuleId) { DARABONBA_PTR_SET_VALUE(safeRuleId_, safeRuleId) };


    // sellSitd Field Functions 
    bool hasSellSitd() const { return this->sellSitd_ != nullptr;};
    void deleteSellSitd() { this->sellSitd_ = nullptr;};
    inline bool sellSitd() const { DARABONBA_PTR_GET_DEFAULT(sellSitd_, false) };
    inline ListInstancesResponseBodyInstanceListInstance& setSellSitd(bool sellSitd) { DARABONBA_PTR_SET_VALUE(sellSitd_, sellSitd) };


    // sellTrust Field Functions 
    bool hasSellTrust() const { return this->sellTrust_ != nullptr;};
    void deleteSellTrust() { this->sellTrust_ = nullptr;};
    inline string sellTrust() const { DARABONBA_PTR_GET_DEFAULT(sellTrust_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setSellTrust(string sellTrust) { DARABONBA_PTR_SET_VALUE(sellTrust_, sellTrust) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // standardGroup Field Functions 
    bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
    void deleteStandardGroup() { this->standardGroup_ = nullptr;};
    inline const Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup & standardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup) };
    inline Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup standardGroup() { DARABONBA_PTR_GET(standardGroup_, Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup) };
    inline ListInstancesResponseBodyInstanceListInstance& setStandardGroup(const Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
    inline ListInstancesResponseBodyInstanceListInstance& setStandardGroup(Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // useDsql Field Functions 
    bool hasUseDsql() const { return this->useDsql_ != nullptr;};
    void deleteUseDsql() { this->useDsql_ = nullptr;};
    inline int32_t useDsql() const { DARABONBA_PTR_GET_DEFAULT(useDsql_, 0) };
    inline ListInstancesResponseBodyInstanceListInstance& setUseDsql(int32_t useDsql) { DARABONBA_PTR_SET_VALUE(useDsql_, useDsql) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListInstancesResponseBodyInstanceListInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The name of the database link for the database instance.
    std::shared_ptr<string> dataLinkName_ = nullptr;
    // The password that is used to log on to the database instance.
    std::shared_ptr<string> databasePassword_ = nullptr;
    // The account that is used to log on to the database.
    std::shared_ptr<string> databaseUser_ = nullptr;
    // The ID of the database administrator (DBA) of the database instance.
    std::shared_ptr<string> dbaId_ = nullptr;
    // The nickname of the DBA of the instance.
    std::shared_ptr<string> dbaNickName_ = nullptr;
    // Indicates whether the lock-free schema change feature is enabled for the database instance.
    std::shared_ptr<int32_t> ddlOnline_ = nullptr;
    // The ID of the ECS instance on which the database instance is deployed.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The ID of the region in which the database instance resides.
    std::shared_ptr<string> ecsRegion_ = nullptr;
    // The type of the environment to which the database instance belongs. Valid values:
    // 
    // *   **product:** production environment
    // *   **dev**: development environment
    // *   **pre**: pre-release environment
    // *   **test**: test environment
    // *   **sit**: SIT environment
    // *   **uat**: UAT environment
    // *   **pet**: stress testing environment
    // *   **stag:** staging environment
    std::shared_ptr<string> envType_ = nullptr;
    // The timeout period for exporting data from the database instance.
    std::shared_ptr<int32_t> exportTimeout_ = nullptr;
    // The host address that is used to connect to the database instance.
    std::shared_ptr<string> host_ = nullptr;
    // The alias of the database instance.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The source of the database instance.
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The type of the database instance.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IDs of the owners of the database instance.
    std::shared_ptr<Models::ListInstancesResponseBodyInstanceListInstanceOwnerIdList> ownerIdList_ = nullptr;
    // The nicknames of the owners of the database instance.
    std::shared_ptr<Models::ListInstancesResponseBodyInstanceListInstanceOwnerNameList> ownerNameList_ = nullptr;
    // The port number that is used to connect to the database instance.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The timeout period for querying data in the database instance.
    std::shared_ptr<int32_t> queryTimeout_ = nullptr;
    // The ID of the security rule set of the database instance.
    std::shared_ptr<string> safeRuleId_ = nullptr;
    // Indicates whether the sensitive data protection feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> sellSitd_ = nullptr;
    std::shared_ptr<string> sellTrust_ = nullptr;
    // The system ID (SID) of the database instance.
    std::shared_ptr<string> sid_ = nullptr;
    // The control mode of the database instance.
    std::shared_ptr<Models::ListInstancesResponseBodyInstanceListInstanceStandardGroup> standardGroup_ = nullptr;
    // The status of the database instance.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether the cross-database query feature is enabled for the database instance. Valid values:
    // 
    // *   **0**: disabled
    // *   **1:**: enabled
    std::shared_ptr<int32_t> useDsql_ = nullptr;
    // The ID of the VPC to which the database instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
