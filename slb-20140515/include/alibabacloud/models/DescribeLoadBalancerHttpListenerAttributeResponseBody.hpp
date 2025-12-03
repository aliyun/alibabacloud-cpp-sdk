// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_TO_JSON(Gzip, gzip_);
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(SecurityStatus, securityStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(XForwardedFor, XForwardedFor_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_proto, XForwardedFor_proto_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ForwardPort, forwardPort_);
      DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(SecurityStatus, securityStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor, XForwardedFor_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_proto, XForwardedFor_proto_);
    };
    DescribeLoadBalancerHTTPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBody(const DescribeLoadBalancerHTTPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBody(DescribeLoadBalancerHTTPListenerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerHTTPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBody& operator=(const DescribeLoadBalancerHTTPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerHTTPListenerAttributeResponseBody& operator=(DescribeLoadBalancerHTTPListenerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclIds_ == nullptr && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->backendServerPort_ == nullptr && return this->bandwidth_ == nullptr
        && return this->cookie_ == nullptr && return this->cookieTimeout_ == nullptr && return this->description_ == nullptr && return this->forwardPort_ == nullptr && return this->gzip_ == nullptr
        && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckDomain_ == nullptr && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckInterval_ == nullptr
        && return this->healthCheckMethod_ == nullptr && return this->healthCheckTimeout_ == nullptr && return this->healthCheckURI_ == nullptr && return this->healthyThreshold_ == nullptr && return this->idleTimeout_ == nullptr
        && return this->listenerForward_ == nullptr && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr && return this->requestId_ == nullptr && return this->requestTimeout_ == nullptr
        && return this->rules_ == nullptr && return this->scheduler_ == nullptr && return this->securityStatus_ == nullptr && return this->status_ == nullptr && return this->stickySession_ == nullptr
        && return this->stickySessionType_ == nullptr && return this->tags_ == nullptr && return this->unhealthyThreshold_ == nullptr && return this->VServerGroupId_ == nullptr && return this->XForwardedFor_ == nullptr
        && return this->XForwardedFor_ClientSrcPort_ == nullptr && return this->XForwardedFor_SLBID_ == nullptr && return this->XForwardedFor_SLBIP_ == nullptr && return this->XForwardedFor_SLBPORT_ == nullptr && return this->XForwardedFor_proto_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds & aclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds aclIds() { DARABONBA_PTR_GET(aclIds_, DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setAclIds(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setAclIds(DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // forwardPort Field Functions 
    bool hasForwardPort() const { return this->forwardPort_ != nullptr;};
    void deleteForwardPort() { this->forwardPort_ = nullptr;};
    inline int32_t forwardPort() const { DARABONBA_PTR_GET_DEFAULT(forwardPort_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setForwardPort(int32_t forwardPort) { DARABONBA_PTR_SET_VALUE(forwardPort_, forwardPort) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string gzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerForward Field Functions 
    bool hasListenerForward() const { return this->listenerForward_ != nullptr;};
    void deleteListenerForward() { this->listenerForward_ = nullptr;};
    inline string listenerForward() const { DARABONBA_PTR_GET_DEFAULT(listenerForward_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setListenerForward(string listenerForward) { DARABONBA_PTR_SET_VALUE(listenerForward_, listenerForward) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules rules() { DARABONBA_PTR_GET(rules_, DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setRules(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setRules(DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // securityStatus Field Functions 
    bool hasSecurityStatus() const { return this->securityStatus_ != nullptr;};
    void deleteSecurityStatus() { this->securityStatus_ = nullptr;};
    inline string securityStatus() const { DARABONBA_PTR_GET_DEFAULT(securityStatus_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setSecurityStatus(string securityStatus) { DARABONBA_PTR_SET_VALUE(securityStatus_, securityStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline string stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setTags(const DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setTags(DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // XForwardedFor Field Functions 
    bool hasXForwardedFor() const { return this->XForwardedFor_ != nullptr;};
    void deleteXForwardedFor() { this->XForwardedFor_ = nullptr;};
    inline string XForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setXForwardedFor(string XForwardedFor) { DARABONBA_PTR_SET_VALUE(XForwardedFor_, XForwardedFor) };


    // XForwardedFor_ClientSrcPort Field Functions 
    bool hasXForwardedFor_ClientSrcPort() const { return this->XForwardedFor_ClientSrcPort_ != nullptr;};
    void deleteXForwardedFor_ClientSrcPort() { this->XForwardedFor_ClientSrcPort_ = nullptr;};
    inline string XForwardedFor_ClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientSrcPort_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setXForwardedFor_ClientSrcPort(string XForwardedFor_ClientSrcPort) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientSrcPort_, XForwardedFor_ClientSrcPort) };


    // XForwardedFor_SLBID Field Functions 
    bool hasXForwardedFor_SLBID() const { return this->XForwardedFor_SLBID_ != nullptr;};
    void deleteXForwardedFor_SLBID() { this->XForwardedFor_SLBID_ = nullptr;};
    inline string XForwardedFor_SLBID() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBID_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setXForwardedFor_SLBID(string XForwardedFor_SLBID) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBID_, XForwardedFor_SLBID) };


    // XForwardedFor_SLBIP Field Functions 
    bool hasXForwardedFor_SLBIP() const { return this->XForwardedFor_SLBIP_ != nullptr;};
    void deleteXForwardedFor_SLBIP() { this->XForwardedFor_SLBIP_ = nullptr;};
    inline string XForwardedFor_SLBIP() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBIP_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setXForwardedFor_SLBIP(string XForwardedFor_SLBIP) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBIP_, XForwardedFor_SLBIP) };


    // XForwardedFor_SLBPORT Field Functions 
    bool hasXForwardedFor_SLBPORT() const { return this->XForwardedFor_SLBPORT_ != nullptr;};
    void deleteXForwardedFor_SLBPORT() { this->XForwardedFor_SLBPORT_ = nullptr;};
    inline string XForwardedFor_SLBPORT() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBPORT_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setXForwardedFor_SLBPORT(string XForwardedFor_SLBPORT) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBPORT_, XForwardedFor_SLBPORT) };


    // XForwardedFor_proto Field Functions 
    bool hasXForwardedFor_proto() const { return this->XForwardedFor_proto_ != nullptr;};
    void deleteXForwardedFor_proto() { this->XForwardedFor_proto_ = nullptr;};
    inline string XForwardedFor_proto() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_proto_, "") };
    inline DescribeLoadBalancerHTTPListenerAttributeResponseBody& setXForwardedFor_proto(string XForwardedFor_proto) { DARABONBA_PTR_SET_VALUE(XForwardedFor_proto_, XForwardedFor_proto) };


  protected:
    // The ID of the network ACL that is associated with a listener.
    // 
    // > This parameter is returned when **AclStatus** is set to **on**.
    std::shared_ptr<string> aclId_ = nullptr;
    // The ID of the access control list (ACL).
    std::shared_ptr<DescribeLoadBalancerHTTPListenerAttributeResponseBodyAclIds> aclIds_ = nullptr;
    // Indicates whether access control is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **white**: a whitelist. Only requests from the IP addresses or CIDR blocks in the ACL are forwarded. Whitelists apply to scenarios where you want to allow only specific IP addresses to access an application. Your service may be adversely affected if the whitelist is not properly configured. If a whitelist is configured, only requests from IP addresses that are added to the whitelist are forwarded by the listener.
    // 
    // If you enable a whitelist but do not add an IP address to the ACL, the listener forwards all requests.
    // 
    // *   **black**: a blacklist. All requests from the IP addresses or CIDR blocks in the network ACL are rejected. Blacklists apply to scenarios where you want to block access from specified IP addresses to an application.
    // 
    // If a blacklist is configured for a listener but no IP address is added to the blacklist, the listener forwards all requests.
    // 
    // > This parameter is required when **AclStatus** is set to **on**.
    std::shared_ptr<string> aclType_ = nullptr;
    // The backend port that is used by the CLB instance.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s.
    // 
    // *   **-1**: If -1 is returned, it indicates that the bandwidth of the listener is unlimited.
    // *   **1 to 5120**: If a value from 1 to 5120 is returned, the value indicates the maximum bandwidth of the listener. The sum of the maximum bandwidth of all listeners added to a CLB instance does not exceed the maximum bandwidth of the CLB instance.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The cookie that is configured on the server.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie. Unit: seconds.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The name of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // The listener port that is used to redirect HTTP requests to HTTPS.
    // 
    // >  If the **ListenerForward** parameter is set to **off**, this parameter is not displayed.
    std::shared_ptr<int32_t> forwardPort_ = nullptr;
    // Indicates whether `Gzip` compression is enabled to compress specific types of files. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> gzip_ = nullptr;
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The port that is used for health checks.
    // 
    // > This parameter takes effect only when **HealthCheck** is set to **on**.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that you want to use for health checks.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code for a successful health check.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The interval at which health checks are performed. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The health check method used by HTTP listeners. Valid values: **head** and **get**.
    // 
    // > This parameter is returned when **HealthCheck** is set to **on**.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The timeout period of each health check. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The URL path that is used for health checks.
    // 
    // The URI must be 1 to 80 characters in length, and can contain only digits, letters, hyphens (-), forward slashes (/), periods (.), percent signs (%), question marks (?), number signs (#), and ampersands (&). The URI must start with a forward slash (/) but cannot be a single forward slash (/).
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The healthy threshold.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds.
    // 
    // Default value: **15**. Valid values: **1 to 60**.
    // 
    // If no request is received within the specified timeout period, CLB closes the connection. When a request is received, CLB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // Indicates whether HTTP-to-HTTPS redirection is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> listenerForward_ = nullptr;
    // The frontend port that is used by the CLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timeout period of a request. Unit: seconds.
    // 
    // Default value: **60**. Valid values: **1 to 180**.
    // 
    // If no response is received from a backend server within the specified timeout period, CLB returns the HTTP 504 status code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The list of forwarding rules.
    std::shared_ptr<DescribeLoadBalancerHTTPListenerAttributeResponseBodyRules> rules_ = nullptr;
    // The routing algorithm. Valid values:
    // 
    // *   **wrr**: Backend servers that have higher weights receive more requests than backend servers that have lower weights.
    // *   \\*\\* rr\\*\\*: Requests are sequentially distributed to backend servers.
    std::shared_ptr<string> scheduler_ = nullptr;
    // Indicates whether the listener is in the Secure state. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> securityStatus_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **running**
    // *   **stopped**
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether session persistence is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> stickySession_ = nullptr;
    // The method that is used to handle a cookie.
    // 
    // Valid values: **insert** and **server**.
    // 
    // *   **insert**: inserts a cookie.
    // 
    //     CLB inserts a session cookie (SERVERID) into the first HTTP or HTTPS response that is sent to a client. Subsequent requests to CLB carry this cookie, and CLB determines the destination servers of the requests based on the cookies.
    // 
    // *   **server**: rewrites a cookie.
    // 
    //     When CLB detects a user-defined cookie, it overwrites the original cookie with the user-defined cookie. The next request from the client carries the user-defined cookie, and the listener forwards this request to the recorded backend server.
    // 
    // > This parameter is required when **StickySession** is set to **on**.
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // The tags.
    std::shared_ptr<DescribeLoadBalancerHTTPListenerAttributeResponseBodyTags> tags_ = nullptr;
    // The unhealthy threshold.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // The ID of the associated server group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // Indicates whether the `X-Forwarded-For` header is used to preserve the real IP address of the client. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientSrcPort` header is used to retrieve the client port. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientSrcPort_ = nullptr;
    // Indicates whether the `SLB-ID` header is used to retrieve the ID of the CLB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBID_ = nullptr;
    // Indicates whether the `SLB-IP` header is used to retrieve the virtual IP address requested by the client. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBIP_ = nullptr;
    // Indicates whether the `XForwardedFor_SLBPORT` header is used to retrieve the listener port of the CLB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBPORT_ = nullptr;
    // Indicates whether the `X-Forwarded-Proto` header is used to retrieve the listener protocol. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_proto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
