// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class GetInstanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PodMetrics, podMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PodMetrics, podMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceMetricsResponseBody() = default ;
    GetInstanceMetricsResponseBody(const GetInstanceMetricsResponseBody &) = default ;
    GetInstanceMetricsResponseBody(GetInstanceMetricsResponseBody &&) = default ;
    GetInstanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceMetricsResponseBody() = default ;
    GetInstanceMetricsResponseBody& operator=(const GetInstanceMetricsResponseBody &) = default ;
    GetInstanceMetricsResponseBody& operator=(GetInstanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PodMetrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PodMetrics& obj) { 
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(PodId, podId_);
      };
      friend void from_json(const Darabonba::Json& j, PodMetrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(PodId, podId_);
      };
      PodMetrics() = default ;
      PodMetrics(const PodMetrics &) = default ;
      PodMetrics(PodMetrics &&) = default ;
      PodMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PodMetrics() = default ;
      PodMetrics& operator=(const PodMetrics &) = default ;
      PodMetrics& operator=(PodMetrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Time, time_);
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
        virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline Metrics& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline Metrics& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The timestamp corresponding to the metric.
        shared_ptr<int64_t> time_ {};
        // The metric value.
        shared_ptr<float> value_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr
        && this->podId_ == nullptr; };
      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<PodMetrics::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<PodMetrics::Metrics>) };
      inline vector<PodMetrics::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<PodMetrics::Metrics>) };
      inline PodMetrics& setMetrics(const vector<PodMetrics::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline PodMetrics& setMetrics(vector<PodMetrics::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // podId Field Functions 
      bool hasPodId() const { return this->podId_ != nullptr;};
      void deletePodId() { this->podId_ = nullptr;};
      inline string getPodId() const { DARABONBA_PTR_GET_DEFAULT(podId_, "") };
      inline PodMetrics& setPodId(string podId) { DARABONBA_PTR_SET_VALUE(podId_, podId) };


    protected:
      // The metrics of the pod that corresponds to the instance.
      shared_ptr<vector<PodMetrics::Metrics>> metrics_ {};
      // The ID of the pod that corresponds to the instance.
      shared_ptr<string> podId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->instanceId_ == nullptr && this->message_ == nullptr && this->podMetrics_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceMetricsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceMetricsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceMetricsResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceMetricsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // podMetrics Field Functions 
    bool hasPodMetrics() const { return this->podMetrics_ != nullptr;};
    void deletePodMetrics() { this->podMetrics_ = nullptr;};
    inline const vector<GetInstanceMetricsResponseBody::PodMetrics> & getPodMetrics() const { DARABONBA_PTR_GET_CONST(podMetrics_, vector<GetInstanceMetricsResponseBody::PodMetrics>) };
    inline vector<GetInstanceMetricsResponseBody::PodMetrics> getPodMetrics() { DARABONBA_PTR_GET(podMetrics_, vector<GetInstanceMetricsResponseBody::PodMetrics>) };
    inline GetInstanceMetricsResponseBody& setPodMetrics(const vector<GetInstanceMetricsResponseBody::PodMetrics> & podMetrics) { DARABONBA_PTR_SET_VALUE(podMetrics_, podMetrics) };
    inline GetInstanceMetricsResponseBody& setPodMetrics(vector<GetInstanceMetricsResponseBody::PodMetrics> && podMetrics) { DARABONBA_PTR_SET_RVALUE(podMetrics_, podMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceMetricsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. Valid values:
    // 
    // *   InternalError: an internal error. All errors, except for parameter validation errors, are classified as internal errors.
    // *   ValidationError: a parameter validation error.
    shared_ptr<string> code_ {};
    // The HTTP status code. Valid values:
    // 
    // *   400
    // *   404
    shared_ptr<int32_t> httpStatusCode_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The information about the metrics of the pod that corresponds to the instance.
    shared_ptr<vector<GetInstanceMetricsResponseBody::PodMetrics>> podMetrics_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
