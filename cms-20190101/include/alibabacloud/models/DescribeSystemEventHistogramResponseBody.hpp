// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTHISTOGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSystemEventHistogramResponseBodySystemEventHistograms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SystemEventHistograms, systemEventHistograms_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SystemEventHistograms, systemEventHistograms_);
    };
    DescribeSystemEventHistogramResponseBody() = default ;
    DescribeSystemEventHistogramResponseBody(const DescribeSystemEventHistogramResponseBody &) = default ;
    DescribeSystemEventHistogramResponseBody(DescribeSystemEventHistogramResponseBody &&) = default ;
    DescribeSystemEventHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventHistogramResponseBody() = default ;
    DescribeSystemEventHistogramResponseBody& operator=(const DescribeSystemEventHistogramResponseBody &) = default ;
    DescribeSystemEventHistogramResponseBody& operator=(DescribeSystemEventHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->systemEventHistograms_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSystemEventHistogramResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSystemEventHistogramResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // systemEventHistograms Field Functions 
    bool hasSystemEventHistograms() const { return this->systemEventHistograms_ != nullptr;};
    void deleteSystemEventHistograms() { this->systemEventHistograms_ = nullptr;};
    inline const DescribeSystemEventHistogramResponseBodySystemEventHistograms & systemEventHistograms() const { DARABONBA_PTR_GET_CONST(systemEventHistograms_, DescribeSystemEventHistogramResponseBodySystemEventHistograms) };
    inline DescribeSystemEventHistogramResponseBodySystemEventHistograms systemEventHistograms() { DARABONBA_PTR_GET(systemEventHistograms_, DescribeSystemEventHistogramResponseBodySystemEventHistograms) };
    inline DescribeSystemEventHistogramResponseBody& setSystemEventHistograms(const DescribeSystemEventHistogramResponseBodySystemEventHistograms & systemEventHistograms) { DARABONBA_PTR_SET_VALUE(systemEventHistograms_, systemEventHistograms) };
    inline DescribeSystemEventHistogramResponseBody& setSystemEventHistograms(DescribeSystemEventHistogramResponseBodySystemEventHistograms && systemEventHistograms) { DARABONBA_PTR_SET_RVALUE(systemEventHistograms_, systemEventHistograms) };


  protected:
    // The response code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true: The request was successful. false: The request failed.
    std::shared_ptr<string> success_ = nullptr;
    // The information about the number of times the system event occurred during each interval of a time period.
    std::shared_ptr<DescribeSystemEventHistogramResponseBodySystemEventHistograms> systemEventHistograms_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
