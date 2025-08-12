// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTSTATUSESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitoringAgentStatusesResponseBodyNodeStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentStatusesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentStatusesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeStatusList, nodeStatusList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentStatusesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeStatusList, nodeStatusList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitoringAgentStatusesResponseBody() = default ;
    DescribeMonitoringAgentStatusesResponseBody(const DescribeMonitoringAgentStatusesResponseBody &) = default ;
    DescribeMonitoringAgentStatusesResponseBody(DescribeMonitoringAgentStatusesResponseBody &&) = default ;
    DescribeMonitoringAgentStatusesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentStatusesResponseBody() = default ;
    DescribeMonitoringAgentStatusesResponseBody& operator=(const DescribeMonitoringAgentStatusesResponseBody &) = default ;
    DescribeMonitoringAgentStatusesResponseBody& operator=(DescribeMonitoringAgentStatusesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->nodeStatusList_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentStatusesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentStatusesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeStatusList Field Functions 
    bool hasNodeStatusList() const { return this->nodeStatusList_ != nullptr;};
    void deleteNodeStatusList() { this->nodeStatusList_ = nullptr;};
    inline const DescribeMonitoringAgentStatusesResponseBodyNodeStatusList & nodeStatusList() const { DARABONBA_PTR_GET_CONST(nodeStatusList_, DescribeMonitoringAgentStatusesResponseBodyNodeStatusList) };
    inline DescribeMonitoringAgentStatusesResponseBodyNodeStatusList nodeStatusList() { DARABONBA_PTR_GET(nodeStatusList_, DescribeMonitoringAgentStatusesResponseBodyNodeStatusList) };
    inline DescribeMonitoringAgentStatusesResponseBody& setNodeStatusList(const DescribeMonitoringAgentStatusesResponseBodyNodeStatusList & nodeStatusList) { DARABONBA_PTR_SET_VALUE(nodeStatusList_, nodeStatusList) };
    inline DescribeMonitoringAgentStatusesResponseBody& setNodeStatusList(DescribeMonitoringAgentStatusesResponseBodyNodeStatusList && nodeStatusList) { DARABONBA_PTR_SET_RVALUE(nodeStatusList_, nodeStatusList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentStatusesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentStatusesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    // 
    // > The status code 200 indicates that the request was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The host status information.
    std::shared_ptr<DescribeMonitoringAgentStatusesResponseBodyNodeStatusList> nodeStatusList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
