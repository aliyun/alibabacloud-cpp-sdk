// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTEENTRIESVPNROUTEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODYVPNROUTEENTRIESVPNROUTEENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& obj) { 
      DARABONBA_PTR_TO_JSON(AsPath, asPath_);
      DARABONBA_PTR_TO_JSON(Community, community_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(NextHopTunnelId, nextHopTunnelId_);
      DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VpnInstanceId, vpnInstanceId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
      DARABONBA_PTR_FROM_JSON(Community, community_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(NextHopTunnelId, nextHopTunnelId_);
      DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VpnInstanceId, vpnInstanceId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry(const DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry(DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry &&) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry() = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& operator=(const DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry &) = default ;
    DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& operator=(DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asPath_ != nullptr
        && this->community_ != nullptr && this->createTime_ != nullptr && this->nextHop_ != nullptr && this->nextHopTunnelId_ != nullptr && this->routeDest_ != nullptr
        && this->routeEntryType_ != nullptr && this->source_ != nullptr && this->state_ != nullptr && this->vpnInstanceId_ != nullptr && this->weight_ != nullptr; };
    // asPath Field Functions 
    bool hasAsPath() const { return this->asPath_ != nullptr;};
    void deleteAsPath() { this->asPath_ = nullptr;};
    inline string asPath() const { DARABONBA_PTR_GET_DEFAULT(asPath_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setAsPath(string asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };


    // community Field Functions 
    bool hasCommunity() const { return this->community_ != nullptr;};
    void deleteCommunity() { this->community_ = nullptr;};
    inline string community() const { DARABONBA_PTR_GET_DEFAULT(community_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setCommunity(string community) { DARABONBA_PTR_SET_VALUE(community_, community) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // nextHopTunnelId Field Functions 
    bool hasNextHopTunnelId() const { return this->nextHopTunnelId_ != nullptr;};
    void deleteNextHopTunnelId() { this->nextHopTunnelId_ = nullptr;};
    inline string nextHopTunnelId() const { DARABONBA_PTR_GET_DEFAULT(nextHopTunnelId_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setNextHopTunnelId(string nextHopTunnelId) { DARABONBA_PTR_SET_VALUE(nextHopTunnelId_, nextHopTunnelId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string routeDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeEntryType Field Functions 
    bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
    void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
    inline string routeEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // vpnInstanceId Field Functions 
    bool hasVpnInstanceId() const { return this->vpnInstanceId_ != nullptr;};
    void deleteVpnInstanceId() { this->vpnInstanceId_ = nullptr;};
    inline string vpnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpnInstanceId_, "") };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setVpnInstanceId(string vpnInstanceId) { DARABONBA_PTR_SET_VALUE(vpnInstanceId_, vpnInstanceId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeVpnRouteEntriesResponseBodyVpnRouteEntriesVpnRouteEntry& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The AS path of the route entry.
    std::shared_ptr<string> asPath_ = nullptr;
    // The community attributes of the route entry.
    std::shared_ptr<string> community_ = nullptr;
    // The timestamp when the route entry was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The next hop of the route entry.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The ID of the tunnel associated with the next hop. 
    // 
    // 
    // > This parameter is returned only if the VPN gateway supports the dual-tunnel mode.
    std::shared_ptr<string> nextHopTunnelId_ = nullptr;
    // The destination CIDR block of the route entry.
    std::shared_ptr<string> routeDest_ = nullptr;
    // The type of the route entry. Valid values:
    // 
    // *   **Custom**: custom
    // *   **System**: system
    std::shared_ptr<string> routeEntryType_ = nullptr;
    // The source of the BGP route. Valid values:
    // 
    // *   **CLOUD**: advertised from a cloud service associated with the VPN gateway.
    // *   **VPN_BGP**: indicates that the current route is learned by using BGP of the VPN gateway. For example, the BGP is used to learn the route of the on-premises data center.
    std::shared_ptr<string> source_ = nullptr;
    // The status of the route entry. Valid values:
    // 
    // *   **published**: advertised
    // *   **normal**: not advertised
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the VPN gateway.
    std::shared_ptr<string> vpnInstanceId_ = nullptr;
    // The weight of the route entry. Valid values: **0** and **100**.
    // 
    // *   **0**: a low priority
    // *   **100**: a high priority
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
