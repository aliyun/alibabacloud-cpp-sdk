// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PushNotificationsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNotificationsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NotificationUnicastRequest, notificationUnicastRequestShrink_);
      DARABONBA_PTR_TO_JSON(TenantInfo, tenantInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PushNotificationsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NotificationUnicastRequest, notificationUnicastRequestShrink_);
      DARABONBA_PTR_FROM_JSON(TenantInfo, tenantInfoShrink_);
    };
    PushNotificationsShrinkRequest() = default ;
    PushNotificationsShrinkRequest(const PushNotificationsShrinkRequest &) = default ;
    PushNotificationsShrinkRequest(PushNotificationsShrinkRequest &&) = default ;
    PushNotificationsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNotificationsShrinkRequest() = default ;
    PushNotificationsShrinkRequest& operator=(const PushNotificationsShrinkRequest &) = default ;
    PushNotificationsShrinkRequest& operator=(PushNotificationsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->notificationUnicastRequestShrink_ != nullptr
        && this->tenantInfoShrink_ != nullptr; };
    // notificationUnicastRequestShrink Field Functions 
    bool hasNotificationUnicastRequestShrink() const { return this->notificationUnicastRequestShrink_ != nullptr;};
    void deleteNotificationUnicastRequestShrink() { this->notificationUnicastRequestShrink_ = nullptr;};
    inline string notificationUnicastRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationUnicastRequestShrink_, "") };
    inline PushNotificationsShrinkRequest& setNotificationUnicastRequestShrink(string notificationUnicastRequestShrink) { DARABONBA_PTR_SET_VALUE(notificationUnicastRequestShrink_, notificationUnicastRequestShrink) };


    // tenantInfoShrink Field Functions 
    bool hasTenantInfoShrink() const { return this->tenantInfoShrink_ != nullptr;};
    void deleteTenantInfoShrink() { this->tenantInfoShrink_ = nullptr;};
    inline string tenantInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantInfoShrink_, "") };
    inline PushNotificationsShrinkRequest& setTenantInfoShrink(string tenantInfoShrink) { DARABONBA_PTR_SET_VALUE(tenantInfoShrink_, tenantInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> notificationUnicastRequestShrink_ = nullptr;
    std::shared_ptr<string> tenantInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
