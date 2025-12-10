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
        && return this->policyType_ == nullptr && return this->principalName_ == nullptr && return this->principalType_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline AttachPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline AttachPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // principalName Field Functions 
    bool hasPrincipalName() const { return this->principalName_ != nullptr;};
    void deletePrincipalName() { this->principalName_ = nullptr;};
    inline string principalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
    inline AttachPolicyRequest& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string principalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline AttachPolicyRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline AttachPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the permission policy.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> policyName_ = nullptr;
    // The type of the permission policy. Valid values:
    // 
    // *   Custom
    // *   System
    // 
    // This parameter is required.
    std::shared_ptr<string> policyType_ = nullptr;
    // The name of the object to which you want to attach the permission policy.
    // 
    // *   If you want to attach the permission policy to a RAM user, specify the name in the @.onaliyun.com format. indicates the name of the RAM user, and indicates the alias of the Alibaba Cloud account to which the RAM user belongs.
    // *   If you want to attach the permission policy to a RAM user group, specify the name in the @group..onaliyun.com format. indicates the name of the RAM user group, and indicates the alias of the Alibaba Cloud account to which the RAM user group belongs.
    // *   If you want to attach the permission policy to a RAM role, specify the name in the @role..onaliyunservice.com format. indicates the name of the RAM role, and indicates the alias of the Alibaba Cloud account to which the RAM role belongs.
    // 
    // >  The alias of an Alibaba Cloud account is a part of the default domain name. You can call the [GetDefaultDomain](https://help.aliyun.com/document_detail/186720.html) operation to obtain the alias of an Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> principalName_ = nullptr;
    // The type of the object to which you want to attach the permission policy. Valid values:
    // 
    // *   IMSUser: RAM user
    // *   IMSGroup: RAM user group
    // *   ServiceRole: RAM role
    // 
    // This parameter is required.
    std::shared_ptr<string> principalType_ = nullptr;
    // The effective scope of the permission policy. Valid values:
    // 
    // *   ID of a resource group: indicates that the permission policy takes effect for the resources in the resource group.
    // *   ID of the Alibaba Cloud account to which the authorized object belongs: indicates that the permission policy takes effect for the resources within the Alibaba Cloud account.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
