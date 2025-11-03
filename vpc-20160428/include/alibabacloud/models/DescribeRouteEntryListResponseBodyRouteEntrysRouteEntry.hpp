// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYSROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYSROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry(const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry(DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry &&) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& operator=(const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& operator=(DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->destinationCidrBlock_ == nullptr && return this->gmtModified_ == nullptr && return this->ipVersion_ == nullptr && return this->nextHops_ == nullptr && return this->origin_ == nullptr
        && return this->routeEntryId_ == nullptr && return this->routeEntryName_ == nullptr && return this->routeTableId_ == nullptr && return this->serviceType_ == nullptr && return this->status_ == nullptr
        && return this->type_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // nextHops Field Functions 
    bool hasNextHops() const { return this->nextHops_ != nullptr;};
    void deleteNextHops() { this->nextHops_ = nullptr;};
    inline const Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops & nextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops) };
    inline Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops nextHops() { DARABONBA_PTR_GET(nextHops_, Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setNextHops(const Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setNextHops(Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string routeEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string routeEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The description of the route.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The time when the route was modified. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The IP version. Valid values: Valid values:
    // 
    // *   **ipv4**
    // *   **ipv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The information about the next hops.
    std::shared_ptr<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHops> nextHops_ = nullptr;
    // The route origin. Valid values:
    // * **RoutePropagation**: The route is created by a dynamic propagation source.
    // * **SystemCreate**: The route is created by the system.
    // * **CustomCreate**: The route is created by a user.
    std::shared_ptr<string> origin_ = nullptr;
    // The ID of the route.
    std::shared_ptr<string> routeEntryId_ = nullptr;
    // The name of the route.
    std::shared_ptr<string> routeEntryName_ = nullptr;
    // The ID of the route table.
    std::shared_ptr<string> routeTableId_ = nullptr;
    // Indicates whether the route is hosted. If the parameter is empty, the route is not hosted.
    // 
    // If **TR** is returned, the route is hosted by a transit router.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The status of the route entry. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Modifying**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **Custom**: custom routes.
    // *   **System**: system routes.
    // *   **BGP**: BGP routes.
    // *   **CEN**: CEN routes.
    // *   **ECR**: ECR routes.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
