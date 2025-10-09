// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULETEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYRULETEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityRuleTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityRuleTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckingConfig, checkingConfigShrink_);
      DARABONBA_PTR_TO_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SamplingConfig, samplingConfigShrink_);
      DARABONBA_PTR_TO_JSON(VisibleScope, visibleScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityRuleTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckingConfig, checkingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DirectoryPath, directoryPath_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SamplingConfig, samplingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(VisibleScope, visibleScope_);
    };
    CreateDataQualityRuleTemplateShrinkRequest() = default ;
    CreateDataQualityRuleTemplateShrinkRequest(const CreateDataQualityRuleTemplateShrinkRequest &) = default ;
    CreateDataQualityRuleTemplateShrinkRequest(CreateDataQualityRuleTemplateShrinkRequest &&) = default ;
    CreateDataQualityRuleTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityRuleTemplateShrinkRequest() = default ;
    CreateDataQualityRuleTemplateShrinkRequest& operator=(const CreateDataQualityRuleTemplateShrinkRequest &) = default ;
    CreateDataQualityRuleTemplateShrinkRequest& operator=(CreateDataQualityRuleTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkingConfigShrink_ != nullptr
        && this->directoryPath_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr && this->samplingConfigShrink_ != nullptr && this->visibleScope_ != nullptr; };
    // checkingConfigShrink Field Functions 
    bool hasCheckingConfigShrink() const { return this->checkingConfigShrink_ != nullptr;};
    void deleteCheckingConfigShrink() { this->checkingConfigShrink_ = nullptr;};
    inline string checkingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(checkingConfigShrink_, "") };
    inline CreateDataQualityRuleTemplateShrinkRequest& setCheckingConfigShrink(string checkingConfigShrink) { DARABONBA_PTR_SET_VALUE(checkingConfigShrink_, checkingConfigShrink) };


    // directoryPath Field Functions 
    bool hasDirectoryPath() const { return this->directoryPath_ != nullptr;};
    void deleteDirectoryPath() { this->directoryPath_ = nullptr;};
    inline string directoryPath() const { DARABONBA_PTR_GET_DEFAULT(directoryPath_, "") };
    inline CreateDataQualityRuleTemplateShrinkRequest& setDirectoryPath(string directoryPath) { DARABONBA_PTR_SET_VALUE(directoryPath_, directoryPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDataQualityRuleTemplateShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityRuleTemplateShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // samplingConfigShrink Field Functions 
    bool hasSamplingConfigShrink() const { return this->samplingConfigShrink_ != nullptr;};
    void deleteSamplingConfigShrink() { this->samplingConfigShrink_ = nullptr;};
    inline string samplingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(samplingConfigShrink_, "") };
    inline CreateDataQualityRuleTemplateShrinkRequest& setSamplingConfigShrink(string samplingConfigShrink) { DARABONBA_PTR_SET_VALUE(samplingConfigShrink_, samplingConfigShrink) };


    // visibleScope Field Functions 
    bool hasVisibleScope() const { return this->visibleScope_ != nullptr;};
    void deleteVisibleScope() { this->visibleScope_ = nullptr;};
    inline string visibleScope() const { DARABONBA_PTR_GET_DEFAULT(visibleScope_, "") };
    inline CreateDataQualityRuleTemplateShrinkRequest& setVisibleScope(string visibleScope) { DARABONBA_PTR_SET_VALUE(visibleScope_, visibleScope) };


  protected:
    // The check settings for sample data.
    std::shared_ptr<string> checkingConfigShrink_ = nullptr;
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
    std::shared_ptr<string> samplingConfigShrink_ = nullptr;
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
