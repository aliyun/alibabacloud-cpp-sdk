// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMQTTTICKETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMQTTTICKETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class GetMqttTicketResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMqttTicketResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ExpireTimeStamp, expireTimeStamp_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MqttEndpoint, mqttEndpoint_);
      DARABONBA_PTR_TO_JSON(MqttGroupId, mqttGroupId_);
      DARABONBA_PTR_TO_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_TO_JSON(MqttPassword, mqttPassword_);
      DARABONBA_PTR_TO_JSON(MqttUsername, mqttUsername_);
      DARABONBA_PTR_TO_JSON(MqttVPCEndpoint, mqttVPCEndpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicList, topicList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMqttTicketResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeStamp, expireTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MqttEndpoint, mqttEndpoint_);
      DARABONBA_PTR_FROM_JSON(MqttGroupId, mqttGroupId_);
      DARABONBA_PTR_FROM_JSON(MqttInstanceId, mqttInstanceId_);
      DARABONBA_PTR_FROM_JSON(MqttPassword, mqttPassword_);
      DARABONBA_PTR_FROM_JSON(MqttUsername, mqttUsername_);
      DARABONBA_PTR_FROM_JSON(MqttVPCEndpoint, mqttVPCEndpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
    };
    GetMqttTicketResponseBody() = default ;
    GetMqttTicketResponseBody(const GetMqttTicketResponseBody &) = default ;
    GetMqttTicketResponseBody(GetMqttTicketResponseBody &&) = default ;
    GetMqttTicketResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMqttTicketResponseBody() = default ;
    GetMqttTicketResponseBody& operator=(const GetMqttTicketResponseBody &) = default ;
    GetMqttTicketResponseBody& operator=(GetMqttTicketResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->expireTimeStamp_ == nullptr && this->message_ == nullptr && this->mqttEndpoint_ == nullptr && this->mqttGroupId_ == nullptr && this->mqttInstanceId_ == nullptr
        && this->mqttPassword_ == nullptr && this->mqttUsername_ == nullptr && this->mqttVPCEndpoint_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->topicList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMqttTicketResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // expireTimeStamp Field Functions 
    bool hasExpireTimeStamp() const { return this->expireTimeStamp_ != nullptr;};
    void deleteExpireTimeStamp() { this->expireTimeStamp_ = nullptr;};
    inline string getExpireTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimeStamp_, "") };
    inline GetMqttTicketResponseBody& setExpireTimeStamp(string expireTimeStamp) { DARABONBA_PTR_SET_VALUE(expireTimeStamp_, expireTimeStamp) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMqttTicketResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // mqttEndpoint Field Functions 
    bool hasMqttEndpoint() const { return this->mqttEndpoint_ != nullptr;};
    void deleteMqttEndpoint() { this->mqttEndpoint_ = nullptr;};
    inline string getMqttEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mqttEndpoint_, "") };
    inline GetMqttTicketResponseBody& setMqttEndpoint(string mqttEndpoint) { DARABONBA_PTR_SET_VALUE(mqttEndpoint_, mqttEndpoint) };


    // mqttGroupId Field Functions 
    bool hasMqttGroupId() const { return this->mqttGroupId_ != nullptr;};
    void deleteMqttGroupId() { this->mqttGroupId_ = nullptr;};
    inline string getMqttGroupId() const { DARABONBA_PTR_GET_DEFAULT(mqttGroupId_, "") };
    inline GetMqttTicketResponseBody& setMqttGroupId(string mqttGroupId) { DARABONBA_PTR_SET_VALUE(mqttGroupId_, mqttGroupId) };


    // mqttInstanceId Field Functions 
    bool hasMqttInstanceId() const { return this->mqttInstanceId_ != nullptr;};
    void deleteMqttInstanceId() { this->mqttInstanceId_ = nullptr;};
    inline string getMqttInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mqttInstanceId_, "") };
    inline GetMqttTicketResponseBody& setMqttInstanceId(string mqttInstanceId) { DARABONBA_PTR_SET_VALUE(mqttInstanceId_, mqttInstanceId) };


    // mqttPassword Field Functions 
    bool hasMqttPassword() const { return this->mqttPassword_ != nullptr;};
    void deleteMqttPassword() { this->mqttPassword_ = nullptr;};
    inline string getMqttPassword() const { DARABONBA_PTR_GET_DEFAULT(mqttPassword_, "") };
    inline GetMqttTicketResponseBody& setMqttPassword(string mqttPassword) { DARABONBA_PTR_SET_VALUE(mqttPassword_, mqttPassword) };


    // mqttUsername Field Functions 
    bool hasMqttUsername() const { return this->mqttUsername_ != nullptr;};
    void deleteMqttUsername() { this->mqttUsername_ = nullptr;};
    inline string getMqttUsername() const { DARABONBA_PTR_GET_DEFAULT(mqttUsername_, "") };
    inline GetMqttTicketResponseBody& setMqttUsername(string mqttUsername) { DARABONBA_PTR_SET_VALUE(mqttUsername_, mqttUsername) };


    // mqttVPCEndpoint Field Functions 
    bool hasMqttVPCEndpoint() const { return this->mqttVPCEndpoint_ != nullptr;};
    void deleteMqttVPCEndpoint() { this->mqttVPCEndpoint_ = nullptr;};
    inline string getMqttVPCEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mqttVPCEndpoint_, "") };
    inline GetMqttTicketResponseBody& setMqttVPCEndpoint(string mqttVPCEndpoint) { DARABONBA_PTR_SET_VALUE(mqttVPCEndpoint_, mqttVPCEndpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMqttTicketResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetMqttTicketResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicList Field Functions 
    bool hasTopicList() const { return this->topicList_ != nullptr;};
    void deleteTopicList() { this->topicList_ = nullptr;};
    inline string getTopicList() const { DARABONBA_PTR_GET_DEFAULT(topicList_, "") };
    inline GetMqttTicketResponseBody& setTopicList(string topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };


  protected:
    // The error code returned when the request fails. For example, `Client.Forbidden` indicates that the client is forbidden from establishing a connection.
    shared_ptr<string> code_ {};
    // The expiration time of the MQTT connection password. It is a UNIX timestamp in milliseconds and is returned as a string.
    shared_ptr<string> expireTimeStamp_ {};
    // The error message returned when the request fails. It corresponds to the error code.
    shared_ptr<string> message_ {};
    // The access endpoint for the MQTT client. Use the endpoint returned in this response to establish a connection.
    shared_ptr<string> mqttEndpoint_ {};
    // The MQTT group ID, used to concatenate the MQTT ClientId.
    shared_ptr<string> mqttGroupId_ {};
    // The ID of the MQTT instance, used for token authentication.
    shared_ptr<string> mqttInstanceId_ {};
    // The password used to establish an MQTT connection. It consists of publish and subscribe tokens in the format of `W|PublishToken|R|SubscribeToken`. Use the complete password returned in the response. The desensitized examples in the documentation cannot be used for connections.
    shared_ptr<string> mqttPassword_ {};
    // The username used to establish an MQTT connection. The format is `Token|AccessKeyId|InstanceId`. AccessKeyId and InstanceId are identifiers used by the server to generate credentials. Use the complete username returned in the response.
    shared_ptr<string> mqttUsername_ {};
    // The VPC access endpoint for MQTT. It is used by clients that meet the required VPC network access conditions.
    shared_ptr<string> mqttVPCEndpoint_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. A value of `true` indicates success, and a value of `false` indicates failure.
    shared_ptr<string> success_ {};
    // The topic list. Each element in the list contains `topic` (the topic name), `type` (the topic type), and `permission` (the permission). The list returned by this operation includes topics for publishing, tenant subscription, device subscription, and system subscription. The publish permission is `W`, and the subscribe permission is `R`.
    shared_ptr<string> topicList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
