// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EnableActiveAlert, enableActiveAlert_);
      DARABONBA_PTR_TO_JSON(EnableInstallAgentNewECS, enableInstallAgentNewECS_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoInstall, autoInstall_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EnableActiveAlert, enableActiveAlert_);
      DARABONBA_PTR_FROM_JSON(EnableInstallAgentNewECS, enableInstallAgentNewECS_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeMonitoringAgentConfigResponseBody() = default ;
    DescribeMonitoringAgentConfigResponseBody(const DescribeMonitoringAgentConfigResponseBody &) = default ;
    DescribeMonitoringAgentConfigResponseBody(DescribeMonitoringAgentConfigResponseBody &&) = default ;
    DescribeMonitoringAgentConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentConfigResponseBody() = default ;
    DescribeMonitoringAgentConfigResponseBody& operator=(const DescribeMonitoringAgentConfigResponseBody &) = default ;
    DescribeMonitoringAgentConfigResponseBody& operator=(DescribeMonitoringAgentConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoInstall_ == nullptr
        && this->code_ == nullptr && this->enableActiveAlert_ == nullptr && this->enableInstallAgentNewECS_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // autoInstall Field Functions 
    bool hasAutoInstall() const { return this->autoInstall_ != nullptr;};
    void deleteAutoInstall() { this->autoInstall_ = nullptr;};
    inline bool getAutoInstall() const { DARABONBA_PTR_GET_DEFAULT(autoInstall_, false) };
    inline DescribeMonitoringAgentConfigResponseBody& setAutoInstall(bool autoInstall) { DARABONBA_PTR_SET_VALUE(autoInstall_, autoInstall) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeMonitoringAgentConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // enableActiveAlert Field Functions 
    bool hasEnableActiveAlert() const { return this->enableActiveAlert_ != nullptr;};
    void deleteEnableActiveAlert() { this->enableActiveAlert_ = nullptr;};
    inline string getEnableActiveAlert() const { DARABONBA_PTR_GET_DEFAULT(enableActiveAlert_, "") };
    inline DescribeMonitoringAgentConfigResponseBody& setEnableActiveAlert(string enableActiveAlert) { DARABONBA_PTR_SET_VALUE(enableActiveAlert_, enableActiveAlert) };


    // enableInstallAgentNewECS Field Functions 
    bool hasEnableInstallAgentNewECS() const { return this->enableInstallAgentNewECS_ != nullptr;};
    void deleteEnableInstallAgentNewECS() { this->enableInstallAgentNewECS_ = nullptr;};
    inline bool getEnableInstallAgentNewECS() const { DARABONBA_PTR_GET_DEFAULT(enableInstallAgentNewECS_, false) };
    inline DescribeMonitoringAgentConfigResponseBody& setEnableInstallAgentNewECS(bool enableInstallAgentNewECS) { DARABONBA_PTR_SET_VALUE(enableInstallAgentNewECS_, enableInstallAgentNewECS) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeMonitoringAgentConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMonitoringAgentConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeMonitoringAgentConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the CloudMonitor agent is automatically installed on existing Elastic Compute Service (ECS) instances. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> autoInstall_ {};
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The cloud services for which proactive alerting is enabled.
    shared_ptr<string> enableActiveAlert_ {};
    // Indicates whether the CloudMonitor agent is automatically installed on newly purchased ECS instances. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableInstallAgentNewECS_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
