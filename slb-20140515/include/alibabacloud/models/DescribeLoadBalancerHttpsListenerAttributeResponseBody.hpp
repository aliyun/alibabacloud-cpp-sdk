// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERHTTPSLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules.hpp>
#include <alibabacloud/models/DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerHTTPSListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerHTTPSListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CACertificateId, CACertificateId_);
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainExtensions, domainExtensions_);
      DARABONBA_PTR_TO_JSON(EnableHttp2, enableHttp2_);
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
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(SecurityStatus, securityStatus_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicy, TLSCipherPolicy_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(XForwardedFor, XForwardedFor_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertClientVerify, XForwardedFor_ClientCertClientVerify_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertFingerprint, XForwardedFor_ClientCertFingerprint_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertIssuerDN, XForwardedFor_ClientCertIssuerDN_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientCertSubjectDN, XForwardedFor_ClientCertSubjectDN_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_proto, XForwardedFor_proto_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerHTTPSListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CACertificateId, CACertificateId_);
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainExtensions, domainExtensions_);
      DARABONBA_PTR_FROM_JSON(EnableHttp2, enableHttp2_);
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
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(SecurityStatus, securityStatus_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicy, TLSCipherPolicy_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor, XForwardedFor_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertClientVerify, XForwardedFor_ClientCertClientVerify_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertFingerprint, XForwardedFor_ClientCertFingerprint_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertIssuerDN, XForwardedFor_ClientCertIssuerDN_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientCertSubjectDN, XForwardedFor_ClientCertSubjectDN_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_proto, XForwardedFor_proto_);
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
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclIds_ == nullptr && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->backendServerPort_ == nullptr && return this->bandwidth_ == nullptr
        && return this->CACertificateId_ == nullptr && return this->cookie_ == nullptr && return this->cookieTimeout_ == nullptr && return this->description_ == nullptr && return this->domainExtensions_ == nullptr
        && return this->enableHttp2_ == nullptr && return this->gzip_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckDomain_ == nullptr
        && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckInterval_ == nullptr && return this->healthCheckMethod_ == nullptr && return this->healthCheckTimeout_ == nullptr && return this->healthCheckURI_ == nullptr
        && return this->healthyThreshold_ == nullptr && return this->idleTimeout_ == nullptr && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr && return this->requestId_ == nullptr
        && return this->requestTimeout_ == nullptr && return this->rules_ == nullptr && return this->scheduler_ == nullptr && return this->securityStatus_ == nullptr && return this->serverCertificateId_ == nullptr
        && return this->status_ == nullptr && return this->stickySession_ == nullptr && return this->stickySessionType_ == nullptr && return this->TLSCipherPolicy_ == nullptr && return this->tags_ == nullptr
        && return this->unhealthyThreshold_ == nullptr && return this->VServerGroupId_ == nullptr && return this->XForwardedFor_ == nullptr && return this->XForwardedFor_ClientCertClientVerify_ == nullptr && return this->XForwardedFor_ClientCertFingerprint_ == nullptr
        && return this->XForwardedFor_ClientCertIssuerDN_ == nullptr && return this->XForwardedFor_ClientCertSubjectDN_ == nullptr && return this->XForwardedFor_ClientSrcPort_ == nullptr && return this->XForwardedFor_SLBID_ == nullptr && return this->XForwardedFor_SLBIP_ == nullptr
        && return this->XForwardedFor_SLBPORT_ == nullptr && return this->XForwardedFor_proto_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds & aclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds aclIds() { DARABONBA_PTR_GET(aclIds_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setAclIds(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setAclIds(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // CACertificateId Field Functions 
    bool hasCACertificateId() const { return this->CACertificateId_ != nullptr;};
    void deleteCACertificateId() { this->CACertificateId_ = nullptr;};
    inline string CACertificateId() const { DARABONBA_PTR_GET_DEFAULT(CACertificateId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setCACertificateId(string CACertificateId) { DARABONBA_PTR_SET_VALUE(CACertificateId_, CACertificateId) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainExtensions Field Functions 
    bool hasDomainExtensions() const { return this->domainExtensions_ != nullptr;};
    void deleteDomainExtensions() { this->domainExtensions_ = nullptr;};
    inline const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions & domainExtensions() const { DARABONBA_PTR_GET_CONST(domainExtensions_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions domainExtensions() { DARABONBA_PTR_GET(domainExtensions_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setDomainExtensions(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions & domainExtensions) { DARABONBA_PTR_SET_VALUE(domainExtensions_, domainExtensions) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setDomainExtensions(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions && domainExtensions) { DARABONBA_PTR_SET_RVALUE(domainExtensions_, domainExtensions) };


    // enableHttp2 Field Functions 
    bool hasEnableHttp2() const { return this->enableHttp2_ != nullptr;};
    void deleteEnableHttp2() { this->enableHttp2_ = nullptr;};
    inline string enableHttp2() const { DARABONBA_PTR_GET_DEFAULT(enableHttp2_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setEnableHttp2(string enableHttp2) { DARABONBA_PTR_SET_VALUE(enableHttp2_, enableHttp2) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string gzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules rules() { DARABONBA_PTR_GET(rules_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setRules(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setRules(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // securityStatus Field Functions 
    bool hasSecurityStatus() const { return this->securityStatus_ != nullptr;};
    void deleteSecurityStatus() { this->securityStatus_ = nullptr;};
    inline string securityStatus() const { DARABONBA_PTR_GET_DEFAULT(securityStatus_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setSecurityStatus(string securityStatus) { DARABONBA_PTR_SET_VALUE(securityStatus_, securityStatus) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline string stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // TLSCipherPolicy Field Functions 
    bool hasTLSCipherPolicy() const { return this->TLSCipherPolicy_ != nullptr;};
    void deleteTLSCipherPolicy() { this->TLSCipherPolicy_ = nullptr;};
    inline string TLSCipherPolicy() const { DARABONBA_PTR_GET_DEFAULT(TLSCipherPolicy_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setTLSCipherPolicy(string TLSCipherPolicy) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicy_, TLSCipherPolicy) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setTags(const DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setTags(DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // XForwardedFor Field Functions 
    bool hasXForwardedFor() const { return this->XForwardedFor_ != nullptr;};
    void deleteXForwardedFor() { this->XForwardedFor_ = nullptr;};
    inline string XForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor(string XForwardedFor) { DARABONBA_PTR_SET_VALUE(XForwardedFor_, XForwardedFor) };


    // XForwardedFor_ClientCertClientVerify Field Functions 
    bool hasXForwardedFor_ClientCertClientVerify() const { return this->XForwardedFor_ClientCertClientVerify_ != nullptr;};
    void deleteXForwardedFor_ClientCertClientVerify() { this->XForwardedFor_ClientCertClientVerify_ = nullptr;};
    inline string XForwardedFor_ClientCertClientVerify() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertClientVerify_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_ClientCertClientVerify(string XForwardedFor_ClientCertClientVerify) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertClientVerify_, XForwardedFor_ClientCertClientVerify) };


    // XForwardedFor_ClientCertFingerprint Field Functions 
    bool hasXForwardedFor_ClientCertFingerprint() const { return this->XForwardedFor_ClientCertFingerprint_ != nullptr;};
    void deleteXForwardedFor_ClientCertFingerprint() { this->XForwardedFor_ClientCertFingerprint_ = nullptr;};
    inline string XForwardedFor_ClientCertFingerprint() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertFingerprint_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_ClientCertFingerprint(string XForwardedFor_ClientCertFingerprint) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertFingerprint_, XForwardedFor_ClientCertFingerprint) };


    // XForwardedFor_ClientCertIssuerDN Field Functions 
    bool hasXForwardedFor_ClientCertIssuerDN() const { return this->XForwardedFor_ClientCertIssuerDN_ != nullptr;};
    void deleteXForwardedFor_ClientCertIssuerDN() { this->XForwardedFor_ClientCertIssuerDN_ = nullptr;};
    inline string XForwardedFor_ClientCertIssuerDN() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertIssuerDN_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_ClientCertIssuerDN(string XForwardedFor_ClientCertIssuerDN) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertIssuerDN_, XForwardedFor_ClientCertIssuerDN) };


    // XForwardedFor_ClientCertSubjectDN Field Functions 
    bool hasXForwardedFor_ClientCertSubjectDN() const { return this->XForwardedFor_ClientCertSubjectDN_ != nullptr;};
    void deleteXForwardedFor_ClientCertSubjectDN() { this->XForwardedFor_ClientCertSubjectDN_ = nullptr;};
    inline string XForwardedFor_ClientCertSubjectDN() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertSubjectDN_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_ClientCertSubjectDN(string XForwardedFor_ClientCertSubjectDN) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertSubjectDN_, XForwardedFor_ClientCertSubjectDN) };


    // XForwardedFor_ClientSrcPort Field Functions 
    bool hasXForwardedFor_ClientSrcPort() const { return this->XForwardedFor_ClientSrcPort_ != nullptr;};
    void deleteXForwardedFor_ClientSrcPort() { this->XForwardedFor_ClientSrcPort_ = nullptr;};
    inline string XForwardedFor_ClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientSrcPort_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_ClientSrcPort(string XForwardedFor_ClientSrcPort) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientSrcPort_, XForwardedFor_ClientSrcPort) };


    // XForwardedFor_SLBID Field Functions 
    bool hasXForwardedFor_SLBID() const { return this->XForwardedFor_SLBID_ != nullptr;};
    void deleteXForwardedFor_SLBID() { this->XForwardedFor_SLBID_ = nullptr;};
    inline string XForwardedFor_SLBID() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBID_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_SLBID(string XForwardedFor_SLBID) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBID_, XForwardedFor_SLBID) };


    // XForwardedFor_SLBIP Field Functions 
    bool hasXForwardedFor_SLBIP() const { return this->XForwardedFor_SLBIP_ != nullptr;};
    void deleteXForwardedFor_SLBIP() { this->XForwardedFor_SLBIP_ = nullptr;};
    inline string XForwardedFor_SLBIP() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBIP_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_SLBIP(string XForwardedFor_SLBIP) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBIP_, XForwardedFor_SLBIP) };


    // XForwardedFor_SLBPORT Field Functions 
    bool hasXForwardedFor_SLBPORT() const { return this->XForwardedFor_SLBPORT_ != nullptr;};
    void deleteXForwardedFor_SLBPORT() { this->XForwardedFor_SLBPORT_ = nullptr;};
    inline string XForwardedFor_SLBPORT() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBPORT_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_SLBPORT(string XForwardedFor_SLBPORT) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBPORT_, XForwardedFor_SLBPORT) };


    // XForwardedFor_proto Field Functions 
    bool hasXForwardedFor_proto() const { return this->XForwardedFor_proto_ != nullptr;};
    void deleteXForwardedFor_proto() { this->XForwardedFor_proto_ = nullptr;};
    inline string XForwardedFor_proto() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_proto_, "") };
    inline DescribeLoadBalancerHTTPSListenerAttributeResponseBody& setXForwardedFor_proto(string XForwardedFor_proto) { DARABONBA_PTR_SET_VALUE(XForwardedFor_proto_, XForwardedFor_proto) };


  protected:
    // The ID of the network ACL that is associated with a listener.
    // 
    // > This parameter is required when **AclStatus** is set to **on**.
    std::shared_ptr<string> aclId_ = nullptr;
    // The ID of the network access control list (ACL) that is associated with the listener.
    std::shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyAclIds> aclIds_ = nullptr;
    // Indicates whether access control is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of the access control list (ACL). Valid values:
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
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The ID of the certification authority (CA) certificate.
    std::shared_ptr<string> CACertificateId_ = nullptr;
    // The cookie that is configured on the server.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The name of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // A list of additional certificates.
    std::shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyDomainExtensions> domainExtensions_ = nullptr;
    // Indicates whether `HTTP/2` is used. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> enableHttp2_ = nullptr;
    // Indicates whether `Gzip` compression is enabled. Valid values:
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
    // > This parameter is required when **HealthCheck** is set to **on**.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that you want to use for health checks.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code for a successful health check.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The interval at which health checks are performed. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The health check method used by HTTP listeners. Valid values: **head** and **get**.
    // 
    // > This parameter is available only when **HealthCheck** is set to **on**.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The maximum timeout period of a health check. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The URL path that is used for health checks.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The healthy threshold.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The timeout period of an idle connection. Valid values: **1** to **60**. Default value: **15**. Unit: seconds.
    // 
    // If no request is received within the specified timeout period, CLB closes the connection. When a request is received, CLB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The frontend port that is used by the CLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The CLB instance ID.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timeout period of a request. Valid values: **1** to **180**. Default value: **60**. Unit: seconds.
    // 
    // If no response is received from a backend server within the specified timeout period, CLB returns the HTTP 504 status code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The list of forwarding rules that are associated with the listener.
    std::shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyRules> rules_ = nullptr;
    // The routing algorithm. Valid values: **wrr** and **rr**.
    // 
    // *   **wrr**: Backend servers that have higher weights receive more requests than backend servers that have lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    std::shared_ptr<string> scheduler_ = nullptr;
    // Indicates whether the listener is in the Secure state. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> securityStatus_ = nullptr;
    // The ID of the server certificate.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
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
    //     CLB inserts a cookie (SERVERID) into the first HTTP or HTTPS response packet that is sent to a client. The next request from the client will contain this cookie, and the listener will distribute this request to the recorded backend server.
    // 
    // *   **server**: rewrites a cookie.
    // 
    //     When CLB detects a user-defined cookie, it overwrites the original cookie with the user-defined cookie. The next request from the client carries the user-defined cookie, and the listener will distribute the request to the recorded backend server.
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // The Transport Layer Security (TLS) security policy for a high-performance CLB instance.
    // 
    // Each security policy contains TLS protocol versions and cipher suites available for HTTPS. Valid values:
    // 
    // *   **tls_cipher_policy_1_0**:
    // 
    //     Supported TLS versions: TLS 1.0, TLS 1.1, and TLS 1.2
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA
    // 
    // *   **tls_cipher_policy_1_1**:
    // 
    //     Supported TLS versions: TLS 1.1 and TLS 1.2
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA
    // 
    // *   **tls_cipher_policy_1_2**
    // 
    //     Supported TLS version: TLS 1.2
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA
    // 
    // *   **tls_cipher_policy_1_2_strict**
    // 
    //     Supported TLS version: TLS 1.2
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA
    // 
    // *   **tls_cipher_policy_1_2_strict_with_1_3**
    // 
    //     Supported TLS versions: TLS 1.2 and TLS 1.3
    // 
    //     Supported cipher suites: TLS_AES_128_GCM_SHA256, TLS_AES_256_GCM_SHA384, TLS_CHACHA20_POLY1305_SHA256, TLS_AES_128_CCM_SHA256, TLS_AES_128_CCM_8_SHA256, ECDHE-ECDSA-AES128-GCM-SHA256, ECDHE-ECDSA-AES256-GCM-SHA384, ECDHE-ECDSA-AES128-SHA256, ECDHE-ECDSA-AES256-SHA384, ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-ECDSA-AES128-SHA, ECDHE-ECDSA-AES256-SHA, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA
    std::shared_ptr<string> TLSCipherPolicy_ = nullptr;
    // The tags.
    std::shared_ptr<DescribeLoadBalancerHTTPSListenerAttributeResponseBodyTags> tags_ = nullptr;
    // The unhealthy threshold.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // The ID of the associated server group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // Indicates whether the `X-Forwarded-For` header is used to retrieve client IP addresses. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertClientVerify` header is used to retrieve the verification result of the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertClientVerify_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertFingerprint` header is used to retrieve the fingerprint of the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertFingerprint_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertIssuerDN` header is used to retrieve information about the authority that issues the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertIssuerDN_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertSubjectDN` header is used to retrieve information about the owner of the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertSubjectDN_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientSrcPort` header is used to retrieve the client port. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientSrcPort_ = nullptr;
    // Indicates whether the `SLB-ID` header is used to retrieve the ID of the ALB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBID_ = nullptr;
    // Indicates whether the `SLB-IP` header is used to retrieve the virtual IP address requested by the client. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBIP_ = nullptr;
    // Indicates whether the `XForwardedFor_SLBPORT` header is used to retrieve the listening port. Valid values:
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
