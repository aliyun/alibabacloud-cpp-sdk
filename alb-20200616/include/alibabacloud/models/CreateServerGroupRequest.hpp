// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateServerGroupRequestConnectionDrainConfig.hpp>
#include <alibabacloud/models/CreateServerGroupRequestHealthCheckConfig.hpp>
#include <alibabacloud/models/CreateServerGroupRequestSlowStartConfig.hpp>
#include <alibabacloud/models/CreateServerGroupRequestStickySessionConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateServerGroupRequestTag.hpp>
#include <alibabacloud/models/CreateServerGroupRequestUchConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Ipv6Enabled, ipv6Enabled_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_TO_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_TO_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Ipv6Enabled, ipv6Enabled_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_FROM_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_FROM_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateServerGroupRequest() = default ;
    CreateServerGroupRequest(const CreateServerGroupRequest &) = default ;
    CreateServerGroupRequest(CreateServerGroupRequest &&) = default ;
    CreateServerGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServerGroupRequest() = default ;
    CreateServerGroupRequest& operator=(const CreateServerGroupRequest &) = default ;
    CreateServerGroupRequest& operator=(CreateServerGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->connectionDrainConfig_ != nullptr && this->crossZoneEnabled_ != nullptr && this->dryRun_ != nullptr && this->healthCheckConfig_ != nullptr && this->ipv6Enabled_ != nullptr
        && this->protocol_ != nullptr && this->resourceGroupId_ != nullptr && this->scheduler_ != nullptr && this->serverGroupName_ != nullptr && this->serverGroupType_ != nullptr
        && this->serviceName_ != nullptr && this->slowStartConfig_ != nullptr && this->stickySessionConfig_ != nullptr && this->tag_ != nullptr && this->uchConfig_ != nullptr
        && this->upstreamKeepaliveEnabled_ != nullptr && this->vpcId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const CreateServerGroupRequestConnectionDrainConfig & connectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, CreateServerGroupRequestConnectionDrainConfig) };
    inline CreateServerGroupRequestConnectionDrainConfig connectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, CreateServerGroupRequestConnectionDrainConfig) };
    inline CreateServerGroupRequest& setConnectionDrainConfig(const CreateServerGroupRequestConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline CreateServerGroupRequest& setConnectionDrainConfig(CreateServerGroupRequestConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool crossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline CreateServerGroupRequest& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateServerGroupRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const CreateServerGroupRequestHealthCheckConfig & healthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, CreateServerGroupRequestHealthCheckConfig) };
    inline CreateServerGroupRequestHealthCheckConfig healthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, CreateServerGroupRequestHealthCheckConfig) };
    inline CreateServerGroupRequest& setHealthCheckConfig(const CreateServerGroupRequestHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline CreateServerGroupRequest& setHealthCheckConfig(CreateServerGroupRequestHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // ipv6Enabled Field Functions 
    bool hasIpv6Enabled() const { return this->ipv6Enabled_ != nullptr;};
    void deleteIpv6Enabled() { this->ipv6Enabled_ = nullptr;};
    inline bool ipv6Enabled() const { DARABONBA_PTR_GET_DEFAULT(ipv6Enabled_, false) };
    inline CreateServerGroupRequest& setIpv6Enabled(bool ipv6Enabled) { DARABONBA_PTR_SET_VALUE(ipv6Enabled_, ipv6Enabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateServerGroupRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateServerGroupRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline CreateServerGroupRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string serverGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline CreateServerGroupRequest& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


    // serverGroupType Field Functions 
    bool hasServerGroupType() const { return this->serverGroupType_ != nullptr;};
    void deleteServerGroupType() { this->serverGroupType_ = nullptr;};
    inline string serverGroupType() const { DARABONBA_PTR_GET_DEFAULT(serverGroupType_, "") };
    inline CreateServerGroupRequest& setServerGroupType(string serverGroupType) { DARABONBA_PTR_SET_VALUE(serverGroupType_, serverGroupType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateServerGroupRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // slowStartConfig Field Functions 
    bool hasSlowStartConfig() const { return this->slowStartConfig_ != nullptr;};
    void deleteSlowStartConfig() { this->slowStartConfig_ = nullptr;};
    inline const CreateServerGroupRequestSlowStartConfig & slowStartConfig() const { DARABONBA_PTR_GET_CONST(slowStartConfig_, CreateServerGroupRequestSlowStartConfig) };
    inline CreateServerGroupRequestSlowStartConfig slowStartConfig() { DARABONBA_PTR_GET(slowStartConfig_, CreateServerGroupRequestSlowStartConfig) };
    inline CreateServerGroupRequest& setSlowStartConfig(const CreateServerGroupRequestSlowStartConfig & slowStartConfig) { DARABONBA_PTR_SET_VALUE(slowStartConfig_, slowStartConfig) };
    inline CreateServerGroupRequest& setSlowStartConfig(CreateServerGroupRequestSlowStartConfig && slowStartConfig) { DARABONBA_PTR_SET_RVALUE(slowStartConfig_, slowStartConfig) };


    // stickySessionConfig Field Functions 
    bool hasStickySessionConfig() const { return this->stickySessionConfig_ != nullptr;};
    void deleteStickySessionConfig() { this->stickySessionConfig_ = nullptr;};
    inline const CreateServerGroupRequestStickySessionConfig & stickySessionConfig() const { DARABONBA_PTR_GET_CONST(stickySessionConfig_, CreateServerGroupRequestStickySessionConfig) };
    inline CreateServerGroupRequestStickySessionConfig stickySessionConfig() { DARABONBA_PTR_GET(stickySessionConfig_, CreateServerGroupRequestStickySessionConfig) };
    inline CreateServerGroupRequest& setStickySessionConfig(const CreateServerGroupRequestStickySessionConfig & stickySessionConfig) { DARABONBA_PTR_SET_VALUE(stickySessionConfig_, stickySessionConfig) };
    inline CreateServerGroupRequest& setStickySessionConfig(CreateServerGroupRequestStickySessionConfig && stickySessionConfig) { DARABONBA_PTR_SET_RVALUE(stickySessionConfig_, stickySessionConfig) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServerGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServerGroupRequestTag>) };
    inline vector<CreateServerGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateServerGroupRequestTag>) };
    inline CreateServerGroupRequest& setTag(const vector<CreateServerGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServerGroupRequest& setTag(vector<CreateServerGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // uchConfig Field Functions 
    bool hasUchConfig() const { return this->uchConfig_ != nullptr;};
    void deleteUchConfig() { this->uchConfig_ = nullptr;};
    inline const CreateServerGroupRequestUchConfig & uchConfig() const { DARABONBA_PTR_GET_CONST(uchConfig_, CreateServerGroupRequestUchConfig) };
    inline CreateServerGroupRequestUchConfig uchConfig() { DARABONBA_PTR_GET(uchConfig_, CreateServerGroupRequestUchConfig) };
    inline CreateServerGroupRequest& setUchConfig(const CreateServerGroupRequestUchConfig & uchConfig) { DARABONBA_PTR_SET_VALUE(uchConfig_, uchConfig) };
    inline CreateServerGroupRequest& setUchConfig(CreateServerGroupRequestUchConfig && uchConfig) { DARABONBA_PTR_SET_RVALUE(uchConfig_, uchConfig) };


    // upstreamKeepaliveEnabled Field Functions 
    bool hasUpstreamKeepaliveEnabled() const { return this->upstreamKeepaliveEnabled_ != nullptr;};
    void deleteUpstreamKeepaliveEnabled() { this->upstreamKeepaliveEnabled_ = nullptr;};
    inline bool upstreamKeepaliveEnabled() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepaliveEnabled_, false) };
    inline CreateServerGroupRequest& setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) { DARABONBA_PTR_SET_VALUE(upstreamKeepaliveEnabled_, upstreamKeepaliveEnabled) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateServerGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The configurations of connection draining.
    // 
    // After connection draining is enabled, ALB maintains data transmission for a period of time after the backend server is removed or declared unhealthy.
    // 
    // 
    // >*   Basic ALB instances do not support connection draining. Standard and WAF-enabled ALB instances support connection draining.
    // >*   Server groups of the instance and IP types support connection draining. Server groups of the Function Compute type do not support connection draining.
    std::shared_ptr<CreateServerGroupRequestConnectionDrainConfig> connectionDrainConfig_ = nullptr;
    // Specifies whether to enable cross-zone load balancing. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > *   Basic ALB instances do not support server groups that have cross-zone load balancing disabled. Only Standard and WAF-enabled ALB instances support server groups that have cross-zone load balancing.
    // > *   Cross-zone load balancing can be disabled for server groups of the server and IP type, but not for server groups of the Function Compute type.
    // > *   When cross-zone load balancing is disabled, session persistence cannot be enabled.
    std::shared_ptr<bool> crossZoneEnabled_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The configuration of the health check feature.
    // 
    // This parameter is required.
    std::shared_ptr<CreateServerGroupRequestHealthCheckConfig> healthCheckConfig_ = nullptr;
    // Specifies whether to enable Ipv6.
    std::shared_ptr<bool> ipv6Enabled_ = nullptr;
    // The backend protocol. Valid values:
    // 
    // *   **HTTP**: allows you to associate an HTTPS, HTTP, or QUIC listener with the server group. This is the default value.
    // *   **HTTPS**: allows you to associate HTTPS listeners with backend servers.
    // *   **gRPC**: allows you to associate an HTTPS or QUIC listener with the server group.
    // 
    // >  You do not need to specify a backend protocol if you set **ServerGroupType** to **Fc**.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr** (default): The weighted round-robin algorithm is used. Backend servers that have higher weights receive more requests than those that have lower weights.
    // *   **Wlc**: The weighted least connections algorithm is used. Requests are distributed based on the weights and the number of connections to backend servers. If two backend servers have the same weight, the backend server that has fewer connections is expected to receive more requests.
    // *   **Sch**: The consistent hashing algorithm is used. Requests from the same source IP address are distributed to the same backend server.
    // 
    // > This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The name of the server group. The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupName_ = nullptr;
    // The type of server group. Valid values:
    // 
    // *   **Instance** (default): allows you to add servers by specifying **Ecs**, **Eni**, or **Eci**.
    // *   **Ip**: allows you to add servers by specifying IP addresses.
    // *   **Fc**: allows you to add servers by specifying functions of Function Compute.
    std::shared_ptr<string> serverGroupType_ = nullptr;
    // This parameter is available only if the ALB Ingress controller is used. In this case, set this parameter to the name of the `Kubernetes Service` that is associated with the server group.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The configurations of slow starts.
    // After slow starts are enabled, SLB prefetches data to newly added backend servers. Requests distributed to the backend servers gradually increase.
    // 
    // > - Basic SLB instances do not support slow starts. Standard and WAF-enabled SLB instances support slow starts. 
    // >* Server groups of the server and IP types support slow starts. Server groups of the Function Compute type do not support slow starts.
    // >* Slow start is supported only by the weighted round-robin scheduling algorithm.
    std::shared_ptr<CreateServerGroupRequestSlowStartConfig> slowStartConfig_ = nullptr;
    // The configuration of session persistence.
    // 
    // >  This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    std::shared_ptr<CreateServerGroupRequestStickySessionConfig> stickySessionConfig_ = nullptr;
    // The tag.
    std::shared_ptr<vector<CreateServerGroupRequestTag>> tag_ = nullptr;
    // The configuration of consistent hashing based on URLs.
    std::shared_ptr<CreateServerGroupRequestUchConfig> uchConfig_ = nullptr;
    // Specifies whether to enable persistent TCP connections.
    std::shared_ptr<bool> upstreamKeepaliveEnabled_ = nullptr;
    // The ID of the virtual private cloud (VPC). You can add only servers that are deployed in the specified VPC to the server group.
    // 
    // >  This parameter takes effect when the **ServerGroupType** parameter is set to **Instance** or **Ip**.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
