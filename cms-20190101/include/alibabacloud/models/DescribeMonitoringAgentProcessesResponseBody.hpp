// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTPROCESSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitoringAgentProcessesResponseBodyNodeProcesses.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentProcessesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentProcessesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeProcesses, nodeProcesses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentProcessesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeProcesses, nodeProcesses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitoringAgentProcessesResponseBody() = default ;
    DescribeMonitoringAgentProcessesResponseBody(const DescribeMonitoringAgentProcessesResponseBody &) = default ;
    DescribeMonitoringAgentProcessesResponseBody(DescribeMonitoringAgentProcessesResponseBody &&) = default ;
    DescribeMonitoringAgentProcessesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentProcessesResponseBody() = default ;
    DescribeMonitoringAgentProcessesResponseBody& operator=(const DescribeMonitoringAgentProcessesResponseBody &) = default ;
    DescribeMonitoringAgentProcessesResponseBody& operator=(DescribeMonitoringAgentProcessesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->nodeProcesses_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentProcessesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentProcessesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeProcesses Field Functions 
    bool hasNodeProcesses() const { return this->nodeProcesses_ != nullptr;};
    void deleteNodeProcesses() { this->nodeProcesses_ = nullptr;};
    inline const DescribeMonitoringAgentProcessesResponseBodyNodeProcesses & nodeProcesses() const { DARABONBA_PTR_GET_CONST(nodeProcesses_, DescribeMonitoringAgentProcessesResponseBodyNodeProcesses) };
    inline DescribeMonitoringAgentProcessesResponseBodyNodeProcesses nodeProcesses() { DARABONBA_PTR_GET(nodeProcesses_, DescribeMonitoringAgentProcessesResponseBodyNodeProcesses) };
    inline DescribeMonitoringAgentProcessesResponseBody& setNodeProcesses(const DescribeMonitoringAgentProcessesResponseBodyNodeProcesses & nodeProcesses) { DARABONBA_PTR_SET_VALUE(nodeProcesses_, nodeProcesses) };
    inline DescribeMonitoringAgentProcessesResponseBody& setNodeProcesses(DescribeMonitoringAgentProcessesResponseBodyNodeProcesses && nodeProcesses) { DARABONBA_PTR_SET_RVALUE(nodeProcesses_, nodeProcesses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentProcessesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentProcessesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // >  The value 200 indicates that the call was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The information about the processes.
    std::shared_ptr<DescribeMonitoringAgentProcessesResponseBodyNodeProcesses> nodeProcesses_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the call was successful. Valid values:
    // 
    // *   true: The call was successful.
    // *   false: The call failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
