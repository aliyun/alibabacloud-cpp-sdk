// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATECONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATECONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListStateConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStateConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StateConfigurations, stateConfigurations_);
    };
    friend void from_json(const Darabonba::Json& j, ListStateConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StateConfigurations, stateConfigurations_);
    };
    ListStateConfigurationsResponseBody() = default ;
    ListStateConfigurationsResponseBody(const ListStateConfigurationsResponseBody &) = default ;
    ListStateConfigurationsResponseBody(ListStateConfigurationsResponseBody &&) = default ;
    ListStateConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStateConfigurationsResponseBody() = default ;
    ListStateConfigurationsResponseBody& operator=(const ListStateConfigurationsResponseBody &) = default ;
    ListStateConfigurationsResponseBody& operator=(ListStateConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StateConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StateConfigurations& obj) { 
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
      friend void from_json(const Darabonba::Json& j, StateConfigurations& obj) { 
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
      StateConfigurations() = default ;
      StateConfigurations(const StateConfigurations &) = default ;
      StateConfigurations(StateConfigurations &&) = default ;
      StateConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StateConfigurations() = default ;
      StateConfigurations& operator=(const StateConfigurations &) = default ;
      StateConfigurations& operator=(StateConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configureMode_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->parameters_ == nullptr && this->resourceGroupId_ == nullptr && this->scheduleExpression_ == nullptr
        && this->scheduleType_ == nullptr && this->stateConfigurationId_ == nullptr && this->tags_ == nullptr && this->targets_ == nullptr && this->templateId_ == nullptr
        && this->templateName_ == nullptr && this->templateVersion_ == nullptr && this->updateTime_ == nullptr; };
      // configureMode Field Functions 
      bool hasConfigureMode() const { return this->configureMode_ != nullptr;};
      void deleteConfigureMode() { this->configureMode_ = nullptr;};
      inline string getConfigureMode() const { DARABONBA_PTR_GET_DEFAULT(configureMode_, "") };
      inline StateConfigurations& setConfigureMode(string configureMode) { DARABONBA_PTR_SET_VALUE(configureMode_, configureMode) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline StateConfigurations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline StateConfigurations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline string getParameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
      inline StateConfigurations& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline StateConfigurations& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scheduleExpression Field Functions 
      bool hasScheduleExpression() const { return this->scheduleExpression_ != nullptr;};
      void deleteScheduleExpression() { this->scheduleExpression_ = nullptr;};
      inline string getScheduleExpression() const { DARABONBA_PTR_GET_DEFAULT(scheduleExpression_, "") };
      inline StateConfigurations& setScheduleExpression(string scheduleExpression) { DARABONBA_PTR_SET_VALUE(scheduleExpression_, scheduleExpression) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline StateConfigurations& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // stateConfigurationId Field Functions 
      bool hasStateConfigurationId() const { return this->stateConfigurationId_ != nullptr;};
      void deleteStateConfigurationId() { this->stateConfigurationId_ = nullptr;};
      inline string getStateConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(stateConfigurationId_, "") };
      inline StateConfigurations& setStateConfigurationId(string stateConfigurationId) { DARABONBA_PTR_SET_VALUE(stateConfigurationId_, stateConfigurationId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline       const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
      Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
      inline StateConfigurations& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
      inline StateConfigurations& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


      // targets Field Functions 
      bool hasTargets() const { return this->targets_ != nullptr;};
      void deleteTargets() { this->targets_ = nullptr;};
      inline string getTargets() const { DARABONBA_PTR_GET_DEFAULT(targets_, "") };
      inline StateConfigurations& setTargets(string targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline StateConfigurations& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline StateConfigurations& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline StateConfigurations& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline StateConfigurations& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The configuration mode. Valid values:
      shared_ptr<string> configureMode_ {};
      // The time when the desired-state configuration was created.
      shared_ptr<string> createTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The parameters.
      shared_ptr<string> parameters_ {};
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
      // The version of the template.
      shared_ptr<string> templateVersion_ {};
      // The time when the configuration was updated.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->stateConfigurations_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListStateConfigurationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStateConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stateConfigurations Field Functions 
    bool hasStateConfigurations() const { return this->stateConfigurations_ != nullptr;};
    void deleteStateConfigurations() { this->stateConfigurations_ = nullptr;};
    inline const vector<ListStateConfigurationsResponseBody::StateConfigurations> & getStateConfigurations() const { DARABONBA_PTR_GET_CONST(stateConfigurations_, vector<ListStateConfigurationsResponseBody::StateConfigurations>) };
    inline vector<ListStateConfigurationsResponseBody::StateConfigurations> getStateConfigurations() { DARABONBA_PTR_GET(stateConfigurations_, vector<ListStateConfigurationsResponseBody::StateConfigurations>) };
    inline ListStateConfigurationsResponseBody& setStateConfigurations(const vector<ListStateConfigurationsResponseBody::StateConfigurations> & stateConfigurations) { DARABONBA_PTR_SET_VALUE(stateConfigurations_, stateConfigurations) };
    inline ListStateConfigurationsResponseBody& setStateConfigurations(vector<ListStateConfigurationsResponseBody::StateConfigurations> && stateConfigurations) { DARABONBA_PTR_SET_RVALUE(stateConfigurations_, stateConfigurations) };


  protected:
    // The pagination token that was used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the desired-state configurations.
    shared_ptr<vector<ListStateConfigurationsResponseBody::StateConfigurations>> stateConfigurations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
