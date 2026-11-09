// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGEPUBLISHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGEPUBLISHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryMqttTraceMessagePublishResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceMessagePublishResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageTraceLists, messageTraceLists_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceMessagePublishResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageTraceLists, messageTraceLists_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMqttTraceMessagePublishResponseBody() = default ;
    QueryMqttTraceMessagePublishResponseBody(const QueryMqttTraceMessagePublishResponseBody &) = default ;
    QueryMqttTraceMessagePublishResponseBody(QueryMqttTraceMessagePublishResponseBody &&) = default ;
    QueryMqttTraceMessagePublishResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceMessagePublishResponseBody() = default ;
    QueryMqttTraceMessagePublishResponseBody& operator=(const QueryMqttTraceMessagePublishResponseBody &) = default ;
    QueryMqttTraceMessagePublishResponseBody& operator=(QueryMqttTraceMessagePublishResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MessageTraceLists : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageTraceLists& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ActionCode, actionCode_);
        DARABONBA_PTR_TO_JSON(ActionInfo, actionInfo_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(MsgId, msgId_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, MessageTraceLists& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ActionCode, actionCode_);
        DARABONBA_PTR_FROM_JSON(ActionInfo, actionInfo_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      MessageTraceLists() = default ;
      MessageTraceLists(const MessageTraceLists &) = default ;
      MessageTraceLists(MessageTraceLists &&) = default ;
      MessageTraceLists(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageTraceLists() = default ;
      MessageTraceLists& operator=(const MessageTraceLists &) = default ;
      MessageTraceLists& operator=(MessageTraceLists &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionCode_ == nullptr && this->actionInfo_ == nullptr && this->clientId_ == nullptr && this->msgId_ == nullptr && this->time_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline MessageTraceLists& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionCode Field Functions 
      bool hasActionCode() const { return this->actionCode_ != nullptr;};
      void deleteActionCode() { this->actionCode_ = nullptr;};
      inline string getActionCode() const { DARABONBA_PTR_GET_DEFAULT(actionCode_, "") };
      inline MessageTraceLists& setActionCode(string actionCode) { DARABONBA_PTR_SET_VALUE(actionCode_, actionCode) };


      // actionInfo Field Functions 
      bool hasActionInfo() const { return this->actionInfo_ != nullptr;};
      void deleteActionInfo() { this->actionInfo_ = nullptr;};
      inline string getActionInfo() const { DARABONBA_PTR_GET_DEFAULT(actionInfo_, "") };
      inline MessageTraceLists& setActionInfo(string actionInfo) { DARABONBA_PTR_SET_VALUE(actionInfo_, actionInfo) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline MessageTraceLists& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // msgId Field Functions 
      bool hasMsgId() const { return this->msgId_ != nullptr;};
      void deleteMsgId() { this->msgId_ = nullptr;};
      inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
      inline MessageTraceLists& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline MessageTraceLists& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The action on the message. Valid values:
      // 
      // *   **pub_mqtt**: indicates that the message was sent by an ApsaraMQ for MQTT client.
      // *   **pub_mq**: indicates that the message was sent by an ApsaraMQ for RocketMQ client.
      shared_ptr<string> action_ {};
      // The returned code for the action on the message. Valid values:
      // 
      // *   **mqtt.trace.action.msg.pub.mqtt**: This value is returned if the value of Action is **pub_mqtt**.
      // *   **mqtt.trace.action.msg.pub.mq**: This value is returned if the value of Action is **pub_mq**.
      shared_ptr<string> actionCode_ {};
      // The returned information for the action on the message. Valid values:
      // 
      // *   **Pub From Mqtt Client**: This value is returned if the value of Action is **pub_mqtt**.
      // *   **Pub From MQ**: This value is returned if the value of Action is **pub_mq**.
      shared_ptr<string> actionInfo_ {};
      // The ID of the client that sends the message.
      shared_ptr<string> clientId_ {};
      // The message ID.
      shared_ptr<string> msgId_ {};
      // The time when the message was sent.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->messageTraceLists_ == nullptr
        && this->requestId_ == nullptr; };
    // messageTraceLists Field Functions 
    bool hasMessageTraceLists() const { return this->messageTraceLists_ != nullptr;};
    void deleteMessageTraceLists() { this->messageTraceLists_ = nullptr;};
    inline const vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists> & getMessageTraceLists() const { DARABONBA_PTR_GET_CONST(messageTraceLists_, vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists>) };
    inline vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists> getMessageTraceLists() { DARABONBA_PTR_GET(messageTraceLists_, vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists>) };
    inline QueryMqttTraceMessagePublishResponseBody& setMessageTraceLists(const vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists> & messageTraceLists) { DARABONBA_PTR_SET_VALUE(messageTraceLists_, messageTraceLists) };
    inline QueryMqttTraceMessagePublishResponseBody& setMessageTraceLists(vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists> && messageTraceLists) { DARABONBA_PTR_SET_RVALUE(messageTraceLists_, messageTraceLists) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMqttTraceMessagePublishResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The message traces.
    shared_ptr<vector<QueryMqttTraceMessagePublishResponseBody::MessageTraceLists>> messageTraceLists_ {};
    // The request ID. You can use the ID to troubleshoot issues. This parameter is a common parameter.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
