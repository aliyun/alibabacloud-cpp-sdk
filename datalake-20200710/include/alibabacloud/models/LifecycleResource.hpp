// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIFECYCLERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_LIFECYCLERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LifecycleResourceDatabase.hpp>
#include <alibabacloud/models/DatabaseProfile.hpp>
#include <alibabacloud/models/LifecycleResourceTable.hpp>
#include <alibabacloud/models/TableProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class LifecycleResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LifecycleResource& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(DatabaseProfile, databaseProfile_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(LifecycleRuleBizId, lifecycleRuleBizId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Table, table_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableProfile, tableProfile_);
    };
    friend void from_json(const Darabonba::Json& j, LifecycleResource& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(DatabaseProfile, databaseProfile_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(LifecycleRuleBizId, lifecycleRuleBizId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableProfile, tableProfile_);
    };
    LifecycleResource() = default ;
    LifecycleResource(const LifecycleResource &) = default ;
    LifecycleResource(LifecycleResource &&) = default ;
    LifecycleResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LifecycleResource() = default ;
    LifecycleResource& operator=(const LifecycleResource &) = default ;
    LifecycleResource& operator=(LifecycleResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->catalogId_ == nullptr && return this->database_ == nullptr && return this->databaseName_ == nullptr && return this->databaseProfile_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->lifecycleRuleBizId_ == nullptr && return this->owner_ == nullptr && return this->table_ == nullptr && return this->tableName_ == nullptr && return this->tableProfile_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline LifecycleResource& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline LifecycleResource& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline const LifecycleResourceDatabase & database() const { DARABONBA_PTR_GET_CONST(database_, LifecycleResourceDatabase) };
    inline LifecycleResourceDatabase database() { DARABONBA_PTR_GET(database_, LifecycleResourceDatabase) };
    inline LifecycleResource& setDatabase(const LifecycleResourceDatabase & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
    inline LifecycleResource& setDatabase(LifecycleResourceDatabase && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline LifecycleResource& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // databaseProfile Field Functions 
    bool hasDatabaseProfile() const { return this->databaseProfile_ != nullptr;};
    void deleteDatabaseProfile() { this->databaseProfile_ = nullptr;};
    inline const DatabaseProfile & databaseProfile() const { DARABONBA_PTR_GET_CONST(databaseProfile_, DatabaseProfile) };
    inline DatabaseProfile databaseProfile() { DARABONBA_PTR_GET(databaseProfile_, DatabaseProfile) };
    inline LifecycleResource& setDatabaseProfile(const DatabaseProfile & databaseProfile) { DARABONBA_PTR_SET_VALUE(databaseProfile_, databaseProfile) };
    inline LifecycleResource& setDatabaseProfile(DatabaseProfile && databaseProfile) { DARABONBA_PTR_SET_RVALUE(databaseProfile_, databaseProfile) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline LifecycleResource& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // lifecycleRuleBizId Field Functions 
    bool hasLifecycleRuleBizId() const { return this->lifecycleRuleBizId_ != nullptr;};
    void deleteLifecycleRuleBizId() { this->lifecycleRuleBizId_ = nullptr;};
    inline string lifecycleRuleBizId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleRuleBizId_, "") };
    inline LifecycleResource& setLifecycleRuleBizId(string lifecycleRuleBizId) { DARABONBA_PTR_SET_VALUE(lifecycleRuleBizId_, lifecycleRuleBizId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline int64_t owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, 0L) };
    inline LifecycleResource& setOwner(int64_t owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const LifecycleResourceTable & table() const { DARABONBA_PTR_GET_CONST(table_, LifecycleResourceTable) };
    inline LifecycleResourceTable table() { DARABONBA_PTR_GET(table_, LifecycleResourceTable) };
    inline LifecycleResource& setTable(const LifecycleResourceTable & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline LifecycleResource& setTable(LifecycleResourceTable && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline LifecycleResource& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableProfile Field Functions 
    bool hasTableProfile() const { return this->tableProfile_ != nullptr;};
    void deleteTableProfile() { this->tableProfile_ = nullptr;};
    inline const TableProfile & tableProfile() const { DARABONBA_PTR_GET_CONST(tableProfile_, TableProfile) };
    inline TableProfile tableProfile() { DARABONBA_PTR_GET(tableProfile_, TableProfile) };
    inline LifecycleResource& setTableProfile(const TableProfile & tableProfile) { DARABONBA_PTR_SET_VALUE(tableProfile_, tableProfile) };
    inline LifecycleResource& setTableProfile(TableProfile && tableProfile) { DARABONBA_PTR_SET_RVALUE(tableProfile_, tableProfile) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<LifecycleResourceDatabase> database_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<DatabaseProfile> databaseProfile_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> lifecycleRuleBizId_ = nullptr;
    std::shared_ptr<int64_t> owner_ = nullptr;
    std::shared_ptr<LifecycleResourceTable> table_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<TableProfile> tableProfile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
