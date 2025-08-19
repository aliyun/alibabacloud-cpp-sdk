// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountsResponseBodyAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAccountsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
    };
    ListAccountsResponseBodyAccounts() = default ;
    ListAccountsResponseBodyAccounts(const ListAccountsResponseBodyAccounts &) = default ;
    ListAccountsResponseBodyAccounts(ListAccountsResponseBodyAccounts &&) = default ;
    ListAccountsResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsResponseBodyAccounts() = default ;
    ListAccountsResponseBodyAccounts& operator=(const ListAccountsResponseBodyAccounts &) = default ;
    ListAccountsResponseBodyAccounts& operator=(ListAccountsResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::ListAccountsResponseBodyAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::ListAccountsResponseBodyAccountsAccount>) };
    inline vector<Models::ListAccountsResponseBodyAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::ListAccountsResponseBodyAccountsAccount>) };
    inline ListAccountsResponseBodyAccounts& setAccount(const vector<Models::ListAccountsResponseBodyAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ListAccountsResponseBodyAccounts& setAccount(vector<Models::ListAccountsResponseBodyAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::ListAccountsResponseBodyAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
