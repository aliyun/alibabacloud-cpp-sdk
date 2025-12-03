// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODYRULESRULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODYRULESRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeRulesResponseBodyRulesRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBodyRulesRule& obj) { 
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
      DARABONBA_PTR_TO_JSON(ListenerSync, listenerSync_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBodyRulesRule& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ListenerSync, listenerSync_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    DescribeRulesResponseBodyRulesRule() = default ;
    DescribeRulesResponseBodyRulesRule(const DescribeRulesResponseBodyRulesRule &) = default ;
    DescribeRulesResponseBodyRulesRule(DescribeRulesResponseBodyRulesRule &&) = default ;
    DescribeRulesResponseBodyRulesRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBodyRulesRule() = default ;
    DescribeRulesResponseBodyRulesRule& operator=(const DescribeRulesResponseBodyRulesRule &) = default ;
    DescribeRulesResponseBodyRulesRule& operator=(DescribeRulesResponseBodyRulesRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cookie_ == nullptr
        && return this->cookieTimeout_ == nullptr && return this->domain_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckDomain_ == nullptr
        && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckInterval_ == nullptr && return this->healthCheckTimeout_ == nullptr && return this->healthCheckURI_ == nullptr && return this->healthyThreshold_ == nullptr
        && return this->listenerSync_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr && return this->scheduler_ == nullptr && return this->stickySession_ == nullptr
        && return this->stickySessionType_ == nullptr && return this->unhealthyThreshold_ == nullptr && return this->url_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeRulesResponseBodyRulesRule& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline DescribeRulesResponseBodyRulesRule& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeRulesResponseBodyRulesRule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeRulesResponseBodyRulesRule& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeRulesResponseBodyRulesRule& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerSync Field Functions 
    bool hasListenerSync() const { return this->listenerSync_ != nullptr;};
    void deleteListenerSync() { this->listenerSync_ = nullptr;};
    inline string listenerSync() const { DARABONBA_PTR_GET_DEFAULT(listenerSync_, "") };
    inline DescribeRulesResponseBodyRulesRule& setListenerSync(string listenerSync) { DARABONBA_PTR_SET_VALUE(listenerSync_, listenerSync) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRulesResponseBodyRulesRule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeRulesResponseBodyRulesRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeRulesResponseBodyRulesRule& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline string stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
    inline DescribeRulesResponseBodyRulesRule& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline DescribeRulesResponseBodyRulesRule& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeRulesResponseBodyRulesRule& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeRulesResponseBodyRulesRule& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeRulesResponseBodyRulesRule& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The cookie that is configured on the backend server.
    // 
    // The value must be 1 to 200 characters in length, and can contain only ASCII letters and digits. It cannot contain commas (,), semicolons (;), or spaces. It cannot start with a dollar sign ($).
    // 
    // >  If you set the **StickySession** parameter to **on** and the **StickySessionType** parameter to **server**, this parameter is required.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie. Valid values: **1 to 86400**. Unit: seconds.
    // 
    // >  If you set the **StickySession** parameter to **on** and the **StickySessionType** parameter to **insert**, this parameter is required.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The requested domain name specified in the forwarding rule.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether health checks are enabled.
    // 
    // Valid values: **on** and **off**.
    // 
    // >  If you set the **ListenerSync** parameter to **off**, this parameter is required. If you set the parameter to **on**, the configuration of the listener is used.
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The backend port that is used for health checks.
    // 
    // Valid values: **1 to 65535**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required. If this parameter is empty but **HealthCheck** is set to **on**, the listener port is used for health checks.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that is used for health checks. Valid values:
    // 
    // *   **$_ip**: The private IP address of the backend server.
    // 
    //     If you do not set this parameter or set the parameter to $_ip, the SLB instance uses the private IP address of each backend server as the domain name for health checks.
    // 
    // *   **domain**: The domain name must be 1 to 80 characters in length. The domain name can contain only letters, digits, periods (.),and hyphens (-).
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code that indicates a successful health check. Multiple HTTP status codes are separated by commas (,). Default value: **http_2xx**.
    // 
    // Valid values: **http_2xx**, **http_3xx**, **http_4xx**, and **http_5xx**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The time interval between two consecutive health checks.
    // 
    // Valid values: **1 to 50**. Unit: seconds.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The timeout period of a health check response. If a backend ECS instance does not respond within the specified timeout period, the ECS instance fails the health check. Unit: seconds
    // 
    // Valid values: **1 to 300**.
    // 
    // >  When you set the **HealthCheck** parameter to **on**, this parameter takes effect.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The URI that is used for health checks.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // Specifies the number of successful health checks that must be consecutively performed before a backend server can be declared healthy (from **fail** to **success**).
    // 
    // Valid values: **2 to 10**.
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // Indicates whether the forwarding rule uses the scheduling algorithm, session persistence, and health check configurations of the listener.
    // 
    // Valid values: **on** and **off**.
    // 
    // *   **off**: does not use the configurations of the listener. You can customize health check and session persistence configurations for the forwarding rule.
    // *   **on**: uses the configurations of the listener.
    std::shared_ptr<string> listenerSync_ = nullptr;
    // The ID of the forwarding rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the forwarding rule. The name must be 1 to 80 characters in length, and can contain only letters, digits, hyphens (-), forward slashes (/), periods (.),and underscores (_).
    // 
    // >  The name of each forwarding rule must be unique within a listener.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr** (default): Backend servers that have higher weights receive more requests than backend servers that have lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // 
    // >  If you set the **ListenerSync** parameter to **off**, this parameter is required. If you set the parameter to **on**, the configuration of the listener is used.
    std::shared_ptr<string> scheduler_ = nullptr;
    // Specifies whether to enable session persistence.
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
    // Specifies the number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy (from **success** to **fail**).
    // 
    // Valid values: **2 to 10**
    // 
    // >  If you set the **HealthCheck** parameter to **on**, this parameter is required.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // The requested path specified in the forwarding rule.
    std::shared_ptr<string> url_ = nullptr;
    // The ID of the destination vServer group specified in the forwarding rule.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
