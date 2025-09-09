// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESHAREDACCOUNTPERMISSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESHAREDACCOUNTPERMISSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class UpdateSharedAccountPermissionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSharedAccountPermissionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Permission, permission_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSharedAccountPermissionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Permission, permission_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
    };
    UpdateSharedAccountPermissionRequest() = default ;
    UpdateSharedAccountPermissionRequest(const UpdateSharedAccountPermissionRequest &) = default ;
    UpdateSharedAccountPermissionRequest(UpdateSharedAccountPermissionRequest &&) = default ;
    UpdateSharedAccountPermissionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSharedAccountPermissionRequest() = default ;
    UpdateSharedAccountPermissionRequest& operator=(const UpdateSharedAccountPermissionRequest &) = default ;
    UpdateSharedAccountPermissionRequest& operator=(UpdateSharedAccountPermissionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->permission_ != nullptr && this->regionId_ != nullptr && this->serviceId_ != nullptr && this->type_ != nullptr && this->userAliUid_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateSharedAccountPermissionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string permission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline UpdateSharedAccountPermissionRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateSharedAccountPermissionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline UpdateSharedAccountPermissionRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateSharedAccountPermissionRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userAliUid Field Functions 
    bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
    void deleteUserAliUid() { this->userAliUid_ = nullptr;};
    inline int64_t userAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, 0L) };
    inline UpdateSharedAccountPermissionRequest& setUserAliUid(int64_t userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


  protected:
    // Client token, used to ensure the idempotence of requests. Generate a unique value for this parameter from your client to ensure it is unique across different requests. ClientToken supports only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Permission type. Possible values:
    // - Deployable: Can be deployed.
    // - Accessible: Can be accessed.
    // - AccessibleIncludeBeta: Can access all versions, including Beta versions.
    // - DeployableIncludeBeta: Can deploy all versions, including Beta versions.
    // - Authorized: Authorized (for reselling scenarios)
    // - Unauthorized: Unauthorized (for reselling scenarios)
    // 
    // This parameter is required.
    std::shared_ptr<string> permission_ = nullptr;
    // Region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Service ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceId_ = nullptr;
    // Service sharing type, with a default value of SharedAccount. Available options:
    // 
    // - SharedAccount: Regular sharing type.
    // 
    // - Reseller: Reselling sharing type.
    std::shared_ptr<string> type_ = nullptr;
    // Whitelist account for service sharing.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userAliUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
