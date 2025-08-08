// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserPermissionsResponseBodyUserPermissionsUserPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPermissionsResponseBodyUserPermissionsUserPermission& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermDetails, permDetails_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPermissionsResponseBodyUserPermissionsUserPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermDetails, permDetails_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
    };
    ListUserPermissionsResponseBodyUserPermissionsUserPermission() = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermission(const ListUserPermissionsResponseBodyUserPermissionsUserPermission &) = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermission(ListUserPermissionsResponseBodyUserPermissionsUserPermission &&) = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPermissionsResponseBodyUserPermissionsUserPermission() = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermission& operator=(const ListUserPermissionsResponseBodyUserPermissionsUserPermission &) = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermission& operator=(ListUserPermissionsResponseBodyUserPermissionsUserPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->columnName_ != nullptr && this->dbId_ != nullptr && this->dbType_ != nullptr && this->dsType_ != nullptr && this->envType_ != nullptr
        && this->host_ != nullptr && this->instanceId_ != nullptr && this->logic_ != nullptr && this->permDetails_ != nullptr && this->port_ != nullptr
        && this->schemaName_ != nullptr && this->searchName_ != nullptr && this->tableId_ != nullptr && this->tableName_ != nullptr && this->userId_ != nullptr
        && this->userNickName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permDetails Field Functions 
    bool hasPermDetails() const { return this->permDetails_ != nullptr;};
    void deletePermDetails() { this->permDetails_ = nullptr;};
    inline const Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails & permDetails() const { DARABONBA_PTR_GET_CONST(permDetails_, Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails) };
    inline Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails permDetails() { DARABONBA_PTR_GET(permDetails_, Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails) };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setPermDetails(const Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails & permDetails) { DARABONBA_PTR_SET_VALUE(permDetails_, permDetails) };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setPermDetails(Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails && permDetails) { DARABONBA_PTR_SET_RVALUE(permDetails_, permDetails) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int64_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0L) };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setPort(int64_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNickName Field Functions 
    bool hasUserNickName() const { return this->userNickName_ != nullptr;};
    void deleteUserNickName() { this->userNickName_ = nullptr;};
    inline string userNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermission& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


  protected:
    // The alias of the instance.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of the field.
    std::shared_ptr<string> columnName_ = nullptr;
    // The ID of the database.
    std::shared_ptr<string> dbId_ = nullptr;
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://www.alibabacloud.com/help/en/data-management-service/latest/dbtype-parameter).
    std::shared_ptr<string> dbType_ = nullptr;
    // The permissions on a specific type of objects that are granted to the user. Valid values: 
    // 
    // - DATABASE: permissions on physical databases
    // - LOGIC_DATABASE: permissions on logical databases
    // - TABLE: permissions on physical tables
    // - LOGIC_TABLE: permissions on logical tables
    std::shared_ptr<string> dsType_ = nullptr;
    // The type of the environment to which the database belongs. Valid values:
    // 
    // - product: production environment
    // - dev: development environment
    // - pre: staging environment
    // - test: test environment
    // - sit: SIT environment
    // - uat: UAT environment
    // - pet: stress testing environment
    // - stag: STAG environment
    std::shared_ptr<string> envType_ = nullptr;
    // The endpoint that is used to connect the database.
    std::shared_ptr<string> host_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   true: The database is a logical database.
    // *   false: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The details of permissions.
    std::shared_ptr<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails> permDetails_ = nullptr;
    // The port that is used to connect to the instance.
    std::shared_ptr<int64_t> port_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The ID of the table.
    std::shared_ptr<string> tableId_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The nickname of the user.
    std::shared_ptr<string> userNickName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
