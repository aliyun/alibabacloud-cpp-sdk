// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENROUTEMAPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenRouteMapsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRouteMapsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenRegionId, cenRegionId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_TO_JSON(TransmitDirection, transmitDirection_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRouteMapsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenRegionId, cenRegionId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
      DARABONBA_PTR_FROM_JSON(TransmitDirection, transmitDirection_);
    };
    DescribeCenRouteMapsRequest() = default ;
    DescribeCenRouteMapsRequest(const DescribeCenRouteMapsRequest &) = default ;
    DescribeCenRouteMapsRequest(DescribeCenRouteMapsRequest &&) = default ;
    DescribeCenRouteMapsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRouteMapsRequest() = default ;
    DescribeCenRouteMapsRequest& operator=(const DescribeCenRouteMapsRequest &) = default ;
    DescribeCenRouteMapsRequest& operator=(DescribeCenRouteMapsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->cenRegionId_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeMapId_ != nullptr && this->transitRouterRouteTableId_ != nullptr && this->transmitDirection_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenRouteMapsRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenRegionId Field Functions 
    bool hasCenRegionId() const { return this->cenRegionId_ != nullptr;};
    void deleteCenRegionId() { this->cenRegionId_ = nullptr;};
    inline string cenRegionId() const { DARABONBA_PTR_GET_DEFAULT(cenRegionId_, "") };
    inline DescribeCenRouteMapsRequest& setCenRegionId(string cenRegionId) { DARABONBA_PTR_SET_VALUE(cenRegionId_, cenRegionId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeCenRouteMapsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeCenRouteMapsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenRouteMapsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenRouteMapsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeCenRouteMapsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCenRouteMapsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeMapId Field Functions 
    bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
    void deleteRouteMapId() { this->routeMapId_ = nullptr;};
    inline string routeMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
    inline DescribeCenRouteMapsRequest& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline DescribeCenRouteMapsRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


    // transmitDirection Field Functions 
    bool hasTransmitDirection() const { return this->transmitDirection_ != nullptr;};
    void deleteTransmitDirection() { this->transmitDirection_ = nullptr;};
    inline string transmitDirection() const { DARABONBA_PTR_GET_DEFAULT(transmitDirection_, "") };
    inline DescribeCenRouteMapsRequest& setTransmitDirection(string transmitDirection) { DARABONBA_PTR_SET_VALUE(transmitDirection_, transmitDirection) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> cenId_ = nullptr;
    // The region ID of the routing policy.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    std::shared_ptr<string> cenRegionId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The routing policy ID.
    std::shared_ptr<string> routeMapId_ = nullptr;
    // The route table ID of the transit router with which the routing policy is associated.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
    // The direction in which the routing policy is applied. Valid values:
    // 
    // *   **RegionIn**: Routes are advertised to the gateways in the regions that are connected by the CEN instance.
    // 
    // For example, routes are advertised from network instances deployed in the current region or other regions to the gateway deployed in the current region.
    // 
    // *   **RegionOut**: Routes are advertised from the gateways in the regions that are connected by the CEN instance.
    // 
    // For example, routes are advertised from the gateway deployed in the current region to network instances deployed in the current region, or to gateways deployed in other regions.
    std::shared_ptr<string> transmitDirection_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
