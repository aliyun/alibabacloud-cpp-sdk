// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountsDatabasePrivileges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountLockState, accountLockState_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPasswordValidTime, accountPasswordValidTime_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DatabasePrivileges, databasePrivileges_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountLockState, accountLockState_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPasswordValidTime, accountPasswordValidTime_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivileges, databasePrivileges_);
    };
    DescribeAccountsResponseBodyAccounts() = default ;
    DescribeAccountsResponseBodyAccounts(const DescribeAccountsResponseBodyAccounts &) = default ;
    DescribeAccountsResponseBodyAccounts(DescribeAccountsResponseBodyAccounts &&) = default ;
    DescribeAccountsResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccounts() = default ;
    DescribeAccountsResponseBodyAccounts& operator=(const DescribeAccountsResponseBodyAccounts &) = default ;
    DescribeAccountsResponseBodyAccounts& operator=(DescribeAccountsResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountDescription_ == nullptr
        && return this->accountLockState_ == nullptr && return this->accountName_ == nullptr && return this->accountPasswordValidTime_ == nullptr && return this->accountStatus_ == nullptr && return this->accountType_ == nullptr
        && return this->databasePrivileges_ == nullptr; };
    // accountDescription Field Functions 
    bool hasAccountDescription() const { return this->accountDescription_ != nullptr;};
    void deleteAccountDescription() { this->accountDescription_ = nullptr;};
    inline string accountDescription() const { DARABONBA_PTR_GET_DEFAULT(accountDescription_, "") };
    inline DescribeAccountsResponseBodyAccounts& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountLockState Field Functions 
    bool hasAccountLockState() const { return this->accountLockState_ != nullptr;};
    void deleteAccountLockState() { this->accountLockState_ = nullptr;};
    inline string accountLockState() const { DARABONBA_PTR_GET_DEFAULT(accountLockState_, "") };
    inline DescribeAccountsResponseBodyAccounts& setAccountLockState(string accountLockState) { DARABONBA_PTR_SET_VALUE(accountLockState_, accountLockState) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsResponseBodyAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPasswordValidTime Field Functions 
    bool hasAccountPasswordValidTime() const { return this->accountPasswordValidTime_ != nullptr;};
    void deleteAccountPasswordValidTime() { this->accountPasswordValidTime_ = nullptr;};
    inline string accountPasswordValidTime() const { DARABONBA_PTR_GET_DEFAULT(accountPasswordValidTime_, "") };
    inline DescribeAccountsResponseBodyAccounts& setAccountPasswordValidTime(string accountPasswordValidTime) { DARABONBA_PTR_SET_VALUE(accountPasswordValidTime_, accountPasswordValidTime) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsResponseBodyAccounts& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsResponseBodyAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // databasePrivileges Field Functions 
    bool hasDatabasePrivileges() const { return this->databasePrivileges_ != nullptr;};
    void deleteDatabasePrivileges() { this->databasePrivileges_ = nullptr;};
    inline const vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges> & databasePrivileges() const { DARABONBA_PTR_GET_CONST(databasePrivileges_, vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges>) };
    inline vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges> databasePrivileges() { DARABONBA_PTR_GET(databasePrivileges_, vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges>) };
    inline DescribeAccountsResponseBodyAccounts& setDatabasePrivileges(const vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges> & databasePrivileges) { DARABONBA_PTR_SET_VALUE(databasePrivileges_, databasePrivileges) };
    inline DescribeAccountsResponseBodyAccounts& setDatabasePrivileges(vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges> && databasePrivileges) { DARABONBA_PTR_SET_RVALUE(databasePrivileges_, databasePrivileges) };


  protected:
    // The description of the account.
    std::shared_ptr<string> accountDescription_ = nullptr;
    // The locking state of the account. Valid values:
    // 
    // *   **UnLock**
    // *   **Lock**
    std::shared_ptr<string> accountLockState_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> accountName_ = nullptr;
    // The validity period of the password.
    std::shared_ptr<string> accountPasswordValidTime_ = nullptr;
    // The state of the account. Valid values:
    // 
    // *   **Creating**: The account is being created.
    // *   **Available**: The account is available.
    // *   **Deleting**: The account is being deleted
    std::shared_ptr<string> accountStatus_ = nullptr;
    // The type of the account. Valid values:
    // 
    // *   **Normal**: standard account.
    // *   **Super**: privileged account.
    // *   **ReadOnly**: global read-only account.
    std::shared_ptr<string> accountType_ = nullptr;
    // The list of database permissions that are granted to the account.
    std::shared_ptr<vector<Models::DescribeAccountsResponseBodyAccountsDatabasePrivileges>> databasePrivileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
