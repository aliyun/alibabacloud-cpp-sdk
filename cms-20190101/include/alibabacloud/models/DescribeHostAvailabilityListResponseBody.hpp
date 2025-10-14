// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHOSTAVAILABILITYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHostAvailabilityListResponseBodyTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeHostAvailabilityListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHostAvailabilityListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHostAvailabilityListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeHostAvailabilityListResponseBody() = default ;
    DescribeHostAvailabilityListResponseBody(const DescribeHostAvailabilityListResponseBody &) = default ;
    DescribeHostAvailabilityListResponseBody(DescribeHostAvailabilityListResponseBody &&) = default ;
    DescribeHostAvailabilityListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHostAvailabilityListResponseBody() = default ;
    DescribeHostAvailabilityListResponseBody& operator=(const DescribeHostAvailabilityListResponseBody &) = default ;
    DescribeHostAvailabilityListResponseBody& operator=(DescribeHostAvailabilityListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->taskList_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeHostAvailabilityListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeHostAvailabilityListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHostAvailabilityListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeHostAvailabilityListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const DescribeHostAvailabilityListResponseBodyTaskList & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, DescribeHostAvailabilityListResponseBodyTaskList) };
    inline DescribeHostAvailabilityListResponseBodyTaskList taskList() { DARABONBA_PTR_GET(taskList_, DescribeHostAvailabilityListResponseBodyTaskList) };
    inline DescribeHostAvailabilityListResponseBody& setTaskList(const DescribeHostAvailabilityListResponseBodyTaskList & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline DescribeHostAvailabilityListResponseBody& setTaskList(DescribeHostAvailabilityListResponseBodyTaskList && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeHostAvailabilityListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
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
    // The details of the availability monitoring tasks.
    std::shared_ptr<DescribeHostAvailabilityListResponseBodyTaskList> taskList_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
