// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNROUTEENTRIESRESPONSEBODY_HPP_
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
  class DescribeVpnRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(VpnRouteCounts, vpnRouteCounts_);
      DARABONBA_PTR_TO_JSON(VpnRouteEntries, vpnRouteEntries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(VpnRouteCounts, vpnRouteCounts_);
      DARABONBA_PTR_FROM_JSON(VpnRouteEntries, vpnRouteEntries_);
    };
    DescribeVpnRouteEntriesResponseBody() = default ;
    DescribeVpnRouteEntriesResponseBody(const DescribeVpnRouteEntriesResponseBody &) = default ;
    DescribeVpnRouteEntriesResponseBody(DescribeVpnRouteEntriesResponseBody &&) = default ;
    DescribeVpnRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnRouteEntriesResponseBody() = default ;
    DescribeVpnRouteEntriesResponseBody& operator=(const DescribeVpnRouteEntriesResponseBody &) = default ;
    DescribeVpnRouteEntriesResponseBody& operator=(DescribeVpnRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpnRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnRouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(VpnRouteEntry, vpnRouteEntry_);
      };
      friend void from_json(const Darabonba::Json& j, VpnRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(VpnRouteEntry, vpnRouteEntry_);
      };
      VpnRouteEntries() = default ;
      VpnRouteEntries(const VpnRouteEntries &) = default ;
      VpnRouteEntries(VpnRouteEntries &&) = default ;
      VpnRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpnRouteEntries() = default ;
      VpnRouteEntries& operator=(const VpnRouteEntries &) = default ;
      VpnRouteEntries& operator=(VpnRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpnRouteEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpnRouteEntry& obj) { 
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
        friend void from_json(const Darabonba::Json& j, VpnRouteEntry& obj) { 
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
        VpnRouteEntry() = default ;
        VpnRouteEntry(const VpnRouteEntry &) = default ;
        VpnRouteEntry(VpnRouteEntry &&) = default ;
        VpnRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpnRouteEntry() = default ;
        VpnRouteEntry& operator=(const VpnRouteEntry &) = default ;
        VpnRouteEntry& operator=(VpnRouteEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->asPath_ == nullptr
        && this->community_ == nullptr && this->createTime_ == nullptr && this->nextHop_ == nullptr && this->nextHopTunnelId_ == nullptr && this->routeDest_ == nullptr
        && this->routeEntryType_ == nullptr && this->source_ == nullptr && this->state_ == nullptr && this->vpnInstanceId_ == nullptr && this->weight_ == nullptr; };
        // asPath Field Functions 
        bool hasAsPath() const { return this->asPath_ != nullptr;};
        void deleteAsPath() { this->asPath_ = nullptr;};
        inline string getAsPath() const { DARABONBA_PTR_GET_DEFAULT(asPath_, "") };
        inline VpnRouteEntry& setAsPath(string asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };


        // community Field Functions 
        bool hasCommunity() const { return this->community_ != nullptr;};
        void deleteCommunity() { this->community_ = nullptr;};
        inline string getCommunity() const { DARABONBA_PTR_GET_DEFAULT(community_, "") };
        inline VpnRouteEntry& setCommunity(string community) { DARABONBA_PTR_SET_VALUE(community_, community) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline VpnRouteEntry& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // nextHop Field Functions 
        bool hasNextHop() const { return this->nextHop_ != nullptr;};
        void deleteNextHop() { this->nextHop_ = nullptr;};
        inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
        inline VpnRouteEntry& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


        // nextHopTunnelId Field Functions 
        bool hasNextHopTunnelId() const { return this->nextHopTunnelId_ != nullptr;};
        void deleteNextHopTunnelId() { this->nextHopTunnelId_ = nullptr;};
        inline string getNextHopTunnelId() const { DARABONBA_PTR_GET_DEFAULT(nextHopTunnelId_, "") };
        inline VpnRouteEntry& setNextHopTunnelId(string nextHopTunnelId) { DARABONBA_PTR_SET_VALUE(nextHopTunnelId_, nextHopTunnelId) };


        // routeDest Field Functions 
        bool hasRouteDest() const { return this->routeDest_ != nullptr;};
        void deleteRouteDest() { this->routeDest_ = nullptr;};
        inline string getRouteDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
        inline VpnRouteEntry& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


        // routeEntryType Field Functions 
        bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
        void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
        inline string getRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
        inline VpnRouteEntry& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline VpnRouteEntry& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline VpnRouteEntry& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // vpnInstanceId Field Functions 
        bool hasVpnInstanceId() const { return this->vpnInstanceId_ != nullptr;};
        void deleteVpnInstanceId() { this->vpnInstanceId_ = nullptr;};
        inline string getVpnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpnInstanceId_, "") };
        inline VpnRouteEntry& setVpnInstanceId(string vpnInstanceId) { DARABONBA_PTR_SET_VALUE(vpnInstanceId_, vpnInstanceId) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline VpnRouteEntry& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The AS path of the route entry.
        shared_ptr<string> asPath_ {};
        // The community attributes of the route entry.
        shared_ptr<string> community_ {};
        // The timestamp when the route entry was created.
        shared_ptr<int64_t> createTime_ {};
        // The next hop of the route entry.
        shared_ptr<string> nextHop_ {};
        // The ID of the tunnel associated with the next hop. 
        // 
        // 
        // > This parameter is returned only if the VPN gateway supports the dual-tunnel mode.
        shared_ptr<string> nextHopTunnelId_ {};
        // The destination CIDR block of the route entry.
        shared_ptr<string> routeDest_ {};
        // The type of the route entry. Valid values:
        // 
        // *   **Custom**: custom
        // *   **System**: system
        shared_ptr<string> routeEntryType_ {};
        // The source of the BGP route. Valid values:
        // 
        // *   **CLOUD**: advertised from a cloud service associated with the VPN gateway.
        // *   **VPN_BGP**: indicates that the current route is learned by using BGP of the VPN gateway. For example, the BGP is used to learn the route of the on-premises data center.
        shared_ptr<string> source_ {};
        // The status of the route entry. Valid values:
        // 
        // *   **published**: advertised
        // *   **normal**: not advertised
        shared_ptr<string> state_ {};
        // The ID of the VPN gateway.
        shared_ptr<string> vpnInstanceId_ {};
        // The weight of the route entry. Valid values: **0** and **100**.
        // 
        // *   **0**: a low priority
        // *   **100**: a high priority
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->vpnRouteEntry_ == nullptr; };
      // vpnRouteEntry Field Functions 
      bool hasVpnRouteEntry() const { return this->vpnRouteEntry_ != nullptr;};
      void deleteVpnRouteEntry() { this->vpnRouteEntry_ = nullptr;};
      inline const vector<VpnRouteEntries::VpnRouteEntry> & getVpnRouteEntry() const { DARABONBA_PTR_GET_CONST(vpnRouteEntry_, vector<VpnRouteEntries::VpnRouteEntry>) };
      inline vector<VpnRouteEntries::VpnRouteEntry> getVpnRouteEntry() { DARABONBA_PTR_GET(vpnRouteEntry_, vector<VpnRouteEntries::VpnRouteEntry>) };
      inline VpnRouteEntries& setVpnRouteEntry(const vector<VpnRouteEntries::VpnRouteEntry> & vpnRouteEntry) { DARABONBA_PTR_SET_VALUE(vpnRouteEntry_, vpnRouteEntry) };
      inline VpnRouteEntries& setVpnRouteEntry(vector<VpnRouteEntries::VpnRouteEntry> && vpnRouteEntry) { DARABONBA_PTR_SET_RVALUE(vpnRouteEntry_, vpnRouteEntry) };


    protected:
      shared_ptr<vector<VpnRouteEntries::VpnRouteEntry>> vpnRouteEntry_ {};
    };

    class VpnRouteCounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpnRouteCounts& obj) { 
        DARABONBA_PTR_TO_JSON(VpnRouteCount, vpnRouteCount_);
      };
      friend void from_json(const Darabonba::Json& j, VpnRouteCounts& obj) { 
        DARABONBA_PTR_FROM_JSON(VpnRouteCount, vpnRouteCount_);
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
      class VpnRouteCount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpnRouteCount& obj) { 
          DARABONBA_PTR_TO_JSON(RouteCount, routeCount_);
          DARABONBA_PTR_TO_JSON(RouteEntryType, routeEntryType_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, VpnRouteCount& obj) { 
          DARABONBA_PTR_FROM_JSON(RouteCount, routeCount_);
          DARABONBA_PTR_FROM_JSON(RouteEntryType, routeEntryType_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        VpnRouteCount() = default ;
        VpnRouteCount(const VpnRouteCount &) = default ;
        VpnRouteCount(VpnRouteCount &&) = default ;
        VpnRouteCount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpnRouteCount() = default ;
        VpnRouteCount& operator=(const VpnRouteCount &) = default ;
        VpnRouteCount& operator=(VpnRouteCount &&) = default ;
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
        inline VpnRouteCount& setRouteCount(int32_t routeCount) { DARABONBA_PTR_SET_VALUE(routeCount_, routeCount) };


        // routeEntryType Field Functions 
        bool hasRouteEntryType() const { return this->routeEntryType_ != nullptr;};
        void deleteRouteEntryType() { this->routeEntryType_ = nullptr;};
        inline string getRouteEntryType() const { DARABONBA_PTR_GET_DEFAULT(routeEntryType_, "") };
        inline VpnRouteCount& setRouteEntryType(string routeEntryType) { DARABONBA_PTR_SET_VALUE(routeEntryType_, routeEntryType) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline VpnRouteCount& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // The number of route entries.
        shared_ptr<int32_t> routeCount_ {};
        // The route type. Valid values:
        // 
        // *   **custom** (default): destination-based route.
        // *   **bgp** : BGP route entry.
        shared_ptr<string> routeEntryType_ {};
        // The source of the BGP route. Valid values:
        // 
        // *   **CLOUD**: advertised from a cloud service associated with the VPN gateway.
        // *   **VPN_BGP**: indicates that the current route is learned by using BGP of the VPN gateway. For example, the BGP is used to learn the route of the on-premises data center.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->vpnRouteCount_ == nullptr; };
      // vpnRouteCount Field Functions 
      bool hasVpnRouteCount() const { return this->vpnRouteCount_ != nullptr;};
      void deleteVpnRouteCount() { this->vpnRouteCount_ = nullptr;};
      inline const vector<VpnRouteCounts::VpnRouteCount> & getVpnRouteCount() const { DARABONBA_PTR_GET_CONST(vpnRouteCount_, vector<VpnRouteCounts::VpnRouteCount>) };
      inline vector<VpnRouteCounts::VpnRouteCount> getVpnRouteCount() { DARABONBA_PTR_GET(vpnRouteCount_, vector<VpnRouteCounts::VpnRouteCount>) };
      inline VpnRouteCounts& setVpnRouteCount(const vector<VpnRouteCounts::VpnRouteCount> & vpnRouteCount) { DARABONBA_PTR_SET_VALUE(vpnRouteCount_, vpnRouteCount) };
      inline VpnRouteCounts& setVpnRouteCount(vector<VpnRouteCounts::VpnRouteCount> && vpnRouteCount) { DARABONBA_PTR_SET_RVALUE(vpnRouteCount_, vpnRouteCount) };


    protected:
      shared_ptr<vector<VpnRouteCounts::VpnRouteCount>> vpnRouteCount_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->vpnRouteCounts_ == nullptr && this->vpnRouteEntries_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVpnRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVpnRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeVpnRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // vpnRouteCounts Field Functions 
    bool hasVpnRouteCounts() const { return this->vpnRouteCounts_ != nullptr;};
    void deleteVpnRouteCounts() { this->vpnRouteCounts_ = nullptr;};
    inline const DescribeVpnRouteEntriesResponseBody::VpnRouteCounts & getVpnRouteCounts() const { DARABONBA_PTR_GET_CONST(vpnRouteCounts_, DescribeVpnRouteEntriesResponseBody::VpnRouteCounts) };
    inline DescribeVpnRouteEntriesResponseBody::VpnRouteCounts getVpnRouteCounts() { DARABONBA_PTR_GET(vpnRouteCounts_, DescribeVpnRouteEntriesResponseBody::VpnRouteCounts) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteCounts(const DescribeVpnRouteEntriesResponseBody::VpnRouteCounts & vpnRouteCounts) { DARABONBA_PTR_SET_VALUE(vpnRouteCounts_, vpnRouteCounts) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteCounts(DescribeVpnRouteEntriesResponseBody::VpnRouteCounts && vpnRouteCounts) { DARABONBA_PTR_SET_RVALUE(vpnRouteCounts_, vpnRouteCounts) };


    // vpnRouteEntries Field Functions 
    bool hasVpnRouteEntries() const { return this->vpnRouteEntries_ != nullptr;};
    void deleteVpnRouteEntries() { this->vpnRouteEntries_ = nullptr;};
    inline const DescribeVpnRouteEntriesResponseBody::VpnRouteEntries & getVpnRouteEntries() const { DARABONBA_PTR_GET_CONST(vpnRouteEntries_, DescribeVpnRouteEntriesResponseBody::VpnRouteEntries) };
    inline DescribeVpnRouteEntriesResponseBody::VpnRouteEntries getVpnRouteEntries() { DARABONBA_PTR_GET(vpnRouteEntries_, DescribeVpnRouteEntriesResponseBody::VpnRouteEntries) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteEntries(const DescribeVpnRouteEntriesResponseBody::VpnRouteEntries & vpnRouteEntries) { DARABONBA_PTR_SET_VALUE(vpnRouteEntries_, vpnRouteEntries) };
    inline DescribeVpnRouteEntriesResponseBody& setVpnRouteEntries(DescribeVpnRouteEntriesResponseBody::VpnRouteEntries && vpnRouteEntries) { DARABONBA_PTR_SET_RVALUE(vpnRouteEntries_, vpnRouteEntries) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about route entries of the VPN gateway in dual-tunnel mode.
    // 
    // > This parameter is returned only if the VPN gateway supports IPsec-VPN connections in dual-tunnel mode.
    shared_ptr<DescribeVpnRouteEntriesResponseBody::VpnRouteCounts> vpnRouteCounts_ {};
    // The route entry list.
    shared_ptr<DescribeVpnRouteEntriesResponseBody::VpnRouteEntries> vpnRouteEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
