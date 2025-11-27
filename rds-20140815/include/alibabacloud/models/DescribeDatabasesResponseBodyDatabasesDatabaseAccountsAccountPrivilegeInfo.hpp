// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTSACCOUNTPRIVILEGEINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTSACCOUNTPRIVILEGEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo(const DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo(DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->accountPrivilege_ == nullptr && return this->accountPrivilegeDetail_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // accountPrivilegeDetail Field Functions 
    bool hasAccountPrivilegeDetail() const { return this->accountPrivilegeDetail_ != nullptr;};
    void deleteAccountPrivilegeDetail() { this->accountPrivilegeDetail_ = nullptr;};
    inline string accountPrivilegeDetail() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilegeDetail_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccountPrivilegeInfo& setAccountPrivilegeDetail(string accountPrivilegeDetail) { DARABONBA_PTR_SET_VALUE(accountPrivilegeDetail_, accountPrivilegeDetail) };


  protected:
    // The account username.
    std::shared_ptr<string> account_ = nullptr;
    // The permissions that the account has on the database. Valid values:
    // 
    // *   **ReadWrite**: read and write permissions
    // *   **ReadOnly**: read-only permissions
    // *   **DMLOnly**: DML-only permissions
    // *   **DDLOnly**: DDL-only permissions
    std::shared_ptr<string> accountPrivilege_ = nullptr;
    // The permission that the account has on the database.
    std::shared_ptr<string> accountPrivilegeDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
