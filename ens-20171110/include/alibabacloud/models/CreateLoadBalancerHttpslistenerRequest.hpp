// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERHTTPSLISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERHTTPSLISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateLoadBalancerHTTPSListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerHTTPSListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
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
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerHTTPSListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
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
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
    };
    CreateLoadBalancerHTTPSListenerRequest() = default ;
    CreateLoadBalancerHTTPSListenerRequest(const CreateLoadBalancerHTTPSListenerRequest &) = default ;
    CreateLoadBalancerHTTPSListenerRequest(CreateLoadBalancerHTTPSListenerRequest &&) = default ;
    CreateLoadBalancerHTTPSListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerHTTPSListenerRequest() = default ;
    CreateLoadBalancerHTTPSListenerRequest& operator=(const CreateLoadBalancerHTTPSListenerRequest &) = default ;
    CreateLoadBalancerHTTPSListenerRequest& operator=(CreateLoadBalancerHTTPSListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendServerPort_ != nullptr
        && this->cookie_ != nullptr && this->cookieTimeout_ != nullptr && this->description_ != nullptr && this->forwardPort_ != nullptr && this->healthCheck_ != nullptr
        && this->healthCheckConnectPort_ != nullptr && this->healthCheckDomain_ != nullptr && this->healthCheckHttpCode_ != nullptr && this->healthCheckInterval_ != nullptr && this->healthCheckMethod_ != nullptr
        && this->healthCheckTimeout_ != nullptr && this->healthCheckURI_ != nullptr && this->healthyThreshold_ != nullptr && this->idleTimeout_ != nullptr && this->listenerForward_ != nullptr
        && this->listenerPort_ != nullptr && this->loadBalancerId_ != nullptr && this->requestTimeout_ != nullptr && this->scheduler_ != nullptr && this->serverCertificateId_ != nullptr
        && this->stickySessionType_ != nullptr && this->unhealthyThreshold_ != nullptr; };
    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline int32_t forwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerForward Field Functions 
    bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
    void deleteListenerForward() { this->listenerForward_ = nullptr;};
    inline string listenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline CreateLoadBalancerHTTPSListenerRequest& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline CreateLoadBalancerHTTPSListenerRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


  protected:
    // The backend port that is used by the ELB instance. Valid values: **1** to **65535**.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The cookie that is configured on the server. The cookie must be **1** to **200** characters in length and contain only ASCII characters and digits.
    // 
    // >  This parameter is required if you set StickySession to on and StickySessionType to server.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie. Valid values: **1** to **86400**. Unit: seconds.
    // 
    // >  This parameter is required if you set StickySession to on and StickySessionType to insert.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The description of the listener. The description must be **1** to **80** characters in length.
    // 
    // >  The value cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The listener port that is used to redirect HTTP requests to HTTPS.
    std::shared_ptr<int32_t> forwardPort_ = nullptr;
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    // 
    // This parameter is required.
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The port that is used for health checks. Valid values: **1** to **65535**. If you leave this parameter empty, the port specified by BackendServerPort is used for health checks.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that you want to use for health checks.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code for a successful health check. Valid values:
    // 
    // *   **http_2xx** (default)
    // *   **http_3xx**
    // *   **http_4xx**
    // *   **http_5xx**
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The interval at which health checks are performed. Valid values: **1** to **50**. Default value: **2**. Unit: seconds.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The HTTP request method for health checks. Valid values:
    // 
    // *   **head** (default): requests the head of the page.
    // *   **get**: requests the specified part of the page and returns the entity body.
    // 
    // >  This parameter takes effect only if the HealthCheck parameter is set to on.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The timeout period of a health check response. If a backend server does not respond within the specified timeout period, the server fails to pass the health check.
    // 
    // *   Default value: 5.
    // *   Valid values: **1** to **300**.
    // *   Unit: seconds.
    // 
    // > 
    // 
    // *   This parameter takes effect only if the HealthCheck parameter is set to on.
    // 
    // *   If the value of HealthCheckTimeout is smaller than the value of HealthCheckInterval, the timeout period specified by HealthCheckTimeout becomes invalid, and the value of HealthCheckInterval is used as the timeout period.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The URI used for health checks. The URI must be **1** to **80** characters in length.
    // 
    // >  A URL must start with a forward slash (`/`) but cannot contain only forward slashes (`/`).
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The number of consecutive successful health checks that must occur before an unhealthy and inaccessible backend server is declared healthy and accessible. Valid values: **2** to **10**. Default value: **3**.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The timeout period for idle connections. Default value: 15. Valid values: **1** to **60**. Unit: seconds.
    // 
    // >  If no request is received within the specified timeout period, ELB closes the connection. When another request is received, ELB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // Specifies whether to enable redirection from HTTP to HTTPS. Valid values:
    // 
    // *   **on**
    // *   **off** (default)
    std::shared_ptr<string> listenerForward_ = nullptr;
    // The listening port that is used by Edge Load Balancer (ELB) to receive requests and forward the requests to backend servers. Valid values: **1** to **65535**.
    // 
    // >  We recommend that you use port 443 for HTTPS.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The ID of the Edge Load Balancer (ELB) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The timeout period of requests. Default value: 60. Valid values: **1** to **180**. Unit: seconds.
    // 
    // >  If no response is received from the backend server within the specified timeout period, ELB returns an HTTP 504 error code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr** (default): Backend servers with higher weights receive more requests than backend servers with lower weights.
    // *   **wlc**: Requests are distributed based on the weight and load of each backend server. The load refers to the number of connections on a backend server. If two backend servers have the same weight, the backend server that has fewer connections receives more requests.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // *   **sch**: consistent hashing based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
    // *   **qch**: consistent hashing based on QUIC connection IDs (CIDs). Requests that contain the same QUIC CID are distributed to the same backend server.
    // *   **iqch**: consistent hashing based on three specific bytes of iQUIC CIDs. Requests with the same second, third, and fourth bytes are distributed to the same backend server.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The ID of the server certificate.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
    // The method that is used to handle cookies. Valid values:
    // 
    // *   **insert**: inserts a cookie. ELB inserts a session cookie (SERVERID) into the first HTTP or HTTPS response that is sent to a client. Subsequent requests to ELB carry this cookie, and ELB determines the destination servers of the requests based on the cookies.
    // *   **server**: rewrites the original cookie. SLB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
    // 
    // >  This parameter is required when the StickySession parameter is set to on.
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // The number of consecutive failed health checks that must occur before a healthy and accessible backend server is declared unhealthy and inaccessible. Valid values: **2** to **10**. Default value: **3**.
    // 
    // >  This parameter takes effect only if you set HealthCheck to on.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
