// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKSNETWORK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKSRESPONSEBODYNETWORKSNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworksResponseBodyNetworksNetworkRouteTableIds.hpp>
#include <alibabacloud/models/DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks.hpp>
#include <alibabacloud/models/DescribeNetworksResponseBodyNetworksNetworkTags.hpp>
#include <alibabacloud/models/DescribeNetworksResponseBodyNetworksNetworkVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeNetworksResponseBodyNetworksNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworksResponseBodyNetworksNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkName, networkName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_TO_JSON(RouterTableId, routerTableId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworksResponseBodyNetworksNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkName, networkName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(RouteTableIds, routeTableIds_);
      DARABONBA_PTR_FROM_JSON(RouterTableId, routerTableId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlocks, secondaryCidrBlocks_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    DescribeNetworksResponseBodyNetworksNetwork() = default ;
    DescribeNetworksResponseBodyNetworksNetwork(const DescribeNetworksResponseBodyNetworksNetwork &) = default ;
    DescribeNetworksResponseBodyNetworksNetwork(DescribeNetworksResponseBodyNetworksNetwork &&) = default ;
    DescribeNetworksResponseBodyNetworksNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworksResponseBodyNetworksNetwork() = default ;
    DescribeNetworksResponseBodyNetworksNetwork& operator=(const DescribeNetworksResponseBodyNetworksNetwork &) = default ;
    DescribeNetworksResponseBodyNetworksNetwork& operator=(DescribeNetworksResponseBodyNetworksNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && return this->createdTime_ == nullptr && return this->description_ == nullptr && return this->ensRegionId_ == nullptr && return this->gatewayRouteTableId_ == nullptr && return this->networkAclId_ == nullptr
        && return this->networkId_ == nullptr && return this->networkName_ == nullptr && return this->routeTableId_ == nullptr && return this->routeTableIds_ == nullptr && return this->routerTableId_ == nullptr
        && return this->secondaryCidrBlocks_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->vSwitchIds_ == nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // gatewayRouteTableId Field Functions 
    bool hasGatewayRouteTableId() const { return this->gatewayRouteTableId_ != nullptr;};
    void deleteGatewayRouteTableId() { this->gatewayRouteTableId_ = nullptr;};
    inline string gatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteTableId_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setGatewayRouteTableId(string gatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(gatewayRouteTableId_, gatewayRouteTableId) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string networkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // routeTableIds Field Functions 
    bool hasRouteTableIds() const { return this->routeTableIds_ != nullptr;};
    void deleteRouteTableIds() { this->routeTableIds_ = nullptr;};
    inline const Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds & routeTableIds() const { DARABONBA_PTR_GET_CONST(routeTableIds_, Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds) };
    inline Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds routeTableIds() { DARABONBA_PTR_GET(routeTableIds_, Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setRouteTableIds(const Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds & routeTableIds) { DARABONBA_PTR_SET_VALUE(routeTableIds_, routeTableIds) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setRouteTableIds(Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds && routeTableIds) { DARABONBA_PTR_SET_RVALUE(routeTableIds_, routeTableIds) };


    // routerTableId Field Functions 
    bool hasRouterTableId() const { return this->routerTableId_ != nullptr;};
    void deleteRouterTableId() { this->routerTableId_ = nullptr;};
    inline string routerTableId() const { DARABONBA_PTR_GET_DEFAULT(routerTableId_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setRouterTableId(string routerTableId) { DARABONBA_PTR_SET_VALUE(routerTableId_, routerTableId) };


    // secondaryCidrBlocks Field Functions 
    bool hasSecondaryCidrBlocks() const { return this->secondaryCidrBlocks_ != nullptr;};
    void deleteSecondaryCidrBlocks() { this->secondaryCidrBlocks_ = nullptr;};
    inline const Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks & secondaryCidrBlocks() const { DARABONBA_PTR_GET_CONST(secondaryCidrBlocks_, Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks) };
    inline Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks secondaryCidrBlocks() { DARABONBA_PTR_GET(secondaryCidrBlocks_, Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setSecondaryCidrBlocks(const Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks & secondaryCidrBlocks) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setSecondaryCidrBlocks(Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks && secondaryCidrBlocks) { DARABONBA_PTR_SET_RVALUE(secondaryCidrBlocks_, secondaryCidrBlocks) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeNetworksResponseBodyNetworksNetwork& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeNetworksResponseBodyNetworksNetworkTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeNetworksResponseBodyNetworksNetworkTags) };
    inline Models::DescribeNetworksResponseBodyNetworksNetworkTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeNetworksResponseBodyNetworksNetworkTags) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setTags(const Models::DescribeNetworksResponseBodyNetworksNetworkTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setTags(Models::DescribeNetworksResponseBodyNetworksNetworkTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds) };
    inline Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setVSwitchIds(const Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeNetworksResponseBodyNetworksNetwork& setVSwitchIds(Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The IPv4 CIDR block of the network.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The timestamp when the instance was created. Unit: milliseconds.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the network.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the gateway route table.
    std::shared_ptr<string> gatewayRouteTableId_ = nullptr;
    // The ID of the network access control list (ACL).
    std::shared_ptr<string> networkAclId_ = nullptr;
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // The name of the network.
    std::shared_ptr<string> networkName_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The IDs of the route tables.
    std::shared_ptr<Models::DescribeNetworksResponseBodyNetworksNetworkRouteTableIds> routeTableIds_ = nullptr;
    // The route table ID.
    std::shared_ptr<string> routerTableId_ = nullptr;
    std::shared_ptr<Models::DescribeNetworksResponseBodyNetworksNetworkSecondaryCidrBlocks> secondaryCidrBlocks_ = nullptr;
    // The status of the network. Valid values:
    // 
    // *   Pending
    // *   Available
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeNetworksResponseBodyNetworksNetworkTags> tags_ = nullptr;
    // The list of vSwitches in the network.
    std::shared_ptr<Models::DescribeNetworksResponseBodyNetworksNetworkVSwitchIds> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
