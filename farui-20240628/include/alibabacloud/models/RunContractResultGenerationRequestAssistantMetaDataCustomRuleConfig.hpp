// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANTMETADATACUSTOMRULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANTMETADATACUSTOMRULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(customRules, customRules_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(customRules, customRules_);
    };
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig() = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig(const RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig &) = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig(RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig &&) = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig() = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig& operator=(const RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig &) = default ;
    RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig& operator=(RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customRules_ == nullptr; };
    // customRules Field Functions 
    bool hasCustomRules() const { return this->customRules_ != nullptr;};
    void deleteCustomRules() { this->customRules_ = nullptr;};
    inline const vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules> & customRules() const { DARABONBA_PTR_GET_CONST(customRules_, vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules>) };
    inline vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules> customRules() { DARABONBA_PTR_GET(customRules_, vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules>) };
    inline RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig& setCustomRules(const vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules> & customRules) { DARABONBA_PTR_SET_VALUE(customRules_, customRules) };
    inline RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig& setCustomRules(vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules> && customRules) { DARABONBA_PTR_SET_RVALUE(customRules_, customRules) };


  protected:
    std::shared_ptr<vector<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules>> customRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
