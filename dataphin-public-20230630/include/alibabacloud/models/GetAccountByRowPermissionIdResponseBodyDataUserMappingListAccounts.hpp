// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDRESPONSEBODYDATAUSERMAPPINGLISTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTBYROWPERMISSIONIDRESPONSEBODYDATAUSERMAPPINGLISTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
    };
    GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts() = default ;
    GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts(const GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts &) = default ;
    GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts(GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts &&) = default ;
    GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts() = default ;
    GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts& operator=(const GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts &) = default ;
    GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts& operator=(GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountName_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetAccountByRowPermissionIdResponseBodyDataUserMappingListAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> accountName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
