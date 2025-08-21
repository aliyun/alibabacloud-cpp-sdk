// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODYPOLICIESRUNTIMEPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODYPOLICIESRUNTIMEPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& obj) { 
      DARABONBA_PTR_TO_JSON(NewValue, newValue_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(oldValue, oldValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(oldValue, oldValue_);
    };
    DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies() = default ;
    DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies(const DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies &) = default ;
    DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies(DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies &&) = default ;
    DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies() = default ;
    DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& operator=(const DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies &) = default ;
    DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& operator=(DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->newValue_ != nullptr
        && this->policyType_ != nullptr && this->status_ != nullptr && this->oldValue_ != nullptr; };
    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline int32_t policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, 0) };
    inline DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& setPolicyType(int32_t policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


  protected:
    // The protection rule that is applied when the policy takes effect.
    // 
    // If you set **PolicyType** to **1**, the value is **{"cc_rule_enable": false }**. The value indicates that the Frequency Control policy is disabled.
    // 
    // If you set **PolicyType** to **2**, the value is **{"ai_rule_enable": 0}**. The value indicates that the Intelligent Protection policy is disabled.
    std::shared_ptr<string> newValue_ = nullptr;
    // The protection policy whose status is changed when the policy takes effect. Valid values:
    // 
    // *   **1**: indicates that the Frequency Control policy is changed.
    // *   **2**: indicates that the Intelligent Protection policy is changed.
    std::shared_ptr<int32_t> policyType_ = nullptr;
    // The running status of the policy. Valid values:
    // 
    // *   **0**: The policy has not been issued or is restored.
    // *   **1**: The policy is pending.
    // *   **2**: The policy is being restored.
    // *   **3**: The policy takes effect.
    // *   **4**: The policy fails to take effect.
    // *   **5**:The policy fails to be restored.
    // *   **6**: The configurations of the protected objects for the policy does not exist because the configurations may be deleted.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The protection rule that is applied before the policy takes effect.
    // 
    // If you set **PolicyType** to **1**, the value is **{"cc_rule_enable": true}**. The value indicates that the Frequency Control policy is enabled.
    // 
    // If you set **PolicyType** to **2**, the value is **{"ai_rule_enable": 1}**. The value indicates that the Intelligent Protection policy is enabled.
    std::shared_ptr<string> oldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
