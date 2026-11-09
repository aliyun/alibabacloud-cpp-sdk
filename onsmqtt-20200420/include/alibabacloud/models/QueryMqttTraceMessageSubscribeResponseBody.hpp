// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGESUBSCRIBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGESUBSCRIBERESPONSEBODY_HPP_
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
  class QueryMqttTraceMessageSubscribeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceMessageSubscribeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MessageTraceLists, messageTraceLists_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceMessageSubscribeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MessageTraceLists, messageTraceLists_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryMqttTraceMessageSubscribeResponseBody() = default ;
    QueryMqttTraceMessageSubscribeResponseBody(const QueryMqttTraceMessageSubscribeResponseBody &) = default ;
    QueryMqttTraceMessageSubscribeResponseBody(QueryMqttTraceMessageSubscribeResponseBody &&) = default ;
    QueryMqttTraceMessageSubscribeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceMessageSubscribeResponseBody() = default ;
    QueryMqttTraceMessageSubscribeResponseBody& operator=(const QueryMqttTraceMessageSubscribeResponseBody &) = default ;
    QueryMqttTraceMessageSubscribeResponseBody& operator=(QueryMqttTraceMessageSubscribeResponseBody &&) = default ;
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
      // - **sub**: The ApsaraMQ for MQTT client subscribes to the message.
      // 
      // - **push_offline**: The ApsaraMQ for MQTT broker pushes the offline message to the ApsaraMQ for MQTT client.
      shared_ptr<string> action_ {};
      // The code returned for the action on the message. Valid values:
      // 
      // - **mqtt.trace.action.msg.sub**: The value that is returned if the value of Action is **sub**.
      // 
      // - **mqtt.trace.action.msg.push.offline**: The value that is returned if the value of Action is **push_offline**.
      shared_ptr<string> actionCode_ {};
      // The returned information for the action on the message. Valid values:
      // 
      // - **Push To Mqtt Client**: The value that is returned if the value of Action is **sub**.
      // 
      // - **Push Offline Msg To Mqtt Client**: The value that is returned if the value of Action is **push_offline**.
      shared_ptr<string> actionInfo_ {};
      // The ID of the client that subscribes to the message.
      shared_ptr<string> clientId_ {};
      // The message ID.
      shared_ptr<string> msgId_ {};
      // The time when the message was delivered.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->messageTraceLists_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMqttTraceMessageSubscribeResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // messageTraceLists Field Functions 
    bool hasMessageTraceLists() const { return this->messageTraceLists_ != nullptr;};
    void deleteMessageTraceLists() { this->messageTraceLists_ = nullptr;};
    inline const vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists> & getMessageTraceLists() const { DARABONBA_PTR_GET_CONST(messageTraceLists_, vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists>) };
    inline vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists> getMessageTraceLists() { DARABONBA_PTR_GET(messageTraceLists_, vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists>) };
    inline QueryMqttTraceMessageSubscribeResponseBody& setMessageTraceLists(const vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists> & messageTraceLists) { DARABONBA_PTR_SET_VALUE(messageTraceLists_, messageTraceLists) };
    inline QueryMqttTraceMessageSubscribeResponseBody& setMessageTraceLists(vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists> && messageTraceLists) { DARABONBA_PTR_SET_RVALUE(messageTraceLists_, messageTraceLists) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMqttTraceMessageSubscribeResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMqttTraceMessageSubscribeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryMqttTraceMessageSubscribeResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // The delivery trace of the queried message.
    shared_ptr<vector<QueryMqttTraceMessageSubscribeResponseBody::MessageTraceLists>> messageTraceLists_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique ID that the system generates for the request. You can use the ID to troubleshoot issues. This parameter is a common parameter.
    shared_ptr<string> requestId_ {};
    // The returned delivery traces.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
