// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLOADBALANCERUDPLISTENERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETLOADBALANCERUDPLISTENERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class SetLoadBalancerUDPListenerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLoadBalancerUDPListenerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckSwitch, healthCheckSwitch_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroup, masterSlaveServerGroup_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(VServerGroup, VServerGroup_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(healthCheckExp, healthCheckExp_);
      DARABONBA_PTR_TO_JSON(healthCheckReq, healthCheckReq_);
    };
    friend void from_json(const Darabonba::Json& j, SetLoadBalancerUDPListenerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckSwitch, healthCheckSwitch_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroup, masterSlaveServerGroup_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VServerGroup, VServerGroup_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(healthCheckExp, healthCheckExp_);
      DARABONBA_PTR_FROM_JSON(healthCheckReq, healthCheckReq_);
    };
    SetLoadBalancerUDPListenerAttributeRequest() = default ;
    SetLoadBalancerUDPListenerAttributeRequest(const SetLoadBalancerUDPListenerAttributeRequest &) = default ;
    SetLoadBalancerUDPListenerAttributeRequest(SetLoadBalancerUDPListenerAttributeRequest &&) = default ;
    SetLoadBalancerUDPListenerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLoadBalancerUDPListenerAttributeRequest() = default ;
    SetLoadBalancerUDPListenerAttributeRequest& operator=(const SetLoadBalancerUDPListenerAttributeRequest &) = default ;
    SetLoadBalancerUDPListenerAttributeRequest& operator=(SetLoadBalancerUDPListenerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->bandwidth_ == nullptr && return this->description_ == nullptr && return this->healthCheckConnectPort_ == nullptr
        && return this->healthCheckConnectTimeout_ == nullptr && return this->healthCheckInterval_ == nullptr && return this->healthCheckSwitch_ == nullptr && return this->healthyThreshold_ == nullptr && return this->listenerPort_ == nullptr
        && return this->loadBalancerId_ == nullptr && return this->masterSlaveServerGroup_ == nullptr && return this->masterSlaveServerGroupId_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->proxyProtocolV2Enabled_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->scheduler_ == nullptr
        && return this->unhealthyThreshold_ == nullptr && return this->VServerGroup_ == nullptr && return this->VServerGroupId_ == nullptr && return this->healthCheckExp_ == nullptr && return this->healthCheckReq_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t healthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckSwitch Field Functions 
    bool hasHealthCheckSwitch() const { return this->healthCheckSwitch_ != nullptr;};
    void deleteHealthCheckSwitch() { this->healthCheckSwitch_ = nullptr;};
    inline string healthCheckSwitch() const { DARABONBA_PTR_GET_DEFAULT(healthCheckSwitch_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthCheckSwitch(string healthCheckSwitch) { DARABONBA_PTR_SET_VALUE(healthCheckSwitch_, healthCheckSwitch) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // masterSlaveServerGroup Field Functions 
    bool hasMasterSlaveServerGroup() const { return this->masterSlaveServerGroup_ != nullptr;};
    void deleteMasterSlaveServerGroup() { this->masterSlaveServerGroup_ = nullptr;};
    inline string masterSlaveServerGroup() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroup_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setMasterSlaveServerGroup(string masterSlaveServerGroup) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroup_, masterSlaveServerGroup) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // proxyProtocolV2Enabled Field Functions 
    bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
    void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
    inline bool proxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, false) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline SetLoadBalancerUDPListenerAttributeRequest& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // VServerGroup Field Functions 
    bool hasVServerGroup() const { return this->VServerGroup_ != nullptr;};
    void deleteVServerGroup() { this->VServerGroup_ = nullptr;};
    inline string VServerGroup() const { DARABONBA_PTR_GET_DEFAULT(VServerGroup_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setVServerGroup(string VServerGroup) { DARABONBA_PTR_SET_VALUE(VServerGroup_, VServerGroup) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // healthCheckExp Field Functions 
    bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
    void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
    inline string healthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


    // healthCheckReq Field Functions 
    bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
    void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
    inline string healthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
    inline SetLoadBalancerUDPListenerAttributeRequest& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


  protected:
    // The ID of the network access control list (ACL) that is associated with the listener.
    // 
    // >  If **AclStatus** is set to **on**, this parameter is required.
    std::shared_ptr<string> aclId_ = nullptr;
    // Specifies whether to enable access control. Valid values:
    // 
    // *   **on**: yes
    // *   **off**: no
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of the network ACL. Valid values:
    // 
    // *   **white**: a whitelist. Only requests from the IP addresses or CIDR blocks in the network ACL are forwarded. Whitelists apply to scenarios where you want to allow only specific IP addresses to access an application. Your service may be adversely affected if the whitelist is not properly configured. After a whitelist is configured, only requests from IP addresses that are added to the whitelist are forwarded by the listener.
    // 
    //     If you enable a whitelist but do not add an IP address to the ACL, the listener forwards all requests.
    // 
    // *   **black**: a blacklist. All requests from the IP addresses or CIDR blocks in the network ACL are denied. Blacklists apply to scenarios where you want to block access from specified IP addresses to an application.
    // 
    //     If a blacklist is configured for a listener but no IP address is added to the blacklist, the listener forwards all requests.
    // 
    // >  If **AclStatus** is set to **on**, this parameter is required.
    std::shared_ptr<string> aclType_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s. Valid values:
    // 
    // *   **-1**: For a pay-by-data-transfer Internet-facing CLB instance, you can set this parameter to **-1**. This way, the bandwidth of the listener is unlimited.
    // *   **1** to **5120**: For a pay-by-bandwidth Internet-facing CLB instance, you can specify the maximum bandwidth of each listener. The sum of bandwidth limits that you set for all listeners cannot exceed the maximum bandwidth of the CLB instance.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The name of the listener.
    // 
    // The name must be 1 to 256 characters in length and can contain letters, digits, hyphens (-), forward slashes (/), periods (.), and underscores (_).
    std::shared_ptr<string> description_ = nullptr;
    // The port that is used for health checks.
    // 
    // Valid values: **1** to **65535**.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The timeout period of a health check. If a backend server, such as an Elastic Compute Service (ECS) instance, does not return a health check response within the specified timeout period, the server fails the health check. Unit: seconds.
    // 
    // Valid values: **1** to **300**.
    // 
    // >  If the value of the **HealthCheckConnectTimeout** parameter is smaller than that of the **HealthCheckInterval** parameter, the timeout period specified by the **HealthCheckConnectTimeout** parameter is ignored and the period of time specified by the **HealthCheckInterval** parameter is used as the timeout period.
    std::shared_ptr<int32_t> healthCheckConnectTimeout_ = nullptr;
    // The interval at which health checks are performed. Unit: seconds.
    // 
    // Valid values: **1** to **50**.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // Specifies whether to enable the health check feature. Valid values:
    // 
    // *   **on** (default): yes
    // *   **off**: no
    std::shared_ptr<string> healthCheckSwitch_ = nullptr;
    // The number of times that an unhealthy backend server must consecutively pass health checks before it can be declared healthy (from **fail** to **success**).
    // 
    // Valid values: **1** to **10**.
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
    // Specifies whether to use a primary/secondary server group. Valid values:
    // 
    // *   **on**: yes
    // *   **off**: no
    // 
    // >  You cannot set **VserverGroup** and **MasterSlaveServerGroup** both to **on**.
    std::shared_ptr<string> masterSlaveServerGroup_ = nullptr;
    // The ID of the primary/secondary server group.
    // 
    // >  You cannot specify both VServerGroupId and MasterSlaveServerGroupId.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Specifies whether to use the Proxy protocol to pass client IP addresses to backend servers. Valid values:
    // 
    // *   **true**: yes
    // *   **false** (default): no
    std::shared_ptr<bool> proxyProtocolV2Enabled_ = nullptr;
    // The region ID of the CLB instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr**: Backend servers with higher weights receive more requests than those with lower weights.
    // 
    //     If two backend servers have the same weight, the backend server that has fewer connections is expected to receive more requests.
    // 
    // *   **rr**: Requests are distributed to backend servers in sequence.
    // 
    // *   **sch**: specifies consistent hashing that is based on source IP addresses. Requests from the same source IP address are distributed to the same backend server.
    // 
    // *   **tch**: specifies consistent hashing that is based on the following parameters: source IP address, destination IP address, source port, and destination port. Requests that contain the same preceding information are distributed to the same backend server.
    // 
    // *   **qch**: specifies consistent hashing that is based on QUIC connection IDs. Requests that contain the same QUIC connection ID are distributed to the same backend server.
    // 
    // > *   Only high-performance CLB instances support **sch**, **tch**, and **qch**.
    // > *   You cannot switch the algorithm used by a CLB instance from **wrr** or **rr** to consistent hashing or from consistent hashing to weighted round robin or round robin.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**.
    // 
    // Valid values: **1** to **10**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // Specifies whether to use a vServer group. Valid values:
    // 
    // *   **on**: yes
    // *   **off**: no
    // 
    // >  You cannot set both **VserverGroup** and **MasterSlaveServerGroup** to **on**.
    std::shared_ptr<string> VServerGroup_ = nullptr;
    // The ID of the vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The response string for UDP listener health checks. The string must be 1 to 64 characters in length and can contain only letters and digits.
    std::shared_ptr<string> healthCheckExp_ = nullptr;
    // The request string for UDP listener health checks. The string must be 1 to 64 characters in length and can contain only letters and digits.
    std::shared_ptr<string> healthCheckReq_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
