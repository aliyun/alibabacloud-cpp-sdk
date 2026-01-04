// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DestCidrBlockList, destCidrBlockList_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DestCidrBlockList, destCidrBlockList_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(MaxResult, maxResult_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
    };
    DescribeRouteEntryListRequest() = default ;
    DescribeRouteEntryListRequest(const DescribeRouteEntryListRequest &) = default ;
    DescribeRouteEntryListRequest(DescribeRouteEntryListRequest &&) = default ;
    DescribeRouteEntryListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListRequest() = default ;
    DescribeRouteEntryListRequest& operator=(const DescribeRouteEntryListRequest &) = default ;
    DescribeRouteEntryListRequest& operator=(DescribeRouteEntryListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destCidrBlockList_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->ipVersion_ == nullptr && this->maxResult_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr
        && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routeEntryId_ == nullptr && this->routeEntryName_ == nullptr && this->routeEntryType_ == nullptr && this->routeTableId_ == nullptr
        && this->serviceType_ == nullptr; };
    // destCidrBlockList Field Functions 
    bool hasDestCidrBlockList() const { return this->destCidrBlockList_ != nullptr;};
    void deleteDestCidrBlockList() { this->destCidrBlockList_ = nullptr;};
    inline const vector<string> & getDestCidrBlockList() const { DARABONBA_PTR_GET_CONST(destCidrBlockList_, vector<string>) };
    inline vector<string> getDestCidrBlockList() { DARABONBA_PTR_GET(destCidrBlockList_, vector<string>) };
    inline DescribeRouteEntryListRequest& setDestCidrBlockList(const vector<string> & destCidrBlockList) { DARABONBA_PTR_SET_VALUE(destCidrBlockList_, destCidrBlockList) };
    inline DescribeRouteEntryListRequest& setDestCidrBlockList(vector<string> && destCidrBlockList) { DARABONBA_PTR_SET_RVALUE(destCidrBlockList_, destCidrBlockList) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribeRouteEntryListRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeRouteEntryListRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // maxResult Field Functions 
    bool hasMaxResult() const { return this->maxResult_ != nullptr;};
    void deleteMaxResult() { this->maxResult_ = nullptr;};
    inline int32_t getMaxResult() const { DARABONBA_PTR_GET_DEFAULT(maxResult_, 0) };
    inline DescribeRouteEntryListRequest& setMaxResult(int32_t maxResult) { DARABONBA_PTR_SET_VALUE(maxResult_, maxResult) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DescribeRouteEntryListRequest& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeRouteEntryListRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRouteEntryListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeRouteEntryListRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRouteEntryListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRouteEntryListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeRouteEntryListRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRouteEntryListRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeEntryId Field Functions 
    bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
    void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
    inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
    inline DescribeRouteEntryListRequest& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string getRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline DescribeRouteEntryListRequest& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeEntryType Field Functions 
    bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
    void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
    inline string getRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
    inline DescribeRouteEntryListRequest& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline DescribeRouteEntryListRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline DescribeRouteEntryListRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The destination CIDR blocks of the routes.
    shared_ptr<vector<string>> destCidrBlockList_ {};
    // The destination CIDR block of the route. IPv4 and IPv6 CIDR blocks are supported.
    shared_ptr<string> destinationCidrBlock_ {};
    // The IP version. Valid values:
    // 
    // *   **IPv4**
    // *   **IPv6**
    shared_ptr<string> ipVersion_ {};
    // The number of entries per page. Valid values: **1** to **100**. Default value: **10**.
    shared_ptr<int32_t> maxResult_ {};
    // The ID of the next hop.
    shared_ptr<string> nextHopId_ {};
    // The next hop type. Valid values:
    // 
    // *   **Instance**: an Elastic Compute Service (ECS) instance. This is the default value.
    // *   **HaVip**: a high-availability virtual IP address (HaVip).
    // *   **VpnGateway**: a VPN gateway.
    // *   **NatGateway**: a NAT gateway.
    // *   **NetworkInterface**: a secondary elastic network interface (ENI).
    // *   **RouterInterface**: a router interface.
    // *   **IPv6Gateway**: an IPv6 gateway.
    // *   **Attachment**: a transit router.
    // *   **Ipv4Gateway**: an IPv4 gateway.
    // *   **GatewayEndpoint**: a gateway endpoint.
    // *   **CenBasic**: CEN does not support transit routers.
    // *   **Ecr**: Express Connect Router (ECR).
    shared_ptr<string> nextHopType_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the route table.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the route that you want to query.
    shared_ptr<string> routeEntryId_ {};
    // The name of the route entry.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> routeEntryName_ {};
    // The route type. Valid values:
    // 
    // *   **Custom**: custom routes.
    // *   **System**: system routes.
    // *   **BGP**: BGP routes.
    // *   **CEN**: Cloud Enterprise Network (CEN) routes.
    // *   **ECR**: Express Connect Router (ECR) routes.
    shared_ptr<string> routeEntryType_ {};
    // The ID of the route table that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> routeTableId_ {};
    // Specifies whether to host the route. If the parameter is empty, the route is not hosted.
    // 
    // Set the value to **TR**, which specifies that the route is hosted by a transit router.
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
