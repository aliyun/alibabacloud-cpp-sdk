// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIENTAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLIENTAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class ClientAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClientAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_TO_JSON(License, license_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ClientAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
      DARABONBA_PTR_FROM_JSON(License, license_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ClientAuthRequest() = default ;
    ClientAuthRequest(const ClientAuthRequest &) = default ;
    ClientAuthRequest(ClientAuthRequest &&) = default ;
    ClientAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClientAuthRequest() = default ;
    ClientAuthRequest& operator=(const ClientAuthRequest &) = default ;
    ClientAuthRequest& operator=(ClientAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->deviceId_ != nullptr && this->deviceInfo_ != nullptr && this->deviceType_ != nullptr && this->license_ != nullptr && this->tenantId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ClientAuthRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ClientAuthRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline string deviceInfo() const { DARABONBA_PTR_GET_DEFAULT(deviceInfo_, "") };
    inline ClientAuthRequest& setDeviceInfo(string deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };


    // deviceType Field Functions 
    bool hasDeviceType() const { return this->deviceType_ != nullptr;};
    void deleteDeviceType() { this->deviceType_ = nullptr;};
    inline string deviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
    inline ClientAuthRequest& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


    // license Field Functions 
    bool hasLicense() const { return this->license_ != nullptr;};
    void deleteLicense() { this->license_ = nullptr;};
    inline string license() const { DARABONBA_PTR_GET_DEFAULT(license_, "") };
    inline ClientAuthRequest& setLicense(string license) { DARABONBA_PTR_SET_VALUE(license_, license) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ClientAuthRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceId_ = nullptr;
    std::shared_ptr<string> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> license_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
