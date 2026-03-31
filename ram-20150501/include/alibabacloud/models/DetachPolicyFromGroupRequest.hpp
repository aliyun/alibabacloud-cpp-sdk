// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPOLICYFROMGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPOLICYFROMGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class DetachPolicyFromGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachPolicyFromGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachPolicyFromGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DetachPolicyFromGroupRequest() = default ;
    DetachPolicyFromGroupRequest(const DetachPolicyFromGroupRequest &) = default ;
    DetachPolicyFromGroupRequest(DetachPolicyFromGroupRequest &&) = default ;
    DetachPolicyFromGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachPolicyFromGroupRequest() = default ;
    DetachPolicyFromGroupRequest& operator=(const DetachPolicyFromGroupRequest &) = default ;
    DetachPolicyFromGroupRequest& operator=(DetachPolicyFromGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupName_ == nullptr
        && this->policyName_ == nullptr && this->policyType_ == nullptr && this->resourceGroupId_ == nullptr; };
    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DetachPolicyFromGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DetachPolicyFromGroupRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DetachPolicyFromGroupRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DetachPolicyFromGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The name of the RAM user group.
    shared_ptr<string> groupName_ {};
    // The name of the policy.
    shared_ptr<string> policyName_ {};
    // The type of the policy. Valid values: `System` and `Custom`.
    shared_ptr<string> policyType_ {};
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
