// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomEventHistogramResponseBodyEventHistograms.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EventHistograms, eventHistograms_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EventHistograms, eventHistograms_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomEventHistogramResponseBody() = default ;
    DescribeCustomEventHistogramResponseBody(const DescribeCustomEventHistogramResponseBody &) = default ;
    DescribeCustomEventHistogramResponseBody(DescribeCustomEventHistogramResponseBody &&) = default ;
    DescribeCustomEventHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventHistogramResponseBody() = default ;
    DescribeCustomEventHistogramResponseBody& operator=(const DescribeCustomEventHistogramResponseBody &) = default ;
    DescribeCustomEventHistogramResponseBody& operator=(DescribeCustomEventHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->eventHistograms_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomEventHistogramResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // eventHistograms Field Functions 
    bool hasEventHistograms() const { return this->eventHistograms_ != nullptr;};
    void deleteEventHistograms() { this->eventHistograms_ = nullptr;};
    inline const DescribeCustomEventHistogramResponseBodyEventHistograms & eventHistograms() const { DARABONBA_PTR_GET_CONST(eventHistograms_, DescribeCustomEventHistogramResponseBodyEventHistograms) };
    inline DescribeCustomEventHistogramResponseBodyEventHistograms eventHistograms() { DARABONBA_PTR_GET(eventHistograms_, DescribeCustomEventHistogramResponseBodyEventHistograms) };
    inline DescribeCustomEventHistogramResponseBody& setEventHistograms(const DescribeCustomEventHistogramResponseBodyEventHistograms & eventHistograms) { DARABONBA_PTR_SET_VALUE(eventHistograms_, eventHistograms) };
    inline DescribeCustomEventHistogramResponseBody& setEventHistograms(DescribeCustomEventHistogramResponseBodyEventHistograms && eventHistograms) { DARABONBA_PTR_SET_RVALUE(eventHistograms_, eventHistograms) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomEventHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomEventHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCustomEventHistogramResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the number of times that the custom event occurred during each interval of the specified time period.
    std::shared_ptr<DescribeCustomEventHistogramResponseBodyEventHistograms> eventHistograms_ = nullptr;
    // The returned message. If the request was successful, a success message is returned. If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: true and false.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
