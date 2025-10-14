// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitoringAgentHostsResponseBodyHosts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentHostsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentHostsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Hosts, hosts_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentHostsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Hosts, hosts_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PageTotal, pageTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeMonitoringAgentHostsResponseBody() = default ;
    DescribeMonitoringAgentHostsResponseBody(const DescribeMonitoringAgentHostsResponseBody &) = default ;
    DescribeMonitoringAgentHostsResponseBody(DescribeMonitoringAgentHostsResponseBody &&) = default ;
    DescribeMonitoringAgentHostsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentHostsResponseBody() = default ;
    DescribeMonitoringAgentHostsResponseBody& operator=(const DescribeMonitoringAgentHostsResponseBody &) = default ;
    DescribeMonitoringAgentHostsResponseBody& operator=(DescribeMonitoringAgentHostsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hosts_ == nullptr && return this->message_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->pageTotal_ == nullptr
        && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentHostsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hosts Field Functions 
    bool hasHosts() const { return this->hosts_ != nullptr;};
    void deleteHosts() { this->hosts_ = nullptr;};
    inline const DescribeMonitoringAgentHostsResponseBodyHosts & hosts() const { DARABONBA_PTR_GET_CONST(hosts_, DescribeMonitoringAgentHostsResponseBodyHosts) };
    inline DescribeMonitoringAgentHostsResponseBodyHosts hosts() { DARABONBA_PTR_GET(hosts_, DescribeMonitoringAgentHostsResponseBodyHosts) };
    inline DescribeMonitoringAgentHostsResponseBody& setHosts(const DescribeMonitoringAgentHostsResponseBodyHosts & hosts) { DARABONBA_PTR_SET_VALUE(hosts_, hosts) };
    inline DescribeMonitoringAgentHostsResponseBody& setHosts(DescribeMonitoringAgentHostsResponseBodyHosts && hosts) { DARABONBA_PTR_SET_RVALUE(hosts_, hosts) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentHostsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pageTotal Field Functions 
    bool hasPageTotal() const { return this->pageTotal_ != nullptr;};
    void deletePageTotal() { this->pageTotal_ = nullptr;};
    inline int32_t pageTotal() const { DARABONBA_PTR_GET_DEFAULT(pageTotal_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setPageTotal(int32_t pageTotal) { DARABONBA_PTR_SET_VALUE(pageTotal_, pageTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentHostsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentHostsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeMonitoringAgentHostsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the hosts.
    std::shared_ptr<DescribeMonitoringAgentHostsResponseBodyHosts> hosts_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned pages.
    std::shared_ptr<int32_t> pageTotal_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
