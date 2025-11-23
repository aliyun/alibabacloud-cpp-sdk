// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODYSEARCHTABLELISTSEARCHTABLE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTABLERESPONSEBODYSEARCHTABLELISTSEARCHTABLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchTableResponseBodySearchTableListSearchTableOwnerIdList.hpp>
#include <alibabacloud/models/SearchTableResponseBodySearchTableListSearchTableOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchTableResponseBodySearchTableListSearchTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTableResponseBodySearchTableListSearchTable& obj) { 
      DARABONBA_PTR_TO_JSON(DBSearchName, DBSearchName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchemaName, tableSchemaName_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTableResponseBodySearchTableListSearchTable& obj) { 
      DARABONBA_PTR_FROM_JSON(DBSearchName, DBSearchName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchemaName, tableSchemaName_);
    };
    SearchTableResponseBodySearchTableListSearchTable() = default ;
    SearchTableResponseBodySearchTableListSearchTable(const SearchTableResponseBodySearchTableListSearchTable &) = default ;
    SearchTableResponseBodySearchTableListSearchTable(SearchTableResponseBodySearchTableListSearchTable &&) = default ;
    SearchTableResponseBodySearchTableListSearchTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTableResponseBodySearchTableListSearchTable() = default ;
    SearchTableResponseBodySearchTableListSearchTable& operator=(const SearchTableResponseBodySearchTableListSearchTable &) = default ;
    SearchTableResponseBodySearchTableListSearchTable& operator=(SearchTableResponseBodySearchTableListSearchTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBSearchName_ == nullptr
        && return this->databaseId_ == nullptr && return this->dbName_ == nullptr && return this->dbType_ == nullptr && return this->description_ == nullptr && return this->encoding_ == nullptr
        && return this->engine_ == nullptr && return this->envType_ == nullptr && return this->logic_ == nullptr && return this->ownerIdList_ == nullptr && return this->ownerNameList_ == nullptr
        && return this->tableGuid_ == nullptr && return this->tableId_ == nullptr && return this->tableName_ == nullptr && return this->tableSchemaName_ == nullptr; };
    // DBSearchName Field Functions 
    bool hasDBSearchName() const { return this->DBSearchName_ != nullptr;};
    void deleteDBSearchName() { this->DBSearchName_ = nullptr;};
    inline string DBSearchName() const { DARABONBA_PTR_GET_DEFAULT(DBSearchName_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setDBSearchName(string DBSearchName) { DARABONBA_PTR_SET_VALUE(DBSearchName_, DBSearchName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline SearchTableResponseBodySearchTableListSearchTable& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList) };
    inline Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList) };
    inline SearchTableResponseBodySearchTableListSearchTable& setOwnerIdList(const Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline SearchTableResponseBodySearchTableListSearchTable& setOwnerIdList(Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList) };
    inline Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList) };
    inline SearchTableResponseBodySearchTableListSearchTable& setOwnerNameList(const Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline SearchTableResponseBodySearchTableListSearchTable& setOwnerNameList(Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchemaName Field Functions 
    bool hasTableSchemaName() const { return this->tableSchemaName_ != nullptr;};
    void deleteTableSchemaName() { this->tableSchemaName_ = nullptr;};
    inline string tableSchemaName() const { DARABONBA_PTR_GET_DEFAULT(tableSchemaName_, "") };
    inline SearchTableResponseBodySearchTableListSearchTable& setTableSchemaName(string tableSchemaName) { DARABONBA_PTR_SET_VALUE(tableSchemaName_, tableSchemaName) };


  protected:
    // The name that is used to search for the database to which the table belongs.
    std::shared_ptr<string> DBSearchName_ = nullptr;
    // The ID of the database to which the table belongs.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   **MySQL**
    // *   **SQLServer**
    // *   **PostgreSQL**
    // *   **Oracle**
    // *   **DRDS**
    // *   **OceanBase**
    // *   **Mongo**
    // *   **Redis**
    std::shared_ptr<string> dbType_ = nullptr;
    // The description of the table.
    std::shared_ptr<string> description_ = nullptr;
    // The encoding format of the table.
    std::shared_ptr<string> encoding_ = nullptr;
    // The engine of the table.
    std::shared_ptr<string> engine_ = nullptr;
    // The type of the environment to which the database belongs.
    std::shared_ptr<string> envType_ = nullptr;
    // Indicates whether the table is a logical table. Valid values:
    // 
    // *   **true**: The table is a logical table.
    // *   **false**: The table is not a logical table.
    std::shared_ptr<bool> logic_ = nullptr;
    // The IDs of the table owners.
    std::shared_ptr<Models::SearchTableResponseBodySearchTableListSearchTableOwnerIdList> ownerIdList_ = nullptr;
    // The nicknames of the table owners.
    std::shared_ptr<Models::SearchTableResponseBodySearchTableListSearchTableOwnerNameList> ownerNameList_ = nullptr;
    // The GUID of the table.
    std::shared_ptr<string> tableGuid_ = nullptr;
    // The ID of the table.
    std::shared_ptr<string> tableId_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The name of the database to which the table belongs.
    std::shared_ptr<string> tableSchemaName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
