// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINSTANCEPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINSTANCEPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class UpdateInstancePolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateInstancePolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateInstancePolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
    };
    UpdateInstancePolicyRequest() = default ;
    UpdateInstancePolicyRequest(const UpdateInstancePolicyRequest &) = default ;
    UpdateInstancePolicyRequest(UpdateInstancePolicyRequest &&) = default ;
    UpdateInstancePolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateInstancePolicyRequest() = default ;
    UpdateInstancePolicyRequest& operator=(const UpdateInstancePolicyRequest &) = default ;
    UpdateInstancePolicyRequest& operator=(UpdateInstancePolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->policy_ == nullptr && this->policyVersion_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateInstancePolicyRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UpdateInstancePolicyRequest& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline int64_t getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, 0L) };
    inline UpdateInstancePolicyRequest& setPolicyVersion(int64_t policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


  protected:
    // The name of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The instance policy in the JSON format.
    // 
    // This parameter is required.
    shared_ptr<string> policy_ {};
    // The version of the instance policy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
