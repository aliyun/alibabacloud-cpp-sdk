// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendNotificationsRequestDeviceInfo.hpp>
#include <alibabacloud/models/SendNotificationsRequestNotificationUnicastRequest.hpp>
#include <alibabacloud/models/SendNotificationsRequestTenantInfo.hpp>
#include <alibabacloud/models/SendNotificationsRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class SendNotificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    SendNotificationsRequest() = default ;
    SendNotificationsRequest(const SendNotificationsRequest &) = default ;
    SendNotificationsRequest(SendNotificationsRequest &&) = default ;
    SendNotificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationsRequest() = default ;
    SendNotificationsRequest& operator=(const SendNotificationsRequest &) = default ;
    SendNotificationsRequest& operator=(SendNotificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->notificationUnicastRequest_ != nullptr && this->tenantInfo_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const SendNotificationsRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, SendNotificationsRequestDeviceInfo) };
    inline SendNotificationsRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, SendNotificationsRequestDeviceInfo) };
    inline SendNotificationsRequest& setDeviceInfo(const SendNotificationsRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline SendNotificationsRequest& setDeviceInfo(SendNotificationsRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // notificationUnicastRequest Field Functions 
    bool hasNotificationUnicastRequest() const { return this->notificationUnicastRequest_ != nullptr;};
    void deleteNotificationUnicastRequest() { this->notificationUnicastRequest_ = nullptr;};
    inline const SendNotificationsRequestNotificationUnicastRequest & notificationUnicastRequest() const { DARABONBA_PTR_GET_CONST(notificationUnicastRequest_, SendNotificationsRequestNotificationUnicastRequest) };
    inline SendNotificationsRequestNotificationUnicastRequest notificationUnicastRequest() { DARABONBA_PTR_GET(notificationUnicastRequest_, SendNotificationsRequestNotificationUnicastRequest) };
    inline SendNotificationsRequest& setNotificationUnicastRequest(const SendNotificationsRequestNotificationUnicastRequest & notificationUnicastRequest) { DARABONBA_PTR_SET_VALUE(notificationUnicastRequest_, notificationUnicastRequest) };
    inline SendNotificationsRequest& setNotificationUnicastRequest(SendNotificationsRequestNotificationUnicastRequest && notificationUnicastRequest) { DARABONBA_PTR_SET_RVALUE(notificationUnicastRequest_, notificationUnicastRequest) };


    // tenantInfo Field Functions 
    bool hasTenantInfo() const { return this->tenantInfo_ != nullptr;};
    void deleteTenantInfo() { this->tenantInfo_ = nullptr;};
    inline const SendNotificationsRequestTenantInfo & tenantInfo() const { DARABONBA_PTR_GET_CONST(tenantInfo_, SendNotificationsRequestTenantInfo) };
    inline SendNotificationsRequestTenantInfo tenantInfo() { DARABONBA_PTR_GET(tenantInfo_, SendNotificationsRequestTenantInfo) };
    inline SendNotificationsRequest& setTenantInfo(const SendNotificationsRequestTenantInfo & tenantInfo) { DARABONBA_PTR_SET_VALUE(tenantInfo_, tenantInfo) };
    inline SendNotificationsRequest& setTenantInfo(SendNotificationsRequestTenantInfo && tenantInfo) { DARABONBA_PTR_SET_RVALUE(tenantInfo_, tenantInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const SendNotificationsRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, SendNotificationsRequestUserInfo) };
    inline SendNotificationsRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, SendNotificationsRequestUserInfo) };
    inline SendNotificationsRequest& setUserInfo(const SendNotificationsRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline SendNotificationsRequest& setUserInfo(SendNotificationsRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<SendNotificationsRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SendNotificationsRequestNotificationUnicastRequest> notificationUnicastRequest_ = nullptr;
    std::shared_ptr<SendNotificationsRequestTenantInfo> tenantInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SendNotificationsRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
