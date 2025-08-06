// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSUMESLSROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSUMESLSROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AssumeSlsRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssumeSlsRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(AuthTimestamp, authTimestamp_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TerminalType, terminalType_);
    };
    friend void from_json(const Darabonba::Json& j, AssumeSlsRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(AuthTimestamp, authTimestamp_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TerminalType, terminalType_);
    };
    AssumeSlsRoleRequest() = default ;
    AssumeSlsRoleRequest(const AssumeSlsRoleRequest &) = default ;
    AssumeSlsRoleRequest(AssumeSlsRoleRequest &&) = default ;
    AssumeSlsRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssumeSlsRoleRequest() = default ;
    AssumeSlsRoleRequest& operator=(const AssumeSlsRoleRequest &) = default ;
    AssumeSlsRoleRequest& operator=(AssumeSlsRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersion_ != nullptr
        && this->authInfo_ != nullptr && this->authTimestamp_ != nullptr && this->businessType_ != nullptr && this->clientId_ != nullptr && this->deviceModel_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->terminalType_ != nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline AssumeSlsRoleRequest& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline AssumeSlsRoleRequest& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // authTimestamp Field Functions 
    bool hasAuthTimestamp() const { return this->authTimestamp_ != nullptr;};
    void deleteAuthTimestamp() { this->authTimestamp_ = nullptr;};
    inline int64_t authTimestamp() const { DARABONBA_PTR_GET_DEFAULT(authTimestamp_, 0L) };
    inline AssumeSlsRoleRequest& setAuthTimestamp(int64_t authTimestamp) { DARABONBA_PTR_SET_VALUE(authTimestamp_, authTimestamp) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline AssumeSlsRoleRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline AssumeSlsRoleRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // deviceModel Field Functions 
    bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
    void deleteDeviceModel() { this->deviceModel_ = nullptr;};
    inline string deviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
    inline AssumeSlsRoleRequest& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AssumeSlsRoleRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AssumeSlsRoleRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AssumeSlsRoleRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // terminalType Field Functions 
    bool hasTerminalType() const { return this->terminalType_ != nullptr;};
    void deleteTerminalType() { this->terminalType_ = nullptr;};
    inline string terminalType() const { DARABONBA_PTR_GET_DEFAULT(terminalType_, "") };
    inline AssumeSlsRoleRequest& setTerminalType(string terminalType) { DARABONBA_PTR_SET_VALUE(terminalType_, terminalType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> authInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> authTimestamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> businessType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceModel_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> terminalType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
