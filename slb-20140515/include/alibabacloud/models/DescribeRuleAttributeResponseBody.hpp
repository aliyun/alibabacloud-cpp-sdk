// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeRuleAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(ListenerSync, listenerSync_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(ListenerSync, listenerSync_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    DescribeRuleAttributeResponseBody() = default ;
    DescribeRuleAttributeResponseBody(const DescribeRuleAttributeResponseBody &) = default ;
    DescribeRuleAttributeResponseBody(DescribeRuleAttributeResponseBody &&) = default ;
    DescribeRuleAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleAttributeResponseBody() = default ;
    DescribeRuleAttributeResponseBody& operator=(const DescribeRuleAttributeResponseBody &) = default ;
    DescribeRuleAttributeResponseBody& operator=(DescribeRuleAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cookie_ == nullptr
        && return this->cookieTimeout_ == nullptr && return this->domain_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckDomain_ == nullptr
        && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckInterval_ == nullptr && return this->healthCheckTimeout_ == nullptr && return this->healthCheckURI_ == nullptr && return this->healthyThreshold_ == nullptr
        && return this->listenerPort_ == nullptr && return this->listenerSync_ == nullptr && return this->loadBalancerId_ == nullptr && return this->requestId_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->scheduler_ == nullptr && return this->stickySession_ == nullptr && return this->stickySessionType_ == nullptr && return this->unhealthyThreshold_ == nullptr
        && return this->url_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeRuleAttributeResponseBody& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline DescribeRuleAttributeResponseBody& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeRuleAttributeResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeRuleAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeRuleAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeRuleAttributeResponseBody& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeRuleAttributeResponseBody& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeRuleAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline DescribeRuleAttributeResponseBody& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeRuleAttributeResponseBody& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeRuleAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline string listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, "") };
    inline DescribeRuleAttributeResponseBody& setListenerPort(string listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // listenerSync Field Functions 
    bool hasListenerSync() const { return this->listenerSync_ != nullptr;};
    void deleteListenerSync() { this->listenerSync_ = nullptr;};
    inline string listenerSync() const { DARABONBA_PTR_GET_DEFAULT(listenerSync_, "") };
    inline DescribeRuleAttributeResponseBody& setListenerSync(string listenerSync) { DARABONBA_PTR_SET_VALUE(listenerSync_, listenerSync) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeRuleAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRuleAttributeResponseBody& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRuleAttributeResponseBody& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeRuleAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline string stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
    inline DescribeRuleAttributeResponseBody& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline DescribeRuleAttributeResponseBody& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeRuleAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeRuleAttributeResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeRuleAttributeResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The cookie to be configured on the backend server.
    // 
    // The cookie must be 1 to 200 characters in length and can contain ASCII letters and digits. It cannot contain commas (,), semicolons (;), or whitespace characters. It cannot start with a dollar sign ($).
    // 
    // If you set the **StickySession** parameter to **on** and the **StickySessionType** parameter to **server**, this parameter is required.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie.
    // 
    // Valid values: **1 to 86400**. Unit: seconds.
    // 
    // >  If you set the **StickySession** parameter to **on** and the **StickySessionType** parameter to **insert**, this parameter is required.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The domain name that is configured in the forwarding rule.
    std::shared_ptr<string> domain_ = nullptr;
    // Specifies whether to enable health checks.
    // 
    // Valid values: **on** and **off**.
    // 
    // >  If you set the **ListenerSync** parameter to **off**, this parameter is required. If you set the parameter to **on**, the configuration of the listener is used.
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The backend port that is used for health checks.
    // 
    // Valid values: **1** to **65535**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required. If this parameter is empty but **HealthCheck** is set to **on**, the listener port is used for health checks.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that is used for health checks. Valid values:
    // 
    // *   **$_ip**: The private IP address of the backend server. If the $_ip parameter is set or the HealthCheckDomain parameter is not set, SLB uses the private IP addresses of backend servers as the domain names for health checks.
    // *   **domain**: The domain name must be 1 to 80 characters in length. It can contain only letters, digits, periods (.),and hyphens (-).
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code that indicates a successful health check. Separate multiple HTTP status codes with commas (,). Default value: **http_2xx**.
    // 
    // Valid values: **http_2xx**, **http_3xx**, **http_4xx**, and **http_5xx**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The time interval between two consecutive health checks.
    // 
    // Valid values: **1** to **50**. Unit: seconds.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The timeout period of a health check response. If a backend ECS instance does not respond within the specified timeout period, the ECS instance fails the health check.
    // 
    // Valid values: **1** to **300**. Unit: seconds.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The URI that is used for health checks.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The number of consecutive successful health checks that must occur before an unhealthy backend server is declared healthy. In this case, the health check state is changed from **fail** to **success**.
    // 
    // Valid values: **2** to **10**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The listener port that is used by the SLB instance.
    std::shared_ptr<string> listenerPort_ = nullptr;
    // Indicates whether the forwarding rule uses the scheduling algorithm, session persistence, and health check configurations of the listener.
    // 
    // Valid values: **on** and **off**.
    // 
    // *   **off**: does not use the configurations of the listener. You can customize health check and session persistence configurations for the forwarding rule.
    // *   **on**: uses the configurations of the listener.
    std::shared_ptr<string> listenerSync_ = nullptr;
    // The ID of the SLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the forwarding rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the forwarding rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr** (default): Backend servers that have higher weights receive more requests than backend servers that have lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // 
    // >  If you set the **ListenerSync** parameter to **off**, this parameter is required. If you set the parameter to **on**, the configuration of the listener is used.
    std::shared_ptr<string> scheduler_ = nullptr;
    // Indicates whether session persistence is enabled.
    // 
    // Valid values: **on** and **off**.
    // 
    // >  If you set the **ListenerSync** parameter to **off**, this parameter is required. If you set the parameter to **on**, the configuration of the listener is used.
    std::shared_ptr<string> stickySession_ = nullptr;
    // The method that is used to handle a cookie. Valid values:
    // 
    // *   **insert**: inserts a cookie into the response. SLB inserts a cookie (SERVERID) into the first HTTP or HTTPS response packet that is sent to a client. The next request from the client will contain this cookie, and the listener will distribute this request to the recorded backend server.
    // *   **server**: rewrites a cookie. When SLB detects a user-defined cookie, SLB overwrites the original cookie with the user-defined cookie. The next request from the client contains the user-defined cookie, and the listener distributes the request to the recorded backend server.
    // 
    // >  If you set the **StickySession** parameter to **on**, this parameter is required.
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // The number of consecutive failed health checks that must occur before a healthy backend server is declared unhealthy. In this case, the health check state is changed from **success** to **fail**.
    // 
    // Valid values: **2** to **10**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // The URL that is configured in the forwarding rule.
    std::shared_ptr<string> url_ = nullptr;
    // The ID of the vServer group that is associated with the forwarding rule.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
