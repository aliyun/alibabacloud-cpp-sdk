// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class QueryTunnelMetricResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryTunnelMetricResponseBody() = default ;
    QueryTunnelMetricResponseBody(const QueryTunnelMetricResponseBody &) = default ;
    QueryTunnelMetricResponseBody(QueryTunnelMetricResponseBody &&) = default ;
    QueryTunnelMetricResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricResponseBody() = default ;
    QueryTunnelMetricResponseBody& operator=(const QueryTunnelMetricResponseBody &) = default ;
    QueryTunnelMetricResponseBody& operator=(QueryTunnelMetricResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(metrics, metrics_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(period, period_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(period, period_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(metric, metric_);
          DARABONBA_PTR_TO_JSON(values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(metric, metric_);
          DARABONBA_PTR_FROM_JSON(values, values_);
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
        virtual bool empty() const override { return this->metric_ == nullptr
        && this->values_ == nullptr; };
        // metric Field Functions 
        bool hasMetric() const { return this->metric_ != nullptr;};
        void deleteMetric() { this->metric_ = nullptr;};
        inline const map<string, string> & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, map<string, string>) };
        inline map<string, string> getMetric() { DARABONBA_PTR_GET(metric_, map<string, string>) };
        inline Metrics& setMetric(const map<string, string> & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
        inline Metrics& setMetric(map<string, string> && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<vector<double>> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<vector<double>>) };
        inline vector<vector<double>> getValues() { DARABONBA_PTR_GET(values_, vector<vector<double>>) };
        inline Metrics& setValues(const vector<vector<double>> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Metrics& setValues(vector<vector<double>> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The metadata of the metric.
        shared_ptr<map<string, string>> metric_ {};
        // A list of metric values.
        shared_ptr<vector<vector<double>>> values_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr
        && this->metrics_ == nullptr && this->name_ == nullptr && this->period_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline Data& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<Data::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Data::Metrics>) };
      inline vector<Data::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Data::Metrics>) };
      inline Data& setMetrics(const vector<Data::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(vector<Data::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
      inline Data& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    protected:
      // The category of the metric.
      shared_ptr<string> category_ {};
      // The metric values.
      shared_ptr<vector<Data::Metrics>> metrics_ {};
      // The name of the metric.
      shared_ptr<string> name_ {};
      // The step size of the monitoring data.
      shared_ptr<int64_t> period_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTunnelMetricResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTunnelMetricResponseBody::Data) };
    inline QueryTunnelMetricResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTunnelMetricResponseBody::Data) };
    inline QueryTunnelMetricResponseBody& setData(const QueryTunnelMetricResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTunnelMetricResponseBody& setData(QueryTunnelMetricResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryTunnelMetricResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryTunnelMetricResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline QueryTunnelMetricResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTunnelMetricResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<QueryTunnelMetricResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // Indicates whether the operation was successful. If this parameter is not empty and the value is not 200, the operation failed.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
