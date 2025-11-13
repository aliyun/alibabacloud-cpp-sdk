// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODYOUTPUTRESULTSUBRISKS_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONRESPONSEBODYOUTPUTRESULTSUBRISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationResponseBodyOutputResultSubRisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationResponseBodyOutputResultSubRisks& obj) { 
      DARABONBA_PTR_TO_JSON(originalContent, originalContent_);
      DARABONBA_PTR_TO_JSON(resultContent, resultContent_);
      DARABONBA_PTR_TO_JSON(resultType, resultType_);
      DARABONBA_PTR_TO_JSON(riskBrief, riskBrief_);
      DARABONBA_PTR_TO_JSON(riskClause, riskClause_);
      DARABONBA_PTR_TO_JSON(riskExplain, riskExplain_);
      DARABONBA_PTR_TO_JSON(standardOriginalContent, standardOriginalContent_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationResponseBodyOutputResultSubRisks& obj) { 
      DARABONBA_PTR_FROM_JSON(originalContent, originalContent_);
      DARABONBA_PTR_FROM_JSON(resultContent, resultContent_);
      DARABONBA_PTR_FROM_JSON(resultType, resultType_);
      DARABONBA_PTR_FROM_JSON(riskBrief, riskBrief_);
      DARABONBA_PTR_FROM_JSON(riskClause, riskClause_);
      DARABONBA_PTR_FROM_JSON(riskExplain, riskExplain_);
      DARABONBA_PTR_FROM_JSON(standardOriginalContent, standardOriginalContent_);
    };
    RunContractResultGenerationResponseBodyOutputResultSubRisks() = default ;
    RunContractResultGenerationResponseBodyOutputResultSubRisks(const RunContractResultGenerationResponseBodyOutputResultSubRisks &) = default ;
    RunContractResultGenerationResponseBodyOutputResultSubRisks(RunContractResultGenerationResponseBodyOutputResultSubRisks &&) = default ;
    RunContractResultGenerationResponseBodyOutputResultSubRisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationResponseBodyOutputResultSubRisks() = default ;
    RunContractResultGenerationResponseBodyOutputResultSubRisks& operator=(const RunContractResultGenerationResponseBodyOutputResultSubRisks &) = default ;
    RunContractResultGenerationResponseBodyOutputResultSubRisks& operator=(RunContractResultGenerationResponseBodyOutputResultSubRisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->originalContent_ == nullptr
        && return this->resultContent_ == nullptr && return this->resultType_ == nullptr && return this->riskBrief_ == nullptr && return this->riskClause_ == nullptr && return this->riskExplain_ == nullptr
        && return this->standardOriginalContent_ == nullptr; };
    // originalContent Field Functions 
    bool hasOriginalContent() const { return this->originalContent_ != nullptr;};
    void deleteOriginalContent() { this->originalContent_ = nullptr;};
    inline string originalContent() const { DARABONBA_PTR_GET_DEFAULT(originalContent_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setOriginalContent(string originalContent) { DARABONBA_PTR_SET_VALUE(originalContent_, originalContent) };


    // resultContent Field Functions 
    bool hasResultContent() const { return this->resultContent_ != nullptr;};
    void deleteResultContent() { this->resultContent_ = nullptr;};
    inline string resultContent() const { DARABONBA_PTR_GET_DEFAULT(resultContent_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setResultContent(string resultContent) { DARABONBA_PTR_SET_VALUE(resultContent_, resultContent) };


    // resultType Field Functions 
    bool hasResultType() const { return this->resultType_ != nullptr;};
    void deleteResultType() { this->resultType_ = nullptr;};
    inline string resultType() const { DARABONBA_PTR_GET_DEFAULT(resultType_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setResultType(string resultType) { DARABONBA_PTR_SET_VALUE(resultType_, resultType) };


    // riskBrief Field Functions 
    bool hasRiskBrief() const { return this->riskBrief_ != nullptr;};
    void deleteRiskBrief() { this->riskBrief_ = nullptr;};
    inline string riskBrief() const { DARABONBA_PTR_GET_DEFAULT(riskBrief_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setRiskBrief(string riskBrief) { DARABONBA_PTR_SET_VALUE(riskBrief_, riskBrief) };


    // riskClause Field Functions 
    bool hasRiskClause() const { return this->riskClause_ != nullptr;};
    void deleteRiskClause() { this->riskClause_ = nullptr;};
    inline string riskClause() const { DARABONBA_PTR_GET_DEFAULT(riskClause_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setRiskClause(string riskClause) { DARABONBA_PTR_SET_VALUE(riskClause_, riskClause) };


    // riskExplain Field Functions 
    bool hasRiskExplain() const { return this->riskExplain_ != nullptr;};
    void deleteRiskExplain() { this->riskExplain_ = nullptr;};
    inline string riskExplain() const { DARABONBA_PTR_GET_DEFAULT(riskExplain_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setRiskExplain(string riskExplain) { DARABONBA_PTR_SET_VALUE(riskExplain_, riskExplain) };


    // standardOriginalContent Field Functions 
    bool hasStandardOriginalContent() const { return this->standardOriginalContent_ != nullptr;};
    void deleteStandardOriginalContent() { this->standardOriginalContent_ = nullptr;};
    inline string standardOriginalContent() const { DARABONBA_PTR_GET_DEFAULT(standardOriginalContent_, "") };
    inline RunContractResultGenerationResponseBodyOutputResultSubRisks& setStandardOriginalContent(string standardOriginalContent) { DARABONBA_PTR_SET_VALUE(standardOriginalContent_, standardOriginalContent) };


  protected:
    std::shared_ptr<string> originalContent_ = nullptr;
    std::shared_ptr<string> resultContent_ = nullptr;
    std::shared_ptr<string> resultType_ = nullptr;
    std::shared_ptr<string> riskBrief_ = nullptr;
    std::shared_ptr<string> riskClause_ = nullptr;
    std::shared_ptr<string> riskExplain_ = nullptr;
    std::shared_ptr<string> standardOriginalContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
