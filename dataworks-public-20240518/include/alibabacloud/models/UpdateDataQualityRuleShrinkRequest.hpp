// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfigShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlersShrink_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfigShrink_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlersShrink_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
    };
    UpdateDataQualityRuleShrinkRequest() = default ;
    UpdateDataQualityRuleShrinkRequest(const UpdateDataQualityRuleShrinkRequest &) = default ;
    UpdateDataQualityRuleShrinkRequest(UpdateDataQualityRuleShrinkRequest &&) = default ;
    UpdateDataQualityRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleShrinkRequest() = default ;
    UpdateDataQualityRuleShrinkRequest& operator=(const UpdateDataQualityRuleShrinkRequest &) = default ;
    UpdateDataQualityRuleShrinkRequest& operator=(UpdateDataQualityRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingConfigShrink_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->errorHandlersShrink_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->projectId_ != nullptr && this->samplingConfigShrink_ != nullptr && this->severity_ != nullptr && this->templateCode_ != nullptr; };
    // checkingConfigShrink Field Functions 
    bool hasCheckingConfigShrink() const { return this->checkingConfigShrink_ != nullptr;};
    void deleteCheckingConfigShrink() { this->checkingConfigShrink_ = nullptr;};
    inline string checkingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(checkingConfigShrink_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setCheckingConfigShrink(string checkingConfigShrink) { DARABONBA_PTR_SET_VALUE(checkingConfigShrink_, checkingConfigShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDataQualityRuleShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlersShrink Field Functions 
    bool hasErrorHandlersShrink() const { return this->errorHandlersShrink_ != nullptr;};
    void deleteErrorHandlersShrink() { this->errorHandlersShrink_ = nullptr;};
    inline string errorHandlersShrink() const { DARABONBA_PTR_GET_DEFAULT(errorHandlersShrink_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setErrorHandlersShrink(string errorHandlersShrink) { DARABONBA_PTR_SET_VALUE(errorHandlersShrink_, errorHandlersShrink) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDataQualityRuleShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityRuleShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfigShrink Field Functions 
    bool hasSamplingConfigShrink() const { return this->samplingConfigShrink_ != nullptr;};
    void deleteSamplingConfigShrink() { this->samplingConfigShrink_ = nullptr;};
    inline string samplingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(samplingConfigShrink_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setSamplingConfigShrink(string samplingConfigShrink) { DARABONBA_PTR_SET_VALUE(samplingConfigShrink_, samplingConfigShrink) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline UpdateDataQualityRuleShrinkRequest& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<string> checkingConfigShrink_ = nullptr;
    // The description of the rule. The description can be up to 500 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The operations that you can perform after the rule-based check fails.
    std::shared_ptr<string> errorHandlersShrink_ = nullptr;
    // The rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule. The name can be up to 255 characters in length and can contain digits, letters, and punctuation marks.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The sampling settings.
    std::shared_ptr<string> samplingConfigShrink_ = nullptr;
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
