// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULTDATARULESUSERMAPPINGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONBYUSERIDRESPONSEBODYPAGERESULTDATARULESUSERMAPPINGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
    };
    ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList() = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList(const ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList(ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList &&) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList() = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& operator=(const ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList &) = default ;
    ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& operator=(ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountType_ == nullptr
        && return this->accounts_ == nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts> & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts>) };
    inline vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts> accounts() { DARABONBA_PTR_GET(accounts_, vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts>) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& setAccounts(const vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingList& setAccounts(vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


  protected:
    std::shared_ptr<string> accountType_ = nullptr;
    std::shared_ptr<vector<Models::ListRowPermissionByUserIdResponseBodyPageResultDataRulesUserMappingListAccounts>> accounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
