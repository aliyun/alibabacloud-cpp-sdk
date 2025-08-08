// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITLOGICDATABASESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITLOGICDATABASESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class EditLogicDatabaseShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditLogicDatabaseShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIdsShrink_);
      DARABONBA_PTR_TO_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, EditLogicDatabaseShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIdsShrink_);
      DARABONBA_PTR_FROM_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    EditLogicDatabaseShrinkRequest() = default ;
    EditLogicDatabaseShrinkRequest(const EditLogicDatabaseShrinkRequest &) = default ;
    EditLogicDatabaseShrinkRequest(EditLogicDatabaseShrinkRequest &&) = default ;
    EditLogicDatabaseShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditLogicDatabaseShrinkRequest() = default ;
    EditLogicDatabaseShrinkRequest& operator=(const EditLogicDatabaseShrinkRequest &) = default ;
    EditLogicDatabaseShrinkRequest& operator=(EditLogicDatabaseShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->databaseIdsShrink_ != nullptr && this->logicDbId_ != nullptr && this->tid_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline EditLogicDatabaseShrinkRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // databaseIdsShrink Field Functions 
    bool hasDatabaseIdsShrink() const { return this->databaseIdsShrink_ != nullptr;};
    void deleteDatabaseIdsShrink() { this->databaseIdsShrink_ = nullptr;};
    inline string databaseIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(databaseIdsShrink_, "") };
    inline EditLogicDatabaseShrinkRequest& setDatabaseIdsShrink(string databaseIdsShrink) { DARABONBA_PTR_SET_VALUE(databaseIdsShrink_, databaseIdsShrink) };


    // logicDbId Field Functions 
    bool hasLogicDbId() const { return this->logicDbId_ != nullptr;};
    void deleteLogicDbId() { this->logicDbId_ = nullptr;};
    inline int64_t logicDbId() const { DARABONBA_PTR_GET_DEFAULT(logicDbId_, 0L) };
    inline EditLogicDatabaseShrinkRequest& setLogicDbId(int64_t logicDbId) { DARABONBA_PTR_SET_VALUE(logicDbId_, logicDbId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline EditLogicDatabaseShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // - The alias of the logical database. If you want to change the alias, specify a new alias.
    // - If you do not need to change the alias of the logical database, call the [GetLogicDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/getlogicdatabase) or [GetDBTopology](https://www.alibabacloud.com/help/en/data-management-service/latest/getdbtopology) operation to query the alias of the logical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> alias_ = nullptr;
    // - The IDs of the physical databases that compose the logical database. If you want to change the physical databases, you can call the [ListDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listdatabases) or [SearchDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/searchdatabase) operation to query the IDs of the new physical databases that you want to specify.
    // - If you do not want to change the physical databases, you can call the [GetDBTopology](https://www.alibabacloud.com/help/en/data-management-service/latest/getdbtopology) operation to query the IDs of the physical databases that compose the logical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> databaseIdsShrink_ = nullptr;
    // The ID of the logical database. You can call the [ListLogicDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogicdatabases) operation to query the ID of the logical database.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> logicDbId_ = nullptr;
    // The ID of the tenant. 
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://www.alibabacloud.com/help/en/data-management-service/latest/manage-dms-tenants) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
