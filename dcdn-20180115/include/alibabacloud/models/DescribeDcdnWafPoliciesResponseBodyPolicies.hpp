// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafPoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafPoliciesResponseBodyPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    DescribeDcdnWafPoliciesResponseBodyPolicies() = default ;
    DescribeDcdnWafPoliciesResponseBodyPolicies(const DescribeDcdnWafPoliciesResponseBodyPolicies &) = default ;
    DescribeDcdnWafPoliciesResponseBodyPolicies(DescribeDcdnWafPoliciesResponseBodyPolicies &&) = default ;
    DescribeDcdnWafPoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafPoliciesResponseBodyPolicies() = default ;
    DescribeDcdnWafPoliciesResponseBodyPolicies& operator=(const DescribeDcdnWafPoliciesResponseBodyPolicies &) = default ;
    DescribeDcdnWafPoliciesResponseBodyPolicies& operator=(DescribeDcdnWafPoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->domainCount_ != nullptr && this->gmtModified_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyStatus_ != nullptr
        && this->policyType_ != nullptr && this->ruleCount_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int32_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0) };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setDomainCount(int32_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int64_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
    inline DescribeDcdnWafPoliciesResponseBodyPolicies& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // The type of the protection policy, which is the same as the DefenseScenes field in the QueryArgs parameter.
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The number of domain names that use the protection policy.
    std::shared_ptr<int32_t> domainCount_ = nullptr;
    // The time when the protection policy was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the protection policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the protection policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The status of the protection policy, which is the same as the PolicyStatus field in the QueryArgs parameter.
    std::shared_ptr<string> policyStatus_ = nullptr;
    // Indicates whether this protection policy is the default policy, which is the same as the PolicyType field in the QueryArgs parameter.
    std::shared_ptr<string> policyType_ = nullptr;
    // The number of protection rules in the protection policy.
    std::shared_ptr<int64_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
