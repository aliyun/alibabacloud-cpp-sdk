// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODYINSTANCEACCOUNTSINSTANCEACCOUNTDBPRIVILEGES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODYINSTANCEACCOUNTSINSTANCEACCOUNTDBPRIVILEGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges& obj) { 
      DARABONBA_PTR_TO_JSON(DbPrivilege, dbPrivilege_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges& obj) { 
      DARABONBA_PTR_FROM_JSON(DbPrivilege, dbPrivilege_);
    };
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges() = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges(const DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges &) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges(DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges &&) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges() = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges& operator=(const DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges &) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges& operator=(DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbPrivilege_ != nullptr; };
    // dbPrivilege Field Functions 
    bool hasDbPrivilege() const { return this->dbPrivilege_ != nullptr;};
    void deleteDbPrivilege() { this->dbPrivilege_ = nullptr;};
    inline const vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege> & dbPrivilege() const { DARABONBA_PTR_GET_CONST(dbPrivilege_, vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege>) };
    inline vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege> dbPrivilege() { DARABONBA_PTR_GET(dbPrivilege_, vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege>) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges& setDbPrivilege(const vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege> & dbPrivilege) { DARABONBA_PTR_SET_VALUE(dbPrivilege_, dbPrivilege) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivileges& setDbPrivilege(vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege> && dbPrivilege) { DARABONBA_PTR_SET_RVALUE(dbPrivilege_, dbPrivilege) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccountDbPrivilegesDbPrivilege>> dbPrivilege_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
