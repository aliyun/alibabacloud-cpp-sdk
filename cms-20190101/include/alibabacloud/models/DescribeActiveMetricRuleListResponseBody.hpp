// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACTIVEMETRICRULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyAlertList.hpp>
#include <alibabacloud/models/DescribeActiveMetricRuleListResponseBodyDatapoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeActiveMetricRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeActiveMetricRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertList, alertList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeActiveMetricRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertList, alertList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Datapoints, datapoints_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeActiveMetricRuleListResponseBody() = default ;
    DescribeActiveMetricRuleListResponseBody(const DescribeActiveMetricRuleListResponseBody &) = default ;
    DescribeActiveMetricRuleListResponseBody(DescribeActiveMetricRuleListResponseBody &&) = default ;
    DescribeActiveMetricRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeActiveMetricRuleListResponseBody() = default ;
    DescribeActiveMetricRuleListResponseBody& operator=(const DescribeActiveMetricRuleListResponseBody &) = default ;
    DescribeActiveMetricRuleListResponseBody& operator=(DescribeActiveMetricRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertList_ != nullptr
        && this->code_ != nullptr && this->datapoints_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // alertList Field Functions 
    bool hasAlertList() const { return this->alertList_ != nullptr;};
    void deleteAlertList() { this->alertList_ = nullptr;};
    inline const DescribeActiveMetricRuleListResponseBodyAlertList & alertList() const { DARABONBA_PTR_GET_CONST(alertList_, DescribeActiveMetricRuleListResponseBodyAlertList) };
    inline DescribeActiveMetricRuleListResponseBodyAlertList alertList() { DARABONBA_PTR_GET(alertList_, DescribeActiveMetricRuleListResponseBodyAlertList) };
    inline DescribeActiveMetricRuleListResponseBody& setAlertList(const DescribeActiveMetricRuleListResponseBodyAlertList & alertList) { DARABONBA_PTR_SET_VALUE(alertList_, alertList) };
    inline DescribeActiveMetricRuleListResponseBody& setAlertList(DescribeActiveMetricRuleListResponseBodyAlertList && alertList) { DARABONBA_PTR_SET_RVALUE(alertList_, alertList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeActiveMetricRuleListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // datapoints Field Functions 
    bool hasDatapoints() const { return this->datapoints_ != nullptr;};
    void deleteDatapoints() { this->datapoints_ = nullptr;};
    inline const DescribeActiveMetricRuleListResponseBodyDatapoints & datapoints() const { DARABONBA_PTR_GET_CONST(datapoints_, DescribeActiveMetricRuleListResponseBodyDatapoints) };
    inline DescribeActiveMetricRuleListResponseBodyDatapoints datapoints() { DARABONBA_PTR_GET(datapoints_, DescribeActiveMetricRuleListResponseBodyDatapoints) };
    inline DescribeActiveMetricRuleListResponseBody& setDatapoints(const DescribeActiveMetricRuleListResponseBodyDatapoints & datapoints) { DARABONBA_PTR_SET_VALUE(datapoints_, datapoints) };
    inline DescribeActiveMetricRuleListResponseBody& setDatapoints(DescribeActiveMetricRuleListResponseBodyDatapoints && datapoints) { DARABONBA_PTR_SET_RVALUE(datapoints_, datapoints) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeActiveMetricRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeActiveMetricRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeActiveMetricRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the alert rules. The result is in the same structure as that returned by the DescribeMetricRuleList operation.
    std::shared_ptr<DescribeActiveMetricRuleListResponseBodyAlertList> alertList_ = nullptr;
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the alert rules.
    std::shared_ptr<DescribeActiveMetricRuleListResponseBodyDatapoints> datapoints_ = nullptr;
    // The returned message.
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
