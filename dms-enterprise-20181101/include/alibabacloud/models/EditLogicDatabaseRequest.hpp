// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITLOGICDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITLOGICDATABASEREQUEST_HPP_
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
  class EditLogicDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditLogicDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_TO_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, EditLogicDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_FROM_JSON(LogicDbId, logicDbId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    EditLogicDatabaseRequest() = default ;
    EditLogicDatabaseRequest(const EditLogicDatabaseRequest &) = default ;
    EditLogicDatabaseRequest(EditLogicDatabaseRequest &&) = default ;
    EditLogicDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditLogicDatabaseRequest() = default ;
    EditLogicDatabaseRequest& operator=(const EditLogicDatabaseRequest &) = default ;
    EditLogicDatabaseRequest& operator=(EditLogicDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->databaseIds_ == nullptr && this->logicDbId_ == nullptr && this->tid_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline EditLogicDatabaseRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const vector<int64_t> & getDatabaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, vector<int64_t>) };
    inline vector<int64_t> getDatabaseIds() { DARABONBA_PTR_GET(databaseIds_, vector<int64_t>) };
    inline EditLogicDatabaseRequest& setDatabaseIds(const vector<int64_t> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline EditLogicDatabaseRequest& setDatabaseIds(vector<int64_t> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


    // logicDbId Field Functions 
    bool hasLogicDbId() const { return this->logicDbId_ != nullptr;};
    void deleteLogicDbId() { this->logicDbId_ = nullptr;};
    inline int64_t getLogicDbId() const { DARABONBA_PTR_GET_DEFAULT(logicDbId_, 0L) };
    inline EditLogicDatabaseRequest& setLogicDbId(int64_t logicDbId) { DARABONBA_PTR_SET_VALUE(logicDbId_, logicDbId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline EditLogicDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // - The alias of the logical database. If you want to change the alias, specify a new alias.
    // - If you do not need to change the alias of the logical database, call the [GetLogicDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/getlogicdatabase) or [GetDBTopology](https://www.alibabacloud.com/help/en/data-management-service/latest/getdbtopology) operation to query the alias of the logical database.
    // 
    // This parameter is required.
    shared_ptr<string> alias_ {};
    // - The IDs of the physical databases that compose the logical database. If you want to change the physical databases, you can call the [ListDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listdatabases) or [SearchDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/searchdatabase) operation to query the IDs of the new physical databases that you want to specify.
    // - If you do not want to change the physical databases, you can call the [GetDBTopology](https://www.alibabacloud.com/help/en/data-management-service/latest/getdbtopology) operation to query the IDs of the physical databases that compose the logical database.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> databaseIds_ {};
    // The ID of the logical database. You can call the [ListLogicDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listlogicdatabases) operation to query the ID of the logical database.
    // 
    // This parameter is required.
    shared_ptr<int64_t> logicDbId_ {};
    // The ID of the tenant. 
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the Data Management (DMS) console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://www.alibabacloud.com/help/en/data-management-service/latest/manage-dms-tenants) topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
