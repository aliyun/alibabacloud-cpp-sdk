// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCESERVICESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCESERVICESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class GetGovernanceServiceStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailureCode, failureCode_);
      DARABONBA_PTR_TO_JSON(FailureMessage, failureMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceServiceStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailureCode, failureCode_);
      DARABONBA_PTR_FROM_JSON(FailureMessage, failureMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
    };
    GetGovernanceServiceStatusResponseBody() = default ;
    GetGovernanceServiceStatusResponseBody(const GetGovernanceServiceStatusResponseBody &) = default ;
    GetGovernanceServiceStatusResponseBody(GetGovernanceServiceStatusResponseBody &&) = default ;
    GetGovernanceServiceStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceServiceStatusResponseBody() = default ;
    GetGovernanceServiceStatusResponseBody& operator=(const GetGovernanceServiceStatusResponseBody &) = default ;
    GetGovernanceServiceStatusResponseBody& operator=(GetGovernanceServiceStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failureCode_ == nullptr
        && this->failureMessage_ == nullptr && this->requestId_ == nullptr && this->serviceStatus_ == nullptr; };
    // failureCode Field Functions 
    bool hasFailureCode() const { return this->failureCode_ != nullptr;};
    void deleteFailureCode() { this->failureCode_ = nullptr;};
    inline string getFailureCode() const { DARABONBA_PTR_GET_DEFAULT(failureCode_, "") };
    inline GetGovernanceServiceStatusResponseBody& setFailureCode(string failureCode) { DARABONBA_PTR_SET_VALUE(failureCode_, failureCode) };


    // failureMessage Field Functions 
    bool hasFailureMessage() const { return this->failureMessage_ != nullptr;};
    void deleteFailureMessage() { this->failureMessage_ = nullptr;};
    inline string getFailureMessage() const { DARABONBA_PTR_GET_DEFAULT(failureMessage_, "") };
    inline GetGovernanceServiceStatusResponseBody& setFailureMessage(string failureMessage) { DARABONBA_PTR_SET_VALUE(failureMessage_, failureMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetGovernanceServiceStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline string getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, "") };
    inline GetGovernanceServiceStatusResponseBody& setServiceStatus(string serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


  protected:
    // 业务失败原因码。EnableFailed 或 DisableFailed 时返回；其他状态可省略。Enabling 自动补偿期间可返回最近一次补偿异常码，但仍属于进行中状态。
    shared_ptr<string> failureCode_ {};
    // 可供调用方理解和处理的安全业务失败原因。EnableFailed 或 DisableFailed 时返回；其他状态可省略。Enabling 自动补偿期间可返回最近一次补偿异常说明。
    shared_ptr<string> failureMessage_ {};
    shared_ptr<string> requestId_ {};
    // AI 云治理中心服务状态。Enabled：AI 云治理中心和治理成熟度检测均开通成功；Disabled：从未开通或已正常关闭；EnableFailed：开通失败且已自动清理本次开通部分，可重新完整开通；DisableFailed：关闭失败，可能存在部分已关闭状态，可重试关闭，不能直接开通；Enabling：开通或失败后的自动补偿进行中，补偿失败仍保留该状态并继续补偿；Disabling：关闭进行中。Enabling/Disabling 需继续轮询，其他四态为结果状态。既有开通记录保持原有兼容口径；本次 API 新发起开通严格在两项均成功后返回 Enabled。
    shared_ptr<string> serviceStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
