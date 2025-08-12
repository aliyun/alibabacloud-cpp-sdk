// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVERGROUPSRESPONSEBODYSERVERGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsHealthCheck.hpp>
#include <vector>
#include <alibabacloud/models/ListServerGroupsResponseBodyServerGroupsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class ListServerGroupsResponseBodyServerGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServerGroupsResponseBodyServerGroups& obj) { 
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(AnyPortEnabled, anyPortEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_TO_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_TO_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_TO_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_TO_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_TO_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_TO_JSON(ServerGroupStatus, serverGroupStatus_);
      DARABONBA_PTR_TO_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServerGroupsResponseBodyServerGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(AnyPortEnabled, anyPortEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainEnabled, connectionDrainEnabled_);
      DARABONBA_PTR_FROM_JSON(ConnectionDrainTimeout, connectionDrainTimeout_);
      DARABONBA_PTR_FROM_JSON(HealthCheck, healthCheck_);
      DARABONBA_PTR_FROM_JSON(PreserveClientIpEnabled, preserveClientIpEnabled_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedLoadBalancerIds, relatedLoadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scheduler, scheduler_);
      DARABONBA_PTR_FROM_JSON(ServerCount, serverCount_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupName, serverGroupName_);
      DARABONBA_PTR_FROM_JSON(ServerGroupStatus, serverGroupStatus_);
      DARABONBA_PTR_FROM_JSON(ServerGroupType, serverGroupType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { this->addressIPVersion_ != nullptr
        && this->aliUid_ != nullptr && this->anyPortEnabled_ != nullptr && this->connectionDrainEnabled_ != nullptr && this->connectionDrainTimeout_ != nullptr && this->healthCheck_ != nullptr
        && this->preserveClientIpEnabled_ != nullptr && this->protocol_ != nullptr && this->regionId_ != nullptr && this->relatedLoadBalancerIds_ != nullptr && this->resourceGroupId_ != nullptr
        && this->scheduler_ != nullptr && this->serverCount_ != nullptr && this->serverGroupId_ != nullptr && this->serverGroupName_ != nullptr && this->serverGroupStatus_ != nullptr
        && this->serverGroupType_ != nullptr && this->tags_ != nullptr && this->vpcId_ != nullptr; };
    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListServerGroupsResponseBodyServerGroups& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // anyPortEnabled Field Functions 
    bool hasAnyPortEnabled() const { return this->anyPortEnabled_ != nullptr;};
    void deleteAnyPortEnabled() { this->anyPortEnabled_ = nullptr;};
    inline bool anyPortEnabled() const { DARABONBA_PTR_GET_DEFAULT(anyPortEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setAnyPortEnabled(bool anyPortEnabled) { DARABONBA_PTR_SET_VALUE(anyPortEnabled_, anyPortEnabled) };


    // connectionDrainEnabled Field Functions 
    bool hasConnectionDrainEnabled() const { return this->connectionDrainEnabled_ != nullptr;};
    void deleteConnectionDrainEnabled() { this->connectionDrainEnabled_ = nullptr;};
    inline bool connectionDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setConnectionDrainEnabled(bool connectionDrainEnabled) { DARABONBA_PTR_SET_VALUE(connectionDrainEnabled_, connectionDrainEnabled) };


    // connectionDrainTimeout Field Functions 
    bool hasConnectionDrainTimeout() const { return this->connectionDrainTimeout_ != nullptr;};
    void deleteConnectionDrainTimeout() { this->connectionDrainTimeout_ = nullptr;};
    inline int32_t connectionDrainTimeout() const { DARABONBA_PTR_GET_DEFAULT(connectionDrainTimeout_, 0) };
    inline ListServerGroupsResponseBodyServerGroups& setConnectionDrainTimeout(int32_t connectionDrainTimeout) { DARABONBA_PTR_SET_VALUE(connectionDrainTimeout_, connectionDrainTimeout) };


    // healthCheck Field Functions 
    bool hasHealthCheck() const { return this->healthCheck_ != nullptr;};
    void deleteHealthCheck() { this->healthCheck_ = nullptr;};
    inline const Models::ListServerGroupsResponseBodyServerGroupsHealthCheck & healthCheck() const { DARABONBA_PTR_GET_CONST(healthCheck_, Models::ListServerGroupsResponseBodyServerGroupsHealthCheck) };
    inline Models::ListServerGroupsResponseBodyServerGroupsHealthCheck healthCheck() { DARABONBA_PTR_GET(healthCheck_, Models::ListServerGroupsResponseBodyServerGroupsHealthCheck) };
    inline ListServerGroupsResponseBodyServerGroups& setHealthCheck(const Models::ListServerGroupsResponseBodyServerGroupsHealthCheck & healthCheck) { DARABONBA_PTR_SET_VALUE(healthCheck_, healthCheck) };
    inline ListServerGroupsResponseBodyServerGroups& setHealthCheck(Models::ListServerGroupsResponseBodyServerGroupsHealthCheck && healthCheck) { DARABONBA_PTR_SET_RVALUE(healthCheck_, healthCheck) };


    // preserveClientIpEnabled Field Functions 
    bool hasPreserveClientIpEnabled() const { return this->preserveClientIpEnabled_ != nullptr;};
    void deletePreserveClientIpEnabled() { this->preserveClientIpEnabled_ = nullptr;};
    inline bool preserveClientIpEnabled() const { DARABONBA_PTR_GET_DEFAULT(preserveClientIpEnabled_, false) };
    inline ListServerGroupsResponseBodyServerGroups& setPreserveClientIpEnabled(bool preserveClientIpEnabled) { DARABONBA_PTR_SET_VALUE(preserveClientIpEnabled_, preserveClientIpEnabled) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListServerGroupsResponseBodyServerGroupsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListServerGroupsResponseBodyServerGroupsTags>) };
    inline vector<Models::ListServerGroupsResponseBodyServerGroupsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListServerGroupsResponseBodyServerGroupsTags>) };
    inline ListServerGroupsResponseBodyServerGroups& setTags(const vector<Models::ListServerGroupsResponseBodyServerGroupsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListServerGroupsResponseBodyServerGroups& setTags(vector<Models::ListServerGroupsResponseBodyServerGroupsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListServerGroupsResponseBodyServerGroups& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IP version. Valid values:
    // 
    // *   **ipv4**
    // *   **DualStack**
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // Indicates whether the feature of forwarding requests to all ports is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> anyPortEnabled_ = nullptr;
    // Indicates whether connection draining is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> connectionDrainEnabled_ = nullptr;
    // The timeout period of connection draining. Unit: seconds. Valid values: **10** to **900**.
    std::shared_ptr<int32_t> connectionDrainTimeout_ = nullptr;
    // The configurations of health checks.
    std::shared_ptr<Models::ListServerGroupsResponseBodyServerGroupsHealthCheck> healthCheck_ = nullptr;
    // Indicates whether client IP preservation is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // > This parameter is set to **true** by default when **AddressIPVersion** is set to **ipv4**. This parameter is set to **false** when **AddressIPVersion** is set to **ipv6**. **true** will be supported by later versions.
    std::shared_ptr<bool> preserveClientIpEnabled_ = nullptr;
    // The backend protocol. Valid values: **TCP** and **UDP**.
    std::shared_ptr<string> protocol_ = nullptr;
    // The region ID of the NLB instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The NLB instances.
    std::shared_ptr<vector<string>> relatedLoadBalancerIds_ = nullptr;
    // The ID of the resource group to which the server group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The routing algorithm. Valid values:
    // 
    // *   **Wrr**: Backend servers with higher weights receive more requests than backend servers with lower weights.
    // *   **rr**: Requests are forwarded to the backend servers in sequence. sch: Requests are forwarded to the backend servers based on source IP address hashing.
    // *   **sch**: Requests from the same source IP address are forwarded to the same backend server.
    // *   **tch**: Four-element hashing, which specifies consistent hashing that is based on four factors: source IP address, destination IP address, source port, and destination port. Requests that contain the same information based on the four factors are forwarded to the same backend server.
    // *   **qch**: QUIC ID hashing. Requests that contain the same QUIC ID are forwarded to the same backend server.
    std::shared_ptr<string> scheduler_ = nullptr;
    // The number of server groups associated with the NLB instances.
    std::shared_ptr<int32_t> serverCount_ = nullptr;
    // The server group ID.
    std::shared_ptr<string> serverGroupId_ = nullptr;
    // The server group name.
    std::shared_ptr<string> serverGroupName_ = nullptr;
    // The status of the server group. Valid values:
    // 
    // *   **Creating**
    // *   **Available**
    // *   **Configuring**
    std::shared_ptr<string> serverGroupStatus_ = nullptr;
    // The type of server group. Valid values:
    // 
    // *   **Instance** : contains servers of the **Ecs**, **Ens**, and **Eci** types.
    // *   **Ip**: contains servers specified by IP addresses.
    std::shared_ptr<string> serverGroupType_ = nullptr;
    // The tag.
    std::shared_ptr<vector<Models::ListServerGroupsResponseBodyServerGroupsTags>> tags_ = nullptr;
    // The ID of the VPC to which the server group belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
