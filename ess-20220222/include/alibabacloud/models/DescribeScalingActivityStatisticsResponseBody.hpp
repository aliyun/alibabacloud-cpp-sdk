// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGACTIVITYSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingActivityStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingActivityStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingActivityErrorCodeStatistics, scalingActivityErrorCodeStatistics_);
      DARABONBA_PTR_TO_JSON(ScalingActivityStatusStatistics, scalingActivityStatusStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingActivityStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityErrorCodeStatistics, scalingActivityErrorCodeStatistics_);
      DARABONBA_PTR_FROM_JSON(ScalingActivityStatusStatistics, scalingActivityStatusStatistics_);
    };
    DescribeScalingActivityStatisticsResponseBody() = default ;
    DescribeScalingActivityStatisticsResponseBody(const DescribeScalingActivityStatisticsResponseBody &) = default ;
    DescribeScalingActivityStatisticsResponseBody(DescribeScalingActivityStatisticsResponseBody &&) = default ;
    DescribeScalingActivityStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingActivityStatisticsResponseBody() = default ;
    DescribeScalingActivityStatisticsResponseBody& operator=(const DescribeScalingActivityStatisticsResponseBody &) = default ;
    DescribeScalingActivityStatisticsResponseBody& operator=(DescribeScalingActivityStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingActivityStatusStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingActivityStatusStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingActivityStatusStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      };
      ScalingActivityStatusStatistics() = default ;
      ScalingActivityStatusStatistics(const ScalingActivityStatusStatistics &) = default ;
      ScalingActivityStatusStatistics(ScalingActivityStatusStatistics &&) = default ;
      ScalingActivityStatusStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingActivityStatusStatistics() = default ;
      ScalingActivityStatusStatistics& operator=(const ScalingActivityStatusStatistics &) = default ;
      ScalingActivityStatusStatistics& operator=(ScalingActivityStatusStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
          DARABONBA_PTR_TO_JSON(FailedActivityCount, failedActivityCount_);
          DARABONBA_PTR_TO_JSON(SuccessActivityCount, successActivityCount_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(WarningActivityCount, warningActivityCount_);
        };
        friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedActivityCount, failedActivityCount_);
          DARABONBA_PTR_FROM_JSON(SuccessActivityCount, successActivityCount_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(WarningActivityCount, warningActivityCount_);
        };
        Statistic() = default ;
        Statistic(const Statistic &) = default ;
        Statistic(Statistic &&) = default ;
        Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistic() = default ;
        Statistic& operator=(const Statistic &) = default ;
        Statistic& operator=(Statistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failedActivityCount_ == nullptr
        && this->successActivityCount_ == nullptr && this->time_ == nullptr && this->warningActivityCount_ == nullptr; };
        // failedActivityCount Field Functions 
        bool hasFailedActivityCount() const { return this->failedActivityCount_ != nullptr;};
        void deleteFailedActivityCount() { this->failedActivityCount_ = nullptr;};
        inline int32_t getFailedActivityCount() const { DARABONBA_PTR_GET_DEFAULT(failedActivityCount_, 0) };
        inline Statistic& setFailedActivityCount(int32_t failedActivityCount) { DARABONBA_PTR_SET_VALUE(failedActivityCount_, failedActivityCount) };


        // successActivityCount Field Functions 
        bool hasSuccessActivityCount() const { return this->successActivityCount_ != nullptr;};
        void deleteSuccessActivityCount() { this->successActivityCount_ = nullptr;};
        inline int32_t getSuccessActivityCount() const { DARABONBA_PTR_GET_DEFAULT(successActivityCount_, 0) };
        inline Statistic& setSuccessActivityCount(int32_t successActivityCount) { DARABONBA_PTR_SET_VALUE(successActivityCount_, successActivityCount) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline Statistic& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // warningActivityCount Field Functions 
        bool hasWarningActivityCount() const { return this->warningActivityCount_ != nullptr;};
        void deleteWarningActivityCount() { this->warningActivityCount_ = nullptr;};
        inline int32_t getWarningActivityCount() const { DARABONBA_PTR_GET_DEFAULT(warningActivityCount_, 0) };
        inline Statistic& setWarningActivityCount(int32_t warningActivityCount) { DARABONBA_PTR_SET_VALUE(warningActivityCount_, warningActivityCount) };


      protected:
        // The number of failed scaling activities.
        shared_ptr<int32_t> failedActivityCount_ {};
        // The number of successful scaling activities.
        shared_ptr<int32_t> successActivityCount_ {};
        // The time when the statistics are generated. The time is in UTC. Format: yyyyMMddHH.
        shared_ptr<string> time_ {};
        // The number of partially executed scaling activities.
        shared_ptr<int32_t> warningActivityCount_ {};
      };

      virtual bool empty() const override { return this->statistic_ == nullptr; };
      // statistic Field Functions 
      bool hasStatistic() const { return this->statistic_ != nullptr;};
      void deleteStatistic() { this->statistic_ = nullptr;};
      inline const vector<ScalingActivityStatusStatistics::Statistic> & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<ScalingActivityStatusStatistics::Statistic>) };
      inline vector<ScalingActivityStatusStatistics::Statistic> getStatistic() { DARABONBA_PTR_GET(statistic_, vector<ScalingActivityStatusStatistics::Statistic>) };
      inline ScalingActivityStatusStatistics& setStatistic(const vector<ScalingActivityStatusStatistics::Statistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
      inline ScalingActivityStatusStatistics& setStatistic(vector<ScalingActivityStatusStatistics::Statistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    protected:
      shared_ptr<vector<ScalingActivityStatusStatistics::Statistic>> statistic_ {};
    };

    class ScalingActivityErrorCodeStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingActivityErrorCodeStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorStatistic, errorStatistic_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingActivityErrorCodeStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorStatistic, errorStatistic_);
      };
      ScalingActivityErrorCodeStatistics() = default ;
      ScalingActivityErrorCodeStatistics(const ScalingActivityErrorCodeStatistics &) = default ;
      ScalingActivityErrorCodeStatistics(ScalingActivityErrorCodeStatistics &&) = default ;
      ScalingActivityErrorCodeStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingActivityErrorCodeStatistics() = default ;
      ScalingActivityErrorCodeStatistics& operator=(const ScalingActivityErrorCodeStatistics &) = default ;
      ScalingActivityErrorCodeStatistics& operator=(ScalingActivityErrorCodeStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ErrorStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        ErrorStatistic() = default ;
        ErrorStatistic(const ErrorStatistic &) = default ;
        ErrorStatistic(ErrorStatistic &&) = default ;
        ErrorStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorStatistic() = default ;
        ErrorStatistic& operator=(const ErrorStatistic &) = default ;
        ErrorStatistic& operator=(ErrorStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->errorCode_ == nullptr && this->time_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ErrorStatistic& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorStatistic& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline ErrorStatistic& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        // The number of failed scaling activities.
        shared_ptr<int32_t> count_ {};
        // Scaling Activity Error Codes
        shared_ptr<string> errorCode_ {};
        // The time when the statistics are generated. The time is in UTC. Format: yyyyMMddHH.
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->errorStatistic_ == nullptr; };
      // errorStatistic Field Functions 
      bool hasErrorStatistic() const { return this->errorStatistic_ != nullptr;};
      void deleteErrorStatistic() { this->errorStatistic_ = nullptr;};
      inline const vector<ScalingActivityErrorCodeStatistics::ErrorStatistic> & getErrorStatistic() const { DARABONBA_PTR_GET_CONST(errorStatistic_, vector<ScalingActivityErrorCodeStatistics::ErrorStatistic>) };
      inline vector<ScalingActivityErrorCodeStatistics::ErrorStatistic> getErrorStatistic() { DARABONBA_PTR_GET(errorStatistic_, vector<ScalingActivityErrorCodeStatistics::ErrorStatistic>) };
      inline ScalingActivityErrorCodeStatistics& setErrorStatistic(const vector<ScalingActivityErrorCodeStatistics::ErrorStatistic> & errorStatistic) { DARABONBA_PTR_SET_VALUE(errorStatistic_, errorStatistic) };
      inline ScalingActivityErrorCodeStatistics& setErrorStatistic(vector<ScalingActivityErrorCodeStatistics::ErrorStatistic> && errorStatistic) { DARABONBA_PTR_SET_RVALUE(errorStatistic_, errorStatistic) };


    protected:
      shared_ptr<vector<ScalingActivityErrorCodeStatistics::ErrorStatistic>> errorStatistic_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->scalingActivityErrorCodeStatistics_ == nullptr && this->scalingActivityStatusStatistics_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingActivityStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingActivityErrorCodeStatistics Field Functions 
    bool hasScalingActivityErrorCodeStatistics() const { return this->scalingActivityErrorCodeStatistics_ != nullptr;};
    void deleteScalingActivityErrorCodeStatistics() { this->scalingActivityErrorCodeStatistics_ = nullptr;};
    inline const DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics & getScalingActivityErrorCodeStatistics() const { DARABONBA_PTR_GET_CONST(scalingActivityErrorCodeStatistics_, DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics getScalingActivityErrorCodeStatistics() { DARABONBA_PTR_GET(scalingActivityErrorCodeStatistics_, DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityErrorCodeStatistics(const DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics & scalingActivityErrorCodeStatistics) { DARABONBA_PTR_SET_VALUE(scalingActivityErrorCodeStatistics_, scalingActivityErrorCodeStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityErrorCodeStatistics(DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics && scalingActivityErrorCodeStatistics) { DARABONBA_PTR_SET_RVALUE(scalingActivityErrorCodeStatistics_, scalingActivityErrorCodeStatistics) };


    // scalingActivityStatusStatistics Field Functions 
    bool hasScalingActivityStatusStatistics() const { return this->scalingActivityStatusStatistics_ != nullptr;};
    void deleteScalingActivityStatusStatistics() { this->scalingActivityStatusStatistics_ = nullptr;};
    inline const DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics & getScalingActivityStatusStatistics() const { DARABONBA_PTR_GET_CONST(scalingActivityStatusStatistics_, DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics getScalingActivityStatusStatistics() { DARABONBA_PTR_GET(scalingActivityStatusStatistics_, DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityStatusStatistics(const DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics & scalingActivityStatusStatistics) { DARABONBA_PTR_SET_VALUE(scalingActivityStatusStatistics_, scalingActivityStatusStatistics) };
    inline DescribeScalingActivityStatisticsResponseBody& setScalingActivityStatusStatistics(DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics && scalingActivityStatusStatistics) { DARABONBA_PTR_SET_RVALUE(scalingActivityStatusStatistics_, scalingActivityStatusStatistics) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The error message statistics of the scaling activity.
    shared_ptr<DescribeScalingActivityStatisticsResponseBody::ScalingActivityErrorCodeStatistics> scalingActivityErrorCodeStatistics_ {};
    // The statistical metrics of the scaling activity status.
    shared_ptr<DescribeScalingActivityStatisticsResponseBody::ScalingActivityStatusStatistics> scalingActivityStatusStatistics_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
