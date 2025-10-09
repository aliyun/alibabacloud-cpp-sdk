// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULE_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataQualityRuleCheckingConfig.hpp>
#include <vector>
#include <alibabacloud/models/DataQualityRuleErrorHandlers.hpp>
#include <alibabacloud/models/DataQualityRuleSamplingConfig.hpp>
#include <alibabacloud/models/DataQualityRuleTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRule& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ErrorHandlers, errorHandlers_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DataQualityRule() = default ;
    DataQualityRule(const DataQualityRule &) = default ;
    DataQualityRule(DataQualityRule &&) = default ;
    DataQualityRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityRule() = default ;
    DataQualityRule& operator=(const DataQualityRule &) = default ;
    DataQualityRule& operator=(DataQualityRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingConfig_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->errorHandlers_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->projectId_ != nullptr && this->samplingConfig_ != nullptr && this->severity_ != nullptr && this->target_ != nullptr && this->templateCode_ != nullptr
        && this->tenantId_ != nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const DataQualityRuleCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, DataQualityRuleCheckingConfig) };
    inline DataQualityRuleCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, DataQualityRuleCheckingConfig) };
    inline DataQualityRule& setCheckingConfig(const DataQualityRuleCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline DataQualityRule& setCheckingConfig(DataQualityRuleCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataQualityRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DataQualityRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // errorHandlers Field Functions 
    bool hasErrorHandlers() const { return this->errorHandlers_ != nullptr;};
    void deleteErrorHandlers() { this->errorHandlers_ = nullptr;};
    inline const vector<DataQualityRuleErrorHandlers> & errorHandlers() const { DARABONBA_PTR_GET_CONST(errorHandlers_, vector<DataQualityRuleErrorHandlers>) };
    inline vector<DataQualityRuleErrorHandlers> errorHandlers() { DARABONBA_PTR_GET(errorHandlers_, vector<DataQualityRuleErrorHandlers>) };
    inline DataQualityRule& setErrorHandlers(const vector<DataQualityRuleErrorHandlers> & errorHandlers) { DARABONBA_PTR_SET_VALUE(errorHandlers_, errorHandlers) };
    inline DataQualityRule& setErrorHandlers(vector<DataQualityRuleErrorHandlers> && errorHandlers) { DARABONBA_PTR_SET_RVALUE(errorHandlers_, errorHandlers) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DataQualityRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataQualityRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DataQualityRule& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const DataQualityRuleSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, DataQualityRuleSamplingConfig) };
    inline DataQualityRuleSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, DataQualityRuleSamplingConfig) };
    inline DataQualityRule& setSamplingConfig(const DataQualityRuleSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline DataQualityRule& setSamplingConfig(DataQualityRuleSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DataQualityRule& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const DataQualityRuleTarget & target() const { DARABONBA_PTR_GET_CONST(target_, DataQualityRuleTarget) };
    inline DataQualityRuleTarget target() { DARABONBA_PTR_GET(target_, DataQualityRuleTarget) };
    inline DataQualityRule& setTarget(const DataQualityRuleTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline DataQualityRule& setTarget(DataQualityRuleTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // templateCode Field Functions 
    bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
    void deleteTemplateCode() { this->templateCode_ = nullptr;};
    inline string templateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
    inline DataQualityRule& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DataQualityRule& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<DataQualityRuleCheckingConfig> checkingConfig_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<vector<DataQualityRuleErrorHandlers>> errorHandlers_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<DataQualityRuleSamplingConfig> samplingConfig_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<DataQualityRuleTarget> target_ = nullptr;
    std::shared_ptr<string> templateCode_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
