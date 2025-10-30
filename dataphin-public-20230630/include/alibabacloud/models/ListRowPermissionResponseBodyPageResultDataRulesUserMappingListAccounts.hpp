// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATARULESUSERMAPPINGLISTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_LISTROWPERMISSIONRESPONSEBODYPAGERESULTDATARULESUSERMAPPINGLISTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
    };
    ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts() = default ;
    ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts(const ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts &) = default ;
    ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts(ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts &&) = default ;
    ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts() = default ;
    ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts& operator=(const ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts &) = default ;
    ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts& operator=(ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListRowPermissionResponseBodyPageResultDataRulesUserMappingListAccounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
