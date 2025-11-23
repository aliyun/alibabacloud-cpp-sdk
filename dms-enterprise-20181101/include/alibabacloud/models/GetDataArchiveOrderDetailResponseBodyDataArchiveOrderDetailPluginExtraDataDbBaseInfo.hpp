// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATADBBASEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODYDATAARCHIVEORDERDETAILPLUGINEXTRADATADBBASEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(AlterTimeout, alterTimeout_);
      DARABONBA_PTR_TO_JSON(AssetControl, assetControl_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(ClusterNode, clusterNode_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(DbaName, dbaName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Follow, follow_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Idc, idc_);
      DARABONBA_PTR_TO_JSON(IdcTitle, idcTitle_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(LastSyncTime, lastSyncTime_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_TO_JSON(OwnerNames, ownerNames_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TnsName, tnsName_);
      DARABONBA_PTR_TO_JSON(UnitType, unitType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(AlterTimeout, alterTimeout_);
      DARABONBA_PTR_FROM_JSON(AssetControl, assetControl_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(ClusterNode, clusterNode_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(DbaName, dbaName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Follow, follow_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Idc, idc_);
      DARABONBA_PTR_FROM_JSON(IdcTitle, idcTitle_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(LastSyncTime, lastSyncTime_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_FROM_JSON(OwnerNames, ownerNames_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(StandardGroup, standardGroup_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TnsName, tnsName_);
      DARABONBA_PTR_FROM_JSON(UnitType, unitType_);
    };
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo &&) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo() = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& operator=(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo &) = default ;
    GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& operator=(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->alterTimeout_ == nullptr && return this->assetControl_ == nullptr && return this->catalogName_ == nullptr && return this->clusterNode_ == nullptr && return this->dbId_ == nullptr
        && return this->dbType_ == nullptr && return this->dbaId_ == nullptr && return this->dbaName_ == nullptr && return this->description_ == nullptr && return this->encoding_ == nullptr
        && return this->envType_ == nullptr && return this->follow_ == nullptr && return this->host_ == nullptr && return this->idc_ == nullptr && return this->idcTitle_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceSource_ == nullptr && return this->lastSyncTime_ == nullptr && return this->level_ == nullptr && return this->logic_ == nullptr
        && return this->ownerIds_ == nullptr && return this->ownerNames_ == nullptr && return this->port_ == nullptr && return this->schemaName_ == nullptr && return this->searchName_ == nullptr
        && return this->standardGroup_ == nullptr && return this->state_ == nullptr && return this->tableCount_ == nullptr && return this->tnsName_ == nullptr && return this->unitType_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // alterTimeout Field Functions 
    bool hasAlterTimeout() const { return this->alterTimeout_ != nullptr;};
    void deleteAlterTimeout() { this->alterTimeout_ = nullptr;};
    inline int64_t alterTimeout() const { DARABONBA_PTR_GET_DEFAULT(alterTimeout_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setAlterTimeout(int64_t alterTimeout) { DARABONBA_PTR_SET_VALUE(alterTimeout_, alterTimeout) };


    // assetControl Field Functions 
    bool hasAssetControl() const { return this->assetControl_ != nullptr;};
    void deleteAssetControl() { this->assetControl_ = nullptr;};
    inline bool assetControl() const { DARABONBA_PTR_GET_DEFAULT(assetControl_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setAssetControl(bool assetControl) { DARABONBA_PTR_SET_VALUE(assetControl_, assetControl) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // clusterNode Field Functions 
    bool hasClusterNode() const { return this->clusterNode_ != nullptr;};
    void deleteClusterNode() { this->clusterNode_ = nullptr;};
    inline string clusterNode() const { DARABONBA_PTR_GET_DEFAULT(clusterNode_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setClusterNode(string clusterNode) { DARABONBA_PTR_SET_VALUE(clusterNode_, clusterNode) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline int64_t dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setDbaId(int64_t dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // dbaName Field Functions 
    bool hasDbaName() const { return this->dbaName_ != nullptr;};
    void deleteDbaName() { this->dbaName_ = nullptr;};
    inline string dbaName() const { DARABONBA_PTR_GET_DEFAULT(dbaName_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setDbaName(string dbaName) { DARABONBA_PTR_SET_VALUE(dbaName_, dbaName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // follow Field Functions 
    bool hasFollow() const { return this->follow_ != nullptr;};
    void deleteFollow() { this->follow_ = nullptr;};
    inline bool follow() const { DARABONBA_PTR_GET_DEFAULT(follow_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setFollow(bool follow) { DARABONBA_PTR_SET_VALUE(follow_, follow) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // idc Field Functions 
    bool hasIdc() const { return this->idc_ != nullptr;};
    void deleteIdc() { this->idc_ = nullptr;};
    inline string idc() const { DARABONBA_PTR_GET_DEFAULT(idc_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setIdc(string idc) { DARABONBA_PTR_SET_VALUE(idc_, idc) };


    // idcTitle Field Functions 
    bool hasIdcTitle() const { return this->idcTitle_ != nullptr;};
    void deleteIdcTitle() { this->idcTitle_ = nullptr;};
    inline string idcTitle() const { DARABONBA_PTR_GET_DEFAULT(idcTitle_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setIdcTitle(string idcTitle) { DARABONBA_PTR_SET_VALUE(idcTitle_, idcTitle) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // lastSyncTime Field Functions 
    bool hasLastSyncTime() const { return this->lastSyncTime_ != nullptr;};
    void deleteLastSyncTime() { this->lastSyncTime_ = nullptr;};
    inline string lastSyncTime() const { DARABONBA_PTR_GET_DEFAULT(lastSyncTime_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setLastSyncTime(string lastSyncTime) { DARABONBA_PTR_SET_VALUE(lastSyncTime_, lastSyncTime) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // ownerIds Field Functions 
    bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
    void deleteOwnerIds() { this->ownerIds_ = nullptr;};
    inline const vector<int64_t> & ownerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
    inline vector<int64_t> ownerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


    // ownerNames Field Functions 
    bool hasOwnerNames() const { return this->ownerNames_ != nullptr;};
    void deleteOwnerNames() { this->ownerNames_ = nullptr;};
    inline const vector<string> & ownerNames() const { DARABONBA_PTR_GET_CONST(ownerNames_, vector<string>) };
    inline vector<string> ownerNames() { DARABONBA_PTR_GET(ownerNames_, vector<string>) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setOwnerNames(const vector<string> & ownerNames) { DARABONBA_PTR_SET_VALUE(ownerNames_, ownerNames) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setOwnerNames(vector<string> && ownerNames) { DARABONBA_PTR_SET_RVALUE(ownerNames_, ownerNames) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // standardGroup Field Functions 
    bool hasStandardGroup() const { return this->standardGroup_ != nullptr;};
    void deleteStandardGroup() { this->standardGroup_ = nullptr;};
    inline const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup & standardGroup() const { DARABONBA_PTR_GET_CONST(standardGroup_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup) };
    inline Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup standardGroup() { DARABONBA_PTR_GET(standardGroup_, Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setStandardGroup(const Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup & standardGroup) { DARABONBA_PTR_SET_VALUE(standardGroup_, standardGroup) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setStandardGroup(Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup && standardGroup) { DARABONBA_PTR_SET_RVALUE(standardGroup_, standardGroup) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int64_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // tnsName Field Functions 
    bool hasTnsName() const { return this->tnsName_ != nullptr;};
    void deleteTnsName() { this->tnsName_ = nullptr;};
    inline string tnsName() const { DARABONBA_PTR_GET_DEFAULT(tnsName_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setTnsName(string tnsName) { DARABONBA_PTR_SET_VALUE(tnsName_, tnsName) };


    // unitType Field Functions 
    bool hasUnitType() const { return this->unitType_ != nullptr;};
    void deleteUnitType() { this->unitType_ = nullptr;};
    inline string unitType() const { DARABONBA_PTR_GET_DEFAULT(unitType_, "") };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfo& setUnitType(string unitType) { DARABONBA_PTR_SET_VALUE(unitType_, unitType) };


  protected:
    // The alias of the database instance.
    std::shared_ptr<string> alias_ = nullptr;
    // The timeout period of queries on the database.
    std::shared_ptr<int64_t> alterTimeout_ = nullptr;
    // Indicates whether access control is enabled for data assets. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> assetControl_ = nullptr;
    // The name of the instance in the instance list.
    std::shared_ptr<string> catalogName_ = nullptr;
    // Indicates whether the instance is added to the DMS whitelist.
    std::shared_ptr<string> clusterNode_ = nullptr;
    // The ID of the database. You can call the [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation to query the ID of the database.
    // 
    // >  You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to query the ID of a physical database or the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to query the ID of a logical database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The type of the database. For information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The ID of the database administrator (DBA) of the instance.
    std::shared_ptr<int64_t> dbaId_ = nullptr;
    // The nickname of the DBA of the instance.
    std::shared_ptr<string> dbaName_ = nullptr;
    // The complete endpoint of the database.
    std::shared_ptr<string> description_ = nullptr;
    // The encoding format of the database.
    std::shared_ptr<string> encoding_ = nullptr;
    // The type of the environment to which the database belongs. Valid values:
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
    // Indicates whether the instance needs special attention. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> follow_ = nullptr;
    // The endpoint that is used to connect to the database.
    std::shared_ptr<string> host_ = nullptr;
    // The region in which the database instance resides.
    std::shared_ptr<string> idc_ = nullptr;
    // The name of the region in which the database instance resides.
    std::shared_ptr<string> idcTitle_ = nullptr;
    // The ID of the instance to which the database belongs.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The source of the database instance.Valid values:
    // 
    // *   **RDS**: an ApsaraDB RDS instance.
    // *   **ECS_OWN**: a self-managed database deployed on an Elastic Compute Service (ECS) instance.
    // *   **PUBLIC_OWN**: a self-managed database instance that is connected over the Internet.
    // *   **VPC_ID**: a self-managed database instance in a virtual private cloud (VPC) that is connected over Express Connect circuits.
    // *   **GATEWAY**: a database instance connected by using a database gateway.
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The time when the database information was last obtained.
    std::shared_ptr<string> lastSyncTime_ = nullptr;
    // The instance level.
    std::shared_ptr<string> level_ = nullptr;
    // Indicates whether the database is logical. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> logic_ = nullptr;
    // The IDs of the owners of the databases, which are stored as an array. You can call the [GetUser](https://help.aliyun.com/document_detail/147098.html) or [ListUsers](https://help.aliyun.com/document_detail/141938.html) operation to query the IDs of the owners.
    // 
    // >  The value of OwnerIds is the same as the value of UserId
    std::shared_ptr<vector<int64_t>> ownerIds_ = nullptr;
    // The usernames of the database owners.
    std::shared_ptr<vector<string>> ownerNames_ = nullptr;
    // The port that is used to connect to the database.
    std::shared_ptr<int64_t> port_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The details of the control mode of the instance.
    std::shared_ptr<Models::GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetailPluginExtraDataDbBaseInfoStandardGroup> standardGroup_ = nullptr;
    // The status of the database. Valid values:
    // 
    // *   **NORMAL**: The database is running as expected.
    // *   **DISABLE**: The database is disabled.
    // *   **OFFLINE**: The database is unpublished.
    // *   **NOT_EXIST**: The database does not exist.
    std::shared_ptr<string> state_ = nullptr;
    // The number of tables.
    std::shared_ptr<int64_t> tableCount_ = nullptr;
    // The name of TNS.
    std::shared_ptr<string> tnsName_ = nullptr;
    // The unit type.
    std::shared_ptr<string> unitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
