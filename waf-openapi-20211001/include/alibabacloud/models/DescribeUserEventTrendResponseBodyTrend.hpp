// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTRENDRESPONSEBODYTREND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTRENDRESPONSEBODYTREND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserEventTrendResponseBodyTrend : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEventTrendResponseBodyTrend& obj) { 
      DARABONBA_PTR_TO_JSON(EventHigh, eventHigh_);
      DARABONBA_PTR_TO_JSON(EventLow, eventLow_);
      DARABONBA_PTR_TO_JSON(EventMedium, eventMedium_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEventTrendResponseBodyTrend& obj) { 
      DARABONBA_PTR_FROM_JSON(EventHigh, eventHigh_);
      DARABONBA_PTR_FROM_JSON(EventLow, eventLow_);
      DARABONBA_PTR_FROM_JSON(EventMedium, eventMedium_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    DescribeUserEventTrendResponseBodyTrend() = default ;
    DescribeUserEventTrendResponseBodyTrend(const DescribeUserEventTrendResponseBodyTrend &) = default ;
    DescribeUserEventTrendResponseBodyTrend(DescribeUserEventTrendResponseBodyTrend &&) = default ;
    DescribeUserEventTrendResponseBodyTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEventTrendResponseBodyTrend() = default ;
    DescribeUserEventTrendResponseBodyTrend& operator=(const DescribeUserEventTrendResponseBodyTrend &) = default ;
    DescribeUserEventTrendResponseBodyTrend& operator=(DescribeUserEventTrendResponseBodyTrend &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventHigh_ == nullptr
        && return this->eventLow_ == nullptr && return this->eventMedium_ == nullptr && return this->timeStamp_ == nullptr && return this->timestamp_ == nullptr; };
    // eventHigh Field Functions 
    bool hasEventHigh() const { return this->eventHigh_ != nullptr;};
    void deleteEventHigh() { this->eventHigh_ = nullptr;};
    inline int64_t eventHigh() const { DARABONBA_PTR_GET_DEFAULT(eventHigh_, 0L) };
    inline DescribeUserEventTrendResponseBodyTrend& setEventHigh(int64_t eventHigh) { DARABONBA_PTR_SET_VALUE(eventHigh_, eventHigh) };


    // eventLow Field Functions 
    bool hasEventLow() const { return this->eventLow_ != nullptr;};
    void deleteEventLow() { this->eventLow_ = nullptr;};
    inline int64_t eventLow() const { DARABONBA_PTR_GET_DEFAULT(eventLow_, 0L) };
    inline DescribeUserEventTrendResponseBodyTrend& setEventLow(int64_t eventLow) { DARABONBA_PTR_SET_VALUE(eventLow_, eventLow) };


    // eventMedium Field Functions 
    bool hasEventMedium() const { return this->eventMedium_ != nullptr;};
    void deleteEventMedium() { this->eventMedium_ = nullptr;};
    inline int64_t eventMedium() const { DARABONBA_PTR_GET_DEFAULT(eventMedium_, 0L) };
    inline DescribeUserEventTrendResponseBodyTrend& setEventMedium(int64_t eventMedium) { DARABONBA_PTR_SET_VALUE(eventMedium_, eventMedium) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline int64_t timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
    inline DescribeUserEventTrendResponseBodyTrend& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline DescribeUserEventTrendResponseBodyTrend& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The number of high-risk events.
    std::shared_ptr<int64_t> eventHigh_ = nullptr;
    // The number of low-risk events.
    std::shared_ptr<int64_t> eventLow_ = nullptr;
    // The number of medium-risk events.
    std::shared_ptr<int64_t> eventMedium_ = nullptr;
    // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    // >Notice: The parameter has been deprecated, it is recommended to use the Timestamp parameter.
    std::shared_ptr<int64_t> timeStamp_ = nullptr;
    // The time at which the API was called. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
