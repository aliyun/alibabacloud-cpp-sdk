// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESZONALRESPONSEBODYDATABASESACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESZONALRESPONSEBODYDATABASESACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDatabasesZonalResponseBodyDatabasesAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesZonalResponseBodyDatabasesAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_TO_JSON(PrivilegeStatus, privilegeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesZonalResponseBodyDatabasesAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(AccountStatus, accountStatus_);
      DARABONBA_PTR_FROM_JSON(PrivilegeStatus, privilegeStatus_);
    };
    DescribeDatabasesZonalResponseBodyDatabasesAccounts() = default ;
    DescribeDatabasesZonalResponseBodyDatabasesAccounts(const DescribeDatabasesZonalResponseBodyDatabasesAccounts &) = default ;
    DescribeDatabasesZonalResponseBodyDatabasesAccounts(DescribeDatabasesZonalResponseBodyDatabasesAccounts &&) = default ;
    DescribeDatabasesZonalResponseBodyDatabasesAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesZonalResponseBodyDatabasesAccounts() = default ;
    DescribeDatabasesZonalResponseBodyDatabasesAccounts& operator=(const DescribeDatabasesZonalResponseBodyDatabasesAccounts &) = default ;
    DescribeDatabasesZonalResponseBodyDatabasesAccounts& operator=(DescribeDatabasesZonalResponseBodyDatabasesAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->accountPrivilege_ == nullptr && return this->accountStatus_ == nullptr && return this->privilegeStatus_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabasesAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabasesAccounts& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // accountStatus Field Functions 
    bool hasAccountStatus() const { return this->accountStatus_ != nullptr;};
    void deleteAccountStatus() { this->accountStatus_ = nullptr;};
    inline string accountStatus() const { DARABONBA_PTR_GET_DEFAULT(accountStatus_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabasesAccounts& setAccountStatus(string accountStatus) { DARABONBA_PTR_SET_VALUE(accountStatus_, accountStatus) };


    // privilegeStatus Field Functions 
    bool hasPrivilegeStatus() const { return this->privilegeStatus_ != nullptr;};
    void deletePrivilegeStatus() { this->privilegeStatus_ = nullptr;};
    inline string privilegeStatus() const { DARABONBA_PTR_GET_DEFAULT(privilegeStatus_, "") };
    inline DescribeDatabasesZonalResponseBodyDatabasesAccounts& setPrivilegeStatus(string privilegeStatus) { DARABONBA_PTR_SET_VALUE(privilegeStatus_, privilegeStatus) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> accountPrivilege_ = nullptr;
    std::shared_ptr<string> accountStatus_ = nullptr;
    std::shared_ptr<string> privilegeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
