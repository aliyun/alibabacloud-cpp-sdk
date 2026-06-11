// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICDATABASE_HPP_
#define ALIBABACLOUD_MODELS_AGENTICDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AgenticDatabaseEngineMeta.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_ANY_TO_JSON(DatabaseBizAttrs, databaseBizAttrs_);
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EngineMeta, engineMeta_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_ANY_FROM_JSON(DatabaseBizAttrs, databaseBizAttrs_);
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EngineMeta, engineMeta_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(QualifiedName, qualifiedName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
    };
    AgenticDatabase() = default ;
    AgenticDatabase(const AgenticDatabase &) = default ;
    AgenticDatabase(AgenticDatabase &&) = default ;
    AgenticDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticDatabase() = default ;
    AgenticDatabase& operator=(const AgenticDatabase &) = default ;
    AgenticDatabase& operator=(AgenticDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->catalogType_ == nullptr && this->catalogUuid_ == nullptr && this->dataSourceType_ == nullptr && this->databaseBizAttrs_ == nullptr && this->databaseUuid_ == nullptr
        && this->description_ == nullptr && this->engineMeta_ == nullptr && this->name_ == nullptr && this->properties_ == nullptr && this->qualifiedName_ == nullptr
        && this->regionId_ == nullptr && this->searchName_ == nullptr && this->state_ == nullptr && this->storageLocation_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline AgenticDatabase& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string getCatalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline AgenticDatabase& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline AgenticDatabase& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline AgenticDatabase& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseBizAttrs Field Functions 
    bool hasDatabaseBizAttrs() const { return this->databaseBizAttrs_ != nullptr;};
    void deleteDatabaseBizAttrs() { this->databaseBizAttrs_ = nullptr;};
    inline     const Darabonba::Json & getDatabaseBizAttrs() const { DARABONBA_GET(databaseBizAttrs_) };
    Darabonba::Json & getDatabaseBizAttrs() { DARABONBA_GET(databaseBizAttrs_) };
    inline AgenticDatabase& setDatabaseBizAttrs(const Darabonba::Json & databaseBizAttrs) { DARABONBA_SET_VALUE(databaseBizAttrs_, databaseBizAttrs) };
    inline AgenticDatabase& setDatabaseBizAttrs(Darabonba::Json && databaseBizAttrs) { DARABONBA_SET_RVALUE(databaseBizAttrs_, databaseBizAttrs) };


    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline AgenticDatabase& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgenticDatabase& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // engineMeta Field Functions 
    bool hasEngineMeta() const { return this->engineMeta_ != nullptr;};
    void deleteEngineMeta() { this->engineMeta_ = nullptr;};
    inline const AgenticDatabaseEngineMeta & getEngineMeta() const { DARABONBA_PTR_GET_CONST(engineMeta_, AgenticDatabaseEngineMeta) };
    inline AgenticDatabaseEngineMeta getEngineMeta() { DARABONBA_PTR_GET(engineMeta_, AgenticDatabaseEngineMeta) };
    inline AgenticDatabase& setEngineMeta(const AgenticDatabaseEngineMeta & engineMeta) { DARABONBA_PTR_SET_VALUE(engineMeta_, engineMeta) };
    inline AgenticDatabase& setEngineMeta(AgenticDatabaseEngineMeta && engineMeta) { DARABONBA_PTR_SET_RVALUE(engineMeta_, engineMeta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AgenticDatabase& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
    inline AgenticDatabase& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline AgenticDatabase& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // qualifiedName Field Functions 
    bool hasQualifiedName() const { return this->qualifiedName_ != nullptr;};
    void deleteQualifiedName() { this->qualifiedName_ = nullptr;};
    inline string getQualifiedName() const { DARABONBA_PTR_GET_DEFAULT(qualifiedName_, "") };
    inline AgenticDatabase& setQualifiedName(string qualifiedName) { DARABONBA_PTR_SET_VALUE(qualifiedName_, qualifiedName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AgenticDatabase& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string getSearchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline AgenticDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline AgenticDatabase& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline AgenticDatabase& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


  protected:
    // The name of the catalog.
    shared_ptr<string> catalogName_ {};
    // The type of the catalog.
    shared_ptr<string> catalogType_ {};
    // The unique identifier of the catalog.
    shared_ptr<string> catalogUuid_ {};
    // The data source type, such as `MySQL` or `PostgreSQL`.
    shared_ptr<string> dataSourceType_ {};
    // The database\\"s business attributes.
    Darabonba::Json databaseBizAttrs_ {};
    // The unique identifier of the database.
    shared_ptr<string> databaseUuid_ {};
    // The database description.
    shared_ptr<string> description_ {};
    // The metadata for the database engine.
    shared_ptr<AgenticDatabaseEngineMeta> engineMeta_ {};
    // The name of the database.
    shared_ptr<string> name_ {};
    // The database\\"s extended properties.
    Darabonba::Json properties_ {};
    // The fully qualified name of the database.
    shared_ptr<string> qualifiedName_ {};
    // The region ID of the database.
    shared_ptr<string> regionId_ {};
    // The name used to search the database.
    shared_ptr<string> searchName_ {};
    // The database state.
    shared_ptr<int32_t> state_ {};
    // The database storage location.
    shared_ptr<string> storageLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
