// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSystemEventAttributeResponseBodySystemEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(SystemEvents, systemEvents_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(SystemEvents, systemEvents_);
    };
    DescribeSystemEventAttributeResponseBody() = default ;
    DescribeSystemEventAttributeResponseBody(const DescribeSystemEventAttributeResponseBody &) = default ;
    DescribeSystemEventAttributeResponseBody(DescribeSystemEventAttributeResponseBody &&) = default ;
    DescribeSystemEventAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventAttributeResponseBody() = default ;
    DescribeSystemEventAttributeResponseBody& operator=(const DescribeSystemEventAttributeResponseBody &) = default ;
    DescribeSystemEventAttributeResponseBody& operator=(DescribeSystemEventAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->systemEvents_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSystemEventAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSystemEventAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSystemEventAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSystemEventAttributeResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // systemEvents Field Functions 
    bool hasSystemEvents() const { return this->systemEvents_ != nullptr;};
    void deleteSystemEvents() { this->systemEvents_ = nullptr;};
    inline const DescribeSystemEventAttributeResponseBodySystemEvents & systemEvents() const { DARABONBA_PTR_GET_CONST(systemEvents_, DescribeSystemEventAttributeResponseBodySystemEvents) };
    inline DescribeSystemEventAttributeResponseBodySystemEvents systemEvents() { DARABONBA_PTR_GET(systemEvents_, DescribeSystemEventAttributeResponseBodySystemEvents) };
    inline DescribeSystemEventAttributeResponseBody& setSystemEvents(const DescribeSystemEventAttributeResponseBodySystemEvents & systemEvents) { DARABONBA_PTR_SET_VALUE(systemEvents_, systemEvents) };
    inline DescribeSystemEventAttributeResponseBody& setSystemEvents(DescribeSystemEventAttributeResponseBodySystemEvents && systemEvents) { DARABONBA_PTR_SET_RVALUE(systemEvents_, systemEvents) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The message that is returned. If the call is successful, `success` is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values: True: The call is successful. false: The call fails.
    std::shared_ptr<string> success_ = nullptr;
    // The details of the event.
    std::shared_ptr<DescribeSystemEventAttributeResponseBodySystemEvents> systemEvents_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
