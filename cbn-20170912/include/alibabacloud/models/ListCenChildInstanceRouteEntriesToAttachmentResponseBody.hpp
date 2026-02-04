// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCENCHILDINSTANCEROUTEENTRIESTOATTACHMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenChildInstanceRouteEntriesToAttachmentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenChildInstanceRouteEntriesToAttachmentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntry, routeEntry_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenChildInstanceRouteEntriesToAttachmentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntry, routeEntry_);
    };
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody(const ListCenChildInstanceRouteEntriesToAttachmentResponseBody &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody(ListCenChildInstanceRouteEntriesToAttachmentResponseBody &&) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenChildInstanceRouteEntriesToAttachmentResponseBody() = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody& operator=(const ListCenChildInstanceRouteEntriesToAttachmentResponseBody &) = default ;
    ListCenChildInstanceRouteEntriesToAttachmentResponseBody& operator=(ListCenChildInstanceRouteEntriesToAttachmentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntry : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntry& obj) { 
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntry& obj) { 
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      };
      RouteEntry() = default ;
      RouteEntry(const RouteEntry &) = default ;
      RouteEntry(RouteEntry &&) = default ;
      RouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntry() = default ;
      RouteEntry& operator=(const RouteEntry &) = default ;
      RouteEntry& operator=(RouteEntry &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cenId_ == nullptr
        && this->childInstanceRouteTableId_ == nullptr && this->destinationCidrBlock_ == nullptr && this->serviceType_ == nullptr && this->status_ == nullptr && this->transitRouterAttachmentId_ == nullptr; };
      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline RouteEntry& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // childInstanceRouteTableId Field Functions 
      bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
      void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
      inline string getChildInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
      inline RouteEntry& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline RouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline RouteEntry& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline RouteEntry& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    protected:
      // The ID of the CEN instance.
      shared_ptr<string> cenId_ {};
      // The ID of the route table configured on the network instance.
      shared_ptr<string> childInstanceRouteTableId_ {};
      // The destination CIDR block of the route.
      shared_ptr<string> destinationCidrBlock_ {};
      // Indicates whether the route is hosted. If the parameter is empty, the route is not hosted. A value of TR indicates that the route is hosted on a transit router.
      shared_ptr<string> serviceType_ {};
      // The status of the route. Valid values:
      // 
      // *   **Available**: The route is available.
      // *   **Pending**: The route is being configured.
      // *   **Modifying**: the route is being modified.
      shared_ptr<string> status_ {};
      // The ID of the network instance connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->routeEntry_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntry Field Functions 
    bool hasRouteEntry() const { return this->routeEntry_ != nullptr;};
    void deleteRouteEntry() { this->routeEntry_ = nullptr;};
    inline const vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry> & getRouteEntry() const { DARABONBA_PTR_GET_CONST(routeEntry_, vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry>) };
    inline vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry> getRouteEntry() { DARABONBA_PTR_GET(routeEntry_, vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry>) };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setRouteEntry(const vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry> & routeEntry) { DARABONBA_PTR_SET_VALUE(routeEntry_, routeEntry) };
    inline ListCenChildInstanceRouteEntriesToAttachmentResponseBody& setRouteEntry(vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry> && routeEntry) { DARABONBA_PTR_SET_RVALUE(routeEntry_, routeEntry) };


  protected:
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** is not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region.
    shared_ptr<string> requestId_ {};
    // The detailed information about the route.
    shared_ptr<vector<ListCenChildInstanceRouteEntriesToAttachmentResponseBody::RouteEntry>> routeEntry_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
