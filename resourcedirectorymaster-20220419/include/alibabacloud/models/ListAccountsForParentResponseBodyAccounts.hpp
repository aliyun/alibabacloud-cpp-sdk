// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTSFORPARENTRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountsForParentResponseBodyAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListAccountsForParentResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountsForParentResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountsForParentResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
    };
    ListAccountsForParentResponseBodyAccounts() = default ;
    ListAccountsForParentResponseBodyAccounts(const ListAccountsForParentResponseBodyAccounts &) = default ;
    ListAccountsForParentResponseBodyAccounts(ListAccountsForParentResponseBodyAccounts &&) = default ;
    ListAccountsForParentResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountsForParentResponseBodyAccounts() = default ;
    ListAccountsForParentResponseBodyAccounts& operator=(const ListAccountsForParentResponseBodyAccounts &) = default ;
    ListAccountsForParentResponseBodyAccounts& operator=(ListAccountsForParentResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::ListAccountsForParentResponseBodyAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::ListAccountsForParentResponseBodyAccountsAccount>) };
    inline vector<Models::ListAccountsForParentResponseBodyAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::ListAccountsForParentResponseBodyAccountsAccount>) };
    inline ListAccountsForParentResponseBodyAccounts& setAccount(const vector<Models::ListAccountsForParentResponseBodyAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ListAccountsForParentResponseBodyAccounts& setAccount(vector<Models::ListAccountsForParentResponseBodyAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::ListAccountsForParentResponseBodyAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
