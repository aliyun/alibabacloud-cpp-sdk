// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODYPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODYPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class GetPermissionResponseBodyPermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionResponseBodyPermission& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultPermission, defaultPermission_);
      DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_TO_JSON(PermissionVersion, permissionVersion_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionResponseBodyPermission& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultPermission, defaultPermission_);
      DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
      DARABONBA_PTR_FROM_JSON(PermissionVersion, permissionVersion_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetPermissionResponseBodyPermission() = default ;
    GetPermissionResponseBodyPermission(const GetPermissionResponseBodyPermission &) = default ;
    GetPermissionResponseBodyPermission(GetPermissionResponseBodyPermission &&) = default ;
    GetPermissionResponseBodyPermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionResponseBodyPermission() = default ;
    GetPermissionResponseBodyPermission& operator=(const GetPermissionResponseBodyPermission &) = default ;
    GetPermissionResponseBodyPermission& operator=(GetPermissionResponseBodyPermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->defaultPermission_ != nullptr && this->defaultVersion_ != nullptr && this->permission_ != nullptr && this->permissionName_ != nullptr && this->permissionVersion_ != nullptr
        && this->resourceType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetPermissionResponseBodyPermission& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultPermission Field Functions 
    bool hasDefaultPermission() const { return this->defaultPermission_ != nullptr;};
    void deleteDefaultPermission() { this->defaultPermission_ = nullptr;};
    inline bool defaultPermission() const { DARABONBA_PTR_GET_DEFAULT(defaultPermission_, false) };
    inline GetPermissionResponseBodyPermission& setDefaultPermission(bool defaultPermission) { DARABONBA_PTR_SET_VALUE(defaultPermission_, defaultPermission) };


    // defaultVersion Field Functions 
    bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
    void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
    inline bool defaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, false) };
    inline GetPermissionResponseBodyPermission& setDefaultVersion(bool defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline GetPermissionResponseBodyPermission& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // permissionName Field Functions 
    bool hasPermissionName() const { return this->permissionName_ != nullptr;};
    void deletePermissionName() { this->permissionName_ = nullptr;};
    inline string permissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
    inline GetPermissionResponseBodyPermission& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


    // permissionVersion Field Functions 
    bool hasPermissionVersion() const { return this->permissionVersion_ != nullptr;};
    void deletePermissionVersion() { this->permissionVersion_ = nullptr;};
    inline string permissionVersion() const { DARABONBA_PTR_GET_DEFAULT(permissionVersion_, "") };
    inline GetPermissionResponseBodyPermission& setPermissionVersion(string permissionVersion) { DARABONBA_PTR_SET_VALUE(permissionVersion_, permissionVersion) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetPermissionResponseBodyPermission& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetPermissionResponseBodyPermission& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether the permission is the default permission. Valid values:
    // 
    // *   false: The permission is not the default permission.
    // *   true: The permission is the default permission.
    std::shared_ptr<bool> defaultPermission_ = nullptr;
    // Indicates whether the version is the default version. Valid values:
    // 
    // *   false: The version is not the default version.
    // *   true: The version is the default version.
    std::shared_ptr<bool> defaultVersion_ = nullptr;
    // The document of the policy related to the permission.
    std::shared_ptr<string> permission_ = nullptr;
    // The name of the permission.
    std::shared_ptr<string> permissionName_ = nullptr;
    // The version of the permission.
    std::shared_ptr<string> permissionVersion_ = nullptr;
    // The type of the shared resources.
    // 
    // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
    std::shared_ptr<string> resourceType_ = nullptr;
    // The update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
