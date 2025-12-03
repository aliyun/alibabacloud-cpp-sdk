// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOADBALANCERHTTPLISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOADBALANCERHTTPLISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetLoadBalancerHTTPListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoadBalancerHTTPListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Cookie, cookie_);
      DARABONBA_PTR_TO_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_TO_JSON(Description, description_);
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
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(StickySession, stickySession_);
      DARABONBA_PTR_TO_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(VServerGroup, VServerGroup_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(XForwardedFor, XForwardedFor_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
      DARABONBA_PTR_TO_JSON(XForwardedFor_proto, XForwardedFor_proto_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoadBalancerHTTPListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Cookie, cookie_);
      DARABONBA_PTR_FROM_JSON(CookieTimeout, cookieTimeout_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
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
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestTimeout, requestTimeout_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(StickySession, stickySession_);
      DARABONBA_PTR_FROM_JSON(StickySessionType, stickySessionType_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VServerGroup, VServerGroup_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor, XForwardedFor_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_ClientSrcPort, XForwardedFor_ClientSrcPort_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBID, XForwardedFor_SLBID_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBIP, XForwardedFor_SLBIP_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_SLBPORT, XForwardedFor_SLBPORT_);
      DARABONBA_PTR_FROM_JSON(XForwardedFor_proto, XForwardedFor_proto_);
    };
    SetLoadBalancerHTTPListenerAttributeRequest() = default ;
    SetLoadBalancerHTTPListenerAttributeRequest(const SetLoadBalancerHTTPListenerAttributeRequest &) = default ;
    SetLoadBalancerHTTPListenerAttributeRequest(SetLoadBalancerHTTPListenerAttributeRequest &&) = default ;
    SetLoadBalancerHTTPListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoadBalancerHTTPListenerAttributeRequest() = default ;
    SetLoadBalancerHTTPListenerAttributeRequest& operator=(const SetLoadBalancerHTTPListenerAttributeRequest &) = default ;
    SetLoadBalancerHTTPListenerAttributeRequest& operator=(SetLoadBalancerHTTPListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->bandwidth_ == nullptr && return this->cookie_ == nullptr && return this->cookieTimeout_ == nullptr
        && return this->description_ == nullptr && return this->gzip_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckDomain_ == nullptr
        && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckInterval_ == nullptr && return this->healthCheckMethod_ == nullptr && return this->healthCheckTimeout_ == nullptr && return this->healthCheckURI_ == nullptr
        && return this->healthyThreshold_ == nullptr && return this->idleTimeout_ == nullptr && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->requestTimeout_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->scheduler_ == nullptr && return this->stickySession_ == nullptr && return this->stickySessionType_ == nullptr && return this->unhealthyThreshold_ == nullptr && return this->VServerGroup_ == nullptr
        && return this->VServerGroupId_ == nullptr && return this->XForwardedFor_ == nullptr && return this->XForwardedFor_ClientSrcPort_ == nullptr && return this->XForwardedFor_SLBID_ == nullptr && return this->XForwardedFor_SLBIP_ == nullptr
        && return this->XForwardedFor_SLBPORT_ == nullptr && return this->XForwardedFor_proto_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cookie Field Functions 
    bool hasCookie() const { return this->cookie_ != nullptr;};
    void deleteCookie() { this->cookie_ = nullptr;};
    inline string cookie() const { DARABONBA_PTR_GET_DEFAULT(cookie_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setCookie(string cookie) { DARABONBA_PTR_SET_VALUE(cookie_, cookie) };


    // cookieTimeout Field Functions 
    bool hasCookieTimeout() const { return this->cookieTimeout_ != nullptr;};
    void deleteCookieTimeout() { this->cookieTimeout_ = nullptr;};
    inline int32_t cookieTimeout() const { DARABONBA_PTR_GET_DEFAULT(cookieTimeout_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setCookieTimeout(int32_t cookieTimeout) { DARABONBA_PTR_SET_VALUE(cookieTimeout_, cookieTimeout) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gzip Field Functions 
    bool hasGzip() const { return this->gzip_ != nullptr;};
    void deleteGzip() { this->gzip_ = nullptr;};
    inline string gzip() const { DARABONBA_PTR_GET_DEFAULT(gzip_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setGzip(string gzip) { DARABONBA_PTR_SET_VALUE(gzip_, gzip) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckMethod Field Functions 
    bool hasHealthCheckMethod() const { return this->healthCheckMethod_ != nullptr;};
    void deleteHealthCheckMethod() { this->healthCheckMethod_ = nullptr;};
    inline string healthCheckMethod() const { DARABONBA_PTR_GET_DEFAULT(healthCheckMethod_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckMethod(string healthCheckMethod) { DARABONBA_PTR_SET_VALUE(healthCheckMethod_, healthCheckMethod) };


    // healthCheckTimeout Field Functions 
    bool hasHealthCheckTimeout() const { return this->healthCheckTimeout_ != nullptr;};
    void deleteHealthCheckTimeout() { this->healthCheckTimeout_ = nullptr;};
    inline int32_t healthCheckTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckTimeout_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckTimeout(int32_t healthCheckTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckTimeout_, healthCheckTimeout) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestTimeout Field Functions 
    bool hasRequestTimeout() const { return this->requestTimeout_ != nullptr;};
    void deleteRequestTimeout() { this->requestTimeout_ = nullptr;};
    inline int32_t requestTimeout() const { DARABONBA_PTR_GET_DEFAULT(requestTimeout_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setRequestTimeout(int32_t requestTimeout) { DARABONBA_PTR_SET_VALUE(requestTimeout_, requestTimeout) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // stickySession Field Functions 
    bool hasStickySession() const { return this->stickySession_ != nullptr;};
    void deleteStickySession() { this->stickySession_ = nullptr;};
    inline string stickySession() const { DARABONBA_PTR_GET_DEFAULT(stickySession_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setStickySession(string stickySession) { DARABONBA_PTR_SET_VALUE(stickySession_, stickySession) };


    // stickySessionType Field Functions 
    bool hasStickySessionType() const { return this->stickySessionType_ != nullptr;};
    void deleteStickySessionType() { this->stickySessionType_ = nullptr;};
    inline string stickySessionType() const { DARABONBA_PTR_GET_DEFAULT(stickySessionType_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setStickySessionType(string stickySessionType) { DARABONBA_PTR_SET_VALUE(stickySessionType_, stickySessionType) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // VServerGroup Field Functions 
    bool hasVServerGroup() const { return this->VServerGroup_ != nullptr;};
    void deleteVServerGroup() { this->VServerGroup_ = nullptr;};
    inline string VServerGroup() const { DARABONBA_PTR_GET_DEFAULT(VServerGroup_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setVServerGroup(string VServerGroup) { DARABONBA_PTR_SET_VALUE(VServerGroup_, VServerGroup) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // XForwardedFor Field Functions 
    bool hasXForwardedFor() const { return this->XForwardedFor_ != nullptr;};
    void deleteXForwardedFor() { this->XForwardedFor_ = nullptr;};
    inline string XForwardedFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setXForwardedFor(string XForwardedFor) { DARABONBA_PTR_SET_VALUE(XForwardedFor_, XForwardedFor) };


    // XForwardedFor_ClientSrcPort Field Functions 
    bool hasXForwardedFor_ClientSrcPort() const { return this->XForwardedFor_ClientSrcPort_ != nullptr;};
    void deleteXForwardedFor_ClientSrcPort() { this->XForwardedFor_ClientSrcPort_ = nullptr;};
    inline string XForwardedFor_ClientSrcPort() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_ClientSrcPort_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setXForwardedFor_ClientSrcPort(string XForwardedFor_ClientSrcPort) { DARABONBA_PTR_SET_VALUE(XForwardedFor_ClientSrcPort_, XForwardedFor_ClientSrcPort) };


    // XForwardedFor_SLBID Field Functions 
    bool hasXForwardedFor_SLBID() const { return this->XForwardedFor_SLBID_ != nullptr;};
    void deleteXForwardedFor_SLBID() { this->XForwardedFor_SLBID_ = nullptr;};
    inline string XForwardedFor_SLBID() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBID_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setXForwardedFor_SLBID(string XForwardedFor_SLBID) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBID_, XForwardedFor_SLBID) };


    // XForwardedFor_SLBIP Field Functions 
    bool hasXForwardedFor_SLBIP() const { return this->XForwardedFor_SLBIP_ != nullptr;};
    void deleteXForwardedFor_SLBIP() { this->XForwardedFor_SLBIP_ = nullptr;};
    inline string XForwardedFor_SLBIP() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBIP_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setXForwardedFor_SLBIP(string XForwardedFor_SLBIP) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBIP_, XForwardedFor_SLBIP) };


    // XForwardedFor_SLBPORT Field Functions 
    bool hasXForwardedFor_SLBPORT() const { return this->XForwardedFor_SLBPORT_ != nullptr;};
    void deleteXForwardedFor_SLBPORT() { this->XForwardedFor_SLBPORT_ = nullptr;};
    inline string XForwardedFor_SLBPORT() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_SLBPORT_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setXForwardedFor_SLBPORT(string XForwardedFor_SLBPORT) { DARABONBA_PTR_SET_VALUE(XForwardedFor_SLBPORT_, XForwardedFor_SLBPORT) };


    // XForwardedFor_proto Field Functions 
    bool hasXForwardedFor_proto() const { return this->XForwardedFor_proto_ != nullptr;};
    void deleteXForwardedFor_proto() { this->XForwardedFor_proto_ = nullptr;};
    inline string XForwardedFor_proto() const { DARABONBA_PTR_GET_DEFAULT(XForwardedFor_proto_, "") };
    inline SetLoadBalancerHTTPListenerAttributeRequest& setXForwardedFor_proto(string XForwardedFor_proto) { DARABONBA_PTR_SET_VALUE(XForwardedFor_proto_, XForwardedFor_proto) };


  protected:
    // The ID of the access control list (ACL) that is associated with the listener.
    // 
    // > This parameter is required when **AclStatus** is set to **on**.
    std::shared_ptr<string> aclId_ = nullptr;
    // Specifies whether to enable access control. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **white**: a whitelist. Only requests from the IP addresses or CIDR blocks in the ACL are forwarded. Whitelists apply to scenarios where you want to allow only specific IP addresses to access an application. Risks may occur if a whitelist is improperly configured. If a whitelist is configured, only requests from IP addresses that are added to the whitelist are forwarded by the listener.
    // 
    // If you enable a whitelist but do not add an IP address to the ACL, the listener forwards all requests.
    // 
    // *   **black**: a blacklist. All requests from the IP addresses or CIDR blocks in the ACL are rejected. Blacklists apply to scenarios where you want to block access from specified IP addresses to an application.
    // 
    // If a blacklist is configured for a listener but no IP addresses are added to the blacklist, the listener forwards all requests.
    // 
    // > This parameter takes effect when the value of **AclStatus** is set to **on**.
    std::shared_ptr<string> aclType_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s. Set the value to
    // 
    // *   **-1**: For a pay-by-data-transfer Internet-facing CLB instance, this value specifies that the bandwidth of the listener is unlimited.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The cookie that is configured on the server.
    // 
    // The cookie must be 1 to 200 characters in length, and can contain ASCII characters and digits. It cannot contain commas (,), semicolons (;), or spaces. It cannot start with a dollar sign ($).
    // 
    // > This parameter is required when **StickySession** is set to **on** and **StickySessionType** is set to **server**.
    std::shared_ptr<string> cookie_ = nullptr;
    // The timeout period of a cookie.
    // 
    // Valid values: **1** to **86400**. Unit: seconds.
    // 
    // > This parameter is required when **StickySession** is set to **on** and **StickySessionType** is set to **insert**.
    std::shared_ptr<int32_t> cookieTimeout_ = nullptr;
    // The description of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable `GZIP` compression to compress specific types of files. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> gzip_ = nullptr;
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The port that is used for health checks.
    // 
    // Valid values: **1** to **65535**.
    // 
    // > This parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The domain name that is used for health checks. Valid values:
    // 
    // *   **$_ip**: the private IP address of a backend server. If you specify \\*\\*$_ip **or** ignore HealthCheckDomain\\*\\*, CLB uses the private IP addresses of backend servers as the health check domain names.
    // *   **domain**: The domain name must be 1 to 80 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    // 
    // > The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code for a successful health check. Separate multiple HTTP status codes with commas (,).
    // 
    // Valid values: **http_2xx**, **http_3xx**, **http_4xx**, and **http_5xx**.
    // 
    // >  The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // The interval at which health checks are performed.
    // 
    // Valid values: **1** to **50**. Unit: seconds.
    // 
    // >  The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The health check method that is used in HTTP health checks. Valid values: **head** and **get**.
    // 
    // > The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<string> healthCheckMethod_ = nullptr;
    // The timeout period of a health check response. If a backend ECS instance does not respond within the specified timeout period, the ECS instance fails the health check. This parameter takes effect only if the **HealthCheck** parameter is set to **on**.
    // 
    // Valid values: **1** to **300**. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckTimeout_ = nullptr;
    // The Uniform Resource Identifier (URI) that you want to use for health checks.
    // 
    // The URI must be 1 to 80 characters in length, and can contain letters, digits, and the following characters: - / . % ? # & The URI must start with a forward slash (/) but cannot be a single forward slash (/).
    // 
    // > The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**.
    // 
    // Valid values: **2** to **10**.
    // 
    // > The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The timeout period of an idle connection. Unit: seconds. Valid values: **1 to 60**. Default value: **15**.
    // 
    // If no request is received within the specified timeout period, CLB closes the connection. When a request is received, CLB establishes a new connection.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // The frontend port that is used by the CLB instance.
    // 
    // Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The CLB instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can query the region ID from the [Regions and zones](https://help.aliyun.com/document_detail/27585.html) list or by calling the [DescribeRegions](https://help.aliyun.com/document_detail/27584.html) operation.
    std::shared_ptr<string> regionId_ = nullptr;
    // The timeout period of a request. Unit: seconds. Valid values: **1 to 180**. Default value: **60**.
    // 
    // If no response is received from the backend server within the request timeout period, CLB returns an HTTP 504 error code to the client.
    std::shared_ptr<int32_t> requestTimeout_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr**: Backend servers that have higher weights receive more requests than backend servers that have lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    std::shared_ptr<string> scheduler_ = nullptr;
    // Specifies whether to enable session persistence. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> stickySession_ = nullptr;
    // The method that is used to handle a cookie. Valid values:
    // 
    // *   **insert**: inserts a cookie.
    // 
    // CLB inserts a cookie (SERVERID) into the first HTTP or HTTPS response packet that is sent to a client. The next request from the client contains this cookie, and the listener distributes the request to the recorded backend server.
    // 
    // *   **server**: rewrites a cookie.
    // 
    // When CLB detects a user-defined cookie, CLB overwrites the original cookie with the user-defined cookie. The next request from the client carries the user-defined cookie, and the listener forwards the request to the recorded backend server.
    // 
    // > This parameter is required when **StickySession** is set to **on**.
    std::shared_ptr<string> stickySessionType_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
    // 
    // Valid values: **2** to **10**.
    // 
    // > The parameter takes effect only if you set **HealthCheck** to **on**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // Specifies whether to use a vServer group. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> VServerGroup_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // Specifies whether to use the `X-Forwarded-For` header to preserve client IP addresses. Valid values:
    // 
    // *   **on** (default)
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ = nullptr;
    // Specifies whether to use the `XForwardedFor_ClientSrcPort` header to retrieve the client port. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_ClientSrcPort_ = nullptr;
    // Specifies whether to use the `SLB-ID` header to retrieve the ID of the CLB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBID_ = nullptr;
    // Specifies whether to use the `SLB-IP` header to retrieve the virtual IP address (VIP) requested by the client. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBIP_ = nullptr;
    // Specifies whether to use the `XForwardedFor_SLBPORT` header to retrieve the listener port of the CLB instance. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_SLBPORT_ = nullptr;
    // Specifies whether to use the `X-Forwarded-Proto` header to retrieve the listener protocol. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> XForwardedFor_proto_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
