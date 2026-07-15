// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPERFORMANCERESPONSEBODY_HPP_
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
  class DescribeApplicationPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeApplicationPerformanceResponseBody() = default ;
    DescribeApplicationPerformanceResponseBody(const DescribeApplicationPerformanceResponseBody &) = default ;
    DescribeApplicationPerformanceResponseBody(DescribeApplicationPerformanceResponseBody &&) = default ;
    DescribeApplicationPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationPerformanceResponseBody() = default ;
    DescribeApplicationPerformanceResponseBody& operator=(const DescribeApplicationPerformanceResponseBody &) = default ;
    DescribeApplicationPerformanceResponseBody& operator=(DescribeApplicationPerformanceResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
          DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
          DARABONBA_PTR_TO_JSON(Measurement, measurement_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
          DARABONBA_PTR_TO_JSON(Points, points_);
        };
        friend void from_json(const Darabonba::Json& j, PerformanceItem& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
          DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
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
              DARABONBA_PTR_TO_JSON(Step, step_);
              DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, PerformanceItemValue& obj) { 
              DARABONBA_PTR_FROM_JSON(Step, step_);
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
            virtual bool empty() const override { return this->step_ == nullptr
        && this->timestamp_ == nullptr && this->value_ == nullptr; };
            // step Field Functions 
            bool hasStep() const { return this->step_ != nullptr;};
            void deleteStep() { this->step_ = nullptr;};
            inline int64_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0L) };
            inline PerformanceItemValue& setStep(int64_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


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
            shared_ptr<int64_t> step_ {};
            shared_ptr<int64_t> timestamp_ {};
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

        virtual bool empty() const override { return this->componentId_ == nullptr
        && this->componentType_ == nullptr && this->measurement_ == nullptr && this->metricName_ == nullptr && this->points_ == nullptr; };
        // componentId Field Functions 
        bool hasComponentId() const { return this->componentId_ != nullptr;};
        void deleteComponentId() { this->componentId_ = nullptr;};
        inline string getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
        inline PerformanceItem& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline PerformanceItem& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


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
        shared_ptr<string> componentId_ {};
        shared_ptr<string> componentType_ {};
        shared_ptr<string> measurement_ {};
        shared_ptr<string> metricName_ {};
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

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->endTime_ == nullptr && this->interval_ == nullptr && this->performanceKeys_ == nullptr && this->requestId_ == nullptr
        && this->startTime_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationPerformanceResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline DescribeApplicationPerformanceResponseBody& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApplicationPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeApplicationPerformanceResponseBody& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // performanceKeys Field Functions 
    bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
    void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
    inline const DescribeApplicationPerformanceResponseBody::PerformanceKeys & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, DescribeApplicationPerformanceResponseBody::PerformanceKeys) };
    inline DescribeApplicationPerformanceResponseBody::PerformanceKeys getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, DescribeApplicationPerformanceResponseBody::PerformanceKeys) };
    inline DescribeApplicationPerformanceResponseBody& setPerformanceKeys(const DescribeApplicationPerformanceResponseBody::PerformanceKeys & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
    inline DescribeApplicationPerformanceResponseBody& setPerformanceKeys(DescribeApplicationPerformanceResponseBody::PerformanceKeys && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApplicationPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The application cluster ID.
    shared_ptr<string> applicationId_ {};
    // The application type.
    shared_ptr<string> applicationType_ {};
    // The end time of the query. The time is in UTC and follows the `yyyy-MM-ddTHH:mm:ssZ` format.
    shared_ptr<string> endTime_ {};
    shared_ptr<string> interval_ {};
    // The performance metrics.
    shared_ptr<DescribeApplicationPerformanceResponseBody::PerformanceKeys> performanceKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the query. The time is in UTC and follows the `yyyy-MM-ddTHH:mm:ssZ` format.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
