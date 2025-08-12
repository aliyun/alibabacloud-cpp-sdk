// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOGMONITORATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLogMonitorAttributeResponseBodyLogMonitor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeLogMonitorAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLogMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LogMonitor, logMonitor_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLogMonitorAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LogMonitor, logMonitor_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeLogMonitorAttributeResponseBody() = default ;
    DescribeLogMonitorAttributeResponseBody(const DescribeLogMonitorAttributeResponseBody &) = default ;
    DescribeLogMonitorAttributeResponseBody(DescribeLogMonitorAttributeResponseBody &&) = default ;
    DescribeLogMonitorAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLogMonitorAttributeResponseBody() = default ;
    DescribeLogMonitorAttributeResponseBody& operator=(const DescribeLogMonitorAttributeResponseBody &) = default ;
    DescribeLogMonitorAttributeResponseBody& operator=(DescribeLogMonitorAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->logMonitor_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeLogMonitorAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // logMonitor Field Functions 
    bool hasLogMonitor() const { return this->logMonitor_ != nullptr;};
    void deleteLogMonitor() { this->logMonitor_ = nullptr;};
    inline const DescribeLogMonitorAttributeResponseBodyLogMonitor & logMonitor() const { DARABONBA_PTR_GET_CONST(logMonitor_, DescribeLogMonitorAttributeResponseBodyLogMonitor) };
    inline DescribeLogMonitorAttributeResponseBodyLogMonitor logMonitor() { DARABONBA_PTR_GET(logMonitor_, DescribeLogMonitorAttributeResponseBodyLogMonitor) };
    inline DescribeLogMonitorAttributeResponseBody& setLogMonitor(const DescribeLogMonitorAttributeResponseBodyLogMonitor & logMonitor) { DARABONBA_PTR_SET_VALUE(logMonitor_, logMonitor) };
    inline DescribeLogMonitorAttributeResponseBody& setLogMonitor(DescribeLogMonitorAttributeResponseBodyLogMonitor && logMonitor) { DARABONBA_PTR_SET_RVALUE(logMonitor_, logMonitor) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeLogMonitorAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLogMonitorAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeLogMonitorAttributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the log monitoring metric.
    std::shared_ptr<DescribeLogMonitorAttributeResponseBodyLogMonitor> logMonitor_ = nullptr;
    // The returned message. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
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
