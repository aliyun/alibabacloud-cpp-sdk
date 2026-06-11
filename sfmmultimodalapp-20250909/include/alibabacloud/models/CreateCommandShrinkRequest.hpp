// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateCommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ReplyMode, replyMode_);
      DARABONBA_PTR_TO_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_TO_JSON(ToolExamples, toolExamplesShrink_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParamsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ReplyMode, replyMode_);
      DARABONBA_PTR_FROM_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamplesShrink_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParamsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateCommandShrinkRequest() = default ;
    CreateCommandShrinkRequest(const CreateCommandShrinkRequest &) = default ;
    CreateCommandShrinkRequest(CreateCommandShrinkRequest &&) = default ;
    CreateCommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommandShrinkRequest() = default ;
    CreateCommandShrinkRequest& operator=(const CreateCommandShrinkRequest &) = default ;
    CreateCommandShrinkRequest& operator=(CreateCommandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->domainCode_ == nullptr && this->domainName_ == nullptr && this->replyMode_ == nullptr && this->toolDescription_ == nullptr && this->toolExamplesShrink_ == nullptr
        && this->toolName_ == nullptr && this->toolParamsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateCommandShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline CreateCommandShrinkRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCommandShrinkRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // replyMode Field Functions 
    bool hasReplyMode() const { return this->replyMode_ != nullptr;};
    void deleteReplyMode() { this->replyMode_ = nullptr;};
    inline string getReplyMode() const { DARABONBA_PTR_GET_DEFAULT(replyMode_, "") };
    inline CreateCommandShrinkRequest& setReplyMode(string replyMode) { DARABONBA_PTR_SET_VALUE(replyMode_, replyMode) };


    // toolDescription Field Functions 
    bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
    void deleteToolDescription() { this->toolDescription_ = nullptr;};
    inline string getToolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
    inline CreateCommandShrinkRequest& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


    // toolExamplesShrink Field Functions 
    bool hasToolExamplesShrink() const { return this->toolExamplesShrink_ != nullptr;};
    void deleteToolExamplesShrink() { this->toolExamplesShrink_ = nullptr;};
    inline string getToolExamplesShrink() const { DARABONBA_PTR_GET_DEFAULT(toolExamplesShrink_, "") };
    inline CreateCommandShrinkRequest& setToolExamplesShrink(string toolExamplesShrink) { DARABONBA_PTR_SET_VALUE(toolExamplesShrink_, toolExamplesShrink) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline CreateCommandShrinkRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParamsShrink Field Functions 
    bool hasToolParamsShrink() const { return this->toolParamsShrink_ != nullptr;};
    void deleteToolParamsShrink() { this->toolParamsShrink_ = nullptr;};
    inline string getToolParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(toolParamsShrink_, "") };
    inline CreateCommandShrinkRequest& setToolParamsShrink(string toolParamsShrink) { DARABONBA_PTR_SET_VALUE(toolParamsShrink_, toolParamsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCommandShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> domainCode_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> replyMode_ {};
    // This parameter is required.
    shared_ptr<string> toolDescription_ {};
    shared_ptr<string> toolExamplesShrink_ {};
    // This parameter is required.
    shared_ptr<string> toolName_ {};
    shared_ptr<string> toolParamsShrink_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
