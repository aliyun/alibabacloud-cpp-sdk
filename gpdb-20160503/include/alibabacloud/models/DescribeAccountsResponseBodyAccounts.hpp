// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountsDBInstanceAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceAccount, DBInstanceAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceAccount, DBInstanceAccount_);
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
    virtual bool empty() const override { return this->DBInstanceAccount_ == nullptr; };
    // DBInstanceAccount Field Functions 
    bool hasDBInstanceAccount() const { return this->DBInstanceAccount_ != nullptr;};
    void deleteDBInstanceAccount() { this->DBInstanceAccount_ = nullptr;};
    inline const vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount> & DBInstanceAccount() const { DARABONBA_PTR_GET_CONST(DBInstanceAccount_, vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount>) };
    inline vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount> DBInstanceAccount() { DARABONBA_PTR_GET(DBInstanceAccount_, vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount>) };
    inline DescribeAccountsResponseBodyAccounts& setDBInstanceAccount(const vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount> & DBInstanceAccount) { DARABONBA_PTR_SET_VALUE(DBInstanceAccount_, DBInstanceAccount) };
    inline DescribeAccountsResponseBodyAccounts& setDBInstanceAccount(vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount> && DBInstanceAccount) { DARABONBA_PTR_SET_RVALUE(DBInstanceAccount_, DBInstanceAccount) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountsResponseBodyAccountsDBInstanceAccount>> DBInstanceAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
