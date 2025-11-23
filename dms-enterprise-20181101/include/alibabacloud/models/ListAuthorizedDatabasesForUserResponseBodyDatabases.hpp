// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERRESPONSEBODYDATABASES_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDDATABASESFORUSERRESPONSEBODYDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListAuthorizedDatabasesForUserResponseBodyDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedDatabasesForUserResponseBodyDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermissionDetail, permissionDetail_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedDatabasesForUserResponseBodyDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermissionDetail, permissionDetail_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListAuthorizedDatabasesForUserResponseBodyDatabases() = default ;
    ListAuthorizedDatabasesForUserResponseBodyDatabases(const ListAuthorizedDatabasesForUserResponseBodyDatabases &) = default ;
    ListAuthorizedDatabasesForUserResponseBodyDatabases(ListAuthorizedDatabasesForUserResponseBodyDatabases &&) = default ;
    ListAuthorizedDatabasesForUserResponseBodyDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedDatabasesForUserResponseBodyDatabases() = default ;
    ListAuthorizedDatabasesForUserResponseBodyDatabases& operator=(const ListAuthorizedDatabasesForUserResponseBodyDatabases &) = default ;
    ListAuthorizedDatabasesForUserResponseBodyDatabases& operator=(ListAuthorizedDatabasesForUserResponseBodyDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->dbType_ == nullptr && return this->envType_ == nullptr && return this->instanceId_ == nullptr && return this->logic_ == nullptr && return this->permissionDetail_ == nullptr
        && return this->schemaName_ == nullptr && return this->searchName_ == nullptr && return this->userId_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permissionDetail Field Functions 
    bool hasPermissionDetail() const { return this->permissionDetail_ != nullptr;};
    void deletePermissionDetail() { this->permissionDetail_ = nullptr;};
    inline const Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail & permissionDetail() const { DARABONBA_PTR_GET_CONST(permissionDetail_, Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail) };
    inline Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail permissionDetail() { DARABONBA_PTR_GET(permissionDetail_, Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail) };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setPermissionDetail(const Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail & permissionDetail) { DARABONBA_PTR_SET_VALUE(permissionDetail_, permissionDetail) };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setPermissionDetail(Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail && permissionDetail) { DARABONBA_PTR_SET_RVALUE(permissionDetail_, permissionDetail) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListAuthorizedDatabasesForUserResponseBodyDatabases& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The database ID.
    std::shared_ptr<string> dbId_ = nullptr;
    // The engine of the database.
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment in which the database instance is deployed.
    std::shared_ptr<string> envType_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Indicates whether the database is a logical database. Valid values:
    // 
    // *   **true.**: The database is a logical database
    // *   **false**: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The details of permissions. The format of the permission details varies with the permission source. For example, if the permission source is a normal permission, the following parameters are returned.
    std::shared_ptr<Models::ListAuthorizedDatabasesForUserResponseBodyDatabasesPermissionDetail> permissionDetail_ = nullptr;
    // The database name.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the database.
    std::shared_ptr<string> searchName_ = nullptr;
    // The user IDs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
