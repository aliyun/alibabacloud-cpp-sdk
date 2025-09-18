// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMMAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMMAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateMmAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMmAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfigShrink_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfigShrink_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfigShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMmAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateMmAppShrinkRequest() = default ;
    UpdateMmAppShrinkRequest(const UpdateMmAppShrinkRequest &) = default ;
    UpdateMmAppShrinkRequest(UpdateMmAppShrinkRequest &&) = default ;
    UpdateMmAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMmAppShrinkRequest() = default ;
    UpdateMmAppShrinkRequest& operator=(const UpdateMmAppShrinkRequest &) = default ;
    UpdateMmAppShrinkRequest& operator=(UpdateMmAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->bindingConfigShrink_ != nullptr && this->conversationConfigShrink_ != nullptr && this->modelConfigShrink_ != nullptr && this->prompt_ != nullptr
        && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateMmAppShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline UpdateMmAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfigShrink Field Functions 
    bool hasBindingConfigShrink() const { return this->bindingConfigShrink_ != nullptr;};
    void deleteBindingConfigShrink() { this->bindingConfigShrink_ = nullptr;};
    inline string bindingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(bindingConfigShrink_, "") };
    inline UpdateMmAppShrinkRequest& setBindingConfigShrink(string bindingConfigShrink) { DARABONBA_PTR_SET_VALUE(bindingConfigShrink_, bindingConfigShrink) };


    // conversationConfigShrink Field Functions 
    bool hasConversationConfigShrink() const { return this->conversationConfigShrink_ != nullptr;};
    void deleteConversationConfigShrink() { this->conversationConfigShrink_ = nullptr;};
    inline string conversationConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(conversationConfigShrink_, "") };
    inline UpdateMmAppShrinkRequest& setConversationConfigShrink(string conversationConfigShrink) { DARABONBA_PTR_SET_VALUE(conversationConfigShrink_, conversationConfigShrink) };


    // modelConfigShrink Field Functions 
    bool hasModelConfigShrink() const { return this->modelConfigShrink_ != nullptr;};
    void deleteModelConfigShrink() { this->modelConfigShrink_ = nullptr;};
    inline string modelConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(modelConfigShrink_, "") };
    inline UpdateMmAppShrinkRequest& setModelConfigShrink(string modelConfigShrink) { DARABONBA_PTR_SET_VALUE(modelConfigShrink_, modelConfigShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateMmAppShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateMmAppShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> bindingConfigShrink_ = nullptr;
    std::shared_ptr<string> conversationConfigShrink_ = nullptr;
    std::shared_ptr<string> modelConfigShrink_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
