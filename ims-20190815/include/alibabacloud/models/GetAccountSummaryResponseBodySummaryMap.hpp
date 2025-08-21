// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTSUMMARYRESPONSEBODYSUMMARYMAP_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTSUMMARYRESPONSEBODYSUMMARYMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountSummaryResponseBodySummaryMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountSummaryResponseBodySummaryMap& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeysPerUserQuota, accessKeysPerUserQuota_);
      DARABONBA_PTR_TO_JSON(AccountAccessKeysPerAccountQuota, accountAccessKeysPerAccountQuota_);
      DARABONBA_PTR_TO_JSON(AttachedPoliciesPerGroupQuota, attachedPoliciesPerGroupQuota_);
      DARABONBA_PTR_TO_JSON(AttachedPoliciesPerRoleQuota, attachedPoliciesPerRoleQuota_);
      DARABONBA_PTR_TO_JSON(AttachedPoliciesPerUserQuota, attachedPoliciesPerUserQuota_);
      DARABONBA_PTR_TO_JSON(AttachedSystemPoliciesPerGroupQuota, attachedSystemPoliciesPerGroupQuota_);
      DARABONBA_PTR_TO_JSON(AttachedSystemPoliciesPerRoleQuota, attachedSystemPoliciesPerRoleQuota_);
      DARABONBA_PTR_TO_JSON(AttachedSystemPoliciesPerUserQuota, attachedSystemPoliciesPerUserQuota_);
      DARABONBA_PTR_TO_JSON(ConditionsPerAKPolicyQuota, conditionsPerAKPolicyQuota_);
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(GroupsPerUserQuota, groupsPerUserQuota_);
      DARABONBA_PTR_TO_JSON(GroupsQuota, groupsQuota_);
      DARABONBA_PTR_TO_JSON(IPItemsPerAKPolicyQuota, IPItemsPerAKPolicyQuota_);
      DARABONBA_PTR_TO_JSON(MFADevices, MFADevices_);
      DARABONBA_PTR_TO_JSON(MFADevicesInUse, MFADevicesInUse_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(PoliciesQuota, policiesQuota_);
      DARABONBA_PTR_TO_JSON(PolicySizeQuota, policySizeQuota_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(RolesQuota, rolesQuota_);
      DARABONBA_PTR_TO_JSON(Users, users_);
      DARABONBA_PTR_TO_JSON(UsersQuota, usersQuota_);
      DARABONBA_PTR_TO_JSON(VersionsPerPolicyQuota, versionsPerPolicyQuota_);
      DARABONBA_PTR_TO_JSON(VirtualMFADevicesQuota, virtualMFADevicesQuota_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountSummaryResponseBodySummaryMap& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeysPerUserQuota, accessKeysPerUserQuota_);
      DARABONBA_PTR_FROM_JSON(AccountAccessKeysPerAccountQuota, accountAccessKeysPerAccountQuota_);
      DARABONBA_PTR_FROM_JSON(AttachedPoliciesPerGroupQuota, attachedPoliciesPerGroupQuota_);
      DARABONBA_PTR_FROM_JSON(AttachedPoliciesPerRoleQuota, attachedPoliciesPerRoleQuota_);
      DARABONBA_PTR_FROM_JSON(AttachedPoliciesPerUserQuota, attachedPoliciesPerUserQuota_);
      DARABONBA_PTR_FROM_JSON(AttachedSystemPoliciesPerGroupQuota, attachedSystemPoliciesPerGroupQuota_);
      DARABONBA_PTR_FROM_JSON(AttachedSystemPoliciesPerRoleQuota, attachedSystemPoliciesPerRoleQuota_);
      DARABONBA_PTR_FROM_JSON(AttachedSystemPoliciesPerUserQuota, attachedSystemPoliciesPerUserQuota_);
      DARABONBA_PTR_FROM_JSON(ConditionsPerAKPolicyQuota, conditionsPerAKPolicyQuota_);
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(GroupsPerUserQuota, groupsPerUserQuota_);
      DARABONBA_PTR_FROM_JSON(GroupsQuota, groupsQuota_);
      DARABONBA_PTR_FROM_JSON(IPItemsPerAKPolicyQuota, IPItemsPerAKPolicyQuota_);
      DARABONBA_PTR_FROM_JSON(MFADevices, MFADevices_);
      DARABONBA_PTR_FROM_JSON(MFADevicesInUse, MFADevicesInUse_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(PoliciesQuota, policiesQuota_);
      DARABONBA_PTR_FROM_JSON(PolicySizeQuota, policySizeQuota_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(RolesQuota, rolesQuota_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
      DARABONBA_PTR_FROM_JSON(UsersQuota, usersQuota_);
      DARABONBA_PTR_FROM_JSON(VersionsPerPolicyQuota, versionsPerPolicyQuota_);
      DARABONBA_PTR_FROM_JSON(VirtualMFADevicesQuota, virtualMFADevicesQuota_);
    };
    GetAccountSummaryResponseBodySummaryMap() = default ;
    GetAccountSummaryResponseBodySummaryMap(const GetAccountSummaryResponseBodySummaryMap &) = default ;
    GetAccountSummaryResponseBodySummaryMap(GetAccountSummaryResponseBodySummaryMap &&) = default ;
    GetAccountSummaryResponseBodySummaryMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountSummaryResponseBodySummaryMap() = default ;
    GetAccountSummaryResponseBodySummaryMap& operator=(const GetAccountSummaryResponseBodySummaryMap &) = default ;
    GetAccountSummaryResponseBodySummaryMap& operator=(GetAccountSummaryResponseBodySummaryMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeysPerUserQuota_ != nullptr
        && this->accountAccessKeysPerAccountQuota_ != nullptr && this->attachedPoliciesPerGroupQuota_ != nullptr && this->attachedPoliciesPerRoleQuota_ != nullptr && this->attachedPoliciesPerUserQuota_ != nullptr && this->attachedSystemPoliciesPerGroupQuota_ != nullptr
        && this->attachedSystemPoliciesPerRoleQuota_ != nullptr && this->attachedSystemPoliciesPerUserQuota_ != nullptr && this->conditionsPerAKPolicyQuota_ != nullptr && this->groups_ != nullptr && this->groupsPerUserQuota_ != nullptr
        && this->groupsQuota_ != nullptr && this->IPItemsPerAKPolicyQuota_ != nullptr && this->MFADevices_ != nullptr && this->MFADevicesInUse_ != nullptr && this->policies_ != nullptr
        && this->policiesQuota_ != nullptr && this->policySizeQuota_ != nullptr && this->roles_ != nullptr && this->rolesQuota_ != nullptr && this->users_ != nullptr
        && this->usersQuota_ != nullptr && this->versionsPerPolicyQuota_ != nullptr && this->virtualMFADevicesQuota_ != nullptr; };
    // accessKeysPerUserQuota Field Functions 
    bool hasAccessKeysPerUserQuota() const { return this->accessKeysPerUserQuota_ != nullptr;};
    void deleteAccessKeysPerUserQuota() { this->accessKeysPerUserQuota_ = nullptr;};
    inline int32_t accessKeysPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(accessKeysPerUserQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAccessKeysPerUserQuota(int32_t accessKeysPerUserQuota) { DARABONBA_PTR_SET_VALUE(accessKeysPerUserQuota_, accessKeysPerUserQuota) };


    // accountAccessKeysPerAccountQuota Field Functions 
    bool hasAccountAccessKeysPerAccountQuota() const { return this->accountAccessKeysPerAccountQuota_ != nullptr;};
    void deleteAccountAccessKeysPerAccountQuota() { this->accountAccessKeysPerAccountQuota_ = nullptr;};
    inline int32_t accountAccessKeysPerAccountQuota() const { DARABONBA_PTR_GET_DEFAULT(accountAccessKeysPerAccountQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAccountAccessKeysPerAccountQuota(int32_t accountAccessKeysPerAccountQuota) { DARABONBA_PTR_SET_VALUE(accountAccessKeysPerAccountQuota_, accountAccessKeysPerAccountQuota) };


    // attachedPoliciesPerGroupQuota Field Functions 
    bool hasAttachedPoliciesPerGroupQuota() const { return this->attachedPoliciesPerGroupQuota_ != nullptr;};
    void deleteAttachedPoliciesPerGroupQuota() { this->attachedPoliciesPerGroupQuota_ = nullptr;};
    inline int32_t attachedPoliciesPerGroupQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedPoliciesPerGroupQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAttachedPoliciesPerGroupQuota(int32_t attachedPoliciesPerGroupQuota) { DARABONBA_PTR_SET_VALUE(attachedPoliciesPerGroupQuota_, attachedPoliciesPerGroupQuota) };


    // attachedPoliciesPerRoleQuota Field Functions 
    bool hasAttachedPoliciesPerRoleQuota() const { return this->attachedPoliciesPerRoleQuota_ != nullptr;};
    void deleteAttachedPoliciesPerRoleQuota() { this->attachedPoliciesPerRoleQuota_ = nullptr;};
    inline int32_t attachedPoliciesPerRoleQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedPoliciesPerRoleQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAttachedPoliciesPerRoleQuota(int32_t attachedPoliciesPerRoleQuota) { DARABONBA_PTR_SET_VALUE(attachedPoliciesPerRoleQuota_, attachedPoliciesPerRoleQuota) };


    // attachedPoliciesPerUserQuota Field Functions 
    bool hasAttachedPoliciesPerUserQuota() const { return this->attachedPoliciesPerUserQuota_ != nullptr;};
    void deleteAttachedPoliciesPerUserQuota() { this->attachedPoliciesPerUserQuota_ = nullptr;};
    inline int32_t attachedPoliciesPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedPoliciesPerUserQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAttachedPoliciesPerUserQuota(int32_t attachedPoliciesPerUserQuota) { DARABONBA_PTR_SET_VALUE(attachedPoliciesPerUserQuota_, attachedPoliciesPerUserQuota) };


    // attachedSystemPoliciesPerGroupQuota Field Functions 
    bool hasAttachedSystemPoliciesPerGroupQuota() const { return this->attachedSystemPoliciesPerGroupQuota_ != nullptr;};
    void deleteAttachedSystemPoliciesPerGroupQuota() { this->attachedSystemPoliciesPerGroupQuota_ = nullptr;};
    inline int32_t attachedSystemPoliciesPerGroupQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedSystemPoliciesPerGroupQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAttachedSystemPoliciesPerGroupQuota(int32_t attachedSystemPoliciesPerGroupQuota) { DARABONBA_PTR_SET_VALUE(attachedSystemPoliciesPerGroupQuota_, attachedSystemPoliciesPerGroupQuota) };


    // attachedSystemPoliciesPerRoleQuota Field Functions 
    bool hasAttachedSystemPoliciesPerRoleQuota() const { return this->attachedSystemPoliciesPerRoleQuota_ != nullptr;};
    void deleteAttachedSystemPoliciesPerRoleQuota() { this->attachedSystemPoliciesPerRoleQuota_ = nullptr;};
    inline int32_t attachedSystemPoliciesPerRoleQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedSystemPoliciesPerRoleQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAttachedSystemPoliciesPerRoleQuota(int32_t attachedSystemPoliciesPerRoleQuota) { DARABONBA_PTR_SET_VALUE(attachedSystemPoliciesPerRoleQuota_, attachedSystemPoliciesPerRoleQuota) };


    // attachedSystemPoliciesPerUserQuota Field Functions 
    bool hasAttachedSystemPoliciesPerUserQuota() const { return this->attachedSystemPoliciesPerUserQuota_ != nullptr;};
    void deleteAttachedSystemPoliciesPerUserQuota() { this->attachedSystemPoliciesPerUserQuota_ = nullptr;};
    inline int32_t attachedSystemPoliciesPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedSystemPoliciesPerUserQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setAttachedSystemPoliciesPerUserQuota(int32_t attachedSystemPoliciesPerUserQuota) { DARABONBA_PTR_SET_VALUE(attachedSystemPoliciesPerUserQuota_, attachedSystemPoliciesPerUserQuota) };


    // conditionsPerAKPolicyQuota Field Functions 
    bool hasConditionsPerAKPolicyQuota() const { return this->conditionsPerAKPolicyQuota_ != nullptr;};
    void deleteConditionsPerAKPolicyQuota() { this->conditionsPerAKPolicyQuota_ = nullptr;};
    inline int32_t conditionsPerAKPolicyQuota() const { DARABONBA_PTR_GET_DEFAULT(conditionsPerAKPolicyQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setConditionsPerAKPolicyQuota(int32_t conditionsPerAKPolicyQuota) { DARABONBA_PTR_SET_VALUE(conditionsPerAKPolicyQuota_, conditionsPerAKPolicyQuota) };


    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline int32_t groups() const { DARABONBA_PTR_GET_DEFAULT(groups_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setGroups(int32_t groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };


    // groupsPerUserQuota Field Functions 
    bool hasGroupsPerUserQuota() const { return this->groupsPerUserQuota_ != nullptr;};
    void deleteGroupsPerUserQuota() { this->groupsPerUserQuota_ = nullptr;};
    inline int32_t groupsPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(groupsPerUserQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setGroupsPerUserQuota(int32_t groupsPerUserQuota) { DARABONBA_PTR_SET_VALUE(groupsPerUserQuota_, groupsPerUserQuota) };


    // groupsQuota Field Functions 
    bool hasGroupsQuota() const { return this->groupsQuota_ != nullptr;};
    void deleteGroupsQuota() { this->groupsQuota_ = nullptr;};
    inline int32_t groupsQuota() const { DARABONBA_PTR_GET_DEFAULT(groupsQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setGroupsQuota(int32_t groupsQuota) { DARABONBA_PTR_SET_VALUE(groupsQuota_, groupsQuota) };


    // IPItemsPerAKPolicyQuota Field Functions 
    bool hasIPItemsPerAKPolicyQuota() const { return this->IPItemsPerAKPolicyQuota_ != nullptr;};
    void deleteIPItemsPerAKPolicyQuota() { this->IPItemsPerAKPolicyQuota_ = nullptr;};
    inline int32_t IPItemsPerAKPolicyQuota() const { DARABONBA_PTR_GET_DEFAULT(IPItemsPerAKPolicyQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setIPItemsPerAKPolicyQuota(int32_t IPItemsPerAKPolicyQuota) { DARABONBA_PTR_SET_VALUE(IPItemsPerAKPolicyQuota_, IPItemsPerAKPolicyQuota) };


    // MFADevices Field Functions 
    bool hasMFADevices() const { return this->MFADevices_ != nullptr;};
    void deleteMFADevices() { this->MFADevices_ = nullptr;};
    inline int32_t MFADevices() const { DARABONBA_PTR_GET_DEFAULT(MFADevices_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setMFADevices(int32_t MFADevices) { DARABONBA_PTR_SET_VALUE(MFADevices_, MFADevices) };


    // MFADevicesInUse Field Functions 
    bool hasMFADevicesInUse() const { return this->MFADevicesInUse_ != nullptr;};
    void deleteMFADevicesInUse() { this->MFADevicesInUse_ = nullptr;};
    inline int32_t MFADevicesInUse() const { DARABONBA_PTR_GET_DEFAULT(MFADevicesInUse_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setMFADevicesInUse(int32_t MFADevicesInUse) { DARABONBA_PTR_SET_VALUE(MFADevicesInUse_, MFADevicesInUse) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline int32_t policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setPolicies(int32_t policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


    // policiesQuota Field Functions 
    bool hasPoliciesQuota() const { return this->policiesQuota_ != nullptr;};
    void deletePoliciesQuota() { this->policiesQuota_ = nullptr;};
    inline int32_t policiesQuota() const { DARABONBA_PTR_GET_DEFAULT(policiesQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setPoliciesQuota(int32_t policiesQuota) { DARABONBA_PTR_SET_VALUE(policiesQuota_, policiesQuota) };


    // policySizeQuota Field Functions 
    bool hasPolicySizeQuota() const { return this->policySizeQuota_ != nullptr;};
    void deletePolicySizeQuota() { this->policySizeQuota_ = nullptr;};
    inline int32_t policySizeQuota() const { DARABONBA_PTR_GET_DEFAULT(policySizeQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setPolicySizeQuota(int32_t policySizeQuota) { DARABONBA_PTR_SET_VALUE(policySizeQuota_, policySizeQuota) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline int32_t roles() const { DARABONBA_PTR_GET_DEFAULT(roles_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setRoles(int32_t roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };


    // rolesQuota Field Functions 
    bool hasRolesQuota() const { return this->rolesQuota_ != nullptr;};
    void deleteRolesQuota() { this->rolesQuota_ = nullptr;};
    inline int32_t rolesQuota() const { DARABONBA_PTR_GET_DEFAULT(rolesQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setRolesQuota(int32_t rolesQuota) { DARABONBA_PTR_SET_VALUE(rolesQuota_, rolesQuota) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline int32_t users() const { DARABONBA_PTR_GET_DEFAULT(users_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setUsers(int32_t users) { DARABONBA_PTR_SET_VALUE(users_, users) };


    // usersQuota Field Functions 
    bool hasUsersQuota() const { return this->usersQuota_ != nullptr;};
    void deleteUsersQuota() { this->usersQuota_ = nullptr;};
    inline int32_t usersQuota() const { DARABONBA_PTR_GET_DEFAULT(usersQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setUsersQuota(int32_t usersQuota) { DARABONBA_PTR_SET_VALUE(usersQuota_, usersQuota) };


    // versionsPerPolicyQuota Field Functions 
    bool hasVersionsPerPolicyQuota() const { return this->versionsPerPolicyQuota_ != nullptr;};
    void deleteVersionsPerPolicyQuota() { this->versionsPerPolicyQuota_ = nullptr;};
    inline int32_t versionsPerPolicyQuota() const { DARABONBA_PTR_GET_DEFAULT(versionsPerPolicyQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setVersionsPerPolicyQuota(int32_t versionsPerPolicyQuota) { DARABONBA_PTR_SET_VALUE(versionsPerPolicyQuota_, versionsPerPolicyQuota) };


    // virtualMFADevicesQuota Field Functions 
    bool hasVirtualMFADevicesQuota() const { return this->virtualMFADevicesQuota_ != nullptr;};
    void deleteVirtualMFADevicesQuota() { this->virtualMFADevicesQuota_ = nullptr;};
    inline int32_t virtualMFADevicesQuota() const { DARABONBA_PTR_GET_DEFAULT(virtualMFADevicesQuota_, 0) };
    inline GetAccountSummaryResponseBodySummaryMap& setVirtualMFADevicesQuota(int32_t virtualMFADevicesQuota) { DARABONBA_PTR_SET_VALUE(virtualMFADevicesQuota_, virtualMFADevicesQuota) };


  protected:
    // The maximum number of AccessKey pairs that a Resource Access Management (RAM) user can have.
    std::shared_ptr<int32_t> accessKeysPerUserQuota_ = nullptr;
    std::shared_ptr<int32_t> accountAccessKeysPerAccountQuota_ = nullptr;
    // The maximum number of custom policies that can be added to a RAM user group.
    std::shared_ptr<int32_t> attachedPoliciesPerGroupQuota_ = nullptr;
    // The maximum number of custom policies that can be added to a RAM role.
    std::shared_ptr<int32_t> attachedPoliciesPerRoleQuota_ = nullptr;
    // The maximum number of custom policies that can be added to a RAM user.
    std::shared_ptr<int32_t> attachedPoliciesPerUserQuota_ = nullptr;
    // The maximum number of system policies that can be added to a RAM user group.
    std::shared_ptr<int32_t> attachedSystemPoliciesPerGroupQuota_ = nullptr;
    // The maximum number of system policies that can be added to a RAM role.
    std::shared_ptr<int32_t> attachedSystemPoliciesPerRoleQuota_ = nullptr;
    // The maximum number of system policies that can be added to a RAM user.
    std::shared_ptr<int32_t> attachedSystemPoliciesPerUserQuota_ = nullptr;
    // The maximum number of network access control policies that can be configured for an Alibaba Cloud account or AccessKey pair.
    std::shared_ptr<int32_t> conditionsPerAKPolicyQuota_ = nullptr;
    // The number of RAM user groups.
    std::shared_ptr<int32_t> groups_ = nullptr;
    // The maximum number of RAM user groups to which a RAM user can be added.
    std::shared_ptr<int32_t> groupsPerUserQuota_ = nullptr;
    // The maximum number of RAM user groups that can be created.
    std::shared_ptr<int32_t> groupsQuota_ = nullptr;
    // The maximum number of IP addresses that can be specified in an account-level AccessKey pair-based or AccessKey pair-level policy for network access control.
    std::shared_ptr<int32_t> IPItemsPerAKPolicyQuota_ = nullptr;
    // The number of virtual multi-factor authentication (MFA) devices.
    std::shared_ptr<int32_t> MFADevices_ = nullptr;
    // The number of virtual MFA devices in use.
    std::shared_ptr<int32_t> MFADevicesInUse_ = nullptr;
    // The number of custom policies.
    std::shared_ptr<int32_t> policies_ = nullptr;
    // The maximum number of custom policies that can be created.
    std::shared_ptr<int32_t> policiesQuota_ = nullptr;
    // The maximum length of the policy content.
    std::shared_ptr<int32_t> policySizeQuota_ = nullptr;
    // The number of RAM roles.
    std::shared_ptr<int32_t> roles_ = nullptr;
    // The maximum number of RAM roles that can be created.
    std::shared_ptr<int32_t> rolesQuota_ = nullptr;
    // The number of RAM users.
    std::shared_ptr<int32_t> users_ = nullptr;
    // The maximum number of RAM users that can be created.
    std::shared_ptr<int32_t> usersQuota_ = nullptr;
    // The maximum number of policy versions.
    std::shared_ptr<int32_t> versionsPerPolicyQuota_ = nullptr;
    // The maximum number of virtual MFA devices that can be created.
    std::shared_ptr<int32_t> virtualMFADevicesQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
