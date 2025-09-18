// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMMANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateCommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCommandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_TO_JSON(ToolExamples, toolExamplesShrink_);
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParamsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamplesShrink_);
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParamsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateCommandShrinkRequest() = default ;
    UpdateCommandShrinkRequest(const UpdateCommandShrinkRequest &) = default ;
    UpdateCommandShrinkRequest(UpdateCommandShrinkRequest &&) = default ;
    UpdateCommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCommandShrinkRequest() = default ;
    UpdateCommandShrinkRequest& operator=(const UpdateCommandShrinkRequest &) = default ;
    UpdateCommandShrinkRequest& operator=(UpdateCommandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->domainCode_ != nullptr && this->domainName_ != nullptr && this->toolDescription_ != nullptr && this->toolExamplesShrink_ != nullptr && this->toolId_ != nullptr
        && this->toolName_ != nullptr && this->toolParamsShrink_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCommandShrinkRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline UpdateCommandShrinkRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateCommandShrinkRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // toolDescription Field Functions 
    bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
    void deleteToolDescription() { this->toolDescription_ = nullptr;};
    inline string toolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
    inline UpdateCommandShrinkRequest& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


    // toolExamplesShrink Field Functions 
    bool hasToolExamplesShrink() const { return this->toolExamplesShrink_ != nullptr;};
    void deleteToolExamplesShrink() { this->toolExamplesShrink_ = nullptr;};
    inline string toolExamplesShrink() const { DARABONBA_PTR_GET_DEFAULT(toolExamplesShrink_, "") };
    inline UpdateCommandShrinkRequest& setToolExamplesShrink(string toolExamplesShrink) { DARABONBA_PTR_SET_VALUE(toolExamplesShrink_, toolExamplesShrink) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string toolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline UpdateCommandShrinkRequest& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline UpdateCommandShrinkRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParamsShrink Field Functions 
    bool hasToolParamsShrink() const { return this->toolParamsShrink_ != nullptr;};
    void deleteToolParamsShrink() { this->toolParamsShrink_ = nullptr;};
    inline string toolParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(toolParamsShrink_, "") };
    inline UpdateCommandShrinkRequest& setToolParamsShrink(string toolParamsShrink) { DARABONBA_PTR_SET_VALUE(toolParamsShrink_, toolParamsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateCommandShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> domainCode_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolDescription_ = nullptr;
    std::shared_ptr<string> toolExamplesShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolName_ = nullptr;
    std::shared_ptr<string> toolParamsShrink_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
