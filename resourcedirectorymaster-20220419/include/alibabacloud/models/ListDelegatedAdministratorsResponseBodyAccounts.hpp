// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDADMINISTRATORSRESPONSEBODYACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDADMINISTRATORSRESPONSEBODYACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDelegatedAdministratorsResponseBodyAccountsAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListDelegatedAdministratorsResponseBodyAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedAdministratorsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedAdministratorsResponseBodyAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
    };
    ListDelegatedAdministratorsResponseBodyAccounts() = default ;
    ListDelegatedAdministratorsResponseBodyAccounts(const ListDelegatedAdministratorsResponseBodyAccounts &) = default ;
    ListDelegatedAdministratorsResponseBodyAccounts(ListDelegatedAdministratorsResponseBodyAccounts &&) = default ;
    ListDelegatedAdministratorsResponseBodyAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedAdministratorsResponseBodyAccounts() = default ;
    ListDelegatedAdministratorsResponseBodyAccounts& operator=(const ListDelegatedAdministratorsResponseBodyAccounts &) = default ;
    ListDelegatedAdministratorsResponseBodyAccounts& operator=(ListDelegatedAdministratorsResponseBodyAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount> & account() const { DARABONBA_PTR_GET_CONST(account_, vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount>) };
    inline vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount> account() { DARABONBA_PTR_GET(account_, vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount>) };
    inline ListDelegatedAdministratorsResponseBodyAccounts& setAccount(const vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ListDelegatedAdministratorsResponseBodyAccounts& setAccount(vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


  protected:
    std::shared_ptr<vector<Models::ListDelegatedAdministratorsResponseBodyAccountsAccount>> account_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
