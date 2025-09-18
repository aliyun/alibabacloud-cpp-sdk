// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMMAPPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMMAPPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateMmAppShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMmAppShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BindingConfig, bindingConfigShrink_);
      DARABONBA_PTR_TO_JSON(ConversationConfig, conversationConfigShrink_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfigShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMmAppShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BindingConfig, bindingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ConversationConfig, conversationConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfigShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateMmAppShrinkRequest() = default ;
    CreateMmAppShrinkRequest(const CreateMmAppShrinkRequest &) = default ;
    CreateMmAppShrinkRequest(CreateMmAppShrinkRequest &&) = default ;
    CreateMmAppShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMmAppShrinkRequest() = default ;
    CreateMmAppShrinkRequest& operator=(const CreateMmAppShrinkRequest &) = default ;
    CreateMmAppShrinkRequest& operator=(CreateMmAppShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appName_ != nullptr
        && this->bindingConfigShrink_ != nullptr && this->conversationConfigShrink_ != nullptr && this->modelConfigShrink_ != nullptr && this->prompt_ != nullptr && this->workspaceId_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateMmAppShrinkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // bindingConfigShrink Field Functions 
    bool hasBindingConfigShrink() const { return this->bindingConfigShrink_ != nullptr;};
    void deleteBindingConfigShrink() { this->bindingConfigShrink_ = nullptr;};
    inline string bindingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(bindingConfigShrink_, "") };
    inline CreateMmAppShrinkRequest& setBindingConfigShrink(string bindingConfigShrink) { DARABONBA_PTR_SET_VALUE(bindingConfigShrink_, bindingConfigShrink) };


    // conversationConfigShrink Field Functions 
    bool hasConversationConfigShrink() const { return this->conversationConfigShrink_ != nullptr;};
    void deleteConversationConfigShrink() { this->conversationConfigShrink_ = nullptr;};
    inline string conversationConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(conversationConfigShrink_, "") };
    inline CreateMmAppShrinkRequest& setConversationConfigShrink(string conversationConfigShrink) { DARABONBA_PTR_SET_VALUE(conversationConfigShrink_, conversationConfigShrink) };


    // modelConfigShrink Field Functions 
    bool hasModelConfigShrink() const { return this->modelConfigShrink_ != nullptr;};
    void deleteModelConfigShrink() { this->modelConfigShrink_ = nullptr;};
    inline string modelConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(modelConfigShrink_, "") };
    inline CreateMmAppShrinkRequest& setModelConfigShrink(string modelConfigShrink) { DARABONBA_PTR_SET_VALUE(modelConfigShrink_, modelConfigShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateMmAppShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateMmAppShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
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
