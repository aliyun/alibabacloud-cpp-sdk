// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMULATEDSYSTEMEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMULATEDSYSTEMEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateSimulatedSystemEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimulatedSystemEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EventIdSet, eventIdSet_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimulatedSystemEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EventIdSet, eventIdSet_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSimulatedSystemEventsResponseBody() = default ;
    CreateSimulatedSystemEventsResponseBody(const CreateSimulatedSystemEventsResponseBody &) = default ;
    CreateSimulatedSystemEventsResponseBody(CreateSimulatedSystemEventsResponseBody &&) = default ;
    CreateSimulatedSystemEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimulatedSystemEventsResponseBody() = default ;
    CreateSimulatedSystemEventsResponseBody& operator=(const CreateSimulatedSystemEventsResponseBody &) = default ;
    CreateSimulatedSystemEventsResponseBody& operator=(CreateSimulatedSystemEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EventIdSet : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EventIdSet& obj) { 
        DARABONBA_PTR_TO_JSON(EventId, eventId_);
      };
      friend void from_json(const Darabonba::Json& j, EventIdSet& obj) { 
        DARABONBA_PTR_FROM_JSON(EventId, eventId_);
      };
      EventIdSet() = default ;
      EventIdSet(const EventIdSet &) = default ;
      EventIdSet(EventIdSet &&) = default ;
      EventIdSet(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EventIdSet() = default ;
      EventIdSet& operator=(const EventIdSet &) = default ;
      EventIdSet& operator=(EventIdSet &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventId_ == nullptr; };
      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline const vector<string> & getEventId() const { DARABONBA_PTR_GET_CONST(eventId_, vector<string>) };
      inline vector<string> getEventId() { DARABONBA_PTR_GET(eventId_, vector<string>) };
      inline EventIdSet& setEventId(const vector<string> & eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };
      inline EventIdSet& setEventId(vector<string> && eventId) { DARABONBA_PTR_SET_RVALUE(eventId_, eventId) };


    protected:
      shared_ptr<vector<string>> eventId_ {};
    };

    virtual bool empty() const override { return this->eventIdSet_ == nullptr
        && this->requestId_ == nullptr; };
    // eventIdSet Field Functions 
    bool hasEventIdSet() const { return this->eventIdSet_ != nullptr;};
    void deleteEventIdSet() { this->eventIdSet_ = nullptr;};
    inline const CreateSimulatedSystemEventsResponseBody::EventIdSet & getEventIdSet() const { DARABONBA_PTR_GET_CONST(eventIdSet_, CreateSimulatedSystemEventsResponseBody::EventIdSet) };
    inline CreateSimulatedSystemEventsResponseBody::EventIdSet getEventIdSet() { DARABONBA_PTR_GET(eventIdSet_, CreateSimulatedSystemEventsResponseBody::EventIdSet) };
    inline CreateSimulatedSystemEventsResponseBody& setEventIdSet(const CreateSimulatedSystemEventsResponseBody::EventIdSet & eventIdSet) { DARABONBA_PTR_SET_VALUE(eventIdSet_, eventIdSet) };
    inline CreateSimulatedSystemEventsResponseBody& setEventIdSet(CreateSimulatedSystemEventsResponseBody::EventIdSet && eventIdSet) { DARABONBA_PTR_SET_RVALUE(eventIdSet_, eventIdSet) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSimulatedSystemEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The IDs of the simulated events.
    shared_ptr<CreateSimulatedSystemEventsResponseBody::EventIdSet> eventIdSet_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
