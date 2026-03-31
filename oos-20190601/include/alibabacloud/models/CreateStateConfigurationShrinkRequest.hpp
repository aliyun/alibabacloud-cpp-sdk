// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTATECONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTATECONFIGURATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateStateConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStateConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigureMode, configureMode_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStateConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigureMode, configureMode_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScheduleExpression, scheduleExpression_);
      DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    CreateStateConfigurationShrinkRequest() = default ;
    CreateStateConfigurationShrinkRequest(const CreateStateConfigurationShrinkRequest &) = default ;
    CreateStateConfigurationShrinkRequest(CreateStateConfigurationShrinkRequest &&) = default ;
    CreateStateConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStateConfigurationShrinkRequest() = default ;
    CreateStateConfigurationShrinkRequest& operator=(const CreateStateConfigurationShrinkRequest &) = default ;
    CreateStateConfigurationShrinkRequest& operator=(CreateStateConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->configureMode_ == nullptr && this->description_ == nullptr && this->parameters_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scheduleExpression_ == nullptr && this->scheduleType_ == nullptr && this->tagsShrink_ == nullptr && this->targets_ == nullptr && this->templateName_ == nullptr
        && this->templateVersion_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateStateConfigurationShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configureMode Field Functions 
    bool hasConfigureMode() const { return this->configureMode_ != nullptr;};
    void deleteConfigureMode() { this->configureMode_ = nullptr;};
    inline string getConfigureMode() const { DARABONBA_PTR_GET_DEFAULT(configureMode_, "") };
    inline CreateStateConfigurationShrinkRequest& setConfigureMode(string configureMode) { DARABONBA_PTR_SET_VALUE(configureMode_, configureMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateStateConfigurationShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline CreateStateConfigurationShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStateConfigurationShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateStateConfigurationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduleExpression Field Functions 
    bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
    void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
    inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
    inline CreateStateConfigurationShrinkRequest& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline CreateStateConfigurationShrinkRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateStateConfigurationShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline string getTargets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
    inline CreateStateConfigurationShrinkRequest& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateStateConfigurationShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline CreateStateConfigurationShrinkRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The configuration mode. Valid values: ApplyOnce: The configuration is applied only once. After a configuration is updated, the new configuration is applied. ApplyAndMonitor: The configuration is applied only once. After the configuration is applied, the system only checks whether the configuration is migrated in the future. ApplyAndAutoCorrect: The configuration is always applied.
    shared_ptr<string> configureMode_ {};
    // The description of the desired-state configuration.
    shared_ptr<string> description_ {};
    // The parameters.
    shared_ptr<string> parameters_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The schedule expression. The interval between two schedules must be a minimum of 30 minutes.
    // 
    // This parameter is required.
    shared_ptr<string> scheduleExpression_ {};
    // The schedule type. Set the value to rate.
    // 
    // This parameter is required.
    shared_ptr<string> scheduleType_ {};
    // The tags to be added to the configuration.
    shared_ptr<string> tagsShrink_ {};
    // The resources to be queried.
    // 
    // This parameter is required.
    shared_ptr<string> targets_ {};
    // The name of the template. The name must be 1 to 200 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
    // 
    // This parameter is required.
    shared_ptr<string> templateName_ {};
    // The version number of the template. If you do not specify this parameter, the latest version of the template is used.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
