// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBACCOUNTRESPONSEBODYSUBACCOUNTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBACCOUNTRESPONSEBODYSUBACCOUNTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSubAccountResponseBodySubAccountListSubAccount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListSubAccountResponseBodySubAccountList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubAccountResponseBodySubAccountList& obj) { 
      DARABONBA_PTR_TO_JSON(SubAccount, subAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubAccountResponseBodySubAccountList& obj) { 
      DARABONBA_PTR_FROM_JSON(SubAccount, subAccount_);
    };
    ListSubAccountResponseBodySubAccountList() = default ;
    ListSubAccountResponseBodySubAccountList(const ListSubAccountResponseBodySubAccountList &) = default ;
    ListSubAccountResponseBodySubAccountList(ListSubAccountResponseBodySubAccountList &&) = default ;
    ListSubAccountResponseBodySubAccountList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubAccountResponseBodySubAccountList() = default ;
    ListSubAccountResponseBodySubAccountList& operator=(const ListSubAccountResponseBodySubAccountList &) = default ;
    ListSubAccountResponseBodySubAccountList& operator=(ListSubAccountResponseBodySubAccountList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subAccount_ == nullptr; };
    // subAccount Field Functions 
    bool hasSubAccount() const { return this->subAccount_ != nullptr;};
    void deleteSubAccount() { this->subAccount_ = nullptr;};
    inline const vector<Models::ListSubAccountResponseBodySubAccountListSubAccount> & subAccount() const { DARABONBA_PTR_GET_CONST(subAccount_, vector<Models::ListSubAccountResponseBodySubAccountListSubAccount>) };
    inline vector<Models::ListSubAccountResponseBodySubAccountListSubAccount> subAccount() { DARABONBA_PTR_GET(subAccount_, vector<Models::ListSubAccountResponseBodySubAccountListSubAccount>) };
    inline ListSubAccountResponseBodySubAccountList& setSubAccount(const vector<Models::ListSubAccountResponseBodySubAccountListSubAccount> & subAccount) { DARABONBA_PTR_SET_VALUE(subAccount_, subAccount) };
    inline ListSubAccountResponseBodySubAccountList& setSubAccount(vector<Models::ListSubAccountResponseBodySubAccountListSubAccount> && subAccount) { DARABONBA_PTR_SET_RVALUE(subAccount_, subAccount) };


  protected:
    std::shared_ptr<vector<Models::ListSubAccountResponseBodySubAccountListSubAccount>> subAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
