// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class SendMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MqttTopic, mqttTopic_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MqttTopic, mqttTopic_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
    };
    SendMessageRequest() = default ;
    SendMessageRequest(const SendMessageRequest &) = default ;
    SendMessageRequest(SendMessageRequest &&) = default ;
    SendMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageRequest() = default ;
    SendMessageRequest& operator=(const SendMessageRequest &) = default ;
    SendMessageRequest& operator=(SendMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->mqttTopic_ == nullptr && this->payload_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SendMessageRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqttTopic Field Functions 
    bool hasMqttTopic() const { return this->mqttTopic_ != nullptr;};
    void deleteMqttTopic() { this->mqttTopic_ = nullptr;};
    inline string getMqttTopic() const { DARABONBA_PTR_GET_DEFAULT(mqttTopic_, "") };
    inline SendMessageRequest& setMqttTopic(string mqttTopic) { DARABONBA_PTR_SET_VALUE(mqttTopic_, mqttTopic) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline SendMessageRequest& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


  protected:
    // The ID of the ApsaraMQ for MQTT instance. The ID must be consistent with the ID of the instance that the ApsaraMQ for MQTT client uses. You can view the instance ID in the **Basic Information** section on the **Instance Details** page that corresponds to the instance in the [ApsaraMQ for MQTT console](https://mqtt.console.aliyun.com).
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The topic to which you want to send a message on the ApsaraMQ for MQTT instance.
    // 
    // This parameter is required.
    shared_ptr<string> mqttTopic_ {};
    // The message content, which is the payload of the message. We recommend that you encode the content in Base64 to prevent non-printable characters from being transmitted.
    // 
    // This parameter is required.
    shared_ptr<string> payload_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
