// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class AttachPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    AttachPolicyRequest() = default ;
    AttachPolicyRequest(const AttachPolicyRequest &) = default ;
    AttachPolicyRequest(AttachPolicyRequest &&) = default ;
    AttachPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachPolicyRequest() = default ;
    AttachPolicyRequest& operator=(const AttachPolicyRequest &) = default ;
    AttachPolicyRequest& operator=(AttachPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->principalName_ == nullptr && this->principalType_ == nullptr && this->resourceGroupId_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline AttachPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline AttachPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // principalName Field Functions 
    bool hasPrincipalName() const { return this->principalName_ != nullptr;};
    void deletePrincipalName() { this->principalName_ = nullptr;};
    inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
    inline AttachPolicyRequest& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline AttachPolicyRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AttachPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // Policy Name of the access policy.
    // 
    // Policy Name must be 1 to 128 characters in length and can contain letters, digits, and hyphens (-).
    // 
    // This parameter is required.
    shared_ptr<string> policyName_ {};
    // The type of the access policy. Valid values:
    // 
    // - Custom: custom access policy.
    // - System: system access policy.
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    // The name of the authorization object. The format varies based on the object type:
    // 
    // - Resource Access Management (RAM) user: <UserName>@<AccountAlias>.onaliyun.com, where <UserName> is the RAM username and <AccountAlias> is the account alias.
    // - RAM user group: <GroupName>@group.<AccountAlias>.onaliyun.com, where <GroupName> is the RAM user group name and <AccountAlias> is the account alias.
    // - RAM role: <RoleName>@role.<AccountAlias>.onaliyunservice.com, where <RoleName> is the RAM role name and <AccountAlias> is the account alias.
    // 
    // > The account alias is part of the default domain name. Invoke [GetDefaultDomain](https://help.aliyun.com/document_detail/186720.html) to obtain the account alias.
    // 
    // This parameter is required.
    shared_ptr<string> principalName_ {};
    // The authorization object type. Valid values:
    // 
    // - IMSUser: Resource Access Management (RAM) user.
    // - IMSGroup: RAM user group.
    // - ServiceRole: RAM role.
    // 
    // This parameter is required.
    shared_ptr<string> principalType_ {};
    // The authorization scope. Valid values:
    // 
    // - Resource group ID: The permissions take effect within the specified resource group.
    // - Alibaba Cloud account ID: The ID of the Alibaba Cloud account to which the principal belongs. The permissions take effect within the Alibaba Cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
