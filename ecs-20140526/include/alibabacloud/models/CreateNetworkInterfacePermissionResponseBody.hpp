// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKINTERFACEPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateNetworkInterfacePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkInterfacePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfacePermission, networkInterfacePermission_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkInterfacePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfacePermission, networkInterfacePermission_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateNetworkInterfacePermissionResponseBody() = default ;
    CreateNetworkInterfacePermissionResponseBody(const CreateNetworkInterfacePermissionResponseBody &) = default ;
    CreateNetworkInterfacePermissionResponseBody(CreateNetworkInterfacePermissionResponseBody &&) = default ;
    CreateNetworkInterfacePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkInterfacePermissionResponseBody() = default ;
    CreateNetworkInterfacePermissionResponseBody& operator=(const CreateNetworkInterfacePermissionResponseBody &) = default ;
    CreateNetworkInterfacePermissionResponseBody& operator=(CreateNetworkInterfacePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInterfacePermission : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfacePermission& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfacePermissionId, networkInterfacePermissionId_);
        DARABONBA_PTR_TO_JSON(Permission, permission_);
        DARABONBA_PTR_TO_JSON(PermissionState, permissionState_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfacePermission& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfacePermissionId, networkInterfacePermissionId_);
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
        DARABONBA_PTR_FROM_JSON(PermissionState, permissionState_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      };
      NetworkInterfacePermission() = default ;
      NetworkInterfacePermission(const NetworkInterfacePermission &) = default ;
      NetworkInterfacePermission(NetworkInterfacePermission &&) = default ;
      NetworkInterfacePermission(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfacePermission() = default ;
      NetworkInterfacePermission& operator=(const NetworkInterfacePermission &) = default ;
      NetworkInterfacePermission& operator=(NetworkInterfacePermission &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->networkInterfacePermissionId_ == nullptr && this->permission_ == nullptr && this->permissionState_ == nullptr && this->serviceName_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
      inline NetworkInterfacePermission& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline NetworkInterfacePermission& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // networkInterfacePermissionId Field Functions 
      bool hasNetworkInterfacePermissionId() const { return this->networkInterfacePermissionId_ != nullptr;};
      void deleteNetworkInterfacePermissionId() { this->networkInterfacePermissionId_ = nullptr;};
      inline string getNetworkInterfacePermissionId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfacePermissionId_, "") };
      inline NetworkInterfacePermission& setNetworkInterfacePermissionId(string networkInterfacePermissionId) { DARABONBA_PTR_SET_VALUE(networkInterfacePermissionId_, networkInterfacePermissionId) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline NetworkInterfacePermission& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // permissionState Field Functions 
      bool hasPermissionState() const { return this->permissionState_ != nullptr;};
      void deletePermissionState() { this->permissionState_ = nullptr;};
      inline string getPermissionState() const { DARABONBA_PTR_GET_DEFAULT(permissionState_, "") };
      inline NetworkInterfacePermission& setPermissionState(string permissionState) { DARABONBA_PTR_SET_VALUE(permissionState_, permissionState) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline NetworkInterfacePermission& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      // The ID of the Alibaba Cloud partner (a certified ISV).
      shared_ptr<int64_t> accountId_ {};
      // The ID of the ENI.
      shared_ptr<string> networkInterfaceId_ {};
      // The ID of the permission on the ENI.
      shared_ptr<string> networkInterfacePermissionId_ {};
      // The permission on the ENI.
      shared_ptr<string> permission_ {};
      // The state of the permission on the ENI. Valid values:
      // 
      // *   Pending: The permission is being granted.
      // *   Granted: The permission is granted.
      // *   Revoking: The permission is being revoked.
      // *   Revoked: The permission is revoked.
      shared_ptr<string> permissionState_ {};
      // The name of the Alibaba Cloud service.
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->networkInterfacePermission_ == nullptr
        && this->requestId_ == nullptr; };
    // networkInterfacePermission Field Functions 
    bool hasNetworkInterfacePermission() const { return this->networkInterfacePermission_ != nullptr;};
    void deleteNetworkInterfacePermission() { this->networkInterfacePermission_ = nullptr;};
    inline const CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission & getNetworkInterfacePermission() const { DARABONBA_PTR_GET_CONST(networkInterfacePermission_, CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission) };
    inline CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission getNetworkInterfacePermission() { DARABONBA_PTR_GET(networkInterfacePermission_, CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission) };
    inline CreateNetworkInterfacePermissionResponseBody& setNetworkInterfacePermission(const CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission & networkInterfacePermission) { DARABONBA_PTR_SET_VALUE(networkInterfacePermission_, networkInterfacePermission) };
    inline CreateNetworkInterfacePermissionResponseBody& setNetworkInterfacePermission(CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission && networkInterfacePermission) { DARABONBA_PTR_SET_RVALUE(networkInterfacePermission_, networkInterfacePermission) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateNetworkInterfacePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about permissions on the ENI.
    shared_ptr<CreateNetworkInterfacePermissionResponseBody::NetworkInterfacePermission> networkInterfacePermission_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
