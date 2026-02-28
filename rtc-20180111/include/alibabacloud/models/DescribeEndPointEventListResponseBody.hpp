// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENDPOINTEVENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeEndPointEventListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEndPointEventListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEndPointEventListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEndPointEventListResponseBody() = default ;
    DescribeEndPointEventListResponseBody(const DescribeEndPointEventListResponseBody &) = default ;
    DescribeEndPointEventListResponseBody(DescribeEndPointEventListResponseBody &&) = default ;
    DescribeEndPointEventListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEndPointEventListResponseBody() = default ;
    DescribeEndPointEventListResponseBody& operator=(const DescribeEndPointEventListResponseBody &) = default ;
    DescribeEndPointEventListResponseBody& operator=(DescribeEndPointEventListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Nodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
        DARABONBA_PTR_TO_JSON(EventDataItems, eventDataItems_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
        DARABONBA_PTR_FROM_JSON(EventDataItems, eventDataItems_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Nodes() = default ;
      Nodes(const Nodes &) = default ;
      Nodes(Nodes &&) = default ;
      Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Nodes() = default ;
      Nodes& operator=(const Nodes &) = default ;
      Nodes& operator=(Nodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EventDataItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EventDataItems& obj) { 
          DARABONBA_PTR_TO_JSON(EventList, eventList_);
          DARABONBA_PTR_TO_JSON(Ts, ts_);
        };
        friend void from_json(const Darabonba::Json& j, EventDataItems& obj) { 
          DARABONBA_PTR_FROM_JSON(EventList, eventList_);
          DARABONBA_PTR_FROM_JSON(Ts, ts_);
        };
        EventDataItems() = default ;
        EventDataItems(const EventDataItems &) = default ;
        EventDataItems(EventDataItems &&) = default ;
        EventDataItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EventDataItems() = default ;
        EventDataItems& operator=(const EventDataItems &) = default ;
        EventDataItems& operator=(EventDataItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EventList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EventList& obj) { 
            DARABONBA_PTR_TO_JSON(EventName, eventName_);
            DARABONBA_PTR_TO_JSON(EventType, eventType_);
            DARABONBA_PTR_TO_JSON(Ts, ts_);
            DARABONBA_PTR_TO_JSON(TsInMs, tsInMs_);
          };
          friend void from_json(const Darabonba::Json& j, EventList& obj) { 
            DARABONBA_PTR_FROM_JSON(EventName, eventName_);
            DARABONBA_PTR_FROM_JSON(EventType, eventType_);
            DARABONBA_PTR_FROM_JSON(Ts, ts_);
            DARABONBA_PTR_FROM_JSON(TsInMs, tsInMs_);
          };
          EventList() = default ;
          EventList(const EventList &) = default ;
          EventList(EventList &&) = default ;
          EventList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EventList() = default ;
          EventList& operator=(const EventList &) = default ;
          EventList& operator=(EventList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->eventName_ == nullptr
        && this->eventType_ == nullptr && this->ts_ == nullptr && this->tsInMs_ == nullptr; };
          // eventName Field Functions 
          bool hasEventName() const { return this->eventName_ != nullptr;};
          void deleteEventName() { this->eventName_ = nullptr;};
          inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
          inline EventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


          // eventType Field Functions 
          bool hasEventType() const { return this->eventType_ != nullptr;};
          void deleteEventType() { this->eventType_ = nullptr;};
          inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
          inline EventList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


          // ts Field Functions 
          bool hasTs() const { return this->ts_ != nullptr;};
          void deleteTs() { this->ts_ = nullptr;};
          inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
          inline EventList& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


          // tsInMs Field Functions 
          bool hasTsInMs() const { return this->tsInMs_ != nullptr;};
          void deleteTsInMs() { this->tsInMs_ = nullptr;};
          inline string getTsInMs() const { DARABONBA_PTR_GET_DEFAULT(tsInMs_, "") };
          inline EventList& setTsInMs(string tsInMs) { DARABONBA_PTR_SET_VALUE(tsInMs_, tsInMs) };


        protected:
          shared_ptr<string> eventName_ {};
          shared_ptr<string> eventType_ {};
          shared_ptr<int64_t> ts_ {};
          shared_ptr<string> tsInMs_ {};
        };

        virtual bool empty() const override { return this->eventList_ == nullptr
        && this->ts_ == nullptr; };
        // eventList Field Functions 
        bool hasEventList() const { return this->eventList_ != nullptr;};
        void deleteEventList() { this->eventList_ = nullptr;};
        inline const vector<EventDataItems::EventList> & getEventList() const { DARABONBA_PTR_GET_CONST(eventList_, vector<EventDataItems::EventList>) };
        inline vector<EventDataItems::EventList> getEventList() { DARABONBA_PTR_GET(eventList_, vector<EventDataItems::EventList>) };
        inline EventDataItems& setEventList(const vector<EventDataItems::EventList> & eventList) { DARABONBA_PTR_SET_VALUE(eventList_, eventList) };
        inline EventDataItems& setEventList(vector<EventDataItems::EventList> && eventList) { DARABONBA_PTR_SET_RVALUE(eventList_, eventList) };


        // ts Field Functions 
        bool hasTs() const { return this->ts_ != nullptr;};
        void deleteTs() { this->ts_ = nullptr;};
        inline int64_t getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, 0L) };
        inline EventDataItems& setTs(int64_t ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


      protected:
        shared_ptr<vector<EventDataItems::EventList>> eventList_ {};
        shared_ptr<int64_t> ts_ {};
      };

      virtual bool empty() const override { return this->eventDataItems_ == nullptr
        && this->userId_ == nullptr; };
      // eventDataItems Field Functions 
      bool hasEventDataItems() const { return this->eventDataItems_ != nullptr;};
      void deleteEventDataItems() { this->eventDataItems_ = nullptr;};
      inline const vector<Nodes::EventDataItems> & getEventDataItems() const { DARABONBA_PTR_GET_CONST(eventDataItems_, vector<Nodes::EventDataItems>) };
      inline vector<Nodes::EventDataItems> getEventDataItems() { DARABONBA_PTR_GET(eventDataItems_, vector<Nodes::EventDataItems>) };
      inline Nodes& setEventDataItems(const vector<Nodes::EventDataItems> & eventDataItems) { DARABONBA_PTR_SET_VALUE(eventDataItems_, eventDataItems) };
      inline Nodes& setEventDataItems(vector<Nodes::EventDataItems> && eventDataItems) { DARABONBA_PTR_SET_RVALUE(eventDataItems_, eventDataItems) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Nodes& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<Nodes::EventDataItems>> eventDataItems_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->nodes_ == nullptr
        && this->requestId_ == nullptr; };
    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<DescribeEndPointEventListResponseBody::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<DescribeEndPointEventListResponseBody::Nodes>) };
    inline vector<DescribeEndPointEventListResponseBody::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<DescribeEndPointEventListResponseBody::Nodes>) };
    inline DescribeEndPointEventListResponseBody& setNodes(const vector<DescribeEndPointEventListResponseBody::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline DescribeEndPointEventListResponseBody& setNodes(vector<DescribeEndPointEventListResponseBody::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEndPointEventListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeEndPointEventListResponseBody::Nodes>> nodes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
