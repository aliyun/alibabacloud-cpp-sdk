// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERGROUPREQUESTDATABASES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERGROUPREQUESTDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachDatabaseAccountsToUserGroupRequestDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserGroupRequestDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserGroupRequestDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
    };
    AttachDatabaseAccountsToUserGroupRequestDatabases() = default ;
    AttachDatabaseAccountsToUserGroupRequestDatabases(const AttachDatabaseAccountsToUserGroupRequestDatabases &) = default ;
    AttachDatabaseAccountsToUserGroupRequestDatabases(AttachDatabaseAccountsToUserGroupRequestDatabases &&) = default ;
    AttachDatabaseAccountsToUserGroupRequestDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserGroupRequestDatabases() = default ;
    AttachDatabaseAccountsToUserGroupRequestDatabases& operator=(const AttachDatabaseAccountsToUserGroupRequestDatabases &) = default ;
    AttachDatabaseAccountsToUserGroupRequestDatabases& operator=(AttachDatabaseAccountsToUserGroupRequestDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseAccountIds_ == nullptr
        && return this->databaseId_ == nullptr; };
    // databaseAccountIds Field Functions 
    bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
    void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
    inline const vector<string> & databaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
    inline vector<string> databaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
    inline AttachDatabaseAccountsToUserGroupRequestDatabases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
    inline AttachDatabaseAccountsToUserGroupRequestDatabases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline AttachDatabaseAccountsToUserGroupRequestDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


  protected:
    // An array that consists of database account IDs.
    std::shared_ptr<vector<string>> databaseAccountIds_ = nullptr;
    // The ID of the database that you want to authorize the user group to manage.
    std::shared_ptr<string> databaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
