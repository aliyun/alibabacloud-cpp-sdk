// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYEVALUATIONTASKREQUESTDATAQUALITYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers.hpp>
#include <alibabacloud/models/UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityEvaluationTaskRequestDataQualityRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityEvaluationTaskRequestDataQualityRules& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityEvaluationTaskRequestDataQualityRules& obj) { 
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
    UpdateDataQualityEvaluationTaskRequestDataQualityRules() = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRules(const UpdateDataQualityEvaluationTaskRequestDataQualityRules &) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRules(UpdateDataQualityEvaluationTaskRequestDataQualityRules &&) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityEvaluationTaskRequestDataQualityRules() = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRules& operator=(const UpdateDataQualityEvaluationTaskRequestDataQualityRules &) = default ;
    UpdateDataQualityEvaluationTaskRequestDataQualityRules& operator=(UpdateDataQualityEvaluationTaskRequestDataQualityRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->errorHandlers_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->samplingConfig_ == nullptr && return this->severity_ == nullptr && return this->templateCode_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig) };
    inline Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setCheckingConfig(const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setCheckingConfig(Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> & errorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers>) };
    inline vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> errorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers>) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setErrorHandlers(const vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setErrorHandlers(vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig) };
    inline Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setSamplingConfig(const Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setSamplingConfig(Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateDataQualityEvaluationTaskRequestDataQualityRules& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesCheckingConfig> checkingConfig_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The operations that you can perform after the rule-based check fails.
    std::shared_ptr<vector<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesErrorHandlers>> errorHandlers_ = nullptr;
    // The rule ID. You can call the [ListQualityRules](https://help.aliyun.com/document_detail/173995.html) operation to query the ID of the monitoring rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the monitoring rule.
    std::shared_ptr<string> name_ = nullptr;
    // The parameters required for sampling.
    std::shared_ptr<Models::UpdateDataQualityEvaluationTaskRequestDataQualityRulesSamplingConfig> samplingConfig_ = nullptr;
    // The strength of the rule. Valid values:
    // 
    // *   Normal
    // *   High
    std::shared_ptr<string> severity_ = nullptr;
    // The ID of the template used by the rule.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
