// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMmAppRequestBindingConfig.hpp>
#include <alibabacloud/models/UpdateMmAppRequestConversationConfig.hpp>
#include <alibabacloud/models/UpdateMmAppRequestModelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfig_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfig_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppRequest() = default ;
    UpdateMmAppRequest(const UpdateMmAppRequest &) = default ;
    UpdateMmAppRequest(UpdateMmAppRequest &&) = default ;
    UpdateMmAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppRequest() = default ;
    UpdateMmAppRequest& operator=(const UpdateMmAppRequest &) = default ;
    UpdateMmAppRequest& operator=(UpdateMmAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->bindingConfig_ != nullptr && this->conversationConfig_ != nullptr && this->modelConfig_ != nullptr && this->prompt_ != nullptr
        && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateMmAppRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfig Field Functions 
    bool hasBindingConfig() const { return this->bindingConfig_ != nullptr;};
    void deleteBindingConfig() { this->bindingConfig_ = nullptr;};
    inline const UpdateMmAppRequestBindingConfig & bindingConfig() const { DARABONBA_PTR_GET_CONST(bindingConfig_, UpdateMmAppRequestBindingConfig) };
    inline UpdateMmAppRequestBindingConfig bindingConfig() { DARABONBA_PTR_GET(bindingConfig_, UpdateMmAppRequestBindingConfig) };
    inline UpdateMmAppRequest& setBindingConfig(const UpdateMmAppRequestBindingConfig & bindingConfig) { DARABONBA_PTR_SET_VALUE(bindingConfig_, bindingConfig) };
    inline UpdateMmAppRequest& setBindingConfig(UpdateMmAppRequestBindingConfig && bindingConfig) { DARABONBA_PTR_SET_RVALUE(bindingConfig_, bindingConfig) };


    // conversationConfig Field Functions 
    bool hasConversationConfig() const { return this->conversationConfig_ != nullptr;};
    void deleteConversationConfig() { this->conversationConfig_ = nullptr;};
    inline const UpdateMmAppRequestConversationConfig & conversationConfig() const { DARABONBA_PTR_GET_CONST(conversationConfig_, UpdateMmAppRequestConversationConfig) };
    inline UpdateMmAppRequestConversationConfig conversationConfig() { DARABONBA_PTR_GET(conversationConfig_, UpdateMmAppRequestConversationConfig) };
    inline UpdateMmAppRequest& setConversationConfig(const UpdateMmAppRequestConversationConfig & conversationConfig) { DARABONBA_PTR_SET_VALUE(conversationConfig_, conversationConfig) };
    inline UpdateMmAppRequest& setConversationConfig(UpdateMmAppRequestConversationConfig && conversationConfig) { DARABONBA_PTR_SET_RVALUE(conversationConfig_, conversationConfig) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const UpdateMmAppRequestModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, UpdateMmAppRequestModelConfig) };
    inline UpdateMmAppRequestModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, UpdateMmAppRequestModelConfig) };
    inline UpdateMmAppRequest& setModelConfig(const UpdateMmAppRequestModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline UpdateMmAppRequest& setModelConfig(UpdateMmAppRequestModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateMmAppRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<UpdateMmAppRequestBindingConfig> bindingConfig_ = nullptr;
    std::shared_ptr<UpdateMmAppRequestConversationConfig> conversationConfig_ = nullptr;
    std::shared_ptr<UpdateMmAppRequestModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
