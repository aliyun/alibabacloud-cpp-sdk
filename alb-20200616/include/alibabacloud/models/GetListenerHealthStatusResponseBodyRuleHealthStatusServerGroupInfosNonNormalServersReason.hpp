// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYRULEHEALTHSTATUSSERVERGROUPINFOSNONNORMALSERVERSREASON_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYRULEHEALTHSTATUSSERVERGROUPINFOSNONNORMALSERVERSREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& obj) { 
      DARABONBA_PTR_TO_JSON(ActualResponse, actualResponse_);
      DARABONBA_PTR_TO_JSON(ExpectedResponse, expectedResponse_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualResponse, actualResponse_);
      DARABONBA_PTR_FROM_JSON(ExpectedResponse, expectedResponse_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
    };
    GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason() = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason(const GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason &) = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason(GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason &&) = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason() = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& operator=(const GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason &) = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& operator=(GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualResponse_ != nullptr
        && this->expectedResponse_ != nullptr && this->reasonCode_ != nullptr; };
    // actualResponse Field Functions 
    bool hasActualResponse() const { return this->actualResponse_ != nullptr;};
    void deleteActualResponse() { this->actualResponse_ = nullptr;};
    inline string actualResponse() const { DARABONBA_PTR_GET_DEFAULT(actualResponse_, "") };
    inline GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& setActualResponse(string actualResponse) { DARABONBA_PTR_SET_VALUE(actualResponse_, actualResponse) };


    // expectedResponse Field Functions 
    bool hasExpectedResponse() const { return this->expectedResponse_ != nullptr;};
    void deleteExpectedResponse() { this->expectedResponse_ = nullptr;};
    inline string expectedResponse() const { DARABONBA_PTR_GET_DEFAULT(expectedResponse_, "") };
    inline GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& setExpectedResponse(string expectedResponse) { DARABONBA_PTR_SET_VALUE(expectedResponse_, expectedResponse) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfosNonNormalServersReason& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


  protected:
    // The HTTP status code returned from the server, for example, **302**.
    // 
    // > A value is returned only if **ReasonCode** is set to **RESPONSE_MISMATCH**.
    std::shared_ptr<string> actualResponse_ = nullptr;
    // The HTTP status code returned after backend servers pass health checks.
    // 
    // Valid values: **HTTP_2xx**, **HTTP_3xx**, **HTTP_4xx**, and **HTTP_5xx**. Multiple status codes are separated by commas (,).
    // 
    // > A value is returned only if **ReasonCode** is set to **RESPONSE_MISMATCH**.
    std::shared_ptr<string> expectedResponse_ = nullptr;
    // The reason why the value of **Status** is Unhealthy. Only forwarding rules for HTTP and HTTPS listeners support this parameter.
    // 
    // *   **CONNECT_TIMEOUT**: ALB failed to connect to the backend server within the specified period of time.
    // *   **CONNECT_FAILED**: ALB failed to connect to the backend server.
    // *   **RECV_RESPONSE_FAILED**: ALB failed to receive a response from the backend server.
    // *   **RECV_RESPONSE_TIMEOUT**: ALB failed to receive a response from the backend server within the specified period of time.
    // *   **SEND_REQUEST_FAILED**: ALB failed to send a request to the backend server.
    // *   **SEND_REQUEST_TIMEOUT**: ALB failed to send a request to the backend server within the specified period of time.
    // *   **RESPONSE_FORMAT_ERROR**: The format of the response from the backend server is invalid.
    // *   **RESPONSE_MISMATCH**: The HTTP status code returned from the backend server is not the expected one.
    std::shared_ptr<string> reasonCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
