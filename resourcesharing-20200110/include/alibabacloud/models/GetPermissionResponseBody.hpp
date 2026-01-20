// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class GetPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPermissionResponseBody() = default ;
    GetPermissionResponseBody(const GetPermissionResponseBody &) = default ;
    GetPermissionResponseBody(GetPermissionResponseBody &&) = default ;
    GetPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermissionResponseBody() = default ;
    GetPermissionResponseBody& operator=(const GetPermissionResponseBody &) = default ;
    GetPermissionResponseBody& operator=(GetPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Permission : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Permission& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DefaultPermission, defaultPermission_);
        DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(Permission, permission_);
        DARABONBA_PTR_TO_JSON(PermissionName, permissionName_);
        DARABONBA_PTR_TO_JSON(PermissionVersion, permissionVersion_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Permission& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DefaultPermission, defaultPermission_);
        DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
        DARABONBA_PTR_FROM_JSON(PermissionName, permissionName_);
        DARABONBA_PTR_FROM_JSON(PermissionVersion, permissionVersion_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Permission() = default ;
      Permission(const Permission &) = default ;
      Permission(Permission &&) = default ;
      Permission(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Permission() = default ;
      Permission& operator=(const Permission &) = default ;
      Permission& operator=(Permission &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultPermission_ == nullptr && this->defaultVersion_ == nullptr && this->permission_ == nullptr && this->permissionName_ == nullptr && this->permissionVersion_ == nullptr
        && this->resourceType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Permission& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultPermission Field Functions 
      bool hasDefaultPermission() const { return this->defaultPermission_ != nullptr;};
      void deleteDefaultPermission() { this->defaultPermission_ = nullptr;};
      inline bool getDefaultPermission() const { DARABONBA_PTR_GET_DEFAULT(defaultPermission_, false) };
      inline Permission& setDefaultPermission(bool defaultPermission) { DARABONBA_PTR_SET_VALUE(defaultPermission_, defaultPermission) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline bool getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, false) };
      inline Permission& setDefaultVersion(bool defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline Permission& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // permissionName Field Functions 
      bool hasPermissionName() const { return this->permissionName_ != nullptr;};
      void deletePermissionName() { this->permissionName_ = nullptr;};
      inline string getPermissionName() const { DARABONBA_PTR_GET_DEFAULT(permissionName_, "") };
      inline Permission& setPermissionName(string permissionName) { DARABONBA_PTR_SET_VALUE(permissionName_, permissionName) };


      // permissionVersion Field Functions 
      bool hasPermissionVersion() const { return this->permissionVersion_ != nullptr;};
      void deletePermissionVersion() { this->permissionVersion_ = nullptr;};
      inline string getPermissionVersion() const { DARABONBA_PTR_GET_DEFAULT(permissionVersion_, "") };
      inline Permission& setPermissionVersion(string permissionVersion) { DARABONBA_PTR_SET_VALUE(permissionVersion_, permissionVersion) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Permission& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Permission& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time.
      shared_ptr<string> createTime_ {};
      // Indicates whether the permission is the default permission. Valid values:
      // 
      // *   false: The permission is not the default permission.
      // *   true: The permission is the default permission.
      shared_ptr<bool> defaultPermission_ {};
      // Indicates whether the version is the default version. Valid values:
      // 
      // *   false: The version is not the default version.
      // *   true: The version is the default version.
      shared_ptr<bool> defaultVersion_ {};
      // The document of the policy related to the permission.
      shared_ptr<string> permission_ {};
      // The name of the permission.
      shared_ptr<string> permissionName_ {};
      // The version of the permission.
      shared_ptr<string> permissionVersion_ {};
      // The type of the shared resources.
      // 
      // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
      shared_ptr<string> resourceType_ {};
      // The update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->permission_ == nullptr
        && this->requestId_ == nullptr; };
    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline const GetPermissionResponseBody::Permission & getPermission() const { DARABONBA_PTR_GET_CONST(permission_, GetPermissionResponseBody::Permission) };
    inline GetPermissionResponseBody::Permission getPermission() { DARABONBA_PTR_GET(permission_, GetPermissionResponseBody::Permission) };
    inline GetPermissionResponseBody& setPermission(const GetPermissionResponseBody::Permission & permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };
    inline GetPermissionResponseBody& setPermission(GetPermissionResponseBody::Permission && permission) { DARABONBA_PTR_SET_RVALUE(permission_, permission) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the permission.
    shared_ptr<GetPermissionResponseBody::Permission> permission_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
