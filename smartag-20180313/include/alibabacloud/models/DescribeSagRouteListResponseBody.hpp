// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGROUTELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGROUTELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class DescribeSagRouteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagRouteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagRouteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Routes, routes_);
    };
    DescribeSagRouteListResponseBody() = default ;
    DescribeSagRouteListResponseBody(const DescribeSagRouteListResponseBody &) = default ;
    DescribeSagRouteListResponseBody(DescribeSagRouteListResponseBody &&) = default ;
    DescribeSagRouteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagRouteListResponseBody() = default ;
    DescribeSagRouteListResponseBody& operator=(const DescribeSagRouteListResponseBody &) = default ;
    DescribeSagRouteListResponseBody& operator=(DescribeSagRouteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Routes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Routes& obj) { 
        DARABONBA_PTR_TO_JSON(ConflictCidrs, conflictCidrs_);
        DARABONBA_PTR_TO_JSON(Cost, cost_);
        DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
        DARABONBA_PTR_TO_JSON(PortName, portName_);
        DARABONBA_PTR_TO_JSON(RouteProtocol, routeProtocol_);
      };
      friend void from_json(const Darabonba::Json& j, Routes& obj) { 
        DARABONBA_PTR_FROM_JSON(ConflictCidrs, conflictCidrs_);
        DARABONBA_PTR_FROM_JSON(Cost, cost_);
        DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
        DARABONBA_PTR_FROM_JSON(PortName, portName_);
        DARABONBA_PTR_FROM_JSON(RouteProtocol, routeProtocol_);
      };
      Routes() = default ;
      Routes(const Routes &) = default ;
      Routes(Routes &&) = default ;
      Routes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Routes() = default ;
      Routes& operator=(const Routes &) = default ;
      Routes& operator=(Routes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->conflictCidrs_ == nullptr
        && this->cost_ == nullptr && this->destinationCidr_ == nullptr && this->nextHop_ == nullptr && this->portName_ == nullptr && this->routeProtocol_ == nullptr; };
      // conflictCidrs Field Functions 
      bool hasConflictCidrs() const { return this->conflictCidrs_ != nullptr;};
      void deleteConflictCidrs() { this->conflictCidrs_ = nullptr;};
      inline const vector<string> & getConflictCidrs() const { DARABONBA_PTR_GET_CONST(conflictCidrs_, vector<string>) };
      inline vector<string> getConflictCidrs() { DARABONBA_PTR_GET(conflictCidrs_, vector<string>) };
      inline Routes& setConflictCidrs(const vector<string> & conflictCidrs) { DARABONBA_PTR_SET_VALUE(conflictCidrs_, conflictCidrs) };
      inline Routes& setConflictCidrs(vector<string> && conflictCidrs) { DARABONBA_PTR_SET_RVALUE(conflictCidrs_, conflictCidrs) };


      // cost Field Functions 
      bool hasCost() const { return this->cost_ != nullptr;};
      void deleteCost() { this->cost_ = nullptr;};
      inline string getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, "") };
      inline Routes& setCost(string cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


      // destinationCidr Field Functions 
      bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
      void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
      inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
      inline Routes& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline Routes& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // portName Field Functions 
      bool hasPortName() const { return this->portName_ != nullptr;};
      void deletePortName() { this->portName_ = nullptr;};
      inline string getPortName() const { DARABONBA_PTR_GET_DEFAULT(portName_, "") };
      inline Routes& setPortName(string portName) { DARABONBA_PTR_SET_VALUE(portName_, portName) };


      // routeProtocol Field Functions 
      bool hasRouteProtocol() const { return this->routeProtocol_ != nullptr;};
      void deleteRouteProtocol() { this->routeProtocol_ = nullptr;};
      inline string getRouteProtocol() const { DARABONBA_PTR_GET_DEFAULT(routeProtocol_, "") };
      inline Routes& setRouteProtocol(string routeProtocol) { DARABONBA_PTR_SET_VALUE(routeProtocol_, routeProtocol) };


    protected:
      // The list of CIDR blocks that overlap with each other.
      shared_ptr<vector<string>> conflictCidrs_ {};
      // The cost of the route.
      // 
      // The number on the left side of the forward slash (/) indicates the administrative distance (AD) of the routing protocol.
      // 
      // The number on the right side of the forward slash (/) indicates the metric value.
      shared_ptr<string> cost_ {};
      // The destination CIDR block.
      shared_ptr<string> destinationCidr_ {};
      // The next hop.
      shared_ptr<string> nextHop_ {};
      // The name of the port. If the port name is -1, data is transferred through a VPN tunnel to Alibaba Cloud.
      shared_ptr<string> portName_ {};
      // The routing protocol. Valid values:
      // 
      // *   **STATIC**: a static routing protocol.
      // *   **OSPF**: the Open Shortest Path First (OSPF) dynamic routing protocol.
      // *   **BGP**: the Border Gateway Protocol (BGP) dynamic routing protocol.
      shared_ptr<string> routeProtocol_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->routes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagRouteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<DescribeSagRouteListResponseBody::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<DescribeSagRouteListResponseBody::Routes>) };
    inline vector<DescribeSagRouteListResponseBody::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<DescribeSagRouteListResponseBody::Routes>) };
    inline DescribeSagRouteListResponseBody& setRoutes(const vector<DescribeSagRouteListResponseBody::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline DescribeSagRouteListResponseBody& setRoutes(vector<DescribeSagRouteListResponseBody::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The routes.
    shared_ptr<vector<DescribeSagRouteListResponseBody::Routes>> routes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
