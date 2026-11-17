// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTTRENDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTTRENDSRESPONSEBODY_HPP_
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
  class DescribeAiEngineEventTrendsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEventTrendsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateInterval, aggregateInterval_);
      DARABONBA_PTR_TO_JSON(Points, points_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEventTrendsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateInterval, aggregateInterval_);
      DARABONBA_PTR_FROM_JSON(Points, points_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAiEngineEventTrendsResponseBody() = default ;
    DescribeAiEngineEventTrendsResponseBody(const DescribeAiEngineEventTrendsResponseBody &) = default ;
    DescribeAiEngineEventTrendsResponseBody(DescribeAiEngineEventTrendsResponseBody &&) = default ;
    DescribeAiEngineEventTrendsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEventTrendsResponseBody() = default ;
    DescribeAiEngineEventTrendsResponseBody& operator=(const DescribeAiEngineEventTrendsResponseBody &) = default ;
    DescribeAiEngineEventTrendsResponseBody& operator=(DescribeAiEngineEventTrendsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Points : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Points& obj) { 
        DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
        DARABONBA_PTR_TO_JSON(RiskCounts, riskCounts_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, Points& obj) { 
        DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
        DARABONBA_PTR_FROM_JSON(RiskCounts, riskCounts_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      Points() = default ;
      Points(const Points &) = default ;
      Points(Points &&) = default ;
      Points(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Points() = default ;
      Points& operator=(const Points &) = default ;
      Points& operator=(Points &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RiskCounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskCounts& obj) { 
          DARABONBA_PTR_TO_JSON(Critical, critical_);
          DARABONBA_PTR_TO_JSON(High, high_);
          DARABONBA_PTR_TO_JSON(Low, low_);
          DARABONBA_PTR_TO_JSON(Medium, medium_);
        };
        friend void from_json(const Darabonba::Json& j, RiskCounts& obj) { 
          DARABONBA_PTR_FROM_JSON(Critical, critical_);
          DARABONBA_PTR_FROM_JSON(High, high_);
          DARABONBA_PTR_FROM_JSON(Low, low_);
          DARABONBA_PTR_FROM_JSON(Medium, medium_);
        };
        RiskCounts() = default ;
        RiskCounts(const RiskCounts &) = default ;
        RiskCounts(RiskCounts &&) = default ;
        RiskCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskCounts() = default ;
        RiskCounts& operator=(const RiskCounts &) = default ;
        RiskCounts& operator=(RiskCounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->critical_ == nullptr
        && this->high_ == nullptr && this->low_ == nullptr && this->medium_ == nullptr; };
        // critical Field Functions 
        bool hasCritical() const { return this->critical_ != nullptr;};
        void deleteCritical() { this->critical_ = nullptr;};
        inline int64_t getCritical() const { DARABONBA_PTR_GET_DEFAULT(critical_, 0L) };
        inline RiskCounts& setCritical(int64_t critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };


        // high Field Functions 
        bool hasHigh() const { return this->high_ != nullptr;};
        void deleteHigh() { this->high_ = nullptr;};
        inline int64_t getHigh() const { DARABONBA_PTR_GET_DEFAULT(high_, 0L) };
        inline RiskCounts& setHigh(int64_t high) { DARABONBA_PTR_SET_VALUE(high_, high) };


        // low Field Functions 
        bool hasLow() const { return this->low_ != nullptr;};
        void deleteLow() { this->low_ = nullptr;};
        inline int64_t getLow() const { DARABONBA_PTR_GET_DEFAULT(low_, 0L) };
        inline RiskCounts& setLow(int64_t low) { DARABONBA_PTR_SET_VALUE(low_, low) };


        // medium Field Functions 
        bool hasMedium() const { return this->medium_ != nullptr;};
        void deleteMedium() { this->medium_ = nullptr;};
        inline int64_t getMedium() const { DARABONBA_PTR_GET_DEFAULT(medium_, 0L) };
        inline RiskCounts& setMedium(int64_t medium) { DARABONBA_PTR_SET_VALUE(medium_, medium) };


      protected:
        // The number of critical events.
        shared_ptr<int64_t> critical_ {};
        // The number of high-risk events.
        shared_ptr<int64_t> high_ {};
        // The number of low-risk events.
        shared_ptr<int64_t> low_ {};
        // The number of medium-risk events.
        shared_ptr<int64_t> medium_ {};
      };

      virtual bool empty() const override { return this->eventCount_ == nullptr
        && this->riskCounts_ == nullptr && this->time_ == nullptr; };
      // eventCount Field Functions 
      bool hasEventCount() const { return this->eventCount_ != nullptr;};
      void deleteEventCount() { this->eventCount_ = nullptr;};
      inline int64_t getEventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
      inline Points& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


      // riskCounts Field Functions 
      bool hasRiskCounts() const { return this->riskCounts_ != nullptr;};
      void deleteRiskCounts() { this->riskCounts_ = nullptr;};
      inline const Points::RiskCounts & getRiskCounts() const { DARABONBA_PTR_GET_CONST(riskCounts_, Points::RiskCounts) };
      inline Points::RiskCounts getRiskCounts() { DARABONBA_PTR_GET(riskCounts_, Points::RiskCounts) };
      inline Points& setRiskCounts(const Points::RiskCounts & riskCounts) { DARABONBA_PTR_SET_VALUE(riskCounts_, riskCounts) };
      inline Points& setRiskCounts(Points::RiskCounts && riskCounts) { DARABONBA_PTR_SET_RVALUE(riskCounts_, riskCounts) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
      inline Points& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The number of events first discovered within the time period.
      shared_ptr<int64_t> eventCount_ {};
      // The number of events within the time period, aggregated by risk level.
      shared_ptr<Points::RiskCounts> riskCounts_ {};
      // The start time of the statistical period in the UNIX timestamp format. Unit: milliseconds.
      shared_ptr<int64_t> time_ {};
    };

    virtual bool empty() const override { return this->aggregateInterval_ == nullptr
        && this->points_ == nullptr && this->requestId_ == nullptr; };
    // aggregateInterval Field Functions 
    bool hasAggregateInterval() const { return this->aggregateInterval_ != nullptr;};
    void deleteAggregateInterval() { this->aggregateInterval_ = nullptr;};
    inline string getAggregateInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregateInterval_, "") };
    inline DescribeAiEngineEventTrendsResponseBody& setAggregateInterval(string aggregateInterval) { DARABONBA_PTR_SET_VALUE(aggregateInterval_, aggregateInterval) };


    // points Field Functions 
    bool hasPoints() const { return this->points_ != nullptr;};
    void deletePoints() { this->points_ = nullptr;};
    inline const vector<DescribeAiEngineEventTrendsResponseBody::Points> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<DescribeAiEngineEventTrendsResponseBody::Points>) };
    inline vector<DescribeAiEngineEventTrendsResponseBody::Points> getPoints() { DARABONBA_PTR_GET(points_, vector<DescribeAiEngineEventTrendsResponseBody::Points>) };
    inline DescribeAiEngineEventTrendsResponseBody& setPoints(const vector<DescribeAiEngineEventTrendsResponseBody::Points> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
    inline DescribeAiEngineEventTrendsResponseBody& setPoints(vector<DescribeAiEngineEventTrendsResponseBody::Points> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAiEngineEventTrendsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The aggregation interval, which is automatically selected based on the query time range. Valid values:
    // 
    // - **1m**: 1 minute
    // - **5m**: 5 minutes
    // - **15m**: 15 minutes
    // - **1h**: 1 hour
    // - **1d**: 1 day
    shared_ptr<string> aggregateInterval_ {};
    // The time series data of events aggregated by first discovery time, sorted in ascending order of time.
    shared_ptr<vector<DescribeAiEngineEventTrendsResponseBody::Points>> points_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
