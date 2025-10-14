// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPNOTIFYPOLICYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupNotifyPolicyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupNotifyPolicyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NotifyPolicyList, notifyPolicyList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupNotifyPolicyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NotifyPolicyList, notifyPolicyList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMonitorGroupNotifyPolicyListResponseBody() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody(const DescribeMonitorGroupNotifyPolicyListResponseBody &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody(DescribeMonitorGroupNotifyPolicyListResponseBody &&) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupNotifyPolicyListResponseBody() = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody& operator=(const DescribeMonitorGroupNotifyPolicyListResponseBody &) = default ;
    DescribeMonitorGroupNotifyPolicyListResponseBody& operator=(DescribeMonitorGroupNotifyPolicyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->notifyPolicyList_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // notifyPolicyList Field Functions 
    bool hasNotifyPolicyList() const { return this->notifyPolicyList_ != nullptr;};
    void deleteNotifyPolicyList() { this->notifyPolicyList_ = nullptr;};
    inline const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList & notifyPolicyList() const { DARABONBA_PTR_GET_CONST(notifyPolicyList_, DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList notifyPolicyList() { DARABONBA_PTR_GET(notifyPolicyList_, DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setNotifyPolicyList(const DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList & notifyPolicyList) { DARABONBA_PTR_SET_VALUE(notifyPolicyList_, notifyPolicyList) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setNotifyPolicyList(DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList && notifyPolicyList) { DARABONBA_PTR_SET_RVALUE(notifyPolicyList_, notifyPolicyList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMonitorGroupNotifyPolicyListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code.
    // 
    // > The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The returned policies.
    std::shared_ptr<DescribeMonitorGroupNotifyPolicyListResponseBodyNotifyPolicyList> notifyPolicyList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<string> success_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
