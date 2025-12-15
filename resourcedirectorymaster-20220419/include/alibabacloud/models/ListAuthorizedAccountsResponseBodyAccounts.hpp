// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAuthorizedAccountsResponseBodyAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAuthorizedAccountsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
    };
    ListAuthorizedAccountsResponseBodyAccounts() = default ;
    ListAuthorizedAccountsResponseBodyAccounts(const ListAuthorizedAccountsResponseBodyAccounts &) = default ;
    ListAuthorizedAccountsResponseBodyAccounts(ListAuthorizedAccountsResponseBodyAccounts &&) = default ;
    ListAuthorizedAccountsResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedAccountsResponseBodyAccounts() = default ;
    ListAuthorizedAccountsResponseBodyAccounts& operator=(const ListAuthorizedAccountsResponseBodyAccounts &) = default ;
    ListAuthorizedAccountsResponseBodyAccounts& operator=(ListAuthorizedAccountsResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount>) };
    inline vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount>) };
    inline ListAuthorizedAccountsResponseBodyAccounts& setAccount(const vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ListAuthorizedAccountsResponseBodyAccounts& setAccount(vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::ListAuthorizedAccountsResponseBodyAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
