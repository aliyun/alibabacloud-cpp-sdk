// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEBUILDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEBUILDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateKnowledgeBaseBuildTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseBuildTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Input, inputShrink_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_TO_JSON(Trigger, triggerShrink_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseBuildTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ContentLocale, contentLocale_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Input, inputShrink_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LlmModel, llmModel_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResourceShrink_);
      DARABONBA_PTR_FROM_JSON(Trigger, triggerShrink_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateKnowledgeBaseBuildTaskShrinkRequest() = default ;
    CreateKnowledgeBaseBuildTaskShrinkRequest(const CreateKnowledgeBaseBuildTaskShrinkRequest &) = default ;
    CreateKnowledgeBaseBuildTaskShrinkRequest(CreateKnowledgeBaseBuildTaskShrinkRequest &&) = default ;
    CreateKnowledgeBaseBuildTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseBuildTaskShrinkRequest() = default ;
    CreateKnowledgeBaseBuildTaskShrinkRequest& operator=(const CreateKnowledgeBaseBuildTaskShrinkRequest &) = default ;
    CreateKnowledgeBaseBuildTaskShrinkRequest& operator=(CreateKnowledgeBaseBuildTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->contentLocale_ == nullptr && this->description_ == nullptr && this->inputShrink_ == nullptr && this->knowledgeBaseId_ == nullptr && this->llmModel_ == nullptr
        && this->name_ == nullptr && this->projectId_ == nullptr && this->runtimeResourceShrink_ == nullptr && this->triggerShrink_ == nullptr && this->type_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // contentLocale Field Functions 
    bool hasContentLocale() const { return this->contentLocale_ != nullptr;};
    void deleteContentLocale() { this->contentLocale_ = nullptr;};
    inline string getContentLocale() const { DARABONBA_PTR_GET_DEFAULT(contentLocale_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setContentLocale(string contentLocale) { DARABONBA_PTR_SET_VALUE(contentLocale_, contentLocale) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // inputShrink Field Functions 
    bool hasInputShrink() const { return this->inputShrink_ != nullptr;};
    void deleteInputShrink() { this->inputShrink_ = nullptr;};
    inline string getInputShrink() const { DARABONBA_PTR_GET_DEFAULT(inputShrink_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setInputShrink(string inputShrink) { DARABONBA_PTR_SET_VALUE(inputShrink_, inputShrink) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // llmModel Field Functions 
    bool hasLlmModel() const { return this->llmModel_ != nullptr;};
    void deleteLlmModel() { this->llmModel_ = nullptr;};
    inline string getLlmModel() const { DARABONBA_PTR_GET_DEFAULT(llmModel_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setLlmModel(string llmModel) { DARABONBA_PTR_SET_VALUE(llmModel_, llmModel) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResourceShrink Field Functions 
    bool hasRuntimeResourceShrink() const { return this->runtimeResourceShrink_ != nullptr;};
    void deleteRuntimeResourceShrink() { this->runtimeResourceShrink_ = nullptr;};
    inline string getRuntimeResourceShrink() const { DARABONBA_PTR_GET_DEFAULT(runtimeResourceShrink_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setRuntimeResourceShrink(string runtimeResourceShrink) { DARABONBA_PTR_SET_VALUE(runtimeResourceShrink_, runtimeResourceShrink) };


    // triggerShrink Field Functions 
    bool hasTriggerShrink() const { return this->triggerShrink_ != nullptr;};
    void deleteTriggerShrink() { this->triggerShrink_ = nullptr;};
    inline string getTriggerShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerShrink_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setTriggerShrink(string triggerShrink) { DARABONBA_PTR_SET_VALUE(triggerShrink_, triggerShrink) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateKnowledgeBaseBuildTaskShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The idempotency token for the creation request.
    shared_ptr<string> clientToken_ {};
    // The language of the content.
    shared_ptr<string> contentLocale_ {};
    // The description of the task. The description can be up to 1,024 characters in length. If this parameter is omitted, no description is set.
    shared_ptr<string> description_ {};
    // Specifies the input scope by selecting projects, entities, sources, or files based on the type.
    // 
    // This parameter is required.
    shared_ptr<string> inputShrink_ {};
    // The ID of the knowledge base to which the task belongs.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The specific model ID or AUTO.
    shared_ptr<string> llmModel_ {};
    // The name of the task.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The ID of the workspace where the task runs.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The resource group and Builder compute units (CUs).
    // 
    // This parameter is required.
    shared_ptr<string> runtimeResourceShrink_ {};
    // The manual or periodic trigger configuration.
    shared_ptr<string> triggerShrink_ {};
    // The available build types.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
