// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserEventTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEventTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEventTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeUserEventTypeResponseBody() = default ;
    DescribeUserEventTypeResponseBody(const DescribeUserEventTypeResponseBody &) = default ;
    DescribeUserEventTypeResponseBody(DescribeUserEventTypeResponseBody &&) = default ;
    DescribeUserEventTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEventTypeResponseBody() = default ;
    DescribeUserEventTypeResponseBody& operator=(const DescribeUserEventTypeResponseBody &) = default ;
    DescribeUserEventTypeResponseBody& operator=(DescribeUserEventTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Event : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Event& obj) { 
        DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(EventParentType, eventParentType_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
      };
      friend void from_json(const Darabonba::Json& j, Event& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(EventParentType, eventParentType_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
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
      virtual bool empty() const override { return this->eventCode_ == nullptr
        && this->eventCount_ == nullptr && this->eventParentType_ == nullptr && this->eventType_ == nullptr; };
      // eventCode Field Functions 
      bool hasEventCode() const { return this->eventCode_ != nullptr;};
      void deleteEventCode() { this->eventCode_ = nullptr;};
      inline string getEventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
      inline Event& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int64_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
      inline Event& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // eventParentType Field Functions 
      bool hasEventParentType() const { return this->eventParentType_ != nullptr;};
      void deleteEventParentType() { this->eventParentType_ = nullptr;};
      inline string getEventParentType() const { DARABONBA_PTR_GET_DEFAULT(eventParentType_, "") };
      inline Event& setEventParentType(string eventParentType) { DARABONBA_PTR_SET_VALUE(eventParentType_, eventParentType) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline Event& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    protected:
      // The code of the security event.
      shared_ptr<string> eventCode_ {};
      // The number of events.
      shared_ptr<int64_t> eventCount_ {};
      // The parent type of the security event.
      shared_ptr<string> eventParentType_ {};
      // The type of the security event.
      // 
      // >  You can call the [DescribeApisecRules](https://help.aliyun.com/document_detail/2859155.html) operation to query the supported types of security events.
      shared_ptr<string> eventType_ {};
    };

    virtual bool empty() const override { return this->event_ == nullptr
        && this->requestId_ == nullptr; };
    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline const vector<DescribeUserEventTypeResponseBody::Event> & getEvent() const { DARABONBA_PTR_GET_CONST(event_, vector<DescribeUserEventTypeResponseBody::Event>) };
    inline vector<DescribeUserEventTypeResponseBody::Event> getEvent() { DARABONBA_PTR_GET(event_, vector<DescribeUserEventTypeResponseBody::Event>) };
    inline DescribeUserEventTypeResponseBody& setEvent(const vector<DescribeUserEventTypeResponseBody::Event> & event) { DARABONBA_PTR_SET_VALUE(event_, event) };
    inline DescribeUserEventTypeResponseBody& setEvent(vector<DescribeUserEventTypeResponseBody::Event> && event) { DARABONBA_PTR_SET_RVALUE(event_, event) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserEventTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The types and statistics of security events.
    shared_ptr<vector<DescribeUserEventTypeResponseBody::Event>> event_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
