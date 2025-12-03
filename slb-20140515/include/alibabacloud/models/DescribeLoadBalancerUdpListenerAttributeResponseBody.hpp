// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADBALANCERUDPLISTENERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds.hpp>
#include <alibabacloud/models/DescribeLoadBalancerUDPListenerAttributeResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeLoadBalancerUDPListenerAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadBalancerUDPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclIds, aclIds_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_TO_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheckExp, healthCheckExp_);
      DARABONBA_PTR_TO_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_TO_JSON(HealthCheckReq, healthCheckReq_);
      DARABONBA_PTR_TO_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_TO_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_TO_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadBalancerUDPListenerAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclIds, aclIds_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(BackendServerPort, backendServerPort_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectPort, healthCheckConnectPort_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConnectTimeout, healthCheckConnectTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheckExp, healthCheckExp_);
      DARABONBA_PTR_FROM_JSON(HealthCheckInterval, healthCheckInterval_);
      DARABONBA_PTR_FROM_JSON(HealthCheckReq, healthCheckReq_);
      DARABONBA_PTR_FROM_JSON(HealthyThreshold, healthyThreshold_);
      DARABONBA_PTR_FROM_JSON(ListenerPort, listenerPort_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(MasterSlaveServerGroupId, masterSlaveServerGroupId_);
      DARABONBA_PTR_FROM_JSON(ProxyProtocolV2Enabled, proxyProtocolV2Enabled_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UnhealthyThreshold, unhealthyThreshold_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
    };
    DescribeLoadBalancerUDPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody(const DescribeLoadBalancerUDPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody(DescribeLoadBalancerUDPListenerAttributeResponseBody &&) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadBalancerUDPListenerAttributeResponseBody() = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody& operator=(const DescribeLoadBalancerUDPListenerAttributeResponseBody &) = default ;
    DescribeLoadBalancerUDPListenerAttributeResponseBody& operator=(DescribeLoadBalancerUDPListenerAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclIds_ == nullptr && return this->aclStatus_ == nullptr && return this->aclType_ == nullptr && return this->backendServerPort_ == nullptr && return this->bandwidth_ == nullptr
        && return this->description_ == nullptr && return this->healthCheck_ == nullptr && return this->healthCheckConnectPort_ == nullptr && return this->healthCheckConnectTimeout_ == nullptr && return this->healthCheckExp_ == nullptr
        && return this->healthCheckInterval_ == nullptr && return this->healthCheckReq_ == nullptr && return this->healthyThreshold_ == nullptr && return this->listenerPort_ == nullptr && return this->loadBalancerId_ == nullptr
        && return this->masterSlaveServerGroupId_ == nullptr && return this->proxyProtocolV2Enabled_ == nullptr && return this->requestId_ == nullptr && return this->scheduler_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->unhealthyThreshold_ == nullptr && return this->VServerGroupId_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclIds Field Functions 
    bool hasAclIds() const { return this->aclIds_ != nullptr;};
    void deleteAclIds() { this->aclIds_ = nullptr;};
    inline const DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds & aclIds() const { DARABONBA_PTR_GET_CONST(aclIds_, DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds aclIds() { DARABONBA_PTR_GET(aclIds_, DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setAclIds(const DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds & aclIds) { DARABONBA_PTR_SET_VALUE(aclIds_, aclIds) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setAclIds(DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds && aclIds) { DARABONBA_PTR_SET_RVALUE(aclIds_, aclIds) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string aclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // backendServerPort Field Functions 
    bool hasBackendServerPort() const { return this->backendServerPort_ != nullptr;};
    void deleteBackendServerPort() { this->backendServerPort_ = nullptr;};
    inline int32_t backendServerPort() const { DARABONBA_PTR_GET_DEFAULT(backendServerPort_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setBackendServerPort(int32_t backendServerPort) { DARABONBA_PTR_SET_VALUE(backendServerPort_, backendServerPort) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline string healthCheck() const { DARABONBA_PTR_GET_DEFAULT(healthCheck_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheck(string healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };


    // healthCheckConnectPort Field Functions 
    bool hasHealthCheckConnectPort() const { return this->healthCheckConnectPort_ != nullptr;};
    void deleteHealthCheckConnectPort() { this->healthCheckConnectPort_ = nullptr;};
    inline int32_t healthCheckConnectPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectPort_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckConnectPort(int32_t healthCheckConnectPort) { DARABONBA_PTR_SET_VALUE(healthCheckConnectPort_, healthCheckConnectPort) };


    // healthCheckConnectTimeout Field Functions 
    bool hasHealthCheckConnectTimeout() const { return this->healthCheckConnectTimeout_ != nullptr;};
    void deleteHealthCheckConnectTimeout() { this->healthCheckConnectTimeout_ = nullptr;};
    inline int32_t healthCheckConnectTimeout() const { DARABONBA_PTR_GET_DEFAULT(healthCheckConnectTimeout_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckConnectTimeout(int32_t healthCheckConnectTimeout) { DARABONBA_PTR_SET_VALUE(healthCheckConnectTimeout_, healthCheckConnectTimeout) };


    // healthCheckExp Field Functions 
    bool hasHealthCheckExp() const { return this->healthCheckExp_ != nullptr;};
    void deleteHealthCheckExp() { this->healthCheckExp_ = nullptr;};
    inline string healthCheckExp() const { DARABONBA_PTR_GET_DEFAULT(healthCheckExp_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckExp(string healthCheckExp) { DARABONBA_PTR_SET_VALUE(healthCheckExp_, healthCheckExp) };


    // healthCheckInterval Field Functions 
    bool hasHealthCheckInterval() const { return this->healthCheckInterval_ != nullptr;};
    void deleteHealthCheckInterval() { this->healthCheckInterval_ = nullptr;};
    inline int32_t healthCheckInterval() const { DARABONBA_PTR_GET_DEFAULT(healthCheckInterval_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckInterval(int32_t healthCheckInterval) { DARABONBA_PTR_SET_VALUE(healthCheckInterval_, healthCheckInterval) };


    // healthCheckReq Field Functions 
    bool hasHealthCheckReq() const { return this->healthCheckReq_ != nullptr;};
    void deleteHealthCheckReq() { this->healthCheckReq_ = nullptr;};
    inline string healthCheckReq() const { DARABONBA_PTR_GET_DEFAULT(healthCheckReq_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthCheckReq(string healthCheckReq) { DARABONBA_PTR_SET_VALUE(healthCheckReq_, healthCheckReq) };


    // healthyThreshold Field Functions 
    bool hasHealthyThreshold() const { return this->healthyThreshold_ != nullptr;};
    void deleteHealthyThreshold() { this->healthyThreshold_ = nullptr;};
    inline int32_t healthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(healthyThreshold_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setHealthyThreshold(int32_t healthyThreshold) { DARABONBA_PTR_SET_VALUE(healthyThreshold_, healthyThreshold) };


    // listenerPort Field Functions 
    bool hasListenerPort() const { return this->listenerPort_ != nullptr;};
    void deleteListenerPort() { this->listenerPort_ = nullptr;};
    inline int32_t listenerPort() const { DARABONBA_PTR_GET_DEFAULT(listenerPort_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setListenerPort(int32_t listenerPort) { DARABONBA_PTR_SET_VALUE(listenerPort_, listenerPort) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string loadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // masterSlaveServerGroupId Field Functions 
    bool hasMasterSlaveServerGroupId() const { return this->masterSlaveServerGroupId_ != nullptr;};
    void deleteMasterSlaveServerGroupId() { this->masterSlaveServerGroupId_ = nullptr;};
    inline string masterSlaveServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(masterSlaveServerGroupId_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setMasterSlaveServerGroupId(string masterSlaveServerGroupId) { DARABONBA_PTR_SET_VALUE(masterSlaveServerGroupId_, masterSlaveServerGroupId) };


    // proxyProtocolV2Enabled Field Functions 
    bool hasProxyProtocolV2Enabled() const { return this->proxyProtocolV2Enabled_ != nullptr;};
    void deleteProxyProtocolV2Enabled() { this->proxyProtocolV2Enabled_ = nullptr;};
    inline bool proxyProtocolV2Enabled() const { DARABONBA_PTR_GET_DEFAULT(proxyProtocolV2Enabled_, false) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setProxyProtocolV2Enabled(bool proxyProtocolV2Enabled) { DARABONBA_PTR_SET_VALUE(proxyProtocolV2Enabled_, proxyProtocolV2Enabled) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeLoadBalancerUDPListenerAttributeResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeLoadBalancerUDPListenerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeLoadBalancerUDPListenerAttributeResponseBodyTags) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setTags(const DescribeLoadBalancerUDPListenerAttributeResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setTags(DescribeLoadBalancerUDPListenerAttributeResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // unhealthyThreshold Field Functions 
    bool hasUnhealthyThreshold() const { return this->unhealthyThreshold_ != nullptr;};
    void deleteUnhealthyThreshold() { this->unhealthyThreshold_ = nullptr;};
    inline int32_t unhealthyThreshold() const { DARABONBA_PTR_GET_DEFAULT(unhealthyThreshold_, 0) };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setUnhealthyThreshold(int32_t unhealthyThreshold) { DARABONBA_PTR_SET_VALUE(unhealthyThreshold_, unhealthyThreshold) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeLoadBalancerUDPListenerAttributeResponseBody& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


  protected:
    // The ID of the network ACL.
    std::shared_ptr<string> aclId_ = nullptr;
    // The ID of the access control list (ACL).
    std::shared_ptr<DescribeLoadBalancerUDPListenerAttributeResponseBodyAclIds> aclIds_ = nullptr;
    // Indicates whether access control is enabled. Valid values: **on** and **off**. Default value: off.
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **white**: a whitelist. Only requests from the IP addresses or CIDR blocks in the network ACL are forwarded. Whitelists apply to scenarios in which you want to allow only specified IP addresses to access an application.
    // 
    //     Your service may be adversely affected if the whitelist is not properly configured. After a whitelist is configured, only requests from IP addresses that are added to the whitelist are forwarded by the listener. If you enable a whitelist but do not add an IP address to the ACL, the listener forwards all requests.
    // 
    // *   **black**: a blacklist. All requests from the IP addresses or CIDR blocks in the network ACL are blocked. Blacklists apply to scenarios in which you want to deny access from specific IP addresses or CIDR blocks to an application.
    // 
    //     If a blacklist is configured for a listener but no IP address is added to the blacklist, the listener forwards all requests.
    std::shared_ptr<string> aclType_ = nullptr;
    // The backend port used by the CLB instance.
    // 
    // >  If the listener is associated with a vServer group, this parameter is not returned.
    std::shared_ptr<int32_t> backendServerPort_ = nullptr;
    // The maximum bandwidth of the listener. Unit: Mbit/s. Valid values:
    // 
    // *   **-1**: For a pay-by-data-transfer Internet-facing CLB instance, this parameter is set to -1. This indicates that the bandwidth of the listener is unlimited.
    // *   **1** to **5120**: For a pay-by-bandwidth Internet-facing CLB instance, you can specify the maximum bandwidth of each listener. The sum of maximum bandwidth of all listeners cannot exceed the maximum bandwidth of the CLB instance.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The description of the listener.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **on**: yes
    // *   **off**: no
    std::shared_ptr<string> healthCheck_ = nullptr;
    // The port that is used for health checks. Valid values: **1** to **65535**. If this parameter is not set, the port specified by BackendServerPort is used for health checks.
    // 
    // >  This parameter takes effect only when the **HealthCheck** parameter is set to **on**.
    std::shared_ptr<int32_t> healthCheckConnectPort_ = nullptr;
    // The timeout period of a health check. If a backend Elastic Compute Service (ECS) instance does not return a health check response within the specified timeout period, the server fails the health check. Valid values: **1** to **300**. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckConnectTimeout_ = nullptr;
    // The response string for UDP listener health checks. The string is up to 64 characters in length, and can contain letters and digits.
    std::shared_ptr<string> healthCheckExp_ = nullptr;
    // The interval between two consecutive health checks. Valid values: **1** to **50**. Unit: seconds.
    std::shared_ptr<int32_t> healthCheckInterval_ = nullptr;
    // The request string for UDP listener health checks. The string is up to 64 characters in length, and can contain letters and digits.
    std::shared_ptr<string> healthCheckReq_ = nullptr;
    // The healthy threshold. The number of times that an unhealthy backend server must consecutively pass health checks before it is declared healthy. In this case, the health status is changed from **fail** to **success**. Valid values: **2** to **10**.
    std::shared_ptr<int32_t> healthyThreshold_ = nullptr;
    // The frontend port used by the CLB instance.
    std::shared_ptr<int32_t> listenerPort_ = nullptr;
    // The ID of the CLB instance.
    std::shared_ptr<string> loadBalancerId_ = nullptr;
    // The ID of the primary/secondary server group that is associated with the listener.
    std::shared_ptr<string> masterSlaveServerGroupId_ = nullptr;
    // Indicates whether the Proxy protocol is used to pass client IP addresses to backend servers. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> proxyProtocolV2Enabled_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **wrr** (default): Backend servers with higher weights receive more requests than backend servers with lower weights.
    // *   **rr**: Requests are distributed to backend servers in sequence.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The status of the listener. Valid values:
    // 
    // *   **running**
    // *   **stopped**
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<DescribeLoadBalancerUDPListenerAttributeResponseBodyTags> tags_ = nullptr;
    // The unhealthy threshold. The number of times that a healthy backend server must consecutively fail health checks before it is declared unhealthy. In this case, the health status is changed from **success** to **fail**. Valid values: **2** to **10**.
    std::shared_ptr<int32_t> unhealthyThreshold_ = nullptr;
    // The ID of the vServer group that is associated with the listener.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
