// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class UpdateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_TO_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_TO_JSON(DefaultTopic, defaultTopic_);
      DARABONBA_PTR_TO_JSON(EventSubscriptionsJson, eventSubscriptionsJson_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MqInstanceId, mqInstanceId_);
      DARABONBA_PTR_TO_JSON(MqType, mqType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProducerId, producerId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPoint, accessPoint_);
      DARABONBA_PTR_FROM_JSON(AliyunUid, aliyunUid_);
      DARABONBA_PTR_FROM_JSON(DefaultTopic, defaultTopic_);
      DARABONBA_PTR_FROM_JSON(EventSubscriptionsJson, eventSubscriptionsJson_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MqInstanceId, mqInstanceId_);
      DARABONBA_PTR_FROM_JSON(MqType, mqType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProducerId, producerId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest(UpdateSubscriptionRequest &&) = default ;
    UpdateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest& operator=(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest& operator=(UpdateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPoint_ == nullptr
        && this->aliyunUid_ == nullptr && this->defaultTopic_ == nullptr && this->eventSubscriptionsJson_ == nullptr && this->instanceId_ == nullptr && this->mqInstanceId_ == nullptr
        && this->mqType_ == nullptr && this->password_ == nullptr && this->producerId_ == nullptr && this->username_ == nullptr; };
    // accessPoint Field Functions 
    bool hasAccessPoint() const { return this->accessPoint_ != nullptr;};
    void deleteAccessPoint() { this->accessPoint_ = nullptr;};
    inline string getAccessPoint() const { DARABONBA_PTR_GET_DEFAULT(accessPoint_, "") };
    inline UpdateSubscriptionRequest& setAccessPoint(string accessPoint) { DARABONBA_PTR_SET_VALUE(accessPoint_, accessPoint) };


    // aliyunUid Field Functions 
    bool hasAliyunUid() const { return this->aliyunUid_ != nullptr;};
    void deleteAliyunUid() { this->aliyunUid_ = nullptr;};
    inline int64_t getAliyunUid() const { DARABONBA_PTR_GET_DEFAULT(aliyunUid_, 0L) };
    inline UpdateSubscriptionRequest& setAliyunUid(int64_t aliyunUid) { DARABONBA_PTR_SET_VALUE(aliyunUid_, aliyunUid) };


    // defaultTopic Field Functions 
    bool hasDefaultTopic() const { return this->defaultTopic_ != nullptr;};
    void deleteDefaultTopic() { this->defaultTopic_ = nullptr;};
    inline string getDefaultTopic() const { DARABONBA_PTR_GET_DEFAULT(defaultTopic_, "") };
    inline UpdateSubscriptionRequest& setDefaultTopic(string defaultTopic) { DARABONBA_PTR_SET_VALUE(defaultTopic_, defaultTopic) };


    // eventSubscriptionsJson Field Functions 
    bool hasEventSubscriptionsJson() const { return this->eventSubscriptionsJson_ != nullptr;};
    void deleteEventSubscriptionsJson() { this->eventSubscriptionsJson_ = nullptr;};
    inline string getEventSubscriptionsJson() const { DARABONBA_PTR_GET_DEFAULT(eventSubscriptionsJson_, "") };
    inline UpdateSubscriptionRequest& setEventSubscriptionsJson(string eventSubscriptionsJson) { DARABONBA_PTR_SET_VALUE(eventSubscriptionsJson_, eventSubscriptionsJson) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateSubscriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqInstanceId Field Functions 
    bool hasMqInstanceId() const { return this->mqInstanceId_ != nullptr;};
    void deleteMqInstanceId() { this->mqInstanceId_ = nullptr;};
    inline string getMqInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqInstanceId_, "") };
    inline UpdateSubscriptionRequest& setMqInstanceId(string mqInstanceId) { DARABONBA_PTR_SET_VALUE(mqInstanceId_, mqInstanceId) };


    // mqType Field Functions 
    bool hasMqType() const { return this->mqType_ != nullptr;};
    void deleteMqType() { this->mqType_ = nullptr;};
    inline string getMqType() const { DARABONBA_PTR_GET_DEFAULT(mqType_, "") };
    inline UpdateSubscriptionRequest& setMqType(string mqType) { DARABONBA_PTR_SET_VALUE(mqType_, mqType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline UpdateSubscriptionRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // producerId Field Functions 
    bool hasProducerId() const { return this->producerId_ != nullptr;};
    void deleteProducerId() { this->producerId_ = nullptr;};
    inline string getProducerId() const { DARABONBA_PTR_GET_DEFAULT(producerId_, "") };
    inline UpdateSubscriptionRequest& setProducerId(string producerId) { DARABONBA_PTR_SET_VALUE(producerId_, producerId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline UpdateSubscriptionRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The endpoint for MQ. The service endpoint for webhook.
    // 
    // This parameter is required.
    shared_ptr<string> accessPoint_ {};
    // Leave blank.
    shared_ptr<int64_t> aliyunUid_ {};
    // For MQ, enter the topic name. For webhook, enter Topic_Webhook.
    shared_ptr<string> defaultTopic_ {};
    // The message subscription checklist.
    // 
    // This parameter is required.
    shared_ptr<string> eventSubscriptionsJson_ {};
    // The ID of the Cloud Contact Center instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The MQ instance ID. Specify this only when MqType is rocketmq4 or rocketmq5.
    shared_ptr<string> mqInstanceId_ {};
    // The message push type.
    // 
    // - rocketmq4
    // 
    // - rocketmq5
    // 
    // - webhook
    shared_ptr<string> mqType_ {};
    // The MQ password. Specify this only when MqType is rocketmq5.
    shared_ptr<string> password_ {};
    // For Message Queue (MQ), enter the Group ID. For webhook, enter PID_Webhook.
    shared_ptr<string> producerId_ {};
    // The MQ username. Specify this only when MqType is rocketmq5.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
