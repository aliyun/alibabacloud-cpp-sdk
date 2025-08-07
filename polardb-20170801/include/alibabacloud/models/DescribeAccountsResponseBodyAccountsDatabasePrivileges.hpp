// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDATABASEPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDATABASEPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountsDatabasePrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountsDatabasePrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountsDatabasePrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
    };
    DescribeAccountsResponseBodyAccountsDatabasePrivileges() = default ;
    DescribeAccountsResponseBodyAccountsDatabasePrivileges(const DescribeAccountsResponseBodyAccountsDatabasePrivileges &) = default ;
    DescribeAccountsResponseBodyAccountsDatabasePrivileges(DescribeAccountsResponseBodyAccountsDatabasePrivileges &&) = default ;
    DescribeAccountsResponseBodyAccountsDatabasePrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountsDatabasePrivileges() = default ;
    DescribeAccountsResponseBodyAccountsDatabasePrivileges& operator=(const DescribeAccountsResponseBodyAccountsDatabasePrivileges &) = default ;
    DescribeAccountsResponseBodyAccountsDatabasePrivileges& operator=(DescribeAccountsResponseBodyAccountsDatabasePrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountPrivilege_ != nullptr
        && this->DBName_ != nullptr; };
    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeAccountsResponseBodyAccountsDatabasePrivileges& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeAccountsResponseBodyAccountsDatabasePrivileges& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


  protected:
    // The permissions that the account is granted on the database. Valid values:
    std::shared_ptr<string> accountPrivilege_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
