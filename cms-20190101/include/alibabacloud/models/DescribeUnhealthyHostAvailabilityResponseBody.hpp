// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNHEALTHYHOSTAVAILABILITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeUnhealthyHostAvailabilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnhealthyHostAvailabilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UnhealthyList, unhealthyList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnhealthyHostAvailabilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UnhealthyList, unhealthyList_);
    };
    DescribeUnhealthyHostAvailabilityResponseBody() = default ;
    DescribeUnhealthyHostAvailabilityResponseBody(const DescribeUnhealthyHostAvailabilityResponseBody &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBody(DescribeUnhealthyHostAvailabilityResponseBody &&) = default ;
    DescribeUnhealthyHostAvailabilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnhealthyHostAvailabilityResponseBody() = default ;
    DescribeUnhealthyHostAvailabilityResponseBody& operator=(const DescribeUnhealthyHostAvailabilityResponseBody &) = default ;
    DescribeUnhealthyHostAvailabilityResponseBody& operator=(DescribeUnhealthyHostAvailabilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->unhealthyList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // unhealthyList Field Functions 
    bool hasUnhealthyList() const { return this->unhealthyList_ != nullptr;};
    void deleteUnhealthyList() { this->unhealthyList_ = nullptr;};
    inline const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList & unhealthyList() const { DARABONBA_PTR_GET_CONST(unhealthyList_, DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList) };
    inline DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList unhealthyList() { DARABONBA_PTR_GET(unhealthyList_, DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList) };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setUnhealthyList(const DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList & unhealthyList) { DARABONBA_PTR_SET_VALUE(unhealthyList_, unhealthyList) };
    inline DescribeUnhealthyHostAvailabilityResponseBody& setUnhealthyList(DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList && unhealthyList) { DARABONBA_PTR_SET_RVALUE(unhealthyList_, unhealthyList) };


  protected:
    // The status code.
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
    // The unhealthy instances that are detected by the specified availability monitoring tasks.
    std::shared_ptr<DescribeUnhealthyHostAvailabilityResponseBodyUnhealthyList> unhealthyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
