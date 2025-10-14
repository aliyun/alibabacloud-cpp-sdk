// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALERTHISTORYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlertHistoryListResponseBodyAlarmHistoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeAlertHistoryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlertHistoryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmHistoryList, alarmHistoryList_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlertHistoryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmHistoryList, alarmHistoryList_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeAlertHistoryListResponseBody() = default ;
    DescribeAlertHistoryListResponseBody(const DescribeAlertHistoryListResponseBody &) = default ;
    DescribeAlertHistoryListResponseBody(DescribeAlertHistoryListResponseBody &&) = default ;
    DescribeAlertHistoryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlertHistoryListResponseBody() = default ;
    DescribeAlertHistoryListResponseBody& operator=(const DescribeAlertHistoryListResponseBody &) = default ;
    DescribeAlertHistoryListResponseBody& operator=(DescribeAlertHistoryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmHistoryList_ == nullptr
        && return this->code_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // alarmHistoryList Field Functions 
    bool hasAlarmHistoryList() const { return this->alarmHistoryList_ != nullptr;};
    void deleteAlarmHistoryList() { this->alarmHistoryList_ = nullptr;};
    inline const DescribeAlertHistoryListResponseBodyAlarmHistoryList & alarmHistoryList() const { DARABONBA_PTR_GET_CONST(alarmHistoryList_, DescribeAlertHistoryListResponseBodyAlarmHistoryList) };
    inline DescribeAlertHistoryListResponseBodyAlarmHistoryList alarmHistoryList() { DARABONBA_PTR_GET(alarmHistoryList_, DescribeAlertHistoryListResponseBodyAlarmHistoryList) };
    inline DescribeAlertHistoryListResponseBody& setAlarmHistoryList(const DescribeAlertHistoryListResponseBodyAlarmHistoryList & alarmHistoryList) { DARABONBA_PTR_SET_VALUE(alarmHistoryList_, alarmHistoryList) };
    inline DescribeAlertHistoryListResponseBody& setAlarmHistoryList(DescribeAlertHistoryListResponseBodyAlarmHistoryList && alarmHistoryList) { DARABONBA_PTR_SET_RVALUE(alarmHistoryList_, alarmHistoryList) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAlertHistoryListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAlertHistoryListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlertHistoryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAlertHistoryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeAlertHistoryListResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The details of historical alerts.
    std::shared_ptr<DescribeAlertHistoryListResponseBodyAlarmHistoryList> alarmHistoryList_ = nullptr;
    // The status code.
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
    // The total number of entries returned.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
