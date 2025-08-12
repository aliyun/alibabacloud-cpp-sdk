// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICRULECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICRULECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMetricRuleCountResponseBodyMetricRuleCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricRuleCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricRuleCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricRuleCount, metricRuleCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricRuleCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricRuleCount, metricRuleCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMetricRuleCountResponseBody() = default ;
    DescribeMetricRuleCountResponseBody(const DescribeMetricRuleCountResponseBody &) = default ;
    DescribeMetricRuleCountResponseBody(DescribeMetricRuleCountResponseBody &&) = default ;
    DescribeMetricRuleCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricRuleCountResponseBody() = default ;
    DescribeMetricRuleCountResponseBody& operator=(const DescribeMetricRuleCountResponseBody &) = default ;
    DescribeMetricRuleCountResponseBody& operator=(DescribeMetricRuleCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->metricRuleCount_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMetricRuleCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMetricRuleCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricRuleCount Field Functions 
    bool hasMetricRuleCount() const { return this->metricRuleCount_ != nullptr;};
    void deleteMetricRuleCount() { this->metricRuleCount_ = nullptr;};
    inline const DescribeMetricRuleCountResponseBodyMetricRuleCount & metricRuleCount() const { DARABONBA_PTR_GET_CONST(metricRuleCount_, DescribeMetricRuleCountResponseBodyMetricRuleCount) };
    inline DescribeMetricRuleCountResponseBodyMetricRuleCount metricRuleCount() { DARABONBA_PTR_GET(metricRuleCount_, DescribeMetricRuleCountResponseBodyMetricRuleCount) };
    inline DescribeMetricRuleCountResponseBody& setMetricRuleCount(const DescribeMetricRuleCountResponseBodyMetricRuleCount & metricRuleCount) { DARABONBA_PTR_SET_VALUE(metricRuleCount_, metricRuleCount) };
    inline DescribeMetricRuleCountResponseBody& setMetricRuleCount(DescribeMetricRuleCountResponseBodyMetricRuleCount && metricRuleCount) { DARABONBA_PTR_SET_RVALUE(metricRuleCount_, metricRuleCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricRuleCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMetricRuleCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The responses code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The number of alert rules in each state.
    std::shared_ptr<DescribeMetricRuleCountResponseBodyMetricRuleCount> metricRuleCount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
