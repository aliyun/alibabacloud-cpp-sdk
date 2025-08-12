// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSystemEventCountResponseBodySystemEventCounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SystemEventCounts, systemEventCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SystemEventCounts, systemEventCounts_);
    };
    DescribeSystemEventCountResponseBody() = default ;
    DescribeSystemEventCountResponseBody(const DescribeSystemEventCountResponseBody &) = default ;
    DescribeSystemEventCountResponseBody(DescribeSystemEventCountResponseBody &&) = default ;
    DescribeSystemEventCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventCountResponseBody() = default ;
    DescribeSystemEventCountResponseBody& operator=(const DescribeSystemEventCountResponseBody &) = default ;
    DescribeSystemEventCountResponseBody& operator=(DescribeSystemEventCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->systemEventCounts_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSystemEventCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSystemEventCountResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // systemEventCounts Field Functions 
    bool hasSystemEventCounts() const { return this->systemEventCounts_ != nullptr;};
    void deleteSystemEventCounts() { this->systemEventCounts_ = nullptr;};
    inline const DescribeSystemEventCountResponseBodySystemEventCounts & systemEventCounts() const { DARABONBA_PTR_GET_CONST(systemEventCounts_, DescribeSystemEventCountResponseBodySystemEventCounts) };
    inline DescribeSystemEventCountResponseBodySystemEventCounts systemEventCounts() { DARABONBA_PTR_GET(systemEventCounts_, DescribeSystemEventCountResponseBodySystemEventCounts) };
    inline DescribeSystemEventCountResponseBody& setSystemEventCounts(const DescribeSystemEventCountResponseBodySystemEventCounts & systemEventCounts) { DARABONBA_PTR_SET_VALUE(systemEventCounts_, systemEventCounts) };
    inline DescribeSystemEventCountResponseBody& setSystemEventCounts(DescribeSystemEventCountResponseBodySystemEventCounts && systemEventCounts) { DARABONBA_PTR_SET_RVALUE(systemEventCounts_, systemEventCounts) };


  protected:
    // The HTTP status codes.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    // 
    // If the request was successful, a success message is returned. If the request failed, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
    // The details of the system event.
    std::shared_ptr<DescribeSystemEventCountResponseBodySystemEventCounts> systemEventCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
