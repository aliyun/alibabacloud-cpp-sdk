// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig.hpp>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsHealthCheckConfig.hpp>
#include <vector>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsSlowStartConfig.hpp>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsStickySessionConfig.hpp>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsTags.hpp>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsUchConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListServerGroupsResponseBodyServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBodyServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigManagedEnabled, configManagedEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Ipv6Enabled, ipv6Enabled_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupStatus, serverGroupStatus_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_TO_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_TO_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBodyServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigManagedEnabled, configManagedEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Ipv6Enabled, ipv6Enabled_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServerGroupStatus, serverGroupStatus_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_FROM_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_FROM_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListServerGroupsResponseBodyServerGroups() = default ;
    ListServerGroupsResponseBodyServerGroups(const ListServerGroupsResponseBodyServerGroups &) = default ;
    ListServerGroupsResponseBodyServerGroups(ListServerGroupsResponseBodyServerGroups &&) = default ;
    ListServerGroupsResponseBodyServerGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServerGroupsResponseBodyServerGroups() = default ;
    ListServerGroupsResponseBodyServerGroups& operator=(const ListServerGroupsResponseBodyServerGroups &) = default ;
    ListServerGroupsResponseBodyServerGroups& operator=(ListServerGroupsResponseBodyServerGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configManagedEnabled_ != nullptr
        && this->connectionDrainConfig_ != nullptr && this->createTime_ != nullptr && this->crossZoneEnabled_ != nullptr && this->healthCheckConfig_ != nullptr && this->ipv6Enabled_ != nullptr
        && this->protocol_ != nullptr && this->relatedLoadBalancerIds_ != nullptr && this->resourceGroupId_ != nullptr && this->scheduler_ != nullptr && this->serverCount_ != nullptr
        && this->serverGroupId_ != nullptr && this->serverGroupName_ != nullptr && this->serverGroupStatus_ != nullptr && this->serverGroupType_ != nullptr && this->serviceName_ != nullptr
        && this->slowStartConfig_ != nullptr && this->stickySessionConfig_ != nullptr && this->tags_ != nullptr && this->uchConfig_ != nullptr && this->upstreamKeepaliveEnabled_ != nullptr
        && this->vpcId_ != nullptr; };
    // configManagedEnabled Field Functions 
    bool hasConfigManagedEnabled() const { return this->configManagedEnabled_ != nullptr;};
    void deleteConfigManagedEnabled() { this->configManagedEnabled_ = nullptr;};
    inline bool configManagedEnabled() const { DARABONBA_PTR_GET_DEFAULT(configManagedEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setConfigManagedEnabled(bool configManagedEnabled) { DARABONBA_PTR_SET_VALUE(configManagedEnabled_, configManagedEnabled) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig & connectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig) };
    inline Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig connectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setConnectionDrainConfig(const Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setConnectionDrainConfig(Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool crossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig & healthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig) };
    inline Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig healthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setHealthCheckConfig(const Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setHealthCheckConfig(Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // ipv6Enabled Field Functions 
    bool hasIpv6Enabled() const { return this->ipv6Enabled_ != nullptr;};
    void deleteIpv6Enabled() { this->ipv6Enabled_ = nullptr;};
    inline bool ipv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(ipv6Enabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setIpv6Enabled(bool ipv6Enabled) { DARABONBA_PTR_SET_VALUE(ipv6Enabled_, ipv6Enabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // relatedLoadBalancerIds Field Functions 
    bool hasRelatedLoadBalancerIds() const { return this->relatedLoadBalancerIds_ != nullptr;};
    void deleteRelatedLoadBalancerIds() { this->relatedLoadBalancerIds_ = nullptr;};
    inline const vector<string> & relatedLoadBalancerIds() const { DARABONBA_PTR_GET_CONST(relatedLoadBalancerIds_, vector<string>) };
    inline vector<string> relatedLoadBalancerIds() { DARABONBA_PTR_GET(relatedLoadBalancerIds_, vector<string>) };
    inline ListServerGroupsResponseBodyServerGroups& setRelatedLoadBalancerIds(const vector<string> & relatedLoadBalancerIds) { DARABONBA_PTR_SET_VALUE(relatedLoadBalancerIds_, relatedLoadBalancerIds) };
    inline ListServerGroupsResponseBodyServerGroups& setRelatedLoadBalancerIds(vector<string> && relatedLoadBalancerIds) { DARABONBA_PTR_SET_RVALUE(relatedLoadBalancerIds_, relatedLoadBalancerIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverCount Field Functions 
    bool hasServerCount() const { return this->serverCount_ != nullptr;};
    void deleteServerCount() { this->serverCount_ = nullptr;};
    inline int32_t serverCount() const { DARABONBA_PTR_GET_DEFAULT(serverCount_, 0) };
    inline ListServerGroupsResponseBodyServerGroups& setServerCount(int32_t serverCount) { DARABONBA_PTR_SET_VALUE(serverCount_, serverCount) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string serverGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


    // serverGroupStatus Field Functions 
    bool hasServerGroupStatus() const { return this->serverGroupStatus_ != nullptr;};
    void deleteServerGroupStatus() { this->serverGroupStatus_ = nullptr;};
    inline string serverGroupStatus() const { DARABONBA_PTR_GET_DEFAULT(serverGroupStatus_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setServerGroupStatus(string serverGroupStatus) { DARABONBA_PTR_SET_VALUE(serverGroupStatus_, serverGroupStatus) };


    // serverGroupType Field Functions 
    bool hasServerGroupType() const { return this->serverGroupType_ != nullptr;};
    void deleteServerGroupType() { this->serverGroupType_ = nullptr;};
    inline string serverGroupType() const { DARABONBA_PTR_GET_DEFAULT(serverGroupType_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setServerGroupType(string serverGroupType) { DARABONBA_PTR_SET_VALUE(serverGroupType_, serverGroupType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // slowStartConfig Field Functions 
    bool hasSlowStartConfig() const { return this->slowStartConfig_ != nullptr;};
    void deleteSlowStartConfig() { this->slowStartConfig_ = nullptr;};
    inline const Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig & slowStartConfig() const { DARABONBA_PTR_GET_CONST(slowStartConfig_, Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig) };
    inline Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig slowStartConfig() { DARABONBA_PTR_GET(slowStartConfig_, Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setSlowStartConfig(const Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig & slowStartConfig) { DARABONBA_PTR_SET_VALUE(slowStartConfig_, slowStartConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setSlowStartConfig(Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig && slowStartConfig) { DARABONBA_PTR_SET_RVALUE(slowStartConfig_, slowStartConfig) };


    // stickySessionConfig Field Functions 
    bool hasStickySessionConfig() const { return this->stickySessionConfig_ != nullptr;};
    void deleteStickySessionConfig() { this->stickySessionConfig_ = nullptr;};
    inline const Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig & stickySessionConfig() const { DARABONBA_PTR_GET_CONST(stickySessionConfig_, Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig) };
    inline Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig stickySessionConfig() { DARABONBA_PTR_GET(stickySessionConfig_, Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setStickySessionConfig(const Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig & stickySessionConfig) { DARABONBA_PTR_SET_VALUE(stickySessionConfig_, stickySessionConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setStickySessionConfig(Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig && stickySessionConfig) { DARABONBA_PTR_SET_RVALUE(stickySessionConfig_, stickySessionConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListServerGroupsResponseBodyServerGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListServerGroupsResponseBodyServerGroupsTags>) };
    inline vector<Models::ListServerGroupsResponseBodyServerGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListServerGroupsResponseBodyServerGroupsTags>) };
    inline ListServerGroupsResponseBodyServerGroups& setTags(const vector<Models::ListServerGroupsResponseBodyServerGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListServerGroupsResponseBodyServerGroups& setTags(vector<Models::ListServerGroupsResponseBodyServerGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // uchConfig Field Functions 
    bool hasUchConfig() const { return this->uchConfig_ != nullptr;};
    void deleteUchConfig() { this->uchConfig_ = nullptr;};
    inline const Models::ListServerGroupsResponseBodyServerGroupsUchConfig & uchConfig() const { DARABONBA_PTR_GET_CONST(uchConfig_, Models::ListServerGroupsResponseBodyServerGroupsUchConfig) };
    inline Models::ListServerGroupsResponseBodyServerGroupsUchConfig uchConfig() { DARABONBA_PTR_GET(uchConfig_, Models::ListServerGroupsResponseBodyServerGroupsUchConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setUchConfig(const Models::ListServerGroupsResponseBodyServerGroupsUchConfig & uchConfig) { DARABONBA_PTR_SET_VALUE(uchConfig_, uchConfig) };
    inline ListServerGroupsResponseBodyServerGroups& setUchConfig(Models::ListServerGroupsResponseBodyServerGroupsUchConfig && uchConfig) { DARABONBA_PTR_SET_RVALUE(uchConfig_, uchConfig) };


    // upstreamKeepaliveEnabled Field Functions 
    bool hasUpstreamKeepaliveEnabled() const { return this->upstreamKeepaliveEnabled_ != nullptr;};
    void deleteUpstreamKeepaliveEnabled() { this->upstreamKeepaliveEnabled_ = nullptr;};
    inline bool upstreamKeepaliveEnabled() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepaliveEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) { DARABONBA_PTR_SET_VALUE(upstreamKeepaliveEnabled_, upstreamKeepaliveEnabled) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Indicates whether configuration management is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> configManagedEnabled_ = nullptr;
    // The configurations of connection draining.
    // 
    // After connection draining is enabled, ALB maintains data transmission for a period of time after the backend server is removed or declared unhealthy.
    // > 
    // > - Basic ALB instances do not support connection draining. Standard and WAF-enabled ALB instances support connection draining. 
    // > -  Server groups of the instance and IP types support connection draining. Server groups of the Function Compute type do not support connection draining.
    std::shared_ptr<Models::ListServerGroupsResponseBodyServerGroupsConnectionDrainConfig> connectionDrainConfig_ = nullptr;
    // The time when the resource was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Indicates whether cross-zone load balancing is enabled. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    std::shared_ptr<bool> crossZoneEnabled_ = nullptr;
    // The health check configurations.
    std::shared_ptr<Models::ListServerGroupsResponseBodyServerGroupsHealthCheckConfig> healthCheckConfig_ = nullptr;
    // Indicates whether IPv6 is supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ipv6Enabled_ = nullptr;
    // The backend protocol. Valid values:
    // 
    // *   **HTTP**: allows you to associate HTTPS, HTTP, or QUIC listeners with backend servers.
    // *   **HTTPS**: allows you to associate HTTPS listeners with backend servers.
    // *   **GRPC**: allows you to associate HTTPS and QUIC listeners with backend servers.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the ALB instance associated with the server group.
    std::shared_ptr<vector<string>> relatedLoadBalancerIds_ = nullptr;
    // The ID of the resource group to which the instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr**: weighted round-robin. Backend servers with higher weights receive more requests than backend servers with lower weights.
    // *   **Wlc**: weighted least connections. Requests are distributed based on the weight and load of each backend server. The load refers to the number of connections on a backend server. If multiple backend servers have the same weight, requests are forwarded to the backend server with the least number of connections.
    // *   **Sch**: consistent hashing. Requests that have the same hash factors are distributed to the same backend server. If you do not specify the UchConfig parameter, the source IP address is used as the hash factor by default. Requests that are from the same IP address are distributed to the same backend server. If you specify the UchConfig parameter, the URL string is used as the hash factor. Requests that have the same URL string are distributed to the same backend server.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The number of backend servers in the server group.
    std::shared_ptr<int32_t> serverCount_ = nullptr;
    // The server group ID.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The server group name.
    std::shared_ptr<string> serverGroupName_ = nullptr;
    // The status of the server group. Valid values:
    // 
    // *   **Creating**.
    // *   **Available**
    // *   **Configuring**
    std::shared_ptr<string> serverGroupStatus_ = nullptr;
    // The server group type. Valid values:
    // 
    // *   **Instance**: instances, including ECS instances, ENIs, and elastic container instances.
    // *   **Ip**: IP addresses.
    // *   **Fc**: Function Compute
    std::shared_ptr<string> serverGroupType_ = nullptr;
    // The name of the server group.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The configurations of slow starts.
    // 
    // After slow starts are enabled, ALB prefetches data to newly added backend servers. Requests distributed to the backend servers gradually increase.
    // 
    // > 
    // > - Basic ALB instances do not support slow starts. Standard and WAF-enabled ALB instances support slow starts.
    // > - Server groups of the instance and IP types support slow starts. Server groups of the Function Compute type do not support slow starts.
    // > - Slow start is supported only by the weighted round-robin scheduling algorithm.
    std::shared_ptr<Models::ListServerGroupsResponseBodyServerGroupsSlowStartConfig> slowStartConfig_ = nullptr;
    // The configuration of session persistence.
    std::shared_ptr<Models::ListServerGroupsResponseBodyServerGroupsStickySessionConfig> stickySessionConfig_ = nullptr;
    // The tags that are added to the server group.
    std::shared_ptr<vector<Models::ListServerGroupsResponseBodyServerGroupsTags>> tags_ = nullptr;
    // The configuration of consistent hashing based on URLs.
    std::shared_ptr<Models::ListServerGroupsResponseBodyServerGroupsUchConfig> uchConfig_ = nullptr;
    // Indicates whether persistent TCP connections are enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upstreamKeepaliveEnabled_ = nullptr;
    // The ID of the VPC to which the ALB instance belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
