// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBATCHTABLEACCESSPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKBATCHTABLEACCESSPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CheckBatchTableAccessPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBatchTableAccessPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(TableNameList, tableNameList_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBatchTableAccessPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(TableNameList, tableNameList_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CheckBatchTableAccessPermissionRequest() = default ;
    CheckBatchTableAccessPermissionRequest(const CheckBatchTableAccessPermissionRequest &) = default ;
    CheckBatchTableAccessPermissionRequest(CheckBatchTableAccessPermissionRequest &&) = default ;
    CheckBatchTableAccessPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBatchTableAccessPermissionRequest() = default ;
    CheckBatchTableAccessPermissionRequest& operator=(const CheckBatchTableAccessPermissionRequest &) = default ;
    CheckBatchTableAccessPermissionRequest& operator=(CheckBatchTableAccessPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->logic_ == nullptr && this->permissionType_ == nullptr && this->tableNameList_ == nullptr && this->tid_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CheckBatchTableAccessPermissionRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CheckBatchTableAccessPermissionRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string getPermissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline CheckBatchTableAccessPermissionRequest& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // tableNameList Field Functions 
    bool hasTableNameList() const { return this->tableNameList_ != nullptr;};
    void deleteTableNameList() { this->tableNameList_ = nullptr;};
    inline const vector<string> & getTableNameList() const { DARABONBA_PTR_GET_CONST(tableNameList_, vector<string>) };
    inline vector<string> getTableNameList() { DARABONBA_PTR_GET(tableNameList_, vector<string>) };
    inline CheckBatchTableAccessPermissionRequest& setTableNameList(const vector<string> & tableNameList) { DARABONBA_PTR_SET_VALUE(tableNameList_, tableNameList) };
    inline CheckBatchTableAccessPermissionRequest& setTableNameList(vector<string> && tableNameList) { DARABONBA_PTR_SET_RVALUE(tableNameList_, tableNameList) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CheckBatchTableAccessPermissionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The database ID. You can call the [ListDatabases](https://help.aliyun.com/document_detail/141873.html) operation to query the ID of a physical database and the [ListLogicDatabases](https://help.aliyun.com/document_detail/141874.html) operation to query the ID of a logical database.
    // 
    // >  The value of DatabaseId is that of DbId.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dbId_ {};
    // Specifies whether the database is a logical database. Valid values:
    // 
    // *   true: Logical database.
    // *   false: Physical database.
    shared_ptr<bool> logic_ {};
    // The type of the permission to be verified.
    // 
    // Valid values:
    // 
    // *   QUERY
    // *   EXPORT
    // *   CORRECT
    // *   LOGIN
    // *   PERF
    // 
    // This parameter is required.
    shared_ptr<string> permissionType_ {};
    // The name of the table.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> tableNameList_ {};
    // The ID of the tenant.
    // 
    // >  View Tenant ID by hovering over your profile icon in the DMS console. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
