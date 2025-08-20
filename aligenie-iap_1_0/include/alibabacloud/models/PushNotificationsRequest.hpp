// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PushNotificationsRequestNotificationUnicastRequest.hpp>
#include <alibabacloud/models/PushNotificationsRequestTenantInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PushNotificationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNotificationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PushNotificationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationUnicastRequest, notificationUnicastRequest_);
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfo_);
    };
    PushNotificationsRequest() = default ;
    PushNotificationsRequest(const PushNotificationsRequest &) = default ;
    PushNotificationsRequest(PushNotificationsRequest &&) = default ;
    PushNotificationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNotificationsRequest() = default ;
    PushNotificationsRequest& operator=(const PushNotificationsRequest &) = default ;
    PushNotificationsRequest& operator=(PushNotificationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationUnicastRequest_ != nullptr
        && this->tenantInfo_ != nullptr; };
    // notificationUnicastRequest Field Functions 
    bool hasNotificationUnicastRequest() const { return this->notificationUnicastRequest_ != nullptr;};
    void deleteNotificationUnicastRequest() { this->notificationUnicastRequest_ = nullptr;};
    inline const PushNotificationsRequestNotificationUnicastRequest & notificationUnicastRequest() const { DARABONBA_PTR_GET_CONST(notificationUnicastRequest_, PushNotificationsRequestNotificationUnicastRequest) };
    inline PushNotificationsRequestNotificationUnicastRequest notificationUnicastRequest() { DARABONBA_PTR_GET(notificationUnicastRequest_, PushNotificationsRequestNotificationUnicastRequest) };
    inline PushNotificationsRequest& setNotificationUnicastRequest(const PushNotificationsRequestNotificationUnicastRequest & notificationUnicastRequest) { DARABONBA_PTR_SET_VALUE(notificationUnicastRequest_, notificationUnicastRequest) };
    inline PushNotificationsRequest& setNotificationUnicastRequest(PushNotificationsRequestNotificationUnicastRequest && notificationUnicastRequest) { DARABONBA_PTR_SET_RVALUE(notificationUnicastRequest_, notificationUnicastRequest) };


    // tenantInfo Field Functions 
    bool hasTenantInfo() const { return this->tenantInfo_ != nullptr;};
    void deleteTenantInfo() { this->tenantInfo_ = nullptr;};
    inline const PushNotificationsRequestTenantInfo & tenantInfo() const { DARABONBA_PTR_GET_CONST(tenantInfo_, PushNotificationsRequestTenantInfo) };
    inline PushNotificationsRequestTenantInfo tenantInfo() { DARABONBA_PTR_GET(tenantInfo_, PushNotificationsRequestTenantInfo) };
    inline PushNotificationsRequest& setTenantInfo(const PushNotificationsRequestTenantInfo & tenantInfo) { DARABONBA_PTR_SET_VALUE(tenantInfo_, tenantInfo) };
    inline PushNotificationsRequest& setTenantInfo(PushNotificationsRequestTenantInfo && tenantInfo) { DARABONBA_PTR_SET_RVALUE(tenantInfo_, tenantInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<PushNotificationsRequestNotificationUnicastRequest> notificationUnicastRequest_ = nullptr;
    std::shared_ptr<PushNotificationsRequestTenantInfo> tenantInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
