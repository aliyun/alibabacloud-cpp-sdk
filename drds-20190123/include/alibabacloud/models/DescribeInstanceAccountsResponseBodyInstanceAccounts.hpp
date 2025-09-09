// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODYINSTANCEACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEACCOUNTSRESPONSEBODYINSTANCEACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeInstanceAccountsResponseBodyInstanceAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAccountsResponseBodyInstanceAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAccount, instanceAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAccountsResponseBodyInstanceAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAccount, instanceAccount_);
    };
    DescribeInstanceAccountsResponseBodyInstanceAccounts() = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccounts(const DescribeInstanceAccountsResponseBodyInstanceAccounts &) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccounts(DescribeInstanceAccountsResponseBodyInstanceAccounts &&) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAccountsResponseBodyInstanceAccounts() = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccounts& operator=(const DescribeInstanceAccountsResponseBodyInstanceAccounts &) = default ;
    DescribeInstanceAccountsResponseBodyInstanceAccounts& operator=(DescribeInstanceAccountsResponseBodyInstanceAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceAccount_ != nullptr; };
    // instanceAccount Field Functions 
    bool hasInstanceAccount() const { return this->instanceAccount_ != nullptr;};
    void deleteInstanceAccount() { this->instanceAccount_ = nullptr;};
    inline const vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount> & instanceAccount() const { DARABONBA_PTR_GET_CONST(instanceAccount_, vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount>) };
    inline vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount> instanceAccount() { DARABONBA_PTR_GET(instanceAccount_, vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount>) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccounts& setInstanceAccount(const vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount> & instanceAccount) { DARABONBA_PTR_SET_VALUE(instanceAccount_, instanceAccount) };
    inline DescribeInstanceAccountsResponseBodyInstanceAccounts& setInstanceAccount(vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount> && instanceAccount) { DARABONBA_PTR_SET_RVALUE(instanceAccount_, instanceAccount) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceAccountsResponseBodyInstanceAccountsInstanceAccount>> instanceAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
