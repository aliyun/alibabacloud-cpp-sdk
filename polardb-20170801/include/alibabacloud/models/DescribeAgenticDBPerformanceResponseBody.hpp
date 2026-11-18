// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGENTICDBPERFORMANCERESPONSEBODY_HPP_
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
  class DescribeAgenticDBPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAgenticDBPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAgenticDBPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAgenticDBPerformanceResponseBody() = default ;
    DescribeAgenticDBPerformanceResponseBody(const DescribeAgenticDBPerformanceResponseBody &) = default ;
    DescribeAgenticDBPerformanceResponseBody(DescribeAgenticDBPerformanceResponseBody &&) = default ;
    DescribeAgenticDBPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAgenticDBPerformanceResponseBody() = default ;
    DescribeAgenticDBPerformanceResponseBody& operator=(const DescribeAgenticDBPerformanceResponseBody &) = default ;
    DescribeAgenticDBPerformanceResponseBody& operator=(DescribeAgenticDBPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PerformanceKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PerformanceKeys& obj) { 
        DARABONBA_PTR_TO_JSON(performanceKeys, performanceKeys_);
      };
      friend void from_json(const Darabonba::Json& j, PerformanceKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(performanceKeys, performanceKeys_);
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
      class PerformanceKeysItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PerformanceKeysItem& obj) { 
          DARABONBA_PTR_TO_JSON(BranchId, branchId_);
          DARABONBA_PTR_TO_JSON(Measurement, measurement_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Points, points_);
        };
        friend void from_json(const Darabonba::Json& j, PerformanceKeysItem& obj) { 
          DARABONBA_PTR_FROM_JSON(BranchId, branchId_);
          DARABONBA_PTR_FROM_JSON(Measurement, measurement_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(Points, points_);
        };
        PerformanceKeysItem() = default ;
        PerformanceKeysItem(const PerformanceKeysItem &) = default ;
        PerformanceKeysItem(PerformanceKeysItem &&) = default ;
        PerformanceKeysItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PerformanceKeysItem() = default ;
        PerformanceKeysItem& operator=(const PerformanceKeysItem &) = default ;
        PerformanceKeysItem& operator=(PerformanceKeysItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Points : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Points& obj) { 
            DARABONBA_PTR_TO_JSON(points, points_);
          };
          friend void from_json(const Darabonba::Json& j, Points& obj) { 
            DARABONBA_PTR_FROM_JSON(points, points_);
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
          class PointsItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PointsItem& obj) { 
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, PointsItem& obj) { 
              DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            PointsItem() = default ;
            PointsItem(const PointsItem &) = default ;
            PointsItem(PointsItem &&) = default ;
            PointsItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PointsItem() = default ;
            PointsItem& operator=(const PointsItem &) = default ;
            PointsItem& operator=(PointsItem &&) = default ;
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
            inline PointsItem& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline PointsItem& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<int64_t> timestamp_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->points_ == nullptr; };
          // points Field Functions 
          bool hasPoints() const { return this->points_ != nullptr;};
          void deletePoints() { this->points_ = nullptr;};
          inline const vector<Points::PointsItem> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<Points::PointsItem>) };
          inline vector<Points::PointsItem> getPoints() { DARABONBA_PTR_GET(points_, vector<Points::PointsItem>) };
          inline Points& setPoints(const vector<Points::PointsItem> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
          inline Points& setPoints(vector<Points::PointsItem> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


        protected:
          shared_ptr<vector<Points::PointsItem>> points_ {};
        };

        virtual bool empty() const override { return this->branchId_ == nullptr
        && this->measurement_ == nullptr && this->metricName_ == nullptr && this->points_ == nullptr; };
        // branchId Field Functions 
        bool hasBranchId() const { return this->branchId_ != nullptr;};
        void deleteBranchId() { this->branchId_ = nullptr;};
        inline string getBranchId() const { DARABONBA_PTR_GET_DEFAULT(branchId_, "") };
        inline PerformanceKeysItem& setBranchId(string branchId) { DARABONBA_PTR_SET_VALUE(branchId_, branchId) };


        // measurement Field Functions 
        bool hasMeasurement() const { return this->measurement_ != nullptr;};
        void deleteMeasurement() { this->measurement_ = nullptr;};
        inline string getMeasurement() const { DARABONBA_PTR_GET_DEFAULT(measurement_, "") };
        inline PerformanceKeysItem& setMeasurement(string measurement) { DARABONBA_PTR_SET_VALUE(measurement_, measurement) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline PerformanceKeysItem& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


        // points Field Functions 
        bool hasPoints() const { return this->points_ != nullptr;};
        void deletePoints() { this->points_ = nullptr;};
        inline const PerformanceKeysItem::Points & getPoints() const { DARABONBA_PTR_GET_CONST(points_, PerformanceKeysItem::Points) };
        inline PerformanceKeysItem::Points getPoints() { DARABONBA_PTR_GET(points_, PerformanceKeysItem::Points) };
        inline PerformanceKeysItem& setPoints(const PerformanceKeysItem::Points & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
        inline PerformanceKeysItem& setPoints(PerformanceKeysItem::Points && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


      protected:
        shared_ptr<string> branchId_ {};
        shared_ptr<string> measurement_ {};
        shared_ptr<string> metricName_ {};
        shared_ptr<PerformanceKeysItem::Points> points_ {};
      };

      virtual bool empty() const override { return this->performanceKeys_ == nullptr; };
      // performanceKeys Field Functions 
      bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
      void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
      inline const vector<PerformanceKeys::PerformanceKeysItem> & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, vector<PerformanceKeys::PerformanceKeysItem>) };
      inline vector<PerformanceKeys::PerformanceKeysItem> getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, vector<PerformanceKeys::PerformanceKeysItem>) };
      inline PerformanceKeys& setPerformanceKeys(const vector<PerformanceKeys::PerformanceKeysItem> & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
      inline PerformanceKeys& setPerformanceKeys(vector<PerformanceKeys::PerformanceKeysItem> && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    protected:
      shared_ptr<vector<PerformanceKeys::PerformanceKeysItem>> performanceKeys_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->performanceKeys_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAgenticDBPerformanceResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAgenticDBPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // performanceKeys Field Functions 
    bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
    void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
    inline const DescribeAgenticDBPerformanceResponseBody::PerformanceKeys & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, DescribeAgenticDBPerformanceResponseBody::PerformanceKeys) };
    inline DescribeAgenticDBPerformanceResponseBody::PerformanceKeys getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, DescribeAgenticDBPerformanceResponseBody::PerformanceKeys) };
    inline DescribeAgenticDBPerformanceResponseBody& setPerformanceKeys(const DescribeAgenticDBPerformanceResponseBody::PerformanceKeys & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
    inline DescribeAgenticDBPerformanceResponseBody& setPerformanceKeys(DescribeAgenticDBPerformanceResponseBody::PerformanceKeys && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAgenticDBPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAgenticDBPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The AgenticDB cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query. Specify the time in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeAgenticDBPerformanceResponseBody::PerformanceKeys> performanceKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the query. Specify the time in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
