// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTRENDRESPONSEBODY_HPP_
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
  class DescribeUserEventTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEventTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEventTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
    };
    DescribeUserEventTrendResponseBody() = default ;
    DescribeUserEventTrendResponseBody(const DescribeUserEventTrendResponseBody &) = default ;
    DescribeUserEventTrendResponseBody(DescribeUserEventTrendResponseBody &&) = default ;
    DescribeUserEventTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEventTrendResponseBody() = default ;
    DescribeUserEventTrendResponseBody& operator=(const DescribeUserEventTrendResponseBody &) = default ;
    DescribeUserEventTrendResponseBody& operator=(DescribeUserEventTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Trend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Trend& obj) { 
        DARABONBA_PTR_TO_JSON(EventHigh, eventHigh_);
        DARABONBA_PTR_TO_JSON(EventLow, eventLow_);
        DARABONBA_PTR_TO_JSON(EventMedium, eventMedium_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Trend& obj) { 
        DARABONBA_PTR_FROM_JSON(EventHigh, eventHigh_);
        DARABONBA_PTR_FROM_JSON(EventLow, eventLow_);
        DARABONBA_PTR_FROM_JSON(EventMedium, eventMedium_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      };
      Trend() = default ;
      Trend(const Trend &) = default ;
      Trend(Trend &&) = default ;
      Trend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Trend() = default ;
      Trend& operator=(const Trend &) = default ;
      Trend& operator=(Trend &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eventHigh_ == nullptr
        && this->eventLow_ == nullptr && this->eventMedium_ == nullptr && this->timeStamp_ == nullptr && this->timestamp_ == nullptr; };
      // eventHigh Field Functions 
      bool hasEventHigh() const { return this->eventHigh_ != nullptr;};
      void deleteEventHigh() { this->eventHigh_ = nullptr;};
      inline int64_t getEventHigh() const { DARABONBA_PTR_GET_DEFAULT(eventHigh_, 0L) };
      inline Trend& setEventHigh(int64_t eventHigh) { DARABONBA_PTR_SET_VALUE(eventHigh_, eventHigh) };


      // eventLow Field Functions 
      bool hasEventLow() const { return this->eventLow_ != nullptr;};
      void deleteEventLow() { this->eventLow_ = nullptr;};
      inline int64_t getEventLow() const { DARABONBA_PTR_GET_DEFAULT(eventLow_, 0L) };
      inline Trend& setEventLow(int64_t eventLow) { DARABONBA_PTR_SET_VALUE(eventLow_, eventLow) };


      // eventMedium Field Functions 
      bool hasEventMedium() const { return this->eventMedium_ != nullptr;};
      void deleteEventMedium() { this->eventMedium_ = nullptr;};
      inline int64_t getEventMedium() const { DARABONBA_PTR_GET_DEFAULT(eventMedium_, 0L) };
      inline Trend& setEventMedium(int64_t eventMedium) { DARABONBA_PTR_SET_VALUE(eventMedium_, eventMedium) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
      inline Trend& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Trend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    protected:
      // The number of high-risk events.
      shared_ptr<int64_t> eventHigh_ {};
      // The number of low-risk events.
      shared_ptr<int64_t> eventLow_ {};
      // The number of medium-risk events.
      shared_ptr<int64_t> eventMedium_ {};
      // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      // >Notice: The parameter has been deprecated, it is recommended to use the Timestamp parameter.
      shared_ptr<int64_t> timeStamp_ {};
      // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
      shared_ptr<int64_t> timestamp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->trend_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserEventTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline const vector<DescribeUserEventTrendResponseBody::Trend> & getTrend() const { DARABONBA_PTR_GET_CONST(trend_, vector<DescribeUserEventTrendResponseBody::Trend>) };
    inline vector<DescribeUserEventTrendResponseBody::Trend> getTrend() { DARABONBA_PTR_GET(trend_, vector<DescribeUserEventTrendResponseBody::Trend>) };
    inline DescribeUserEventTrendResponseBody& setTrend(const vector<DescribeUserEventTrendResponseBody::Trend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
    inline DescribeUserEventTrendResponseBody& setTrend(vector<DescribeUserEventTrendResponseBody::Trend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The trends of attacks.
    shared_ptr<vector<DescribeUserEventTrendResponseBody::Trend>> trend_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
