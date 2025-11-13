// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODYOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODYOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunContractRuleGenerationResponseBodyOutputRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationResponseBodyOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationResponseBodyOutput& obj) { 
      DARABONBA_PTR_TO_JSON(ruleTaskId, ruleTaskId_);
      DARABONBA_PTR_TO_JSON(rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationResponseBodyOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(ruleTaskId, ruleTaskId_);
      DARABONBA_PTR_FROM_JSON(rules, rules_);
    };
    RunContractRuleGenerationResponseBodyOutput() = default ;
    RunContractRuleGenerationResponseBodyOutput(const RunContractRuleGenerationResponseBodyOutput &) = default ;
    RunContractRuleGenerationResponseBodyOutput(RunContractRuleGenerationResponseBodyOutput &&) = default ;
    RunContractRuleGenerationResponseBodyOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationResponseBodyOutput() = default ;
    RunContractRuleGenerationResponseBodyOutput& operator=(const RunContractRuleGenerationResponseBodyOutput &) = default ;
    RunContractRuleGenerationResponseBodyOutput& operator=(RunContractRuleGenerationResponseBodyOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleTaskId_ == nullptr
        && return this->rules_ == nullptr; };
    // ruleTaskId Field Functions 
    bool hasRuleTaskId() const { return this->ruleTaskId_ != nullptr;};
    void deleteRuleTaskId() { this->ruleTaskId_ = nullptr;};
    inline string ruleTaskId() const { DARABONBA_PTR_GET_DEFAULT(ruleTaskId_, "") };
    inline RunContractRuleGenerationResponseBodyOutput& setRuleTaskId(string ruleTaskId) { DARABONBA_PTR_SET_VALUE(ruleTaskId_, ruleTaskId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::RunContractRuleGenerationResponseBodyOutputRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::RunContractRuleGenerationResponseBodyOutputRules>) };
    inline vector<Models::RunContractRuleGenerationResponseBodyOutputRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::RunContractRuleGenerationResponseBodyOutputRules>) };
    inline RunContractRuleGenerationResponseBodyOutput& setRules(const vector<Models::RunContractRuleGenerationResponseBodyOutputRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline RunContractRuleGenerationResponseBodyOutput& setRules(vector<Models::RunContractRuleGenerationResponseBodyOutputRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<string> ruleTaskId_ = nullptr;
    std::shared_ptr<vector<Models::RunContractRuleGenerationResponseBodyOutputRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
