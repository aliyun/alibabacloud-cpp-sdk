// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDELEGATEDADMINISTRATORSRESPONSEBODYACCOUNTSACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LISTDELEGATEDADMINISTRATORSRESPONSEBODYACCOUNTSACCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListDelegatedAdministratorsResponseBodyAccountsAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDelegatedAdministratorsResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(DelegationEnabledTime, delegationEnabledTime_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_TO_JSON(ServicePrincipal, servicePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, ListDelegatedAdministratorsResponseBodyAccountsAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(DelegationEnabledTime, delegationEnabledTime_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(JoinMethod, joinMethod_);
      DARABONBA_PTR_FROM_JSON(ServicePrincipal, servicePrincipal_);
    };
    ListDelegatedAdministratorsResponseBodyAccountsAccount() = default ;
    ListDelegatedAdministratorsResponseBodyAccountsAccount(const ListDelegatedAdministratorsResponseBodyAccountsAccount &) = default ;
    ListDelegatedAdministratorsResponseBodyAccountsAccount(ListDelegatedAdministratorsResponseBodyAccountsAccount &&) = default ;
    ListDelegatedAdministratorsResponseBodyAccountsAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDelegatedAdministratorsResponseBodyAccountsAccount() = default ;
    ListDelegatedAdministratorsResponseBodyAccountsAccount& operator=(const ListDelegatedAdministratorsResponseBodyAccountsAccount &) = default ;
    ListDelegatedAdministratorsResponseBodyAccountsAccount& operator=(ListDelegatedAdministratorsResponseBodyAccountsAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->delegationEnabledTime_ != nullptr && this->displayName_ != nullptr && this->joinMethod_ != nullptr && this->servicePrincipal_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListDelegatedAdministratorsResponseBodyAccountsAccount& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // delegationEnabledTime Field Functions 
    bool hasDelegationEnabledTime() const { return this->delegationEnabledTime_ != nullptr;};
    void deleteDelegationEnabledTime() { this->delegationEnabledTime_ = nullptr;};
    inline string delegationEnabledTime() const { DARABONBA_PTR_GET_DEFAULT(delegationEnabledTime_, "") };
    inline ListDelegatedAdministratorsResponseBodyAccountsAccount& setDelegationEnabledTime(string delegationEnabledTime) { DARABONBA_PTR_SET_VALUE(delegationEnabledTime_, delegationEnabledTime) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListDelegatedAdministratorsResponseBodyAccountsAccount& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // joinMethod Field Functions 
    bool hasJoinMethod() const { return this->joinMethod_ != nullptr;};
    void deleteJoinMethod() { this->joinMethod_ = nullptr;};
    inline string joinMethod() const { DARABONBA_PTR_GET_DEFAULT(joinMethod_, "") };
    inline ListDelegatedAdministratorsResponseBodyAccountsAccount& setJoinMethod(string joinMethod) { DARABONBA_PTR_SET_VALUE(joinMethod_, joinMethod) };


    // servicePrincipal Field Functions 
    bool hasServicePrincipal() const { return this->servicePrincipal_ != nullptr;};
    void deleteServicePrincipal() { this->servicePrincipal_ = nullptr;};
    inline string servicePrincipal() const { DARABONBA_PTR_GET_DEFAULT(servicePrincipal_, "") };
    inline ListDelegatedAdministratorsResponseBodyAccountsAccount& setServicePrincipal(string servicePrincipal) { DARABONBA_PTR_SET_VALUE(servicePrincipal_, servicePrincipal) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<string> accountId_ = nullptr;
    // The time when the member was specified as a delegated administrator account.
    std::shared_ptr<string> delegationEnabledTime_ = nullptr;
    // The display name of the member.
    std::shared_ptr<string> displayName_ = nullptr;
    // The way in which the member joins the resource directory. Valid values:
    // 
    // *   invited: The member is invited to join the resource directory.
    // *   created: The member is directly created in the resource directory.
    std::shared_ptr<string> joinMethod_ = nullptr;
    // The identifier of the trusted service.
    std::shared_ptr<string> servicePrincipal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
