// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIESPUBLISHEDROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIESPUBLISHEDROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_TO_JSON(Conflicts, conflicts_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OperationalMode, operationalMode_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(RouteType, routeType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_FROM_JSON(Conflicts, conflicts_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OperationalMode, operationalMode_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
    };
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry &&) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& operator=(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& operator=(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->childInstanceRouteTableId_ != nullptr
        && this->conflicts_ != nullptr && this->destinationCidrBlock_ != nullptr && this->nextHopId_ != nullptr && this->nextHopType_ != nullptr && this->operationalMode_ != nullptr
        && this->publishStatus_ != nullptr && this->routeType_ != nullptr; };
    // childInstanceRouteTableId Field Functions 
    bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
    void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
    inline string childInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


    // conflicts Field Functions 
    bool hasConflicts() const { return this->conflicts_ != nullptr;};
    void deleteConflicts() { this->conflicts_ = nullptr;};
    inline const Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts & conflicts() const { DARABONBA_PTR_GET_CONST(conflicts_, Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts) };
    inline Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts conflicts() { DARABONBA_PTR_GET(conflicts_, Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setConflicts(const Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts & conflicts) { DARABONBA_PTR_SET_VALUE(conflicts_, conflicts) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setConflicts(Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts && conflicts) { DARABONBA_PTR_SET_RVALUE(conflicts_, conflicts) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // operationalMode Field Functions 
    bool hasOperationalMode() const { return this->operationalMode_ != nullptr;};
    void deleteOperationalMode() { this->operationalMode_ = nullptr;};
    inline bool operationalMode() const { DARABONBA_PTR_GET_DEFAULT(operationalMode_, false) };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setOperationalMode(bool operationalMode) { DARABONBA_PTR_SET_VALUE(operationalMode_, operationalMode) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // routeType Field Functions 
    bool hasRouteType() const { return this->routeType_ != nullptr;};
    void deleteRouteType() { this->routeType_ = nullptr;};
    inline string routeType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntry& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


  protected:
    // The ID of the route table configured on the network instance.
    std::shared_ptr<string> childInstanceRouteTableId_ = nullptr;
    // A list of conflicting routes.
    std::shared_ptr<Models::DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflicts> conflicts_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the instance specified as the next hop in the route.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The type of the instance specified as the next hop in the route.
    // 
    // *   **Instance**: ECS instance
    // *   **HaVip**: high-availability virtual IP address (HAVIP).
    // *   **RouterInterface**: router interface.
    // *   **NetworkInterface**: elastic network interface (ENI).
    // *   **VpnGateway**: VPN gateway.
    // *   **IPv6Gateway**: IPv6 gateway.
    // *   **NatGateway**: NAT gateway.
    // *   **Attachment**: network instance connection
    // *   **service**: cloud service
    // *   **VBR**: VBR
    // *   **CCN**: CCN instance
    // *   **VPC**: VPC
    // *   **local**: system route. No next hop is specified.
    // *   **TR**: transit router
    // *   **BlackHole**: blackhole route. No next hop is specified.
    // *   **EcRouterInterface**: router interface for Express Connect
    // *   **HealthCheck**: health check
    // *   **AS**: access gateway for CCN
    // *   **classicLink**: classic network-type instance
    // *   **GatewayEndpoint**: gateway endpoint
    // *   **CPE**: data center connected to the VBR
    std::shared_ptr<string> nextHopType_ = nullptr;
    // Indicates whether the route is allowed to be advertised to or withdrawn from the CEN instance. Valid values:
    // 
    // *   **true**: The route is allowed to be advertised to or withdrawn from the CEN instance.
    // *   **false**: The route is not allowed to be advertised to or withdrawn from the CEN instance.
    std::shared_ptr<bool> operationalMode_ = nullptr;
    // Indicates whether the route is advertised to the CEN instance. Valid values:
    // 
    // *   **Published**: The route is advertised to the CEN instance.
    // *   **NonPublished**: The route is not advertised to the CEN instance.
    std::shared_ptr<string> publishStatus_ = nullptr;
    // The type of the route. Valid values:
    // 
    // *   **CEN**: route that is advertised through CEN
    // *   **System**: system route
    // *   **Custom**: custom route
    std::shared_ptr<string> routeType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
