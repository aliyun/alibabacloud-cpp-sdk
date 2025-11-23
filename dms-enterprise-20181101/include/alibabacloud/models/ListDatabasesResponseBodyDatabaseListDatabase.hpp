// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASELISTDATABASE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASESRESPONSEBODYDATABASELISTDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList.hpp>
#include <alibabacloud/models/ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDatabasesResponseBodyDatabaseListDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabasesResponseBodyDatabaseListDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DbaId, dbaId_);
      DARABONBA_PTR_TO_JSON(DbaName, dbaName_);
      DARABONBA_PTR_TO_JSON(Encoding, encoding_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(Sid, sid_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabasesResponseBodyDatabaseListDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DbaId, dbaId_);
      DARABONBA_PTR_FROM_JSON(DbaName, dbaName_);
      DARABONBA_PTR_FROM_JSON(Encoding, encoding_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(Sid, sid_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListDatabasesResponseBodyDatabaseListDatabase() = default ;
    ListDatabasesResponseBodyDatabaseListDatabase(const ListDatabasesResponseBodyDatabaseListDatabase &) = default ;
    ListDatabasesResponseBodyDatabaseListDatabase(ListDatabasesResponseBodyDatabaseListDatabase &&) = default ;
    ListDatabasesResponseBodyDatabaseListDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabasesResponseBodyDatabaseListDatabase() = default ;
    ListDatabasesResponseBodyDatabaseListDatabase& operator=(const ListDatabasesResponseBodyDatabaseListDatabase &) = default ;
    ListDatabasesResponseBodyDatabaseListDatabase& operator=(ListDatabasesResponseBodyDatabaseListDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && return this->databaseId_ == nullptr && return this->dbType_ == nullptr && return this->dbaId_ == nullptr && return this->dbaName_ == nullptr && return this->encoding_ == nullptr
        && return this->envType_ == nullptr && return this->host_ == nullptr && return this->instanceId_ == nullptr && return this->ownerIdList_ == nullptr && return this->ownerNameList_ == nullptr
        && return this->port_ == nullptr && return this->schemaName_ == nullptr && return this->searchName_ == nullptr && return this->sid_ == nullptr && return this->state_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dbaId Field Functions 
    bool hasDbaId() const { return this->dbaId_ != nullptr;};
    void deleteDbaId() { this->dbaId_ = nullptr;};
    inline string dbaId() const { DARABONBA_PTR_GET_DEFAULT(dbaId_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setDbaId(string dbaId) { DARABONBA_PTR_SET_VALUE(dbaId_, dbaId) };


    // dbaName Field Functions 
    bool hasDbaName() const { return this->dbaName_ != nullptr;};
    void deleteDbaName() { this->dbaName_ = nullptr;};
    inline string dbaName() const { DARABONBA_PTR_GET_DEFAULT(dbaName_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setDbaName(string dbaName) { DARABONBA_PTR_SET_VALUE(dbaName_, dbaName) };


    // encoding Field Functions 
    bool hasEncoding() const { return this->encoding_ != nullptr;};
    void deleteEncoding() { this->encoding_ = nullptr;};
    inline string encoding() const { DARABONBA_PTR_GET_DEFAULT(encoding_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setEncoding(string encoding) { DARABONBA_PTR_SET_VALUE(encoding_, encoding) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList) };
    inline Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList) };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setOwnerIdList(const Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setOwnerIdList(Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList) };
    inline Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList) };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setOwnerNameList(const Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setOwnerNameList(Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // sid Field Functions 
    bool hasSid() const { return this->sid_ != nullptr;};
    void deleteSid() { this->sid_ = nullptr;};
    inline string sid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListDatabasesResponseBodyDatabaseListDatabase& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The name of the catalog to which the database belongs.
    std::shared_ptr<string> catalogName_ = nullptr;
    // The ID of the database.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The ID of the DBA.
    std::shared_ptr<string> dbaId_ = nullptr;
    // The nickname of the Database administrator (DBA) to which the database belongs.
    std::shared_ptr<string> dbaName_ = nullptr;
    // The encoding format of the database.
    std::shared_ptr<string> encoding_ = nullptr;
    // The type of the environment to which the database belongs.
    std::shared_ptr<string> envType_ = nullptr;
    // The endpoint of the instance to which the database belongs.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the instance to which the database belongs.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IDs of the owners of the database.
    std::shared_ptr<Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerIdList> ownerIdList_ = nullptr;
    // The nicknames of the database owners.
    std::shared_ptr<Models::ListDatabasesResponseBodyDatabaseListDatabaseOwnerNameList> ownerNameList_ = nullptr;
    // The connection port of the instance to which the database belongs.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used for searching the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The system ID (SID) of the instance to which the database belongs.
    std::shared_ptr<string> sid_ = nullptr;
    // The state of the database. Valid values:
    // 
    // *   NORMAL: The database is normal.
    // *   DISABLE: The database is disabled.
    // *   OFFLINE: The database is unpublished.
    // *   NOT_EXIST: The database does not exist.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
