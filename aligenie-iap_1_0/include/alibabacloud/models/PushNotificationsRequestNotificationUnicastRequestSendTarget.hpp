// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUESTSENDTARGET_HPP_
#define ALIBABACLOUD_MODELS_PUSHNOTIFICATIONSREQUESTNOTIFICATIONUNICASTREQUESTSENDTARGET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class PushNotificationsRequestNotificationUnicastRequestSendTarget : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushNotificationsRequestNotificationUnicastRequestSendTarget& obj) { 
      DARABONBA_PTR_TO_JSON(TargetIdentity, targetIdentity_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, PushNotificationsRequestNotificationUnicastRequestSendTarget& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetIdentity, targetIdentity_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    PushNotificationsRequestNotificationUnicastRequestSendTarget() = default ;
    PushNotificationsRequestNotificationUnicastRequestSendTarget(const PushNotificationsRequestNotificationUnicastRequestSendTarget &) = default ;
    PushNotificationsRequestNotificationUnicastRequestSendTarget(PushNotificationsRequestNotificationUnicastRequestSendTarget &&) = default ;
    PushNotificationsRequestNotificationUnicastRequestSendTarget(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushNotificationsRequestNotificationUnicastRequestSendTarget() = default ;
    PushNotificationsRequestNotificationUnicastRequestSendTarget& operator=(const PushNotificationsRequestNotificationUnicastRequestSendTarget &) = default ;
    PushNotificationsRequestNotificationUnicastRequestSendTarget& operator=(PushNotificationsRequestNotificationUnicastRequestSendTarget &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->targetIdentity_ != nullptr
        && this->targetType_ != nullptr; };
    // targetIdentity Field Functions 
    bool hasTargetIdentity() const { return this->targetIdentity_ != nullptr;};
    void deleteTargetIdentity() { this->targetIdentity_ = nullptr;};
    inline string targetIdentity() const { DARABONBA_PTR_GET_DEFAULT(targetIdentity_, "") };
    inline PushNotificationsRequestNotificationUnicastRequestSendTarget& setTargetIdentity(string targetIdentity) { DARABONBA_PTR_SET_VALUE(targetIdentity_, targetIdentity) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline PushNotificationsRequestNotificationUnicastRequestSendTarget& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<string> targetIdentity_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
