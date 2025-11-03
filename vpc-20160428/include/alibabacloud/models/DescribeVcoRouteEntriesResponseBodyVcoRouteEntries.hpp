// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVCOROUTEENTRIESRESPONSEBODYVCOROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVCOROUTEENTRIESRESPONSEBODYVCOROUTEENTRIES_HPP_
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
  class DescribeVcoRouteEntriesResponseBodyVcoRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(AsPath, asPath_);
      DARABONBA_PTR_TO_JSON(Community, community_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(NextHopTunnelIdList, nextHopTunnelIdList_);
      DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
      DARABONBA_PTR_FROM_JSON(Community, community_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(NextHopTunnelIdList, nextHopTunnelIdList_);
      DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeVcoRouteEntriesResponseBodyVcoRouteEntries() = default ;
    DescribeVcoRouteEntriesResponseBodyVcoRouteEntries(const DescribeVcoRouteEntriesResponseBodyVcoRouteEntries &) = default ;
    DescribeVcoRouteEntriesResponseBodyVcoRouteEntries(DescribeVcoRouteEntriesResponseBodyVcoRouteEntries &&) = default ;
    DescribeVcoRouteEntriesResponseBodyVcoRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVcoRouteEntriesResponseBodyVcoRouteEntries() = default ;
    DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& operator=(const DescribeVcoRouteEntriesResponseBodyVcoRouteEntries &) = default ;
    DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& operator=(DescribeVcoRouteEntriesResponseBodyVcoRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asPath_ == nullptr
        && return this->community_ == nullptr && return this->createTime_ == nullptr && return this->nextHop_ == nullptr && return this->nextHopTunnelIdList_ == nullptr && return this->routeDest_ == nullptr
        && return this->routeEntryType_ == nullptr && return this->source_ == nullptr && return this->state_ == nullptr && return this->vpnConnectionId_ == nullptr && return this->weight_ == nullptr; };
    // asPath Field Functions 
    bool hasAsPath() const { return this->asPath_ != nullptr;};
    void deleteAsPath() { this->asPath_ = nullptr;};
    inline string asPath() const { DARABONBA_PTR_GET_DEFAULT(asPath_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setAsPath(string asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };


    // community Field Functions 
    bool hasCommunity() const { return this->community_ != nullptr;};
    void deleteCommunity() { this->community_ = nullptr;};
    inline string community() const { DARABONBA_PTR_GET_DEFAULT(community_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setCommunity(string community) { DARABONBA_PTR_SET_VALUE(community_, community) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // nextHopTunnelIdList Field Functions 
    bool hasNextHopTunnelIdList() const { return this->nextHopTunnelIdList_ != nullptr;};
    void deleteNextHopTunnelIdList() { this->nextHopTunnelIdList_ = nullptr;};
    inline const vector<string> & nextHopTunnelIdList() const { DARABONBA_PTR_GET_CONST(nextHopTunnelIdList_, vector<string>) };
    inline vector<string> nextHopTunnelIdList() { DARABONBA_PTR_GET(nextHopTunnelIdList_, vector<string>) };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setNextHopTunnelIdList(const vector<string> & nextHopTunnelIdList) { DARABONBA_PTR_SET_VALUE(nextHopTunnelIdList_, nextHopTunnelIdList) };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setNextHopTunnelIdList(vector<string> && nextHopTunnelIdList) { DARABONBA_PTR_SET_RVALUE(nextHopTunnelIdList_, nextHopTunnelIdList) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string routeDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeEntryType Field Functions 
    bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
    void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
    inline string routeEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeVcoRouteEntriesResponseBodyVcoRouteEntries& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The list of autonomous system (AS) numbers that the BGP route goes through.
    std::shared_ptr<string> asPath_ = nullptr;
    // The community value carried by the BGP route.
    std::shared_ptr<string> community_ = nullptr;
    // The timestamp when the route was created.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The next hop of the route.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The list of next hops.
    // 
    // > - This parameter is returned only by dual-tunnel IPsec connections.
    // > - This parameter is returned only when the tunnel status is **Phase 2 Negotiation Successful**.
    std::shared_ptr<vector<string>> nextHopTunnelIdList_ = nullptr;
    // The destination CIDR block of the route.
    std::shared_ptr<string> routeDest_ = nullptr;
    // The route type. Valid values:
    // 
    // *   **custom**: a destination-based route
    // *   **bgp**: a BGP route
    std::shared_ptr<string> routeEntryType_ = nullptr;
    // The source of the BGP route. Valid values:
    // 
    // *   **CLOUD**: indicates that the current BGP route is learned by the IPsec-VPN connection from the transit router.
    // *   **VPN_BGP**: indicates that the current BGP route is learned by the IPsec-VPN connection from the data center.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the route.
    // 
    // *   **published**: indicates that the current route is advertised to the transit router.
    // *   **Active**: indicates that the current BGP route is available.
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
    // The weight of the destination-based route.
    // 
    // >  The current parameter has no effect.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
