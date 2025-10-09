// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkflowInstancesRequestDefaultRunProperties.hpp>
#include <alibabacloud/models/CreateWorkflowInstancesRequestPeriods.hpp>
#include <vector>
#include <alibabacloud/models/CreateWorkflowInstancesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStartEnabled, autoStartEnabled_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultRunProperties, defaultRunProperties_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Periods, periods_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TagCreationPolicy, tagCreationPolicy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskParameters, taskParameters_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStartEnabled, autoStartEnabled_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultRunProperties, defaultRunProperties_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Periods, periods_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TagCreationPolicy, tagCreationPolicy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskParameters, taskParameters_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
    };
    CreateWorkflowInstancesRequest() = default ;
    CreateWorkflowInstancesRequest(const CreateWorkflowInstancesRequest &) = default ;
    CreateWorkflowInstancesRequest(CreateWorkflowInstancesRequest &&) = default ;
    CreateWorkflowInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequest() = default ;
    CreateWorkflowInstancesRequest& operator=(const CreateWorkflowInstancesRequest &) = default ;
    CreateWorkflowInstancesRequest& operator=(CreateWorkflowInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoStartEnabled_ != nullptr
        && this->comment_ != nullptr && this->defaultRunProperties_ != nullptr && this->envType_ != nullptr && this->name_ != nullptr && this->periods_ != nullptr
        && this->projectId_ != nullptr && this->tagCreationPolicy_ != nullptr && this->tags_ != nullptr && this->taskParameters_ != nullptr && this->type_ != nullptr
        && this->workflowId_ != nullptr && this->workflowParameters_ != nullptr; };
    // autoStartEnabled Field Functions 
    bool hasAutoStartEnabled() const { return this->autoStartEnabled_ != nullptr;};
    void deleteAutoStartEnabled() { this->autoStartEnabled_ = nullptr;};
    inline bool autoStartEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoStartEnabled_, false) };
    inline CreateWorkflowInstancesRequest& setAutoStartEnabled(bool autoStartEnabled) { DARABONBA_PTR_SET_VALUE(autoStartEnabled_, autoStartEnabled) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateWorkflowInstancesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultRunProperties Field Functions 
    bool hasDefaultRunProperties() const { return this->defaultRunProperties_ != nullptr;};
    void deleteDefaultRunProperties() { this->defaultRunProperties_ = nullptr;};
    inline const CreateWorkflowInstancesRequestDefaultRunProperties & defaultRunProperties() const { DARABONBA_PTR_GET_CONST(defaultRunProperties_, CreateWorkflowInstancesRequestDefaultRunProperties) };
    inline CreateWorkflowInstancesRequestDefaultRunProperties defaultRunProperties() { DARABONBA_PTR_GET(defaultRunProperties_, CreateWorkflowInstancesRequestDefaultRunProperties) };
    inline CreateWorkflowInstancesRequest& setDefaultRunProperties(const CreateWorkflowInstancesRequestDefaultRunProperties & defaultRunProperties) { DARABONBA_PTR_SET_VALUE(defaultRunProperties_, defaultRunProperties) };
    inline CreateWorkflowInstancesRequest& setDefaultRunProperties(CreateWorkflowInstancesRequestDefaultRunProperties && defaultRunProperties) { DARABONBA_PTR_SET_RVALUE(defaultRunProperties_, defaultRunProperties) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateWorkflowInstancesRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkflowInstancesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // periods Field Functions 
    bool hasPeriods() const { return this->periods_ != nullptr;};
    void deletePeriods() { this->periods_ = nullptr;};
    inline const CreateWorkflowInstancesRequestPeriods & periods() const { DARABONBA_PTR_GET_CONST(periods_, CreateWorkflowInstancesRequestPeriods) };
    inline CreateWorkflowInstancesRequestPeriods periods() { DARABONBA_PTR_GET(periods_, CreateWorkflowInstancesRequestPeriods) };
    inline CreateWorkflowInstancesRequest& setPeriods(const CreateWorkflowInstancesRequestPeriods & periods) { DARABONBA_PTR_SET_VALUE(periods_, periods) };
    inline CreateWorkflowInstancesRequest& setPeriods(CreateWorkflowInstancesRequestPeriods && periods) { DARABONBA_PTR_SET_RVALUE(periods_, periods) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateWorkflowInstancesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tagCreationPolicy Field Functions 
    bool hasTagCreationPolicy() const { return this->tagCreationPolicy_ != nullptr;};
    void deleteTagCreationPolicy() { this->tagCreationPolicy_ = nullptr;};
    inline string tagCreationPolicy() const { DARABONBA_PTR_GET_DEFAULT(tagCreationPolicy_, "") };
    inline CreateWorkflowInstancesRequest& setTagCreationPolicy(string tagCreationPolicy) { DARABONBA_PTR_SET_VALUE(tagCreationPolicy_, tagCreationPolicy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateWorkflowInstancesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateWorkflowInstancesRequestTags>) };
    inline vector<CreateWorkflowInstancesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreateWorkflowInstancesRequestTags>) };
    inline CreateWorkflowInstancesRequest& setTags(const vector<CreateWorkflowInstancesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateWorkflowInstancesRequest& setTags(vector<CreateWorkflowInstancesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskParameters Field Functions 
    bool hasTaskParameters() const { return this->taskParameters_ != nullptr;};
    void deleteTaskParameters() { this->taskParameters_ = nullptr;};
    inline string taskParameters() const { DARABONBA_PTR_GET_DEFAULT(taskParameters_, "") };
    inline CreateWorkflowInstancesRequest& setTaskParameters(string taskParameters) { DARABONBA_PTR_SET_VALUE(taskParameters_, taskParameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkflowInstancesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline CreateWorkflowInstancesRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowParameters Field Functions 
    bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
    void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
    inline string workflowParameters() const { DARABONBA_PTR_GET_DEFAULT(workflowParameters_, "") };
    inline CreateWorkflowInstancesRequest& setWorkflowParameters(string workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };


  protected:
    // The default value is true.
    std::shared_ptr<bool> autoStartEnabled_ = nullptr;
    // The reason for the creation.
    std::shared_ptr<string> comment_ = nullptr;
    // The runtime configuration.
    std::shared_ptr<CreateWorkflowInstancesRequestDefaultRunProperties> defaultRunProperties_ = nullptr;
    // The project environment.
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration of the data backfilling period.
    std::shared_ptr<CreateWorkflowInstancesRequestPeriods> periods_ = nullptr;
    // The project ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The tag creation policy. Valid values:
    // 
    // *   Append: New tags are added on top of the existing tags of the manual workflow.
    // *   Overwrite: Existing tags of the manual workflow are not inherited. New tags are created directly.
    std::shared_ptr<string> tagCreationPolicy_ = nullptr;
    // The task tag list.
    std::shared_ptr<vector<CreateWorkflowInstancesRequestTags>> tags_ = nullptr;
    // The task-specific parameters. The value is in the JSON format. The key specifies the task ID. You can call the GetTask operation to obtain the format of the value by querying the script parameters.
    std::shared_ptr<string> taskParameters_ = nullptr;
    // The type of the workflow instance. Valid values:
    // 
    // *   SupplementData: Data backfill. The usage of RootTaskIds and IncludeTaskIds varies based on the backfill mode. See the description of the DefaultRunProperties.Mode parameter.
    // *   ManualWorkflow: Manual workflow. WorkflowId is required for a manual workflow. RootTaskIds is optional. If not specified, the system uses the default root task list of the manual workflow.
    // *   Manual: Manual task. You only need to specify RootTaskIds. This is the list of manual tasks to run.
    // *   SmokeTest: Smoke test. You only need to specify RootTaskIds. This is the list of test tasks to run.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the workflow to which the instance belongs. This parameter is set to 1 for auto triggered tasks.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    // The workflow parameters. This parameter takes effect only when you set the `WorkflowId` parameter to a value other than 1. If your workflow is an auto triggered workflow, configure this parameter in the key=value format. The parameters that you configure in this parameter have a lower priority than task parameters. If your workflow is a manually triggered workflow, configure this parameter in the JSON format. The parameters that you configure in this parameter have a higher priority than task parameters.
    std::shared_ptr<string> workflowParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
