// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYSROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODYROUTETABLESROUTETABLEROUTEENTRYSROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &&) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry() = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& operator=(const DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &) = default ;
    DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& operator=(DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->instanceId_ == nullptr && return this->nextHopType_ == nullptr && return this->nextHops_ == nullptr && return this->routeEntryId_ == nullptr
        && return this->routeEntryName_ == nullptr && return this->routeTableId_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // nextHops Field Functions 
    bool hasNextHops() const { return this->nextHops_ != nullptr;};
    void deleteNextHops() { this->nextHops_ = nullptr;};
    inline const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops & nextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops) };
    inline Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops nextHops() { DARABONBA_PTR_GET(nextHops_, Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setNextHops(const Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setNextHops(Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string routeEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the route. The description must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block of the route. The destination CIDR block supports IPv4 and IPv6. Make sure that the destination CIDR block meets the following requirements:
    // 
    // *   The destination CIDR block is not 100.64.0.0/10 or a subset of 100.64.0.0/10.
    // *   The destination CIDR block of each route in the route table is unique.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the instance associated with the next hop.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **Instance** (default): an Elastic Compute Service (ECS) instance
    // *   **HaVip**: a high-availability virtual IP address (HaVip).
    // *   **VpnGateway**: a VPN gateway
    // *   **NatGateway**: a NAT gateway
    // *   **NetworkInterface**: a secondary elastic network interface (ENI)
    // *   **RouterInterface**: a router interface
    // *   **IPv6Gateway**: an IPv6 gateway
    // *   **Attachment**: a transit router
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The information about the next hop.
    std::shared_ptr<Models::DescribeRouteTablesResponseBodyRouteTablesRouteTableRouteEntrysRouteEntryNextHops> nextHops_ = nullptr;
    // The ID of the route.
    std::shared_ptr<string> routeEntryId_ = nullptr;
    // The route name.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    std::shared_ptr<string> routeEntryName_ = nullptr;
    // The route table ID.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The route status. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **Custom**
    // *   **System**
    // *   **BGP**
    // *   **CEN**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
