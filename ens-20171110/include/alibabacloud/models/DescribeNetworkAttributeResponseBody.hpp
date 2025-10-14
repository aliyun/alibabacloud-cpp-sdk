// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyCloudResources.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyHaVipIds.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyInstanceIds.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyLoadBalancerIds.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyNatGatewayIds.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyNetworkInterfaceIds.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyRouteTableIds.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodySecondaryCidrBlocks.hpp>
#include <alibabacloud/models/DescribeNetworkAttributeResponseBodyVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworkAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_TO_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_TO_JSON(RouterTableId, routerTableId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CloudResources, cloudResources_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(HaVipIds, haVipIds_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerIds, loadBalancerIds_);
      DARABONBA_PTR_FROM_JSON(NatGatewayIds, natGatewayIds_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_FROM_JSON(RouterTableId, routerTableId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    DescribeNetworkAttributeResponseBody() = default ;
    DescribeNetworkAttributeResponseBody(const DescribeNetworkAttributeResponseBody &) = default ;
    DescribeNetworkAttributeResponseBody(DescribeNetworkAttributeResponseBody &&) = default ;
    DescribeNetworkAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkAttributeResponseBody() = default ;
    DescribeNetworkAttributeResponseBody& operator=(const DescribeNetworkAttributeResponseBody &) = default ;
    DescribeNetworkAttributeResponseBody& operator=(DescribeNetworkAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->cloudResources_ == nullptr && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->gatewayRouteTableId_ == nullptr
        && return this->haVipIds_ == nullptr && return this->instanceIds_ == nullptr && return this->loadBalancerIds_ == nullptr && return this->natGatewayIds_ == nullptr && return this->networkAclId_ == nullptr
        && return this->networkId_ == nullptr && return this->networkInterfaceIds_ == nullptr && return this->networkName_ == nullptr && return this->requestId_ == nullptr && return this->routeTableId_ == nullptr
        && return this->routeTableIds_ == nullptr && return this->routerTableId_ == nullptr && return this->secondaryCidrBlocks_ == nullptr && return this->status_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeNetworkAttributeResponseBody& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // cloudResources Field Functions 
    bool hasCloudResources() const { return this->cloudResources_ != nullptr;};
    void deleteCloudResources() { this->cloudResources_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyCloudResources & cloudResources() const { DARABONBA_PTR_GET_CONST(cloudResources_, DescribeNetworkAttributeResponseBodyCloudResources) };
    inline DescribeNetworkAttributeResponseBodyCloudResources cloudResources() { DARABONBA_PTR_GET(cloudResources_, DescribeNetworkAttributeResponseBodyCloudResources) };
    inline DescribeNetworkAttributeResponseBody& setCloudResources(const DescribeNetworkAttributeResponseBodyCloudResources & cloudResources) { DARABONBA_PTR_SET_VALUE(cloudResources_, cloudResources) };
    inline DescribeNetworkAttributeResponseBody& setCloudResources(DescribeNetworkAttributeResponseBodyCloudResources && cloudResources) { DARABONBA_PTR_SET_RVALUE(cloudResources_, cloudResources) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeNetworkAttributeResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworkAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworkAttributeResponseBody& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayRouteTableId Field Functions 
    bool hasGatewayRouteTableId() const { return this->gatewayRouteTableId_ != nullptr;};
    void deleteGatewayRouteTableId() { this->gatewayRouteTableId_ = nullptr;};
    inline string gatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteTableId_, "") };
    inline DescribeNetworkAttributeResponseBody& setGatewayRouteTableId(string gatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(gatewayRouteTableId_, gatewayRouteTableId) };


    // haVipIds Field Functions 
    bool hasHaVipIds() const { return this->haVipIds_ != nullptr;};
    void deleteHaVipIds() { this->haVipIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyHaVipIds & haVipIds() const { DARABONBA_PTR_GET_CONST(haVipIds_, DescribeNetworkAttributeResponseBodyHaVipIds) };
    inline DescribeNetworkAttributeResponseBodyHaVipIds haVipIds() { DARABONBA_PTR_GET(haVipIds_, DescribeNetworkAttributeResponseBodyHaVipIds) };
    inline DescribeNetworkAttributeResponseBody& setHaVipIds(const DescribeNetworkAttributeResponseBodyHaVipIds & haVipIds) { DARABONBA_PTR_SET_VALUE(haVipIds_, haVipIds) };
    inline DescribeNetworkAttributeResponseBody& setHaVipIds(DescribeNetworkAttributeResponseBodyHaVipIds && haVipIds) { DARABONBA_PTR_SET_RVALUE(haVipIds_, haVipIds) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyInstanceIds & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, DescribeNetworkAttributeResponseBodyInstanceIds) };
    inline DescribeNetworkAttributeResponseBodyInstanceIds instanceIds() { DARABONBA_PTR_GET(instanceIds_, DescribeNetworkAttributeResponseBodyInstanceIds) };
    inline DescribeNetworkAttributeResponseBody& setInstanceIds(const DescribeNetworkAttributeResponseBodyInstanceIds & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeNetworkAttributeResponseBody& setInstanceIds(DescribeNetworkAttributeResponseBodyInstanceIds && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // loadBalancerIds Field Functions 
    bool hasLoadBalancerIds() const { return this->loadBalancerIds_ != nullptr;};
    void deleteLoadBalancerIds() { this->loadBalancerIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyLoadBalancerIds & loadBalancerIds() const { DARABONBA_PTR_GET_CONST(loadBalancerIds_, DescribeNetworkAttributeResponseBodyLoadBalancerIds) };
    inline DescribeNetworkAttributeResponseBodyLoadBalancerIds loadBalancerIds() { DARABONBA_PTR_GET(loadBalancerIds_, DescribeNetworkAttributeResponseBodyLoadBalancerIds) };
    inline DescribeNetworkAttributeResponseBody& setLoadBalancerIds(const DescribeNetworkAttributeResponseBodyLoadBalancerIds & loadBalancerIds) { DARABONBA_PTR_SET_VALUE(loadBalancerIds_, loadBalancerIds) };
    inline DescribeNetworkAttributeResponseBody& setLoadBalancerIds(DescribeNetworkAttributeResponseBodyLoadBalancerIds && loadBalancerIds) { DARABONBA_PTR_SET_RVALUE(loadBalancerIds_, loadBalancerIds) };


    // natGatewayIds Field Functions 
    bool hasNatGatewayIds() const { return this->natGatewayIds_ != nullptr;};
    void deleteNatGatewayIds() { this->natGatewayIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyNatGatewayIds & natGatewayIds() const { DARABONBA_PTR_GET_CONST(natGatewayIds_, DescribeNetworkAttributeResponseBodyNatGatewayIds) };
    inline DescribeNetworkAttributeResponseBodyNatGatewayIds natGatewayIds() { DARABONBA_PTR_GET(natGatewayIds_, DescribeNetworkAttributeResponseBodyNatGatewayIds) };
    inline DescribeNetworkAttributeResponseBody& setNatGatewayIds(const DescribeNetworkAttributeResponseBodyNatGatewayIds & natGatewayIds) { DARABONBA_PTR_SET_VALUE(natGatewayIds_, natGatewayIds) };
    inline DescribeNetworkAttributeResponseBody& setNatGatewayIds(DescribeNetworkAttributeResponseBodyNatGatewayIds && natGatewayIds) { DARABONBA_PTR_SET_RVALUE(natGatewayIds_, natGatewayIds) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworkAttributeResponseBody& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworkAttributeResponseBody& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyNetworkInterfaceIds & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, DescribeNetworkAttributeResponseBodyNetworkInterfaceIds) };
    inline DescribeNetworkAttributeResponseBodyNetworkInterfaceIds networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, DescribeNetworkAttributeResponseBodyNetworkInterfaceIds) };
    inline DescribeNetworkAttributeResponseBody& setNetworkInterfaceIds(const DescribeNetworkAttributeResponseBodyNetworkInterfaceIds & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline DescribeNetworkAttributeResponseBody& setNetworkInterfaceIds(DescribeNetworkAttributeResponseBodyNetworkInterfaceIds && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string networkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline DescribeNetworkAttributeResponseBody& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeNetworkAttributeResponseBody& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableIds Field Functions 
    bool hasRouteTableIds() const { return this->routeTableIds_ != nullptr;};
    void deleteRouteTableIds() { this->routeTableIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyRouteTableIds & routeTableIds() const { DARABONBA_PTR_GET_CONST(routeTableIds_, DescribeNetworkAttributeResponseBodyRouteTableIds) };
    inline DescribeNetworkAttributeResponseBodyRouteTableIds routeTableIds() { DARABONBA_PTR_GET(routeTableIds_, DescribeNetworkAttributeResponseBodyRouteTableIds) };
    inline DescribeNetworkAttributeResponseBody& setRouteTableIds(const DescribeNetworkAttributeResponseBodyRouteTableIds & routeTableIds) { DARABONBA_PTR_SET_VALUE(routeTableIds_, routeTableIds) };
    inline DescribeNetworkAttributeResponseBody& setRouteTableIds(DescribeNetworkAttributeResponseBodyRouteTableIds && routeTableIds) { DARABONBA_PTR_SET_RVALUE(routeTableIds_, routeTableIds) };


    // routerTableId Field Functions 
    bool hasRouterTableId() const { return this->routerTableId_ != nullptr;};
    void deleteRouterTableId() { this->routerTableId_ = nullptr;};
    inline string routerTableId() const { DARABONBA_PTR_GET_DEFAULT(routerTableId_, "") };
    inline DescribeNetworkAttributeResponseBody& setRouterTableId(string routerTableId) { DARABONBA_PTR_SET_VALUE(routerTableId_, routerTableId) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodySecondaryCidrBlocks & secondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, DescribeNetworkAttributeResponseBodySecondaryCidrBlocks) };
    inline DescribeNetworkAttributeResponseBodySecondaryCidrBlocks secondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, DescribeNetworkAttributeResponseBodySecondaryCidrBlocks) };
    inline DescribeNetworkAttributeResponseBody& setSecondaryCidrBlocks(const DescribeNetworkAttributeResponseBodySecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeNetworkAttributeResponseBody& setSecondaryCidrBlocks(DescribeNetworkAttributeResponseBodySecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworkAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const DescribeNetworkAttributeResponseBodyVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, DescribeNetworkAttributeResponseBodyVSwitchIds) };
    inline DescribeNetworkAttributeResponseBodyVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, DescribeNetworkAttributeResponseBodyVSwitchIds) };
    inline DescribeNetworkAttributeResponseBody& setVSwitchIds(const DescribeNetworkAttributeResponseBodyVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeNetworkAttributeResponseBody& setVSwitchIds(DescribeNetworkAttributeResponseBodyVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The IPv4 CIDR block of the network.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The list of resources in the network.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyCloudResources> cloudResources_ = nullptr;
    // The time when the network was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the network.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the gateway route table.
    std::shared_ptr<string> gatewayRouteTableId_ = nullptr;
    // List of HaVipIds.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyHaVipIds> haVipIds_ = nullptr;
    // The instance IDs.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyInstanceIds> instanceIds_ = nullptr;
    // List of ELB instances.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyLoadBalancerIds> loadBalancerIds_ = nullptr;
    // List of NAT Gateways.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyNatGatewayIds> natGatewayIds_ = nullptr;
    // The ID of the network access control list (ACL).
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // A list of multicast source IDs.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyNetworkInterfaceIds> networkInterfaceIds_ = nullptr;
    // The name of the network.
    std::shared_ptr<string> networkName_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // List of routing table IDs.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyRouteTableIds> routeTableIds_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routerTableId_ = nullptr;
    std::shared_ptr<DescribeNetworkAttributeResponseBodySecondaryCidrBlocks> secondaryCidrBlocks_ = nullptr;
    // The status of the network. Valid values:
    // 
    // *   Pending
    // *   Available
    std::shared_ptr<string> status_ = nullptr;
    // The list of vSwitches in the network.
    std::shared_ptr<DescribeNetworkAttributeResponseBodyVSwitchIds> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
