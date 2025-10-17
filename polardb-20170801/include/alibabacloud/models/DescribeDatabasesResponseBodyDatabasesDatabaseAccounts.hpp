// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabaseAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(const DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAccounts() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount>) };
    inline vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount>) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& setAccount(const vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccounts& setAccount(vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
