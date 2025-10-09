// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityRuleRequestCheckingConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataQualityRuleRequestErrorHandlers.hpp>
#include <alibabacloud/models/CreateDataQualityRuleRequestSamplingConfig.hpp>
#include <alibabacloud/models/CreateDataQualityRuleRequestTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateDataQualityRuleRequest() = default ;
    CreateDataQualityRuleRequest(const CreateDataQualityRuleRequest &) = default ;
    CreateDataQualityRuleRequest(CreateDataQualityRuleRequest &&) = default ;
    CreateDataQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleRequest() = default ;
    CreateDataQualityRuleRequest& operator=(const CreateDataQualityRuleRequest &) = default ;
    CreateDataQualityRuleRequest& operator=(CreateDataQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingConfig_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->errorHandlers_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr
        && this->samplingConfig_ != nullptr && this->severity_ != nullptr && this->target_ != nullptr && this->templateCode_ != nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const CreateDataQualityRuleRequestCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, CreateDataQualityRuleRequestCheckingConfig) };
    inline CreateDataQualityRuleRequestCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, CreateDataQualityRuleRequestCheckingConfig) };
    inline CreateDataQualityRuleRequest& setCheckingConfig(const CreateDataQualityRuleRequestCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline CreateDataQualityRuleRequest& setCheckingConfig(CreateDataQualityRuleRequestCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDataQualityRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<CreateDataQualityRuleRequestErrorHandlers> & errorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<CreateDataQualityRuleRequestErrorHandlers>) };
    inline vector<CreateDataQualityRuleRequestErrorHandlers> errorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<CreateDataQualityRuleRequestErrorHandlers>) };
    inline CreateDataQualityRuleRequest& setErrorHandlers(const vector<CreateDataQualityRuleRequestErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline CreateDataQualityRuleRequest& setErrorHandlers(vector<CreateDataQualityRuleRequestErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const CreateDataQualityRuleRequestSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, CreateDataQualityRuleRequestSamplingConfig) };
    inline CreateDataQualityRuleRequestSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, CreateDataQualityRuleRequestSamplingConfig) };
    inline CreateDataQualityRuleRequest& setSamplingConfig(const CreateDataQualityRuleRequestSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline CreateDataQualityRuleRequest& setSamplingConfig(CreateDataQualityRuleRequestSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateDataQualityRuleRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const CreateDataQualityRuleRequestTarget & target() const { DARABONBA_PTR_GET_CONST(target_, CreateDataQualityRuleRequestTarget) };
    inline CreateDataQualityRuleRequestTarget target() { DARABONBA_PTR_GET(target_, CreateDataQualityRuleRequestTarget) };
    inline CreateDataQualityRuleRequest& setTarget(const CreateDataQualityRuleRequestTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline CreateDataQualityRuleRequest& setTarget(CreateDataQualityRuleRequestTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateDataQualityRuleRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<CreateDataQualityRuleRequestCheckingConfig> checkingConfig_ = nullptr;
    // The description of the rule. The description can be up to 500 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the monitoring rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The operations that you can perform after the rule-based check fails.
    std::shared_ptr<vector<CreateDataQualityRuleRequestErrorHandlers>> errorHandlers_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The sampling settings.
    std::shared_ptr<CreateDataQualityRuleRequestSamplingConfig> samplingConfig_ = nullptr;
    // The strength of the rule. Valid values:
    // 
    // *   Normal
    // *   High
    std::shared_ptr<string> severity_ = nullptr;
    // The monitored object of the rule.
    std::shared_ptr<CreateDataQualityRuleRequestTarget> target_ = nullptr;
    // The ID of the template used by the rule.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
