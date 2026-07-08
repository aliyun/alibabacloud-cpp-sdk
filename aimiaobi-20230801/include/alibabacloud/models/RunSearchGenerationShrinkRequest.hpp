// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentContext, agentContextShrink_);
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfigShrink_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentContext, agentContextShrink_);
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfigShrink_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunSearchGenerationShrinkRequest() = default ;
    RunSearchGenerationShrinkRequest(const RunSearchGenerationShrinkRequest &) = default ;
    RunSearchGenerationShrinkRequest(RunSearchGenerationShrinkRequest &&) = default ;
    RunSearchGenerationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationShrinkRequest() = default ;
    RunSearchGenerationShrinkRequest& operator=(const RunSearchGenerationShrinkRequest &) = default ;
    RunSearchGenerationShrinkRequest& operator=(RunSearchGenerationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentContextShrink_ == nullptr
        && this->chatConfigShrink_ == nullptr && this->fileUrl_ == nullptr && this->modelId_ == nullptr && this->originalSessionId_ == nullptr && this->prompt_ == nullptr
        && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // agentContextShrink Field Functions 
    bool hasAgentContextShrink() const { return this->agentContextShrink_ != nullptr;};
    void deleteAgentContextShrink() { this->agentContextShrink_ = nullptr;};
    inline string getAgentContextShrink() const { DARABONBA_PTR_GET_DEFAULT(agentContextShrink_, "") };
    inline RunSearchGenerationShrinkRequest& setAgentContextShrink(string agentContextShrink) { DARABONBA_PTR_SET_VALUE(agentContextShrink_, agentContextShrink) };


    // chatConfigShrink Field Functions 
    bool hasChatConfigShrink() const { return this->chatConfigShrink_ != nullptr;};
    void deleteChatConfigShrink() { this->chatConfigShrink_ = nullptr;};
    inline string getChatConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(chatConfigShrink_, "") };
    inline RunSearchGenerationShrinkRequest& setChatConfigShrink(string chatConfigShrink) { DARABONBA_PTR_SET_VALUE(chatConfigShrink_, chatConfigShrink) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationShrinkRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunSearchGenerationShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string getOriginalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunSearchGenerationShrinkRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunSearchGenerationShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunSearchGenerationShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunSearchGenerationShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Context.
    shared_ptr<string> agentContextShrink_ {};
    // Session configuration.
    shared_ptr<string> chatConfigShrink_ {};
    // Image URL. Used for image search and hybrid text-and-image (prompt) search generation.
    shared_ptr<string> fileUrl_ {};
    // Model ID:
    // 
    // - quanmiao-max: Quanmiao-Max
    // 
    // - quanmiao-plus: Quanmiao-Plus
    shared_ptr<string> modelId_ {};
    // Original session identifier. Usually empty. When non-empty, it indicates that the current conversation is based on the referenced session. The system loads parameters and search results from that session and replaces the generated result. Use this for re-generation, changing data sources, or adding new agents.
    shared_ptr<string> originalSessionId_ {};
    // Search query.
    shared_ptr<string> prompt_ {};
    // Unique identifier for the session task.
    // 
    // > By default, you do not need to provide a TaskId. The system generates one automatically. If you specify the same TaskId in subsequent requests, those tasks are grouped into the same conversation.
    shared_ptr<string> taskId_ {};
    // ID of the Alibaba Cloud Model Studio workspace. To learn how to obtain this ID, see [How to use workspaces](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
