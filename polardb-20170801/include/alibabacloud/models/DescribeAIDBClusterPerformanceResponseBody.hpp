// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAIDBClusterPerformanceResponseBody() = default ;
    DescribeAIDBClusterPerformanceResponseBody(const DescribeAIDBClusterPerformanceResponseBody &) = default ;
    DescribeAIDBClusterPerformanceResponseBody(DescribeAIDBClusterPerformanceResponseBody &&) = default ;
    DescribeAIDBClusterPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterPerformanceResponseBody() = default ;
    DescribeAIDBClusterPerformanceResponseBody& operator=(const DescribeAIDBClusterPerformanceResponseBody &) = default ;
    DescribeAIDBClusterPerformanceResponseBody& operator=(DescribeAIDBClusterPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PerformanceKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PerformanceKeys& obj) { 
        DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_TO_JSON(Measurement, measurement_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Points, points_);
      };
      friend void from_json(const Darabonba::Json& j, PerformanceKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
        DARABONBA_PTR_FROM_JSON(Measurement, measurement_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
      };
      PerformanceKeys() = default ;
      PerformanceKeys(const PerformanceKeys &) = default ;
      PerformanceKeys(PerformanceKeys &&) = default ;
      PerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PerformanceKeys() = default ;
      PerformanceKeys& operator=(const PerformanceKeys &) = default ;
      PerformanceKeys& operator=(PerformanceKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Points : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Points& obj) { 
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Points& obj) { 
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->timestamp_ == nullptr
        && this->value_ == nullptr; };
        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline Points& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Points& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<int64_t> timestamp_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && this->measurement_ == nullptr && this->metricName_ == nullptr && this->points_ == nullptr; };
      // DBNodeId Field Functions 
      bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
      void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
      inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
      inline PerformanceKeys& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


      // measurement Field Functions 
      bool hasMeasurement() const { return this->measurement_ != nullptr;};
      void deleteMeasurement() { this->measurement_ = nullptr;};
      inline string getMeasurement() const { DARABONBA_PTR_GET_DEFAULT(measurement_, "") };
      inline PerformanceKeys& setMeasurement(string measurement) { DARABONBA_PTR_SET_VALUE(measurement_, measurement) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline PerformanceKeys& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline const vector<PerformanceKeys::Points> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<PerformanceKeys::Points>) };
      inline vector<PerformanceKeys::Points> getPoints() { DARABONBA_PTR_GET(points_, vector<PerformanceKeys::Points>) };
      inline PerformanceKeys& setPoints(const vector<PerformanceKeys::Points> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
      inline PerformanceKeys& setPoints(vector<PerformanceKeys::Points> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    protected:
      shared_ptr<string> DBNodeId_ {};
      shared_ptr<string> measurement_ {};
      shared_ptr<string> metricName_ {};
      shared_ptr<vector<PerformanceKeys::Points>> points_ {};
    };

    virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->endTime_ == nullptr && this->interval_ == nullptr
        && this->performanceKeys_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // performanceKeys Field Functions 
    bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
    void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
    inline const vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys> & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys>) };
    inline vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys> getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys>) };
    inline DescribeAIDBClusterPerformanceResponseBody& setPerformanceKeys(const vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys> & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
    inline DescribeAIDBClusterPerformanceResponseBody& setPerformanceKeys(vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys> && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAIDBClusterPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> apiKey_ {};
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> DBType_ {};
    shared_ptr<string> DBVersion_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> interval_ {};
    shared_ptr<vector<DescribeAIDBClusterPerformanceResponseBody::PerformanceKeys>> performanceKeys_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
