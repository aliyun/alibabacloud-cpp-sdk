// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODYOUTPUTRULES_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRULEGENERATIONRESPONSEBODYOUTPUTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractRuleGenerationResponseBodyOutputRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractRuleGenerationResponseBodyOutputRules& obj) { 
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ruleSequence, ruleSequence_);
      DARABONBA_PTR_TO_JSON(ruleTag, ruleTag_);
      DARABONBA_PTR_TO_JSON(ruleTitle, ruleTitle_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractRuleGenerationResponseBodyOutputRules& obj) { 
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ruleSequence, ruleSequence_);
      DARABONBA_PTR_FROM_JSON(ruleTag, ruleTag_);
      DARABONBA_PTR_FROM_JSON(ruleTitle, ruleTitle_);
    };
    RunContractRuleGenerationResponseBodyOutputRules() = default ;
    RunContractRuleGenerationResponseBodyOutputRules(const RunContractRuleGenerationResponseBodyOutputRules &) = default ;
    RunContractRuleGenerationResponseBodyOutputRules(RunContractRuleGenerationResponseBodyOutputRules &&) = default ;
    RunContractRuleGenerationResponseBodyOutputRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractRuleGenerationResponseBodyOutputRules() = default ;
    RunContractRuleGenerationResponseBodyOutputRules& operator=(const RunContractRuleGenerationResponseBodyOutputRules &) = default ;
    RunContractRuleGenerationResponseBodyOutputRules& operator=(RunContractRuleGenerationResponseBodyOutputRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskLevel_ == nullptr
        && return this->ruleSequence_ == nullptr && return this->ruleTag_ == nullptr && return this->ruleTitle_ == nullptr; };
    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline RunContractRuleGenerationResponseBodyOutputRules& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleSequence Field Functions 
    bool hasRuleSequence() const { return this->ruleSequence_ != nullptr;};
    void deleteRuleSequence() { this->ruleSequence_ = nullptr;};
    inline string ruleSequence() const { DARABONBA_PTR_GET_DEFAULT(ruleSequence_, "") };
    inline RunContractRuleGenerationResponseBodyOutputRules& setRuleSequence(string ruleSequence) { DARABONBA_PTR_SET_VALUE(ruleSequence_, ruleSequence) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline string ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
    inline RunContractRuleGenerationResponseBodyOutputRules& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    // ruleTitle Field Functions 
    bool hasRuleTitle() const { return this->ruleTitle_ != nullptr;};
    void deleteRuleTitle() { this->ruleTitle_ = nullptr;};
    inline string ruleTitle() const { DARABONBA_PTR_GET_DEFAULT(ruleTitle_, "") };
    inline RunContractRuleGenerationResponseBodyOutputRules& setRuleTitle(string ruleTitle) { DARABONBA_PTR_SET_VALUE(ruleTitle_, ruleTitle) };


  protected:
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> ruleSequence_ = nullptr;
    std::shared_ptr<string> ruleTag_ = nullptr;
    std::shared_ptr<string> ruleTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
