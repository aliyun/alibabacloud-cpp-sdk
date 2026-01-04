// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVCOROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVCOROUTEENTRIESRESPONSEBODY_HPP_
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
  class DescribeVcoRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVcoRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VcoRouteEntries, vcoRouteEntries_);
      DARABONBA_PTR_TO_JSON(VpnRouteCounts, vpnRouteCounts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVcoRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VcoRouteEntries, vcoRouteEntries_);
      DARABONBA_PTR_FROM_JSON(VpnRouteCounts, vpnRouteCounts_);
    };
    DescribeVcoRouteEntriesResponseBody() = default ;
    DescribeVcoRouteEntriesResponseBody(const DescribeVcoRouteEntriesResponseBody &) = default ;
    DescribeVcoRouteEntriesResponseBody(DescribeVcoRouteEntriesResponseBody &&) = default ;
    DescribeVcoRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVcoRouteEntriesResponseBody() = default ;
    DescribeVcoRouteEntriesResponseBody& operator=(const DescribeVcoRouteEntriesResponseBody &) = default ;
    DescribeVcoRouteEntriesResponseBody& operator=(DescribeVcoRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnRouteCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnRouteCounts& obj) { 
        DARABONBA_PTR_TO_JSON(RouteCount, routeCount_);
        DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
        DARABONBA_PTR_TO_JSON(Source, source_);
      };
      friend void from_json(const Darabonba::Json& j, VpnRouteCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteCount, routeCount_);
        DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
      };
      VpnRouteCounts() = default ;
      VpnRouteCounts(const VpnRouteCounts &) = default ;
      VpnRouteCounts(VpnRouteCounts &&) = default ;
      VpnRouteCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnRouteCounts() = default ;
      VpnRouteCounts& operator=(const VpnRouteCounts &) = default ;
      VpnRouteCounts& operator=(VpnRouteCounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->routeCount_ == nullptr
        && this->routeEntryType_ == nullptr && this->source_ == nullptr; };
      // routeCount Field Functions 
      bool hasRouteCount() const { return this->routeCount_ != nullptr;};
      void deleteRouteCount() { this->routeCount_ = nullptr;};
      inline int32_t getRouteCount() const { DARABONBA_PTR_GET_DEFAULT(routeCount_, 0) };
      inline VpnRouteCounts& setRouteCount(int32_t routeCount) { DARABONBA_PTR_SET_VALUE(routeCount_, routeCount) };


      // routeEntryType Field Functions 
      bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
      void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
      inline string getRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
      inline VpnRouteCounts& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline VpnRouteCounts& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    protected:
      // The number of route entries.
      shared_ptr<int32_t> routeCount_ {};
      // The route type. Valid values:
      // 
      // *   **custom**: destination-based route.
      // *   **bgp**: BGP route.
      shared_ptr<string> routeEntryType_ {};
      // The source of the BGP route. Valid values:
      // 
      // *   **CLOUD**: The current BGP route is learned by the IPsec connection from the transit router.
      // *   **VPN_BGP**: The current BGP route is learned by the IPsec connection from the data center.
      shared_ptr<string> source_ {};
    };

    class VcoRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VcoRouteEntries& obj) { 
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
      friend void from_json(const Darabonba::Json& j, VcoRouteEntries& obj) { 
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
      VcoRouteEntries() = default ;
      VcoRouteEntries(const VcoRouteEntries &) = default ;
      VcoRouteEntries(VcoRouteEntries &&) = default ;
      VcoRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VcoRouteEntries() = default ;
      VcoRouteEntries& operator=(const VcoRouteEntries &) = default ;
      VcoRouteEntries& operator=(VcoRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asPath_ == nullptr
        && this->community_ == nullptr && this->createTime_ == nullptr && this->nextHop_ == nullptr && this->nextHopTunnelIdList_ == nullptr && this->routeDest_ == nullptr
        && this->routeEntryType_ == nullptr && this->source_ == nullptr && this->state_ == nullptr && this->vpnConnectionId_ == nullptr && this->weight_ == nullptr; };
      // asPath Field Functions 
      bool hasAsPath() const { return this->asPath_ != nullptr;};
      void deleteAsPath() { this->asPath_ = nullptr;};
      inline string getAsPath() const { DARABONBA_PTR_GET_DEFAULT(asPath_, "") };
      inline VcoRouteEntries& setAsPath(string asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };


      // community Field Functions 
      bool hasCommunity() const { return this->community_ != nullptr;};
      void deleteCommunity() { this->community_ = nullptr;};
      inline string getCommunity() const { DARABONBA_PTR_GET_DEFAULT(community_, "") };
      inline VcoRouteEntries& setCommunity(string community) { DARABONBA_PTR_SET_VALUE(community_, community) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline VcoRouteEntries& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline VcoRouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // nextHopTunnelIdList Field Functions 
      bool hasNextHopTunnelIdList() const { return this->nextHopTunnelIdList_ != nullptr;};
      void deleteNextHopTunnelIdList() { this->nextHopTunnelIdList_ = nullptr;};
      inline const vector<string> & getNextHopTunnelIdList() const { DARABONBA_PTR_GET_CONST(nextHopTunnelIdList_, vector<string>) };
      inline vector<string> getNextHopTunnelIdList() { DARABONBA_PTR_GET(nextHopTunnelIdList_, vector<string>) };
      inline VcoRouteEntries& setNextHopTunnelIdList(const vector<string> & nextHopTunnelIdList) { DARABONBA_PTR_SET_VALUE(nextHopTunnelIdList_, nextHopTunnelIdList) };
      inline VcoRouteEntries& setNextHopTunnelIdList(vector<string> && nextHopTunnelIdList) { DARABONBA_PTR_SET_RVALUE(nextHopTunnelIdList_, nextHopTunnelIdList) };


      // routeDest Field Functions 
      bool hasRouteDest() const { return this->routeDest_ != nullptr;};
      void deleteRouteDest() { this->routeDest_ = nullptr;};
      inline string getRouteDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
      inline VcoRouteEntries& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


      // routeEntryType Field Functions 
      bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
      void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
      inline string getRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
      inline VcoRouteEntries& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline VcoRouteEntries& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline VcoRouteEntries& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // vpnConnectionId Field Functions 
      bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
      void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
      inline string getVpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
      inline VcoRouteEntries& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline VcoRouteEntries& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The list of autonomous system (AS) numbers that the BGP route goes through.
      shared_ptr<string> asPath_ {};
      // The community value carried by the BGP route.
      shared_ptr<string> community_ {};
      // The timestamp when the route was created.
      // 
      // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTime_ {};
      // The next hop of the route.
      shared_ptr<string> nextHop_ {};
      // The list of next hops.
      // 
      // > - This parameter is returned only by dual-tunnel IPsec connections.
      // > - This parameter is returned only when the tunnel status is **Phase 2 Negotiation Successful**.
      shared_ptr<vector<string>> nextHopTunnelIdList_ {};
      // The destination CIDR block of the route.
      shared_ptr<string> routeDest_ {};
      // The route type. Valid values:
      // 
      // *   **custom**: a destination-based route
      // *   **bgp**: a BGP route
      shared_ptr<string> routeEntryType_ {};
      // The source of the BGP route. Valid values:
      // 
      // *   **CLOUD**: indicates that the current BGP route is learned by the IPsec-VPN connection from the transit router.
      // *   **VPN_BGP**: indicates that the current BGP route is learned by the IPsec-VPN connection from the data center.
      shared_ptr<string> source_ {};
      // The status of the route.
      // 
      // *   **published**: indicates that the current route is advertised to the transit router.
      // *   **Active**: indicates that the current BGP route is available.
      shared_ptr<string> state_ {};
      // The ID of the IPsec-VPN connection.
      shared_ptr<string> vpnConnectionId_ {};
      // The weight of the destination-based route.
      // 
      // >  The current parameter has no effect.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vcoRouteEntries_ == nullptr && this->vpnRouteCounts_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVcoRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVcoRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVcoRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVcoRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vcoRouteEntries Field Functions 
    bool hasVcoRouteEntries() const { return this->vcoRouteEntries_ != nullptr;};
    void deleteVcoRouteEntries() { this->vcoRouteEntries_ = nullptr;};
    inline const vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries> & getVcoRouteEntries() const { DARABONBA_PTR_GET_CONST(vcoRouteEntries_, vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries>) };
    inline vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries> getVcoRouteEntries() { DARABONBA_PTR_GET(vcoRouteEntries_, vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries>) };
    inline DescribeVcoRouteEntriesResponseBody& setVcoRouteEntries(const vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries> & vcoRouteEntries) { DARABONBA_PTR_SET_VALUE(vcoRouteEntries_, vcoRouteEntries) };
    inline DescribeVcoRouteEntriesResponseBody& setVcoRouteEntries(vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries> && vcoRouteEntries) { DARABONBA_PTR_SET_RVALUE(vcoRouteEntries_, vcoRouteEntries) };


    // vpnRouteCounts Field Functions 
    bool hasVpnRouteCounts() const { return this->vpnRouteCounts_ != nullptr;};
    void deleteVpnRouteCounts() { this->vpnRouteCounts_ = nullptr;};
    inline const vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts> & getVpnRouteCounts() const { DARABONBA_PTR_GET_CONST(vpnRouteCounts_, vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts>) };
    inline vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts> getVpnRouteCounts() { DARABONBA_PTR_GET(vpnRouteCounts_, vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts>) };
    inline DescribeVcoRouteEntriesResponseBody& setVpnRouteCounts(const vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts> & vpnRouteCounts) { DARABONBA_PTR_SET_VALUE(vpnRouteCounts_, vpnRouteCounts) };
    inline DescribeVcoRouteEntriesResponseBody& setVpnRouteCounts(vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts> && vpnRouteCounts) { DARABONBA_PTR_SET_RVALUE(vpnRouteCounts_, vpnRouteCounts) };


  protected:
    // The number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The list of route entries.
    shared_ptr<vector<DescribeVcoRouteEntriesResponseBody::VcoRouteEntries>> vcoRouteEntries_ {};
    // The information on route entries of the dual-tunnel IPsec connection.
    // 
    // >  This parameter is returned only for IPsec connections in dual-tunnel mode.
    shared_ptr<vector<DescribeVcoRouteEntriesResponseBody::VpnRouteCounts>> vpnRouteCounts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
