// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOADBALANCERHTTPSLISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOADBALANCERHTTPSLISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class SetLoadBalancerHTTPSListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoadBalancerHTTPSListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoadBalancerHTTPSListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    SetLoadBalancerHTTPSListenerAttributeRequest() = default ;
    SetLoadBalancerHTTPSListenerAttributeRequest(const SetLoadBalancerHTTPSListenerAttributeRequest &) = default ;
    SetLoadBalancerHTTPSListenerAttributeRequest(SetLoadBalancerHTTPSListenerAttributeRequest &&) = default ;
    SetLoadBalancerHTTPSListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoadBalancerHTTPSListenerAttributeRequest() = default ;
    SetLoadBalancerHTTPSListenerAttributeRequest& operator=(const SetLoadBalancerHTTPSListenerAttributeRequest &) = default ;
    SetLoadBalancerHTTPSListenerAttributeRequest& operator=(SetLoadBalancerHTTPSListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->healthCheck_ == nullptr && this->healthCheckConnectPort_ == nullptr && this->healthCheckDomain_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckInterval_ == nullptr
        && this->healthCheckMethod_ == nullptr && this->healthCheckTimeout_ == nullptr && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr && this->idleTimeout_ == nullptr
        && this->listenerPort_ == nullptr && this->loadBalancerId_ == nullptr && this->requestTimeout_ == nullptr && this->scheduler_ == nullptr && this->serverCertificateId_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string getServerCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline SetLoadBalancerHTTPSListenerAttributeRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The name of the listener. The name must be **1** to **80** characters in length.
    // 
    // > It cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the health check. Valid values:
    // - **on**: enables the health check.
    // - **off**: disables the health check.
    shared_ptr<string> healthCheck_ {};
    // The port used for health checks. Valid values: **1** to **65535**. If the Settings for this parameter are not specified, the backend service port (BackendServerPort) is used.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthCheckConnectPort_ {};
    // The domain name used for health checks.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckDomain_ {};
    // The HTTP status codes that indicate a successful health check. Valid values:
    // 
    // - **http_2xx** (default).
    // - **http_3xx**.
    // - **http_4xx**.
    // - **http_5xx**.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckHttpCode_ {};
    // The interval between two consecutive health checks. Valid values: **1** to **50**. Unit: seconds.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthCheckInterval_ {};
    // The HTTP method used for health checks. Valid values:
    // 
    // - **head** (default): requests only the header of the page.
    // - **get**: requests the specified page information and returns the entity body.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckMethod_ {};
    // The timeout period for a health check response. If a backend server does not respond within the specified timeout period, the health check fails.
    // - Default value: 5.
    // - Valid values: **1** to **300**.
    // - Unit: seconds.
    // > - This parameter takes effect only when HealthCheck is set to on.
    // > - If the value of HealthCheckTimeout is less than the value of HealthCheckInterval, HealthCheckTimeout is invalid and the timeout period is the value of HealthCheckInterval.
    shared_ptr<int32_t> healthCheckTimeout_ {};
    // The URI used for health checks. The URI must be **1** to **80** characters in length.
    // > - The URI cannot be only `/`, but must start with `/`.
    // > - This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckURI_ {};
    // The number of consecutive successful health checks that must occur before the health check status of a backend server changes from fail (unreachable) to success (reachable). Valid values: **2** to **10**.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthyThreshold_ {};
    // The idle connection timeout period. Default value: 15. Valid values: **1** to **60**. Unit: seconds.
    // > If there is no access request within the timeout period, load balancing temporarily breaks the current connection until a new connection is established when the next request arrives.
    shared_ptr<int32_t> idleTimeout_ {};
    // The frontend port of the listener whose attributes you want to modify. Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    shared_ptr<int32_t> listenerPort_ {};
    // The ID of the load balancing instance.
    // 
    // This parameter is required.
    shared_ptr<string> loadBalancerId_ {};
    // The request timeout period. Default value: 60. Valid values: **1** to **180**. Unit: seconds.
    // > If a backend server does not send a response within the timeout period, load balancing stops waiting and returns an HTTP 504 error code to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The scheduling algorithm. Valid values:
    // - **wrr**: Backend servers with higher weights receive more requests.
    // - **wlc**: Requests are distributed based on the weights and actual loads (connections) of backend servers. If the weights are the same, backend servers with fewer connections receive more requests.
    // - **rr**: Requests are evenly distributed to backend servers in sequence.
    // - **sch**: Consistent hashing based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
    // - **qch**: Consistent hashing based on QUIC Connection IDs. Requests with the same QUIC Connection ID are distributed to the same backend server.
    // - **iqch**: Consistent hashing based on specific three bytes of the iQUIC CID. Requests with the same 2nd to 4th bytes are distributed to the same backend server.
    shared_ptr<string> scheduler_ {};
    // The ID of the server certificate.
    shared_ptr<string> serverCertificateId_ {};
    // The number of consecutive failed health checks that must occur before the health check status of a backend server changes from success (reachable) to fail (unreachable). Valid values: **2** to **10**.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
