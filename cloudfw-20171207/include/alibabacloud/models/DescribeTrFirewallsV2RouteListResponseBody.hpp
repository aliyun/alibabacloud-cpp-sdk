// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2ROUTELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2ROUTELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2RouteListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2RouteListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallRouteDetailList, firewallRouteDetailList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2RouteListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallRouteDetailList, firewallRouteDetailList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeTrFirewallsV2RouteListResponseBody() = default ;
    DescribeTrFirewallsV2RouteListResponseBody(const DescribeTrFirewallsV2RouteListResponseBody &) = default ;
    DescribeTrFirewallsV2RouteListResponseBody(DescribeTrFirewallsV2RouteListResponseBody &&) = default ;
    DescribeTrFirewallsV2RouteListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2RouteListResponseBody() = default ;
    DescribeTrFirewallsV2RouteListResponseBody& operator=(const DescribeTrFirewallsV2RouteListResponseBody &) = default ;
    DescribeTrFirewallsV2RouteListResponseBody& operator=(DescribeTrFirewallsV2RouteListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FirewallRouteDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FirewallRouteDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(TrFirewallRouteDestination, trFirewallRouteDestination_);
        DARABONBA_PTR_TO_JSON(TrFirewallRouteNexthop, trFirewallRouteNexthop_);
        DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
        DARABONBA_PTR_TO_JSON(TrFirewallRouteTableId, trFirewallRouteTableId_);
      };
      friend void from_json(const Darabonba::Json& j, FirewallRouteDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(TrFirewallRouteDestination, trFirewallRouteDestination_);
        DARABONBA_PTR_FROM_JSON(TrFirewallRouteNexthop, trFirewallRouteNexthop_);
        DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
        DARABONBA_PTR_FROM_JSON(TrFirewallRouteTableId, trFirewallRouteTableId_);
      };
      FirewallRouteDetailList() = default ;
      FirewallRouteDetailList(const FirewallRouteDetailList &) = default ;
      FirewallRouteDetailList(FirewallRouteDetailList &&) = default ;
      FirewallRouteDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FirewallRouteDetailList() = default ;
      FirewallRouteDetailList& operator=(const FirewallRouteDetailList &) = default ;
      FirewallRouteDetailList& operator=(FirewallRouteDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->trFirewallRouteDestination_ == nullptr
        && this->trFirewallRouteNexthop_ == nullptr && this->trFirewallRoutePolicyId_ == nullptr && this->trFirewallRouteTableId_ == nullptr; };
      // trFirewallRouteDestination Field Functions 
      bool hasTrFirewallRouteDestination() const { return this->trFirewallRouteDestination_ != nullptr;};
      void deleteTrFirewallRouteDestination() { this->trFirewallRouteDestination_ = nullptr;};
      inline string getTrFirewallRouteDestination() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRouteDestination_, "") };
      inline FirewallRouteDetailList& setTrFirewallRouteDestination(string trFirewallRouteDestination) { DARABONBA_PTR_SET_VALUE(trFirewallRouteDestination_, trFirewallRouteDestination) };


      // trFirewallRouteNexthop Field Functions 
      bool hasTrFirewallRouteNexthop() const { return this->trFirewallRouteNexthop_ != nullptr;};
      void deleteTrFirewallRouteNexthop() { this->trFirewallRouteNexthop_ = nullptr;};
      inline string getTrFirewallRouteNexthop() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRouteNexthop_, "") };
      inline FirewallRouteDetailList& setTrFirewallRouteNexthop(string trFirewallRouteNexthop) { DARABONBA_PTR_SET_VALUE(trFirewallRouteNexthop_, trFirewallRouteNexthop) };


      // trFirewallRoutePolicyId Field Functions 
      bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
      void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
      inline string getTrFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
      inline FirewallRouteDetailList& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


      // trFirewallRouteTableId Field Functions 
      bool hasTrFirewallRouteTableId() const { return this->trFirewallRouteTableId_ != nullptr;};
      void deleteTrFirewallRouteTableId() { this->trFirewallRouteTableId_ = nullptr;};
      inline string getTrFirewallRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRouteTableId_, "") };
      inline FirewallRouteDetailList& setTrFirewallRouteTableId(string trFirewallRouteTableId) { DARABONBA_PTR_SET_VALUE(trFirewallRouteTableId_, trFirewallRouteTableId) };


    protected:
      // The destination address of the route.
      shared_ptr<string> trFirewallRouteDestination_ {};
      // The ID of the next hop for the route.
      shared_ptr<string> trFirewallRouteNexthop_ {};
      // The ID of the routing policy.
      shared_ptr<string> trFirewallRoutePolicyId_ {};
      // The ID of the route table to which the route entry belongs.
      shared_ptr<string> trFirewallRouteTableId_ {};
    };

    virtual bool empty() const override { return this->firewallRouteDetailList_ == nullptr
        && this->requestId_ == nullptr; };
    // firewallRouteDetailList Field Functions 
    bool hasFirewallRouteDetailList() const { return this->firewallRouteDetailList_ != nullptr;};
    void deleteFirewallRouteDetailList() { this->firewallRouteDetailList_ = nullptr;};
    inline const vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList> & getFirewallRouteDetailList() const { DARABONBA_PTR_GET_CONST(firewallRouteDetailList_, vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList>) };
    inline vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList> getFirewallRouteDetailList() { DARABONBA_PTR_GET(firewallRouteDetailList_, vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList>) };
    inline DescribeTrFirewallsV2RouteListResponseBody& setFirewallRouteDetailList(const vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList> & firewallRouteDetailList) { DARABONBA_PTR_SET_VALUE(firewallRouteDetailList_, firewallRouteDetailList) };
    inline DescribeTrFirewallsV2RouteListResponseBody& setFirewallRouteDetailList(vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList> && firewallRouteDetailList) { DARABONBA_PTR_SET_RVALUE(firewallRouteDetailList_, firewallRouteDetailList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTrFirewallsV2RouteListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The route tables of Cloud Firewall.
    shared_ptr<vector<DescribeTrFirewallsV2RouteListResponseBody::FirewallRouteDetailList>> firewallRouteDetailList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
