// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchGenerationRequestAgentContext.hpp>
#include <alibabacloud/models/RunSearchGenerationRequestChatConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentContext, agentContext_);
      DARABONBA_PTR_TO_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentContext, agentContext_);
      DARABONBA_PTR_FROM_JSON(ChatConfig, chatConfig_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(OriginalSessionId, originalSessionId_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunSearchGenerationRequest() = default ;
    RunSearchGenerationRequest(const RunSearchGenerationRequest &) = default ;
    RunSearchGenerationRequest(RunSearchGenerationRequest &&) = default ;
    RunSearchGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchGenerationRequest() = default ;
    RunSearchGenerationRequest& operator=(const RunSearchGenerationRequest &) = default ;
    RunSearchGenerationRequest& operator=(RunSearchGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentContext_ == nullptr
        && return this->chatConfig_ == nullptr && return this->fileUrl_ == nullptr && return this->modelId_ == nullptr && return this->originalSessionId_ == nullptr && return this->prompt_ == nullptr
        && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // agentContext Field Functions 
    bool hasAgentContext() const { return this->agentContext_ != nullptr;};
    void deleteAgentContext() { this->agentContext_ = nullptr;};
    inline const RunSearchGenerationRequestAgentContext & agentContext() const { DARABONBA_PTR_GET_CONST(agentContext_, RunSearchGenerationRequestAgentContext) };
    inline RunSearchGenerationRequestAgentContext agentContext() { DARABONBA_PTR_GET(agentContext_, RunSearchGenerationRequestAgentContext) };
    inline RunSearchGenerationRequest& setAgentContext(const RunSearchGenerationRequestAgentContext & agentContext) { DARABONBA_PTR_SET_VALUE(agentContext_, agentContext) };
    inline RunSearchGenerationRequest& setAgentContext(RunSearchGenerationRequestAgentContext && agentContext) { DARABONBA_PTR_SET_RVALUE(agentContext_, agentContext) };


    // chatConfig Field Functions 
    bool hasChatConfig() const { return this->chatConfig_ != nullptr;};
    void deleteChatConfig() { this->chatConfig_ = nullptr;};
    inline const RunSearchGenerationRequestChatConfig & chatConfig() const { DARABONBA_PTR_GET_CONST(chatConfig_, RunSearchGenerationRequestChatConfig) };
    inline RunSearchGenerationRequestChatConfig chatConfig() { DARABONBA_PTR_GET(chatConfig_, RunSearchGenerationRequestChatConfig) };
    inline RunSearchGenerationRequest& setChatConfig(const RunSearchGenerationRequestChatConfig & chatConfig) { DARABONBA_PTR_SET_VALUE(chatConfig_, chatConfig) };
    inline RunSearchGenerationRequest& setChatConfig(RunSearchGenerationRequestChatConfig && chatConfig) { DARABONBA_PTR_SET_RVALUE(chatConfig_, chatConfig) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline RunSearchGenerationRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunSearchGenerationRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // originalSessionId Field Functions 
    bool hasOriginalSessionId() const { return this->originalSessionId_ != nullptr;};
    void deleteOriginalSessionId() { this->originalSessionId_ = nullptr;};
    inline string originalSessionId() const { DARABONBA_PTR_GET_DEFAULT(originalSessionId_, "") };
    inline RunSearchGenerationRequest& setOriginalSessionId(string originalSessionId) { DARABONBA_PTR_SET_VALUE(originalSessionId_, originalSessionId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunSearchGenerationRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunSearchGenerationRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunSearchGenerationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<RunSearchGenerationRequestAgentContext> agentContext_ = nullptr;
    std::shared_ptr<RunSearchGenerationRequestChatConfig> chatConfig_ = nullptr;
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> originalSessionId_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
