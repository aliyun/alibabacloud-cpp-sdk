// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHAREPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHAREPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class DisassociateResourceSharePermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateResourceSharePermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateResourceSharePermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
    };
    DisassociateResourceSharePermissionRequest() = default ;
    DisassociateResourceSharePermissionRequest(const DisassociateResourceSharePermissionRequest &) = default ;
    DisassociateResourceSharePermissionRequest(DisassociateResourceSharePermissionRequest &&) = default ;
    DisassociateResourceSharePermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateResourceSharePermissionRequest() = default ;
    DisassociateResourceSharePermissionRequest& operator=(const DisassociateResourceSharePermissionRequest &) = default ;
    DisassociateResourceSharePermissionRequest& operator=(DisassociateResourceSharePermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permissionName_ != nullptr
        && this->resourceShareId_ != nullptr; };
    // permissionName Field Functions 
    bool hasPermissionName() const { return this->permissionName_ != nullptr;};
    void deletePermissionName() { this->permissionName_ = nullptr;};
    inline string permissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
    inline DisassociateResourceSharePermissionRequest& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline DisassociateResourceSharePermissionRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


  protected:
    // The name of the permission. For more information, see [Permission library](https://help.aliyun.com/document_detail/465474.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> permissionName_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
