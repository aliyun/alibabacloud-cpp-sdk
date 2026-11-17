// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEBUILDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEBUILDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateKnowledgeBaseBuildTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseBuildTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseBuildTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
    };
    UpdateKnowledgeBaseBuildTaskShrinkRequest() = default ;
    UpdateKnowledgeBaseBuildTaskShrinkRequest(const UpdateKnowledgeBaseBuildTaskShrinkRequest &) = default ;
    UpdateKnowledgeBaseBuildTaskShrinkRequest(UpdateKnowledgeBaseBuildTaskShrinkRequest &&) = default ;
    UpdateKnowledgeBaseBuildTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseBuildTaskShrinkRequest() = default ;
    UpdateKnowledgeBaseBuildTaskShrinkRequest& operator=(const UpdateKnowledgeBaseBuildTaskShrinkRequest &) = default ;
    UpdateKnowledgeBaseBuildTaskShrinkRequest& operator=(UpdateKnowledgeBaseBuildTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentLocale_ == nullptr
        && this->description_ == nullptr && this->inputShrink_ == nullptr && this->knowledgeBaseId_ == nullptr && this->llmModel_ == nullptr && this->name_ == nullptr
        && this->projectId_ == nullptr && this->runtimeResourceShrink_ == nullptr && this->taskId_ == nullptr && this->triggerShrink_ == nullptr; };
    // contentLocale Field Functions 
    bool hasContentLocale() const { return this->contentLocale_ != nullptr;};
    void deleteContentLocale() { this->contentLocale_ = nullptr;};
    inline string getContentLocale() const { DARABONBA_PTR_GET_DEFAULT(contentLocale_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setContentLocale(string contentLocale) { DARABONBA_PTR_SET_VALUE(contentLocale_, contentLocale) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // llmModel Field Functions 
    bool hasLlmModel() const { return this->llmModel_ != nullptr;};
    void deleteLlmModel() { this->llmModel_ = nullptr;};
    inline string getLlmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string getRuntimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string getTriggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline UpdateKnowledgeBaseBuildTaskShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


  protected:
    // The content language.
    shared_ptr<string> contentLocale_ {};
    // The new description.
    shared_ptr<string> description_ {};
    // The input configuration that completely replaces the original input.
    shared_ptr<string> inputShrink_ {};
    // The associated knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The specific model ID or AUTO.
    shared_ptr<string> llmModel_ {};
    // The new task name.
    shared_ptr<string> name_ {};
    // The workspace used for future runs.
    shared_ptr<int64_t> projectId_ {};
    // Updates the runtime resources based on the submitted fields. If ResourceGroupId or Cu is not provided, the original value is retained.
    shared_ptr<string> runtimeResourceShrink_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The trigger configuration that completely replaces the original trigger.
    shared_ptr<string> triggerShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
