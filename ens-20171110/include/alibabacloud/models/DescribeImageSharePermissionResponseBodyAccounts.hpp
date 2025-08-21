// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageSharePermissionResponseBodyAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeImageSharePermissionResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
    };
    DescribeImageSharePermissionResponseBodyAccounts() = default ;
    DescribeImageSharePermissionResponseBodyAccounts(const DescribeImageSharePermissionResponseBodyAccounts &) = default ;
    DescribeImageSharePermissionResponseBodyAccounts(DescribeImageSharePermissionResponseBodyAccounts &&) = default ;
    DescribeImageSharePermissionResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionResponseBodyAccounts() = default ;
    DescribeImageSharePermissionResponseBodyAccounts& operator=(const DescribeImageSharePermissionResponseBodyAccounts &) = default ;
    DescribeImageSharePermissionResponseBodyAccounts& operator=(DescribeImageSharePermissionResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount>) };
    inline vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount>) };
    inline DescribeImageSharePermissionResponseBodyAccounts& setAccount(const vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline DescribeImageSharePermissionResponseBodyAccounts& setAccount(vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::DescribeImageSharePermissionResponseBodyAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
