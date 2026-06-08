// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the template.
      shared_ptr<string> key_ {};
      // The tag value of the template.
      shared_ptr<string> value_ {};
    };

    class Permissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permissions& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(ShareOption, shareOption_);
        DARABONBA_PTR_TO_JSON(ShareSource, shareSource_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(VersionOption, versionOption_);
      };
      friend void from_json(const Darabonba::Json& j, Permissions& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(ShareOption, shareOption_);
        DARABONBA_PTR_FROM_JSON(ShareSource, shareSource_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(VersionOption, versionOption_);
      };
      Permissions() = default ;
      Permissions(const Permissions &) = default ;
      Permissions(Permissions &&) = default ;
      Permissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permissions() = default ;
      Permissions& operator=(const Permissions &) = default ;
      Permissions& operator=(Permissions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->shareOption_ == nullptr && this->shareSource_ == nullptr && this->templateVersion_ == nullptr && this->versionOption_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Permissions& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // shareOption Field Functions 
      bool hasShareOption() const { return this->shareOption_ != nullptr;};
      void deleteShareOption() { this->shareOption_ = nullptr;};
      inline string getShareOption() const { DARABONBA_PTR_GET_DEFAULT(shareOption_, "") };
      inline Permissions& setShareOption(string shareOption) { DARABONBA_PTR_SET_VALUE(shareOption_, shareOption) };


      // shareSource Field Functions 
      bool hasShareSource() const { return this->shareSource_ != nullptr;};
      void deleteShareSource() { this->shareSource_ = nullptr;};
      inline string getShareSource() const { DARABONBA_PTR_GET_DEFAULT(shareSource_, "") };
      inline Permissions& setShareSource(string shareSource) { DARABONBA_PTR_SET_VALUE(shareSource_, shareSource) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Permissions& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // versionOption Field Functions 
      bool hasVersionOption() const { return this->versionOption_ != nullptr;};
      void deleteVersionOption() { this->versionOption_ = nullptr;};
      inline string getVersionOption() const { DARABONBA_PTR_GET_DEFAULT(versionOption_, "") };
      inline Permissions& setVersionOption(string versionOption) { DARABONBA_PTR_SET_VALUE(versionOption_, versionOption) };


    protected:
      // The ID of the Alibaba Cloud account with which the template is shared.
      shared_ptr<string> accountId_ {};
      // The sharing option.
      // 
      // The value ShareToAccounts indicates that the template is shared with one or more Alibaba Cloud accounts.
      shared_ptr<string> shareOption_ {};
      // The service that is used for resource sharing. Valid values:
      // 
      // - ROS: Resources are shared from ROS by using the ROS console or calling the ROS API.
      // - ResourceDirectory: Resources are shared with accounts in a resource directory from Resource Management by using the resource sharing feature.
      // > -  The number of accounts with which resources are shared from ROS is independent of the number of accounts with which resources are shared from the resource directory.
      // > -  The shared resources from ROS cannot override or overwrite the shared resources from the resource directory.
      // > -  The shared resources from the resource directory can overwrite the shared resources from ROS.
      shared_ptr<string> shareSource_ {};
      // The version of the shared template. This parameter is returned only if you set ShareOption to ShareToAccounts and set VersionOption to Specified or Current.
      // 
      // Valid values: v1 to v100.
      shared_ptr<string> templateVersion_ {};
      // The version option for the shared template. This parameter is returned only if you set ShareOption to ShareToAccounts.
      // 
      // Valid values:
      // 
      // *   AllVersions: All template versions are shared.
      // *   Latest: Only the latest template version is shared. When the version of the template is updated, Resource Orchestration Service (ROS) updates the shared version to the latest version.
      // *   Current: Only the latest template version is shared. When the version of the template is updated, ROS does not update the shared version.
      // *   Specified: Only the specified template version is shared.
      shared_ptr<string> versionOption_ {};
    };

    virtual bool empty() const override { return this->additionalInfo_ == nullptr
        && this->changeSetId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->interface_ == nullptr && this->ownerId_ == nullptr
        && this->permissions_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->shareType_ == nullptr
        && this->stackGroupName_ == nullptr && this->stackId_ == nullptr && this->tags_ == nullptr && this->templateARN_ == nullptr && this->templateBody_ == nullptr
        && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateVersion_ == nullptr && this->updateTime_ == nullptr; };
    // additionalInfo Field Functions 
    bool hasAdditionalInfo() const { return this->additionalInfo_ != nullptr;};
    void deleteAdditionalInfo() { this->additionalInfo_ = nullptr;};
    inline     const Darabonba::Json & getAdditionalInfo() const { DARABONBA_GET(additionalInfo_) };
    Darabonba::Json & getAdditionalInfo() { DARABONBA_GET(additionalInfo_) };
    inline GetTemplateResponseBody& setAdditionalInfo(const Darabonba::Json & additionalInfo) { DARABONBA_SET_VALUE(additionalInfo_, additionalInfo) };
    inline GetTemplateResponseBody& setAdditionalInfo(Darabonba::Json && additionalInfo) { DARABONBA_SET_RVALUE(additionalInfo_, additionalInfo) };


    // changeSetId Field Functions 
    bool hasChangeSetId() const { return this->changeSetId_ != nullptr;};
    void deleteChangeSetId() { this->changeSetId_ = nullptr;};
    inline string getChangeSetId() const { DARABONBA_PTR_GET_DEFAULT(changeSetId_, "") };
    inline GetTemplateResponseBody& setChangeSetId(string changeSetId) { DARABONBA_PTR_SET_VALUE(changeSetId_, changeSetId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTemplateResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetTemplateResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // interface Field Functions 
    bool hasInterface() const { return this->interface_ != nullptr;};
    void deleteInterface() { this->interface_ = nullptr;};
    inline string getInterface() const { DARABONBA_PTR_GET_DEFAULT(interface_, "") };
    inline GetTemplateResponseBody& setInterface(string interface) { DARABONBA_PTR_SET_VALUE(interface_, interface) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetTemplateResponseBody& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<GetTemplateResponseBody::Permissions> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<GetTemplateResponseBody::Permissions>) };
    inline vector<GetTemplateResponseBody::Permissions> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<GetTemplateResponseBody::Permissions>) };
    inline GetTemplateResponseBody& setPermissions(const vector<GetTemplateResponseBody::Permissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline GetTemplateResponseBody& setPermissions(vector<GetTemplateResponseBody::Permissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTemplateResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetTemplateResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string getShareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline GetTemplateResponseBody& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string getStackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline GetTemplateResponseBody& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline GetTemplateResponseBody& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetTemplateResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetTemplateResponseBody::Tags>) };
    inline vector<GetTemplateResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetTemplateResponseBody::Tags>) };
    inline GetTemplateResponseBody& setTags(const vector<GetTemplateResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTemplateResponseBody& setTags(vector<GetTemplateResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templateARN Field Functions 
    bool hasTemplateARN() const { return this->templateARN_ != nullptr;};
    void deleteTemplateARN() { this->templateARN_ = nullptr;};
    inline string getTemplateARN() const { DARABONBA_PTR_GET_DEFAULT(templateARN_, "") };
    inline GetTemplateResponseBody& setTemplateARN(string templateARN) { DARABONBA_PTR_SET_VALUE(templateARN_, templateARN) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetTemplateResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetTemplateResponseBody& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetTemplateResponseBody& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline GetTemplateResponseBody& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetTemplateResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Supplementary information for the public template.
    Darabonba::Json additionalInfo_ {};
    // The ID of the change set. This parameter is returned only if you specify ChangeSetId.
    shared_ptr<string> changeSetId_ {};
    // The time when the template was created. This parameter is returned only if you specify TemplateId.
    // 
    // > - If you specify TemplateVersion, the creation time of the template whose version is specified by TemplateVersion is returned.
    // > - If you do not specify TemplateVersion, the creation time of the template whose version is the default version is returned.
    shared_ptr<string> createTime_ {};
    // The description of the template. This parameter is returned only if you specify TemplateId.
    shared_ptr<string> description_ {};
    // The description of the web UI in the ROS console.
    shared_ptr<string> interface_ {};
    // The ID of the Alibaba Cloud account to which the template belongs. This parameter is returned only if you specify TemplateId.
    shared_ptr<string> ownerId_ {};
    // Details of the sharing status of the template. This parameter is returned only if you specify TemplateId and set IncludePermission to Enabled.
    // 
    // > - If TemplateVersion is not specified or does not take effect, the details of the sharing status of the template whose version is the default version is returned.
    // > - If TemplateVersion is specified and takes effect, the details of the sharing status of the template whose version is specified by TemplateVersion is returned.
    shared_ptr<vector<GetTemplateResponseBody::Permissions>> permissions_ {};
    // The region ID of the stack or stack group that uses the template. This parameter is returned only if you specify StackId, ChangeSetId, or StackGroupName.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The sharing type of the template. This parameter is returned only if you specify TemplateId.
    // 
    // Valid values:
    // 
    // *   Private: The template belongs to the template owner.
    // *   Shared: The template is shared by other users.
    shared_ptr<string> shareType_ {};
    // The name of the stack group. This parameter is returned only if you specify StackGroupName.
    shared_ptr<string> stackGroupName_ {};
    // The ID of the stack. This parameter is returned only if you specify StackId.
    shared_ptr<string> stackId_ {};
    // The tags of the template.
    shared_ptr<vector<GetTemplateResponseBody::Tags>> tags_ {};
    // The Alibaba Cloud Resource Name (ARN) of the template. This parameter is returned only if you specify TemplateId.
    shared_ptr<string> templateARN_ {};
    // The content of the template.
    shared_ptr<string> templateBody_ {};
    // The ID of the template. This parameter is returned only if you specify TemplateId.
    // 
    // If the template is a shared template, the value of this parameter is the same as the value of TemplateARN.
    shared_ptr<string> templateId_ {};
    // The name of the template. This parameter is returned only if you specify TemplateId.
    // 
    // > -   If you specify TemplateVersion, the name of the template whose version is specified by TemplateVersion is returned.
    // > -  If you not specify TemplateVersion, the name of the template whose version is the default version is returned.
    shared_ptr<string> templateName_ {};
    // The version of the template. This parameter is returned only if you specify TemplateId.\\
    // If TemplateVersion is not specified or does not take effect, the default version is used.
    // 
    // If the template is a shared template, this parameter is returned only if you set VersionOption to AllVersions.
    shared_ptr<string> templateVersion_ {};
    // The time when the template was last updated. This parameter is returned only if you specify TemplateId.
    // 
    // > - If you specify TemplateVersion, the last update time of the template whose version is specified by TemplateVersion is returned.
    // > - If you do not specify TemplateVersion, the last update time of the template whose version is the default version is returned.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
