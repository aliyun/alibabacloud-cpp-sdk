// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANTMETADATA_HPP_
#define ALIBABACLOUD_MODELS_RUNCONTRACTRESULTGENERATIONREQUESTASSISTANTMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig.hpp>
#include <vector>
#include <alibabacloud/models/RunContractResultGenerationRequestAssistantMetaDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FaRui20240628
{
namespace Models
{
  class RunContractResultGenerationRequestAssistantMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunContractResultGenerationRequestAssistantMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(customRuleConfig, customRuleConfig_);
      DARABONBA_PTR_TO_JSON(fileId, fileId_);
      DARABONBA_PTR_TO_JSON(position, position_);
      DARABONBA_PTR_TO_JSON(ruleTaskId, ruleTaskId_);
      DARABONBA_PTR_TO_JSON(rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, RunContractResultGenerationRequestAssistantMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(customRuleConfig, customRuleConfig_);
      DARABONBA_PTR_FROM_JSON(fileId, fileId_);
      DARABONBA_PTR_FROM_JSON(position, position_);
      DARABONBA_PTR_FROM_JSON(ruleTaskId, ruleTaskId_);
      DARABONBA_PTR_FROM_JSON(rules, rules_);
    };
    RunContractResultGenerationRequestAssistantMetaData() = default ;
    RunContractResultGenerationRequestAssistantMetaData(const RunContractResultGenerationRequestAssistantMetaData &) = default ;
    RunContractResultGenerationRequestAssistantMetaData(RunContractResultGenerationRequestAssistantMetaData &&) = default ;
    RunContractResultGenerationRequestAssistantMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunContractResultGenerationRequestAssistantMetaData() = default ;
    RunContractResultGenerationRequestAssistantMetaData& operator=(const RunContractResultGenerationRequestAssistantMetaData &) = default ;
    RunContractResultGenerationRequestAssistantMetaData& operator=(RunContractResultGenerationRequestAssistantMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customRuleConfig_ == nullptr
        && return this->fileId_ == nullptr && return this->position_ == nullptr && return this->ruleTaskId_ == nullptr && return this->rules_ == nullptr; };
    // customRuleConfig Field Functions 
    bool hasCustomRuleConfig() const { return this->customRuleConfig_ != nullptr;};
    void deleteCustomRuleConfig() { this->customRuleConfig_ = nullptr;};
    inline const Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig & customRuleConfig() const { DARABONBA_PTR_GET_CONST(customRuleConfig_, Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig) };
    inline Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig customRuleConfig() { DARABONBA_PTR_GET(customRuleConfig_, Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig) };
    inline RunContractResultGenerationRequestAssistantMetaData& setCustomRuleConfig(const Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig & customRuleConfig) { DARABONBA_PTR_SET_VALUE(customRuleConfig_, customRuleConfig) };
    inline RunContractResultGenerationRequestAssistantMetaData& setCustomRuleConfig(Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig && customRuleConfig) { DARABONBA_PTR_SET_RVALUE(customRuleConfig_, customRuleConfig) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline RunContractResultGenerationRequestAssistantMetaData& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string position() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline RunContractResultGenerationRequestAssistantMetaData& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // ruleTaskId Field Functions 
    bool hasRuleTaskId() const { return this->ruleTaskId_ != nullptr;};
    void deleteRuleTaskId() { this->ruleTaskId_ = nullptr;};
    inline string ruleTaskId() const { DARABONBA_PTR_GET_DEFAULT(ruleTaskId_, "") };
    inline RunContractResultGenerationRequestAssistantMetaData& setRuleTaskId(string ruleTaskId) { DARABONBA_PTR_SET_VALUE(ruleTaskId_, ruleTaskId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules>) };
    inline vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules>) };
    inline RunContractResultGenerationRequestAssistantMetaData& setRules(const vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline RunContractResultGenerationRequestAssistantMetaData& setRules(vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<Models::RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig> customRuleConfig_ = nullptr;
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<string> position_ = nullptr;
    std::shared_ptr<string> ruleTaskId_ = nullptr;
    std::shared_ptr<vector<Models::RunContractResultGenerationRequestAssistantMetaDataRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FaRui20240628
#endif
