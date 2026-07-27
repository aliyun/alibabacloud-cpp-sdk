// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGERESOURCEMANAGERRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGERESOURCEMANAGERRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ChangeResourceManagerResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeResourceManagerResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeResourceManagerResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ChangeResourceManagerResourceGroupRequest() = default ;
    ChangeResourceManagerResourceGroupRequest(const ChangeResourceManagerResourceGroupRequest &) = default ;
    ChangeResourceManagerResourceGroupRequest(ChangeResourceManagerResourceGroupRequest &&) = default ;
    ChangeResourceManagerResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeResourceManagerResourceGroupRequest() = default ;
    ChangeResourceManagerResourceGroupRequest& operator=(const ChangeResourceManagerResourceGroupRequest &) = default ;
    ChangeResourceManagerResourceGroupRequest& operator=(ChangeResourceManagerResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceManagerResourceGroupId_ == nullptr && this->resourceType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ChangeResourceManagerResourceGroupRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ChangeResourceManagerResourceGroupRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ChangeResourceManagerResourceGroupRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the resource. The value of this parameter depends on the value of the ResourceType parameter:
    // 
    // - If ResourceType is set to project, this parameter specifies the name of the workspace (ProjectIdentifier). You can call the [ListProjects](https://help.aliyun.com/document_detail/2780068.html) operation to obtain the workspace name.
    // 
    // - If ResourceType is set to tenantresourcegroup, this parameter specifies the identifier of the exclusive resource group (Identifier). You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/2780075.html) operation to obtain the identifier. This applies only to resource groups of type 7, 8, or 9.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The ID of the destination resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The resource type. Valid values:
    // 
    // - project: a workspace. Select this value to change the resource group for a DataWorks edition.
    // 
    // - tenantresourcegroup: an exclusive resource group. Select this value to change the resource group for a DataWorks exclusive resource group.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
