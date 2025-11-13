// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANTMETADATACUSTOMRULECONFIGCUSTOMRULES_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANTMETADATACUSTOMRULECONFIGCUSTOMRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& obj) { 
      DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(ruleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(ruleTitle, ruleTitle_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& obj) { 
      DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(ruleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(ruleTitle, ruleTitle_);
    };
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules() = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules(const RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules &) = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules(RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules &&) = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules() = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& operator=(const RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules &) = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& operator=(RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskLevel_ == nullptr
        && return this->ruleDesc_ == nullptr && return this->ruleTitle_ == nullptr; };
    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleTitle Field Functions 
    bool hasRuleTitle() const { return this->ruleTitle_ != nullptr;};
    void deleteRuleTitle() { this->ruleTitle_ = nullptr;};
    inline string ruleTitle() const { DARABONBA_PTR_GET_DEFAULT(ruleTitle_, "") };
    inline RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules& setRuleTitle(string ruleTitle) { DARABONBA_PTR_SET_VALUE(ruleTitle_, ruleTitle) };


  protected:
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> ruleDesc_ = nullptr;
    std::shared_ptr<string> ruleTitle_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
