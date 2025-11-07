// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTATECONFIGURATIONRESPONSEBODYSTATECONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTATECONFIGURATIONRESPONSEBODYSTATECONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class UpdateStateConfigurationResponseBodyStateConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStateConfigurationResponseBodyStateConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigureMode, configureMode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(StateConfigurationId, stateConfigurationId_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStateConfigurationResponseBodyStateConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigureMode, configureMode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(StateConfigurationId, stateConfigurationId_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    UpdateStateConfigurationResponseBodyStateConfiguration() = default ;
    UpdateStateConfigurationResponseBodyStateConfiguration(const UpdateStateConfigurationResponseBodyStateConfiguration &) = default ;
    UpdateStateConfigurationResponseBodyStateConfiguration(UpdateStateConfigurationResponseBodyStateConfiguration &&) = default ;
    UpdateStateConfigurationResponseBodyStateConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStateConfigurationResponseBodyStateConfiguration() = default ;
    UpdateStateConfigurationResponseBodyStateConfiguration& operator=(const UpdateStateConfigurationResponseBodyStateConfiguration &) = default ;
    UpdateStateConfigurationResponseBodyStateConfiguration& operator=(UpdateStateConfigurationResponseBodyStateConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configureMode_ == nullptr
        && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->parameters_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scheduleExpression_ == nullptr
        && return this->scheduleType_ == nullptr && return this->stateConfigurationId_ == nullptr && return this->tags_ == nullptr && return this->targets_ == nullptr && return this->templateId_ == nullptr
        && return this->templateName_ == nullptr && return this->templateVersion_ == nullptr && return this->updateTime_ == nullptr; };
    // configureMode Field Functions 
    bool hasConfigureMode() const { return this->configureMode_ != nullptr;};
    void deleteConfigureMode() { this->configureMode_ = nullptr;};
    inline string configureMode() const { DARABONBA_PTR_GET_DEFAULT(configureMode_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setConfigureMode(string configureMode) { DARABONBA_PTR_SET_VALUE(configureMode_, configureMode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string scheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string scheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // stateConfigurationId Field Functions 
    bool hasStateConfigurationId() const { return this->stateConfigurationId_ != nullptr;};
    void deleteStateConfigurationId() { this->stateConfigurationId_ = nullptr;};
    inline string stateConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(stateConfigurationId_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setStateConfigurationId(string stateConfigurationId) { DARABONBA_PTR_SET_VALUE(stateConfigurationId_, stateConfigurationId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & tags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & tags() { DARABONBA_GET(tags_) };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setTags(Darabonba::Json & tags) { DARABONBA_SET_RVALUE(tags_, tags) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline string targets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline UpdateStateConfigurationResponseBodyStateConfiguration& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The configuration mode. Valid values:
    std::shared_ptr<string> configureMode_ = nullptr;
    // The time when the configuration was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the desired-state configuration.
    std::shared_ptr<string> description_ = nullptr;
    // The parameters.
    std::shared_ptr<string> parameters_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The CRON expression.
    std::shared_ptr<string> scheduleExpression_ = nullptr;
    // The schedule type.
    std::shared_ptr<string> scheduleType_ = nullptr;
    // The ID of the desired-state configuration.
    std::shared_ptr<string> stateConfigurationId_ = nullptr;
    // The tags added to the configuration.
    Darabonba::Json tags_ = nullptr;
    // The queried resources.
    std::shared_ptr<string> targets_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> templateName_ = nullptr;
    // The name of the template version.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The time when the configuration was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
