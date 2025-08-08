// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermDetails, permDetails_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNickName, userNickName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermDetails, permDetails_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNickName, userNickName_);
    };
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission() = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission(const ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission &) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission(ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission &&) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission() = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& operator=(const ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission &) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& operator=(ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->columnName_ != nullptr && this->dbId_ != nullptr && this->dbType_ != nullptr && this->dsType_ != nullptr && this->envType_ != nullptr
        && this->instanceId_ != nullptr && this->logic_ != nullptr && this->permDetails_ != nullptr && this->schemaName_ != nullptr && this->searchName_ != nullptr
        && this->tableId_ != nullptr && this->tableName_ != nullptr && this->userId_ != nullptr && this->userNickName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permDetails Field Functions 
    bool hasPermDetails() const { return this->permDetails_ != nullptr;};
    void deletePermDetails() { this->permDetails_ = nullptr;};
    inline const Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails & permDetails() const { DARABONBA_PTR_GET_CONST(permDetails_, Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails) };
    inline Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails permDetails() { DARABONBA_PTR_GET(permDetails_, Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setPermDetails(const Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails & permDetails) { DARABONBA_PTR_SET_VALUE(permDetails_, permDetails) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setPermDetails(Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails && permDetails) { DARABONBA_PTR_SET_RVALUE(permDetails_, permDetails) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNickName Field Functions 
    bool hasUserNickName() const { return this->userNickName_ != nullptr;};
    void deleteUserNickName() { this->userNickName_ = nullptr;};
    inline string userNickName() const { DARABONBA_PTR_GET_DEFAULT(userNickName_, "") };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission& setUserNickName(string userNickName) { DARABONBA_PTR_SET_VALUE(userNickName_, userNickName) };


  protected:
    // The alias of the database instance.
    std::shared_ptr<string> alias_ = nullptr;
    // The name of a column.
    std::shared_ptr<string> columnName_ = nullptr;
    // The ID of the database.
    std::shared_ptr<string> dbId_ = nullptr;
    // The type of the database engine.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of resources on which the user has permissions.
    std::shared_ptr<string> dsType_ = nullptr;
    // The type of the environment to which the database belongs.
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the database is a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The details of user permissions.
    std::shared_ptr<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails> permDetails_ = nullptr;
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
