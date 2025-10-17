// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSZONALRESPONSEBODYACCOUNTSDATABASEPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSZONALRESPONSEBODYACCOUNTSDATABASEPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
    };
    DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges() = default ;
    DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges(const DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges &) = default ;
    DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges(DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges &&) = default ;
    DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges() = default ;
    DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges& operator=(const DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges &) = default ;
    DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges& operator=(DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountPrivilege_ == nullptr
        && return this->DBName_ == nullptr; };
    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeAccountsZonalResponseBodyAccountsDatabasePrivileges& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


  protected:
    std::shared_ptr<string> accountPrivilege_ = nullptr;
    std::shared_ptr<string> DBName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
