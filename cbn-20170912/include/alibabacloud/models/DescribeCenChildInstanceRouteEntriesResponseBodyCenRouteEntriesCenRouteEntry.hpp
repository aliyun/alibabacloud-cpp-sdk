// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODYCENROUTEENTRIESCENROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths.hpp>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords.hpp>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities.hpp>
#include <alibabacloud/models/DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AsPaths, asPaths_);
      DARABONBA_PTR_TO_JSON(CenRouteMapRecords, cenRouteMapRecords_);
      DARABONBA_PTR_TO_JSON(Communities, communities_);
      DARABONBA_PTR_TO_JSON(Conflicts, conflicts_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_TO_JSON(NextHopRegionId, nextHopRegionId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OperationalMode, operationalMode_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPaths, asPaths_);
      DARABONBA_PTR_FROM_JSON(CenRouteMapRecords, cenRouteMapRecords_);
      DARABONBA_PTR_FROM_JSON(Communities, communities_);
      DARABONBA_PTR_FROM_JSON(Conflicts, conflicts_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
      DARABONBA_PTR_FROM_JSON(NextHopRegionId, nextHopRegionId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OperationalMode, operationalMode_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& operator=(const DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& operator=(DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPaths_ != nullptr
        && this->cenRouteMapRecords_ != nullptr && this->communities_ != nullptr && this->conflicts_ != nullptr && this->destinationCidrBlock_ != nullptr && this->nextHopInstanceId_ != nullptr
        && this->nextHopRegionId_ != nullptr && this->nextHopType_ != nullptr && this->operationalMode_ != nullptr && this->publishStatus_ != nullptr && this->routeTableId_ != nullptr
        && this->status_ != nullptr && this->type_ != nullptr; };
    // asPaths Field Functions 
    bool hasAsPaths() const { return this->asPaths_ != nullptr;};
    void deleteAsPaths() { this->asPaths_ = nullptr;};
    inline const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths & asPaths() const { DARABONBA_PTR_GET_CONST(asPaths_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths) };
    inline Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths asPaths() { DARABONBA_PTR_GET(asPaths_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setAsPaths(const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths & asPaths) { DARABONBA_PTR_SET_VALUE(asPaths_, asPaths) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setAsPaths(Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths && asPaths) { DARABONBA_PTR_SET_RVALUE(asPaths_, asPaths) };


    // cenRouteMapRecords Field Functions 
    bool hasCenRouteMapRecords() const { return this->cenRouteMapRecords_ != nullptr;};
    void deleteCenRouteMapRecords() { this->cenRouteMapRecords_ = nullptr;};
    inline const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords & cenRouteMapRecords() const { DARABONBA_PTR_GET_CONST(cenRouteMapRecords_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords) };
    inline Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords cenRouteMapRecords() { DARABONBA_PTR_GET(cenRouteMapRecords_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCenRouteMapRecords(const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords & cenRouteMapRecords) { DARABONBA_PTR_SET_VALUE(cenRouteMapRecords_, cenRouteMapRecords) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCenRouteMapRecords(Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords && cenRouteMapRecords) { DARABONBA_PTR_SET_RVALUE(cenRouteMapRecords_, cenRouteMapRecords) };


    // communities Field Functions 
    bool hasCommunities() const { return this->communities_ != nullptr;};
    void deleteCommunities() { this->communities_ = nullptr;};
    inline const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities & communities() const { DARABONBA_PTR_GET_CONST(communities_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities) };
    inline Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities communities() { DARABONBA_PTR_GET(communities_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCommunities(const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities & communities) { DARABONBA_PTR_SET_VALUE(communities_, communities) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setCommunities(Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities && communities) { DARABONBA_PTR_SET_RVALUE(communities_, communities) };


    // conflicts Field Functions 
    bool hasConflicts() const { return this->conflicts_ != nullptr;};
    void deleteConflicts() { this->conflicts_ = nullptr;};
    inline const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts & conflicts() const { DARABONBA_PTR_GET_CONST(conflicts_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts) };
    inline Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts conflicts() { DARABONBA_PTR_GET(conflicts_, Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setConflicts(const Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts & conflicts) { DARABONBA_PTR_SET_VALUE(conflicts_, conflicts) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setConflicts(Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts && conflicts) { DARABONBA_PTR_SET_RVALUE(conflicts_, conflicts) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // nextHopInstanceId Field Functions 
    bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
    void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
    inline string nextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


    // nextHopRegionId Field Functions 
    bool hasNextHopRegionId() const { return this->nextHopRegionId_ != nullptr;};
    void deleteNextHopRegionId() { this->nextHopRegionId_ = nullptr;};
    inline string nextHopRegionId() const { DARABONBA_PTR_GET_DEFAULT(nextHopRegionId_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setNextHopRegionId(string nextHopRegionId) { DARABONBA_PTR_SET_VALUE(nextHopRegionId_, nextHopRegionId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // operationalMode Field Functions 
    bool hasOperationalMode() const { return this->operationalMode_ != nullptr;};
    void deleteOperationalMode() { this->operationalMode_ = nullptr;};
    inline bool operationalMode() const { DARABONBA_PTR_GET_DEFAULT(operationalMode_, false) };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setOperationalMode(bool operationalMode) { DARABONBA_PTR_SET_VALUE(operationalMode_, operationalMode) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline string publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The AS paths of the routes.
    std::shared_ptr<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryAsPaths> asPaths_ = nullptr;
    // The routing policy that the routes match.
    std::shared_ptr<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCenRouteMapRecords> cenRouteMapRecords_ = nullptr;
    // The community attributes of the route entries.
    std::shared_ptr<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryCommunities> communities_ = nullptr;
    // A list of overlapping routes.
    std::shared_ptr<Models::DescribeCenChildInstanceRouteEntriesResponseBodyCenRouteEntriesCenRouteEntryConflicts> conflicts_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the instance specified as the next hop in the route.
    std::shared_ptr<string> nextHopInstanceId_ = nullptr;
    // The region ID of the instance specified as the next hop in the route.
    std::shared_ptr<string> nextHopRegionId_ = nullptr;
    // The type of the instance specified as the next hop in the route. Valid values:
    // 
    // *   **Instance**: an ECS instance
    // *   **HaVip**: an HAVIP
    // *   **RouterInterface**: a router interface
    // *   **NetworkInterface**: an ENI
    // *   **VpnGateway**: a VPN gateway
    // *   **IPv6Gateway**: an IPv6 gateway
    // *   **Ipv4Gateway**: an IPv4 gateway
    // *   **NatGateway**: a NAT gateway
    // *   **Attachment**: a network instance connection
    // *   **service**: a cloud service
    // *   **VBR**: a VBR
    // *   **CCN**: a CCN instance
    // *   **VPC**: a VPC
    // *   **local**: a system route (no next hop is specified)
    // *   **TR**: a transit router
    // *   **BlackHole**: a blackhole route (no next hop is specified)
    // *   **EcRouterInterface**: a router interface for Express Connect
    // *   **HealthCheck**: a health check
    // *   **AS**: an access gateway for CCN
    // *   **classic**: a classic network-type instance
    // *   **GatewayEndpoint**: a gateway endpoint
    // *   **CPE**: a data center connected to a VBR
    std::shared_ptr<string> nextHopType_ = nullptr;
    // Indicates whether the route is allowed to be advertised to or withdrawn from the CEN instance. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> operationalMode_ = nullptr;
    // Indicates whether the route is advertised to the CEN instance. Valid values:
    // 
    // *   **Published**
    // *   **NonPublished**
    std::shared_ptr<string> publishStatus_ = nullptr;
    // The route table ID.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // The route status. Valid values:
    // 
    // *   **Active**: available routes
    // *   **Candidate**: standby routes
    // *   **Rejected**: rejected routes
    // *   **Prohibited**: prohibited routes
    std::shared_ptr<string> status_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **CEN**: route that is advertised through CEN
    // *   **System**: system route
    // *   **Custom**: custom route
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
