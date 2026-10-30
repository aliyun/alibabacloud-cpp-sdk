// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
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
      DARABONBA_PTR_TO_JSON(ListenerForward, listenerForward_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
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
      DARABONBA_PTR_FROM_JSON(ListenerForward, listenerForward_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    DescribeLoadBalancerHTTPSListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBody(const DescribeLoadBalancerHTTPSListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBody(DescribeLoadBalancerHTTPSListenerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPSListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBody& operator=(const DescribeLoadBalancerHTTPSListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerHTTPSListenerAttributeResponseBody& operator=(DescribeLoadBalancerHTTPSListenerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backendServerPort_ == nullptr
        && this->bandwidth_ == nullptr && this->description_ == nullptr && this->forwardPort_ == nullptr && this->healthCheck_ == nullptr && this->healthCheckConnectPort_ == nullptr
        && this->healthCheckDomain_ == nullptr && this->healthCheckHttpCode_ == nullptr && this->healthCheckInterval_ == nullptr && this->healthCheckMethod_ == nullptr && this->healthCheckTimeout_ == nullptr
        && this->healthCheckURI_ == nullptr && this->healthyThreshold_ == nullptr && this->idleTimeout_ == nullptr && this->listenerForward_ == nullptr && this->listenerPort_ == nullptr
        && this->requestId_ == nullptr && this->requestTimeout_ == nullptr && this->scheduler_ == nullptr && this->serverCertificateId_ == nullptr && this->status_ == nullptr
        && this->unhealthyThreshold_ == nullptr; };
    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t getBackendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline int32_t getForwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string getHealthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t getHealthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string getHealthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string getHealthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t getHealthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string getHealthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t getHealthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string getHealthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t getHealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t getIdleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerForward Field Functions 
    bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
    void deleteListenerForward() { this->listenerForward_ = nullptr;};
    inline string getListenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t getListenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t getRequestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string getScheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string getServerCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t getUnhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The port used by the backend server of the load balancer instance. Valid values: **1** to **65535**.
    shared_ptr<int32_t> backendServerPort_ {};
    // The peak bandwidth of the load balancer. Default value: -1, which indicates that bandwidth is not limited.
    shared_ptr<int32_t> bandwidth_ {};
    // The description of the listener. The description must be **1** to **80** characters in length.
    shared_ptr<string> description_ {};
    // The HTTP-to-HTTPS forwarding port for the listener.
    shared_ptr<int32_t> forwardPort_ {};
    // Specifies whether to enable the health check. Valid values:
    // - **on**: Enables the health check.
    // - **off**: Disables the health check.
    shared_ptr<string> healthCheck_ {};
    // The port used for health checks. Valid values: **1** to **65535**. If this parameter is not specified, the backend server port (BackendServerPort) is used.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthCheckConnectPort_ {};
    // The domain name used for health checks.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckDomain_ {};
    // The HTTP status codes that indicate a successful health check. Valid values:
    // 
    // - **http_2xx** (default)
    // - **http_3xx**
    // - **http_4xx**
    // - **http_5xx**
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckHttpCode_ {};
    // The interval between two consecutive health checks. Valid values: **1** to **50**. Unit: seconds.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthCheckInterval_ {};
    // The HTTP method used for health checks. Valid values:
    // 
    // - **head**: Requests only the header of the page.
    // - **get**: Requests the specified page information and returns the entity body.
    // 
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckMethod_ {};
    // The timeout period for receiving a response from a health check. If the backend ENS instance does not respond within the specified timeout period, the health check fails.
    // - Default value: 5.
    // - Valid values: **1** to **300**.
    // - Unit: seconds.
    // > - This parameter takes effect only when HealthCheck is set to on.
    // > - If the value of HealthCheckTimeout is less than the value of HealthCheckInterval, HealthCheckTimeout is invalid and the timeout period is the value of HealthCheckInterval.
    shared_ptr<int32_t> healthCheckTimeout_ {};
    // The URI used for health checks. The URI must be **1** to **80** characters in length.
    // - The URI cannot be only a forward slash (`/`), but must start with a forward slash.
    // - This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<string> healthCheckURI_ {};
    // The number of consecutive successful health checks required to change the health check status of a backend server from fail (unreachable) to success (reachable). Valid values: **2** to **10**.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> healthyThreshold_ {};
    // The idle connection timeout period. Default value: 15. Valid values: **1** to **60**. Unit: seconds.
    // > If no access request is received within the timeout period, the load balancer temporarily interrupts the current connection and establishes a new connection when the next request arrives.
    shared_ptr<int32_t> idleTimeout_ {};
    // Specifies whether to enable HTTP-to-HTTPS forwarding. Valid values:
    // 
    // - **on**: Enables HTTP-to-HTTPS forwarding.
    // - **off**: Disables HTTP-to-HTTPS forwarding.
    shared_ptr<string> listenerForward_ {};
    // The frontend port used by the load balancer instance. Valid values: **1** to **65535**.
    shared_ptr<int32_t> listenerPort_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request timeout period. Default value: 60. Valid values: **1** to **180**. Unit: seconds.
    // > If no response is received from the backend server within the timeout period, the load balancer stops waiting and returns an HTTP 504 error code to the client.
    shared_ptr<int32_t> requestTimeout_ {};
    // The scheduling algorithm. Valid values:
    // - **wrr**: Backend servers with higher weights are polled more frequently.
    // - **wlc**: In addition to the weight of each backend server, the actual load (number of connections) of the backend server is also considered. If the weights are the same, backend servers with fewer current connections are polled more frequently.
    // - **rr**: External requests are distributed to backend servers in sequence.
    // - **sch**: Consistent hashing based on source IP addresses. Requests from the same source IP address are scheduled to the same backend server.
    // - **qch**: Consistent hashing based on QUIC Connection IDs. Requests with the same QUIC Connection ID are scheduled to the same backend server.
    // - **iqch**: Consistent hashing based on three specific bytes of the iQUIC CID. Requests with the same 2nd to 4th bytes are scheduled to the same backend server.
    shared_ptr<string> scheduler_ {};
    // The ID of the server certificate.
    shared_ptr<string> serverCertificateId_ {};
    // The current status of the listener. Valid values:
    // 
    // - **Running**: The listener is running normally.
    // - **Stopped**: The listener is stopped.
    // - **Starting**: The listener is starting.
    // - **Configuring**: The listener is being configured.
    // - **Stopping**: The listener is being stopped.
    shared_ptr<string> status_ {};
    // The number of consecutive failed health checks required to change the health check status of a backend server from success (reachable) to fail (unreachable). Valid values: **2** to **10**.
    // > This parameter takes effect only when HealthCheck is set to on.
    shared_ptr<int32_t> unhealthyThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
