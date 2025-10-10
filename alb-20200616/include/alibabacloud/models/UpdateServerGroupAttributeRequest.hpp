// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateServerGroupAttributeRequestConnectionDrainConfig.hpp>
#include <alibabacloud/models/UpdateServerGroupAttributeRequestHealthCheckConfig.hpp>
#include <alibabacloud/models/UpdateServerGroupAttributeRequestSlowStartConfig.hpp>
#include <alibabacloud/models/UpdateServerGroupAttributeRequestStickySessionConfig.hpp>
#include <alibabacloud/models/UpdateServerGroupAttributeRequestUchConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateServerGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_TO_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_TO_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_TO_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_TO_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainConfig, connectionDrainConfig_);
      DARABONBA_PTR_FROM_JSON(CrossZoneEnabled, crossZoneEnabled_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(SlowStartConfig, slowStartConfig_);
      DARABONBA_PTR_FROM_JSON(StickySessionConfig, stickySessionConfig_);
      DARABONBA_PTR_FROM_JSON(UchConfig, uchConfig_);
      DARABONBA_PTR_FROM_JSON(UpstreamKeepaliveEnabled, upstreamKeepaliveEnabled_);
    };
    UpdateServerGroupAttributeRequest() = default ;
    UpdateServerGroupAttributeRequest(const UpdateServerGroupAttributeRequest &) = default ;
    UpdateServerGroupAttributeRequest(UpdateServerGroupAttributeRequest &&) = default ;
    UpdateServerGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupAttributeRequest() = default ;
    UpdateServerGroupAttributeRequest& operator=(const UpdateServerGroupAttributeRequest &) = default ;
    UpdateServerGroupAttributeRequest& operator=(UpdateServerGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->connectionDrainConfig_ != nullptr && this->crossZoneEnabled_ != nullptr && this->dryRun_ != nullptr && this->healthCheckConfig_ != nullptr && this->scheduler_ != nullptr
        && this->serverGroupId_ != nullptr && this->serverGroupName_ != nullptr && this->serviceName_ != nullptr && this->slowStartConfig_ != nullptr && this->stickySessionConfig_ != nullptr
        && this->uchConfig_ != nullptr && this->upstreamKeepaliveEnabled_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateServerGroupAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainConfig Field Functions 
    bool hasConnectionDrainConfig() const { return this->connectionDrainConfig_ != nullptr;};
    void deleteConnectionDrainConfig() { this->connectionDrainConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequestConnectionDrainConfig & connectionDrainConfig() const { DARABONBA_PTR_GET_CONST(connectionDrainConfig_, UpdateServerGroupAttributeRequestConnectionDrainConfig) };
    inline UpdateServerGroupAttributeRequestConnectionDrainConfig connectionDrainConfig() { DARABONBA_PTR_GET(connectionDrainConfig_, UpdateServerGroupAttributeRequestConnectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainConfig(const UpdateServerGroupAttributeRequestConnectionDrainConfig & connectionDrainConfig) { DARABONBA_PTR_SET_VALUE(connectionDrainConfig_, connectionDrainConfig) };
    inline UpdateServerGroupAttributeRequest& setConnectionDrainConfig(UpdateServerGroupAttributeRequestConnectionDrainConfig && connectionDrainConfig) { DARABONBA_PTR_SET_RVALUE(connectionDrainConfig_, connectionDrainConfig) };


    // crossZoneEnabled Field Functions 
    bool hasCrossZoneEnabled() const { return this->crossZoneEnabled_ != nullptr;};
    void deleteCrossZoneEnabled() { this->crossZoneEnabled_ = nullptr;};
    inline bool crossZoneEnabled() const { DARABONBA_PTR_GET_DEFAULT(crossZoneEnabled_, false) };
    inline UpdateServerGroupAttributeRequest& setCrossZoneEnabled(bool crossZoneEnabled) { DARABONBA_PTR_SET_VALUE(crossZoneEnabled_, crossZoneEnabled) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateServerGroupAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // healthCheckConfig Field Functions 
    bool hasHealthCheckConfig() const { return this->healthCheckConfig_ != nullptr;};
    void deleteHealthCheckConfig() { this->healthCheckConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequestHealthCheckConfig & healthCheckConfig() const { DARABONBA_PTR_GET_CONST(healthCheckConfig_, UpdateServerGroupAttributeRequestHealthCheckConfig) };
    inline UpdateServerGroupAttributeRequestHealthCheckConfig healthCheckConfig() { DARABONBA_PTR_GET(healthCheckConfig_, UpdateServerGroupAttributeRequestHealthCheckConfig) };
    inline UpdateServerGroupAttributeRequest& setHealthCheckConfig(const UpdateServerGroupAttributeRequestHealthCheckConfig & healthCheckConfig) { DARABONBA_PTR_SET_VALUE(healthCheckConfig_, healthCheckConfig) };
    inline UpdateServerGroupAttributeRequest& setHealthCheckConfig(UpdateServerGroupAttributeRequestHealthCheckConfig && healthCheckConfig) { DARABONBA_PTR_SET_RVALUE(healthCheckConfig_, healthCheckConfig) };


    // scheduler Field Functions 
    bool hasScheduler() const { return this->scheduler_ != nullptr;};
    void deleteScheduler() { this->scheduler_ = nullptr;};
    inline string scheduler() const { DARABONBA_PTR_GET_DEFAULT(scheduler_, "") };
    inline UpdateServerGroupAttributeRequest& setScheduler(string scheduler) { DARABONBA_PTR_SET_VALUE(scheduler_, scheduler) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateServerGroupAttributeRequest& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


    // serverGroupName Field Functions 
    bool hasServerGroupName() const { return this->serverGroupName_ != nullptr;};
    void deleteServerGroupName() { this->serverGroupName_ = nullptr;};
    inline string serverGroupName() const { DARABONBA_PTR_GET_DEFAULT(serverGroupName_, "") };
    inline UpdateServerGroupAttributeRequest& setServerGroupName(string serverGroupName) { DARABONBA_PTR_SET_VALUE(serverGroupName_, serverGroupName) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateServerGroupAttributeRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // slowStartConfig Field Functions 
    bool hasSlowStartConfig() const { return this->slowStartConfig_ != nullptr;};
    void deleteSlowStartConfig() { this->slowStartConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequestSlowStartConfig & slowStartConfig() const { DARABONBA_PTR_GET_CONST(slowStartConfig_, UpdateServerGroupAttributeRequestSlowStartConfig) };
    inline UpdateServerGroupAttributeRequestSlowStartConfig slowStartConfig() { DARABONBA_PTR_GET(slowStartConfig_, UpdateServerGroupAttributeRequestSlowStartConfig) };
    inline UpdateServerGroupAttributeRequest& setSlowStartConfig(const UpdateServerGroupAttributeRequestSlowStartConfig & slowStartConfig) { DARABONBA_PTR_SET_VALUE(slowStartConfig_, slowStartConfig) };
    inline UpdateServerGroupAttributeRequest& setSlowStartConfig(UpdateServerGroupAttributeRequestSlowStartConfig && slowStartConfig) { DARABONBA_PTR_SET_RVALUE(slowStartConfig_, slowStartConfig) };


    // stickySessionConfig Field Functions 
    bool hasStickySessionConfig() const { return this->stickySessionConfig_ != nullptr;};
    void deleteStickySessionConfig() { this->stickySessionConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequestStickySessionConfig & stickySessionConfig() const { DARABONBA_PTR_GET_CONST(stickySessionConfig_, UpdateServerGroupAttributeRequestStickySessionConfig) };
    inline UpdateServerGroupAttributeRequestStickySessionConfig stickySessionConfig() { DARABONBA_PTR_GET(stickySessionConfig_, UpdateServerGroupAttributeRequestStickySessionConfig) };
    inline UpdateServerGroupAttributeRequest& setStickySessionConfig(const UpdateServerGroupAttributeRequestStickySessionConfig & stickySessionConfig) { DARABONBA_PTR_SET_VALUE(stickySessionConfig_, stickySessionConfig) };
    inline UpdateServerGroupAttributeRequest& setStickySessionConfig(UpdateServerGroupAttributeRequestStickySessionConfig && stickySessionConfig) { DARABONBA_PTR_SET_RVALUE(stickySessionConfig_, stickySessionConfig) };


    // uchConfig Field Functions 
    bool hasUchConfig() const { return this->uchConfig_ != nullptr;};
    void deleteUchConfig() { this->uchConfig_ = nullptr;};
    inline const UpdateServerGroupAttributeRequestUchConfig & uchConfig() const { DARABONBA_PTR_GET_CONST(uchConfig_, UpdateServerGroupAttributeRequestUchConfig) };
    inline UpdateServerGroupAttributeRequestUchConfig uchConfig() { DARABONBA_PTR_GET(uchConfig_, UpdateServerGroupAttributeRequestUchConfig) };
    inline UpdateServerGroupAttributeRequest& setUchConfig(const UpdateServerGroupAttributeRequestUchConfig & uchConfig) { DARABONBA_PTR_SET_VALUE(uchConfig_, uchConfig) };
    inline UpdateServerGroupAttributeRequest& setUchConfig(UpdateServerGroupAttributeRequestUchConfig && uchConfig) { DARABONBA_PTR_SET_RVALUE(uchConfig_, uchConfig) };


    // upstreamKeepaliveEnabled Field Functions 
    bool hasUpstreamKeepaliveEnabled() const { return this->upstreamKeepaliveEnabled_ != nullptr;};
    void deleteUpstreamKeepaliveEnabled() { this->upstreamKeepaliveEnabled_ = nullptr;};
    inline bool upstreamKeepaliveEnabled() const { DARABONBA_PTR_GET_DEFAULT(upstreamKeepaliveEnabled_, false) };
    inline UpdateServerGroupAttributeRequest& setUpstreamKeepaliveEnabled(bool upstreamKeepaliveEnabled) { DARABONBA_PTR_SET_VALUE(upstreamKeepaliveEnabled_, upstreamKeepaliveEnabled) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The configurations of connection draining.
    // 
    // After connection draining is enabled, SLB remains data transmission for a period of time after a backend server is removed or declared unhealthy.
    // 
    // > *   Basic SLB instances do not support connection draining. Standard and WAF-enabled SLB instances support connection draining.
    // > *   Server groups of the server and IP types support connection draining. Server groups of the Function Compute type do not support connection draining.
    std::shared_ptr<UpdateServerGroupAttributeRequestConnectionDrainConfig> connectionDrainConfig_ = nullptr;
    // Indicates whether cross-zone load balancing is enabled for the server group. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // > *   Basic ALB instances do not support server groups that have cross-zone load balancing disabled. Only Standard and WAF-enabled ALB instances support server groups that have cross-zone load balancing.
    // >*   Cross-zone load balancing can be disabled for server groups of the server and IP type, but not for server groups of the Function Compute type.
    // >*   When cross-zone load balancing is disabled, session persistence cannot be enabled.
    std::shared_ptr<bool> crossZoneEnabled_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: checks the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a `2xx` HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The configuration of health checks.
    std::shared_ptr<UpdateServerGroupAttributeRequestHealthCheckConfig> healthCheckConfig_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr**: the weighted round robin algorithm. Backend servers that have higher weights receive more requests than those that have lower weights.
    // *   **Wlc**: the weighted least connections algorithm. Requests are distributed based on the weights and the number of connections to backend servers. If two backend servers have the same weight, the backend server that has fewer connections is expected to receive more requests.
    // *   **Sch**: the consistent hashing algorithm. Requests from the same source IP address are distributed to the same backend server.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The server group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The server group name.
    // 
    // The name must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    std::shared_ptr<string> serverGroupName_ = nullptr;
    // This parameter is available only if the ALB Ingress controller is used. In this case, set this parameter to the name of the `Kubernetes Service` that is associated with the server group.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The configurations of slow starts.
    // 
    // After slow starts are enabled, ALB prefetches data to newly added backend servers. Requests distributed to the backend servers gradually increase.
    // 
    // > *   Basic ALB instances do not support slow starts. Standard and WAF-enabled ALB instances support slow starts.
    // >*   Server groups of the instance and IP types support slow starts. Server groups of the Function Compute type do not support slow starts.
    // >*   Slow start is supported only by the weighted round-robin scheduling algorithm.
    std::shared_ptr<UpdateServerGroupAttributeRequestSlowStartConfig> slowStartConfig_ = nullptr;
    // The configuration of session persistence.
    std::shared_ptr<UpdateServerGroupAttributeRequestStickySessionConfig> stickySessionConfig_ = nullptr;
    // The configurations of consistent hashing based on URLs.
    std::shared_ptr<UpdateServerGroupAttributeRequestUchConfig> uchConfig_ = nullptr;
    // Specifies whether to enable persistent TCP connections.
    std::shared_ptr<bool> upstreamKeepaliveEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
