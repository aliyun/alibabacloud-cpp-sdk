// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEPERMISSIONRESPONSEBODYNETWORKINTERFACEPERMISSION_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEPERMISSIONRESPONSEBODYNETWORKINTERFACEPERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfacePermissionId, networkInterfacePermissionId_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(PermissionState, permissionState_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfacePermissionId, networkInterfacePermissionId_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(PermissionState, permissionState_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission() = default ;
    CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission(const CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission &) = default ;
    CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission(CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission &&) = default ;
    CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission() = default ;
    CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& operator=(const CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission &) = default ;
    CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& operator=(CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->networkInterfaceId_ == nullptr && return this->networkInterfacePermissionId_ == nullptr && return this->permission_ == nullptr && return this->permissionState_ == nullptr && return this->serviceName_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfacePermissionId Field Functions 
    bool hasNetworkInterfacePermissionId() const { return this->networkInterfacePermissionId_ != nullptr;};
    void deleteNetworkInterfacePermissionId() { this->networkInterfacePermissionId_ = nullptr;};
    inline string networkInterfacePermissionId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfacePermissionId_, "") };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& setNetworkInterfacePermissionId(string networkInterfacePermissionId) { DARABONBA_PTR_SET_VALUE(networkInterfacePermissionId_, networkInterfacePermissionId) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // permissionState Field Functions 
    bool hasPermissionState() const { return this->permissionState_ != nullptr;};
    void deletePermissionState() { this->permissionState_ = nullptr;};
    inline string permissionState() const { DARABONBA_PTR_GET_DEFAULT(permissionState_, "") };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& setPermissionState(string permissionState) { DARABONBA_PTR_SET_VALUE(permissionState_, permissionState) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateNetworkInterfacePermissionResponseBodyNetworkInterfacePermission& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The ID of the Alibaba Cloud partner (a certified ISV).
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The ID of the ENI.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The ID of the permission on the ENI.
    std::shared_ptr<string> networkInterfacePermissionId_ = nullptr;
    // The permission on the ENI.
    std::shared_ptr<string> permission_ = nullptr;
    // The state of the permission on the ENI. Valid values:
    // 
    // *   Pending: The permission is being granted.
    // *   Granted: The permission is granted.
    // *   Revoking: The permission is being revoked.
    // *   Revoked: The permission is revoked.
    std::shared_ptr<string> permissionState_ = nullptr;
    // The name of the Alibaba Cloud service.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
