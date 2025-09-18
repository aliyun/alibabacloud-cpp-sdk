// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMmAppRequestBindingConfig.hpp>
#include <alibabacloud/models/CreateMmAppRequestConversationConfig.hpp>
#include <alibabacloud/models/CreateMmAppRequestModelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMmAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMmAppRequest() = default ;
    CreateMmAppRequest(const CreateMmAppRequest &) = default ;
    CreateMmAppRequest(CreateMmAppRequest &&) = default ;
    CreateMmAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmAppRequest() = default ;
    CreateMmAppRequest& operator=(const CreateMmAppRequest &) = default ;
    CreateMmAppRequest& operator=(CreateMmAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->bindingConfig_ != nullptr && this->conversationConfig_ != nullptr && this->modelConfig_ != nullptr && this->prompt_ != nullptr && this->workspaceId_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateMmAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const CreateMmAppRequestBindingConfig & bindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, CreateMmAppRequestBindingConfig) };
    inline CreateMmAppRequestBindingConfig bindingConfig() { DARABONBA_PTR_GET(bindingConfig_, CreateMmAppRequestBindingConfig) };
    inline CreateMmAppRequest& setBindingConfig(const CreateMmAppRequestBindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline CreateMmAppRequest& setBindingConfig(CreateMmAppRequestBindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const CreateMmAppRequestConversationConfig & conversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, CreateMmAppRequestConversationConfig) };
    inline CreateMmAppRequestConversationConfig conversationConfig() { DARABONBA_PTR_GET(conversationConfig_, CreateMmAppRequestConversationConfig) };
    inline CreateMmAppRequest& setConversationConfig(const CreateMmAppRequestConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline CreateMmAppRequest& setConversationConfig(CreateMmAppRequestConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const CreateMmAppRequestModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, CreateMmAppRequestModelConfig) };
    inline CreateMmAppRequestModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, CreateMmAppRequestModelConfig) };
    inline CreateMmAppRequest& setModelConfig(const CreateMmAppRequestModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline CreateMmAppRequest& setModelConfig(CreateMmAppRequestModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateMmAppRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMmAppRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<CreateMmAppRequestBindingConfig> bindingConfig_ = nullptr;
    std::shared_ptr<CreateMmAppRequestConversationConfig> conversationConfig_ = nullptr;
    std::shared_ptr<CreateMmAppRequestModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
