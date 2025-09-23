// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateResourceShareRequestResources.hpp>
#include <alibabacloud/models/CreateResourceShareRequestTag.hpp>
#include <alibabacloud/models/CreateResourceShareRequestTargetProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class CreateResourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_TO_JSON(PermissionNames, permissionNames_);
      DARABONBA_PTR_TO_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetProperties, targetProperties_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_FROM_JSON(PermissionNames, permissionNames_);
      DARABONBA_PTR_FROM_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetProperties, targetProperties_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    CreateResourceShareRequest() = default ;
    CreateResourceShareRequest(const CreateResourceShareRequest &) = default ;
    CreateResourceShareRequest(CreateResourceShareRequest &&) = default ;
    CreateResourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceShareRequest() = default ;
    CreateResourceShareRequest& operator=(const CreateResourceShareRequest &) = default ;
    CreateResourceShareRequest& operator=(CreateResourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowExternalTargets_ != nullptr
        && this->permissionNames_ != nullptr && this->resourceArns_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceShareName_ != nullptr && this->resources_ != nullptr
        && this->tag_ != nullptr && this->targetProperties_ != nullptr && this->targets_ != nullptr; };
    // allowExternalTargets Field Functions 
    bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
    void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
    inline bool allowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
    inline CreateResourceShareRequest& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


    // permissionNames Field Functions 
    bool hasPermissionNames() const { return this->permissionNames_ != nullptr;};
    void deletePermissionNames() { this->permissionNames_ = nullptr;};
    inline const vector<string> & permissionNames() const { DARABONBA_PTR_GET_CONST(permissionNames_, vector<string>) };
    inline vector<string> permissionNames() { DARABONBA_PTR_GET(permissionNames_, vector<string>) };
    inline CreateResourceShareRequest& setPermissionNames(const vector<string> & permissionNames) { DARABONBA_PTR_SET_VALUE(permissionNames_, permissionNames) };
    inline CreateResourceShareRequest& setPermissionNames(vector<string> && permissionNames) { DARABONBA_PTR_SET_RVALUE(permissionNames_, permissionNames) };


    // resourceArns Field Functions 
    bool hasResourceArns() const { return this->resourceArns_ != nullptr;};
    void deleteResourceArns() { this->resourceArns_ = nullptr;};
    inline const vector<string> & resourceArns() const { DARABONBA_PTR_GET_CONST(resourceArns_, vector<string>) };
    inline vector<string> resourceArns() { DARABONBA_PTR_GET(resourceArns_, vector<string>) };
    inline CreateResourceShareRequest& setResourceArns(const vector<string> & resourceArns) { DARABONBA_PTR_SET_VALUE(resourceArns_, resourceArns) };
    inline CreateResourceShareRequest& setResourceArns(vector<string> && resourceArns) { DARABONBA_PTR_SET_RVALUE(resourceArns_, resourceArns) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateResourceShareRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline CreateResourceShareRequest& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<CreateResourceShareRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<CreateResourceShareRequestResources>) };
    inline vector<CreateResourceShareRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<CreateResourceShareRequestResources>) };
    inline CreateResourceShareRequest& setResources(const vector<CreateResourceShareRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline CreateResourceShareRequest& setResources(vector<CreateResourceShareRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateResourceShareRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateResourceShareRequestTag>) };
    inline vector<CreateResourceShareRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateResourceShareRequestTag>) };
    inline CreateResourceShareRequest& setTag(const vector<CreateResourceShareRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateResourceShareRequest& setTag(vector<CreateResourceShareRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetProperties Field Functions 
    bool hasTargetProperties() const { return this->targetProperties_ != nullptr;};
    void deleteTargetProperties() { this->targetProperties_ = nullptr;};
    inline const vector<CreateResourceShareRequestTargetProperties> & targetProperties() const { DARABONBA_PTR_GET_CONST(targetProperties_, vector<CreateResourceShareRequestTargetProperties>) };
    inline vector<CreateResourceShareRequestTargetProperties> targetProperties() { DARABONBA_PTR_GET(targetProperties_, vector<CreateResourceShareRequestTargetProperties>) };
    inline CreateResourceShareRequest& setTargetProperties(const vector<CreateResourceShareRequestTargetProperties> & targetProperties) { DARABONBA_PTR_SET_VALUE(targetProperties_, targetProperties) };
    inline CreateResourceShareRequest& setTargetProperties(vector<CreateResourceShareRequestTargetProperties> && targetProperties) { DARABONBA_PTR_SET_RVALUE(targetProperties_, targetProperties) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> targets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline CreateResourceShareRequest& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateResourceShareRequest& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // Specifies whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
    // 
    // *   false (default): Resources in the resource share can be shared only with accounts in the resource directory.
    // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
    std::shared_ptr<bool> allowExternalTargets_ = nullptr;
    // The information about the permissions. If you do not configure this parameter, the system automatically associates the default permission for the specified resource type with the resource share. For more information, see [Permission library](https://help.aliyun.com/document_detail/465474.html).
    std::shared_ptr<vector<string>> permissionNames_ = nullptr;
    std::shared_ptr<vector<string>> resourceArns_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The name of the resource share.
    // 
    // The name must be 1 to 50 characters in length.
    // 
    // The name can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareName_ = nullptr;
    // The information about the shared resources.
    std::shared_ptr<vector<CreateResourceShareRequestResources>> resources_ = nullptr;
    // The tags. You can specify up to 20 tags.
    std::shared_ptr<vector<CreateResourceShareRequestTag>> tag_ = nullptr;
    // The properties of the principal.
    // 
    // >  This parameter is available only when you specify an Alibaba Cloud service as a principal.
    std::shared_ptr<vector<CreateResourceShareRequestTargetProperties>> targetProperties_ = nullptr;
    // The information about the principals.
    std::shared_ptr<vector<string>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
