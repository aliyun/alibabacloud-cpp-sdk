// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOSNONNORMALSERVERSREASON_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOSNONNORMALSERVERSREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason& obj) { 
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason& obj) { 
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
    };
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason &&) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason& operator=(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason& operator=(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reasonCode_ != nullptr; };
    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServersReason& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


  protected:
    // The reason why the **status** is abnormal. Valid values:
    // 
    // *   **CONNECT_TIMEOUT**: The NLB instance failed to connect to the backend server within the specified period of time.
    // *   **CONNECT_FAILED**: The NLB instance failed to connect to the backend server.
    // *   **RECV_RESPONSE_TIMEOUT**: The NLB instance failed to receive a response from the backend server within the specified period of time.
    // *   **CONNECT_INTERRUPT**: The connection between the health check and the backend servers was interrupted.
    // *   **HTTP_CODE_NOT_MATCH**: The HTTP status code from the backend servers was not the expected one.
    // *   **HTTP_INVALID_HEADER**: The format of the response from the backend servers is invalid.
    std::shared_ptr<string> reasonCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
