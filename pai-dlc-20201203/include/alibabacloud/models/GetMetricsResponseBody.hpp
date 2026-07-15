// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMetricsResponseBody() = default ;
    GetMetricsResponseBody(const GetMetricsResponseBody &) = default ;
    GetMetricsResponseBody(GetMetricsResponseBody &&) = default ;
    GetMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetricsResponseBody() = default ;
    GetMetricsResponseBody& operator=(const GetMetricsResponseBody &) = default ;
    GetMetricsResponseBody& operator=(GetMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->dataPoints_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->period_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMetricsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataPoints Field Functions 
    bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
    void deleteDataPoints() { this->dataPoints_ = nullptr;};
    inline string getDataPoints() const { DARABONBA_PTR_GET_DEFAULT(dataPoints_, "") };
    inline GetMetricsResponseBody& setDataPoints(string dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMetricsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetMetricsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline GetMetricsResponseBody& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMetricsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The monitoring metric data.
    shared_ptr<string> dataPoints_ {};
    // Detailed result message.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> nextToken_ {};
    // The statistical period for monitoring data. Valid values: 15, 60, 900, and 3600. Unit: seconds. If you do not specify a statistical period, the system uses the reporting period registered for the metric. Each cloud service metric (MetricName) may have a different statistical period. For more information, see cloud service monitoring metrics.
    shared_ptr<string> period_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation succeeded. Valid values: true (success) and false (failure).
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
