// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDBTOPOLOGYINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDBTOPOLOGYINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_TO_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceResourceId, instanceResourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSource, instanceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList() = default ;
    GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList(const GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList &) = default ;
    GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList(GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList &&) = default ;
    GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList() = default ;
    GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& operator=(const GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList &) = default ;
    GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& operator=(GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dbId_ != nullptr && this->dbType_ != nullptr && this->envType_ != nullptr && this->instanceId_ != nullptr && this->instanceResourceId_ != nullptr
        && this->instanceSource_ != nullptr && this->regionId_ != nullptr && this->schemaName_ != nullptr && this->searchName_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceResourceId Field Functions 
    bool hasInstanceResourceId() const { return this->instanceResourceId_ != nullptr;};
    void deleteInstanceResourceId() { this->instanceResourceId_ = nullptr;};
    inline string instanceResourceId() const { DARABONBA_PTR_GET_DEFAULT(instanceResourceId_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setInstanceResourceId(string instanceResourceId) { DARABONBA_PTR_SET_VALUE(instanceResourceId_, instanceResourceId) };


    // instanceSource Field Functions 
    bool hasInstanceSource() const { return this->instanceSource_ != nullptr;};
    void deleteInstanceSource() { this->instanceSource_ = nullptr;};
    inline string instanceSource() const { DARABONBA_PTR_GET_DEFAULT(instanceSource_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setInstanceSource(string instanceSource) { DARABONBA_PTR_SET_VALUE(instanceSource_, instanceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetDBTopologyResponseBodyDBTopologyDBTopologyInfoList& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The name of the catalog to which the database belongs.
    // 
    // > If the database is a PostgreSQL database, the value of this parameter is the name of the database.
    std::shared_ptr<string> catalogName_ = nullptr;
    // The ID of the database for which the schema design is executed.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the database belongs. Valid values:
    // 
    // *   product: production environment
    // *   dev: development environment
    // *   pre: staging environment
    // *   test: test environment
    // *   sit: SIT environment
    // *   uat: user acceptance testing (UAT) environment
    // *   pet: stress testing environment
    // *   stag: STAG environment
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the instance. The valid value is returned if you call the ListInstances operation. The instance ID is not the ID of the RDS instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Instance resource ID.
    std::shared_ptr<string> instanceResourceId_ = nullptr;
    // The source of the database instance. Valid values:
    // 
    // *   **PUBLIC_OWN:** a self-managed database instance that is deployed on the Internet
    // *   **RDS:** an ApsaraDB RDS instance
    // *   **ECS_OWN:** a self-managed database that is deployed on an Elastic Compute Service (ECS) instance
    // *   **VPC_IDC:** a self-managed database instance that is deployed in a data center connected over a virtual private cloud (VPC)
    std::shared_ptr<string> instanceSource_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the logical database.
    // 
    // > If the database is a PostgreSQL database, the value of this parameter is the name of the database schema.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the saved search.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
