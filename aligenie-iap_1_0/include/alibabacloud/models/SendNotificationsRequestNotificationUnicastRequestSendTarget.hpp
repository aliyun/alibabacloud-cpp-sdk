// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUESTSENDTARGET_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUESTSENDTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class SendNotificationsRequestNotificationUnicastRequestSendTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationsRequestNotificationUnicastRequestSendTarget& obj) { 
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationsRequestNotificationUnicastRequestSendTarget& obj) { 
    };
    SendNotificationsRequestNotificationUnicastRequestSendTarget() = default ;
    SendNotificationsRequestNotificationUnicastRequestSendTarget(const SendNotificationsRequestNotificationUnicastRequestSendTarget &) = default ;
    SendNotificationsRequestNotificationUnicastRequestSendTarget(SendNotificationsRequestNotificationUnicastRequestSendTarget &&) = default ;
    SendNotificationsRequestNotificationUnicastRequestSendTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationsRequestNotificationUnicastRequestSendTarget() = default ;
    SendNotificationsRequestNotificationUnicastRequestSendTarget& operator=(const SendNotificationsRequestNotificationUnicastRequestSendTarget &) = default ;
    SendNotificationsRequestNotificationUnicastRequestSendTarget& operator=(SendNotificationsRequestNotificationUnicastRequestSendTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { ; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
