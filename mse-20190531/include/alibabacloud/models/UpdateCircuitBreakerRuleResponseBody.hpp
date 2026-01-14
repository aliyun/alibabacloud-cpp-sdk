// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECIRCUITBREAKERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECIRCUITBREAKERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateCircuitBreakerRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCircuitBreakerRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCircuitBreakerRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateCircuitBreakerRuleResponseBody() = default ;
    UpdateCircuitBreakerRuleResponseBody(const UpdateCircuitBreakerRuleResponseBody &) = default ;
    UpdateCircuitBreakerRuleResponseBody(UpdateCircuitBreakerRuleResponseBody &&) = default ;
    UpdateCircuitBreakerRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCircuitBreakerRuleResponseBody() = default ;
    UpdateCircuitBreakerRuleResponseBody& operator=(const UpdateCircuitBreakerRuleResponseBody &) = default ;
    UpdateCircuitBreakerRuleResponseBody& operator=(UpdateCircuitBreakerRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
        DARABONBA_PTR_TO_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
        DARABONBA_PTR_TO_JSON(MinRequestAmount, minRequestAmount_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(RetryTimeoutMs, retryTimeoutMs_);
        DARABONBA_PTR_TO_JSON(StatIntervalMs, statIntervalMs_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(HalfOpenBaseAmountPerStep, halfOpenBaseAmountPerStep_);
        DARABONBA_PTR_FROM_JSON(HalfOpenRecoveryStepNum, halfOpenRecoveryStepNum_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxAllowedRtMs, maxAllowedRtMs_);
        DARABONBA_PTR_FROM_JSON(MinRequestAmount, minRequestAmount_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(RetryTimeoutMs, retryTimeoutMs_);
        DARABONBA_PTR_FROM_JSON(StatIntervalMs, statIntervalMs_);
        DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->enable_ == nullptr && this->halfOpenBaseAmountPerStep_ == nullptr && this->halfOpenRecoveryStepNum_ == nullptr && this->id_ == nullptr
        && this->maxAllowedRtMs_ == nullptr && this->minRequestAmount_ == nullptr && this->namespace_ == nullptr && this->resource_ == nullptr && this->retryTimeoutMs_ == nullptr
        && this->statIntervalMs_ == nullptr && this->strategy_ == nullptr && this->threshold_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // halfOpenBaseAmountPerStep Field Functions 
      bool hasHalfOpenBaseAmountPerStep() const { return this->halfOpenBaseAmountPerStep_ != nullptr;};
      void deleteHalfOpenBaseAmountPerStep() { this->halfOpenBaseAmountPerStep_ = nullptr;};
      inline int32_t getHalfOpenBaseAmountPerStep() const { DARABONBA_PTR_GET_DEFAULT(halfOpenBaseAmountPerStep_, 0) };
      inline Data& setHalfOpenBaseAmountPerStep(int32_t halfOpenBaseAmountPerStep) { DARABONBA_PTR_SET_VALUE(halfOpenBaseAmountPerStep_, halfOpenBaseAmountPerStep) };


      // halfOpenRecoveryStepNum Field Functions 
      bool hasHalfOpenRecoveryStepNum() const { return this->halfOpenRecoveryStepNum_ != nullptr;};
      void deleteHalfOpenRecoveryStepNum() { this->halfOpenRecoveryStepNum_ = nullptr;};
      inline int32_t getHalfOpenRecoveryStepNum() const { DARABONBA_PTR_GET_DEFAULT(halfOpenRecoveryStepNum_, 0) };
      inline Data& setHalfOpenRecoveryStepNum(int32_t halfOpenRecoveryStepNum) { DARABONBA_PTR_SET_VALUE(halfOpenRecoveryStepNum_, halfOpenRecoveryStepNum) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxAllowedRtMs Field Functions 
      bool hasMaxAllowedRtMs() const { return this->maxAllowedRtMs_ != nullptr;};
      void deleteMaxAllowedRtMs() { this->maxAllowedRtMs_ = nullptr;};
      inline int32_t getMaxAllowedRtMs() const { DARABONBA_PTR_GET_DEFAULT(maxAllowedRtMs_, 0) };
      inline Data& setMaxAllowedRtMs(int32_t maxAllowedRtMs) { DARABONBA_PTR_SET_VALUE(maxAllowedRtMs_, maxAllowedRtMs) };


      // minRequestAmount Field Functions 
      bool hasMinRequestAmount() const { return this->minRequestAmount_ != nullptr;};
      void deleteMinRequestAmount() { this->minRequestAmount_ = nullptr;};
      inline int32_t getMinRequestAmount() const { DARABONBA_PTR_GET_DEFAULT(minRequestAmount_, 0) };
      inline Data& setMinRequestAmount(int32_t minRequestAmount) { DARABONBA_PTR_SET_VALUE(minRequestAmount_, minRequestAmount) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Data& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // retryTimeoutMs Field Functions 
      bool hasRetryTimeoutMs() const { return this->retryTimeoutMs_ != nullptr;};
      void deleteRetryTimeoutMs() { this->retryTimeoutMs_ = nullptr;};
      inline int32_t getRetryTimeoutMs() const { DARABONBA_PTR_GET_DEFAULT(retryTimeoutMs_, 0) };
      inline Data& setRetryTimeoutMs(int32_t retryTimeoutMs) { DARABONBA_PTR_SET_VALUE(retryTimeoutMs_, retryTimeoutMs) };


      // statIntervalMs Field Functions 
      bool hasStatIntervalMs() const { return this->statIntervalMs_ != nullptr;};
      void deleteStatIntervalMs() { this->statIntervalMs_ = nullptr;};
      inline int32_t getStatIntervalMs() const { DARABONBA_PTR_GET_DEFAULT(statIntervalMs_, 0) };
      inline Data& setStatIntervalMs(int32_t statIntervalMs) { DARABONBA_PTR_SET_VALUE(statIntervalMs_, statIntervalMs) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline int32_t getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, 0) };
      inline Data& setStrategy(int32_t strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline float getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0.0) };
      inline Data& setThreshold(float threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // The ID of the application.
      shared_ptr<string> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // Indicates whether the rule is enabled.
      shared_ptr<bool> enable_ {};
      // The minimum number of requests that can be passed in each step after circuit breaking recovers.
      shared_ptr<int32_t> halfOpenBaseAmountPerStep_ {};
      // The number of circuit breaking recovery steps.
      shared_ptr<int32_t> halfOpenRecoveryStepNum_ {};
      // The ID of the rule.
      shared_ptr<int64_t> id_ {};
      // The maximum RT. Unit: milliseconds. If the RT of a request is greater than the value of this parameter, a slow call is counted. If you set Strategy to 0, you must specify this parameter.
      shared_ptr<int32_t> maxAllowedRtMs_ {};
      // The minimum number of requests to trigger circuit breaking. If the number of requests in the current time window is less than the value of this parameter, circuit breaking is not triggered even if the circuit breaking rule is met.
      shared_ptr<int32_t> minRequestAmount_ {};
      // The microservice namespace to which the application belongs.
      shared_ptr<string> namespace_ {};
      // The name of the interface to which the rule is applicable. The interface name must be the same as the name on the interface details page in the console.
      shared_ptr<string> resource_ {};
      // The period in which circuit breaking is implemented. Unit: milliseconds. If circuit breaking is implemented on the requests for the route, the calls to all the requests for the route fail in the configured circuit breaking period.
      shared_ptr<int32_t> retryTimeoutMs_ {};
      // The length of the time window. Unit: milliseconds. The valid range is from 1 second to 120 minutes.
      shared_ptr<int32_t> statIntervalMs_ {};
      // The threshold type.
      // 
      // Valid values:
      // 
      // *   0
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     slow call proportion
      // 
      //     <!-- -->
      // 
      // *   1
      // 
      //     <!-- -->
      // 
      //     :
      // 
      //     <!-- -->
      // 
      //     abnormal proportion
      // 
      //     <!-- -->
      shared_ptr<int32_t> strategy_ {};
      // A percentage threshold for triggering circuit breaking. Valid values: 0-1. These values represent 0% to 100%.
      shared_ptr<float> threshold_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateCircuitBreakerRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateCircuitBreakerRuleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateCircuitBreakerRuleResponseBody::Data) };
    inline UpdateCircuitBreakerRuleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateCircuitBreakerRuleResponseBody::Data) };
    inline UpdateCircuitBreakerRuleResponseBody& setData(const UpdateCircuitBreakerRuleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateCircuitBreakerRuleResponseBody& setData(UpdateCircuitBreakerRuleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateCircuitBreakerRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateCircuitBreakerRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateCircuitBreakerRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The details of the rule.
    shared_ptr<UpdateCircuitBreakerRuleResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The request was successful.
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     The request failed.
    // 
    //     <!-- -->
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
