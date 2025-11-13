// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODYOUTPUTRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODYOUTPUTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunContractResultGenerationResponseBodyOutputResultSubRisks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationResponseBodyOutputResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationResponseBodyOutputResult& obj) { 
      DARABONBA_PTR_TO_JSON(examineBrief, examineBrief_);
      DARABONBA_PTR_TO_JSON(examineResult, examineResult_);
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ruleSequence, ruleSequence_);
      DARABONBA_PTR_TO_JSON(ruleTag, ruleTag_);
      DARABONBA_PTR_TO_JSON(ruleTitle, ruleTitle_);
      DARABONBA_PTR_TO_JSON(subRisks, subRisks_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationResponseBodyOutputResult& obj) { 
      DARABONBA_PTR_FROM_JSON(examineBrief, examineBrief_);
      DARABONBA_PTR_FROM_JSON(examineResult, examineResult_);
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ruleSequence, ruleSequence_);
      DARABONBA_PTR_FROM_JSON(ruleTag, ruleTag_);
      DARABONBA_PTR_FROM_JSON(ruleTitle, ruleTitle_);
      DARABONBA_PTR_FROM_JSON(subRisks, subRisks_);
    };
    RunContractResultGenerationResponseBodyOutputResult() = default ;
    RunContractResultGenerationResponseBodyOutputResult(const RunContractResultGenerationResponseBodyOutputResult &) = default ;
    RunContractResultGenerationResponseBodyOutputResult(RunContractResultGenerationResponseBodyOutputResult &&) = default ;
    RunContractResultGenerationResponseBodyOutputResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationResponseBodyOutputResult() = default ;
    RunContractResultGenerationResponseBodyOutputResult& operator=(const RunContractResultGenerationResponseBodyOutputResult &) = default ;
    RunContractResultGenerationResponseBodyOutputResult& operator=(RunContractResultGenerationResponseBodyOutputResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->examineBrief_ == nullptr
        && return this->examineResult_ == nullptr && return this->riskLevel_ == nullptr && return this->ruleSequence_ == nullptr && return this->ruleTag_ == nullptr && return this->ruleTitle_ == nullptr
        && return this->subRisks_ == nullptr; };
    // examineBrief Field Functions 
    bool hasExamineBrief() const { return this->examineBrief_ != nullptr;};
    void deleteExamineBrief() { this->examineBrief_ = nullptr;};
    inline string examineBrief() const { DARABONBA_PTR_GET_DEFAULT(examineBrief_, "") };
    inline RunContractResultGenerationResponseBodyOutputResult& setExamineBrief(string examineBrief) { DARABONBA_PTR_SET_VALUE(examineBrief_, examineBrief) };


    // examineResult Field Functions 
    bool hasExamineResult() const { return this->examineResult_ != nullptr;};
    void deleteExamineResult() { this->examineResult_ = nullptr;};
    inline string examineResult() const { DARABONBA_PTR_GET_DEFAULT(examineResult_, "") };
    inline RunContractResultGenerationResponseBodyOutputResult& setExamineResult(string examineResult) { DARABONBA_PTR_SET_VALUE(examineResult_, examineResult) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline RunContractResultGenerationResponseBodyOutputResult& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleSequence Field Functions 
    bool hasRuleSequence() const { return this->ruleSequence_ != nullptr;};
    void deleteRuleSequence() { this->ruleSequence_ = nullptr;};
    inline string ruleSequence() const { DARABONBA_PTR_GET_DEFAULT(ruleSequence_, "") };
    inline RunContractResultGenerationResponseBodyOutputResult& setRuleSequence(string ruleSequence) { DARABONBA_PTR_SET_VALUE(ruleSequence_, ruleSequence) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline string ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
    inline RunContractResultGenerationResponseBodyOutputResult& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


    // ruleTitle Field Functions 
    bool hasRuleTitle() const { return this->ruleTitle_ != nullptr;};
    void deleteRuleTitle() { this->ruleTitle_ = nullptr;};
    inline string ruleTitle() const { DARABONBA_PTR_GET_DEFAULT(ruleTitle_, "") };
    inline RunContractResultGenerationResponseBodyOutputResult& setRuleTitle(string ruleTitle) { DARABONBA_PTR_SET_VALUE(ruleTitle_, ruleTitle) };


    // subRisks Field Functions 
    bool hasSubRisks() const { return this->subRisks_ != nullptr;};
    void deleteSubRisks() { this->subRisks_ = nullptr;};
    inline const vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks> & subRisks() const { DARABONBA_PTR_GET_CONST(subRisks_, vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks>) };
    inline vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks> subRisks() { DARABONBA_PTR_GET(subRisks_, vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks>) };
    inline RunContractResultGenerationResponseBodyOutputResult& setSubRisks(const vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks> & subRisks) { DARABONBA_PTR_SET_VALUE(subRisks_, subRisks) };
    inline RunContractResultGenerationResponseBodyOutputResult& setSubRisks(vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks> && subRisks) { DARABONBA_PTR_SET_RVALUE(subRisks_, subRisks) };


  protected:
    std::shared_ptr<string> examineBrief_ = nullptr;
    std::shared_ptr<string> examineResult_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> ruleSequence_ = nullptr;
    std::shared_ptr<string> ruleTag_ = nullptr;
    std::shared_ptr<string> ruleTitle_ = nullptr;
    std::shared_ptr<vector<Models::RunContractResultGenerationResponseBodyOutputResultSubRisks>> subRisks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
