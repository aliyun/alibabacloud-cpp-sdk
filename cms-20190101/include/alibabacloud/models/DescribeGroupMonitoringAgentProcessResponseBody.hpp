// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGROUPMONITORINGAGENTPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeGroupMonitoringAgentProcessResponseBodyProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeGroupMonitoringAgentProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGroupMonitoringAgentProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Processes, processes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGroupMonitoringAgentProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Processes, processes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeGroupMonitoringAgentProcessResponseBody() = default ;
    DescribeGroupMonitoringAgentProcessResponseBody(const DescribeGroupMonitoringAgentProcessResponseBody &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBody(DescribeGroupMonitoringAgentProcessResponseBody &&) = default ;
    DescribeGroupMonitoringAgentProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGroupMonitoringAgentProcessResponseBody() = default ;
    DescribeGroupMonitoringAgentProcessResponseBody& operator=(const DescribeGroupMonitoringAgentProcessResponseBody &) = default ;
    DescribeGroupMonitoringAgentProcessResponseBody& operator=(DescribeGroupMonitoringAgentProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->processes_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processes Field Functions 
    bool hasProcesses() const { return this->processes_ != nullptr;};
    void deleteProcesses() { this->processes_ = nullptr;};
    inline const DescribeGroupMonitoringAgentProcessResponseBodyProcesses & processes() const { DARABONBA_PTR_GET_CONST(processes_, DescribeGroupMonitoringAgentProcessResponseBodyProcesses) };
    inline DescribeGroupMonitoringAgentProcessResponseBodyProcesses processes() { DARABONBA_PTR_GET(processes_, DescribeGroupMonitoringAgentProcessResponseBodyProcesses) };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setProcesses(const DescribeGroupMonitoringAgentProcessResponseBodyProcesses & processes) { DARABONBA_PTR_SET_VALUE(processes_, processes) };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setProcesses(DescribeGroupMonitoringAgentProcessResponseBodyProcesses && processes) { DARABONBA_PTR_SET_RVALUE(processes_, processes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline string total() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
    inline DescribeGroupMonitoringAgentProcessResponseBody& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status codes.
    // 
    // >  The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The page number. Default value: 1
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The process monitoring tasks.
    std::shared_ptr<DescribeGroupMonitoringAgentProcessResponseBodyProcesses> processes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values: true and false.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<string> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
