// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTLOGCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTLOGCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAlertLogCountResponseBodyAlertLogCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertLogCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertLogCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertLogCount, alertLogCount_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertLogCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertLogCount, alertLogCount_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAlertLogCountResponseBody() = default ;
    DescribeAlertLogCountResponseBody(const DescribeAlertLogCountResponseBody &) = default ;
    DescribeAlertLogCountResponseBody(DescribeAlertLogCountResponseBody &&) = default ;
    DescribeAlertLogCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertLogCountResponseBody() = default ;
    DescribeAlertLogCountResponseBody& operator=(const DescribeAlertLogCountResponseBody &) = default ;
    DescribeAlertLogCountResponseBody& operator=(DescribeAlertLogCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertLogCount_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // alertLogCount Field Functions 
    bool hasAlertLogCount() const { return this->alertLogCount_ != nullptr;};
    void deleteAlertLogCount() { this->alertLogCount_ = nullptr;};
    inline const vector<DescribeAlertLogCountResponseBodyAlertLogCount> & alertLogCount() const { DARABONBA_PTR_GET_CONST(alertLogCount_, vector<DescribeAlertLogCountResponseBodyAlertLogCount>) };
    inline vector<DescribeAlertLogCountResponseBodyAlertLogCount> alertLogCount() { DARABONBA_PTR_GET(alertLogCount_, vector<DescribeAlertLogCountResponseBodyAlertLogCount>) };
    inline DescribeAlertLogCountResponseBody& setAlertLogCount(const vector<DescribeAlertLogCountResponseBodyAlertLogCount> & alertLogCount) { DARABONBA_PTR_SET_VALUE(alertLogCount_, alertLogCount) };
    inline DescribeAlertLogCountResponseBody& setAlertLogCount(vector<DescribeAlertLogCountResponseBodyAlertLogCount> && alertLogCount) { DARABONBA_PTR_SET_RVALUE(alertLogCount_, alertLogCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertLogCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertLogCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertLogCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertLogCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The statistics of alert logs.
    std::shared_ptr<vector<DescribeAlertLogCountResponseBodyAlertLogCount>> alertLogCount_ = nullptr;
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
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
