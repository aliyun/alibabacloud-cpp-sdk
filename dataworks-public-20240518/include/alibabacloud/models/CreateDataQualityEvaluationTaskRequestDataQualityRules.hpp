// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers.hpp>
#include <alibabacloud/models/CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityEvaluationTaskRequestDataQualityRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityEvaluationTaskRequestDataQualityRules& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityEvaluationTaskRequestDataQualityRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateDataQualityEvaluationTaskRequestDataQualityRules() = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRules(const CreateDataQualityEvaluationTaskRequestDataQualityRules &) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRules(CreateDataQualityEvaluationTaskRequestDataQualityRules &&) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityEvaluationTaskRequestDataQualityRules() = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRules& operator=(const CreateDataQualityEvaluationTaskRequestDataQualityRules &) = default ;
    CreateDataQualityEvaluationTaskRequestDataQualityRules& operator=(CreateDataQualityEvaluationTaskRequestDataQualityRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingConfig_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->errorHandlers_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->samplingConfig_ != nullptr && this->severity_ != nullptr && this->templateCode_ != nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig) };
    inline Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setCheckingConfig(const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setCheckingConfig(Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> & errorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers>) };
    inline vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> errorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers>) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setErrorHandlers(const vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setErrorHandlers(vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig) };
    inline Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setSamplingConfig(const Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setSamplingConfig(Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateDataQualityEvaluationTaskRequestDataQualityRules& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig> checkingConfig_ = nullptr;
    // The description of the monitoring rule.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the monitoring rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The operations that you can perform after the rule-based check fails.
    std::shared_ptr<vector<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers>> errorHandlers_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the monitoring rule.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters required for sampling.
    std::shared_ptr<Models::CreateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig> samplingConfig_ = nullptr;
    // The strength of the monitoring rule. Valid values:
    // 
    // *   Normal
    // *   High
    std::shared_ptr<string> severity_ = nullptr;
    // The ID of the template used by the monitoring rule.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
