// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYPERFORMANCERESPONSEBODY_HPP_
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
  class DescribeDBProxyPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBType, DBType_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBType, DBType_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBProxyPerformanceResponseBody() = default ;
    DescribeDBProxyPerformanceResponseBody(const DescribeDBProxyPerformanceResponseBody &) = default ;
    DescribeDBProxyPerformanceResponseBody(DescribeDBProxyPerformanceResponseBody &&) = default ;
    DescribeDBProxyPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyPerformanceResponseBody() = default ;
    DescribeDBProxyPerformanceResponseBody& operator=(const DescribeDBProxyPerformanceResponseBody &) = default ;
    DescribeDBProxyPerformanceResponseBody& operator=(DescribeDBProxyPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PerformanceKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PerformanceKeys& obj) { 
        DARABONBA_PTR_TO_JSON(PerformanceItem, performanceItem_);
      };
      friend void from_json(const Darabonba::Json& j, PerformanceKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(PerformanceItem, performanceItem_);
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
      class PerformanceItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PerformanceItem& obj) { 
          DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_TO_JSON(Measurement, measurement_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Points, points_);
        };
        friend void from_json(const Darabonba::Json& j, PerformanceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
          DARABONBA_PTR_FROM_JSON(Measurement, measurement_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Points, points_);
        };
        PerformanceItem() = default ;
        PerformanceItem(const PerformanceItem &) = default ;
        PerformanceItem(PerformanceItem &&) = default ;
        PerformanceItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PerformanceItem() = default ;
        PerformanceItem& operator=(const PerformanceItem &) = default ;
        PerformanceItem& operator=(PerformanceItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Points : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Points& obj) { 
            DARABONBA_PTR_TO_JSON(PerformanceItemValue, performanceItemValue_);
          };
          friend void from_json(const Darabonba::Json& j, Points& obj) { 
            DARABONBA_PTR_FROM_JSON(PerformanceItemValue, performanceItemValue_);
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
          class PerformanceItemValue : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PerformanceItemValue& obj) { 
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, PerformanceItemValue& obj) { 
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            PerformanceItemValue() = default ;
            PerformanceItemValue(const PerformanceItemValue &) = default ;
            PerformanceItemValue(PerformanceItemValue &&) = default ;
            PerformanceItemValue(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PerformanceItemValue() = default ;
            PerformanceItemValue& operator=(const PerformanceItemValue &) = default ;
            PerformanceItemValue& operator=(PerformanceItemValue &&) = default ;
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
            inline PerformanceItemValue& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline PerformanceItemValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The time when the metric value was collected. This value is a timestamp in milliseconds.
            shared_ptr<int64_t> timestamp_ {};
            // The value of the metric.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->performanceItemValue_ == nullptr; };
          // performanceItemValue Field Functions 
          bool hasPerformanceItemValue() const { return this->performanceItemValue_ != nullptr;};
          void deletePerformanceItemValue() { this->performanceItemValue_ = nullptr;};
          inline const vector<Points::PerformanceItemValue> & getPerformanceItemValue() const { DARABONBA_PTR_GET_CONST(performanceItemValue_, vector<Points::PerformanceItemValue>) };
          inline vector<Points::PerformanceItemValue> getPerformanceItemValue() { DARABONBA_PTR_GET(performanceItemValue_, vector<Points::PerformanceItemValue>) };
          inline Points& setPerformanceItemValue(const vector<Points::PerformanceItemValue> & performanceItemValue) { DARABONBA_PTR_SET_VALUE(performanceItemValue_, performanceItemValue) };
          inline Points& setPerformanceItemValue(vector<Points::PerformanceItemValue> && performanceItemValue) { DARABONBA_PTR_SET_RVALUE(performanceItemValue_, performanceItemValue) };


        protected:
          shared_ptr<vector<Points::PerformanceItemValue>> performanceItemValue_ {};
        };

        virtual bool empty() const override { return this->DBNodeId_ == nullptr
        && this->measurement_ == nullptr && this->metricName_ == nullptr && this->points_ == nullptr; };
        // DBNodeId Field Functions 
        bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
        void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
        inline string getDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
        inline PerformanceItem& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


        // measurement Field Functions 
        bool hasMeasurement() const { return this->measurement_ != nullptr;};
        void deleteMeasurement() { this->measurement_ = nullptr;};
        inline string getMeasurement() const { DARABONBA_PTR_GET_DEFAULT(measurement_, "") };
        inline PerformanceItem& setMeasurement(string measurement) { DARABONBA_PTR_SET_VALUE(measurement_, measurement) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline PerformanceItem& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // points Field Functions 
        bool hasPoints() const { return this->points_ != nullptr;};
        void deletePoints() { this->points_ = nullptr;};
        inline const PerformanceItem::Points & getPoints() const { DARABONBA_PTR_GET_CONST(points_, PerformanceItem::Points) };
        inline PerformanceItem::Points getPoints() { DARABONBA_PTR_GET(points_, PerformanceItem::Points) };
        inline PerformanceItem& setPoints(const PerformanceItem::Points & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
        inline PerformanceItem& setPoints(PerformanceItem::Points && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


      protected:
        // The ID of the node.
        shared_ptr<string> DBNodeId_ {};
        // The performance metric.
        shared_ptr<string> measurement_ {};
        // The name of the performance metric.
        shared_ptr<string> metricName_ {};
        // The list of the performance metrics.
        shared_ptr<PerformanceItem::Points> points_ {};
      };

      virtual bool empty() const override { return this->performanceItem_ == nullptr; };
      // performanceItem Field Functions 
      bool hasPerformanceItem() const { return this->performanceItem_ != nullptr;};
      void deletePerformanceItem() { this->performanceItem_ = nullptr;};
      inline const vector<PerformanceKeys::PerformanceItem> & getPerformanceItem() const { DARABONBA_PTR_GET_CONST(performanceItem_, vector<PerformanceKeys::PerformanceItem>) };
      inline vector<PerformanceKeys::PerformanceItem> getPerformanceItem() { DARABONBA_PTR_GET(performanceItem_, vector<PerformanceKeys::PerformanceItem>) };
      inline PerformanceKeys& setPerformanceItem(const vector<PerformanceKeys::PerformanceItem> & performanceItem) { DARABONBA_PTR_SET_VALUE(performanceItem_, performanceItem) };
      inline PerformanceKeys& setPerformanceItem(vector<PerformanceKeys::PerformanceItem> && performanceItem) { DARABONBA_PTR_SET_RVALUE(performanceItem_, performanceItem) };


    protected:
      shared_ptr<vector<PerformanceKeys::PerformanceItem>> performanceItem_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->DBType_ == nullptr && this->DBVersion_ == nullptr && this->endTime_ == nullptr && this->performanceKeys_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBProxyPerformanceResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBType Field Functions 
    bool hasDBType() const { return this->DBType_ != nullptr;};
    void deleteDBType() { this->DBType_ = nullptr;};
    inline string getDBType() const { DARABONBA_PTR_GET_DEFAULT(DBType_, "") };
    inline DescribeDBProxyPerformanceResponseBody& setDBType(string DBType) { DARABONBA_PTR_SET_VALUE(DBType_, DBType) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string getDBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeDBProxyPerformanceResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBProxyPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // performanceKeys Field Functions 
    bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
    void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
    inline const DescribeDBProxyPerformanceResponseBody::PerformanceKeys & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, DescribeDBProxyPerformanceResponseBody::PerformanceKeys) };
    inline DescribeDBProxyPerformanceResponseBody::PerformanceKeys getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, DescribeDBProxyPerformanceResponseBody::PerformanceKeys) };
    inline DescribeDBProxyPerformanceResponseBody& setPerformanceKeys(const DescribeDBProxyPerformanceResponseBody::PerformanceKeys & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
    inline DescribeDBProxyPerformanceResponseBody& setPerformanceKeys(DescribeDBProxyPerformanceResponseBody::PerformanceKeys && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBProxyPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBProxyPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the cluster.
    shared_ptr<string> DBClusterId_ {};
    // The type of the database engine.
    shared_ptr<string> DBType_ {};
    // The version of the database engine.
    shared_ptr<string> DBVersion_ {};
    // The end time of the query. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // Details about the performance metrics.
    shared_ptr<DescribeDBProxyPerformanceResponseBody::PerformanceKeys> performanceKeys_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start time of the query. The time is in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
