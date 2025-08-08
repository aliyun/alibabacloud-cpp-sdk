// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTUSERPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTUSERPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GrantUserPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantUserPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DsType, dsType_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermTypes, permTypes_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GrantUserPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DsType, dsType_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermTypes, permTypes_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GrantUserPermissionRequest() = default ;
    GrantUserPermissionRequest(const GrantUserPermissionRequest &) = default ;
    GrantUserPermissionRequest(GrantUserPermissionRequest &&) = default ;
    GrantUserPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantUserPermissionRequest() = default ;
    GrantUserPermissionRequest& operator=(const GrantUserPermissionRequest &) = default ;
    GrantUserPermissionRequest& operator=(GrantUserPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->dsType_ != nullptr && this->expireDate_ != nullptr && this->instanceId_ != nullptr && this->logic_ != nullptr && this->permTypes_ != nullptr
        && this->tableId_ != nullptr && this->tableName_ != nullptr && this->tid_ != nullptr && this->userId_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline GrantUserPermissionRequest& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dsType Field Functions 
    bool hasDsType() const { return this->dsType_ != nullptr;};
    void deleteDsType() { this->dsType_ = nullptr;};
    inline string dsType() const { DARABONBA_PTR_GET_DEFAULT(dsType_, "") };
    inline GrantUserPermissionRequest& setDsType(string dsType) { DARABONBA_PTR_SET_VALUE(dsType_, dsType) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline GrantUserPermissionRequest& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GrantUserPermissionRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GrantUserPermissionRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permTypes Field Functions 
    bool hasPermTypes() const { return this->permTypes_ != nullptr;};
    void deletePermTypes() { this->permTypes_ = nullptr;};
    inline string permTypes() const { DARABONBA_PTR_GET_DEFAULT(permTypes_, "") };
    inline GrantUserPermissionRequest& setPermTypes(string permTypes) { DARABONBA_PTR_SET_VALUE(permTypes_, permTypes) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline GrantUserPermissionRequest& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GrantUserPermissionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline GrantUserPermissionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrantUserPermissionRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the database. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to query the ID of a physical database and the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to query the ID of a logical database.
    // 
    // >  The value of the DatabaseId parameter is that of the DbId parameter.
    std::shared_ptr<string> dbId_ = nullptr;
    // The permissions on a specific type of object that you want to grant to the user. Valid values:
    // 
    // *   INSTANCE: permissions on instances
    // *   DATABASE: permissions on physical databases
    // *   LOGIC_DATABASE: permissions on logical databases
    // *   TABLE: permissions on physical tables
    // *   LOGIC_TABLE: permissions on logical tables
    // 
    // This parameter is required.
    std::shared_ptr<string> dsType_ = nullptr;
    // The time when the permissions expire.
    // 
    // This parameter is required.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The ID of the instance. You must specify this parameter if you grant permissions on an instance to the user. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) or [GetInstance](https://help.aliyun.com/document_detail/141567.html) operation to query the ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // Specifies whether the database is a logical database. You must specify this parameter if you grant permissions on a database to the user. Valid values:
    // 
    // *   true: The database is a logical database.
    // *   false: The database is a physical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The permission type. Separate multiple permission types with commas (,). Valid values:
    // 
    // *   **QUERY**: the query permissions
    // *   **EXPORT**: the export permissions
    // *   **CORRECT**: the change permissions
    // *   **LOGIN**: the logon permissions
    // *   **PERF**: the query permissions on the performance details of the instance
    // 
    // This parameter is required.
    std::shared_ptr<string> permTypes_ = nullptr;
    // The ID of the table. You must specify this parameter if you grant permissions on a table to the user. You can call the [ListTables](https://help.aliyun.com/document_detail/141878.html) operation to query the table ID.
    std::shared_ptr<string> tableId_ = nullptr;
    // The name of the table. You must specify this parameter if you grant permissions on a table to the user.
    std::shared_ptr<string> tableName_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The ID of the user. You can call the [GetUser](https://help.aliyun.com/document_detail/147098.html) or [ListUsers](https://help.aliyun.com/document_detail/141938.html) operation to query the ID of the user.
    // 
    // >  The user ID is different from the ID of your Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
