// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTemplateResponseBodyPermissions.hpp>
#include <alibabacloud/models/GetTemplateResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_TO_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Interface, interface_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplateARN, templateARN_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(AdditionalInfo, additionalInfo_);
      DARABONBA_PTR_FROM_JSON(ChangeSetId, changeSetId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Interface, interface_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplateARN, templateARN_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetTemplateResponseBody() = default ;
    GetTemplateResponseBody(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody(GetTemplateResponseBody &&) = default ;
    GetTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateResponseBody() = default ;
    GetTemplateResponseBody& operator=(const GetTemplateResponseBody &) = default ;
    GetTemplateResponseBody& operator=(GetTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->additionalInfo_ != nullptr
        && this->changeSetId_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->interface_ != nullptr && this->ownerId_ != nullptr
        && this->permissions_ != nullptr && this->regionId_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->shareType_ != nullptr
        && this->stackGroupName_ != nullptr && this->stackId_ != nullptr && this->tags_ != nullptr && this->templateARN_ != nullptr && this->templateBody_ != nullptr
        && this->templateId_ != nullptr && this->templateName_ != nullptr && this->templateVersion_ != nullptr && this->updateTime_ != nullptr; };
    // additionalInfo Field Functions 
    bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
    void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
    inline     const Darabonba::Json & additionalInfo() const { DARABONBA_GET(additionalInfo_) };
    Darabonba::Json & additionalInfo() { DARABONBA_GET(additionalInfo_) };
    inline GetTemplateResponseBody& setAdditionalInfo(const Darabonba::Json & additionalInfo) { DARABONBA_SET_VALUE(additionalInfo_, additionalInfo) };
    inline GetTemplateResponseBody& setAdditionalInfo(Darabonba::Json & additionalInfo) { DARABONBA_SET_RVALUE(additionalInfo_, additionalInfo) };


    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string changeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetTemplateResponseBody& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTemplateResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTemplateResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // interface Field Functions 
    bool hasInterface() const { return this->interface_ != nullptr;};
    void deleteInterface() { this->interface_ = nullptr;};
    inline string interface() const { DARABONBA_PTR_GET_DEFAULT(interface_, "") };
    inline GetTemplateResponseBody& setInterface(string interface) { DARABONBA_PTR_SET_VALUE(interface_, interface) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetTemplateResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<GetTemplateResponseBodyPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<GetTemplateResponseBodyPermissions>) };
    inline vector<GetTemplateResponseBodyPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<GetTemplateResponseBodyPermissions>) };
    inline GetTemplateResponseBody& setPermissions(const vector<GetTemplateResponseBodyPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline GetTemplateResponseBody& setPermissions(vector<GetTemplateResponseBodyPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetTemplateResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline GetTemplateResponseBody& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetTemplateResponseBody& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetTemplateResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetTemplateResponseBodyTags>) };
    inline vector<GetTemplateResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetTemplateResponseBodyTags>) };
    inline GetTemplateResponseBody& setTags(const vector<GetTemplateResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTemplateResponseBody& setTags(vector<GetTemplateResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateARN Field Functions 
    bool hasTemplateARN() const { return this->templateARN_ != nullptr;};
    void deleteTemplateARN() { this->templateARN_ = nullptr;};
    inline string templateARN() const { DARABONBA_PTR_GET_DEFAULT(templateARN_, "") };
    inline GetTemplateResponseBody& setTemplateARN(string templateARN) { DARABONBA_PTR_SET_VALUE(templateARN_, templateARN) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetTemplateResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateResponseBody& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTemplateResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Supplementary information for the public template.
    Darabonba::Json additionalInfo_ = nullptr;
    // The ID of the change set. This parameter is returned only if you specify ChangeSetId.
    std::shared_ptr<string> changeSetId_ = nullptr;
    // The time when the template was created. This parameter is returned only if you specify TemplateId.
    // 
    // > - If you specify TemplateVersion, the creation time of the template whose version is specified by TemplateVersion is returned.
    // > - If you do not specify TemplateVersion, the creation time of the template whose version is the default version is returned.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the template. This parameter is returned only if you specify TemplateId.
    std::shared_ptr<string> description_ = nullptr;
    // The description of the web UI in the ROS console.
    std::shared_ptr<string> interface_ = nullptr;
    // The ID of the Alibaba Cloud account to which the template belongs. This parameter is returned only if you specify TemplateId.
    std::shared_ptr<string> ownerId_ = nullptr;
    // Details of the sharing status of the template. This parameter is returned only if you specify TemplateId and set IncludePermission to Enabled.
    // 
    // > - If TemplateVersion is not specified or does not take effect, the details of the sharing status of the template whose version is the default version is returned.
    // > - If TemplateVersion is specified and takes effect, the details of the sharing status of the template whose version is specified by TemplateVersion is returned.
    std::shared_ptr<vector<GetTemplateResponseBodyPermissions>> permissions_ = nullptr;
    // The region ID of the stack or stack group that uses the template. This parameter is returned only if you specify StackId, ChangeSetId, or StackGroupName.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The sharing type of the template. This parameter is returned only if you specify TemplateId.
    // 
    // Valid values:
    // 
    // *   Private: The template belongs to the template owner.
    // *   Shared: The template is shared by other users.
    std::shared_ptr<string> shareType_ = nullptr;
    // The name of the stack group. This parameter is returned only if you specify StackGroupName.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The ID of the stack. This parameter is returned only if you specify StackId.
    std::shared_ptr<string> stackId_ = nullptr;
    // The tags of the template.
    std::shared_ptr<vector<GetTemplateResponseBodyTags>> tags_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the template. This parameter is returned only if you specify TemplateId.
    std::shared_ptr<string> templateARN_ = nullptr;
    // The content of the template.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The ID of the template. This parameter is returned only if you specify TemplateId.
    // 
    // If the template is a shared template, the value of this parameter is the same as the value of TemplateARN.
    std::shared_ptr<string> templateId_ = nullptr;
    // The name of the template. This parameter is returned only if you specify TemplateId.
    // 
    // > -   If you specify TemplateVersion, the name of the template whose version is specified by TemplateVersion is returned.
    // > -  If you not specify TemplateVersion, the name of the template whose version is the default version is returned.
    std::shared_ptr<string> templateName_ = nullptr;
    // The version of the template. This parameter is returned only if you specify TemplateId.\\
    // If TemplateVersion is not specified or does not take effect, the default version is used.
    // 
    // If the template is a shared template, this parameter is returned only if you set VersionOption to AllVersions.
    std::shared_ptr<string> templateVersion_ = nullptr;
    // The time when the template was last updated. This parameter is returned only if you specify TemplateId.
    // 
    // > - If you specify TemplateVersion, the last update time of the template whose version is specified by TemplateVersion is returned.
    // > - If you do not specify TemplateVersion, the last update time of the template whose version is the default version is returned.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
