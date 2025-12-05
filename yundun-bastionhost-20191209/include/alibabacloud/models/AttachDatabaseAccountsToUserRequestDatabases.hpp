// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERREQUESTDATABASES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHDATABASEACCOUNTSTOUSERREQUESTDATABASES_HPP_
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
  class AttachDatabaseAccountsToUserRequestDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachDatabaseAccountsToUserRequestDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachDatabaseAccountsToUserRequestDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
    };
    AttachDatabaseAccountsToUserRequestDatabases() = default ;
    AttachDatabaseAccountsToUserRequestDatabases(const AttachDatabaseAccountsToUserRequestDatabases &) = default ;
    AttachDatabaseAccountsToUserRequestDatabases(AttachDatabaseAccountsToUserRequestDatabases &&) = default ;
    AttachDatabaseAccountsToUserRequestDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachDatabaseAccountsToUserRequestDatabases() = default ;
    AttachDatabaseAccountsToUserRequestDatabases& operator=(const AttachDatabaseAccountsToUserRequestDatabases &) = default ;
    AttachDatabaseAccountsToUserRequestDatabases& operator=(AttachDatabaseAccountsToUserRequestDatabases &&) = default ;
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
    inline AttachDatabaseAccountsToUserRequestDatabases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
    inline AttachDatabaseAccountsToUserRequestDatabases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline AttachDatabaseAccountsToUserRequestDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


  protected:
    // An array that consists of database account IDs.
    std::shared_ptr<vector<string>> databaseAccountIds_ = nullptr;
    // The ID of the database that you want to authorize the user to manage.
    std::shared_ptr<string> databaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
