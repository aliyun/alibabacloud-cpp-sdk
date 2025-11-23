// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGICDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGICDATABASEREQUEST_HPP_
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
  class CreateLogicDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogicDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogicDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateLogicDatabaseRequest() = default ;
    CreateLogicDatabaseRequest(const CreateLogicDatabaseRequest &) = default ;
    CreateLogicDatabaseRequest(CreateLogicDatabaseRequest &&) = default ;
    CreateLogicDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogicDatabaseRequest() = default ;
    CreateLogicDatabaseRequest& operator=(const CreateLogicDatabaseRequest &) = default ;
    CreateLogicDatabaseRequest& operator=(CreateLogicDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->databaseIds_ == nullptr && return this->tid_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline CreateLogicDatabaseRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const vector<int64_t> & databaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, vector<int64_t>) };
    inline vector<int64_t> databaseIds() { DARABONBA_PTR_GET(databaseIds_, vector<int64_t>) };
    inline CreateLogicDatabaseRequest& setDatabaseIds(const vector<int64_t> & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline CreateLogicDatabaseRequest& setDatabaseIds(vector<int64_t> && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateLogicDatabaseRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The alias of the logical database.
    // 
    // This parameter is required.
    std::shared_ptr<string> alias_ = nullptr;
    // The IDs of the physical databases that compose the logical database. You can specify one or more database IDs. You can call the [ListDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listdatabases) or [SearchDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/searchdatabase) operation to query the IDs of the physical databases.
    // 
    // This parameter is required.
    std::shared_ptr<vector<int64_t>> databaseIds_ = nullptr;
    // The ID of the tenant. 
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://www.alibabacloud.com/help/en/data-management-service/latest/manage-dms-tenants) topic.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
