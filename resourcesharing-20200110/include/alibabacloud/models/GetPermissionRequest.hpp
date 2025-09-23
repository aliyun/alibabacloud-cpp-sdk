// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class GetPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_TO_JSON(PermissionVersion, permissionVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_FROM_JSON(PermissionVersion, permissionVersion_);
    };
    GetPermissionRequest() = default ;
    GetPermissionRequest(const GetPermissionRequest &) = default ;
    GetPermissionRequest(GetPermissionRequest &&) = default ;
    GetPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionRequest() = default ;
    GetPermissionRequest& operator=(const GetPermissionRequest &) = default ;
    GetPermissionRequest& operator=(GetPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permissionName_ != nullptr
        && this->permissionVersion_ != nullptr; };
    // permissionName Field Functions 
    bool hasPermissionName() const { return this->permissionName_ != nullptr;};
    void deletePermissionName() { this->permissionName_ = nullptr;};
    inline string permissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
    inline GetPermissionRequest& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


    // permissionVersion Field Functions 
    bool hasPermissionVersion() const { return this->permissionVersion_ != nullptr;};
    void deletePermissionVersion() { this->permissionVersion_ = nullptr;};
    inline string permissionVersion() const { DARABONBA_PTR_GET_DEFAULT(permissionVersion_, "") };
    inline GetPermissionRequest& setPermissionVersion(string permissionVersion) { DARABONBA_PTR_SET_VALUE(permissionVersion_, permissionVersion) };


  protected:
    // The name of the permission.
    // 
    // This parameter is required.
    std::shared_ptr<string> permissionName_ = nullptr;
    // The version of the permission.
    std::shared_ptr<string> permissionVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
