// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataQualityRuleTemplateRequestCheckingConfig.hpp>
#include <alibabacloud/models/CreateDataQualityRuleTemplateRequestSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
      DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
    };
    CreateDataQualityRuleTemplateRequest() = default ;
    CreateDataQualityRuleTemplateRequest(const CreateDataQualityRuleTemplateRequest &) = default ;
    CreateDataQualityRuleTemplateRequest(CreateDataQualityRuleTemplateRequest &&) = default ;
    CreateDataQualityRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleTemplateRequest() = default ;
    CreateDataQualityRuleTemplateRequest& operator=(const CreateDataQualityRuleTemplateRequest &) = default ;
    CreateDataQualityRuleTemplateRequest& operator=(CreateDataQualityRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && return this->directoryPath_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->samplingConfig_ == nullptr && return this->visibleScope_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const CreateDataQualityRuleTemplateRequestCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, CreateDataQualityRuleTemplateRequestCheckingConfig) };
    inline CreateDataQualityRuleTemplateRequestCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, CreateDataQualityRuleTemplateRequestCheckingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setCheckingConfig(const CreateDataQualityRuleTemplateRequestCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setCheckingConfig(CreateDataQualityRuleTemplateRequestCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string directoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline CreateDataQualityRuleTemplateRequest& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityRuleTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const CreateDataQualityRuleTemplateRequestSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, CreateDataQualityRuleTemplateRequestSamplingConfig) };
    inline CreateDataQualityRuleTemplateRequestSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, CreateDataQualityRuleTemplateRequestSamplingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setSamplingConfig(const CreateDataQualityRuleTemplateRequestSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline CreateDataQualityRuleTemplateRequest& setSamplingConfig(CreateDataQualityRuleTemplateRequestSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


    // visibleScope Field Functions 
    bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
    void deleteVisibleScope() { this->visibleScope_ = nullptr;};
    inline string visibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
    inline CreateDataQualityRuleTemplateRequest& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<CreateDataQualityRuleTemplateRequestCheckingConfig> checkingConfig_ = nullptr;
    // The directory in which the template is stored. Slashes (/) are used to separate directory levels. The name of each directory level can be up to 1,024 characters in length. It cannot contain whitespace characters or slashes (/).
    std::shared_ptr<string> directoryPath_ = nullptr;
    // The name of the template. The name can be up to 512 characters in length and can contain digits, letters, and punctuation marks.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The sampling settings.
    std::shared_ptr<CreateDataQualityRuleTemplateRequestSamplingConfig> samplingConfig_ = nullptr;
    // The applicable scope of the template. Valid values:
    // 
    // *   Tenant: The template is available in all workspaces in the current tenant.
    // *   Project: The template is available only in the current workspace.
    std::shared_ptr<string> visibleScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
