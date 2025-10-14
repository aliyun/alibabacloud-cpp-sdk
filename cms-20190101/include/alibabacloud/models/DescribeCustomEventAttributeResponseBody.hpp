// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCustomEventAttributeResponseBodyCustomEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CustomEvents, customEvents_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CustomEvents, customEvents_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomEventAttributeResponseBody() = default ;
    DescribeCustomEventAttributeResponseBody(const DescribeCustomEventAttributeResponseBody &) = default ;
    DescribeCustomEventAttributeResponseBody(DescribeCustomEventAttributeResponseBody &&) = default ;
    DescribeCustomEventAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventAttributeResponseBody() = default ;
    DescribeCustomEventAttributeResponseBody& operator=(const DescribeCustomEventAttributeResponseBody &) = default ;
    DescribeCustomEventAttributeResponseBody& operator=(DescribeCustomEventAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->customEvents_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCustomEventAttributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customEvents Field Functions 
    bool hasCustomEvents() const { return this->customEvents_ != nullptr;};
    void deleteCustomEvents() { this->customEvents_ = nullptr;};
    inline const DescribeCustomEventAttributeResponseBodyCustomEvents & customEvents() const { DARABONBA_PTR_GET_CONST(customEvents_, DescribeCustomEventAttributeResponseBodyCustomEvents) };
    inline DescribeCustomEventAttributeResponseBodyCustomEvents customEvents() { DARABONBA_PTR_GET(customEvents_, DescribeCustomEventAttributeResponseBodyCustomEvents) };
    inline DescribeCustomEventAttributeResponseBody& setCustomEvents(const DescribeCustomEventAttributeResponseBodyCustomEvents & customEvents) { DARABONBA_PTR_SET_VALUE(customEvents_, customEvents) };
    inline DescribeCustomEventAttributeResponseBody& setCustomEvents(DescribeCustomEventAttributeResponseBodyCustomEvents && customEvents) { DARABONBA_PTR_SET_RVALUE(customEvents_, customEvents) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomEventAttributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomEventAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeCustomEventAttributeResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The event details.
    std::shared_ptr<DescribeCustomEventAttributeResponseBodyCustomEvents> customEvents_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
