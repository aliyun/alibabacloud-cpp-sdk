// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYRESPONSEBODYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFPOLICYRESPONSEBODYPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafPolicyResponseBodyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_TO_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(RuleConfigs, ruleConfigs_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafPolicyResponseBodyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(DefenseScene, defenseScene_);
      DARABONBA_PTR_FROM_JSON(DomainCount, domainCount_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(PolicyStatus, policyStatus_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(RuleConfigs, ruleConfigs_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
    };
    DescribeDcdnWafPolicyResponseBodyPolicy() = default ;
    DescribeDcdnWafPolicyResponseBodyPolicy(const DescribeDcdnWafPolicyResponseBodyPolicy &) = default ;
    DescribeDcdnWafPolicyResponseBodyPolicy(DescribeDcdnWafPolicyResponseBodyPolicy &&) = default ;
    DescribeDcdnWafPolicyResponseBodyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafPolicyResponseBodyPolicy() = default ;
    DescribeDcdnWafPolicyResponseBodyPolicy& operator=(const DescribeDcdnWafPolicyResponseBodyPolicy &) = default ;
    DescribeDcdnWafPolicyResponseBodyPolicy& operator=(DescribeDcdnWafPolicyResponseBodyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defenseScene_ != nullptr
        && this->domainCount_ != nullptr && this->gmtModified_ != nullptr && this->policyId_ != nullptr && this->policyName_ != nullptr && this->policyStatus_ != nullptr
        && this->policyType_ != nullptr && this->ruleConfigs_ != nullptr && this->ruleCount_ != nullptr; };
    // defenseScene Field Functions 
    bool hasDefenseScene() const { return this->defenseScene_ != nullptr;};
    void deleteDefenseScene() { this->defenseScene_ = nullptr;};
    inline string defenseScene() const { DARABONBA_PTR_GET_DEFAULT(defenseScene_, "") };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setDefenseScene(string defenseScene) { DARABONBA_PTR_SET_VALUE(defenseScene_, defenseScene) };


    // domainCount Field Functions 
    bool hasDomainCount() const { return this->domainCount_ != nullptr;};
    void deleteDomainCount() { this->domainCount_ = nullptr;};
    inline int32_t domainCount() const { DARABONBA_PTR_GET_DEFAULT(domainCount_, 0) };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setDomainCount(int32_t domainCount) { DARABONBA_PTR_SET_VALUE(domainCount_, domainCount) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // policyStatus Field Functions 
    bool hasPolicyStatus() const { return this->policyStatus_ != nullptr;};
    void deletePolicyStatus() { this->policyStatus_ = nullptr;};
    inline string policyStatus() const { DARABONBA_PTR_GET_DEFAULT(policyStatus_, "") };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setPolicyStatus(string policyStatus) { DARABONBA_PTR_SET_VALUE(policyStatus_, policyStatus) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // ruleConfigs Field Functions 
    bool hasRuleConfigs() const { return this->ruleConfigs_ != nullptr;};
    void deleteRuleConfigs() { this->ruleConfigs_ = nullptr;};
    inline string ruleConfigs() const { DARABONBA_PTR_GET_DEFAULT(ruleConfigs_, "") };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setRuleConfigs(string ruleConfigs) { DARABONBA_PTR_SET_VALUE(ruleConfigs_, ruleConfigs) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int64_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0L) };
    inline DescribeDcdnWafPolicyResponseBodyPolicy& setRuleCount(int64_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


  protected:
    // The type of the protection policy. Valid values:
    // 
    // *   waf_group: basic web protection
    // *   custom_acl: custom protection
    // *   whitelist: whitelist
    std::shared_ptr<string> defenseScene_ = nullptr;
    // The number of domain names that use the protection policy.
    std::shared_ptr<int32_t> domainCount_ = nullptr;
    // The time when the protection policy was modified. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the protection policy.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The name of the protection policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The status of the protection policy. Valid values:
    // 
    // *   on
    // *   off
    std::shared_ptr<string> policyStatus_ = nullptr;
    // Indicates whether the current policy is the default policy. Valid values:
    // 
    // *   default
    // *   custom
    std::shared_ptr<string> policyType_ = nullptr;
    // The protection rule configurations corresponding to the protection policy. The configurations only support Bot management. For more information, see [BatchCreateDcdnWafRules](~~BatchCreateDcdnWafRules~~).
    std::shared_ptr<string> ruleConfigs_ = nullptr;
    // The number of protection rules in the protection policy.
    std::shared_ptr<int64_t> ruleCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
