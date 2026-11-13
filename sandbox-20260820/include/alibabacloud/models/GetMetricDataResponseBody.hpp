// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETRICDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETRICDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetricData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class GetMetricDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetricDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(metricData, metricData_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetricDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(metricData, metricData_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMetricDataResponseBody() = default ;
    GetMetricDataResponseBody(const GetMetricDataResponseBody &) = default ;
    GetMetricDataResponseBody(GetMetricDataResponseBody &&) = default ;
    GetMetricDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetricDataResponseBody() = default ;
    GetMetricDataResponseBody& operator=(const GetMetricDataResponseBody &) = default ;
    GetMetricDataResponseBody& operator=(GetMetricDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->metricData_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMetricDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMetricDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricData Field Functions 
    bool hasMetricData() const { return this->metricData_ != nullptr;};
    void deleteMetricData() { this->metricData_ = nullptr;};
    inline const MetricData & getMetricData() const { DARABONBA_PTR_GET_CONST(metricData_, MetricData) };
    inline MetricData getMetricData() { DARABONBA_PTR_GET(metricData_, MetricData) };
    inline GetMetricDataResponseBody& setMetricData(const MetricData & metricData) { DARABONBA_PTR_SET_VALUE(metricData_, metricData) };
    inline GetMetricDataResponseBody& setMetricData(MetricData && metricData) { DARABONBA_PTR_SET_RVALUE(metricData_, metricData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetricDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 成功时为 200。失败时为对应的错误码。
    shared_ptr<string> code_ {};
    // 本次请求的结果说明。
    shared_ptr<string> message_ {};
    // 各指标的查询结果及对应的时间和分组。
    shared_ptr<MetricData> metricData_ {};
    // 本次请求的唯一标识。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
