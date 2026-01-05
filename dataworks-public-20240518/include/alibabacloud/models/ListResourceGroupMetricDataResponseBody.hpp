// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListResourceGroupMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricData, metricData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricData, metricData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListResourceGroupMetricDataResponseBody() = default ;
    ListResourceGroupMetricDataResponseBody(const ListResourceGroupMetricDataResponseBody &) = default ;
    ListResourceGroupMetricDataResponseBody(ListResourceGroupMetricDataResponseBody &&) = default ;
    ListResourceGroupMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupMetricDataResponseBody() = default ;
    ListResourceGroupMetricDataResponseBody& operator=(const ListResourceGroupMetricDataResponseBody &) = default ;
    ListResourceGroupMetricDataResponseBody& operator=(ListResourceGroupMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricData& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, MetricData& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      MetricData() = default ;
      MetricData(const MetricData &) = default ;
      MetricData(MetricData &&) = default ;
      MetricData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricData() = default ;
      MetricData& operator=(const MetricData &) = default ;
      MetricData& operator=(MetricData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
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
        inline Metrics& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline Metrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The timestamp.
        shared_ptr<int64_t> timestamp_ {};
        // The value of the metric data.
        shared_ptr<double> value_ {};
      };

      virtual bool empty() const override { return this->id_ == nullptr
        && this->metricName_ == nullptr && this->metrics_ == nullptr && this->nextToken_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline MetricData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline MetricData& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<MetricData::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<MetricData::Metrics>) };
      inline vector<MetricData::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<MetricData::Metrics>) };
      inline MetricData& setMetrics(const vector<MetricData::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline MetricData& setMetrics(vector<MetricData::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline MetricData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The unique identifier for the resource group.
      shared_ptr<string> id_ {};
      // The metric name. Valid values:
      // 
      // *   CUSpec: Maximum CU capacity of the resource group, in CUs.
      // *   CUUsage: CU usage of the resource group, in CUs.
      // *   CUUtilization: CU utilization of the resource group, in %.
      // *   SlotSpec: Maximum number of concurrent slots for resource group scheduling, in slots.
      // *   SlotUsage: Used concurrency for resource group scheduling, in slots.
      // *   SchedulerCUMaxSpec: Maximum CU quota for data computing, in CUs.
      // *   SchedulerCUUsage: CU usage for data computing, in CUs.
      // *   SchedulerCUMinSpec: Minimum guaranteed CUs for data computing, in CUs.
      // *   DataIntegrationCUMaxSpec: Maximum CU quota for Data Integration, in CUs.
      // *   DataIntegrationCUUsage: CU usage for Data Integration, in CUs.
      // *   DataIntegrationCUMinSpec: Minimum guaranteed CUs for Data Integration, in CUs.
      // *   DataServiceCUMaxSpec: Maximum CU quota for DataService Studio, in CUs.
      // *   DataServiceCUUsage: CU usage for DataService Studio, in CUs.
      // *   DataServiceCUMinSpec: Minimum guaranteed CUs for DataService Studio, in CUs.
      // *   ServerIdeCUMaxSpec: Maximum CU quota for personal development environment, in CUs.
      // *   ServerIdeCUUsage: CU usage for personal development environment, in CUs.
      // *   ServerIdeCUMinSpec: Minimum guaranteed CUs for personal development environment, in CUs.
      shared_ptr<string> metricName_ {};
      // The list of metric data.
      shared_ptr<vector<MetricData::Metrics>> metrics_ {};
      // The pagination cursor.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->metricData_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // metricData Field Functions 
    bool hasMetricData() const { return this->metricData_ != nullptr;};
    void deleteMetricData() { this->metricData_ = nullptr;};
    inline const ListResourceGroupMetricDataResponseBody::MetricData & getMetricData() const { DARABONBA_PTR_GET_CONST(metricData_, ListResourceGroupMetricDataResponseBody::MetricData) };
    inline ListResourceGroupMetricDataResponseBody::MetricData getMetricData() { DARABONBA_PTR_GET(metricData_, ListResourceGroupMetricDataResponseBody::MetricData) };
    inline ListResourceGroupMetricDataResponseBody& setMetricData(const ListResourceGroupMetricDataResponseBody::MetricData & metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };
    inline ListResourceGroupMetricDataResponseBody& setMetricData(ListResourceGroupMetricDataResponseBody::MetricData && metricData) { DARABONBA_PTR_SET_RVALUE(metricData_, metricData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceGroupMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListResourceGroupMetricDataResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Monitoring metric data.
    shared_ptr<ListResourceGroupMetricDataResponseBody::MetricData> metricData_ {};
    // The request ID, used for locating logs and troubleshooting.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
