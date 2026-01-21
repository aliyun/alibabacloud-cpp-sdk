// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDMONITORDATALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHybridMonitorDataListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TimeSeries, timeSeries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridMonitorDataListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TimeSeries, timeSeries_);
    };
    DescribeHybridMonitorDataListResponseBody() = default ;
    DescribeHybridMonitorDataListResponseBody(const DescribeHybridMonitorDataListResponseBody &) = default ;
    DescribeHybridMonitorDataListResponseBody(DescribeHybridMonitorDataListResponseBody &&) = default ;
    DescribeHybridMonitorDataListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridMonitorDataListResponseBody() = default ;
    DescribeHybridMonitorDataListResponseBody& operator=(const DescribeHybridMonitorDataListResponseBody &) = default ;
    DescribeHybridMonitorDataListResponseBody& operator=(DescribeHybridMonitorDataListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TimeSeries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSeries& obj) { 
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSeries& obj) { 
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      TimeSeries() = default ;
      TimeSeries(const TimeSeries &) = default ;
      TimeSeries(TimeSeries &&) = default ;
      TimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSeries() = default ;
      TimeSeries& operator=(const TimeSeries &) = default ;
      TimeSeries& operator=(TimeSeries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Values : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Values& obj) { 
          DARABONBA_PTR_TO_JSON(Ts, ts_);
          DARABONBA_PTR_TO_JSON(V, v_);
        };
        friend void from_json(const Darabonba::Json& j, Values& obj) { 
          DARABONBA_PTR_FROM_JSON(Ts, ts_);
          DARABONBA_PTR_FROM_JSON(V, v_);
        };
        Values() = default ;
        Values(const Values &) = default ;
        Values(Values &&) = default ;
        Values(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Values() = default ;
        Values& operator=(const Values &) = default ;
        Values& operator=(Values &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ts_ == nullptr
        && this->v_ == nullptr; };
        // ts Field Functions 
        bool hasTs() const { return this->ts_ != nullptr;};
        void deleteTs() { this->ts_ = nullptr;};
        inline string getTs() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
        inline Values& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


        // v Field Functions 
        bool hasV() const { return this->v_ != nullptr;};
        void deleteV() { this->v_ = nullptr;};
        inline string getV() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
        inline Values& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


      protected:
        // The timestamp that indicates the time when the metric value is collected.
        // 
        // Unit: seconds.
        shared_ptr<string> ts_ {};
        // The metric value.
        shared_ptr<string> v_ {};
      };

      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(K, k_);
          DARABONBA_PTR_TO_JSON(V, v_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(K, k_);
          DARABONBA_PTR_FROM_JSON(V, v_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->k_ == nullptr
        && this->v_ == nullptr; };
        // k Field Functions 
        bool hasK() const { return this->k_ != nullptr;};
        void deleteK() { this->k_ = nullptr;};
        inline string getK() const { DARABONBA_PTR_GET_DEFAULT(k_, "") };
        inline Labels& setK(string k) { DARABONBA_PTR_SET_VALUE(k_, k) };


        // v Field Functions 
        bool hasV() const { return this->v_ != nullptr;};
        void deleteV() { this->v_ = nullptr;};
        inline string getV() const { DARABONBA_PTR_GET_DEFAULT(v_, "") };
        inline Labels& setV(string v) { DARABONBA_PTR_SET_VALUE(v_, v) };


      protected:
        // The tag key.
        shared_ptr<string> k_ {};
        // The tag value.
        shared_ptr<string> v_ {};
      };

      virtual bool empty() const override { return this->labels_ == nullptr
        && this->metricName_ == nullptr && this->values_ == nullptr; };
      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<TimeSeries::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<TimeSeries::Labels>) };
      inline vector<TimeSeries::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<TimeSeries::Labels>) };
      inline TimeSeries& setLabels(const vector<TimeSeries::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline TimeSeries& setLabels(vector<TimeSeries::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline TimeSeries& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<TimeSeries::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<TimeSeries::Values>) };
      inline vector<TimeSeries::Values> getValues() { DARABONBA_PTR_GET(values_, vector<TimeSeries::Values>) };
      inline TimeSeries& setValues(const vector<TimeSeries::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline TimeSeries& setValues(vector<TimeSeries::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The tags of the time dimension.
      shared_ptr<vector<TimeSeries::Labels>> labels_ {};
      // The metric name.
      shared_ptr<string> metricName_ {};
      // The metric values that are collected at different timestamps.
      shared_ptr<vector<TimeSeries::Values>> values_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->timeSeries_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeHybridMonitorDataListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // timeSeries Field Functions 
    bool hasTimeSeries() const { return this->timeSeries_ != nullptr;};
    void deleteTimeSeries() { this->timeSeries_ = nullptr;};
    inline const vector<DescribeHybridMonitorDataListResponseBody::TimeSeries> & getTimeSeries() const { DARABONBA_PTR_GET_CONST(timeSeries_, vector<DescribeHybridMonitorDataListResponseBody::TimeSeries>) };
    inline vector<DescribeHybridMonitorDataListResponseBody::TimeSeries> getTimeSeries() { DARABONBA_PTR_GET(timeSeries_, vector<DescribeHybridMonitorDataListResponseBody::TimeSeries>) };
    inline DescribeHybridMonitorDataListResponseBody& setTimeSeries(const vector<DescribeHybridMonitorDataListResponseBody::TimeSeries> & timeSeries) { DARABONBA_PTR_SET_VALUE(timeSeries_, timeSeries) };
    inline DescribeHybridMonitorDataListResponseBody& setTimeSeries(vector<DescribeHybridMonitorDataListResponseBody::TimeSeries> && timeSeries) { DARABONBA_PTR_SET_RVALUE(timeSeries_, timeSeries) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<string> success_ {};
    // The returned monitoring data.
    shared_ptr<vector<DescribeHybridMonitorDataListResponseBody::TimeSeries>> timeSeries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
