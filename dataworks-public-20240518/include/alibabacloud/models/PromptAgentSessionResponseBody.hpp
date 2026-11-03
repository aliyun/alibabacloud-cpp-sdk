// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMPTAGENTSESSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PROMPTAGENTSESSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class PromptAgentSessionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PromptAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_ANY_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, PromptAgentSessionResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Jsonrpc, jsonrpc_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_ANY_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    PromptAgentSessionResponseBody() = default ;
    PromptAgentSessionResponseBody(const PromptAgentSessionResponseBody &) = default ;
    PromptAgentSessionResponseBody(PromptAgentSessionResponseBody &&) = default ;
    PromptAgentSessionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PromptAgentSessionResponseBody() = default ;
    PromptAgentSessionResponseBody& operator=(const PromptAgentSessionResponseBody &) = default ;
    PromptAgentSessionResponseBody& operator=(PromptAgentSessionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Meta : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Meta& obj) { 
        DARABONBA_PTR_TO_JSON(EventCursor, eventCursor_);
      };
      friend void from_json(const Darabonba::Json& j, Meta& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCursor, eventCursor_);
      };
      Meta() = default ;
      Meta(const Meta &) = default ;
      Meta(Meta &&) = default ;
      Meta(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Meta() = default ;
      Meta& operator=(const Meta &) = default ;
      Meta& operator=(Meta &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventCursor : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventCursor& obj) { 
          DARABONBA_PTR_TO_JSON(EventEpoch, eventEpoch_);
          DARABONBA_PTR_TO_JSON(EventId, eventId_);
          DARABONBA_PTR_TO_JSON(EventType, eventType_);
          DARABONBA_PTR_TO_JSON(PromptId, promptId_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        };
        friend void from_json(const Darabonba::Json& j, EventCursor& obj) { 
          DARABONBA_PTR_FROM_JSON(EventEpoch, eventEpoch_);
          DARABONBA_PTR_FROM_JSON(EventId, eventId_);
          DARABONBA_PTR_FROM_JSON(EventType, eventType_);
          DARABONBA_PTR_FROM_JSON(PromptId, promptId_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        };
        EventCursor() = default ;
        EventCursor(const EventCursor &) = default ;
        EventCursor(EventCursor &&) = default ;
        EventCursor(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventCursor() = default ;
        EventCursor& operator=(const EventCursor &) = default ;
        EventCursor& operator=(EventCursor &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventEpoch_ == nullptr
        && this->eventId_ == nullptr && this->eventType_ == nullptr && this->promptId_ == nullptr && this->sessionId_ == nullptr; };
        // eventEpoch Field Functions 
        bool hasEventEpoch() const { return this->eventEpoch_ != nullptr;};
        void deleteEventEpoch() { this->eventEpoch_ = nullptr;};
        inline string getEventEpoch() const { DARABONBA_PTR_GET_DEFAULT(eventEpoch_, "") };
        inline EventCursor& setEventEpoch(string eventEpoch) { DARABONBA_PTR_SET_VALUE(eventEpoch_, eventEpoch) };


        // eventId Field Functions 
        bool hasEventId() const { return this->eventId_ != nullptr;};
        void deleteEventId() { this->eventId_ = nullptr;};
        inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
        inline EventCursor& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


        // eventType Field Functions 
        bool hasEventType() const { return this->eventType_ != nullptr;};
        void deleteEventType() { this->eventType_ = nullptr;};
        inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
        inline EventCursor& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


        // promptId Field Functions 
        bool hasPromptId() const { return this->promptId_ != nullptr;};
        void deletePromptId() { this->promptId_ = nullptr;};
        inline string getPromptId() const { DARABONBA_PTR_GET_DEFAULT(promptId_, "") };
        inline EventCursor& setPromptId(string promptId) { DARABONBA_PTR_SET_VALUE(promptId_, promptId) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline EventCursor& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      protected:
        // The event stream generation identifier returned when the current prompt is accepted. It is paired with EventId during resumption. Pass this value as is to the EventEpoch query parameter of GetAgentSessionEvents to verify the same event stream.
        shared_ptr<string> eventEpoch_ {};
        // The integer ID of the current native event, returned as a decimal string. The client saves it after fully processing the event, and passes this value as the Last-Event-Id HTTP header of GetAgentSessionEvents during resumption to continue receiving subsequent events.
        shared_ptr<string> eventId_ {};
        // The type of the current native event, obtained from the type field of the native event. The examples do not constitute a fixed enumeration.
        shared_ptr<string> eventType_ {};
        // The execution identifier returned when the current prompt is accepted. It is used to associate the current execution with its events.
        shared_ptr<string> promptId_ {};
        // The identifier of the current DataAgent session. It is used to associate the event with its session.
        shared_ptr<string> sessionId_ {};
      };

      virtual bool empty() const override { return this->eventCursor_ == nullptr; };
      // eventCursor Field Functions 
      bool hasEventCursor() const { return this->eventCursor_ != nullptr;};
      void deleteEventCursor() { this->eventCursor_ = nullptr;};
      inline const Meta::EventCursor & getEventCursor() const { DARABONBA_PTR_GET_CONST(eventCursor_, Meta::EventCursor) };
      inline Meta::EventCursor getEventCursor() { DARABONBA_PTR_GET(eventCursor_, Meta::EventCursor) };
      inline Meta& setEventCursor(const Meta::EventCursor & eventCursor) { DARABONBA_PTR_SET_VALUE(eventCursor_, eventCursor) };
      inline Meta& setEventCursor(Meta::EventCursor && eventCursor) { DARABONBA_PTR_SET_RVALUE(eventCursor_, eventCursor) };


    protected:
      // The resumption cursor of the current native event. Carried only by verified native events. The client saves the cursor after fully processing the event, and uses the EventId and EventEpoch in it to resume the subscription to GetAgentSessionEvents after a disconnection without resending the prompt.
      shared_ptr<Meta::EventCursor> eventCursor_ {};
    };

    virtual bool empty() const override { return this->error_ == nullptr
        && this->id_ == nullptr && this->jsonrpc_ == nullptr && this->meta_ == nullptr && this->method_ == nullptr && this->params_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->timestamp_ == nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline     const Darabonba::Json & getError() const { DARABONBA_GET(error_) };
    Darabonba::Json & getError() { DARABONBA_GET(error_) };
    inline PromptAgentSessionResponseBody& setError(const Darabonba::Json & error) { DARABONBA_SET_VALUE(error_, error) };
    inline PromptAgentSessionResponseBody& setError(Darabonba::Json && error) { DARABONBA_SET_RVALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PromptAgentSessionResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jsonrpc Field Functions 
    bool hasJsonrpc() const { return this->jsonrpc_ != nullptr;};
    void deleteJsonrpc() { this->jsonrpc_ = nullptr;};
    inline string getJsonrpc() const { DARABONBA_PTR_GET_DEFAULT(jsonrpc_, "") };
    inline PromptAgentSessionResponseBody& setJsonrpc(string jsonrpc) { DARABONBA_PTR_SET_VALUE(jsonrpc_, jsonrpc) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline const PromptAgentSessionResponseBody::Meta & getMeta() const { DARABONBA_PTR_GET_CONST(meta_, PromptAgentSessionResponseBody::Meta) };
    inline PromptAgentSessionResponseBody::Meta getMeta() { DARABONBA_PTR_GET(meta_, PromptAgentSessionResponseBody::Meta) };
    inline PromptAgentSessionResponseBody& setMeta(const PromptAgentSessionResponseBody::Meta & meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };
    inline PromptAgentSessionResponseBody& setMeta(PromptAgentSessionResponseBody::Meta && meta) { DARABONBA_PTR_SET_RVALUE(meta_, meta) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline PromptAgentSessionResponseBody& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline     const Darabonba::Json & getParams() const { DARABONBA_GET(params_) };
    Darabonba::Json & getParams() { DARABONBA_GET(params_) };
    inline PromptAgentSessionResponseBody& setParams(const Darabonba::Json & params) { DARABONBA_SET_VALUE(params_, params) };
    inline PromptAgentSessionResponseBody& setParams(Darabonba::Json && params) { DARABONBA_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PromptAgentSessionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
    Darabonba::Json & getResult() { DARABONBA_GET(result_) };
    inline PromptAgentSessionResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline PromptAgentSessionResponseBody& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline PromptAgentSessionResponseBody& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The error message in the SSE frame. The returned content complies with the open-source Agent Client Protocol (ACP) specification. For more information, see https://agentclientprotocol.com/protocol/prompt-turn.
    Darabonba::Json error_ {};
    // The ID passed by the requester. The value is returned as is.
    shared_ptr<string> id_ {};
    // The JSON-RPC version. Set the value to 2.0.
    shared_ptr<string> jsonrpc_ {};
    // Carried only by verified native events. The client saves the EventCursor after fully applying the event, and uses EventId and EventEpoch to resume the subscription to GetAgentSessionEvents after a disconnection. Common subscription errors do not contain proof of the native execution terminal state.
    shared_ptr<PromptAgentSessionResponseBody::Meta> meta_ {};
    // The method of the SSE. The returned content complies with the open-source Agent Client Protocol (ACP) specification. For more information, see https://agentclientprotocol.com/protocol/prompt-turn.
    shared_ptr<string> method_ {};
    // The params of the SSE. The returned content complies with the open-source Agent Client Protocol (ACP) specification. For more information, see https://agentclientprotocol.com/protocol/prompt-turn.
    Darabonba::Json params_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The result set of the SSE frame. The returned content complies with the open-source Agent Client Protocol (ACP) specification. For more information, see https://agentclientprotocol.com/protocol/prompt-turn.
    Darabonba::Json result_ {};
    // The timestamp.
    shared_ptr<int64_t> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
