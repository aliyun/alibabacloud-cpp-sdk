// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTEXECUTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTEXECUTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class StartExecutionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartExecutionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LoopMode, loopMode_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ParentExecutionId, parentExecutionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SafetyCheck, safetyCheck_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, StartExecutionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LoopMode, loopMode_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ParentExecutionId, parentExecutionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SafetyCheck, safetyCheck_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    StartExecutionShrinkRequest() = default ;
    StartExecutionShrinkRequest(const StartExecutionShrinkRequest &) = default ;
    StartExecutionShrinkRequest(StartExecutionShrinkRequest &&) = default ;
    StartExecutionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartExecutionShrinkRequest() = default ;
    StartExecutionShrinkRequest& operator=(const StartExecutionShrinkRequest &) = default ;
    StartExecutionShrinkRequest& operator=(StartExecutionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->description_ == nullptr && return this->loopMode_ == nullptr && return this->mode_ == nullptr && return this->parameters_ == nullptr && return this->parentExecutionId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->safetyCheck_ == nullptr && return this->tagsShrink_ == nullptr && return this->templateContent_ == nullptr
        && return this->templateName_ == nullptr && return this->templateURL_ == nullptr && return this->templateVersion_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartExecutionShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline StartExecutionShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // loopMode Field Functions 
    bool hasLoopMode() const { return this->loopMode_ != nullptr;};
    void deleteLoopMode() { this->loopMode_ = nullptr;};
    inline string loopMode() const { DARABONBA_PTR_GET_DEFAULT(loopMode_, "") };
    inline StartExecutionShrinkRequest& setLoopMode(string loopMode) { DARABONBA_PTR_SET_VALUE(loopMode_, loopMode) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline StartExecutionShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline string parameters() const { DARABONBA_PTR_GET_DEFAULT(parameters_, "") };
    inline StartExecutionShrinkRequest& setParameters(string parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };


    // parentExecutionId Field Functions 
    bool hasParentExecutionId() const { return this->parentExecutionId_ != nullptr;};
    void deleteParentExecutionId() { this->parentExecutionId_ = nullptr;};
    inline string parentExecutionId() const { DARABONBA_PTR_GET_DEFAULT(parentExecutionId_, "") };
    inline StartExecutionShrinkRequest& setParentExecutionId(string parentExecutionId) { DARABONBA_PTR_SET_VALUE(parentExecutionId_, parentExecutionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartExecutionShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline StartExecutionShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // safetyCheck Field Functions 
    bool hasSafetyCheck() const { return this->safetyCheck_ != nullptr;};
    void deleteSafetyCheck() { this->safetyCheck_ = nullptr;};
    inline string safetyCheck() const { DARABONBA_PTR_GET_DEFAULT(safetyCheck_, "") };
    inline StartExecutionShrinkRequest& setSafetyCheck(string safetyCheck) { DARABONBA_PTR_SET_VALUE(safetyCheck_, safetyCheck) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline StartExecutionShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline StartExecutionShrinkRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline StartExecutionShrinkRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline StartExecutionShrinkRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline StartExecutionShrinkRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The access token.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the execution.
    std::shared_ptr<string> description_ = nullptr;
    // The loop mode. Valid values:
    // 
    // *   Automatic: does not suspend the execution of the template. This is the default value.
    // *   FirstBatchPause: suspends the execution of the template after the first batch is complete.
    // *   EveryBatchPause: suspends the execution of the template after each batch is complete.
    std::shared_ptr<string> loopMode_ = nullptr;
    // The execution mode. Valid values:
    // 
    // *   Automatic: automatically starts the execution of the template. This is the default value.
    // *   FailurePause: suspends the execution of the template upon a failure.
    // *   Debug: manually starts the execution of the template.
    std::shared_ptr<string> mode_ = nullptr;
    // The JSON string that consists of a set of parameters. Default value: {}.
    std::shared_ptr<string> parameters_ = nullptr;
    // The ID of the parent execution.
    std::shared_ptr<string> parentExecutionId_ = nullptr;
    // The ID of the region in which the execution resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The security check mode. Valid values:
    // 
    // *   Skip: specifies that you are aware of the risks. The system performs all actions in the execution without manual confirmation, regardless of the risk level. This parameter is valid only if the `Mode` parameter is set to Automatic.
    // *   ConfirmEveryHighRiskAction: requires you to confirm each high-risk action. This is the default value. You can call the **NotifyExecution** operation to confirm or cancel an action.
    std::shared_ptr<string> safetyCheck_ = nullptr;
    // The tags for the execution.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The content of the template in the JSON or YAML format. This parameter is the same as the Content parameter that you can specify when you call the CreateTemplate operation. You can use this parameter to specify the tasks that you want to run. This way, you do not need to create a template before you start an execution. If you select an existing template, you do not need to specify this parameter.
    std::shared_ptr<string> templateContent_ = nullptr;
    // The name of the template. The name must be 1 to 200 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).
    std::shared_ptr<string> templateName_ = nullptr;
    // The Object Storage Service (OSS) URL of the object that stores the content of the Operation Orchestration Service (OOS) template. The access control list (ACL) of the object must be public-read. You can use this parameter to specify the tasks that you want to run. This way, you do not need to create a template before you start an execution. If you select an existing template, you do not need to specify this parameter.
    std::shared_ptr<string> templateURL_ = nullptr;
    // The version number of the template. If you do not specify this parameter, the system uses the latest version.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
