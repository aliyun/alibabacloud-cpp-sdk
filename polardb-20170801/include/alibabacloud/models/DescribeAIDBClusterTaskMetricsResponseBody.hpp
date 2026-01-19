// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERTASKMETRICSRESPONSEBODY_HPP_
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
  class DescribeAIDBClusterTaskMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterTaskMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterTaskMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RelativeDbClusterId, relativeDbClusterId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAIDBClusterTaskMetricsResponseBody() = default ;
    DescribeAIDBClusterTaskMetricsResponseBody(const DescribeAIDBClusterTaskMetricsResponseBody &) = default ;
    DescribeAIDBClusterTaskMetricsResponseBody(DescribeAIDBClusterTaskMetricsResponseBody &&) = default ;
    DescribeAIDBClusterTaskMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterTaskMetricsResponseBody() = default ;
    DescribeAIDBClusterTaskMetricsResponseBody& operator=(const DescribeAIDBClusterTaskMetricsResponseBody &) = default ;
    DescribeAIDBClusterTaskMetricsResponseBody& operator=(DescribeAIDBClusterTaskMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(SlsMetricsItems, slsMetricsItems_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(SlsMetricsItems, slsMetricsItems_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlsMetricsItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsMetricsItems& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
          DARABONBA_PTR_TO_JSON(Epoch, epoch_);
          DARABONBA_PTR_TO_JSON(GlobalStep, globalStep_);
          DARABONBA_PTR_TO_JSON(LogTime, logTime_);
          DARABONBA_ANY_TO_JSON(Metric, metric_);
          DARABONBA_PTR_TO_JSON(MetricType, metricType_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        };
        friend void from_json(const Darabonba::Json& j, SlsMetricsItems& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
          DARABONBA_PTR_FROM_JSON(Epoch, epoch_);
          DARABONBA_PTR_FROM_JSON(GlobalStep, globalStep_);
          DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
          DARABONBA_ANY_FROM_JSON(Metric, metric_);
          DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        };
        SlsMetricsItems() = default ;
        SlsMetricsItems(const SlsMetricsItems &) = default ;
        SlsMetricsItems(SlsMetricsItems &&) = default ;
        SlsMetricsItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlsMetricsItems() = default ;
        SlsMetricsItems& operator=(const SlsMetricsItems &) = default ;
        SlsMetricsItems& operator=(SlsMetricsItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentStep_ == nullptr
        && this->epoch_ == nullptr && this->globalStep_ == nullptr && this->logTime_ == nullptr && this->metric_ == nullptr && this->metricType_ == nullptr
        && this->timestamp_ == nullptr; };
        // currentStep Field Functions 
        bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
        void deleteCurrentStep() { this->currentStep_ = nullptr;};
        inline int32_t getCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, 0) };
        inline SlsMetricsItems& setCurrentStep(int32_t currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


        // epoch Field Functions 
        bool hasEpoch() const { return this->epoch_ != nullptr;};
        void deleteEpoch() { this->epoch_ = nullptr;};
        inline double getEpoch() const { DARABONBA_PTR_GET_DEFAULT(epoch_, 0.0) };
        inline SlsMetricsItems& setEpoch(double epoch) { DARABONBA_PTR_SET_VALUE(epoch_, epoch) };


        // globalStep Field Functions 
        bool hasGlobalStep() const { return this->globalStep_ != nullptr;};
        void deleteGlobalStep() { this->globalStep_ = nullptr;};
        inline int32_t getGlobalStep() const { DARABONBA_PTR_GET_DEFAULT(globalStep_, 0) };
        inline SlsMetricsItems& setGlobalStep(int32_t globalStep) { DARABONBA_PTR_SET_VALUE(globalStep_, globalStep) };


        // logTime Field Functions 
        bool hasLogTime() const { return this->logTime_ != nullptr;};
        void deleteLogTime() { this->logTime_ = nullptr;};
        inline string getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, "") };
        inline SlsMetricsItems& setLogTime(string logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


        // metric Field Functions 
        bool hasMetric() const { return this->metric_ != nullptr;};
        void deleteMetric() { this->metric_ = nullptr;};
        inline         const Darabonba::Json & getMetric() const { DARABONBA_GET(metric_) };
        Darabonba::Json & getMetric() { DARABONBA_GET(metric_) };
        inline SlsMetricsItems& setMetric(const Darabonba::Json & metric) { DARABONBA_SET_VALUE(metric_, metric) };
        inline SlsMetricsItems& setMetric(Darabonba::Json && metric) { DARABONBA_SET_RVALUE(metric_, metric) };


        // metricType Field Functions 
        bool hasMetricType() const { return this->metricType_ != nullptr;};
        void deleteMetricType() { this->metricType_ = nullptr;};
        inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
        inline SlsMetricsItems& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
        inline SlsMetricsItems& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      protected:
        shared_ptr<int32_t> currentStep_ {};
        shared_ptr<double> epoch_ {};
        shared_ptr<int32_t> globalStep_ {};
        shared_ptr<string> logTime_ {};
        Darabonba::Json metric_ {};
        shared_ptr<string> metricType_ {};
        shared_ptr<string> timestamp_ {};
      };

      virtual bool empty() const override { return this->slsMetricsItems_ == nullptr; };
      // slsMetricsItems Field Functions 
      bool hasSlsMetricsItems() const { return this->slsMetricsItems_ != nullptr;};
      void deleteSlsMetricsItems() { this->slsMetricsItems_ = nullptr;};
      inline const vector<Items::SlsMetricsItems> & getSlsMetricsItems() const { DARABONBA_PTR_GET_CONST(slsMetricsItems_, vector<Items::SlsMetricsItems>) };
      inline vector<Items::SlsMetricsItems> getSlsMetricsItems() { DARABONBA_PTR_GET(slsMetricsItems_, vector<Items::SlsMetricsItems>) };
      inline Items& setSlsMetricsItems(const vector<Items::SlsMetricsItems> & slsMetricsItems) { DARABONBA_PTR_SET_VALUE(slsMetricsItems_, slsMetricsItems) };
      inline Items& setSlsMetricsItems(vector<Items::SlsMetricsItems> && slsMetricsItems) { DARABONBA_PTR_SET_RVALUE(slsMetricsItems_, slsMetricsItems) };


    protected:
      shared_ptr<vector<Items::SlsMetricsItems>> slsMetricsItems_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->items_ == nullptr && this->metricType_ == nullptr && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr
        && this->pageSize_ == nullptr && this->relativeDbClusterId_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeAIDBClusterTaskMetricsResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeAIDBClusterTaskMetricsResponseBody::Items) };
    inline DescribeAIDBClusterTaskMetricsResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeAIDBClusterTaskMetricsResponseBody::Items) };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setItems(const DescribeAIDBClusterTaskMetricsResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setItems(DescribeAIDBClusterTaskMetricsResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // relativeDbClusterId Field Functions 
    bool hasRelativeDbClusterId() const { return this->relativeDbClusterId_ != nullptr;};
    void deleteRelativeDbClusterId() { this->relativeDbClusterId_ = nullptr;};
    inline string getRelativeDbClusterId() const { DARABONBA_PTR_GET_DEFAULT(relativeDbClusterId_, "") };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setRelativeDbClusterId(string relativeDbClusterId) { DARABONBA_PTR_SET_VALUE(relativeDbClusterId_, relativeDbClusterId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAIDBClusterTaskMetricsResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeAIDBClusterTaskMetricsResponseBody::Items> items_ {};
    shared_ptr<string> metricType_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int32_t> pageRecordCount_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> relativeDbClusterId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
