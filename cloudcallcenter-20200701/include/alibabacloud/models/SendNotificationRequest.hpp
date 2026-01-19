// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDNOTIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDNOTIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudCallCenter20200701
{
namespace Models
{
  class SendNotificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendNotificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MessageBody, messageBody_);
      DARABONBA_PTR_TO_JSON(NotificationTarget, notificationTarget_);
      DARABONBA_PTR_TO_JSON(NotificationType, notificationType_);
      DARABONBA_PTR_TO_JSON(ShardingKey, shardingKey_);
    };
    friend void from_json(const Darabonba::Json& j, SendNotificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MessageBody, messageBody_);
      DARABONBA_PTR_FROM_JSON(NotificationTarget, notificationTarget_);
      DARABONBA_PTR_FROM_JSON(NotificationType, notificationType_);
      DARABONBA_PTR_FROM_JSON(ShardingKey, shardingKey_);
    };
    SendNotificationRequest() = default ;
    SendNotificationRequest(const SendNotificationRequest &) = default ;
    SendNotificationRequest(SendNotificationRequest &&) = default ;
    SendNotificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendNotificationRequest() = default ;
    SendNotificationRequest& operator=(const SendNotificationRequest &) = default ;
    SendNotificationRequest& operator=(SendNotificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->messageBody_ == nullptr && this->notificationTarget_ == nullptr && this->notificationType_ == nullptr && this->shardingKey_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendNotificationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // messageBody Field Functions 
    bool hasMessageBody() const { return this->messageBody_ != nullptr;};
    void deleteMessageBody() { this->messageBody_ = nullptr;};
    inline string getMessageBody() const { DARABONBA_PTR_GET_DEFAULT(messageBody_, "") };
    inline SendNotificationRequest& setMessageBody(string messageBody) { DARABONBA_PTR_SET_VALUE(messageBody_, messageBody) };


    // notificationTarget Field Functions 
    bool hasNotificationTarget() const { return this->notificationTarget_ != nullptr;};
    void deleteNotificationTarget() { this->notificationTarget_ = nullptr;};
    inline string getNotificationTarget() const { DARABONBA_PTR_GET_DEFAULT(notificationTarget_, "") };
    inline SendNotificationRequest& setNotificationTarget(string notificationTarget) { DARABONBA_PTR_SET_VALUE(notificationTarget_, notificationTarget) };


    // notificationType Field Functions 
    bool hasNotificationType() const { return this->notificationType_ != nullptr;};
    void deleteNotificationType() { this->notificationType_ = nullptr;};
    inline string getNotificationType() const { DARABONBA_PTR_GET_DEFAULT(notificationType_, "") };
    inline SendNotificationRequest& setNotificationType(string notificationType) { DARABONBA_PTR_SET_VALUE(notificationType_, notificationType) };


    // shardingKey Field Functions 
    bool hasShardingKey() const { return this->shardingKey_ != nullptr;};
    void deleteShardingKey() { this->shardingKey_ = nullptr;};
    inline string getShardingKey() const { DARABONBA_PTR_GET_DEFAULT(shardingKey_, "") };
    inline SendNotificationRequest& setShardingKey(string shardingKey) { DARABONBA_PTR_SET_VALUE(shardingKey_, shardingKey) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> messageBody_ {};
    // This parameter is required.
    shared_ptr<string> notificationTarget_ {};
    // This parameter is required.
    shared_ptr<string> notificationType_ {};
    // This parameter is required.
    shared_ptr<string> shardingKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudCallCenter20200701
#endif
