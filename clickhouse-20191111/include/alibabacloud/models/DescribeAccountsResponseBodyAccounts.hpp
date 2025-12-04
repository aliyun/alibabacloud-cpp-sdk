// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAccountsResponseBodyAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeAccountsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
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
    virtual bool empty() const override { return this->account_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::DescribeAccountsResponseBodyAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::DescribeAccountsResponseBodyAccountsAccount>) };
    inline vector<Models::DescribeAccountsResponseBodyAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::DescribeAccountsResponseBodyAccountsAccount>) };
    inline DescribeAccountsResponseBodyAccounts& setAccount(const vector<Models::DescribeAccountsResponseBodyAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline DescribeAccountsResponseBodyAccounts& setAccount(vector<Models::DescribeAccountsResponseBodyAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::DescribeAccountsResponseBodyAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
