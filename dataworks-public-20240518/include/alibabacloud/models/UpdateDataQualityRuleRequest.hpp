// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleRequestCheckingConfig.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDataQualityRuleRequestErrorHandlers.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleRequestSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    UpdateDataQualityRuleRequest() = default ;
    UpdateDataQualityRuleRequest(const UpdateDataQualityRuleRequest &) = default ;
    UpdateDataQualityRuleRequest(UpdateDataQualityRuleRequest &&) = default ;
    UpdateDataQualityRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleRequest() = default ;
    UpdateDataQualityRuleRequest& operator=(const UpdateDataQualityRuleRequest &) = default ;
    UpdateDataQualityRuleRequest& operator=(UpdateDataQualityRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->errorHandlers_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr
        && return this->projectId_ == nullptr && return this->samplingConfig_ == nullptr && return this->severity_ == nullptr && return this->templateCode_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleRequestCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, UpdateDataQualityRuleRequestCheckingConfig) };
    inline UpdateDataQualityRuleRequestCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, UpdateDataQualityRuleRequestCheckingConfig) };
    inline UpdateDataQualityRuleRequest& setCheckingConfig(const UpdateDataQualityRuleRequestCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline UpdateDataQualityRuleRequest& setCheckingConfig(UpdateDataQualityRuleRequestCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDataQualityRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<UpdateDataQualityRuleRequestErrorHandlers> & errorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<UpdateDataQualityRuleRequestErrorHandlers>) };
    inline vector<UpdateDataQualityRuleRequestErrorHandlers> errorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<UpdateDataQualityRuleRequestErrorHandlers>) };
    inline UpdateDataQualityRuleRequest& setErrorHandlers(const vector<UpdateDataQualityRuleRequestErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline UpdateDataQualityRuleRequest& setErrorHandlers(vector<UpdateDataQualityRuleRequestErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityRuleRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityRuleRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleRequestSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, UpdateDataQualityRuleRequestSamplingConfig) };
    inline UpdateDataQualityRuleRequestSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, UpdateDataQualityRuleRequestSamplingConfig) };
    inline UpdateDataQualityRuleRequest& setSamplingConfig(const UpdateDataQualityRuleRequestSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline UpdateDataQualityRuleRequest& setSamplingConfig(UpdateDataQualityRuleRequestSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateDataQualityRuleRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateDataQualityRuleRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<UpdateDataQualityRuleRequestCheckingConfig> checkingConfig_ = nullptr;
    // The description of the rule. The description can be up to 500 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The operations that you can perform after the rule-based check fails.
    std::shared_ptr<vector<UpdateDataQualityRuleRequestErrorHandlers>> errorHandlers_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule. The name can be up to 255 characters in length and can contain digits, letters, and punctuation marks.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The sampling settings.
    std::shared_ptr<UpdateDataQualityRuleRequestSamplingConfig> samplingConfig_ = nullptr;
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
