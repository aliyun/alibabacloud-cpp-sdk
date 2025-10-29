// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYRULETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleTemplateRequestCheckingConfig.hpp>
#include <alibabacloud/models/UpdateDataQualityRuleTemplateRequestSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityRuleTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityRuleTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfig_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfig_);
    };
    UpdateDataQualityRuleTemplateRequest() = default ;
    UpdateDataQualityRuleTemplateRequest(const UpdateDataQualityRuleTemplateRequest &) = default ;
    UpdateDataQualityRuleTemplateRequest(UpdateDataQualityRuleTemplateRequest &&) = default ;
    UpdateDataQualityRuleTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityRuleTemplateRequest() = default ;
    UpdateDataQualityRuleTemplateRequest& operator=(const UpdateDataQualityRuleTemplateRequest &) = default ;
    UpdateDataQualityRuleTemplateRequest& operator=(UpdateDataQualityRuleTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkingConfig_ == nullptr
        && return this->code_ == nullptr && return this->directoryPath_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr && return this->samplingConfig_ == nullptr; };
    // checkingConfig Field Functions 
    bool hasCheckingConfig() const { return this->checkingConfig_ != nullptr;};
    void deleteCheckingConfig() { this->checkingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleTemplateRequestCheckingConfig & checkingConfig() const { DARABONBA_PTR_GET_CONST(checkingConfig_, UpdateDataQualityRuleTemplateRequestCheckingConfig) };
    inline UpdateDataQualityRuleTemplateRequestCheckingConfig checkingConfig() { DARABONBA_PTR_GET(checkingConfig_, UpdateDataQualityRuleTemplateRequestCheckingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setCheckingConfig(const UpdateDataQualityRuleTemplateRequestCheckingConfig & checkingConfig) { DARABONBA_PTR_SET_VALUE(checkingConfig_, checkingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setCheckingConfig(UpdateDataQualityRuleTemplateRequestCheckingConfig && checkingConfig) { DARABONBA_PTR_SET_RVALUE(checkingConfig_, checkingConfig) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateDataQualityRuleTemplateRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string directoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline UpdateDataQualityRuleTemplateRequest& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityRuleTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDataQualityRuleTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const UpdateDataQualityRuleTemplateRequestSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, UpdateDataQualityRuleTemplateRequestSamplingConfig) };
    inline UpdateDataQualityRuleTemplateRequestSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, UpdateDataQualityRuleTemplateRequestSamplingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setSamplingConfig(const UpdateDataQualityRuleTemplateRequestSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline UpdateDataQualityRuleTemplateRequest& setSamplingConfig(UpdateDataQualityRuleTemplateRequestSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<UpdateDataQualityRuleTemplateRequestCheckingConfig> checkingConfig_ = nullptr;
    // The code for the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    // The directory in which the template is stored. Slashes (/) are used to separate directory levels. The name of each directory level can be up to 1,024 characters in length. It cannot contain whitespace characters or slashes (/).
    std::shared_ptr<string> directoryPath_ = nullptr;
    // The name of the template. The name can be up to 512 characters in length and can contain digits, letters, and punctuation marks.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The sampling settings.
    std::shared_ptr<UpdateDataQualityRuleTemplateRequestSamplingConfig> samplingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
