// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMetricListResponseBody() = default ;
    DescribeMetricListResponseBody(const DescribeMetricListResponseBody &) = default ;
    DescribeMetricListResponseBody(DescribeMetricListResponseBody &&) = default ;
    DescribeMetricListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListResponseBody() = default ;
    DescribeMetricListResponseBody& operator=(const DescribeMetricListResponseBody &) = default ;
    DescribeMetricListResponseBody& operator=(DescribeMetricListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->datapoints_ == nullptr && return this->message_ == nullptr && return this->nextToken_ == nullptr && return this->period_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline string datapoints() const { DARABONBA_PTR_GET_DEFAULT(datapoints_, "") };
    inline DescribeMetricListResponseBody& setDatapoints(string datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMetricListResponseBody& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The monitoring data.
    std::shared_ptr<string> datapoints_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The paging token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The interval at which the monitoring data is queried. Unit: seconds. Valid values: 60, 300, and 900.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
