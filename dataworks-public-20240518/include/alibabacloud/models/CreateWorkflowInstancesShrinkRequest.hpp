// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoStartEnabled, autoStartEnabled_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DefaultRunProperties, defaultRunPropertiesShrink_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Periods, periodsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TagCreationPolicy, tagCreationPolicy_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TaskParameters, taskParameters_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_TO_JSON(WorkflowParameters, workflowParameters_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoStartEnabled, autoStartEnabled_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DefaultRunProperties, defaultRunPropertiesShrink_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Periods, periodsShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TagCreationPolicy, tagCreationPolicy_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TaskParameters, taskParameters_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkflowId, workflowId_);
      DARABONBA_PTR_FROM_JSON(WorkflowParameters, workflowParameters_);
    };
    CreateWorkflowInstancesShrinkRequest() = default ;
    CreateWorkflowInstancesShrinkRequest(const CreateWorkflowInstancesShrinkRequest &) = default ;
    CreateWorkflowInstancesShrinkRequest(CreateWorkflowInstancesShrinkRequest &&) = default ;
    CreateWorkflowInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesShrinkRequest() = default ;
    CreateWorkflowInstancesShrinkRequest& operator=(const CreateWorkflowInstancesShrinkRequest &) = default ;
    CreateWorkflowInstancesShrinkRequest& operator=(CreateWorkflowInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoStartEnabled_ == nullptr
        && return this->comment_ == nullptr && return this->defaultRunPropertiesShrink_ == nullptr && return this->envType_ == nullptr && return this->name_ == nullptr && return this->periodsShrink_ == nullptr
        && return this->projectId_ == nullptr && return this->tagCreationPolicy_ == nullptr && return this->tagsShrink_ == nullptr && return this->taskParameters_ == nullptr && return this->type_ == nullptr
        && return this->workflowId_ == nullptr && return this->workflowParameters_ == nullptr; };
    // autoStartEnabled Field Functions 
    bool hasAutoStartEnabled() const { return this->autoStartEnabled_ != nullptr;};
    void deleteAutoStartEnabled() { this->autoStartEnabled_ = nullptr;};
    inline bool autoStartEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoStartEnabled_, false) };
    inline CreateWorkflowInstancesShrinkRequest& setAutoStartEnabled(bool autoStartEnabled) { DARABONBA_PTR_SET_VALUE(autoStartEnabled_, autoStartEnabled) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // defaultRunPropertiesShrink Field Functions 
    bool hasDefaultRunPropertiesShrink() const { return this->defaultRunPropertiesShrink_ != nullptr;};
    void deleteDefaultRunPropertiesShrink() { this->defaultRunPropertiesShrink_ = nullptr;};
    inline string defaultRunPropertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(defaultRunPropertiesShrink_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setDefaultRunPropertiesShrink(string defaultRunPropertiesShrink) { DARABONBA_PTR_SET_VALUE(defaultRunPropertiesShrink_, defaultRunPropertiesShrink) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // periodsShrink Field Functions 
    bool hasPeriodsShrink() const { return this->periodsShrink_ != nullptr;};
    void deletePeriodsShrink() { this->periodsShrink_ = nullptr;};
    inline string periodsShrink() const { DARABONBA_PTR_GET_DEFAULT(periodsShrink_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setPeriodsShrink(string periodsShrink) { DARABONBA_PTR_SET_VALUE(periodsShrink_, periodsShrink) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateWorkflowInstancesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // tagCreationPolicy Field Functions 
    bool hasTagCreationPolicy() const { return this->tagCreationPolicy_ != nullptr;};
    void deleteTagCreationPolicy() { this->tagCreationPolicy_ = nullptr;};
    inline string tagCreationPolicy() const { DARABONBA_PTR_GET_DEFAULT(tagCreationPolicy_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setTagCreationPolicy(string tagCreationPolicy) { DARABONBA_PTR_SET_VALUE(tagCreationPolicy_, tagCreationPolicy) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // taskParameters Field Functions 
    bool hasTaskParameters() const { return this->taskParameters_ != nullptr;};
    void deleteTaskParameters() { this->taskParameters_ = nullptr;};
    inline string taskParameters() const { DARABONBA_PTR_GET_DEFAULT(taskParameters_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setTaskParameters(string taskParameters) { DARABONBA_PTR_SET_VALUE(taskParameters_, taskParameters) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workflowId Field Functions 
    bool hasWorkflowId() const { return this->workflowId_ != nullptr;};
    void deleteWorkflowId() { this->workflowId_ = nullptr;};
    inline int64_t workflowId() const { DARABONBA_PTR_GET_DEFAULT(workflowId_, 0L) };
    inline CreateWorkflowInstancesShrinkRequest& setWorkflowId(int64_t workflowId) { DARABONBA_PTR_SET_VALUE(workflowId_, workflowId) };


    // workflowParameters Field Functions 
    bool hasWorkflowParameters() const { return this->workflowParameters_ != nullptr;};
    void deleteWorkflowParameters() { this->workflowParameters_ = nullptr;};
    inline string workflowParameters() const { DARABONBA_PTR_GET_DEFAULT(workflowParameters_, "") };
    inline CreateWorkflowInstancesShrinkRequest& setWorkflowParameters(string workflowParameters) { DARABONBA_PTR_SET_VALUE(workflowParameters_, workflowParameters) };


  protected:
    // The default value is true.
    std::shared_ptr<bool> autoStartEnabled_ = nullptr;
    // The reason for the creation.
    std::shared_ptr<string> comment_ = nullptr;
    // The runtime configuration.
    std::shared_ptr<string> defaultRunPropertiesShrink_ = nullptr;
    // The project environment. Valid values:
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration of the data backfilling period.
    std::shared_ptr<string> periodsShrink_ = nullptr;
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
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The task-specific parameters. The value is in the JSON format. The key specifies the task ID. You can call the GetTask operation to obtain the format of the value by querying the script parameters.
    std::shared_ptr<string> taskParameters_ = nullptr;
    // The type of the workflow instance. Valid values:
    // 
    // *   SupplementData: Data backfill. The usage of RootTaskIds and IncludeTaskIds varies based on the backfill mode. See the description of the DefaultRunProperties.Mode parameter.
    // *   ManualWorkflow: Manually triggered workflow. WorkflowId is required for a manual workflow. RootTaskIds is optional. If not specified, the system uses the default root task list of the manual workflow.
    // *   Manual: Manual task. You only need to specify RootTaskIds. This is the list of manual tasks to run.
    // *   SmokeTest: Smoke test. You only need to specify RootTaskIds. This is the list of test tasks to run.
    // *   TriggerWorkflow: Triggered Workflow You must specify the WorkflowId of the triggered workflow. IncludeTaskIds is optional. If you do not specify IncludeTaskIds, the entire workflow runs.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the workflow to which the instance belongs. This parameter is set to 1 for auto triggered tasks.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workflowId_ = nullptr;
    // The workflow parameters. This parameter takes effect when a specific workflow is specified (`WorkflowId != 1`). For scheduled workflows and triggered workflows, the format is key=value, and these parameters have lower priority than task parameters. For manual workflows, the format is JSON, and these parameters have higher priority than task parameters.
    std::shared_ptr<string> workflowParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
