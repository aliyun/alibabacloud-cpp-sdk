// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfigShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlersShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfigShrink_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Target, targetShrink_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlersShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Target, targetShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    CreateDataQualityRuleShrinkRequest() = default ;
    CreateDataQualityRuleShrinkRequest(const CreateDataQualityRuleShrinkRequest &) = default ;
    CreateDataQualityRuleShrinkRequest(CreateDataQualityRuleShrinkRequest &&) = default ;
    CreateDataQualityRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleShrinkRequest() = default ;
    CreateDataQualityRuleShrinkRequest& operator=(const CreateDataQualityRuleShrinkRequest &) = default ;
    CreateDataQualityRuleShrinkRequest& operator=(CreateDataQualityRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingConfigShrink_ == nullptr
        && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->errorHandlersShrink_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr
        && return this->samplingConfigShrink_ == nullptr && return this->severity_ == nullptr && return this->targetShrink_ == nullptr && return this->templateCode_ == nullptr; };
    // checkingConfigShrink Field Functions 
    bool hasCheckingConfigShrink() const { return this->checkingConfigShrink_ != nullptr;};
    void deleteCheckingConfigShrink() { this->checkingConfigShrink_ = nullptr;};
    inline string checkingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(checkingConfigShrink_, "") };
    inline CreateDataQualityRuleShrinkRequest& setCheckingConfigShrink(string checkingConfigShrink) { DARABONBA_PTR_SET_VALUE(checkingConfigShrink_, checkingConfigShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDataQualityRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDataQualityRuleShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlersShrink Field Functions 
    bool hasErrorHandlersShrink() const { return this->errorHandlersShrink_ != nullptr;};
    void deleteErrorHandlersShrink() { this->errorHandlersShrink_ = nullptr;};
    inline string errorHandlersShrink() const { DARABONBA_PTR_GET_DEFAULT(errorHandlersShrink_, "") };
    inline CreateDataQualityRuleShrinkRequest& setErrorHandlersShrink(string errorHandlersShrink) { DARABONBA_PTR_SET_VALUE(errorHandlersShrink_, errorHandlersShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityRuleShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfigShrink Field Functions 
    bool hasSamplingConfigShrink() const { return this->samplingConfigShrink_ != nullptr;};
    void deleteSamplingConfigShrink() { this->samplingConfigShrink_ = nullptr;};
    inline string samplingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(samplingConfigShrink_, "") };
    inline CreateDataQualityRuleShrinkRequest& setSamplingConfigShrink(string samplingConfigShrink) { DARABONBA_PTR_SET_VALUE(samplingConfigShrink_, samplingConfigShrink) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateDataQualityRuleShrinkRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // targetShrink Field Functions 
    bool hasTargetShrink() const { return this->targetShrink_ != nullptr;};
    void deleteTargetShrink() { this->targetShrink_ = nullptr;};
    inline string targetShrink() const { DARABONBA_PTR_GET_DEFAULT(targetShrink_, "") };
    inline CreateDataQualityRuleShrinkRequest& setTargetShrink(string targetShrink) { DARABONBA_PTR_SET_VALUE(targetShrink_, targetShrink) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline CreateDataQualityRuleShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<string> checkingConfigShrink_ = nullptr;
    // The description of the rule. The description can be up to 500 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the monitoring rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The operations that you can perform after the rule-based check fails.
    std::shared_ptr<string> errorHandlersShrink_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The sampling settings.
    std::shared_ptr<string> samplingConfigShrink_ = nullptr;
    // The strength of the rule. Valid values:
    // 
    // *   Normal
    // *   High
    std::shared_ptr<string> severity_ = nullptr;
    // The monitored object of the rule.
    std::shared_ptr<string> targetShrink_ = nullptr;
    // The ID of the template used by the rule.
    std::shared_ptr<string> templateCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
