// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenChildInstanceRouteEntriesToAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenChildInstanceRouteEntriesToAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteFilter, routeFilter_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenChildInstanceRouteEntriesToAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteFilter, routeFilter_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    ListCenChildInstanceRouteEntriesToAttachmentRequest() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequest(const ListCenChildInstanceRouteEntriesToAttachmentRequest &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequest(ListCenChildInstanceRouteEntriesToAttachmentRequest &&) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenChildInstanceRouteEntriesToAttachmentRequest() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequest& operator=(const ListCenChildInstanceRouteEntriesToAttachmentRequest &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentRequest& operator=(ListCenChildInstanceRouteEntriesToAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->childInstanceRouteTableId_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->routeFilter_ != nullptr && this->serviceType_ != nullptr && this->transitRouterAttachmentId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // childInstanceRouteTableId Field Functions 
    bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
    void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
    inline string childInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeFilter Field Functions 
    bool hasRouteFilter() const { return this->routeFilter_ != nullptr;};
    void deleteRouteFilter() { this->routeFilter_ = nullptr;};
    inline const vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter> & routeFilter() const { DARABONBA_PTR_GET_CONST(routeFilter_, vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter>) };
    inline vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter> routeFilter() { DARABONBA_PTR_GET(routeFilter_, vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter>) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setRouteFilter(const vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter> & routeFilter) { DARABONBA_PTR_SET_VALUE(routeFilter_, routeFilter) };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setRouteFilter(vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter> && routeFilter) { DARABONBA_PTR_SET_RVALUE(routeFilter_, routeFilter) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The ID of the route table configured on the network instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> childInstanceRouteTableId_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query and no subsequent queries are to be sent, ignore this parameter.
    // *   If a subsequent query is to be sent, set the parameter to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The filter condition for the destination CIDR block.
    std::shared_ptr<vector<ListCenChildInstanceRouteEntriesToAttachmentRequestRouteFilter>> routeFilter_ = nullptr;
    // Specifies whether to host the route. If you leave the parameter empty, the route is not hosted. A value of TR specifies that the route is hosted on a transit router.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The ID of the network instance connection.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
