// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICIESV2RESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePoliciesV2ResponseBodyPoliciesRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePoliciesV2ResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePoliciesV2ResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(PolicyBindingCount, policyBindingCount_);
      DARABONBA_PTR_TO_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePoliciesV2ResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(PolicyBindingCount, policyBindingCount_);
      DARABONBA_PTR_FROM_JSON(PolicyDescription, policyDescription_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
    };
    DescribePoliciesV2ResponseBodyPolicies() = default ;
    DescribePoliciesV2ResponseBodyPolicies(const DescribePoliciesV2ResponseBodyPolicies &) = default ;
    DescribePoliciesV2ResponseBodyPolicies(DescribePoliciesV2ResponseBodyPolicies &&) = default ;
    DescribePoliciesV2ResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePoliciesV2ResponseBodyPolicies() = default ;
    DescribePoliciesV2ResponseBodyPolicies& operator=(const DescribePoliciesV2ResponseBodyPolicies &) = default ;
    DescribePoliciesV2ResponseBodyPolicies& operator=(DescribePoliciesV2ResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessStatus_ == nullptr
        && return this->createdTime_ == nullptr && return this->policyBindingCount_ == nullptr && return this->policyDescription_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr
        && return this->policyType_ == nullptr && return this->rules_ == nullptr && return this->updatedTime_ == nullptr; };
    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline DescribePoliciesV2ResponseBodyPolicies& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribePoliciesV2ResponseBodyPolicies& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // policyBindingCount Field Functions 
    bool hasPolicyBindingCount() const { return this->policyBindingCount_ != nullptr;};
    void deletePolicyBindingCount() { this->policyBindingCount_ = nullptr;};
    inline int64_t policyBindingCount() const { DARABONBA_PTR_GET_DEFAULT(policyBindingCount_, 0L) };
    inline DescribePoliciesV2ResponseBodyPolicies& setPolicyBindingCount(int64_t policyBindingCount) { DARABONBA_PTR_SET_VALUE(policyBindingCount_, policyBindingCount) };


    // policyDescription Field Functions 
    bool hasPolicyDescription() const { return this->policyDescription_ != nullptr;};
    void deletePolicyDescription() { this->policyDescription_ = nullptr;};
    inline string policyDescription() const { DARABONBA_PTR_GET_DEFAULT(policyDescription_, "") };
    inline DescribePoliciesV2ResponseBodyPolicies& setPolicyDescription(string policyDescription) { DARABONBA_PTR_SET_VALUE(policyDescription_, policyDescription) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePoliciesV2ResponseBodyPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribePoliciesV2ResponseBodyPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribePoliciesV2ResponseBodyPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules>) };
    inline vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules>) };
    inline DescribePoliciesV2ResponseBodyPolicies& setRules(const vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribePoliciesV2ResponseBodyPolicies& setRules(vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribePoliciesV2ResponseBodyPolicies& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


  protected:
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the backup policy was created. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The number of data sources that are bound to the backup policy.
    std::shared_ptr<int64_t> policyBindingCount_ = nullptr;
    // The description of the backup policy.
    std::shared_ptr<string> policyDescription_ = nullptr;
    // The ID of the backup policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the backup policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The policy type. Valid values:
    // 
    // *   **STANDARD**: the general backup policy. This type of policy applies to backups other than Elastic Compute Service (ECS) instance backup.
    // *   **UDM_ECS_ONLY**: the ECS instance backup policy. This type of policy applies only to ECS instance backup.
    std::shared_ptr<string> policyType_ = nullptr;
    // The rules in the backup policy.
    std::shared_ptr<vector<Models::DescribePoliciesV2ResponseBodyPoliciesRules>> rules_ = nullptr;
    // The time when the backup policy was updated. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
