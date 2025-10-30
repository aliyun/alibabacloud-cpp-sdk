// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESSTATUSRESPONSEBODYPOLICYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYINSTANCESSTATUSRESPONSEBODYPOLICYINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribePolicyInstancesStatusResponseBodyPolicyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyInstancesStatusResponseBodyPolicyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(policy_category, policyCategory_);
      DARABONBA_PTR_TO_JSON(policy_description, policyDescription_);
      DARABONBA_PTR_TO_JSON(policy_instances_count, policyInstancesCount_);
      DARABONBA_PTR_TO_JSON(policy_name, policyName_);
      DARABONBA_PTR_TO_JSON(policy_severity, policySeverity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyInstancesStatusResponseBodyPolicyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(policy_category, policyCategory_);
      DARABONBA_PTR_FROM_JSON(policy_description, policyDescription_);
      DARABONBA_PTR_FROM_JSON(policy_instances_count, policyInstancesCount_);
      DARABONBA_PTR_FROM_JSON(policy_name, policyName_);
      DARABONBA_PTR_FROM_JSON(policy_severity, policySeverity_);
    };
    DescribePolicyInstancesStatusResponseBodyPolicyInstances() = default ;
    DescribePolicyInstancesStatusResponseBodyPolicyInstances(const DescribePolicyInstancesStatusResponseBodyPolicyInstances &) = default ;
    DescribePolicyInstancesStatusResponseBodyPolicyInstances(DescribePolicyInstancesStatusResponseBodyPolicyInstances &&) = default ;
    DescribePolicyInstancesStatusResponseBodyPolicyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyInstancesStatusResponseBodyPolicyInstances() = default ;
    DescribePolicyInstancesStatusResponseBodyPolicyInstances& operator=(const DescribePolicyInstancesStatusResponseBodyPolicyInstances &) = default ;
    DescribePolicyInstancesStatusResponseBodyPolicyInstances& operator=(DescribePolicyInstancesStatusResponseBodyPolicyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyCategory_ == nullptr
        && return this->policyDescription_ == nullptr && return this->policyInstancesCount_ == nullptr && return this->policyName_ == nullptr && return this->policySeverity_ == nullptr; };
    // policyCategory Field Functions 
    bool hasPolicyCategory() const { return this->policyCategory_ != nullptr;};
    void deletePolicyCategory() { this->policyCategory_ = nullptr;};
    inline string policyCategory() const { DARABONBA_PTR_GET_DEFAULT(policyCategory_, "") };
    inline DescribePolicyInstancesStatusResponseBodyPolicyInstances& setPolicyCategory(string policyCategory) { DARABONBA_PTR_SET_VALUE(policyCategory_, policyCategory) };


    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline DescribePolicyInstancesStatusResponseBodyPolicyInstances& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyInstancesCount Field Functions 
    bool hasPolicyInstancesCount() const { return this->policyInstancesCount_ != nullptr;};
    void deletePolicyInstancesCount() { this->policyInstancesCount_ = nullptr;};
    inline int64_t policyInstancesCount() const { DARABONBA_PTR_GET_DEFAULT(policyInstancesCount_, 0L) };
    inline DescribePolicyInstancesStatusResponseBodyPolicyInstances& setPolicyInstancesCount(int64_t policyInstancesCount) { DARABONBA_PTR_SET_VALUE(policyInstancesCount_, policyInstancesCount) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribePolicyInstancesStatusResponseBodyPolicyInstances& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policySeverity Field Functions 
    bool hasPolicySeverity() const { return this->policySeverity_ != nullptr;};
    void deletePolicySeverity() { this->policySeverity_ = nullptr;};
    inline string policySeverity() const { DARABONBA_PTR_GET_DEFAULT(policySeverity_, "") };
    inline DescribePolicyInstancesStatusResponseBodyPolicyInstances& setPolicySeverity(string policySeverity) { DARABONBA_PTR_SET_VALUE(policySeverity_, policySeverity) };


  protected:
    // The type of the policy. For more information about different types of policies and their descriptions, see [Predefined security policies of ACK](https://help.aliyun.com/document_detail/359819.html).
    std::shared_ptr<string> policyCategory_ = nullptr;
    // The description of the policy.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The number of policy instances that are deployed. If this parameter is empty, no policy instance is deployed.
    std::shared_ptr<int64_t> policyInstancesCount_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The severity level of the policy.
    std::shared_ptr<string> policySeverity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
