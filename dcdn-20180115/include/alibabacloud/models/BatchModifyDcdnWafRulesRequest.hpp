// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHMODIFYDCDNWAFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHMODIFYDCDNWAFRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchModifyDcdnWafRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchModifyDcdnWafRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RuleConfigs, ruleConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, BatchModifyDcdnWafRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RuleConfigs, ruleConfigs_);
    };
    BatchModifyDcdnWafRulesRequest() = default ;
    BatchModifyDcdnWafRulesRequest(const BatchModifyDcdnWafRulesRequest &) = default ;
    BatchModifyDcdnWafRulesRequest(BatchModifyDcdnWafRulesRequest &&) = default ;
    BatchModifyDcdnWafRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchModifyDcdnWafRulesRequest() = default ;
    BatchModifyDcdnWafRulesRequest& operator=(const BatchModifyDcdnWafRulesRequest &) = default ;
    BatchModifyDcdnWafRulesRequest& operator=(BatchModifyDcdnWafRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyId_ != nullptr
        && this->ruleConfigs_ != nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline BatchModifyDcdnWafRulesRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // ruleConfigs Field Functions 
    bool hasRuleConfigs() const { return this->ruleConfigs_ != nullptr;};
    void deleteRuleConfigs() { this->ruleConfigs_ = nullptr;};
    inline string ruleConfigs() const { DARABONBA_PTR_GET_DEFAULT(ruleConfigs_, "") };
    inline BatchModifyDcdnWafRulesRequest& setRuleConfigs(string ruleConfigs) { DARABONBA_PTR_SET_VALUE(ruleConfigs_, ruleConfigs) };


  protected:
    // The ID of the protection policy.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> policyId_ = nullptr;
    // The configurations of the protection rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
