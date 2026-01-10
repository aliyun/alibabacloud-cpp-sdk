// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOGICDATABASESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOGICDATABASESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateLogicDatabaseShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLogicDatabaseShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIdsShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLogicDatabaseShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreateLogicDatabaseShrinkRequest() = default ;
    CreateLogicDatabaseShrinkRequest(const CreateLogicDatabaseShrinkRequest &) = default ;
    CreateLogicDatabaseShrinkRequest(CreateLogicDatabaseShrinkRequest &&) = default ;
    CreateLogicDatabaseShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLogicDatabaseShrinkRequest() = default ;
    CreateLogicDatabaseShrinkRequest& operator=(const CreateLogicDatabaseShrinkRequest &) = default ;
    CreateLogicDatabaseShrinkRequest& operator=(CreateLogicDatabaseShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->databaseIdsShrink_ == nullptr && this->tid_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline CreateLogicDatabaseShrinkRequest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // databaseIdsShrink Field Functions 
    bool hasDatabaseIdsShrink() const { return this->databaseIdsShrink_ != nullptr;};
    void deleteDatabaseIdsShrink() { this->databaseIdsShrink_ = nullptr;};
    inline string getDatabaseIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(databaseIdsShrink_, "") };
    inline CreateLogicDatabaseShrinkRequest& setDatabaseIdsShrink(string databaseIdsShrink) { DARABONBA_PTR_SET_VALUE(databaseIdsShrink_, databaseIdsShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateLogicDatabaseShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The alias of the logical database.
    // 
    // This parameter is required.
    shared_ptr<string> alias_ {};
    // The IDs of the physical databases that compose the logical database. You can specify one or more database IDs. You can call the [ListDatabases](https://www.alibabacloud.com/help/en/data-management-service/latest/listdatabases) or [SearchDatabase](https://www.alibabacloud.com/help/en/data-management-service/latest/searchdatabase) operation to query the IDs of the physical databases.
    // 
    // This parameter is required.
    shared_ptr<string> databaseIdsShrink_ {};
    // The ID of the tenant. 
    // 
    // >  To view the ID of the tenant, move the pointer over the profile picture in the upper-right corner of the DMS console. For more information, see the "View information about the current tenant" section of the [Manage DMS tenants](https://www.alibabacloud.com/help/en/data-management-service/latest/manage-dms-tenants) topic.
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
