// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEUSERPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEUSERPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RevokeUserPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeUserPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermTypes, permTypes_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserAccessId, userAccessId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeUserPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermTypes, permTypes_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserAccessId, userAccessId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    RevokeUserPermissionRequest() = default ;
    RevokeUserPermissionRequest(const RevokeUserPermissionRequest &) = default ;
    RevokeUserPermissionRequest(RevokeUserPermissionRequest &&) = default ;
    RevokeUserPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeUserPermissionRequest() = default ;
    RevokeUserPermissionRequest& operator=(const RevokeUserPermissionRequest &) = default ;
    RevokeUserPermissionRequest& operator=(RevokeUserPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->dsType_ != nullptr && this->instanceId_ != nullptr && this->logic_ != nullptr && this->permTypes_ != nullptr && this->tableId_ != nullptr
        && this->tableName_ != nullptr && this->tid_ != nullptr && this->userAccessId_ != nullptr && this->userId_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline RevokeUserPermissionRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline RevokeUserPermissionRequest& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline RevokeUserPermissionRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline RevokeUserPermissionRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permTypes Field Functions 
    bool hasPermTypes() const { return this->permTypes_ != nullptr;};
    void deletePermTypes() { this->permTypes_ = nullptr;};
    inline string permTypes() const { DARABONBA_PTR_GET_DEFAULT(permTypes_, "") };
    inline RevokeUserPermissionRequest& setPermTypes(string permTypes) { DARABONBA_PTR_SET_VALUE(permTypes_, permTypes) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline RevokeUserPermissionRequest& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline RevokeUserPermissionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RevokeUserPermissionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userAccessId Field Functions 
    bool hasUserAccessId() const { return this->userAccessId_ != nullptr;};
    void deleteUserAccessId() { this->userAccessId_ = nullptr;};
    inline string userAccessId() const { DARABONBA_PTR_GET_DEFAULT(userAccessId_, "") };
    inline RevokeUserPermissionRequest& setUserAccessId(string userAccessId) { DARABONBA_PTR_SET_VALUE(userAccessId_, userAccessId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline RevokeUserPermissionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The database ID. The database can be a physical database or a logical database.
    // 
    // *   To query the ID of a physical database, call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    // *   To query the ID of a logical database, call the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) or [SearchDatabase](https://help.aliyun.com/document_detail/141876.html) operation.
    std::shared_ptr<string> dbId_ = nullptr;
    // The type of the object on which you want to revoke permissions from a user. Valid values:
    // 
    // *   **INSTANCE**: instances.
    // *   **DATABASE**: physical databases.
    // *   **LOGIC_DATABASE**: logical databases.
    // *   **TABLE**: physical tables.
    // *   **LOGIC_TABLE**: logical tables.
    // 
    // This parameter is required.
    std::shared_ptr<string> dsType_ = nullptr;
    // The database instance ID. You must specify this parameter if you revoke a permission from the database instance. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the ID of the database instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   **true**: The database is a logical database.
    // *   **false**: The database is a physical database.
    // 
    // > 
    // 
    // *   If the database is a logical database, set this parameter to **true**.
    // 
    // *   If the database is a physical database, set this parameter to **false**.
    std::shared_ptr<bool> logic_ = nullptr;
    // The type of the permissions. Valid values:
    // 
    // *   **QUERY**: query permissions.
    // *   **EXPORT**: export permissions.
    // *   **CORRECT**: change permissions.
    // *   **LOGIN**: logon permissions.
    // *   **PERF**: query permissions on the performance details of an instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> permTypes_ = nullptr;
    // The table ID. You must specify this parameter if you revoke a permission from the table. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the table ID.
    std::shared_ptr<string> tableId_ = nullptr;
    // The name of the table. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the table name.
    std::shared_ptr<string> tableName_ = nullptr;
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The permission ID. You can call the [ListUserPermission](https://help.aliyun.com/document_detail/146957.html) operation to query the permission ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userAccessId_ = nullptr;
    // The user ID. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to query the ID of the user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
