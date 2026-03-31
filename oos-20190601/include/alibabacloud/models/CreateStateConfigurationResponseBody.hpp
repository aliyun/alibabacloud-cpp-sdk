// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTATECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESTATECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateStateConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStateConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StateConfiguration, stateConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStateConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StateConfiguration, stateConfiguration_);
    };
    CreateStateConfigurationResponseBody() = default ;
    CreateStateConfigurationResponseBody(const CreateStateConfigurationResponseBody &) = default ;
    CreateStateConfigurationResponseBody(CreateStateConfigurationResponseBody &&) = default ;
    CreateStateConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStateConfigurationResponseBody() = default ;
    CreateStateConfigurationResponseBody& operator=(const CreateStateConfigurationResponseBody &) = default ;
    CreateStateConfigurationResponseBody& operator=(CreateStateConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StateConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StateConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigureMode, configureMode_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_ANY_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ScheduleExpression, scheduleExpression_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(StateConfigurationId, stateConfigurationId_);
        DARABONBA_ANY_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Targets, targets_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      };
      friend void from_json(const Darabonba::Json& j, StateConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigureMode, configureMode_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ScheduleExpression, scheduleExpression_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(StateConfigurationId, stateConfigurationId_);
        DARABONBA_ANY_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Targets, targets_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      };
      StateConfiguration() = default ;
      StateConfiguration(const StateConfiguration &) = default ;
      StateConfiguration(StateConfiguration &&) = default ;
      StateConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StateConfiguration() = default ;
      StateConfiguration& operator=(const StateConfiguration &) = default ;
      StateConfiguration& operator=(StateConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configureMode_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->parameters_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleExpression_ == nullptr
        && this->scheduleType_ == nullptr && this->stateConfigurationId_ == nullptr && this->tags_ == nullptr && this->targets_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateVersion_ == nullptr; };
      // configureMode Field Functions 
      bool hasConfigureMode() const { return this->configureMode_ != nullptr;};
      void deleteConfigureMode() { this->configureMode_ = nullptr;};
      inline string getConfigureMode() const { DARABONBA_PTR_GET_DEFAULT(configureMode_, "") };
      inline StateConfiguration& setConfigureMode(string configureMode) { DARABONBA_PTR_SET_VALUE(configureMode_, configureMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StateConfiguration& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StateConfiguration& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline       const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
      Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
      inline StateConfiguration& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
      inline StateConfiguration& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline StateConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scheduleExpression Field Functions 
      bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
      void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
      inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
      inline StateConfiguration& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline StateConfiguration& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // stateConfigurationId Field Functions 
      bool hasStateConfigurationId() const { return this->stateConfigurationId_ != nullptr;};
      void deleteStateConfigurationId() { this->stateConfigurationId_ = nullptr;};
      inline string getStateConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(stateConfigurationId_, "") };
      inline StateConfiguration& setStateConfigurationId(string stateConfigurationId) { DARABONBA_PTR_SET_VALUE(stateConfigurationId_, stateConfigurationId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline StateConfiguration& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline StateConfiguration& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline string getTargets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
      inline StateConfiguration& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline StateConfiguration& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline StateConfiguration& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline StateConfiguration& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    protected:
      // The configuration mode. Valid values:
      shared_ptr<string> configureMode_ {};
      // The time when the desired-state configuration was created.
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The parameters.
      Darabonba::Json parameters_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The schedule expression.
      shared_ptr<string> scheduleExpression_ {};
      // The schedule type.
      shared_ptr<string> scheduleType_ {};
      // The ID of the desired-state configuration.
      shared_ptr<string> stateConfigurationId_ {};
      // The tags added to the configuration.
      Darabonba::Json tags_ {};
      // The queried resources.
      shared_ptr<string> targets_ {};
      // The template ID.
      shared_ptr<string> templateId_ {};
      // The name of the template.
      shared_ptr<string> templateName_ {};
      // The name of the template version.
      shared_ptr<string> templateVersion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->stateConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateStateConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateConfiguration Field Functions 
    bool hasStateConfiguration() const { return this->stateConfiguration_ != nullptr;};
    void deleteStateConfiguration() { this->stateConfiguration_ = nullptr;};
    inline const CreateStateConfigurationResponseBody::StateConfiguration & getStateConfiguration() const { DARABONBA_PTR_GET_CONST(stateConfiguration_, CreateStateConfigurationResponseBody::StateConfiguration) };
    inline CreateStateConfigurationResponseBody::StateConfiguration getStateConfiguration() { DARABONBA_PTR_GET(stateConfiguration_, CreateStateConfigurationResponseBody::StateConfiguration) };
    inline CreateStateConfigurationResponseBody& setStateConfiguration(const CreateStateConfigurationResponseBody::StateConfiguration & stateConfiguration) { DARABONBA_PTR_SET_VALUE(stateConfiguration_, stateConfiguration) };
    inline CreateStateConfigurationResponseBody& setStateConfiguration(CreateStateConfigurationResponseBody::StateConfiguration && stateConfiguration) { DARABONBA_PTR_SET_RVALUE(stateConfiguration_, stateConfiguration) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the desired-state configuration.
    shared_ptr<CreateStateConfigurationResponseBody::StateConfiguration> stateConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
