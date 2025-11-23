// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODYTABLETOPOLOGYTABLETOPOLOGYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLETOPOLOGYRESPONSEBODYTABLETOPOLOGYTABLETOPOLOGYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbSearchName, dbSearchName_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TableCount, tableCount_);
      DARABONBA_PTR_TO_JSON(TableNameExpr, tableNameExpr_);
      DARABONBA_PTR_TO_JSON(TableNameList, tableNameList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbSearchName, dbSearchName_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TableCount, tableCount_);
      DARABONBA_PTR_FROM_JSON(TableNameExpr, tableNameExpr_);
      DARABONBA_PTR_FROM_JSON(TableNameList, tableNameList_);
    };
    GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList() = default ;
    GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList(const GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList &) = default ;
    GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList(GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList &&) = default ;
    GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList() = default ;
    GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& operator=(const GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList &) = default ;
    GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& operator=(GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->dbName_ == nullptr && return this->dbSearchName_ == nullptr && return this->dbType_ == nullptr && return this->instanceId_ == nullptr && return this->instanceResourceId_ == nullptr
        && return this->instanceSource_ == nullptr && return this->regionId_ == nullptr && return this->tableCount_ == nullptr && return this->tableNameExpr_ == nullptr && return this->tableNameList_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbSearchName Field Functions 
    bool hasDbSearchName() const { return this->dbSearchName_ != nullptr;};
    void deleteDbSearchName() { this->dbSearchName_ = nullptr;};
    inline string dbSearchName() const { DARABONBA_PTR_GET_DEFAULT(dbSearchName_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setDbSearchName(string dbSearchName) { DARABONBA_PTR_SET_VALUE(dbSearchName_, dbSearchName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceResourceId Field Functions 
    bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
    void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
    inline string instanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tableCount Field Functions 
    bool hasTableCount() const { return this->tableCount_ != nullptr;};
    void deleteTableCount() { this->tableCount_ = nullptr;};
    inline int64_t tableCount() const { DARABONBA_PTR_GET_DEFAULT(tableCount_, 0L) };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setTableCount(int64_t tableCount) { DARABONBA_PTR_SET_VALUE(tableCount_, tableCount) };


    // tableNameExpr Field Functions 
    bool hasTableNameExpr() const { return this->tableNameExpr_ != nullptr;};
    void deleteTableNameExpr() { this->tableNameExpr_ = nullptr;};
    inline string tableNameExpr() const { DARABONBA_PTR_GET_DEFAULT(tableNameExpr_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setTableNameExpr(string tableNameExpr) { DARABONBA_PTR_SET_VALUE(tableNameExpr_, tableNameExpr) };


    // tableNameList Field Functions 
    bool hasTableNameList() const { return this->tableNameList_ != nullptr;};
    void deleteTableNameList() { this->tableNameList_ = nullptr;};
    inline string tableNameList() const { DARABONBA_PTR_GET_DEFAULT(tableNameList_, "") };
    inline GetTableTopologyResponseBodyTableTopologyTableTopologyInfoList& setTableNameList(string tableNameList) { DARABONBA_PTR_SET_VALUE(tableNameList_, tableNameList) };


  protected:
    // The ID of the physical database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The name that is used to search for the database.
    // > We recommend that you do not use this parameter for business development. The format of the parameter value may be modified in later versions.
    std::shared_ptr<string> dbSearchName_ = nullptr;
    // The database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The ID of the instance to which the physical database belongs.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The ID of the resource related to the instance. The resource corresponds with the database instance type returned in the InstanceSource parameter.
    // 
    // *   **RDS**:The ID of the ApsaraDB RDS instance.
    // *   **ECS_OWN**: The ID of the Elastic Compute Service (ECS) instance.
    // *   **PUBLIC_OWN**: This parameter is left empty for self-managed database instances that are connected over the Internet.
    // *   **VPC_ID**:The ID of the virtual private cloud (VPC).
    // *   **GATEWAY**: The ID of the database gateway.
    std::shared_ptr<string> instanceResourceId_ = nullptr;
    // The type of the database instance. Valid values:
    // 
    // *   **RDS**: an ApsaraDB RDS instance.
    // *   **ECS_OWN**: a self-managed database that is deployed on an ECS instance
    // *   **PUBLIC_OWN**: a self-managed database instance that is connected over the Internet.
    // *   **VPC_ID**: a self-managed database instance in a VPC that is connected over Express Connect circuits.
    // *   **GATEWAY**: a database instance connected by using a database gateway.
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The region ID of the instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of tables.
    std::shared_ptr<int64_t> tableCount_ = nullptr;
    // The expression of the names of logical tables.
    // 
    // **
    // 
    // **Description** This parameter is not returned for physical tables.
    std::shared_ptr<string> tableNameExpr_ = nullptr;
    // The names of tables.
    // 
    // > The table names are separated by commas (,).
    std::shared_ptr<string> tableNameList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
