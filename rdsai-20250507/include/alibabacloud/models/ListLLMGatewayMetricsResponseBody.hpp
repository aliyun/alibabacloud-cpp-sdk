// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMGATEWAYMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMGATEWAYMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListLLMGatewayMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLLMGatewayMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(MetricItems, metricItems_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLLMGatewayMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(MetricItems, metricItems_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLLMGatewayMetricsResponseBody() = default ;
    ListLLMGatewayMetricsResponseBody(const ListLLMGatewayMetricsResponseBody &) = default ;
    ListLLMGatewayMetricsResponseBody(ListLLMGatewayMetricsResponseBody &&) = default ;
    ListLLMGatewayMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLLMGatewayMetricsResponseBody() = default ;
    ListLLMGatewayMetricsResponseBody& operator=(const ListLLMGatewayMetricsResponseBody &) = default ;
    ListLLMGatewayMetricsResponseBody& operator=(ListLLMGatewayMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricItems& obj) { 
        DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, MetricItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      MetricItems() = default ;
      MetricItems(const MetricItems &) = default ;
      MetricItems(MetricItems &&) = default ;
      MetricItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricItems() = default ;
      MetricItems& operator=(const MetricItems &) = default ;
      MetricItems& operator=(MetricItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataPoints : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataPoints& obj) { 
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataPoints& obj) { 
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DataPoints() = default ;
        DataPoints(const DataPoints &) = default ;
        DataPoints(DataPoints &&) = default ;
        DataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataPoints() = default ;
        DataPoints& operator=(const DataPoints &) = default ;
        DataPoints& operator=(DataPoints &&) = default ;
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
        inline DataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DataPoints& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<int64_t> timestamp_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->dataPoints_ == nullptr
        && this->key_ == nullptr && this->model_ == nullptr && this->unit_ == nullptr; };
      // dataPoints Field Functions 
      bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
      void deleteDataPoints() { this->dataPoints_ = nullptr;};
      inline const vector<MetricItems::DataPoints> & getDataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, vector<MetricItems::DataPoints>) };
      inline vector<MetricItems::DataPoints> getDataPoints() { DARABONBA_PTR_GET(dataPoints_, vector<MetricItems::DataPoints>) };
      inline MetricItems& setDataPoints(const vector<MetricItems::DataPoints> & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
      inline MetricItems& setDataPoints(vector<MetricItems::DataPoints> && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline MetricItems& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline MetricItems& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline MetricItems& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<vector<MetricItems::DataPoints>> dataPoints_ {};
      shared_ptr<string> key_ {};
      shared_ptr<string> model_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->granularity_ == nullptr
        && this->metricItems_ == nullptr && this->metricType_ == nullptr && this->requestId_ == nullptr; };
    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline ListLLMGatewayMetricsResponseBody& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // metricItems Field Functions 
    bool hasMetricItems() const { return this->metricItems_ != nullptr;};
    void deleteMetricItems() { this->metricItems_ = nullptr;};
    inline const vector<ListLLMGatewayMetricsResponseBody::MetricItems> & getMetricItems() const { DARABONBA_PTR_GET_CONST(metricItems_, vector<ListLLMGatewayMetricsResponseBody::MetricItems>) };
    inline vector<ListLLMGatewayMetricsResponseBody::MetricItems> getMetricItems() { DARABONBA_PTR_GET(metricItems_, vector<ListLLMGatewayMetricsResponseBody::MetricItems>) };
    inline ListLLMGatewayMetricsResponseBody& setMetricItems(const vector<ListLLMGatewayMetricsResponseBody::MetricItems> & metricItems) { DARABONBA_PTR_SET_VALUE(metricItems_, metricItems) };
    inline ListLLMGatewayMetricsResponseBody& setMetricItems(vector<ListLLMGatewayMetricsResponseBody::MetricItems> && metricItems) { DARABONBA_PTR_SET_RVALUE(metricItems_, metricItems) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ListLLMGatewayMetricsResponseBody& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLLMGatewayMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> granularity_ {};
    shared_ptr<vector<ListLLMGatewayMetricsResponseBody::MetricItems>> metricItems_ {};
    shared_ptr<string> metricType_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
