// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUCCESSINSTANCETRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetSuccessInstanceTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSuccessInstanceTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatusTrend, instanceStatusTrend_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSuccessInstanceTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatusTrend, instanceStatusTrend_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSuccessInstanceTrendResponseBody() = default ;
    GetSuccessInstanceTrendResponseBody(const GetSuccessInstanceTrendResponseBody &) = default ;
    GetSuccessInstanceTrendResponseBody(GetSuccessInstanceTrendResponseBody &&) = default ;
    GetSuccessInstanceTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSuccessInstanceTrendResponseBody() = default ;
    GetSuccessInstanceTrendResponseBody& operator=(const GetSuccessInstanceTrendResponseBody &) = default ;
    GetSuccessInstanceTrendResponseBody& operator=(GetSuccessInstanceTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatusTrend : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatusTrend& obj) { 
        DARABONBA_PTR_TO_JSON(AvgTrend, avgTrend_);
        DARABONBA_PTR_TO_JSON(TodayTrend, todayTrend_);
        DARABONBA_PTR_TO_JSON(YesterdayTrend, yesterdayTrend_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceStatusTrend& obj) { 
        DARABONBA_PTR_FROM_JSON(AvgTrend, avgTrend_);
        DARABONBA_PTR_FROM_JSON(TodayTrend, todayTrend_);
        DARABONBA_PTR_FROM_JSON(YesterdayTrend, yesterdayTrend_);
      };
      InstanceStatusTrend() = default ;
      InstanceStatusTrend(const InstanceStatusTrend &) = default ;
      InstanceStatusTrend(InstanceStatusTrend &&) = default ;
      InstanceStatusTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceStatusTrend() = default ;
      InstanceStatusTrend& operator=(const InstanceStatusTrend &) = default ;
      InstanceStatusTrend& operator=(InstanceStatusTrend &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class YesterdayTrend : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const YesterdayTrend& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
        };
        friend void from_json(const Darabonba::Json& j, YesterdayTrend& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
        };
        YesterdayTrend() = default ;
        YesterdayTrend(const YesterdayTrend &) = default ;
        YesterdayTrend(YesterdayTrend &&) = default ;
        YesterdayTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~YesterdayTrend() = default ;
        YesterdayTrend& operator=(const YesterdayTrend &) = default ;
        YesterdayTrend& operator=(YesterdayTrend &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->timePoint_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline YesterdayTrend& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // timePoint Field Functions 
        bool hasTimePoint() const { return this->timePoint_ != nullptr;};
        void deleteTimePoint() { this->timePoint_ = nullptr;};
        inline string getTimePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
        inline YesterdayTrend& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


      protected:
        // The number of instances.
        shared_ptr<int32_t> count_ {};
        // The point in time. Valid values: 00:00 to 23:00.
        shared_ptr<string> timePoint_ {};
      };

      class TodayTrend : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TodayTrend& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
        };
        friend void from_json(const Darabonba::Json& j, TodayTrend& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
        };
        TodayTrend() = default ;
        TodayTrend(const TodayTrend &) = default ;
        TodayTrend(TodayTrend &&) = default ;
        TodayTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TodayTrend() = default ;
        TodayTrend& operator=(const TodayTrend &) = default ;
        TodayTrend& operator=(TodayTrend &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->timePoint_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline TodayTrend& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // timePoint Field Functions 
        bool hasTimePoint() const { return this->timePoint_ != nullptr;};
        void deleteTimePoint() { this->timePoint_ = nullptr;};
        inline string getTimePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
        inline TodayTrend& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


      protected:
        // The number of instances.
        shared_ptr<int32_t> count_ {};
        // The point in time. Valid values: 00:00 to 23:00.
        shared_ptr<string> timePoint_ {};
      };

      class AvgTrend : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AvgTrend& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(TimePoint, timePoint_);
        };
        friend void from_json(const Darabonba::Json& j, AvgTrend& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(TimePoint, timePoint_);
        };
        AvgTrend() = default ;
        AvgTrend(const AvgTrend &) = default ;
        AvgTrend(AvgTrend &&) = default ;
        AvgTrend(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AvgTrend() = default ;
        AvgTrend& operator=(const AvgTrend &) = default ;
        AvgTrend& operator=(AvgTrend &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->timePoint_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline AvgTrend& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // timePoint Field Functions 
        bool hasTimePoint() const { return this->timePoint_ != nullptr;};
        void deleteTimePoint() { this->timePoint_ = nullptr;};
        inline string getTimePoint() const { DARABONBA_PTR_GET_DEFAULT(timePoint_, "") };
        inline AvgTrend& setTimePoint(string timePoint) { DARABONBA_PTR_SET_VALUE(timePoint_, timePoint) };


      protected:
        // The number of instances.
        shared_ptr<int32_t> count_ {};
        // The point in time. Valid values: 00:00 to 23:00.
        shared_ptr<string> timePoint_ {};
      };

      virtual bool empty() const override { return this->avgTrend_ == nullptr
        && this->todayTrend_ == nullptr && this->yesterdayTrend_ == nullptr; };
      // avgTrend Field Functions 
      bool hasAvgTrend() const { return this->avgTrend_ != nullptr;};
      void deleteAvgTrend() { this->avgTrend_ = nullptr;};
      inline const vector<InstanceStatusTrend::AvgTrend> & getAvgTrend() const { DARABONBA_PTR_GET_CONST(avgTrend_, vector<InstanceStatusTrend::AvgTrend>) };
      inline vector<InstanceStatusTrend::AvgTrend> getAvgTrend() { DARABONBA_PTR_GET(avgTrend_, vector<InstanceStatusTrend::AvgTrend>) };
      inline InstanceStatusTrend& setAvgTrend(const vector<InstanceStatusTrend::AvgTrend> & avgTrend) { DARABONBA_PTR_SET_VALUE(avgTrend_, avgTrend) };
      inline InstanceStatusTrend& setAvgTrend(vector<InstanceStatusTrend::AvgTrend> && avgTrend) { DARABONBA_PTR_SET_RVALUE(avgTrend_, avgTrend) };


      // todayTrend Field Functions 
      bool hasTodayTrend() const { return this->todayTrend_ != nullptr;};
      void deleteTodayTrend() { this->todayTrend_ = nullptr;};
      inline const vector<InstanceStatusTrend::TodayTrend> & getTodayTrend() const { DARABONBA_PTR_GET_CONST(todayTrend_, vector<InstanceStatusTrend::TodayTrend>) };
      inline vector<InstanceStatusTrend::TodayTrend> getTodayTrend() { DARABONBA_PTR_GET(todayTrend_, vector<InstanceStatusTrend::TodayTrend>) };
      inline InstanceStatusTrend& setTodayTrend(const vector<InstanceStatusTrend::TodayTrend> & todayTrend) { DARABONBA_PTR_SET_VALUE(todayTrend_, todayTrend) };
      inline InstanceStatusTrend& setTodayTrend(vector<InstanceStatusTrend::TodayTrend> && todayTrend) { DARABONBA_PTR_SET_RVALUE(todayTrend_, todayTrend) };


      // yesterdayTrend Field Functions 
      bool hasYesterdayTrend() const { return this->yesterdayTrend_ != nullptr;};
      void deleteYesterdayTrend() { this->yesterdayTrend_ = nullptr;};
      inline const vector<InstanceStatusTrend::YesterdayTrend> & getYesterdayTrend() const { DARABONBA_PTR_GET_CONST(yesterdayTrend_, vector<InstanceStatusTrend::YesterdayTrend>) };
      inline vector<InstanceStatusTrend::YesterdayTrend> getYesterdayTrend() { DARABONBA_PTR_GET(yesterdayTrend_, vector<InstanceStatusTrend::YesterdayTrend>) };
      inline InstanceStatusTrend& setYesterdayTrend(const vector<InstanceStatusTrend::YesterdayTrend> & yesterdayTrend) { DARABONBA_PTR_SET_VALUE(yesterdayTrend_, yesterdayTrend) };
      inline InstanceStatusTrend& setYesterdayTrend(vector<InstanceStatusTrend::YesterdayTrend> && yesterdayTrend) { DARABONBA_PTR_SET_RVALUE(yesterdayTrend_, yesterdayTrend) };


    protected:
      // The average trend.
      shared_ptr<vector<InstanceStatusTrend::AvgTrend>> avgTrend_ {};
      // The trend on the current day.
      shared_ptr<vector<InstanceStatusTrend::TodayTrend>> todayTrend_ {};
      // The trend on the previous day.
      shared_ptr<vector<InstanceStatusTrend::YesterdayTrend>> yesterdayTrend_ {};
    };

    virtual bool empty() const override { return this->instanceStatusTrend_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceStatusTrend Field Functions 
    bool hasInstanceStatusTrend() const { return this->instanceStatusTrend_ != nullptr;};
    void deleteInstanceStatusTrend() { this->instanceStatusTrend_ = nullptr;};
    inline const GetSuccessInstanceTrendResponseBody::InstanceStatusTrend & getInstanceStatusTrend() const { DARABONBA_PTR_GET_CONST(instanceStatusTrend_, GetSuccessInstanceTrendResponseBody::InstanceStatusTrend) };
    inline GetSuccessInstanceTrendResponseBody::InstanceStatusTrend getInstanceStatusTrend() { DARABONBA_PTR_GET(instanceStatusTrend_, GetSuccessInstanceTrendResponseBody::InstanceStatusTrend) };
    inline GetSuccessInstanceTrendResponseBody& setInstanceStatusTrend(const GetSuccessInstanceTrendResponseBody::InstanceStatusTrend & instanceStatusTrend) { DARABONBA_PTR_SET_VALUE(instanceStatusTrend_, instanceStatusTrend) };
    inline GetSuccessInstanceTrendResponseBody& setInstanceStatusTrend(GetSuccessInstanceTrendResponseBody::InstanceStatusTrend && instanceStatusTrend) { DARABONBA_PTR_SET_RVALUE(instanceStatusTrend_, instanceStatusTrend) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSuccessInstanceTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The trend of statistics on the instance status in different time periods.
    shared_ptr<GetSuccessInstanceTrendResponseBody::InstanceStatusTrend> instanceStatusTrend_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
