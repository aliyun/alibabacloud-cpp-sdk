// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVERGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateServerGroupRequestHealthCheckConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateServerGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class CreateServerGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AnyPortEnabled, anyPortEnabled_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_TO_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServerGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AnyPortEnabled, anyPortEnabled_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HealthCheckConfig, healthCheckConfig_);
      DARABONBA_PTR_FROM_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
    virtual bool empty() const override { this->addressIPVersion_ != nullptr
        && this->anyPortEnabled_ != nullptr && this->clientToken_ != nullptr && this->connectionDrainEnabled_ != nullptr && this->connectionDrainTimeout_ != nullptr && this->dryRun_ != nullptr
        && this->healthCheckConfig_ != nullptr && this->preserveClientIpEnabled_ != nullptr && this->protocol_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->scheduler_ != nullptr && this->serverGroupName_ != nullptr && this->serverGroupType_ != nullptr && this->tag_ != nullptr && this->vpcId_ != nullptr; };
    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline CreateServerGroupRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // anyPortEnabled Field Functions 
    bool hasAnyPortEnabled() const { return this->anyPortEnabled_ != nullptr;};
    void deleteAnyPortEnabled() { this->anyPortEnabled_ = nullptr;};
    inline bool anyPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(anyPortEnabled_, false) };
    inline CreateServerGroupRequest& setAnyPortEnabled(bool anyPortEnabled) { DARABONBA_PTR_SET_VALUE(anyPortEnabled_, anyPortEnabled) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateServerGroupRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // connectionDrainEnabled Field Functions 
    bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
    void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
    inline bool connectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
    inline CreateServerGroupRequest& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline CreateServerGroupRequest& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


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


    // preserveClientIpEnabled Field Functions 
    bool hasPreserveClientIpEnabled() const { return this->preserveClientIpEnabled_ != nullptr;};
    void deletePreserveClientIpEnabled() { this->preserveClientIpEnabled_ = nullptr;};
    inline bool preserveClientIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(preserveClientIpEnabled_, false) };
    inline CreateServerGroupRequest& setPreserveClientIpEnabled(bool preserveClientIpEnabled) { DARABONBA_PTR_SET_VALUE(preserveClientIpEnabled_, preserveClientIpEnabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateServerGroupRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServerGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateServerGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateServerGroupRequestTag>) };
    inline vector<CreateServerGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateServerGroupRequestTag>) };
    inline CreateServerGroupRequest& setTag(const vector<CreateServerGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateServerGroupRequest& setTag(vector<CreateServerGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateServerGroupRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IP version. Valid values:
    // 
    // *   **ipv4** (default): IPv4
    // *   **DualStack**: dual-stack
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // Specifies whether to enable multi-port forwarding. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> anyPortEnabled_ = nullptr;
    // The client token used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token. Ensure that the token is unique among different requests. Only ASCII characters are allowed.
    // 
    // >  If you do not set this parameter, the value of **RequestId** is used.**** The value of **RequestId** is different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable connection draining. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> connectionDrainEnabled_ = nullptr;
    // Specifies a timeout period for connection draining. Unit: seconds. Valid values: **0** to **900**.
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true:**: validates the request without performing the operation. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the validation, the corresponding error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): validates the request and performs the operation. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The configurations of health checks.
    std::shared_ptr<CreateServerGroupRequestHealthCheckConfig> healthCheckConfig_ = nullptr;
    // Specifies whether to enable client IP preservation. Valid values:
    // 
    // *   **true** (default)
    // *   **false**
    // 
    // >  If you set this parameter to **true** and **Protocol** to **TCP**, the server group cannot be associated with **TCPSSL** listeners.
    std::shared_ptr<bool> preserveClientIpEnabled_ = nullptr;
    // The protocol between the NLB instance and backend servers. Valid values:
    // 
    // *   **TCP** (default)
    // *   **UDP**
    // *   **TCP_UDP**
    // 
    // > *   If you set this parameter to **UDP**, you can associate the server group only with **UDP** listeners.
    // > *   If you set this parameter to **TCP** and **PreserveClientIpEnabled** to **true**, you can associate the server group only with **TCP** listeners.
    // > *   If you set this parameter to **TCP** and **PreserveClientIpEnabled** to **false**, you can associate the server group with **TCPSSL** and **TCP** listeners.
    // > *   If you set this parameter to **TCP_UDP**, you can associate the server group with **TCP** and **UDP** listeners.
    std::shared_ptr<string> protocol_ = nullptr;
    // The ID of the region where the NLB instance is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/443657.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the server group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The scheduling algorithm. Valid values:
    // 
    // *   **Wrr** (default): weighted round-robin. Backend servers with higher weights receive more requests.
    // *   **Wlc**: weighted least connections. Requests are distributed based on the weights and the number of connections to backend servers. If multiple backend servers have the same weight, requests are forwarded to the backend server with the least connections.
    // *   **rr**: Requests are forwarded to backend servers in sequence.
    // *   **sch**: source IP hash. Requests from the same source IP address are forwarded to the same backend server.
    // *   **tch**: consistent hashing based on four factors: source IP address, destination IP address, source port, and destination port. Requests that contain the same four factors are forwarded to the same backend server.
    // *   **qch**: QUIC ID hash. Requests that contain the same QUIC ID are forwarded to the same backend server.
    // 
    // >  QUIC ID hash is supported only when the backend protocol is set to UDP.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The server group name.
    // 
    // The name must be 2 to 128 characters in length, can contain digits, periods (.), underscores (_), and hyphens (-), and must start with a letter.
    // 
    // This parameter is required.
    std::shared_ptr<string> serverGroupName_ = nullptr;
    // The type of the server group. Valid values:
    // 
    // *   **Instance** (default): allows you to specify servers of the **Ecs**, **Eni**, or **Eci** type.
    // *   **Ip**: allows you to specify IP addresses.
    std::shared_ptr<string> serverGroupType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateServerGroupRequestTag>> tag_ = nullptr;
    // The ID of the virtual private cloud (VPC) where the server group is deployed.
    // 
    // >  If **ServerGroupType** is set to **Instance**, only servers in the specified VPC can be added to the server group.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
