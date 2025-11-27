// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKBATCHTABLEACCESSPERMISSIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKBATCHTABLEACCESSPERMISSIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CheckBatchTableAccessPermissionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckBatchTableAccessPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_TO_JSON(TableNameList, tableNameListShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CheckBatchTableAccessPermissionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(PermissionType, permissionType_);
      DARABONBA_PTR_FROM_JSON(TableNameList, tableNameListShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CheckBatchTableAccessPermissionShrinkRequest() = default ;
    CheckBatchTableAccessPermissionShrinkRequest(const CheckBatchTableAccessPermissionShrinkRequest &) = default ;
    CheckBatchTableAccessPermissionShrinkRequest(CheckBatchTableAccessPermissionShrinkRequest &&) = default ;
    CheckBatchTableAccessPermissionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckBatchTableAccessPermissionShrinkRequest() = default ;
    CheckBatchTableAccessPermissionShrinkRequest& operator=(const CheckBatchTableAccessPermissionShrinkRequest &) = default ;
    CheckBatchTableAccessPermissionShrinkRequest& operator=(CheckBatchTableAccessPermissionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->logic_ == nullptr && return this->permissionType_ == nullptr && return this->tableNameListShrink_ == nullptr && return this->tid_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline CheckBatchTableAccessPermissionShrinkRequest& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CheckBatchTableAccessPermissionShrinkRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // permissionType Field Functions 
    bool hasPermissionType() const { return this->permissionType_ != nullptr;};
    void deletePermissionType() { this->permissionType_ = nullptr;};
    inline string permissionType() const { DARABONBA_PTR_GET_DEFAULT(permissionType_, "") };
    inline CheckBatchTableAccessPermissionShrinkRequest& setPermissionType(string permissionType) { DARABONBA_PTR_SET_VALUE(permissionType_, permissionType) };


    // tableNameListShrink Field Functions 
    bool hasTableNameListShrink() const { return this->tableNameListShrink_ != nullptr;};
    void deleteTableNameListShrink() { this->tableNameListShrink_ = nullptr;};
    inline string tableNameListShrink() const { DARABONBA_PTR_GET_DEFAULT(tableNameListShrink_, "") };
    inline CheckBatchTableAccessPermissionShrinkRequest& setTableNameListShrink(string tableNameListShrink) { DARABONBA_PTR_SET_VALUE(tableNameListShrink_, tableNameListShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CheckBatchTableAccessPermissionShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<bool> logic_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> permissionType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableNameListShrink_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
