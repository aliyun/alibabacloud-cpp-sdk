// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEDCDNWAFRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEDCDNWAFRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchCreateDcdnWafRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateDcdnWafRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RuleConfigs, ruleConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateDcdnWafRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RuleConfigs, ruleConfigs_);
    };
    BatchCreateDcdnWafRulesRequest() = default ;
    BatchCreateDcdnWafRulesRequest(const BatchCreateDcdnWafRulesRequest &) = default ;
    BatchCreateDcdnWafRulesRequest(BatchCreateDcdnWafRulesRequest &&) = default ;
    BatchCreateDcdnWafRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateDcdnWafRulesRequest() = default ;
    BatchCreateDcdnWafRulesRequest& operator=(const BatchCreateDcdnWafRulesRequest &) = default ;
    BatchCreateDcdnWafRulesRequest& operator=(BatchCreateDcdnWafRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && this->ruleConfigs_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline int64_t getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, 0L) };
    inline BatchCreateDcdnWafRulesRequest& setPolicyId(int64_t policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // ruleConfigs Field Functions 
    bool hasRuleConfigs() const { return this->ruleConfigs_ != nullptr;};
    void deleteRuleConfigs() { this->ruleConfigs_ = nullptr;};
    inline string getRuleConfigs() const { DARABONBA_PTR_GET_DEFAULT(ruleConfigs_, "") };
    inline BatchCreateDcdnWafRulesRequest& setRuleConfigs(string ruleConfigs) { DARABONBA_PTR_SET_VALUE(ruleConfigs_, ruleConfigs) };


  protected:
    // The ID of the protection policy.
    // 
    // This parameter is required.
    shared_ptr<int64_t> policyId_ {};
    // The configuration of the protection rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
