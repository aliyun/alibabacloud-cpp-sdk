// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetAccountSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SummaryMap, summaryMap_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SummaryMap, summaryMap_);
    };
    GetAccountSummaryResponseBody() = default ;
    GetAccountSummaryResponseBody(const GetAccountSummaryResponseBody &) = default ;
    GetAccountSummaryResponseBody(GetAccountSummaryResponseBody &&) = default ;
    GetAccountSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountSummaryResponseBody() = default ;
    GetAccountSummaryResponseBody& operator=(const GetAccountSummaryResponseBody &) = default ;
    GetAccountSummaryResponseBody& operator=(GetAccountSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SummaryMap : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SummaryMap& obj) { 
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
      friend void from_json(const Darabonba::Json& j, SummaryMap& obj) { 
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
      SummaryMap() = default ;
      SummaryMap(const SummaryMap &) = default ;
      SummaryMap(SummaryMap &&) = default ;
      SummaryMap(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SummaryMap() = default ;
      SummaryMap& operator=(const SummaryMap &) = default ;
      SummaryMap& operator=(SummaryMap &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessKeysPerUserQuota_ == nullptr
        && this->accountAccessKeysPerAccountQuota_ == nullptr && this->attachedPoliciesPerGroupQuota_ == nullptr && this->attachedPoliciesPerRoleQuota_ == nullptr && this->attachedPoliciesPerUserQuota_ == nullptr && this->attachedSystemPoliciesPerGroupQuota_ == nullptr
        && this->attachedSystemPoliciesPerRoleQuota_ == nullptr && this->attachedSystemPoliciesPerUserQuota_ == nullptr && this->conditionsPerAKPolicyQuota_ == nullptr && this->groups_ == nullptr && this->groupsPerUserQuota_ == nullptr
        && this->groupsQuota_ == nullptr && this->IPItemsPerAKPolicyQuota_ == nullptr && this->MFADevices_ == nullptr && this->MFADevicesInUse_ == nullptr && this->policies_ == nullptr
        && this->policiesQuota_ == nullptr && this->policySizeQuota_ == nullptr && this->roles_ == nullptr && this->rolesQuota_ == nullptr && this->users_ == nullptr
        && this->usersQuota_ == nullptr && this->versionsPerPolicyQuota_ == nullptr && this->virtualMFADevicesQuota_ == nullptr; };
      // accessKeysPerUserQuota Field Functions 
      bool hasAccessKeysPerUserQuota() const { return this->accessKeysPerUserQuota_ != nullptr;};
      void deleteAccessKeysPerUserQuota() { this->accessKeysPerUserQuota_ = nullptr;};
      inline int32_t getAccessKeysPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(accessKeysPerUserQuota_, 0) };
      inline SummaryMap& setAccessKeysPerUserQuota(int32_t accessKeysPerUserQuota) { DARABONBA_PTR_SET_VALUE(accessKeysPerUserQuota_, accessKeysPerUserQuota) };


      // accountAccessKeysPerAccountQuota Field Functions 
      bool hasAccountAccessKeysPerAccountQuota() const { return this->accountAccessKeysPerAccountQuota_ != nullptr;};
      void deleteAccountAccessKeysPerAccountQuota() { this->accountAccessKeysPerAccountQuota_ = nullptr;};
      inline int32_t getAccountAccessKeysPerAccountQuota() const { DARABONBA_PTR_GET_DEFAULT(accountAccessKeysPerAccountQuota_, 0) };
      inline SummaryMap& setAccountAccessKeysPerAccountQuota(int32_t accountAccessKeysPerAccountQuota) { DARABONBA_PTR_SET_VALUE(accountAccessKeysPerAccountQuota_, accountAccessKeysPerAccountQuota) };


      // attachedPoliciesPerGroupQuota Field Functions 
      bool hasAttachedPoliciesPerGroupQuota() const { return this->attachedPoliciesPerGroupQuota_ != nullptr;};
      void deleteAttachedPoliciesPerGroupQuota() { this->attachedPoliciesPerGroupQuota_ = nullptr;};
      inline int32_t getAttachedPoliciesPerGroupQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedPoliciesPerGroupQuota_, 0) };
      inline SummaryMap& setAttachedPoliciesPerGroupQuota(int32_t attachedPoliciesPerGroupQuota) { DARABONBA_PTR_SET_VALUE(attachedPoliciesPerGroupQuota_, attachedPoliciesPerGroupQuota) };


      // attachedPoliciesPerRoleQuota Field Functions 
      bool hasAttachedPoliciesPerRoleQuota() const { return this->attachedPoliciesPerRoleQuota_ != nullptr;};
      void deleteAttachedPoliciesPerRoleQuota() { this->attachedPoliciesPerRoleQuota_ = nullptr;};
      inline int32_t getAttachedPoliciesPerRoleQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedPoliciesPerRoleQuota_, 0) };
      inline SummaryMap& setAttachedPoliciesPerRoleQuota(int32_t attachedPoliciesPerRoleQuota) { DARABONBA_PTR_SET_VALUE(attachedPoliciesPerRoleQuota_, attachedPoliciesPerRoleQuota) };


      // attachedPoliciesPerUserQuota Field Functions 
      bool hasAttachedPoliciesPerUserQuota() const { return this->attachedPoliciesPerUserQuota_ != nullptr;};
      void deleteAttachedPoliciesPerUserQuota() { this->attachedPoliciesPerUserQuota_ = nullptr;};
      inline int32_t getAttachedPoliciesPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedPoliciesPerUserQuota_, 0) };
      inline SummaryMap& setAttachedPoliciesPerUserQuota(int32_t attachedPoliciesPerUserQuota) { DARABONBA_PTR_SET_VALUE(attachedPoliciesPerUserQuota_, attachedPoliciesPerUserQuota) };


      // attachedSystemPoliciesPerGroupQuota Field Functions 
      bool hasAttachedSystemPoliciesPerGroupQuota() const { return this->attachedSystemPoliciesPerGroupQuota_ != nullptr;};
      void deleteAttachedSystemPoliciesPerGroupQuota() { this->attachedSystemPoliciesPerGroupQuota_ = nullptr;};
      inline int32_t getAttachedSystemPoliciesPerGroupQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedSystemPoliciesPerGroupQuota_, 0) };
      inline SummaryMap& setAttachedSystemPoliciesPerGroupQuota(int32_t attachedSystemPoliciesPerGroupQuota) { DARABONBA_PTR_SET_VALUE(attachedSystemPoliciesPerGroupQuota_, attachedSystemPoliciesPerGroupQuota) };


      // attachedSystemPoliciesPerRoleQuota Field Functions 
      bool hasAttachedSystemPoliciesPerRoleQuota() const { return this->attachedSystemPoliciesPerRoleQuota_ != nullptr;};
      void deleteAttachedSystemPoliciesPerRoleQuota() { this->attachedSystemPoliciesPerRoleQuota_ = nullptr;};
      inline int32_t getAttachedSystemPoliciesPerRoleQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedSystemPoliciesPerRoleQuota_, 0) };
      inline SummaryMap& setAttachedSystemPoliciesPerRoleQuota(int32_t attachedSystemPoliciesPerRoleQuota) { DARABONBA_PTR_SET_VALUE(attachedSystemPoliciesPerRoleQuota_, attachedSystemPoliciesPerRoleQuota) };


      // attachedSystemPoliciesPerUserQuota Field Functions 
      bool hasAttachedSystemPoliciesPerUserQuota() const { return this->attachedSystemPoliciesPerUserQuota_ != nullptr;};
      void deleteAttachedSystemPoliciesPerUserQuota() { this->attachedSystemPoliciesPerUserQuota_ = nullptr;};
      inline int32_t getAttachedSystemPoliciesPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(attachedSystemPoliciesPerUserQuota_, 0) };
      inline SummaryMap& setAttachedSystemPoliciesPerUserQuota(int32_t attachedSystemPoliciesPerUserQuota) { DARABONBA_PTR_SET_VALUE(attachedSystemPoliciesPerUserQuota_, attachedSystemPoliciesPerUserQuota) };


      // conditionsPerAKPolicyQuota Field Functions 
      bool hasConditionsPerAKPolicyQuota() const { return this->conditionsPerAKPolicyQuota_ != nullptr;};
      void deleteConditionsPerAKPolicyQuota() { this->conditionsPerAKPolicyQuota_ = nullptr;};
      inline int32_t getConditionsPerAKPolicyQuota() const { DARABONBA_PTR_GET_DEFAULT(conditionsPerAKPolicyQuota_, 0) };
      inline SummaryMap& setConditionsPerAKPolicyQuota(int32_t conditionsPerAKPolicyQuota) { DARABONBA_PTR_SET_VALUE(conditionsPerAKPolicyQuota_, conditionsPerAKPolicyQuota) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline int32_t getGroups() const { DARABONBA_PTR_GET_DEFAULT(groups_, 0) };
      inline SummaryMap& setGroups(int32_t groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };


      // groupsPerUserQuota Field Functions 
      bool hasGroupsPerUserQuota() const { return this->groupsPerUserQuota_ != nullptr;};
      void deleteGroupsPerUserQuota() { this->groupsPerUserQuota_ = nullptr;};
      inline int32_t getGroupsPerUserQuota() const { DARABONBA_PTR_GET_DEFAULT(groupsPerUserQuota_, 0) };
      inline SummaryMap& setGroupsPerUserQuota(int32_t groupsPerUserQuota) { DARABONBA_PTR_SET_VALUE(groupsPerUserQuota_, groupsPerUserQuota) };


      // groupsQuota Field Functions 
      bool hasGroupsQuota() const { return this->groupsQuota_ != nullptr;};
      void deleteGroupsQuota() { this->groupsQuota_ = nullptr;};
      inline int32_t getGroupsQuota() const { DARABONBA_PTR_GET_DEFAULT(groupsQuota_, 0) };
      inline SummaryMap& setGroupsQuota(int32_t groupsQuota) { DARABONBA_PTR_SET_VALUE(groupsQuota_, groupsQuota) };


      // IPItemsPerAKPolicyQuota Field Functions 
      bool hasIPItemsPerAKPolicyQuota() const { return this->IPItemsPerAKPolicyQuota_ != nullptr;};
      void deleteIPItemsPerAKPolicyQuota() { this->IPItemsPerAKPolicyQuota_ = nullptr;};
      inline int32_t getIPItemsPerAKPolicyQuota() const { DARABONBA_PTR_GET_DEFAULT(IPItemsPerAKPolicyQuota_, 0) };
      inline SummaryMap& setIPItemsPerAKPolicyQuota(int32_t IPItemsPerAKPolicyQuota) { DARABONBA_PTR_SET_VALUE(IPItemsPerAKPolicyQuota_, IPItemsPerAKPolicyQuota) };


      // MFADevices Field Functions 
      bool hasMFADevices() const { return this->MFADevices_ != nullptr;};
      void deleteMFADevices() { this->MFADevices_ = nullptr;};
      inline int32_t getMFADevices() const { DARABONBA_PTR_GET_DEFAULT(MFADevices_, 0) };
      inline SummaryMap& setMFADevices(int32_t MFADevices) { DARABONBA_PTR_SET_VALUE(MFADevices_, MFADevices) };


      // MFADevicesInUse Field Functions 
      bool hasMFADevicesInUse() const { return this->MFADevicesInUse_ != nullptr;};
      void deleteMFADevicesInUse() { this->MFADevicesInUse_ = nullptr;};
      inline int32_t getMFADevicesInUse() const { DARABONBA_PTR_GET_DEFAULT(MFADevicesInUse_, 0) };
      inline SummaryMap& setMFADevicesInUse(int32_t MFADevicesInUse) { DARABONBA_PTR_SET_VALUE(MFADevicesInUse_, MFADevicesInUse) };


      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline int32_t getPolicies() const { DARABONBA_PTR_GET_DEFAULT(policies_, 0) };
      inline SummaryMap& setPolicies(int32_t policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


      // policiesQuota Field Functions 
      bool hasPoliciesQuota() const { return this->policiesQuota_ != nullptr;};
      void deletePoliciesQuota() { this->policiesQuota_ = nullptr;};
      inline int32_t getPoliciesQuota() const { DARABONBA_PTR_GET_DEFAULT(policiesQuota_, 0) };
      inline SummaryMap& setPoliciesQuota(int32_t policiesQuota) { DARABONBA_PTR_SET_VALUE(policiesQuota_, policiesQuota) };


      // policySizeQuota Field Functions 
      bool hasPolicySizeQuota() const { return this->policySizeQuota_ != nullptr;};
      void deletePolicySizeQuota() { this->policySizeQuota_ = nullptr;};
      inline int32_t getPolicySizeQuota() const { DARABONBA_PTR_GET_DEFAULT(policySizeQuota_, 0) };
      inline SummaryMap& setPolicySizeQuota(int32_t policySizeQuota) { DARABONBA_PTR_SET_VALUE(policySizeQuota_, policySizeQuota) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline int32_t getRoles() const { DARABONBA_PTR_GET_DEFAULT(roles_, 0) };
      inline SummaryMap& setRoles(int32_t roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };


      // rolesQuota Field Functions 
      bool hasRolesQuota() const { return this->rolesQuota_ != nullptr;};
      void deleteRolesQuota() { this->rolesQuota_ = nullptr;};
      inline int32_t getRolesQuota() const { DARABONBA_PTR_GET_DEFAULT(rolesQuota_, 0) };
      inline SummaryMap& setRolesQuota(int32_t rolesQuota) { DARABONBA_PTR_SET_VALUE(rolesQuota_, rolesQuota) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline int32_t getUsers() const { DARABONBA_PTR_GET_DEFAULT(users_, 0) };
      inline SummaryMap& setUsers(int32_t users) { DARABONBA_PTR_SET_VALUE(users_, users) };


      // usersQuota Field Functions 
      bool hasUsersQuota() const { return this->usersQuota_ != nullptr;};
      void deleteUsersQuota() { this->usersQuota_ = nullptr;};
      inline int32_t getUsersQuota() const { DARABONBA_PTR_GET_DEFAULT(usersQuota_, 0) };
      inline SummaryMap& setUsersQuota(int32_t usersQuota) { DARABONBA_PTR_SET_VALUE(usersQuota_, usersQuota) };


      // versionsPerPolicyQuota Field Functions 
      bool hasVersionsPerPolicyQuota() const { return this->versionsPerPolicyQuota_ != nullptr;};
      void deleteVersionsPerPolicyQuota() { this->versionsPerPolicyQuota_ = nullptr;};
      inline int32_t getVersionsPerPolicyQuota() const { DARABONBA_PTR_GET_DEFAULT(versionsPerPolicyQuota_, 0) };
      inline SummaryMap& setVersionsPerPolicyQuota(int32_t versionsPerPolicyQuota) { DARABONBA_PTR_SET_VALUE(versionsPerPolicyQuota_, versionsPerPolicyQuota) };


      // virtualMFADevicesQuota Field Functions 
      bool hasVirtualMFADevicesQuota() const { return this->virtualMFADevicesQuota_ != nullptr;};
      void deleteVirtualMFADevicesQuota() { this->virtualMFADevicesQuota_ = nullptr;};
      inline int32_t getVirtualMFADevicesQuota() const { DARABONBA_PTR_GET_DEFAULT(virtualMFADevicesQuota_, 0) };
      inline SummaryMap& setVirtualMFADevicesQuota(int32_t virtualMFADevicesQuota) { DARABONBA_PTR_SET_VALUE(virtualMFADevicesQuota_, virtualMFADevicesQuota) };


    protected:
      // The maximum number of AccessKey pairs that a Resource Access Management (RAM) user can have.
      shared_ptr<int32_t> accessKeysPerUserQuota_ {};
      shared_ptr<int32_t> accountAccessKeysPerAccountQuota_ {};
      // The maximum number of custom policies that can be added to a RAM user group.
      shared_ptr<int32_t> attachedPoliciesPerGroupQuota_ {};
      // The maximum number of custom policies that can be added to a RAM role.
      shared_ptr<int32_t> attachedPoliciesPerRoleQuota_ {};
      // The maximum number of custom policies that can be added to a RAM user.
      shared_ptr<int32_t> attachedPoliciesPerUserQuota_ {};
      // The maximum number of system policies that can be added to a RAM user group.
      shared_ptr<int32_t> attachedSystemPoliciesPerGroupQuota_ {};
      // The maximum number of system policies that can be added to a RAM role.
      shared_ptr<int32_t> attachedSystemPoliciesPerRoleQuota_ {};
      // The maximum number of system policies that can be added to a RAM user.
      shared_ptr<int32_t> attachedSystemPoliciesPerUserQuota_ {};
      // The maximum number of network access control policies that can be configured for an Alibaba Cloud account or AccessKey pair.
      shared_ptr<int32_t> conditionsPerAKPolicyQuota_ {};
      // The number of RAM user groups.
      shared_ptr<int32_t> groups_ {};
      // The maximum number of RAM user groups to which a RAM user can be added.
      shared_ptr<int32_t> groupsPerUserQuota_ {};
      // The maximum number of RAM user groups that can be created.
      shared_ptr<int32_t> groupsQuota_ {};
      // The maximum number of IP addresses that can be specified in an account-level AccessKey pair-based or AccessKey pair-level policy for network access control.
      shared_ptr<int32_t> IPItemsPerAKPolicyQuota_ {};
      // The number of virtual multi-factor authentication (MFA) devices.
      shared_ptr<int32_t> MFADevices_ {};
      // The number of virtual MFA devices in use.
      shared_ptr<int32_t> MFADevicesInUse_ {};
      // The number of custom policies.
      shared_ptr<int32_t> policies_ {};
      // The maximum number of custom policies that can be created.
      shared_ptr<int32_t> policiesQuota_ {};
      // The maximum length of the policy content.
      shared_ptr<int32_t> policySizeQuota_ {};
      // The number of RAM roles.
      shared_ptr<int32_t> roles_ {};
      // The maximum number of RAM roles that can be created.
      shared_ptr<int32_t> rolesQuota_ {};
      // The number of RAM users.
      shared_ptr<int32_t> users_ {};
      // The maximum number of RAM users that can be created.
      shared_ptr<int32_t> usersQuota_ {};
      // The maximum number of policy versions.
      shared_ptr<int32_t> versionsPerPolicyQuota_ {};
      // The maximum number of virtual MFA devices that can be created.
      shared_ptr<int32_t> virtualMFADevicesQuota_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->summaryMap_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAccountSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summaryMap Field Functions 
    bool hasSummaryMap() const { return this->summaryMap_ != nullptr;};
    void deleteSummaryMap() { this->summaryMap_ = nullptr;};
    inline const GetAccountSummaryResponseBody::SummaryMap & getSummaryMap() const { DARABONBA_PTR_GET_CONST(summaryMap_, GetAccountSummaryResponseBody::SummaryMap) };
    inline GetAccountSummaryResponseBody::SummaryMap getSummaryMap() { DARABONBA_PTR_GET(summaryMap_, GetAccountSummaryResponseBody::SummaryMap) };
    inline GetAccountSummaryResponseBody& setSummaryMap(const GetAccountSummaryResponseBody::SummaryMap & summaryMap) { DARABONBA_PTR_SET_VALUE(summaryMap_, summaryMap) };
    inline GetAccountSummaryResponseBody& setSummaryMap(GetAccountSummaryResponseBody::SummaryMap && summaryMap) { DARABONBA_PTR_SET_RVALUE(summaryMap_, summaryMap) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The overview information about the Alibaba Cloud account.
    shared_ptr<GetAccountSummaryResponseBody::SummaryMap> summaryMap_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
