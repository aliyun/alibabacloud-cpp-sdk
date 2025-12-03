// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOADBALANCERTCPLISTENERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOADBALANCERTCPLISTENERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateLoadBalancerTCPListenerRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class CreateLoadBalancerTCPListenerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLoadBalancerTCPListenerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ConnectionDrain, connectionDrain_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_TO_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_TO_JSON(HealthCheckSwitch, healthCheckSwitch_);
      DARABONBA_PTR_TO_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_TO_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(healthCheckInterval, healthCheckInterval_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLoadBalancerTCPListenerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrain, connectionDrain_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EstablishedTimeout, establishedTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckDomain, healthCheckDomain_);
      DARABONBA_PTR_FROM_JSON(HealthCheckHttpCode, healthCheckHttpCode_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSwitch, healthCheckSwitch_);
      DARABONBA_PTR_FROM_JSON(HealthCheckType, healthCheckType_);
      DARABONBA_PTR_FROM_JSON(HealthCheckURI, healthCheckURI_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PersistenceTimeout, persistenceTimeout_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(healthCheckInterval, healthCheckInterval_);
    };
    CreateLoadBalancerTCPListenerRequest() = default ;
    CreateLoadBalancerTCPListenerRequest(const CreateLoadBalancerTCPListenerRequest &) = default ;
    CreateLoadBalancerTCPListenerRequest(CreateLoadBalancerTCPListenerRequest &&) = default ;
    CreateLoadBalancerTCPListenerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLoadBalancerTCPListenerRequest() = default ;
    CreateLoadBalancerTCPListenerRequest& operator=(const CreateLoadBalancerTCPListenerRequest &) = default ;
    CreateLoadBalancerTCPListenerRequest& operator=(CreateLoadBalancerTCPListenerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->backendServerPort_ == nullptr && return this->bandwidth_ == nullptr && return this->connectionDrain_ == nullptr
        && return this->connectionDrainTimeout_ == nullptr && return this->description_ == nullptr && return this->establishedTimeout_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckConnectTimeout_ == nullptr
        && return this->healthCheckDomain_ == nullptr && return this->healthCheckHttpCode_ == nullptr && return this->healthCheckSwitch_ == nullptr && return this->healthCheckType_ == nullptr && return this->healthCheckURI_ == nullptr
        && return this->healthyThreshold_ == nullptr && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr && return this->masterSlaveServerGroupId_ == nullptr && return this->ownerAccount_ == nullptr
        && return this->ownerId_ == nullptr && return this->persistenceTimeout_ == nullptr && return this->proxyProtocolV2Enabled_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->scheduler_ == nullptr && return this->tag_ == nullptr && return this->unhealthyThreshold_ == nullptr && return this->VServerGroupId_ == nullptr
        && return this->healthCheckInterval_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectionDrain Field Functions 
    bool hasConnectionDrain() const { return this->connectionDrain_ != nullptr;};
    void deleteConnectionDrain() { this->connectionDrain_ = nullptr;};
    inline string connectionDrain() const { DARABONBA_PTR_GET_DEFAULT(connectionDrain_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setConnectionDrain(string connectionDrain) { DARABONBA_PTR_SET_VALUE(connectionDrain_, connectionDrain) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // establishedTimeout Field Functions 
    bool hasEstablishedTimeout() const { return this->establishedTimeout_ != nullptr;};
    void deleteEstablishedTimeout() { this->establishedTimeout_ = nullptr;};
    inline int32_t establishedTimeout() const { DARABONBA_PTR_GET_DEFAULT(establishedTimeout_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setEstablishedTimeout(int32_t establishedTimeout) { DARABONBA_PTR_SET_VALUE(establishedTimeout_, establishedTimeout) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t healthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckDomain Field Functions 
    bool hasHealthCheckDomain() const { return this->healthCheckDomain_ != nullptr;};
    void deleteHealthCheckDomain() { this->healthCheckDomain_ = nullptr;};
    inline string healthCheckDomain() const { DARABONBA_PTR_GET_DEFAULT(healthCheckDomain_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckDomain(string healthCheckDomain) { DARABONBA_PTR_SET_VALUE(healthCheckDomain_, healthCheckDomain) };


    // healthCheckHttpCode Field Functions 
    bool hasHealthCheckHttpCode() const { return this->healthCheckHttpCode_ != nullptr;};
    void deleteHealthCheckHttpCode() { this->healthCheckHttpCode_ = nullptr;};
    inline string healthCheckHttpCode() const { DARABONBA_PTR_GET_DEFAULT(healthCheckHttpCode_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckHttpCode(string healthCheckHttpCode) { DARABONBA_PTR_SET_VALUE(healthCheckHttpCode_, healthCheckHttpCode) };


    // healthCheckSwitch Field Functions 
    bool hasHealthCheckSwitch() const { return this->healthCheckSwitch_ != nullptr;};
    void deleteHealthCheckSwitch() { this->healthCheckSwitch_ = nullptr;};
    inline string healthCheckSwitch() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSwitch_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckSwitch(string healthCheckSwitch) { DARABONBA_PTR_SET_VALUE(healthCheckSwitch_, healthCheckSwitch) };


    // healthCheckType Field Functions 
    bool hasHealthCheckType() const { return this->healthCheckType_ != nullptr;};
    void deleteHealthCheckType() { this->healthCheckType_ = nullptr;};
    inline string healthCheckType() const { DARABONBA_PTR_GET_DEFAULT(healthCheckType_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckType(string healthCheckType) { DARABONBA_PTR_SET_VALUE(healthCheckType_, healthCheckType) };


    // healthCheckURI Field Functions 
    bool hasHealthCheckURI() const { return this->healthCheckURI_ != nullptr;};
    void deleteHealthCheckURI() { this->healthCheckURI_ = nullptr;};
    inline string healthCheckURI() const { DARABONBA_PTR_GET_DEFAULT(healthCheckURI_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckURI(string healthCheckURI) { DARABONBA_PTR_SET_VALUE(healthCheckURI_, healthCheckURI) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLoadBalancerTCPListenerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // persistenceTimeout Field Functions 
    bool hasPersistenceTimeout() const { return this->persistenceTimeout_ != nullptr;};
    void deletePersistenceTimeout() { this->persistenceTimeout_ = nullptr;};
    inline int32_t persistenceTimeout() const { DARABONBA_PTR_GET_DEFAULT(persistenceTimeout_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setPersistenceTimeout(int32_t persistenceTimeout) { DARABONBA_PTR_SET_VALUE(persistenceTimeout_, persistenceTimeout) };


    // proxyProtocolV2Enabled Field Functions 
    bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
    void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
    inline bool proxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, false) };
    inline CreateLoadBalancerTCPListenerRequest& setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateLoadBalancerTCPListenerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLoadBalancerTCPListenerRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLoadBalancerTCPListenerRequestTag>) };
    inline vector<CreateLoadBalancerTCPListenerRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateLoadBalancerTCPListenerRequestTag>) };
    inline CreateLoadBalancerTCPListenerRequest& setTag(const vector<CreateLoadBalancerTCPListenerRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLoadBalancerTCPListenerRequest& setTag(vector<CreateLoadBalancerTCPListenerRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline CreateLoadBalancerTCPListenerRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline CreateLoadBalancerTCPListenerRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


  protected:
    // The ID of the network ACL that is associated with the listener.
    // 
    // >  If **AclStatus** is set to **on**, this parameter is required.
    std::shared_ptr<string> aclId_ = nullptr;
    // Specifies whether to enable access control. Valid values:
    // 
    // *   **on**: yes
    // *   **off** (default): no
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **white**: a whitelist. Only requests from the IP addresses or CIDR blocks in the network ACL are forwarded. Whitelists apply to scenarios where you want to allow only specific IP addresses to access an application.
    // 
    //     Your service may be adversely affected if the whitelist is not properly configured.
    // 
    //     If a whitelist is configured, only requests from IP addresses that are added to the whitelist are forwarded by the listener. If a whitelist is configured but no IP address is added to the whitelist, the listener forwards all requests.
    // 
    // *   **black**: a blacklist. All requests from the IP addresses or CIDR blocks in the ACL are rejected. Blacklists apply to scenarios where you want to block access from specified IP addresses to an application.
    // 
    //     If a blacklist is configured for a listener but no IP address is added to the blacklist, the listener forwards all requests.
    // 
    // >  If **AclStatus** is set to **on**, this parameter is required.
    std::shared_ptr<string> aclType_ = nullptr;
    // The backend port used by the CLB instance.
    // 
    // Valid values: **1** to **65535**.
    // 
    // If the **VServerGroupId** parameter is not set, this parameter is required.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s. Valid values:
    // 
    // *   **-1**: For a pay-by-data-transfer Internet-facing CLB instance, this value can be set to -1, which specifies unlimited bandwidth.
    // *   **1** to **5120**: For a pay-by-bandwidth Internet-facing CLB instance, you can specify the maximum bandwidth of each listener. The sum of the maximum bandwidth values that you set for all listeners cannot exceed the maximum bandwidth of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // Specifies whether to enable connection draining. Valid values:
    // 
    // *   **on**: yes
    // *   **off**: no
    std::shared_ptr<string> connectionDrain_ = nullptr;
    // The timeout period of connection draining. Unit: seconds.
    // 
    // Valid values: **10** to **900**.
    // 
    // >  This parameter is required if **ConnectionDrain** is set to **on**.
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
    // The name of the listener.
    // 
    // The name must be 1 to 256 characters in length, and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    std::shared_ptr<string> description_ = nullptr;
    // The timeout period of a connection. Unit: seconds
    // 
    // Valid values: **10** to **900**.
    std::shared_ptr<int32_t> establishedTimeout_ = nullptr;
    // The port that is used for health checks.
    // 
    // Valid values: **1** to **65535**.
    // 
    // If this parameter is not set, the backend port specified by **BackendServerPort** is used for health checks.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The maximum timeout period of a health check response. Unit: seconds
    // 
    // Valid values: **1** to **300**
    // 
    // Default value: **5**
    std::shared_ptr<int32_t> healthCheckConnectTimeout_ = nullptr;
    // The domain name that you want to use for health checks. Valid values:
    // 
    // *   **$_ip**: the private IP address of a backend server. If you do not set the HealthCheckDomain parameter or set the parameter to $_ip, the CLB instance uses the private IP address of each backend server for health checks.
    // *   **domain**: The domain name must be 1 to 80 characters in length, and can contain letters, digits, periods (.), and hyphens (-).
    std::shared_ptr<string> healthCheckDomain_ = nullptr;
    // The HTTP status code for a successful health check. Separate multiple HTTP status codes with commas (,). Valid values:
    // 
    // *   **http_2xx**(default)
    // *   **http_3xx**
    // *   **http_4xx**
    // *   **http_5xx**
    std::shared_ptr<string> healthCheckHttpCode_ = nullptr;
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // *   **on** (default): yes
    // *   **off**: no
    std::shared_ptr<string> healthCheckSwitch_ = nullptr;
    // The type of health checks. Valid values:
    // 
    // *   **tcp** (default)
    // *   **http**
    std::shared_ptr<string> healthCheckType_ = nullptr;
    // The URI that is used for health checks. The URI must be 1 to 80 characters in length, and can contain only digits, letters, hyphens (-), forward slashes (/), periods (.), percent signs (%), number signs (#), and ampersands (&). The URI must start with a forward slash (/) but cannot be a single forward slash (/).
    // 
    // You can set this parameter when the TCP listener requires HTTP health checks. If you do not set this parameter, TCP health checks are performed.
    std::shared_ptr<string> healthCheckURI_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**.
    // 
    // Valid values: **2** to **10**
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The frontend port used by the CLB instance.
    // 
    // Valid values: **1** to **65535**.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The ID of the CLB instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The ID of the primary/secondary server group.
    // 
    // >  You cannot set both VServerGroupId and MasterSlaveServerGroupId.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The timeout period of session persistence. Unit: seconds
    // 
    // Valid values: **0 to 3600**
    // 
    // Default value: **0**. If the default value is used, the system disables session persistence.
    std::shared_ptr<int32_t> persistenceTimeout_ = nullptr;
    // Specifies whether to use the Proxy protocol to pass client IP addresses to backend servers. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    std::shared_ptr<bool> proxyProtocolV2Enabled_ = nullptr;
    // The ID of the region where the Classic Load Balancer (CLB) instance is deployed.
    // 
    // For the most recent region list, refer to [Regions and zones](https://help.aliyun.com/document_detail/40654.html) or call the [DescribeRegions](https://help.aliyun.com/document_detail/2401682.html) operation the retrieve the information.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr** (default): Backend servers with higher weights receive more requests than those with lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // *   **sch**: specifies consistent hashing that is based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
    // *   **tch**: specifies consistent hashing that is based on four factors: source IP address, destination IP address, source port, and destination port. Requests that contain the same information based on the four factors are distributed to the same backend server.
    // 
    // >  Only high-performance CLB instances support the **sch** and **tch** consistent hashing algorithms.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateLoadBalancerTCPListenerRequestTag>> tag_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
    // 
    // Valid values: **2** to **10**
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The interval between two consecutive health checks. Unit: seconds.
    // 
    // Valid values: **1** to **50**.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
