// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AssociateResourceShareRequestResources.hpp>
#include <alibabacloud/models/AssociateResourceShareRequestTargetProperties.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AssociateResourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionNames, permissionNames_);
      DARABONBA_PTR_TO_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(TargetProperties, targetProperties_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionNames, permissionNames_);
      DARABONBA_PTR_FROM_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(TargetProperties, targetProperties_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    AssociateResourceShareRequest() = default ;
    AssociateResourceShareRequest(const AssociateResourceShareRequest &) = default ;
    AssociateResourceShareRequest(AssociateResourceShareRequest &&) = default ;
    AssociateResourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourceShareRequest() = default ;
    AssociateResourceShareRequest& operator=(const AssociateResourceShareRequest &) = default ;
    AssociateResourceShareRequest& operator=(AssociateResourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permissionNames_ != nullptr
        && this->resourceArns_ != nullptr && this->resourceShareId_ != nullptr && this->resources_ != nullptr && this->targetProperties_ != nullptr && this->targets_ != nullptr; };
    // permissionNames Field Functions 
    bool hasPermissionNames() const { return this->permissionNames_ != nullptr;};
    void deletePermissionNames() { this->permissionNames_ = nullptr;};
    inline const vector<string> & permissionNames() const { DARABONBA_PTR_GET_CONST(permissionNames_, vector<string>) };
    inline vector<string> permissionNames() { DARABONBA_PTR_GET(permissionNames_, vector<string>) };
    inline AssociateResourceShareRequest& setPermissionNames(const vector<string> & permissionNames) { DARABONBA_PTR_SET_VALUE(permissionNames_, permissionNames) };
    inline AssociateResourceShareRequest& setPermissionNames(vector<string> && permissionNames) { DARABONBA_PTR_SET_RVALUE(permissionNames_, permissionNames) };


    // resourceArns Field Functions 
    bool hasResourceArns() const { return this->resourceArns_ != nullptr;};
    void deleteResourceArns() { this->resourceArns_ = nullptr;};
    inline const vector<string> & resourceArns() const { DARABONBA_PTR_GET_CONST(resourceArns_, vector<string>) };
    inline vector<string> resourceArns() { DARABONBA_PTR_GET(resourceArns_, vector<string>) };
    inline AssociateResourceShareRequest& setResourceArns(const vector<string> & resourceArns) { DARABONBA_PTR_SET_VALUE(resourceArns_, resourceArns) };
    inline AssociateResourceShareRequest& setResourceArns(vector<string> && resourceArns) { DARABONBA_PTR_SET_RVALUE(resourceArns_, resourceArns) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline AssociateResourceShareRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<AssociateResourceShareRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<AssociateResourceShareRequestResources>) };
    inline vector<AssociateResourceShareRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<AssociateResourceShareRequestResources>) };
    inline AssociateResourceShareRequest& setResources(const vector<AssociateResourceShareRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline AssociateResourceShareRequest& setResources(vector<AssociateResourceShareRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // targetProperties Field Functions 
    bool hasTargetProperties() const { return this->targetProperties_ != nullptr;};
    void deleteTargetProperties() { this->targetProperties_ = nullptr;};
    inline const vector<AssociateResourceShareRequestTargetProperties> & targetProperties() const { DARABONBA_PTR_GET_CONST(targetProperties_, vector<AssociateResourceShareRequestTargetProperties>) };
    inline vector<AssociateResourceShareRequestTargetProperties> targetProperties() { DARABONBA_PTR_GET(targetProperties_, vector<AssociateResourceShareRequestTargetProperties>) };
    inline AssociateResourceShareRequest& setTargetProperties(const vector<AssociateResourceShareRequestTargetProperties> & targetProperties) { DARABONBA_PTR_SET_VALUE(targetProperties_, targetProperties) };
    inline AssociateResourceShareRequest& setTargetProperties(vector<AssociateResourceShareRequestTargetProperties> && targetProperties) { DARABONBA_PTR_SET_RVALUE(targetProperties_, targetProperties) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> targets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline AssociateResourceShareRequest& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline AssociateResourceShareRequest& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The information about the permissions. If you do not configure this parameter, the system automatically associates the default permission for the specified resource type with the resource share. For more information, see [Permission library](https://help.aliyun.com/document_detail/465474.html).
    std::shared_ptr<vector<string>> permissionNames_ = nullptr;
    std::shared_ptr<vector<string>> resourceArns_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The information about the resources.
    std::shared_ptr<vector<AssociateResourceShareRequestResources>> resources_ = nullptr;
    // The properties of the principal.
    // 
    // >  This parameter is available only when you specify an Alibaba Cloud service as a principal.
    std::shared_ptr<vector<AssociateResourceShareRequestTargetProperties>> targetProperties_ = nullptr;
    // The information about the principals.
    std::shared_ptr<vector<string>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
