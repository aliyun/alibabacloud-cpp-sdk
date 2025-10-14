// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGHISTOGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertLogHistogramResponseBodyAlertLogHistogramList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLogHistogramList, alertLogHistogramList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLogHistogramList, alertLogHistogramList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertLogHistogramResponseBody() = default ;
    DescribeAlertLogHistogramResponseBody(const DescribeAlertLogHistogramResponseBody &) = default ;
    DescribeAlertLogHistogramResponseBody(DescribeAlertLogHistogramResponseBody &&) = default ;
    DescribeAlertLogHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogHistogramResponseBody() = default ;
    DescribeAlertLogHistogramResponseBody& operator=(const DescribeAlertLogHistogramResponseBody &) = default ;
    DescribeAlertLogHistogramResponseBody& operator=(DescribeAlertLogHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLogHistogramList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // alertLogHistogramList Field Functions 
    bool hasAlertLogHistogramList() const { return this->alertLogHistogramList_ != nullptr;};
    void deleteAlertLogHistogramList() { this->alertLogHistogramList_ = nullptr;};
    inline const vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList> & alertLogHistogramList() const { DARABONBA_PTR_GET_CONST(alertLogHistogramList_, vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList>) };
    inline vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList> alertLogHistogramList() { DARABONBA_PTR_GET(alertLogHistogramList_, vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList>) };
    inline DescribeAlertLogHistogramResponseBody& setAlertLogHistogramList(const vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList> & alertLogHistogramList) { DARABONBA_PTR_SET_VALUE(alertLogHistogramList_, alertLogHistogramList) };
    inline DescribeAlertLogHistogramResponseBody& setAlertLogHistogramList(vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList> && alertLogHistogramList) { DARABONBA_PTR_SET_RVALUE(alertLogHistogramList_, alertLogHistogramList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogHistogramResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertLogHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertLogHistogramResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The number of alert logs that were generated during each interval of a time period.
    std::shared_ptr<vector<DescribeAlertLogHistogramResponseBodyAlertLogHistogramList>> alertLogHistogramList_ = nullptr;
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
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
