// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNTDATABASEPRIVILEGESDATABASEPRIVILEGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNTDATABASEPRIVILEGESDATABASEPRIVILEGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& obj) { 
      DARABONBA_PTR_TO_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_TO_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountPrivilege, accountPrivilege_);
      DARABONBA_PTR_FROM_JSON(AccountPrivilegeDetail, accountPrivilegeDetail_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
    };
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege(const DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege(DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege &&) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& operator=(const DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& operator=(DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountPrivilege_ == nullptr
        && return this->accountPrivilegeDetail_ == nullptr && return this->DBName_ == nullptr; };
    // accountPrivilege Field Functions 
    bool hasAccountPrivilege() const { return this->accountPrivilege_ != nullptr;};
    void deleteAccountPrivilege() { this->accountPrivilege_ = nullptr;};
    inline string accountPrivilege() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilege_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& setAccountPrivilege(string accountPrivilege) { DARABONBA_PTR_SET_VALUE(accountPrivilege_, accountPrivilege) };


    // accountPrivilegeDetail Field Functions 
    bool hasAccountPrivilegeDetail() const { return this->accountPrivilegeDetail_ != nullptr;};
    void deleteAccountPrivilegeDetail() { this->accountPrivilegeDetail_ = nullptr;};
    inline string accountPrivilegeDetail() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilegeDetail_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& setAccountPrivilegeDetail(string accountPrivilegeDetail) { DARABONBA_PTR_SET_VALUE(accountPrivilegeDetail_, accountPrivilegeDetail) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


  protected:
    // The type of the permissions. Valid values:
    // 
    // *   **ReadWrite**: read and write permissions.
    // *   **ReadOnly**: read-only permissions.
    // *   **DDLOnly**: DDL-only permissions.
    // *   **DMLOnly**: DML-only permissions.
    // *   **Custom**: custom permissions. You can modify the permissions of the account by using SQL commands.
    std::shared_ptr<string> accountPrivilege_ = nullptr;
    // The permissions that are granted to the account. For more information, see [Account permissions](https://help.aliyun.com/document_detail/146395.html).
    std::shared_ptr<string> accountPrivilegeDetail_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
