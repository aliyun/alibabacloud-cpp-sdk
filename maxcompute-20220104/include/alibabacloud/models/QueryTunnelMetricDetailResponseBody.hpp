// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYTUNNELMETRICDETAILRESPONSEBODY_HPP_
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
  class QueryTunnelMetricDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTunnelMetricDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTunnelMetricDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    QueryTunnelMetricDetailResponseBody() = default ;
    QueryTunnelMetricDetailResponseBody(const QueryTunnelMetricDetailResponseBody &) = default ;
    QueryTunnelMetricDetailResponseBody(QueryTunnelMetricDetailResponseBody &&) = default ;
    QueryTunnelMetricDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTunnelMetricDetailResponseBody() = default ;
    QueryTunnelMetricDetailResponseBody& operator=(const QueryTunnelMetricDetailResponseBody &) = default ;
    QueryTunnelMetricDetailResponseBody& operator=(QueryTunnelMetricDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(metrics, metrics_);
        DARABONBA_PTR_TO_JSON(name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(name, name_);
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
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(metric, metric_);
          DARABONBA_ANY_FROM_JSON(value, value_);
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
        && this->value_ == nullptr; };
        // metric Field Functions 
        bool hasMetric() const { return this->metric_ != nullptr;};
        void deleteMetric() { this->metric_ = nullptr;};
        inline const map<string, string> & getMetric() const { DARABONBA_PTR_GET_CONST(metric_, map<string, string>) };
        inline map<string, string> getMetric() { DARABONBA_PTR_GET(metric_, map<string, string>) };
        inline Metrics& setMetric(const map<string, string> & metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };
        inline Metrics& setMetric(map<string, string> && metric) { DARABONBA_PTR_SET_RVALUE(metric_, metric) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Metrics& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Metrics& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The metadata of the metric.
        shared_ptr<map<string, string>> metric_ {};
        // The numeric information of the metric.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr
        && this->name_ == nullptr; };
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


    protected:
      // The metric values.
      shared_ptr<vector<Data::Metrics>> metrics_ {};
      // The name of the metric.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryTunnelMetricDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryTunnelMetricDetailResponseBody::Data) };
    inline QueryTunnelMetricDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryTunnelMetricDetailResponseBody::Data) };
    inline QueryTunnelMetricDetailResponseBody& setData(const QueryTunnelMetricDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryTunnelMetricDetailResponseBody& setData(QueryTunnelMetricDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryTunnelMetricDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline QueryTunnelMetricDetailResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline QueryTunnelMetricDetailResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryTunnelMetricDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<QueryTunnelMetricDetailResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
