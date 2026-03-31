// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPOLICYFROMROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPOLICYFROMROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DetachPolicyFromRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachPolicyFromRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, DetachPolicyFromRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    DetachPolicyFromRoleRequest() = default ;
    DetachPolicyFromRoleRequest(const DetachPolicyFromRoleRequest &) = default ;
    DetachPolicyFromRoleRequest(DetachPolicyFromRoleRequest &&) = default ;
    DetachPolicyFromRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachPolicyFromRoleRequest() = default ;
    DetachPolicyFromRoleRequest& operator=(const DetachPolicyFromRoleRequest &) = default ;
    DetachPolicyFromRoleRequest& operator=(DetachPolicyFromRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyName_ == nullptr
        && this->policyType_ == nullptr && this->resourceGroupId_ == nullptr && this->roleName_ == nullptr; };
    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DetachPolicyFromRoleRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DetachPolicyFromRoleRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DetachPolicyFromRoleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline DetachPolicyFromRoleRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The name of the policy.
    shared_ptr<string> policyName_ {};
    // The type of the policy. Valid values: `System` and `Custom`.
    shared_ptr<string> policyType_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The name of the RAM role.
    shared_ptr<string> roleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
