// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSHTTPSLISTENERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERLISTENERSRESPONSEBODYLISTENERSHTTPSLISTENERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& obj) { 
      DARABONBA_PTR_TO_JSON(CACertificateId, CACertificateId_);
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(EnableHttp2, enableHttp2_);
      DARABONBA_PTR_TO_JSON(Gzip, gzip_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_TO_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(TLSCipherPolicy, TLSCipherPolicy_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
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
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(CACertificateId, CACertificateId_);
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(EnableHttp2, enableHttp2_);
      DARABONBA_PTR_FROM_JSON(Gzip, gzip_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpVersion, healthCheckHttpVersion_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckMethod, healthCheckMethod_);
      DARABONBA_PTR_FROM_JSON(HealthCheckTimeout, healthCheckTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateId, serverCertificateId_);
      DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(TLSCipherPolicy, TLSCipherPolicy_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
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
    DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig(const DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig(DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig &&) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig() = default ;
    DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& operator=(const DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig &) = default ;
    DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& operator=(DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CACertificateId_ == nullptr
        && return this->cookie_ == nullptr && return this->cookieTimeout_ == nullptr && return this->enableHttp2_ == nullptr && return this->gzip_ == nullptr && return this->healthCheck_ == nullptr
        && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckDomain_ == nullptr && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckHttpVersion_ == nullptr && return this->healthCheckInterval_ == nullptr
        && return this->healthCheckMethod_ == nullptr && return this->healthCheckTimeout_ == nullptr && return this->healthCheckType_ == nullptr && return this->healthCheckURI_ == nullptr && return this->healthyThreshold_ == nullptr
        && return this->idleTimeout_ == nullptr && return this->requestTimeout_ == nullptr && return this->serverCertificateId_ == nullptr && return this->stickySession_ == nullptr && return this->stickySessionType_ == nullptr
        && return this->TLSCipherPolicy_ == nullptr && return this->unhealthyThreshold_ == nullptr && return this->XForwardedFor_ == nullptr && return this->XForwardedFor_ClientCertClientVerify_ == nullptr && return this->XForwardedFor_ClientCertFingerprint_ == nullptr
        && return this->XForwardedFor_ClientCertIssuerDN_ == nullptr && return this->XForwardedFor_ClientCertSubjectDN_ == nullptr && return this->XForwardedFor_ClientSrcPort_ == nullptr && return this->XForwardedFor_SLBID_ == nullptr && return this->XForwardedFor_SLBIP_ == nullptr
        && return this->XForwardedFor_SLBPORT_ == nullptr && return this->XForwardedFor_proto_ == nullptr; };
    // CACertificateId Field Functions 
    bool hasCACertificateId() const { return this->CACertificateId_ != nullptr;};
    void deleteCACertificateId() { this->CACertificateId_ = nullptr;};
    inline string CACertificateId() const { DARABONBA_PTR_GET_DEFAULT(CACertificateId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setCACertificateId(string CACertificateId) { DARABONBA_PTR_SET_VALUE(CACertificateId_, CACertificateId) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // enableHttp2 Field Functions 
    bool hasEnableHttp2() const { return this->enableHttp2_ != nullptr;};
    void deleteEnableHttp2() { this->enableHttp2_ = nullptr;};
    inline string enableHttp2() const { DARABONBA_PTR_GET_DEFAULT(enableHttp2_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setEnableHttp2(string enableHttp2) { DARABONBA_PTR_SET_VALUE(enableHttp2_, enableHttp2) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string gzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckHttpVersion Field Functions 
    bool hasHealthCheckHttpVersion() const { return this->healthCheckHttpVersion_ != nullptr;};
    void deleteHealthCheckHttpVersion() { this->healthCheckHttpVersion_ = nullptr;};
    inline string healthCheckHttpVersion() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpVersion_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckHttpVersion(string healthCheckHttpVersion) { DARABONBA_PTR_SET_VALUE(healthCheckHttpVersion_, healthCheckHttpVersion) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string healthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // serverCertificateId Field Functions 
    bool hasServerCertificateId() const { return this->serverCertificateId_ != nullptr;};
    void deleteServerCertificateId() { this->serverCertificateId_ = nullptr;};
    inline string serverCertificateId() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateId_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setServerCertificateId(string serverCertificateId) { DARABONBA_PTR_SET_VALUE(serverCertificateId_, serverCertificateId) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline string stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // TLSCipherPolicy Field Functions 
    bool hasTLSCipherPolicy() const { return this->TLSCipherPolicy_ != nullptr;};
    void deleteTLSCipherPolicy() { this->TLSCipherPolicy_ = nullptr;};
    inline string TLSCipherPolicy() const { DARABONBA_PTR_GET_DEFAULT(TLSCipherPolicy_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setTLSCipherPolicy(string TLSCipherPolicy) { DARABONBA_PTR_SET_VALUE(TLSCipherPolicy_, TLSCipherPolicy) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // XForwardedFor Field Functions 
    bool hasXForwardedFor() const { return this->XForwardedFor_ != nullptr;};
    void deleteXForwardedFor() { this->XForwardedFor_ = nullptr;};
    inline string XForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor(string XForwardedFor) { DARABONBA_PTR_SET_VALUE(XForwardedFor_, XForwardedFor) };


    // XForwardedFor_ClientCertClientVerify Field Functions 
    bool hasXForwardedFor_ClientCertClientVerify() const { return this->XForwardedFor_ClientCertClientVerify_ != nullptr;};
    void deleteXForwardedFor_ClientCertClientVerify() { this->XForwardedFor_ClientCertClientVerify_ = nullptr;};
    inline string XForwardedFor_ClientCertClientVerify() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertClientVerify_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_ClientCertClientVerify(string XForwardedFor_ClientCertClientVerify) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertClientVerify_, XForwardedFor_ClientCertClientVerify) };


    // XForwardedFor_ClientCertFingerprint Field Functions 
    bool hasXForwardedFor_ClientCertFingerprint() const { return this->XForwardedFor_ClientCertFingerprint_ != nullptr;};
    void deleteXForwardedFor_ClientCertFingerprint() { this->XForwardedFor_ClientCertFingerprint_ = nullptr;};
    inline string XForwardedFor_ClientCertFingerprint() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertFingerprint_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_ClientCertFingerprint(string XForwardedFor_ClientCertFingerprint) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertFingerprint_, XForwardedFor_ClientCertFingerprint) };


    // XForwardedFor_ClientCertIssuerDN Field Functions 
    bool hasXForwardedFor_ClientCertIssuerDN() const { return this->XForwardedFor_ClientCertIssuerDN_ != nullptr;};
    void deleteXForwardedFor_ClientCertIssuerDN() { this->XForwardedFor_ClientCertIssuerDN_ = nullptr;};
    inline string XForwardedFor_ClientCertIssuerDN() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertIssuerDN_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_ClientCertIssuerDN(string XForwardedFor_ClientCertIssuerDN) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertIssuerDN_, XForwardedFor_ClientCertIssuerDN) };


    // XForwardedFor_ClientCertSubjectDN Field Functions 
    bool hasXForwardedFor_ClientCertSubjectDN() const { return this->XForwardedFor_ClientCertSubjectDN_ != nullptr;};
    void deleteXForwardedFor_ClientCertSubjectDN() { this->XForwardedFor_ClientCertSubjectDN_ = nullptr;};
    inline string XForwardedFor_ClientCertSubjectDN() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientCertSubjectDN_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_ClientCertSubjectDN(string XForwardedFor_ClientCertSubjectDN) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientCertSubjectDN_, XForwardedFor_ClientCertSubjectDN) };


    // XForwardedFor_ClientSrcPort Field Functions 
    bool hasXForwardedFor_ClientSrcPort() const { return this->XForwardedFor_ClientSrcPort_ != nullptr;};
    void deleteXForwardedFor_ClientSrcPort() { this->XForwardedFor_ClientSrcPort_ = nullptr;};
    inline string XForwardedFor_ClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientSrcPort_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_ClientSrcPort(string XForwardedFor_ClientSrcPort) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientSrcPort_, XForwardedFor_ClientSrcPort) };


    // XForwardedFor_SLBID Field Functions 
    bool hasXForwardedFor_SLBID() const { return this->XForwardedFor_SLBID_ != nullptr;};
    void deleteXForwardedFor_SLBID() { this->XForwardedFor_SLBID_ = nullptr;};
    inline string XForwardedFor_SLBID() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBID_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_SLBID(string XForwardedFor_SLBID) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBID_, XForwardedFor_SLBID) };


    // XForwardedFor_SLBIP Field Functions 
    bool hasXForwardedFor_SLBIP() const { return this->XForwardedFor_SLBIP_ != nullptr;};
    void deleteXForwardedFor_SLBIP() { this->XForwardedFor_SLBIP_ = nullptr;};
    inline string XForwardedFor_SLBIP() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBIP_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_SLBIP(string XForwardedFor_SLBIP) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBIP_, XForwardedFor_SLBIP) };


    // XForwardedFor_SLBPORT Field Functions 
    bool hasXForwardedFor_SLBPORT() const { return this->XForwardedFor_SLBPORT_ != nullptr;};
    void deleteXForwardedFor_SLBPORT() { this->XForwardedFor_SLBPORT_ = nullptr;};
    inline string XForwardedFor_SLBPORT() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBPORT_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_SLBPORT(string XForwardedFor_SLBPORT) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBPORT_, XForwardedFor_SLBPORT) };


    // XForwardedFor_proto Field Functions 
    bool hasXForwardedFor_proto() const { return this->XForwardedFor_proto_ != nullptr;};
    void deleteXForwardedFor_proto() { this->XForwardedFor_proto_ = nullptr;};
    inline string XForwardedFor_proto() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_proto_, "") };
    inline DescribeLoadBalancerListenersResponseBodyListenersHTTPSListenerConfig& setXForwardedFor_proto(string XForwardedFor_proto) { DARABONBA_PTR_SET_VALUE(XForwardedFor_proto_, XForwardedFor_proto) };


  protected:
    // The ID of the CA certificate.
    std::shared_ptr<string> CACertificateId_ = nullptr;
    // The cookie configures for the server.
    std::shared_ptr<string> cookie_ = nullptr;
    // The maximum amount of time to wait before the session cookie expires. Unit: seconds.
    // 
    // Valid values: **1** to **86400**.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // Indicates whether `HTTP 2.0` is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> enableHttp2_ = nullptr;
    // Indicates whether GZIP compression is enabled. Valid values:
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
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that is used for health checks.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code that indicates a healthy backend server.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The HTTP version for health checks.
    std::shared_ptr<string> healthCheckHttpVersion_ = nullptr;
    // The interval at which health checks are performed. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The health check method.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The timeout period of a health check response. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The protocol that you want to use for health checks.
    std::shared_ptr<string> healthCheckType_ = nullptr;
    // The URI that is used for health checks.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health check status of the backend server changes from **fail** to **success**.
    // 
    // Valid values: **2** to **10**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds. Valid values: **1** to **60**.
    // 
    // If no request is received within the specified timeout period, CLB closes the connection. When a request is received, CLB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The request timeout period. Unit: seconds. Valid values: **1** to **180**.
    // 
    // If no response is received from a backend server during the request timeout period, CLB sends the `HTTP 504` status code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    // The ID of the server certificate.
    std::shared_ptr<string> serverCertificateId_ = nullptr;
    // Indicates whether session persistence is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> stickySession_ = nullptr;
    // The method used to handle the cookie.
    // 
    // *   **insert**: inserts a cookie. CLB inserts the SERVERID cookie to the HTTP or HTTPS response to the first request from a client. Subsequent requests that carry the SERVERID cookie from the client are forwarded to the same backend server as the first request.
    // *   **server**: rewrites the original cookie. CLB rewrites the custom cookies in requests from a client. Subsequent requests from the client that carry the new cookie are forwarded to the same backend server as the first request.
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // A TLS security policy contains TLS protocols and cipher suites available for HTTPS.
    // 
    // *   **tls_cipher_policy_1_0**:
    // 
    //     Supported TLS versions: TLSv1.0, TLSv1.1, and TLSv1.2.
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // *   **tls_cipher_policy_1_1**:
    // 
    //     Supported TLS versions: TLSv1.1 and TLSv1.2.
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // *   **tls_cipher_policy_1_2**
    // 
    //     Supported TLS versions: TLSv1.2.
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, AES128-GCM-SHA256, AES256-GCM-SHA384, AES128-SHA256, AES256-SHA256, ECDHE-RSA-AES128-SHA, ECDHE-RSA-AES256-SHA, AES128-SHA, AES256-SHA, and DES-CBC3-SHA.
    // 
    // *   **tls_cipher_policy_1_2_strict**
    // 
    //     Supported TLS versions: TLSv1.2.
    // 
    //     Supported cipher suites: ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
    // 
    // *   **tls_cipher_policy_1_2_strict_with_1_3**
    // 
    //     Supported TLS versions: TLSv1.2 and TLSv1.3.
    // 
    //     Supported cipher suites: TLS_AES_128_GCM_SHA256, TLS_AES_256_GCM_SHA384, TLS_CHACHA20_POLY1305_SHA256, TLS_AES_128_CCM_SHA256, TLS_AES_128_CCM_8_SHA256, ECDHE-ECDSA-AES128-GCM-SHA256, ECDHE-ECDSA-AES256-GCM-SHA384, ECDHE-ECDSA-AES128-SHA256, ECDHE-ECDSA-AES256-SHA384, ECDHE-RSA-AES128-GCM-SHA256, ECDHE-RSA-AES256-GCM-SHA384, ECDHE-RSA-AES128-SHA256, ECDHE-RSA-AES256-SHA384, ECDHE-ECDSA-AES128-SHA, ECDHE-ECDSA-AES256-SHA, ECDHE-RSA-AES128-SHA, and ECDHE-RSA-AES256-SHA.
    std::shared_ptr<string> TLSCipherPolicy_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health check status of the backend server changes from **success** to **fail**.
    // 
    // Valid values: **2** to **10**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // Indicates whether the `X-Forwarded-For` header is used to retrieve client IP addresses. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertClientVerify` header is used to obtain the verification result of the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertClientVerify_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertFingerprint` header is used to obtain the fingerprint of the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertFingerprint_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertIssuerDN` header is used to obtain information about the authority that issues the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertIssuerDN_ = nullptr;
    // Indicates whether the `XForwardedFor_ClientCertSubjectDN` header is used to obtain information about the owner of the client certificate. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientCertSubjectDN_ = nullptr;
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
    // Indicates whether the `SLB-IP` header is used to retrieve the VIP of the client. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBIP_ = nullptr;
    // Indicates whether the `XForwardedFor_SLBPORT` header is used to retrieve the listener port of the CLB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBPORT_ = nullptr;
    // Indicates whether the `X-Forwarded-Proto` header is used to obtain the listener protocol. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_proto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
