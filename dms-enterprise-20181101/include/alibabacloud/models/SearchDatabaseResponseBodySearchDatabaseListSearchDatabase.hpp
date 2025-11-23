// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODYSEARCHDATABASELISTSEARCHDATABASE_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATABASERESPONSEBODYSEARCHDATABASELISTSEARCHDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList.hpp>
#include <alibabacloud/models/SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class SearchDatabaseResponseBodySearchDatabaseListSearchDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatalinkName, datalinkName_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatalinkName, datalinkName_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
    };
    SearchDatabaseResponseBodySearchDatabaseListSearchDatabase() = default ;
    SearchDatabaseResponseBodySearchDatabaseListSearchDatabase(const SearchDatabaseResponseBodySearchDatabaseListSearchDatabase &) = default ;
    SearchDatabaseResponseBodySearchDatabaseListSearchDatabase(SearchDatabaseResponseBodySearchDatabaseListSearchDatabase &&) = default ;
    SearchDatabaseResponseBodySearchDatabaseListSearchDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatabaseResponseBodySearchDatabaseListSearchDatabase() = default ;
    SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& operator=(const SearchDatabaseResponseBodySearchDatabaseListSearchDatabase &) = default ;
    SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& operator=(SearchDatabaseResponseBodySearchDatabaseListSearchDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->catalogName_ == nullptr && return this->databaseId_ == nullptr && return this->datalinkName_ == nullptr && return this->dbType_ == nullptr && return this->dbaId_ == nullptr
        && return this->encoding_ == nullptr && return this->envType_ == nullptr && return this->host_ == nullptr && return this->logic_ == nullptr && return this->ownerIdList_ == nullptr
        && return this->ownerNameList_ == nullptr && return this->port_ == nullptr && return this->schemaName_ == nullptr && return this->searchName_ == nullptr && return this->sid_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // datalinkName Field Functions 
    bool hasDatalinkName() const { return this->datalinkName_ != nullptr;};
    void deleteDatalinkName() { this->datalinkName_ = nullptr;};
    inline string datalinkName() const { DARABONBA_PTR_GET_DEFAULT(datalinkName_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setDatalinkName(string datalinkName) { DARABONBA_PTR_SET_VALUE(datalinkName_, datalinkName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline string dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList) };
    inline Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList) };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setOwnerIdList(const Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setOwnerIdList(Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList) };
    inline Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList) };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setOwnerNameList(const Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setOwnerNameList(Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline SearchDatabaseResponseBodySearchDatabaseListSearchDatabase& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


  protected:
    // The alias of the database.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of the catalog to which the database belongs.
    // 
    // > If the type of the database engine is PostgreSQL, the name of the database is displayed.
    std::shared_ptr<string> catalogName_ = nullptr;
    // The ID of the database.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The name of the data link for cross-database queries.
    std::shared_ptr<string> datalinkName_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The ID of the user who assumes the database administrator (DBA) role.
    std::shared_ptr<string> dbaId_ = nullptr;
    // The encoding method of the database.
    std::shared_ptr<string> encoding_ = nullptr;
    // The environment type of the database. For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // The endpoint of the instance in which the database resides.
    std::shared_ptr<string> host_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is not a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The IDs of the owners of the databases.
    std::shared_ptr<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerIdList> ownerIdList_ = nullptr;
    // The nicknames of the database owners.
    std::shared_ptr<Models::SearchDatabaseResponseBodySearchDatabaseListSearchDatabaseOwnerNameList> ownerNameList_ = nullptr;
    // The port of the instance in which the database resides.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The system ID (SID) of the instance in which the database resides.
    std::shared_ptr<string> sid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
