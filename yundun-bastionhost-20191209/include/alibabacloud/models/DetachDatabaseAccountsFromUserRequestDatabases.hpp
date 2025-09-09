// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERREQUESTDATABASES_HPP_
#define ALIBABACLOUD_MODELS_DETACHDATABASEACCOUNTSFROMUSERREQUESTDATABASES_HPP_
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
  class DetachDatabaseAccountsFromUserRequestDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachDatabaseAccountsFromUserRequestDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachDatabaseAccountsFromUserRequestDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountIds, databaseAccountIds_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
    };
    DetachDatabaseAccountsFromUserRequestDatabases() = default ;
    DetachDatabaseAccountsFromUserRequestDatabases(const DetachDatabaseAccountsFromUserRequestDatabases &) = default ;
    DetachDatabaseAccountsFromUserRequestDatabases(DetachDatabaseAccountsFromUserRequestDatabases &&) = default ;
    DetachDatabaseAccountsFromUserRequestDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachDatabaseAccountsFromUserRequestDatabases() = default ;
    DetachDatabaseAccountsFromUserRequestDatabases& operator=(const DetachDatabaseAccountsFromUserRequestDatabases &) = default ;
    DetachDatabaseAccountsFromUserRequestDatabases& operator=(DetachDatabaseAccountsFromUserRequestDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseAccountIds_ != nullptr
        && this->databaseId_ != nullptr; };
    // databaseAccountIds Field Functions 
    bool hasDatabaseAccountIds() const { return this->databaseAccountIds_ != nullptr;};
    void deleteDatabaseAccountIds() { this->databaseAccountIds_ = nullptr;};
    inline const vector<string> & databaseAccountIds() const { DARABONBA_PTR_GET_CONST(databaseAccountIds_, vector<string>) };
    inline vector<string> databaseAccountIds() { DARABONBA_PTR_GET(databaseAccountIds_, vector<string>) };
    inline DetachDatabaseAccountsFromUserRequestDatabases& setDatabaseAccountIds(const vector<string> & databaseAccountIds) { DARABONBA_PTR_SET_VALUE(databaseAccountIds_, databaseAccountIds) };
    inline DetachDatabaseAccountsFromUserRequestDatabases& setDatabaseAccountIds(vector<string> && databaseAccountIds) { DARABONBA_PTR_SET_RVALUE(databaseAccountIds_, databaseAccountIds) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline DetachDatabaseAccountsFromUserRequestDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


  protected:
    // An array that consists of database account IDs.
    std::shared_ptr<vector<string>> databaseAccountIds_ = nullptr;
    // The ID of the database on which you want to revoke permissions.
    std::shared_ptr<string> databaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
