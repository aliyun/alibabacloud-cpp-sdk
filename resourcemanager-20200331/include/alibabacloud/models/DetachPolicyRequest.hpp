// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class DetachPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DetachPolicyRequest() = default ;
    DetachPolicyRequest(const DetachPolicyRequest &) = default ;
    DetachPolicyRequest(DetachPolicyRequest &&) = default ;
    DetachPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachPolicyRequest() = default ;
    DetachPolicyRequest& operator=(const DetachPolicyRequest &) = default ;
    DetachPolicyRequest& operator=(DetachPolicyRequest &&) = default ;
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
    inline DetachPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DetachPolicyRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // principalName Field Functions 
    bool hasPrincipalName() const { return this->principalName_ != nullptr;};
    void deletePrincipalName() { this->principalName_ = nullptr;};
    inline string principalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
    inline DetachPolicyRequest& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string principalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline DetachPolicyRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DetachPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the permission policy.
    // 
    // The name must be 1 to 128 characters in length and can contain letters, digits, and hyphen (-).
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
    // The ID of the resource group or the ID of the Alibaba Cloud account to which the resource group belongs.
    // 
    // This parameter specifies the resource group or Alibaba Cloud account for which you want to revoke permissions.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
