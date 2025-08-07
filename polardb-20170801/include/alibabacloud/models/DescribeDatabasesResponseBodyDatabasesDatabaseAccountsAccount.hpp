// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASEACCOUNTSACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(PrivilegeStatus, privilegeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(PrivilegeStatus, privilegeStatus_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount(const DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount(DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& operator=(const DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& operator=(DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountPrivilege_ != nullptr && this->accountStatus_ != nullptr && this->privilegeStatus_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // privilegeStatus Field Functions 
    bool hasPrivilegeStatus() const { return this->privilegeStatus_ != nullptr;};
    void deletePrivilegeStatus() { this->privilegeStatus_ = nullptr;};
    inline string privilegeStatus() const { DARABONBA_PTR_GET_DEFAULT(privilegeStatus_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabaseAccountsAccount& setPrivilegeStatus(string privilegeStatus) { DARABONBA_PTR_SET_VALUE(privilegeStatus_, privilegeStatus) };


  protected:
    // The username of the account.
    // 
    // > A PolarDB for MySQL cluster does not support privileged accounts.
    std::shared_ptr<string> accountName_ = nullptr;
    // The permissions that are granted to the account. Valid values:
    // 
    // *   **ReadWrite**: read and write permissions
    // *   **ReadOnly**: read-only permissions
    // *   **DMLOnly**: The account is granted the permissions to execute only DML statements on the database.
    // *   **DDLOnly**: The account is granted the permissions to execute only DDL statements on the database.
    // *   **ReadIndex**: The account has the read and index permissions on the database.
    std::shared_ptr<string> accountPrivilege_ = nullptr;
    // The state of the account. Valid values:
    // 
    // *   **Creating**
    // *   **Available**
    // *   **Deleting**
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The authorization state of the account. Valid values:
    // 
    // *   **Empowering**: The system is granting permissions to the account.
    // *   **Empowered**: Permissions are granted to the account.
    // *   **Removing**: The system is revoking permissions from the account.
    std::shared_ptr<string> privilegeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
