// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFREEUSEREVENTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFreeUserEventCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFreeUserEventCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFreeUserEventCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeFreeUserEventCountResponseBody() = default ;
    DescribeFreeUserEventCountResponseBody(const DescribeFreeUserEventCountResponseBody &) = default ;
    DescribeFreeUserEventCountResponseBody(DescribeFreeUserEventCountResponseBody &&) = default ;
    DescribeFreeUserEventCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFreeUserEventCountResponseBody() = default ;
    DescribeFreeUserEventCountResponseBody& operator=(const DescribeFreeUserEventCountResponseBody &) = default ;
    DescribeFreeUserEventCountResponseBody& operator=(DescribeFreeUserEventCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Event : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Event& obj) { 
        DARABONBA_PTR_TO_JSON(EventHigh, eventHigh_);
        DARABONBA_PTR_TO_JSON(EventLow, eventLow_);
        DARABONBA_PTR_TO_JSON(EventMedium, eventMedium_);
        DARABONBA_PTR_TO_JSON(EventTotal, eventTotal_);
      };
      friend void from_json(const Darabonba::Json& j, Event& obj) { 
        DARABONBA_PTR_FROM_JSON(EventHigh, eventHigh_);
        DARABONBA_PTR_FROM_JSON(EventLow, eventLow_);
        DARABONBA_PTR_FROM_JSON(EventMedium, eventMedium_);
        DARABONBA_PTR_FROM_JSON(EventTotal, eventTotal_);
      };
      Event() = default ;
      Event(const Event &) = default ;
      Event(Event &&) = default ;
      Event(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Event() = default ;
      Event& operator=(const Event &) = default ;
      Event& operator=(Event &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventHigh_ == nullptr
        && this->eventLow_ == nullptr && this->eventMedium_ == nullptr && this->eventTotal_ == nullptr; };
      // eventHigh Field Functions 
      bool hasEventHigh() const { return this->eventHigh_ != nullptr;};
      void deleteEventHigh() { this->eventHigh_ = nullptr;};
      inline int64_t getEventHigh() const { DARABONBA_PTR_GET_DEFAULT(eventHigh_, 0L) };
      inline Event& setEventHigh(int64_t eventHigh) { DARABONBA_PTR_SET_VALUE(eventHigh_, eventHigh) };


      // eventLow Field Functions 
      bool hasEventLow() const { return this->eventLow_ != nullptr;};
      void deleteEventLow() { this->eventLow_ = nullptr;};
      inline int64_t getEventLow() const { DARABONBA_PTR_GET_DEFAULT(eventLow_, 0L) };
      inline Event& setEventLow(int64_t eventLow) { DARABONBA_PTR_SET_VALUE(eventLow_, eventLow) };


      // eventMedium Field Functions 
      bool hasEventMedium() const { return this->eventMedium_ != nullptr;};
      void deleteEventMedium() { this->eventMedium_ = nullptr;};
      inline int64_t getEventMedium() const { DARABONBA_PTR_GET_DEFAULT(eventMedium_, 0L) };
      inline Event& setEventMedium(int64_t eventMedium) { DARABONBA_PTR_SET_VALUE(eventMedium_, eventMedium) };


      // eventTotal Field Functions 
      bool hasEventTotal() const { return this->eventTotal_ != nullptr;};
      void deleteEventTotal() { this->eventTotal_ = nullptr;};
      inline int64_t getEventTotal() const { DARABONBA_PTR_GET_DEFAULT(eventTotal_, 0L) };
      inline Event& setEventTotal(int64_t eventTotal) { DARABONBA_PTR_SET_VALUE(eventTotal_, eventTotal) };


    protected:
      // The number of high-risk events.
      shared_ptr<int64_t> eventHigh_ {};
      // The number of low-risk events.
      shared_ptr<int64_t> eventLow_ {};
      // The number of medium-risk events.
      shared_ptr<int64_t> eventMedium_ {};
      // The total number of security events.
      shared_ptr<int64_t> eventTotal_ {};
    };

    virtual bool empty() const override { return this->event_ == nullptr
        && this->requestId_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const DescribeFreeUserEventCountResponseBody::Event & getEvent() const { DARABONBA_PTR_GET_CONST(event_, DescribeFreeUserEventCountResponseBody::Event) };
    inline DescribeFreeUserEventCountResponseBody::Event getEvent() { DARABONBA_PTR_GET(event_, DescribeFreeUserEventCountResponseBody::Event) };
    inline DescribeFreeUserEventCountResponseBody& setEvent(const DescribeFreeUserEventCountResponseBody::Event & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeFreeUserEventCountResponseBody& setEvent(DescribeFreeUserEventCountResponseBody::Event && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFreeUserEventCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the security events that are detected by using the basic detection feature.
    shared_ptr<DescribeFreeUserEventCountResponseBody::Event> event_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
