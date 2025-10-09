// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAQUALITYRULETEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_DATAQUALITYRULETEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataQualityRuleTemplateCheckingConfig.hpp>
#include <alibabacloud/models/DataQualityRuleTemplateSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DataQualityRuleTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataQualityRuleTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
    };
    friend void from_json(const Darabonba::Json& j, DataQualityRuleTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
    };
    DataQualityRuleTemplate() = default ;
    DataQualityRuleTemplate(const DataQualityRuleTemplate &) = default ;
    DataQualityRuleTemplate(DataQualityRuleTemplate &&) = default ;
    DataQualityRuleTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataQualityRuleTemplate() = default ;
    DataQualityRuleTemplate& operator=(const DataQualityRuleTemplate &) = default ;
    DataQualityRuleTemplate& operator=(DataQualityRuleTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingConfig_ != nullptr
        && this->code_ != nullptr && this->directoryPath_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr && this->samplingConfig_ != nullptr
        && this->tenantId_ != nullptr && this->visibleScope_ != nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const DataQualityRuleTemplateCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, DataQualityRuleTemplateCheckingConfig) };
    inline DataQualityRuleTemplateCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, DataQualityRuleTemplateCheckingConfig) };
    inline DataQualityRuleTemplate& setCheckingConfig(const DataQualityRuleTemplateCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline DataQualityRuleTemplate& setCheckingConfig(DataQualityRuleTemplateCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DataQualityRuleTemplate& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string directoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline DataQualityRuleTemplate& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DataQualityRuleTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DataQualityRuleTemplate& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const DataQualityRuleTemplateSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, DataQualityRuleTemplateSamplingConfig) };
    inline DataQualityRuleTemplateSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, DataQualityRuleTemplateSamplingConfig) };
    inline DataQualityRuleTemplate& setSamplingConfig(const DataQualityRuleTemplateSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline DataQualityRuleTemplate& setSamplingConfig(DataQualityRuleTemplateSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline DataQualityRuleTemplate& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // visibleScope Field Functions 
    bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
    void deleteVisibleScope() { this->visibleScope_ = nullptr;};
    inline string visibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
    inline DataQualityRuleTemplate& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


  protected:
    std::shared_ptr<DataQualityRuleTemplateCheckingConfig> checkingConfig_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> directoryPath_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<DataQualityRuleTemplateSamplingConfig> samplingConfig_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> visibleScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
