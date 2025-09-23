// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHAREPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATERESOURCESHAREPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class AssociateResourceSharePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateResourceSharePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_TO_JSON(Replace, replace_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateResourceSharePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_FROM_JSON(Replace, replace_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
    };
    AssociateResourceSharePermissionRequest() = default ;
    AssociateResourceSharePermissionRequest(const AssociateResourceSharePermissionRequest &) = default ;
    AssociateResourceSharePermissionRequest(AssociateResourceSharePermissionRequest &&) = default ;
    AssociateResourceSharePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateResourceSharePermissionRequest() = default ;
    AssociateResourceSharePermissionRequest& operator=(const AssociateResourceSharePermissionRequest &) = default ;
    AssociateResourceSharePermissionRequest& operator=(AssociateResourceSharePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permissionName_ != nullptr
        && this->replace_ != nullptr && this->resourceShareId_ != nullptr; };
    // permissionName Field Functions 
    bool hasPermissionName() const { return this->permissionName_ != nullptr;};
    void deletePermissionName() { this->permissionName_ = nullptr;};
    inline string permissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
    inline AssociateResourceSharePermissionRequest& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


    // replace Field Functions 
    bool hasReplace() const { return this->replace_ != nullptr;};
    void deleteReplace() { this->replace_ = nullptr;};
    inline bool replace() const { DARABONBA_PTR_GET_DEFAULT(replace_, false) };
    inline AssociateResourceSharePermissionRequest& setReplace(bool replace) { DARABONBA_PTR_SET_VALUE(replace_, replace) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline AssociateResourceSharePermissionRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


  protected:
    // The name of the permission.
    // 
    // This parameter is required.
    std::shared_ptr<string> permissionName_ = nullptr;
    // Specifies whether to use the specified permission to replace an existing permission. Valid values:
    // 
    // *   false: does not use the specified permission to replace an existing permission. This is the default value. If you set the value to false for a resource share that does not have associated permissions, the system associates the specified permission with the resource share. In a resource share, one resource type can have only one permission. If you set the value to false for a resource share that already has a permission for the resource type indicated by the specified permission, the system reports an error. This prevents you from replacing the existing permission by mistake.
    // *   true: uses the specified permission to replace an existing permission of the same resource type.
    std::shared_ptr<bool> replace_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
