// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNTDATABASEPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTSDBINSTANCEACCOUNTDATABASEPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(DatabasePrivilege, databasePrivilege_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabasePrivilege, databasePrivilege_);
    };
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges(const DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges(DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges &&) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges() = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges& operator=(const DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges &) = default ;
    DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges& operator=(DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databasePrivilege_ == nullptr; };
    // databasePrivilege Field Functions 
    bool hasDatabasePrivilege() const { return this->databasePrivilege_ != nullptr;};
    void deleteDatabasePrivilege() { this->databasePrivilege_ = nullptr;};
    inline const vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege> & databasePrivilege() const { DARABONBA_PTR_GET_CONST(databasePrivilege_, vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege>) };
    inline vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege> databasePrivilege() { DARABONBA_PTR_GET(databasePrivilege_, vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege>) };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges& setDatabasePrivilege(const vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege> & databasePrivilege) { DARABONBA_PTR_SET_VALUE(databasePrivilege_, databasePrivilege) };
    inline DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivileges& setDatabasePrivilege(vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege> && databasePrivilege) { DARABONBA_PTR_SET_RVALUE(databasePrivilege_, databasePrivilege) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccountDatabasePrivilegesDatabasePrivilege>> databasePrivilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
