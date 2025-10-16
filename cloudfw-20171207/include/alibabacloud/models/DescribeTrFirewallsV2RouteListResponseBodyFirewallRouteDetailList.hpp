// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2ROUTELISTRESPONSEBODYFIREWALLROUTEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRFIREWALLSV2ROUTELISTRESPONSEBODYFIREWALLROUTEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(TrFirewallRouteDestination, trFirewallRouteDestination_);
      DARABONBA_PTR_TO_JSON(TrFirewallRouteNexthop, trFirewallRouteNexthop_);
      DARABONBA_PTR_TO_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
      DARABONBA_PTR_TO_JSON(TrFirewallRouteTableId, trFirewallRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(TrFirewallRouteDestination, trFirewallRouteDestination_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRouteNexthop, trFirewallRouteNexthop_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRoutePolicyId, trFirewallRoutePolicyId_);
      DARABONBA_PTR_FROM_JSON(TrFirewallRouteTableId, trFirewallRouteTableId_);
    };
    DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList() = default ;
    DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList(const DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList &) = default ;
    DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList(DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList &&) = default ;
    DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList() = default ;
    DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& operator=(const DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList &) = default ;
    DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& operator=(DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->trFirewallRouteDestination_ == nullptr
        && return this->trFirewallRouteNexthop_ == nullptr && return this->trFirewallRoutePolicyId_ == nullptr && return this->trFirewallRouteTableId_ == nullptr; };
    // trFirewallRouteDestination Field Functions 
    bool hasTrFirewallRouteDestination() const { return this->trFirewallRouteDestination_ != nullptr;};
    void deleteTrFirewallRouteDestination() { this->trFirewallRouteDestination_ = nullptr;};
    inline string trFirewallRouteDestination() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRouteDestination_, "") };
    inline DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& setTrFirewallRouteDestination(string trFirewallRouteDestination) { DARABONBA_PTR_SET_VALUE(trFirewallRouteDestination_, trFirewallRouteDestination) };


    // trFirewallRouteNexthop Field Functions 
    bool hasTrFirewallRouteNexthop() const { return this->trFirewallRouteNexthop_ != nullptr;};
    void deleteTrFirewallRouteNexthop() { this->trFirewallRouteNexthop_ = nullptr;};
    inline string trFirewallRouteNexthop() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRouteNexthop_, "") };
    inline DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& setTrFirewallRouteNexthop(string trFirewallRouteNexthop) { DARABONBA_PTR_SET_VALUE(trFirewallRouteNexthop_, trFirewallRouteNexthop) };


    // trFirewallRoutePolicyId Field Functions 
    bool hasTrFirewallRoutePolicyId() const { return this->trFirewallRoutePolicyId_ != nullptr;};
    void deleteTrFirewallRoutePolicyId() { this->trFirewallRoutePolicyId_ = nullptr;};
    inline string trFirewallRoutePolicyId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRoutePolicyId_, "") };
    inline DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& setTrFirewallRoutePolicyId(string trFirewallRoutePolicyId) { DARABONBA_PTR_SET_VALUE(trFirewallRoutePolicyId_, trFirewallRoutePolicyId) };


    // trFirewallRouteTableId Field Functions 
    bool hasTrFirewallRouteTableId() const { return this->trFirewallRouteTableId_ != nullptr;};
    void deleteTrFirewallRouteTableId() { this->trFirewallRouteTableId_ = nullptr;};
    inline string trFirewallRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(trFirewallRouteTableId_, "") };
    inline DescribeTrFirewallsV2RouteListResponseBodyFirewallRouteDetailList& setTrFirewallRouteTableId(string trFirewallRouteTableId) { DARABONBA_PTR_SET_VALUE(trFirewallRouteTableId_, trFirewallRouteTableId) };


  protected:
    // The destination address of the route.
    std::shared_ptr<string> trFirewallRouteDestination_ = nullptr;
    // The ID of the next hop for the route.
    std::shared_ptr<string> trFirewallRouteNexthop_ = nullptr;
    // The ID of the routing policy.
    std::shared_ptr<string> trFirewallRoutePolicyId_ = nullptr;
    // The ID of the route table to which the route entry belongs.
    std::shared_ptr<string> trFirewallRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
