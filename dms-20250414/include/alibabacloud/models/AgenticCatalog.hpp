// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AGENTICCATALOG_HPP_
#define ALIBABACLOUD_MODELS_AGENTICCATALOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class AgenticCatalog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AgenticCatalog& obj) { 
      DARABONBA_ANY_TO_JSON(CatalogBizAttrs, catalogBizAttrs_);
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
    };
    friend void from_json(const Darabonba::Json& j, AgenticCatalog& obj) { 
      DARABONBA_ANY_FROM_JSON(CatalogBizAttrs, catalogBizAttrs_);
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(DataSourceUuid, dataSourceUuid_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
    };
    AgenticCatalog() = default ;
    AgenticCatalog(const AgenticCatalog &) = default ;
    AgenticCatalog(AgenticCatalog &&) = default ;
    AgenticCatalog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AgenticCatalog() = default ;
    AgenticCatalog& operator=(const AgenticCatalog &) = default ;
    AgenticCatalog& operator=(AgenticCatalog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogBizAttrs_ == nullptr
        && this->catalogType_ == nullptr && this->catalogUuid_ == nullptr && this->dataSourceUuid_ == nullptr && this->dbType_ == nullptr && this->description_ == nullptr
        && this->name_ == nullptr && this->properties_ == nullptr && this->regionId_ == nullptr && this->state_ == nullptr && this->storageLocation_ == nullptr; };
    // catalogBizAttrs Field Functions 
    bool hasCatalogBizAttrs() const { return this->catalogBizAttrs_ != nullptr;};
    void deleteCatalogBizAttrs() { this->catalogBizAttrs_ = nullptr;};
    inline     const Darabonba::Json & getCatalogBizAttrs() const { DARABONBA_GET(catalogBizAttrs_) };
    Darabonba::Json & getCatalogBizAttrs() { DARABONBA_GET(catalogBizAttrs_) };
    inline AgenticCatalog& setCatalogBizAttrs(const Darabonba::Json & catalogBizAttrs) { DARABONBA_SET_VALUE(catalogBizAttrs_, catalogBizAttrs) };
    inline AgenticCatalog& setCatalogBizAttrs(Darabonba::Json && catalogBizAttrs) { DARABONBA_SET_RVALUE(catalogBizAttrs_, catalogBizAttrs) };


    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string getCatalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline AgenticCatalog& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline AgenticCatalog& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // dataSourceUuid Field Functions 
    bool hasDataSourceUuid() const { return this->dataSourceUuid_ != nullptr;};
    void deleteDataSourceUuid() { this->dataSourceUuid_ = nullptr;};
    inline string getDataSourceUuid() const { DARABONBA_PTR_GET_DEFAULT(dataSourceUuid_, "") };
    inline AgenticCatalog& setDataSourceUuid(string dataSourceUuid) { DARABONBA_PTR_SET_VALUE(dataSourceUuid_, dataSourceUuid) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline AgenticCatalog& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AgenticCatalog& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AgenticCatalog& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
    inline AgenticCatalog& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline AgenticCatalog& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AgenticCatalog& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int32_t getState() const { DARABONBA_PTR_GET_DEFAULT(state_, 0) };
    inline AgenticCatalog& setState(int32_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string getStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline AgenticCatalog& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


  protected:
    Darabonba::Json catalogBizAttrs_ {};
    shared_ptr<string> catalogType_ {};
    shared_ptr<string> catalogUuid_ {};
    shared_ptr<string> dataSourceUuid_ {};
    shared_ptr<string> dbType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> name_ {};
    Darabonba::Json properties_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<int32_t> state_ {};
    shared_ptr<string> storageLocation_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
