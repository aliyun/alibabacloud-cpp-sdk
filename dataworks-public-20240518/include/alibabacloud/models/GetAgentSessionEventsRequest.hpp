// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSESSIONEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSESSIONEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAgentSessionEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentSessionEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventEpoch, eventEpoch_);
      DARABONBA_PTR_TO_JSON(SessionCode, sessionCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentSessionEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventEpoch, eventEpoch_);
      DARABONBA_PTR_FROM_JSON(SessionCode, sessionCode_);
    };
    GetAgentSessionEventsRequest() = default ;
    GetAgentSessionEventsRequest(const GetAgentSessionEventsRequest &) = default ;
    GetAgentSessionEventsRequest(GetAgentSessionEventsRequest &&) = default ;
    GetAgentSessionEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentSessionEventsRequest() = default ;
    GetAgentSessionEventsRequest& operator=(const GetAgentSessionEventsRequest &) = default ;
    GetAgentSessionEventsRequest& operator=(GetAgentSessionEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventEpoch_ == nullptr
        && this->sessionCode_ == nullptr; };
    // eventEpoch Field Functions 
    bool hasEventEpoch() const { return this->eventEpoch_ != nullptr;};
    void deleteEventEpoch() { this->eventEpoch_ = nullptr;};
    inline string getEventEpoch() const { DARABONBA_PTR_GET_DEFAULT(eventEpoch_, "") };
    inline GetAgentSessionEventsRequest& setEventEpoch(string eventEpoch) { DARABONBA_PTR_SET_VALUE(eventEpoch_, eventEpoch) };


    // sessionCode Field Functions 
    bool hasSessionCode() const { return this->sessionCode_ != nullptr;};
    void deleteSessionCode() { this->sessionCode_ = nullptr;};
    inline string getSessionCode() const { DARABONBA_PTR_GET_DEFAULT(sessionCode_, "") };
    inline GetAgentSessionEventsRequest& setSessionCode(string sessionCode) { DARABONBA_PTR_SET_VALUE(sessionCode_, sessionCode) };


  protected:
    // The epoch identifier of the event stream, obtained from data.eventEpoch in the stream_open control frame of the server. Pass the original value only when Last-Event-Id of the same native session and the same epoch is provided. Omit this parameter when subscribing for the first time or when the epoch is not obtained. Do not construct it yourself or reuse it across native sessions.
    shared_ptr<string> eventEpoch_ {};
    // The ID of the target agent session. Set the value to the SessionId returned by CreateAgentSession. The parameter name for this API operation is SessionCode.
    // 
    // This parameter is required.
    shared_ptr<string> sessionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
