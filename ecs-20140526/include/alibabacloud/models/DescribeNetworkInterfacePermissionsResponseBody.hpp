// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfacePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfacePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfacePermissions, networkInterfacePermissions_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfacePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfacePermissions, networkInterfacePermissions_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInterfacePermissionsResponseBody() = default ;
    DescribeNetworkInterfacePermissionsResponseBody(const DescribeNetworkInterfacePermissionsResponseBody &) = default ;
    DescribeNetworkInterfacePermissionsResponseBody(DescribeNetworkInterfacePermissionsResponseBody &&) = default ;
    DescribeNetworkInterfacePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfacePermissionsResponseBody() = default ;
    DescribeNetworkInterfacePermissionsResponseBody& operator=(const DescribeNetworkInterfacePermissionsResponseBody &) = default ;
    DescribeNetworkInterfacePermissionsResponseBody& operator=(DescribeNetworkInterfacePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInterfacePermissions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfacePermissions& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInterfacePermission, networkInterfacePermission_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfacePermissions& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInterfacePermission, networkInterfacePermission_);
      };
      NetworkInterfacePermissions() = default ;
      NetworkInterfacePermissions(const NetworkInterfacePermissions &) = default ;
      NetworkInterfacePermissions(NetworkInterfacePermissions &&) = default ;
      NetworkInterfacePermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfacePermissions() = default ;
      NetworkInterfacePermissions& operator=(const NetworkInterfacePermissions &) = default ;
      NetworkInterfacePermissions& operator=(NetworkInterfacePermissions &&) = default ;
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
        // The ID of the Alibaba Cloud partner (a certified ISV) or individual user.
        shared_ptr<int64_t> accountId_ {};
        // The ID of ENI N.
        shared_ptr<string> networkInterfaceId_ {};
        // The ID of the ENI permission.
        shared_ptr<string> networkInterfacePermissionId_ {};
        // The ENI permission.
        shared_ptr<string> permission_ {};
        // The status of the ENI permission. Valid values:
        // 
        // *   Pending: The permission is being granted.
        // *   Granted: The permission is granted.
        // *   Revoking: The permission is being revoked.
        // *   Revoked: The permission is revoked.
        shared_ptr<string> permissionState_ {};
        // The name of the Alibaba Cloud service.
        shared_ptr<string> serviceName_ {};
      };

      virtual bool empty() const override { return this->networkInterfacePermission_ == nullptr; };
      // networkInterfacePermission Field Functions 
      bool hasNetworkInterfacePermission() const { return this->networkInterfacePermission_ != nullptr;};
      void deleteNetworkInterfacePermission() { this->networkInterfacePermission_ = nullptr;};
      inline const vector<NetworkInterfacePermissions::NetworkInterfacePermission> & getNetworkInterfacePermission() const { DARABONBA_PTR_GET_CONST(networkInterfacePermission_, vector<NetworkInterfacePermissions::NetworkInterfacePermission>) };
      inline vector<NetworkInterfacePermissions::NetworkInterfacePermission> getNetworkInterfacePermission() { DARABONBA_PTR_GET(networkInterfacePermission_, vector<NetworkInterfacePermissions::NetworkInterfacePermission>) };
      inline NetworkInterfacePermissions& setNetworkInterfacePermission(const vector<NetworkInterfacePermissions::NetworkInterfacePermission> & networkInterfacePermission) { DARABONBA_PTR_SET_VALUE(networkInterfacePermission_, networkInterfacePermission) };
      inline NetworkInterfacePermissions& setNetworkInterfacePermission(vector<NetworkInterfacePermissions::NetworkInterfacePermission> && networkInterfacePermission) { DARABONBA_PTR_SET_RVALUE(networkInterfacePermission_, networkInterfacePermission) };


    protected:
      shared_ptr<vector<NetworkInterfacePermissions::NetworkInterfacePermission>> networkInterfacePermission_ {};
    };

    virtual bool empty() const override { return this->networkInterfacePermissions_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkInterfacePermissions Field Functions 
    bool hasNetworkInterfacePermissions() const { return this->networkInterfacePermissions_ != nullptr;};
    void deleteNetworkInterfacePermissions() { this->networkInterfacePermissions_ = nullptr;};
    inline const DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions & getNetworkInterfacePermissions() const { DARABONBA_PTR_GET_CONST(networkInterfacePermissions_, DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions) };
    inline DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions getNetworkInterfacePermissions() { DARABONBA_PTR_GET(networkInterfacePermissions_, DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions) };
    inline DescribeNetworkInterfacePermissionsResponseBody& setNetworkInterfacePermissions(const DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions & networkInterfacePermissions) { DARABONBA_PTR_SET_VALUE(networkInterfacePermissions_, networkInterfacePermissions) };
    inline DescribeNetworkInterfacePermissionsResponseBody& setNetworkInterfacePermissions(DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions && networkInterfacePermissions) { DARABONBA_PTR_SET_RVALUE(networkInterfacePermissions_, networkInterfacePermissions) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNetworkInterfacePermissionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNetworkInterfacePermissionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInterfacePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInterfacePermissionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the ENI permissions.
    shared_ptr<DescribeNetworkInterfacePermissionsResponseBody::NetworkInterfacePermissions> networkInterfacePermissions_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
