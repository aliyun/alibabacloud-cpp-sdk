// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEDATABASESDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETRULERESPONSEBODYRULEDATABASESDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetRuleResponseBodyRuleDatabasesDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleResponseBodyRuleDatabasesDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseAccountId, databaseAccountId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleResponseBodyRuleDatabasesDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseAccountId, databaseAccountId_);
    };
    GetRuleResponseBodyRuleDatabasesDatabaseAccounts() = default ;
    GetRuleResponseBodyRuleDatabasesDatabaseAccounts(const GetRuleResponseBodyRuleDatabasesDatabaseAccounts &) = default ;
    GetRuleResponseBodyRuleDatabasesDatabaseAccounts(GetRuleResponseBodyRuleDatabasesDatabaseAccounts &&) = default ;
    GetRuleResponseBodyRuleDatabasesDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleResponseBodyRuleDatabasesDatabaseAccounts() = default ;
    GetRuleResponseBodyRuleDatabasesDatabaseAccounts& operator=(const GetRuleResponseBodyRuleDatabasesDatabaseAccounts &) = default ;
    GetRuleResponseBodyRuleDatabasesDatabaseAccounts& operator=(GetRuleResponseBodyRuleDatabasesDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseAccountId_ != nullptr; };
    // databaseAccountId Field Functions 
    bool hasDatabaseAccountId() const { return this->databaseAccountId_ != nullptr;};
    void deleteDatabaseAccountId() { this->databaseAccountId_ = nullptr;};
    inline string databaseAccountId() const { DARABONBA_PTR_GET_DEFAULT(databaseAccountId_, "") };
    inline GetRuleResponseBodyRuleDatabasesDatabaseAccounts& setDatabaseAccountId(string databaseAccountId) { DARABONBA_PTR_SET_VALUE(databaseAccountId_, databaseAccountId) };


  protected:
    // The ID of the database account that the policy authorizes users to manage.
    std::shared_ptr<string> databaseAccountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
