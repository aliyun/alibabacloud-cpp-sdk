// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(IncludePermission, includePermission_);
      DARABONBA_PTR_TO_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateStage, templateStage_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(IncludePermission, includePermission_);
      DARABONBA_PTR_FROM_JSON(IncludeTags, includeTags_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateStage, templateStage_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    GetTemplateRequest() = default ;
    GetTemplateRequest(const GetTemplateRequest &) = default ;
    GetTemplateRequest(GetTemplateRequest &&) = default ;
    GetTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateRequest() = default ;
    GetTemplateRequest& operator=(const GetTemplateRequest &) = default ;
    GetTemplateRequest& operator=(GetTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeSetId_ != nullptr
        && this->includePermission_ != nullptr && this->includeTags_ != nullptr && this->regionId_ != nullptr && this->stackGroupName_ != nullptr && this->stackId_ != nullptr
        && this->templateId_ != nullptr && this->templateStage_ != nullptr && this->templateVersion_ != nullptr; };
    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetTemplateRequest& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // includePermission Field Functions 
    bool hasIncludePermission() const { return this->includePermission_ != nullptr;};
    void deleteIncludePermission() { this->includePermission_ = nullptr;};
    inline string includePermission() const { DARABONBA_PTR_GET_DEFAULT(includePermission_, "") };
    inline GetTemplateRequest& setIncludePermission(string includePermission) { DARABONBA_PTR_SET_VALUE(includePermission_, includePermission) };


    // includeTags Field Functions 
    bool hasIncludeTags() const { return this->includeTags_ != nullptr;};
    void deleteIncludeTags() { this->includeTags_ = nullptr;};
    inline string includeTags() const { DARABONBA_PTR_GET_DEFAULT(includeTags_, "") };
    inline GetTemplateRequest& setIncludeTags(string includeTags) { DARABONBA_PTR_SET_VALUE(includeTags_, includeTags) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetTemplateRequest& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateRequest& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateStage Field Functions 
    bool hasTemplateStage() const { return this->templateStage_ != nullptr;};
    void deleteTemplateStage() { this->templateStage_ = nullptr;};
    inline string templateStage() const { DARABONBA_PTR_GET_DEFAULT(templateStage_, "") };
    inline GetTemplateRequest& setTemplateStage(string templateStage) { DARABONBA_PTR_SET_VALUE(templateStage_, templateStage) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The ID of the change set.
    // 
    // > You must specify one of the following parameters: StackId, ChangeSetId, StackGroupName, and TemplateId.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // Specifies whether to query the shared information about the template. Valid values:
    // 
    // *   Enabled
    // *   Disabled (default)
    // 
    // > Only the template owner can query the shared information of a template.
    std::shared_ptr<string> includePermission_ = nullptr;
    // Specifies whether to query the information about tags. Valid values:
    // 
    // *   Enabled
    // *   Disabled (default)
    // 
    // > This parameter takes effect only if you specify TemplateId.
    std::shared_ptr<string> includeTags_ = nullptr;
    // The region ID of the stack or stack group that uses the template. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/131035.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the stack group.
    // 
    // > You must specify one of the following parameters: StackId, ChangeSetId, StackGroupName, and TemplateId.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The ID of the stack.
    // 
    // > You must specify one of the following parameters: StackId, ChangeSetId, StackGroupName, and TemplateId.
    std::shared_ptr<string> stackId_ = nullptr;
    // The ID of the template.
    // 
    // This parameter applies to shared and private templates. If the template is a shared template, the value of TemplateId is the same as the value of TemplateARN. You can use the template ID to query a shared template.
    // 
    // > You must specify one of the following parameters: StackId, ChangeSetId, StackGroupName, and TemplateId.
    std::shared_ptr<string> templateId_ = nullptr;
    // The stage of the template. This parameter takes effect only if you specify StackId, ChangeSetId, or StackGroupName.
    // 
    // Valid values:
    // 
    // *   Processed (default): returns the processed template.
    // *   Original: returns the original template.
    std::shared_ptr<string> templateStage_ = nullptr;
    // The version of the template. This parameter takes effect only if you specify TemplateId.\\
    // If the template is a shared template, you can specify this parameter only if VersionOption is set to AllVersions. For more information, see [SetTemplatePermission](https://help.aliyun.com/document_detail/194768.html).
    // 
    // Valid values: v1 to v100.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
