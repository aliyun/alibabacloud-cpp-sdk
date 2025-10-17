// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSZONALRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSZONALRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAccountsZonalResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsZonalResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_TO_JSON(AccountLockState, accountLockState_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPasswordValidTime, accountPasswordValidTime_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(DatabasePrivileges, databasePrivileges_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsZonalResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountDescription, accountDescription_);
      DARABONBA_PTR_FROM_JSON(AccountLockState, accountLockState_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPasswordValidTime, accountPasswordValidTime_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(DatabasePrivileges, databasePrivileges_);
    };
    DescribeAccountsZonalResponseBodyAccounts() = default ;
    DescribeAccountsZonalResponseBodyAccounts(const DescribeAccountsZonalResponseBodyAccounts &) = default ;
    DescribeAccountsZonalResponseBodyAccounts(DescribeAccountsZonalResponseBodyAccounts &&) = default ;
    DescribeAccountsZonalResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsZonalResponseBodyAccounts() = default ;
    DescribeAccountsZonalResponseBodyAccounts& operator=(const DescribeAccountsZonalResponseBodyAccounts &) = default ;
    DescribeAccountsZonalResponseBodyAccounts& operator=(DescribeAccountsZonalResponseBodyAccounts &&) = default ;
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
    inline DescribeAccountsZonalResponseBodyAccounts& setAccountDescription(string accountDescription) { DARABONBA_PTR_SET_VALUE(accountDescription_, accountDescription) };


    // accountLockState Field Functions 
    bool hasAccountLockState() const { return this->accountLockState_ != nullptr;};
    void deleteAccountLockState() { this->accountLockState_ = nullptr;};
    inline string accountLockState() const { DARABONBA_PTR_GET_DEFAULT(accountLockState_, "") };
    inline DescribeAccountsZonalResponseBodyAccounts& setAccountLockState(string accountLockState) { DARABONBA_PTR_SET_VALUE(accountLockState_, accountLockState) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeAccountsZonalResponseBodyAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPasswordValidTime Field Functions 
    bool hasAccountPasswordValidTime() const { return this->accountPasswordValidTime_ != nullptr;};
    void deleteAccountPasswordValidTime() { this->accountPasswordValidTime_ = nullptr;};
    inline string accountPasswordValidTime() const { DARABONBA_PTR_GET_DEFAULT(accountPasswordValidTime_, "") };
    inline DescribeAccountsZonalResponseBodyAccounts& setAccountPasswordValidTime(string accountPasswordValidTime) { DARABONBA_PTR_SET_VALUE(accountPasswordValidTime_, accountPasswordValidTime) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeAccountsZonalResponseBodyAccounts& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeAccountsZonalResponseBodyAccounts& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // databasePrivileges Field Functions 
    bool hasDatabasePrivileges() const { return this->databasePrivileges_ != nullptr;};
    void deleteDatabasePrivileges() { this->databasePrivileges_ = nullptr;};
    inline const vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges> & databasePrivileges() const { DARABONBA_PTR_GET_CONST(databasePrivileges_, vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges>) };
    inline vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges> databasePrivileges() { DARABONBA_PTR_GET(databasePrivileges_, vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges>) };
    inline DescribeAccountsZonalResponseBodyAccounts& setDatabasePrivileges(const vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges> & databasePrivileges) { DARABONBA_PTR_SET_VALUE(databasePrivileges_, databasePrivileges) };
    inline DescribeAccountsZonalResponseBodyAccounts& setDatabasePrivileges(vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges> && databasePrivileges) { DARABONBA_PTR_SET_RVALUE(databasePrivileges_, databasePrivileges) };


  protected:
    std::shared_ptr<string> accountDescription_ = nullptr;
    std::shared_ptr<string> accountLockState_ = nullptr;
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> accountPasswordValidTime_ = nullptr;
    std::shared_ptr<string> accountStatus_ = nullptr;
    std::shared_ptr<string> accountType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges>> databasePrivileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
