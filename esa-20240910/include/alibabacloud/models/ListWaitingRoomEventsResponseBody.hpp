// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAITINGROOMEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAITINGROOMEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWaitingRoomEventsResponseBodyWaitingRoomEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWaitingRoomEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWaitingRoomEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WaitingRoomEvents, waitingRoomEvents_);
    };
    friend void from_json(const Darabonba::Json& j, ListWaitingRoomEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WaitingRoomEvents, waitingRoomEvents_);
    };
    ListWaitingRoomEventsResponseBody() = default ;
    ListWaitingRoomEventsResponseBody(const ListWaitingRoomEventsResponseBody &) = default ;
    ListWaitingRoomEventsResponseBody(ListWaitingRoomEventsResponseBody &&) = default ;
    ListWaitingRoomEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWaitingRoomEventsResponseBody() = default ;
    ListWaitingRoomEventsResponseBody& operator=(const ListWaitingRoomEventsResponseBody &) = default ;
    ListWaitingRoomEventsResponseBody& operator=(ListWaitingRoomEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->waitingRoomEvents_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWaitingRoomEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // waitingRoomEvents Field Functions 
    bool hasWaitingRoomEvents() const { return this->waitingRoomEvents_ != nullptr;};
    void deleteWaitingRoomEvents() { this->waitingRoomEvents_ = nullptr;};
    inline const vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents> & waitingRoomEvents() const { DARABONBA_PTR_GET_CONST(waitingRoomEvents_, vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents>) };
    inline vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents> waitingRoomEvents() { DARABONBA_PTR_GET(waitingRoomEvents_, vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents>) };
    inline ListWaitingRoomEventsResponseBody& setWaitingRoomEvents(const vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents> & waitingRoomEvents) { DARABONBA_PTR_SET_VALUE(waitingRoomEvents_, waitingRoomEvents) };
    inline ListWaitingRoomEventsResponseBody& setWaitingRoomEvents(vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents> && waitingRoomEvents) { DARABONBA_PTR_SET_RVALUE(waitingRoomEvents_, waitingRoomEvents) };


  protected:
    // The request ID, which is used to trace a call.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the waiting room events.
    std::shared_ptr<vector<ListWaitingRoomEventsResponseBodyWaitingRoomEvents>> waitingRoomEvents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
