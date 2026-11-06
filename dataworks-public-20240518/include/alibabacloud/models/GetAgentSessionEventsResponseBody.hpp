// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAgentSessionEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionEventsResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionEventsResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAgentSessionEventsResponseBody() = default ;
    GetAgentSessionEventsResponseBody(const GetAgentSessionEventsResponseBody &) = default ;
    GetAgentSessionEventsResponseBody(GetAgentSessionEventsResponseBody &&) = default ;
    GetAgentSessionEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionEventsResponseBody() = default ;
    GetAgentSessionEventsResponseBody& operator=(const GetAgentSessionEventsResponseBody &) = default ;
    GetAgentSessionEventsResponseBody& operator=(GetAgentSessionEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->event_ == nullptr && this->id_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline     const Darabonba::Json & getData() const { DARABONBA_GET(data_) };
    Darabonba::Json & getData() { DARABONBA_GET(data_) };
    inline GetAgentSessionEventsResponseBody& setData(const Darabonba::Json & data) { DARABONBA_SET_VALUE(data_, data) };
    inline GetAgentSessionEventsResponseBody& setData(Darabonba::Json && data) { DARABONBA_SET_RVALUE(data_, data) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline GetAgentSessionEventsResponseBody& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetAgentSessionEventsResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAgentSessionEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The event data of the current frame. The content varies with the Event type and should be parsed according to the event type. Preserve the original session, turn, and tool invocation identifiers.
    Darabonba::Json data_ {};
    // The SSE event type, such as session_update. Process control frames and business frames separately.
    shared_ptr<string> event_ {};
    // The remote SSE event cursor. Save it after consumption for subsequent resumption using Last-Event-Id. Some control frames may not have a cursor. Do not generate a local cursor for them.
    shared_ptr<string> id_ {};
    // The request ID of the current OpenAPI subscription request, used to troubleshoot subscription failures. It is not an event cursor or an interactive question ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
