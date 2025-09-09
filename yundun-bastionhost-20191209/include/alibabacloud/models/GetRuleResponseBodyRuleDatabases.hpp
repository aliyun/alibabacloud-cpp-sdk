// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEDATABASES_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEDATABASES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRuleResponseBodyRuleDatabasesDatabaseAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetRuleResponseBodyRuleDatabases : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyRuleDatabases& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyRuleDatabases& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccounts, databaseAccounts_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
    };
    GetRuleResponseBodyRuleDatabases() = default ;
    GetRuleResponseBodyRuleDatabases(const GetRuleResponseBodyRuleDatabases &) = default ;
    GetRuleResponseBodyRuleDatabases(GetRuleResponseBodyRuleDatabases &&) = default ;
    GetRuleResponseBodyRuleDatabases(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyRuleDatabases() = default ;
    GetRuleResponseBodyRuleDatabases& operator=(const GetRuleResponseBodyRuleDatabases &) = default ;
    GetRuleResponseBodyRuleDatabases& operator=(GetRuleResponseBodyRuleDatabases &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseAccounts_ != nullptr
        && this->databaseId_ != nullptr; };
    // databaseAccounts Field Functions 
    bool hasDatabaseAccounts() const { return this->databaseAccounts_ != nullptr;};
    void deleteDatabaseAccounts() { this->databaseAccounts_ = nullptr;};
    inline const vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts> & databaseAccounts() const { DARABONBA_PTR_GET_CONST(databaseAccounts_, vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts>) };
    inline vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts> databaseAccounts() { DARABONBA_PTR_GET(databaseAccounts_, vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts>) };
    inline GetRuleResponseBodyRuleDatabases& setDatabaseAccounts(const vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts> & databaseAccounts) { DARABONBA_PTR_SET_VALUE(databaseAccounts_, databaseAccounts) };
    inline GetRuleResponseBodyRuleDatabases& setDatabaseAccounts(vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts> && databaseAccounts) { DARABONBA_PTR_SET_RVALUE(databaseAccounts_, databaseAccounts) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline GetRuleResponseBodyRuleDatabases& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


  protected:
    // The database accounts on which permissions are granted by using the authorization rule.
    std::shared_ptr<vector<Models::GetRuleResponseBodyRuleDatabasesDatabaseAccounts>> databaseAccounts_ = nullptr;
    // The ID of the database that the policy authorizes users to manage.
    std::shared_ptr<string> databaseId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
